
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ipv4_ospf_oper_5.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ipv4_ospf_oper {

Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary::NeighborSummary()
    :
    neighbor_id{YType::str, "neighbor-id"},
    neighbor_address_xr{YType::str, "neighbor-address-xr"},
    neighbor_interface_name{YType::str, "neighbor-interface-name"},
    neighbor_dr_priority{YType::uint8, "neighbor-dr-priority"},
    neighbor_state{YType::enumeration, "neighbor-state"},
    dr_bdr_state{YType::enumeration, "dr-bdr-state"},
    neighbor_dead_timer{YType::uint32, "neighbor-dead-timer"},
    neighbor_up_time{YType::uint32, "neighbor-up-time"},
    neighbor_madj_interface{YType::boolean, "neighbor-madj-interface"}
    	,
    neighbor_bfd_information(std::make_shared<Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary::NeighborBfdInformation>())
{
    neighbor_bfd_information->parent = this;

    yang_name = "neighbor-summary"; yang_parent_name = "neighbor-detail"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary::~NeighborSummary()
{
}

bool Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary::has_data() const
{
    return neighbor_id.is_set
	|| neighbor_address_xr.is_set
	|| neighbor_interface_name.is_set
	|| neighbor_dr_priority.is_set
	|| neighbor_state.is_set
	|| dr_bdr_state.is_set
	|| neighbor_dead_timer.is_set
	|| neighbor_up_time.is_set
	|| neighbor_madj_interface.is_set
	|| (neighbor_bfd_information !=  nullptr && neighbor_bfd_information->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(neighbor_id.yfilter)
	|| ydk::is_set(neighbor_address_xr.yfilter)
	|| ydk::is_set(neighbor_interface_name.yfilter)
	|| ydk::is_set(neighbor_dr_priority.yfilter)
	|| ydk::is_set(neighbor_state.yfilter)
	|| ydk::is_set(dr_bdr_state.yfilter)
	|| ydk::is_set(neighbor_dead_timer.yfilter)
	|| ydk::is_set(neighbor_up_time.yfilter)
	|| ydk::is_set(neighbor_madj_interface.yfilter)
	|| (neighbor_bfd_information !=  nullptr && neighbor_bfd_information->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_id.is_set || is_set(neighbor_id.yfilter)) leaf_name_data.push_back(neighbor_id.get_name_leafdata());
    if (neighbor_address_xr.is_set || is_set(neighbor_address_xr.yfilter)) leaf_name_data.push_back(neighbor_address_xr.get_name_leafdata());
    if (neighbor_interface_name.is_set || is_set(neighbor_interface_name.yfilter)) leaf_name_data.push_back(neighbor_interface_name.get_name_leafdata());
    if (neighbor_dr_priority.is_set || is_set(neighbor_dr_priority.yfilter)) leaf_name_data.push_back(neighbor_dr_priority.get_name_leafdata());
    if (neighbor_state.is_set || is_set(neighbor_state.yfilter)) leaf_name_data.push_back(neighbor_state.get_name_leafdata());
    if (dr_bdr_state.is_set || is_set(dr_bdr_state.yfilter)) leaf_name_data.push_back(dr_bdr_state.get_name_leafdata());
    if (neighbor_dead_timer.is_set || is_set(neighbor_dead_timer.yfilter)) leaf_name_data.push_back(neighbor_dead_timer.get_name_leafdata());
    if (neighbor_up_time.is_set || is_set(neighbor_up_time.yfilter)) leaf_name_data.push_back(neighbor_up_time.get_name_leafdata());
    if (neighbor_madj_interface.is_set || is_set(neighbor_madj_interface.yfilter)) leaf_name_data.push_back(neighbor_madj_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor-bfd-information")
    {
        if(neighbor_bfd_information == nullptr)
        {
            neighbor_bfd_information = std::make_shared<Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary::NeighborBfdInformation>();
        }
        return neighbor_bfd_information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(neighbor_bfd_information != nullptr)
    {
        children["neighbor-bfd-information"] = neighbor_bfd_information;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "neighbor-id")
    {
        neighbor_id = value;
        neighbor_id.value_namespace = name_space;
        neighbor_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-address-xr")
    {
        neighbor_address_xr = value;
        neighbor_address_xr.value_namespace = name_space;
        neighbor_address_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-interface-name")
    {
        neighbor_interface_name = value;
        neighbor_interface_name.value_namespace = name_space;
        neighbor_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-dr-priority")
    {
        neighbor_dr_priority = value;
        neighbor_dr_priority.value_namespace = name_space;
        neighbor_dr_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-state")
    {
        neighbor_state = value;
        neighbor_state.value_namespace = name_space;
        neighbor_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dr-bdr-state")
    {
        dr_bdr_state = value;
        dr_bdr_state.value_namespace = name_space;
        dr_bdr_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-dead-timer")
    {
        neighbor_dead_timer = value;
        neighbor_dead_timer.value_namespace = name_space;
        neighbor_dead_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-up-time")
    {
        neighbor_up_time = value;
        neighbor_up_time.value_namespace = name_space;
        neighbor_up_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-madj-interface")
    {
        neighbor_madj_interface = value;
        neighbor_madj_interface.value_namespace = name_space;
        neighbor_madj_interface.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "neighbor-id")
    {
        neighbor_id.yfilter = yfilter;
    }
    if(value_path == "neighbor-address-xr")
    {
        neighbor_address_xr.yfilter = yfilter;
    }
    if(value_path == "neighbor-interface-name")
    {
        neighbor_interface_name.yfilter = yfilter;
    }
    if(value_path == "neighbor-dr-priority")
    {
        neighbor_dr_priority.yfilter = yfilter;
    }
    if(value_path == "neighbor-state")
    {
        neighbor_state.yfilter = yfilter;
    }
    if(value_path == "dr-bdr-state")
    {
        dr_bdr_state.yfilter = yfilter;
    }
    if(value_path == "neighbor-dead-timer")
    {
        neighbor_dead_timer.yfilter = yfilter;
    }
    if(value_path == "neighbor-up-time")
    {
        neighbor_up_time.yfilter = yfilter;
    }
    if(value_path == "neighbor-madj-interface")
    {
        neighbor_madj_interface.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-bfd-information" || name == "neighbor-id" || name == "neighbor-address-xr" || name == "neighbor-interface-name" || name == "neighbor-dr-priority" || name == "neighbor-state" || name == "dr-bdr-state" || name == "neighbor-dead-timer" || name == "neighbor-up-time" || name == "neighbor-madj-interface")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary::NeighborBfdInformation::NeighborBfdInformation()
    :
    bfd_intf_enable_mode{YType::uint32, "bfd-intf-enable-mode"},
    bfd_status_flag{YType::uint8, "bfd-status-flag"}
{

    yang_name = "neighbor-bfd-information"; yang_parent_name = "neighbor-summary"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary::NeighborBfdInformation::~NeighborBfdInformation()
{
}

bool Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary::NeighborBfdInformation::has_data() const
{
    return bfd_intf_enable_mode.is_set
	|| bfd_status_flag.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary::NeighborBfdInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bfd_intf_enable_mode.yfilter)
	|| ydk::is_set(bfd_status_flag.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary::NeighborBfdInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-bfd-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary::NeighborBfdInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bfd_intf_enable_mode.is_set || is_set(bfd_intf_enable_mode.yfilter)) leaf_name_data.push_back(bfd_intf_enable_mode.get_name_leafdata());
    if (bfd_status_flag.is_set || is_set(bfd_status_flag.yfilter)) leaf_name_data.push_back(bfd_status_flag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary::NeighborBfdInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary::NeighborBfdInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary::NeighborBfdInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bfd-intf-enable-mode")
    {
        bfd_intf_enable_mode = value;
        bfd_intf_enable_mode.value_namespace = name_space;
        bfd_intf_enable_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-status-flag")
    {
        bfd_status_flag = value;
        bfd_status_flag.value_namespace = name_space;
        bfd_status_flag.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary::NeighborBfdInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bfd-intf-enable-mode")
    {
        bfd_intf_enable_mode.yfilter = yfilter;
    }
    if(value_path == "bfd-status-flag")
    {
        bfd_status_flag.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary::NeighborBfdInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bfd-intf-enable-mode" || name == "bfd-status-flag")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborBfdInformation::NeighborBfdInformation()
    :
    bfd_intf_enable_mode{YType::uint32, "bfd-intf-enable-mode"},
    bfd_status_flag{YType::uint8, "bfd-status-flag"}
{

    yang_name = "neighbor-bfd-information"; yang_parent_name = "neighbor-detail"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborBfdInformation::~NeighborBfdInformation()
{
}

bool Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborBfdInformation::has_data() const
{
    return bfd_intf_enable_mode.is_set
	|| bfd_status_flag.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborBfdInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bfd_intf_enable_mode.yfilter)
	|| ydk::is_set(bfd_status_flag.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborBfdInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-bfd-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborBfdInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bfd_intf_enable_mode.is_set || is_set(bfd_intf_enable_mode.yfilter)) leaf_name_data.push_back(bfd_intf_enable_mode.get_name_leafdata());
    if (bfd_status_flag.is_set || is_set(bfd_status_flag.yfilter)) leaf_name_data.push_back(bfd_status_flag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborBfdInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborBfdInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborBfdInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bfd-intf-enable-mode")
    {
        bfd_intf_enable_mode = value;
        bfd_intf_enable_mode.value_namespace = name_space;
        bfd_intf_enable_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-status-flag")
    {
        bfd_status_flag = value;
        bfd_status_flag.value_namespace = name_space;
        bfd_status_flag.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborBfdInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bfd-intf-enable-mode")
    {
        bfd_intf_enable_mode.yfilter = yfilter;
    }
    if(value_path == "bfd-status-flag")
    {
        bfd_status_flag.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborBfdInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bfd-intf-enable-mode" || name == "bfd-status-flag")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborRetransmissionInformation::NeighborRetransmissionInformation()
    :
    dbd_retransmission_count{YType::uint32, "dbd-retransmission-count"},
    dbd_retransmission_total_count{YType::uint32, "dbd-retransmission-total-count"},
    area_flooding_index{YType::uint32, "area-flooding-index"},
    as_flood_index{YType::uint32, "as-flood-index"},
    neighbor_retransmission_count{YType::uint32, "neighbor-retransmission-count"},
    number_of_retransmissions{YType::uint32, "number-of-retransmissions"},
    area_first_flood_information{YType::uint32, "area-first-flood-information"},
    area_first_flood_information_index{YType::uint32, "area-first-flood-information-index"},
    as_first_flood_information{YType::uint32, "as-first-flood-information"},
    as_first_flood_information_index{YType::uint32, "as-first-flood-information-index"},
    area_next_flood_information{YType::uint32, "area-next-flood-information"},
    area_next_flood_information_index{YType::uint32, "area-next-flood-information-index"},
    as_next_flood_information{YType::uint32, "as-next-flood-information"},
    as_next_flood_information_index{YType::uint32, "as-next-flood-information-index"},
    last_retransmission_length{YType::uint32, "last-retransmission-length"},
    maximum_retransmission_length{YType::uint32, "maximum-retransmission-length"},
    last_retransmission_time{YType::uint32, "last-retransmission-time"},
    maximum_retransmission_time{YType::uint32, "maximum-retransmission-time"},
    lsa_retransmission_timer{YType::uint32, "lsa-retransmission-timer"}
{

    yang_name = "neighbor-retransmission-information"; yang_parent_name = "neighbor-detail"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborRetransmissionInformation::~NeighborRetransmissionInformation()
{
}

bool Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborRetransmissionInformation::has_data() const
{
    return dbd_retransmission_count.is_set
	|| dbd_retransmission_total_count.is_set
	|| area_flooding_index.is_set
	|| as_flood_index.is_set
	|| neighbor_retransmission_count.is_set
	|| number_of_retransmissions.is_set
	|| area_first_flood_information.is_set
	|| area_first_flood_information_index.is_set
	|| as_first_flood_information.is_set
	|| as_first_flood_information_index.is_set
	|| area_next_flood_information.is_set
	|| area_next_flood_information_index.is_set
	|| as_next_flood_information.is_set
	|| as_next_flood_information_index.is_set
	|| last_retransmission_length.is_set
	|| maximum_retransmission_length.is_set
	|| last_retransmission_time.is_set
	|| maximum_retransmission_time.is_set
	|| lsa_retransmission_timer.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborRetransmissionInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dbd_retransmission_count.yfilter)
	|| ydk::is_set(dbd_retransmission_total_count.yfilter)
	|| ydk::is_set(area_flooding_index.yfilter)
	|| ydk::is_set(as_flood_index.yfilter)
	|| ydk::is_set(neighbor_retransmission_count.yfilter)
	|| ydk::is_set(number_of_retransmissions.yfilter)
	|| ydk::is_set(area_first_flood_information.yfilter)
	|| ydk::is_set(area_first_flood_information_index.yfilter)
	|| ydk::is_set(as_first_flood_information.yfilter)
	|| ydk::is_set(as_first_flood_information_index.yfilter)
	|| ydk::is_set(area_next_flood_information.yfilter)
	|| ydk::is_set(area_next_flood_information_index.yfilter)
	|| ydk::is_set(as_next_flood_information.yfilter)
	|| ydk::is_set(as_next_flood_information_index.yfilter)
	|| ydk::is_set(last_retransmission_length.yfilter)
	|| ydk::is_set(maximum_retransmission_length.yfilter)
	|| ydk::is_set(last_retransmission_time.yfilter)
	|| ydk::is_set(maximum_retransmission_time.yfilter)
	|| ydk::is_set(lsa_retransmission_timer.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborRetransmissionInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-retransmission-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborRetransmissionInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dbd_retransmission_count.is_set || is_set(dbd_retransmission_count.yfilter)) leaf_name_data.push_back(dbd_retransmission_count.get_name_leafdata());
    if (dbd_retransmission_total_count.is_set || is_set(dbd_retransmission_total_count.yfilter)) leaf_name_data.push_back(dbd_retransmission_total_count.get_name_leafdata());
    if (area_flooding_index.is_set || is_set(area_flooding_index.yfilter)) leaf_name_data.push_back(area_flooding_index.get_name_leafdata());
    if (as_flood_index.is_set || is_set(as_flood_index.yfilter)) leaf_name_data.push_back(as_flood_index.get_name_leafdata());
    if (neighbor_retransmission_count.is_set || is_set(neighbor_retransmission_count.yfilter)) leaf_name_data.push_back(neighbor_retransmission_count.get_name_leafdata());
    if (number_of_retransmissions.is_set || is_set(number_of_retransmissions.yfilter)) leaf_name_data.push_back(number_of_retransmissions.get_name_leafdata());
    if (area_first_flood_information.is_set || is_set(area_first_flood_information.yfilter)) leaf_name_data.push_back(area_first_flood_information.get_name_leafdata());
    if (area_first_flood_information_index.is_set || is_set(area_first_flood_information_index.yfilter)) leaf_name_data.push_back(area_first_flood_information_index.get_name_leafdata());
    if (as_first_flood_information.is_set || is_set(as_first_flood_information.yfilter)) leaf_name_data.push_back(as_first_flood_information.get_name_leafdata());
    if (as_first_flood_information_index.is_set || is_set(as_first_flood_information_index.yfilter)) leaf_name_data.push_back(as_first_flood_information_index.get_name_leafdata());
    if (area_next_flood_information.is_set || is_set(area_next_flood_information.yfilter)) leaf_name_data.push_back(area_next_flood_information.get_name_leafdata());
    if (area_next_flood_information_index.is_set || is_set(area_next_flood_information_index.yfilter)) leaf_name_data.push_back(area_next_flood_information_index.get_name_leafdata());
    if (as_next_flood_information.is_set || is_set(as_next_flood_information.yfilter)) leaf_name_data.push_back(as_next_flood_information.get_name_leafdata());
    if (as_next_flood_information_index.is_set || is_set(as_next_flood_information_index.yfilter)) leaf_name_data.push_back(as_next_flood_information_index.get_name_leafdata());
    if (last_retransmission_length.is_set || is_set(last_retransmission_length.yfilter)) leaf_name_data.push_back(last_retransmission_length.get_name_leafdata());
    if (maximum_retransmission_length.is_set || is_set(maximum_retransmission_length.yfilter)) leaf_name_data.push_back(maximum_retransmission_length.get_name_leafdata());
    if (last_retransmission_time.is_set || is_set(last_retransmission_time.yfilter)) leaf_name_data.push_back(last_retransmission_time.get_name_leafdata());
    if (maximum_retransmission_time.is_set || is_set(maximum_retransmission_time.yfilter)) leaf_name_data.push_back(maximum_retransmission_time.get_name_leafdata());
    if (lsa_retransmission_timer.is_set || is_set(lsa_retransmission_timer.yfilter)) leaf_name_data.push_back(lsa_retransmission_timer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborRetransmissionInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborRetransmissionInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborRetransmissionInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dbd-retransmission-count")
    {
        dbd_retransmission_count = value;
        dbd_retransmission_count.value_namespace = name_space;
        dbd_retransmission_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dbd-retransmission-total-count")
    {
        dbd_retransmission_total_count = value;
        dbd_retransmission_total_count.value_namespace = name_space;
        dbd_retransmission_total_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-flooding-index")
    {
        area_flooding_index = value;
        area_flooding_index.value_namespace = name_space;
        area_flooding_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-flood-index")
    {
        as_flood_index = value;
        as_flood_index.value_namespace = name_space;
        as_flood_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-retransmission-count")
    {
        neighbor_retransmission_count = value;
        neighbor_retransmission_count.value_namespace = name_space;
        neighbor_retransmission_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-retransmissions")
    {
        number_of_retransmissions = value;
        number_of_retransmissions.value_namespace = name_space;
        number_of_retransmissions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-first-flood-information")
    {
        area_first_flood_information = value;
        area_first_flood_information.value_namespace = name_space;
        area_first_flood_information.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-first-flood-information-index")
    {
        area_first_flood_information_index = value;
        area_first_flood_information_index.value_namespace = name_space;
        area_first_flood_information_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-first-flood-information")
    {
        as_first_flood_information = value;
        as_first_flood_information.value_namespace = name_space;
        as_first_flood_information.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-first-flood-information-index")
    {
        as_first_flood_information_index = value;
        as_first_flood_information_index.value_namespace = name_space;
        as_first_flood_information_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-next-flood-information")
    {
        area_next_flood_information = value;
        area_next_flood_information.value_namespace = name_space;
        area_next_flood_information.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-next-flood-information-index")
    {
        area_next_flood_information_index = value;
        area_next_flood_information_index.value_namespace = name_space;
        area_next_flood_information_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-next-flood-information")
    {
        as_next_flood_information = value;
        as_next_flood_information.value_namespace = name_space;
        as_next_flood_information.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-next-flood-information-index")
    {
        as_next_flood_information_index = value;
        as_next_flood_information_index.value_namespace = name_space;
        as_next_flood_information_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-retransmission-length")
    {
        last_retransmission_length = value;
        last_retransmission_length.value_namespace = name_space;
        last_retransmission_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-retransmission-length")
    {
        maximum_retransmission_length = value;
        maximum_retransmission_length.value_namespace = name_space;
        maximum_retransmission_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-retransmission-time")
    {
        last_retransmission_time = value;
        last_retransmission_time.value_namespace = name_space;
        last_retransmission_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-retransmission-time")
    {
        maximum_retransmission_time = value;
        maximum_retransmission_time.value_namespace = name_space;
        maximum_retransmission_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-retransmission-timer")
    {
        lsa_retransmission_timer = value;
        lsa_retransmission_timer.value_namespace = name_space;
        lsa_retransmission_timer.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborRetransmissionInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dbd-retransmission-count")
    {
        dbd_retransmission_count.yfilter = yfilter;
    }
    if(value_path == "dbd-retransmission-total-count")
    {
        dbd_retransmission_total_count.yfilter = yfilter;
    }
    if(value_path == "area-flooding-index")
    {
        area_flooding_index.yfilter = yfilter;
    }
    if(value_path == "as-flood-index")
    {
        as_flood_index.yfilter = yfilter;
    }
    if(value_path == "neighbor-retransmission-count")
    {
        neighbor_retransmission_count.yfilter = yfilter;
    }
    if(value_path == "number-of-retransmissions")
    {
        number_of_retransmissions.yfilter = yfilter;
    }
    if(value_path == "area-first-flood-information")
    {
        area_first_flood_information.yfilter = yfilter;
    }
    if(value_path == "area-first-flood-information-index")
    {
        area_first_flood_information_index.yfilter = yfilter;
    }
    if(value_path == "as-first-flood-information")
    {
        as_first_flood_information.yfilter = yfilter;
    }
    if(value_path == "as-first-flood-information-index")
    {
        as_first_flood_information_index.yfilter = yfilter;
    }
    if(value_path == "area-next-flood-information")
    {
        area_next_flood_information.yfilter = yfilter;
    }
    if(value_path == "area-next-flood-information-index")
    {
        area_next_flood_information_index.yfilter = yfilter;
    }
    if(value_path == "as-next-flood-information")
    {
        as_next_flood_information.yfilter = yfilter;
    }
    if(value_path == "as-next-flood-information-index")
    {
        as_next_flood_information_index.yfilter = yfilter;
    }
    if(value_path == "last-retransmission-length")
    {
        last_retransmission_length.yfilter = yfilter;
    }
    if(value_path == "maximum-retransmission-length")
    {
        maximum_retransmission_length.yfilter = yfilter;
    }
    if(value_path == "last-retransmission-time")
    {
        last_retransmission_time.yfilter = yfilter;
    }
    if(value_path == "maximum-retransmission-time")
    {
        maximum_retransmission_time.yfilter = yfilter;
    }
    if(value_path == "lsa-retransmission-timer")
    {
        lsa_retransmission_timer.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborRetransmissionInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dbd-retransmission-count" || name == "dbd-retransmission-total-count" || name == "area-flooding-index" || name == "as-flood-index" || name == "neighbor-retransmission-count" || name == "number-of-retransmissions" || name == "area-first-flood-information" || name == "area-first-flood-information-index" || name == "as-first-flood-information" || name == "as-first-flood-information-index" || name == "area-next-flood-information" || name == "area-next-flood-information-index" || name == "as-next-flood-information" || name == "as-next-flood-information-index" || name == "last-retransmission-length" || name == "maximum-retransmission-length" || name == "last-retransmission-time" || name == "maximum-retransmission-time" || name == "lsa-retransmission-timer")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteInformation()
    :
    backup_routes(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes>())
	,multicast_intact_route_table(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable>())
	,multicast_intact_backup_routes(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes>())
	,summary_information(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::SummaryInformation>())
	,connected_routes(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes>())
	,local_routes(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes>())
	,route_areas(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas>())
	,route_table(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable>())
	,external_routes(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes>())
{
    backup_routes->parent = this;
    multicast_intact_route_table->parent = this;
    multicast_intact_backup_routes->parent = this;
    summary_information->parent = this;
    connected_routes->parent = this;
    local_routes->parent = this;
    route_areas->parent = this;
    route_table->parent = this;
    external_routes->parent = this;

    yang_name = "route-information"; yang_parent_name = "default-vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::~RouteInformation()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::has_data() const
{
    return (backup_routes !=  nullptr && backup_routes->has_data())
	|| (multicast_intact_route_table !=  nullptr && multicast_intact_route_table->has_data())
	|| (multicast_intact_backup_routes !=  nullptr && multicast_intact_backup_routes->has_data())
	|| (summary_information !=  nullptr && summary_information->has_data())
	|| (connected_routes !=  nullptr && connected_routes->has_data())
	|| (local_routes !=  nullptr && local_routes->has_data())
	|| (route_areas !=  nullptr && route_areas->has_data())
	|| (route_table !=  nullptr && route_table->has_data())
	|| (external_routes !=  nullptr && external_routes->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::has_operation() const
{
    return is_set(yfilter)
	|| (backup_routes !=  nullptr && backup_routes->has_operation())
	|| (multicast_intact_route_table !=  nullptr && multicast_intact_route_table->has_operation())
	|| (multicast_intact_backup_routes !=  nullptr && multicast_intact_backup_routes->has_operation())
	|| (summary_information !=  nullptr && summary_information->has_operation())
	|| (connected_routes !=  nullptr && connected_routes->has_operation())
	|| (local_routes !=  nullptr && local_routes->has_operation())
	|| (route_areas !=  nullptr && route_areas->has_operation())
	|| (route_table !=  nullptr && route_table->has_operation())
	|| (external_routes !=  nullptr && external_routes->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup-routes")
    {
        if(backup_routes == nullptr)
        {
            backup_routes = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes>();
        }
        return backup_routes;
    }

    if(child_yang_name == "multicast-intact-route-table")
    {
        if(multicast_intact_route_table == nullptr)
        {
            multicast_intact_route_table = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable>();
        }
        return multicast_intact_route_table;
    }

    if(child_yang_name == "multicast-intact-backup-routes")
    {
        if(multicast_intact_backup_routes == nullptr)
        {
            multicast_intact_backup_routes = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes>();
        }
        return multicast_intact_backup_routes;
    }

    if(child_yang_name == "summary-information")
    {
        if(summary_information == nullptr)
        {
            summary_information = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::SummaryInformation>();
        }
        return summary_information;
    }

    if(child_yang_name == "connected-routes")
    {
        if(connected_routes == nullptr)
        {
            connected_routes = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes>();
        }
        return connected_routes;
    }

    if(child_yang_name == "local-routes")
    {
        if(local_routes == nullptr)
        {
            local_routes = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes>();
        }
        return local_routes;
    }

    if(child_yang_name == "route-areas")
    {
        if(route_areas == nullptr)
        {
            route_areas = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas>();
        }
        return route_areas;
    }

    if(child_yang_name == "route-table")
    {
        if(route_table == nullptr)
        {
            route_table = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable>();
        }
        return route_table;
    }

    if(child_yang_name == "external-routes")
    {
        if(external_routes == nullptr)
        {
            external_routes = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes>();
        }
        return external_routes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(backup_routes != nullptr)
    {
        children["backup-routes"] = backup_routes;
    }

    if(multicast_intact_route_table != nullptr)
    {
        children["multicast-intact-route-table"] = multicast_intact_route_table;
    }

    if(multicast_intact_backup_routes != nullptr)
    {
        children["multicast-intact-backup-routes"] = multicast_intact_backup_routes;
    }

    if(summary_information != nullptr)
    {
        children["summary-information"] = summary_information;
    }

    if(connected_routes != nullptr)
    {
        children["connected-routes"] = connected_routes;
    }

    if(local_routes != nullptr)
    {
        children["local-routes"] = local_routes;
    }

    if(route_areas != nullptr)
    {
        children["route-areas"] = route_areas;
    }

    if(route_table != nullptr)
    {
        children["route-table"] = route_table;
    }

    if(external_routes != nullptr)
    {
        children["external-routes"] = external_routes;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backup-routes" || name == "multicast-intact-route-table" || name == "multicast-intact-backup-routes" || name == "summary-information" || name == "connected-routes" || name == "local-routes" || name == "route-areas" || name == "route-table" || name == "external-routes")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoutes()
{

    yang_name = "backup-routes"; yang_parent_name = "route-information"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::~BackupRoutes()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::has_data() const
{
    for (std::size_t index=0; index<backup_route.size(); index++)
    {
        if(backup_route[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::has_operation() const
{
    for (std::size_t index=0; index<backup_route.size(); index++)
    {
        if(backup_route[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-routes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup-route")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute>();
        c->parent = this;
        backup_route.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : backup_route)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backup-route")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::BackupRoute()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint32, "prefix-length"},
    route_prefix{YType::str, "route-prefix"},
    route_prefix_length{YType::uint32, "route-prefix-length"},
    route_metric{YType::uint32, "route-metric"},
    route_type{YType::enumeration, "route-type"},
    route_connected{YType::boolean, "route-connected"}
    	,
    route_info(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo>())
{
    route_info->parent = this;

    yang_name = "backup-route"; yang_parent_name = "backup-routes"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::~BackupRoute()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::has_data() const
{
    for (std::size_t index=0; index<route_path.size(); index++)
    {
        if(route_path[index]->has_data())
            return true;
    }
    return prefix.is_set
	|| prefix_length.is_set
	|| route_prefix.is_set
	|| route_prefix_length.is_set
	|| route_metric.is_set
	|| route_type.is_set
	|| route_connected.is_set
	|| (route_info !=  nullptr && route_info->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::has_operation() const
{
    for (std::size_t index=0; index<route_path.size(); index++)
    {
        if(route_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(route_prefix.yfilter)
	|| ydk::is_set(route_prefix_length.yfilter)
	|| ydk::is_set(route_metric.yfilter)
	|| ydk::is_set(route_type.yfilter)
	|| ydk::is_set(route_connected.yfilter)
	|| (route_info !=  nullptr && route_info->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-route";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (route_prefix.is_set || is_set(route_prefix.yfilter)) leaf_name_data.push_back(route_prefix.get_name_leafdata());
    if (route_prefix_length.is_set || is_set(route_prefix_length.yfilter)) leaf_name_data.push_back(route_prefix_length.get_name_leafdata());
    if (route_metric.is_set || is_set(route_metric.yfilter)) leaf_name_data.push_back(route_metric.get_name_leafdata());
    if (route_type.is_set || is_set(route_type.yfilter)) leaf_name_data.push_back(route_type.get_name_leafdata());
    if (route_connected.is_set || is_set(route_connected.yfilter)) leaf_name_data.push_back(route_connected.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-info")
    {
        if(route_info == nullptr)
        {
            route_info = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo>();
        }
        return route_info;
    }

    if(child_yang_name == "route-path")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath>();
        c->parent = this;
        route_path.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(route_info != nullptr)
    {
        children["route-info"] = route_info;
    }

    count = 0;
    for (auto const & c : route_path)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-prefix")
    {
        route_prefix = value;
        route_prefix.value_namespace = name_space;
        route_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-prefix-length")
    {
        route_prefix_length = value;
        route_prefix_length.value_namespace = name_space;
        route_prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-metric")
    {
        route_metric = value;
        route_metric.value_namespace = name_space;
        route_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-type")
    {
        route_type = value;
        route_type.value_namespace = name_space;
        route_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-connected")
    {
        route_connected = value;
        route_connected.value_namespace = name_space;
        route_connected.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "route-prefix")
    {
        route_prefix.yfilter = yfilter;
    }
    if(value_path == "route-prefix-length")
    {
        route_prefix_length.yfilter = yfilter;
    }
    if(value_path == "route-metric")
    {
        route_metric.yfilter = yfilter;
    }
    if(value_path == "route-type")
    {
        route_type.yfilter = yfilter;
    }
    if(value_path == "route-connected")
    {
        route_connected.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-info" || name == "route-path" || name == "prefix" || name == "prefix-length" || name == "route-prefix" || name == "route-prefix-length" || name == "route-metric" || name == "route-type" || name == "route-connected")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::RouteInfo()
    :
    route_area_id{YType::uint32, "route-area-id"},
    route_te_metric{YType::uint32, "route-te-metric"},
    route_rib_version{YType::uint32, "route-rib-version"},
    route_spf_version{YType::uint64, "route-spf-version"},
    route_forward_distance{YType::uint32, "route-forward-distance"},
    route_source{YType::uint16, "route-source"},
    route_spf_priority{YType::uint8, "route-spf-priority"},
    route_auto_excluded{YType::boolean, "route-auto-excluded"},
    route_srte_prefix_registered{YType::boolean, "route-srte-prefix-registered"},
    route_srte_nbr_registered{YType::uint16, "route-srte-nbr-registered"}
    	,
    route_update_time(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::RouteUpdateTime>())
	,route_fail_time(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::RouteFailTime>())
{
    route_update_time->parent = this;
    route_fail_time->parent = this;

    yang_name = "route-info"; yang_parent_name = "backup-route"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::~RouteInfo()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::has_data() const
{
    return route_area_id.is_set
	|| route_te_metric.is_set
	|| route_rib_version.is_set
	|| route_spf_version.is_set
	|| route_forward_distance.is_set
	|| route_source.is_set
	|| route_spf_priority.is_set
	|| route_auto_excluded.is_set
	|| route_srte_prefix_registered.is_set
	|| route_srte_nbr_registered.is_set
	|| (route_update_time !=  nullptr && route_update_time->has_data())
	|| (route_fail_time !=  nullptr && route_fail_time->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_area_id.yfilter)
	|| ydk::is_set(route_te_metric.yfilter)
	|| ydk::is_set(route_rib_version.yfilter)
	|| ydk::is_set(route_spf_version.yfilter)
	|| ydk::is_set(route_forward_distance.yfilter)
	|| ydk::is_set(route_source.yfilter)
	|| ydk::is_set(route_spf_priority.yfilter)
	|| ydk::is_set(route_auto_excluded.yfilter)
	|| ydk::is_set(route_srte_prefix_registered.yfilter)
	|| ydk::is_set(route_srte_nbr_registered.yfilter)
	|| (route_update_time !=  nullptr && route_update_time->has_operation())
	|| (route_fail_time !=  nullptr && route_fail_time->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_area_id.is_set || is_set(route_area_id.yfilter)) leaf_name_data.push_back(route_area_id.get_name_leafdata());
    if (route_te_metric.is_set || is_set(route_te_metric.yfilter)) leaf_name_data.push_back(route_te_metric.get_name_leafdata());
    if (route_rib_version.is_set || is_set(route_rib_version.yfilter)) leaf_name_data.push_back(route_rib_version.get_name_leafdata());
    if (route_spf_version.is_set || is_set(route_spf_version.yfilter)) leaf_name_data.push_back(route_spf_version.get_name_leafdata());
    if (route_forward_distance.is_set || is_set(route_forward_distance.yfilter)) leaf_name_data.push_back(route_forward_distance.get_name_leafdata());
    if (route_source.is_set || is_set(route_source.yfilter)) leaf_name_data.push_back(route_source.get_name_leafdata());
    if (route_spf_priority.is_set || is_set(route_spf_priority.yfilter)) leaf_name_data.push_back(route_spf_priority.get_name_leafdata());
    if (route_auto_excluded.is_set || is_set(route_auto_excluded.yfilter)) leaf_name_data.push_back(route_auto_excluded.get_name_leafdata());
    if (route_srte_prefix_registered.is_set || is_set(route_srte_prefix_registered.yfilter)) leaf_name_data.push_back(route_srte_prefix_registered.get_name_leafdata());
    if (route_srte_nbr_registered.is_set || is_set(route_srte_nbr_registered.yfilter)) leaf_name_data.push_back(route_srte_nbr_registered.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-update-time")
    {
        if(route_update_time == nullptr)
        {
            route_update_time = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::RouteUpdateTime>();
        }
        return route_update_time;
    }

    if(child_yang_name == "route-fail-time")
    {
        if(route_fail_time == nullptr)
        {
            route_fail_time = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::RouteFailTime>();
        }
        return route_fail_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(route_update_time != nullptr)
    {
        children["route-update-time"] = route_update_time;
    }

    if(route_fail_time != nullptr)
    {
        children["route-fail-time"] = route_fail_time;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-area-id")
    {
        route_area_id = value;
        route_area_id.value_namespace = name_space;
        route_area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-te-metric")
    {
        route_te_metric = value;
        route_te_metric.value_namespace = name_space;
        route_te_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-rib-version")
    {
        route_rib_version = value;
        route_rib_version.value_namespace = name_space;
        route_rib_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-spf-version")
    {
        route_spf_version = value;
        route_spf_version.value_namespace = name_space;
        route_spf_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-forward-distance")
    {
        route_forward_distance = value;
        route_forward_distance.value_namespace = name_space;
        route_forward_distance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-source")
    {
        route_source = value;
        route_source.value_namespace = name_space;
        route_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-spf-priority")
    {
        route_spf_priority = value;
        route_spf_priority.value_namespace = name_space;
        route_spf_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-auto-excluded")
    {
        route_auto_excluded = value;
        route_auto_excluded.value_namespace = name_space;
        route_auto_excluded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-srte-prefix-registered")
    {
        route_srte_prefix_registered = value;
        route_srte_prefix_registered.value_namespace = name_space;
        route_srte_prefix_registered.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-srte-nbr-registered")
    {
        route_srte_nbr_registered = value;
        route_srte_nbr_registered.value_namespace = name_space;
        route_srte_nbr_registered.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-area-id")
    {
        route_area_id.yfilter = yfilter;
    }
    if(value_path == "route-te-metric")
    {
        route_te_metric.yfilter = yfilter;
    }
    if(value_path == "route-rib-version")
    {
        route_rib_version.yfilter = yfilter;
    }
    if(value_path == "route-spf-version")
    {
        route_spf_version.yfilter = yfilter;
    }
    if(value_path == "route-forward-distance")
    {
        route_forward_distance.yfilter = yfilter;
    }
    if(value_path == "route-source")
    {
        route_source.yfilter = yfilter;
    }
    if(value_path == "route-spf-priority")
    {
        route_spf_priority.yfilter = yfilter;
    }
    if(value_path == "route-auto-excluded")
    {
        route_auto_excluded.yfilter = yfilter;
    }
    if(value_path == "route-srte-prefix-registered")
    {
        route_srte_prefix_registered.yfilter = yfilter;
    }
    if(value_path == "route-srte-nbr-registered")
    {
        route_srte_nbr_registered.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-update-time" || name == "route-fail-time" || name == "route-area-id" || name == "route-te-metric" || name == "route-rib-version" || name == "route-spf-version" || name == "route-forward-distance" || name == "route-source" || name == "route-spf-priority" || name == "route-auto-excluded" || name == "route-srte-prefix-registered" || name == "route-srte-nbr-registered")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::RouteUpdateTime::RouteUpdateTime()
    :
    second{YType::uint32, "second"},
    nanosecond{YType::uint32, "nanosecond"}
{

    yang_name = "route-update-time"; yang_parent_name = "route-info"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::RouteUpdateTime::~RouteUpdateTime()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::RouteUpdateTime::has_data() const
{
    return second.is_set
	|| nanosecond.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::RouteUpdateTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(second.yfilter)
	|| ydk::is_set(nanosecond.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::RouteUpdateTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-update-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::RouteUpdateTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());
    if (nanosecond.is_set || is_set(nanosecond.yfilter)) leaf_name_data.push_back(nanosecond.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::RouteUpdateTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::RouteUpdateTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::RouteUpdateTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "second")
    {
        second = value;
        second.value_namespace = name_space;
        second.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanosecond")
    {
        nanosecond = value;
        nanosecond.value_namespace = name_space;
        nanosecond.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::RouteUpdateTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "second")
    {
        second.yfilter = yfilter;
    }
    if(value_path == "nanosecond")
    {
        nanosecond.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::RouteUpdateTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second" || name == "nanosecond")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::RouteFailTime::RouteFailTime()
    :
    second{YType::uint32, "second"},
    nanosecond{YType::uint32, "nanosecond"}
{

    yang_name = "route-fail-time"; yang_parent_name = "route-info"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::RouteFailTime::~RouteFailTime()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::RouteFailTime::has_data() const
{
    return second.is_set
	|| nanosecond.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::RouteFailTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(second.yfilter)
	|| ydk::is_set(nanosecond.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::RouteFailTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-fail-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::RouteFailTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());
    if (nanosecond.is_set || is_set(nanosecond.yfilter)) leaf_name_data.push_back(nanosecond.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::RouteFailTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::RouteFailTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::RouteFailTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "second")
    {
        second = value;
        second.value_namespace = name_space;
        second.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanosecond")
    {
        nanosecond = value;
        nanosecond.value_namespace = name_space;
        nanosecond.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::RouteFailTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "second")
    {
        second.yfilter = yfilter;
    }
    if(value_path == "nanosecond")
    {
        nanosecond.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::RouteFailTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second" || name == "nanosecond")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::RoutePath()
    :
    route_interface_name{YType::str, "route-interface-name"},
    route_next_hop_address{YType::str, "route-next-hop-address"},
    route_source{YType::str, "route-source"},
    route_lsaid{YType::str, "route-lsaid"},
    route_path_is_mcast_intact{YType::boolean, "route-path-is-mcast-intact"},
    route_path_is_ucmp_path{YType::boolean, "route-path-is-ucmp-path"},
    route_metric{YType::uint32, "route-metric"},
    route_path_id{YType::uint16, "route-path-id"},
    lsa_type{YType::uint8, "lsa-type"}
    	,
    route_backup_path(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::RouteBackupPath>())
	,sr_microloop_avoidance_path(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::SrMicroloopAvoidancePath>())
{
    route_backup_path->parent = this;
    sr_microloop_avoidance_path->parent = this;

    yang_name = "route-path"; yang_parent_name = "backup-route"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::~RoutePath()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::has_data() const
{
    return route_interface_name.is_set
	|| route_next_hop_address.is_set
	|| route_source.is_set
	|| route_lsaid.is_set
	|| route_path_is_mcast_intact.is_set
	|| route_path_is_ucmp_path.is_set
	|| route_metric.is_set
	|| route_path_id.is_set
	|| lsa_type.is_set
	|| (route_backup_path !=  nullptr && route_backup_path->has_data())
	|| (sr_microloop_avoidance_path !=  nullptr && sr_microloop_avoidance_path->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_interface_name.yfilter)
	|| ydk::is_set(route_next_hop_address.yfilter)
	|| ydk::is_set(route_source.yfilter)
	|| ydk::is_set(route_lsaid.yfilter)
	|| ydk::is_set(route_path_is_mcast_intact.yfilter)
	|| ydk::is_set(route_path_is_ucmp_path.yfilter)
	|| ydk::is_set(route_metric.yfilter)
	|| ydk::is_set(route_path_id.yfilter)
	|| ydk::is_set(lsa_type.yfilter)
	|| (route_backup_path !=  nullptr && route_backup_path->has_operation())
	|| (sr_microloop_avoidance_path !=  nullptr && sr_microloop_avoidance_path->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_interface_name.is_set || is_set(route_interface_name.yfilter)) leaf_name_data.push_back(route_interface_name.get_name_leafdata());
    if (route_next_hop_address.is_set || is_set(route_next_hop_address.yfilter)) leaf_name_data.push_back(route_next_hop_address.get_name_leafdata());
    if (route_source.is_set || is_set(route_source.yfilter)) leaf_name_data.push_back(route_source.get_name_leafdata());
    if (route_lsaid.is_set || is_set(route_lsaid.yfilter)) leaf_name_data.push_back(route_lsaid.get_name_leafdata());
    if (route_path_is_mcast_intact.is_set || is_set(route_path_is_mcast_intact.yfilter)) leaf_name_data.push_back(route_path_is_mcast_intact.get_name_leafdata());
    if (route_path_is_ucmp_path.is_set || is_set(route_path_is_ucmp_path.yfilter)) leaf_name_data.push_back(route_path_is_ucmp_path.get_name_leafdata());
    if (route_metric.is_set || is_set(route_metric.yfilter)) leaf_name_data.push_back(route_metric.get_name_leafdata());
    if (route_path_id.is_set || is_set(route_path_id.yfilter)) leaf_name_data.push_back(route_path_id.get_name_leafdata());
    if (lsa_type.is_set || is_set(lsa_type.yfilter)) leaf_name_data.push_back(lsa_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-backup-path")
    {
        if(route_backup_path == nullptr)
        {
            route_backup_path = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::RouteBackupPath>();
        }
        return route_backup_path;
    }

    if(child_yang_name == "sr-microloop-avoidance-path")
    {
        if(sr_microloop_avoidance_path == nullptr)
        {
            sr_microloop_avoidance_path = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::SrMicroloopAvoidancePath>();
        }
        return sr_microloop_avoidance_path;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
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

void Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-interface-name")
    {
        route_interface_name = value;
        route_interface_name.value_namespace = name_space;
        route_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-next-hop-address")
    {
        route_next_hop_address = value;
        route_next_hop_address.value_namespace = name_space;
        route_next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-source")
    {
        route_source = value;
        route_source.value_namespace = name_space;
        route_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-lsaid")
    {
        route_lsaid = value;
        route_lsaid.value_namespace = name_space;
        route_lsaid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-path-is-mcast-intact")
    {
        route_path_is_mcast_intact = value;
        route_path_is_mcast_intact.value_namespace = name_space;
        route_path_is_mcast_intact.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-path-is-ucmp-path")
    {
        route_path_is_ucmp_path = value;
        route_path_is_ucmp_path.value_namespace = name_space;
        route_path_is_ucmp_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-metric")
    {
        route_metric = value;
        route_metric.value_namespace = name_space;
        route_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-path-id")
    {
        route_path_id = value;
        route_path_id.value_namespace = name_space;
        route_path_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-type")
    {
        lsa_type = value;
        lsa_type.value_namespace = name_space;
        lsa_type.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-interface-name")
    {
        route_interface_name.yfilter = yfilter;
    }
    if(value_path == "route-next-hop-address")
    {
        route_next_hop_address.yfilter = yfilter;
    }
    if(value_path == "route-source")
    {
        route_source.yfilter = yfilter;
    }
    if(value_path == "route-lsaid")
    {
        route_lsaid.yfilter = yfilter;
    }
    if(value_path == "route-path-is-mcast-intact")
    {
        route_path_is_mcast_intact.yfilter = yfilter;
    }
    if(value_path == "route-path-is-ucmp-path")
    {
        route_path_is_ucmp_path.yfilter = yfilter;
    }
    if(value_path == "route-metric")
    {
        route_metric.yfilter = yfilter;
    }
    if(value_path == "route-path-id")
    {
        route_path_id.yfilter = yfilter;
    }
    if(value_path == "lsa-type")
    {
        lsa_type.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-backup-path" || name == "sr-microloop-avoidance-path" || name == "route-interface-name" || name == "route-next-hop-address" || name == "route-source" || name == "route-lsaid" || name == "route-path-is-mcast-intact" || name == "route-path-is-ucmp-path" || name == "route-metric" || name == "route-path-id" || name == "lsa-type")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::RouteBackupPath::RouteBackupPath()
    :
    backup_route_interface_name{YType::str, "backup-route-interface-name"},
    backup_route_next_hop_address{YType::str, "backup-route-next-hop-address"},
    backup_route_source{YType::str, "backup-route-source"},
    backup_metric{YType::uint32, "backup-metric"},
    primary_path{YType::boolean, "primary-path"},
    line_card_disjoint{YType::boolean, "line-card-disjoint"},
    downstream{YType::boolean, "downstream"},
    node_protect{YType::boolean, "node-protect"},
    srlg_disjoint{YType::boolean, "srlg-disjoint"},
    backup_remote_lfa{YType::str, "backup-remote-lfa"},
    backup_repair_list_size{YType::uint32, "backup-repair-list-size"},
    backup_tunnel_interface_name{YType::str, "backup-tunnel-interface-name"}
{

    yang_name = "route-backup-path"; yang_parent_name = "route-path"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::RouteBackupPath::~RouteBackupPath()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::RouteBackupPath::has_data() const
{
    for (std::size_t index=0; index<backup_repair.size(); index++)
    {
        if(backup_repair[index]->has_data())
            return true;
    }
    return backup_route_interface_name.is_set
	|| backup_route_next_hop_address.is_set
	|| backup_route_source.is_set
	|| backup_metric.is_set
	|| primary_path.is_set
	|| line_card_disjoint.is_set
	|| downstream.is_set
	|| node_protect.is_set
	|| srlg_disjoint.is_set
	|| backup_remote_lfa.is_set
	|| backup_repair_list_size.is_set
	|| backup_tunnel_interface_name.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::RouteBackupPath::has_operation() const
{
    for (std::size_t index=0; index<backup_repair.size(); index++)
    {
        if(backup_repair[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(backup_route_interface_name.yfilter)
	|| ydk::is_set(backup_route_next_hop_address.yfilter)
	|| ydk::is_set(backup_route_source.yfilter)
	|| ydk::is_set(backup_metric.yfilter)
	|| ydk::is_set(primary_path.yfilter)
	|| ydk::is_set(line_card_disjoint.yfilter)
	|| ydk::is_set(downstream.yfilter)
	|| ydk::is_set(node_protect.yfilter)
	|| ydk::is_set(srlg_disjoint.yfilter)
	|| ydk::is_set(backup_remote_lfa.yfilter)
	|| ydk::is_set(backup_repair_list_size.yfilter)
	|| ydk::is_set(backup_tunnel_interface_name.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::RouteBackupPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-backup-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::RouteBackupPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backup_route_interface_name.is_set || is_set(backup_route_interface_name.yfilter)) leaf_name_data.push_back(backup_route_interface_name.get_name_leafdata());
    if (backup_route_next_hop_address.is_set || is_set(backup_route_next_hop_address.yfilter)) leaf_name_data.push_back(backup_route_next_hop_address.get_name_leafdata());
    if (backup_route_source.is_set || is_set(backup_route_source.yfilter)) leaf_name_data.push_back(backup_route_source.get_name_leafdata());
    if (backup_metric.is_set || is_set(backup_metric.yfilter)) leaf_name_data.push_back(backup_metric.get_name_leafdata());
    if (primary_path.is_set || is_set(primary_path.yfilter)) leaf_name_data.push_back(primary_path.get_name_leafdata());
    if (line_card_disjoint.is_set || is_set(line_card_disjoint.yfilter)) leaf_name_data.push_back(line_card_disjoint.get_name_leafdata());
    if (downstream.is_set || is_set(downstream.yfilter)) leaf_name_data.push_back(downstream.get_name_leafdata());
    if (node_protect.is_set || is_set(node_protect.yfilter)) leaf_name_data.push_back(node_protect.get_name_leafdata());
    if (srlg_disjoint.is_set || is_set(srlg_disjoint.yfilter)) leaf_name_data.push_back(srlg_disjoint.get_name_leafdata());
    if (backup_remote_lfa.is_set || is_set(backup_remote_lfa.yfilter)) leaf_name_data.push_back(backup_remote_lfa.get_name_leafdata());
    if (backup_repair_list_size.is_set || is_set(backup_repair_list_size.yfilter)) leaf_name_data.push_back(backup_repair_list_size.get_name_leafdata());
    if (backup_tunnel_interface_name.is_set || is_set(backup_tunnel_interface_name.yfilter)) leaf_name_data.push_back(backup_tunnel_interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::RouteBackupPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup-repair")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::RouteBackupPath::BackupRepair>();
        c->parent = this;
        backup_repair.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::RouteBackupPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : backup_repair)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::RouteBackupPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "backup-route-interface-name")
    {
        backup_route_interface_name = value;
        backup_route_interface_name.value_namespace = name_space;
        backup_route_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-route-next-hop-address")
    {
        backup_route_next_hop_address = value;
        backup_route_next_hop_address.value_namespace = name_space;
        backup_route_next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-route-source")
    {
        backup_route_source = value;
        backup_route_source.value_namespace = name_space;
        backup_route_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-metric")
    {
        backup_metric = value;
        backup_metric.value_namespace = name_space;
        backup_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "primary-path")
    {
        primary_path = value;
        primary_path.value_namespace = name_space;
        primary_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "line-card-disjoint")
    {
        line_card_disjoint = value;
        line_card_disjoint.value_namespace = name_space;
        line_card_disjoint.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "downstream")
    {
        downstream = value;
        downstream.value_namespace = name_space;
        downstream.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-protect")
    {
        node_protect = value;
        node_protect.value_namespace = name_space;
        node_protect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlg-disjoint")
    {
        srlg_disjoint = value;
        srlg_disjoint.value_namespace = name_space;
        srlg_disjoint.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-remote-lfa")
    {
        backup_remote_lfa = value;
        backup_remote_lfa.value_namespace = name_space;
        backup_remote_lfa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-repair-list-size")
    {
        backup_repair_list_size = value;
        backup_repair_list_size.value_namespace = name_space;
        backup_repair_list_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-tunnel-interface-name")
    {
        backup_tunnel_interface_name = value;
        backup_tunnel_interface_name.value_namespace = name_space;
        backup_tunnel_interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::RouteBackupPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "backup-route-interface-name")
    {
        backup_route_interface_name.yfilter = yfilter;
    }
    if(value_path == "backup-route-next-hop-address")
    {
        backup_route_next_hop_address.yfilter = yfilter;
    }
    if(value_path == "backup-route-source")
    {
        backup_route_source.yfilter = yfilter;
    }
    if(value_path == "backup-metric")
    {
        backup_metric.yfilter = yfilter;
    }
    if(value_path == "primary-path")
    {
        primary_path.yfilter = yfilter;
    }
    if(value_path == "line-card-disjoint")
    {
        line_card_disjoint.yfilter = yfilter;
    }
    if(value_path == "downstream")
    {
        downstream.yfilter = yfilter;
    }
    if(value_path == "node-protect")
    {
        node_protect.yfilter = yfilter;
    }
    if(value_path == "srlg-disjoint")
    {
        srlg_disjoint.yfilter = yfilter;
    }
    if(value_path == "backup-remote-lfa")
    {
        backup_remote_lfa.yfilter = yfilter;
    }
    if(value_path == "backup-repair-list-size")
    {
        backup_repair_list_size.yfilter = yfilter;
    }
    if(value_path == "backup-tunnel-interface-name")
    {
        backup_tunnel_interface_name.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::RouteBackupPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backup-repair" || name == "backup-route-interface-name" || name == "backup-route-next-hop-address" || name == "backup-route-source" || name == "backup-metric" || name == "primary-path" || name == "line-card-disjoint" || name == "downstream" || name == "node-protect" || name == "srlg-disjoint" || name == "backup-remote-lfa" || name == "backup-repair-list-size" || name == "backup-tunnel-interface-name")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::RouteBackupPath::BackupRepair::BackupRepair()
    :
    repair_element_id{YType::str, "repair-element-id"},
    repair_label{YType::uint32, "repair-label"},
    repair_element_type{YType::uint32, "repair-element-type"}
{

    yang_name = "backup-repair"; yang_parent_name = "route-backup-path"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::RouteBackupPath::BackupRepair::~BackupRepair()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::RouteBackupPath::BackupRepair::has_data() const
{
    return repair_element_id.is_set
	|| repair_label.is_set
	|| repair_element_type.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::RouteBackupPath::BackupRepair::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(repair_element_id.yfilter)
	|| ydk::is_set(repair_label.yfilter)
	|| ydk::is_set(repair_element_type.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::RouteBackupPath::BackupRepair::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-repair";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::RouteBackupPath::BackupRepair::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (repair_element_id.is_set || is_set(repair_element_id.yfilter)) leaf_name_data.push_back(repair_element_id.get_name_leafdata());
    if (repair_label.is_set || is_set(repair_label.yfilter)) leaf_name_data.push_back(repair_label.get_name_leafdata());
    if (repair_element_type.is_set || is_set(repair_element_type.yfilter)) leaf_name_data.push_back(repair_element_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::RouteBackupPath::BackupRepair::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::RouteBackupPath::BackupRepair::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::RouteBackupPath::BackupRepair::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "repair-element-id")
    {
        repair_element_id = value;
        repair_element_id.value_namespace = name_space;
        repair_element_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-label")
    {
        repair_label = value;
        repair_label.value_namespace = name_space;
        repair_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type = value;
        repair_element_type.value_namespace = name_space;
        repair_element_type.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::RouteBackupPath::BackupRepair::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "repair-element-id")
    {
        repair_element_id.yfilter = yfilter;
    }
    if(value_path == "repair-label")
    {
        repair_label.yfilter = yfilter;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::RouteBackupPath::BackupRepair::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "repair-element-id" || name == "repair-label" || name == "repair-element-type")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::SrMicroloopAvoidancePath::SrMicroloopAvoidancePath()
    :
    microloop_repair_list_size{YType::uint32, "microloop-repair-list-size"},
    microloop_tunnel_interface_name{YType::str, "microloop-tunnel-interface-name"},
    microloop_strict_spf{YType::boolean, "microloop-strict-spf"}
{

    yang_name = "sr-microloop-avoidance-path"; yang_parent_name = "route-path"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::SrMicroloopAvoidancePath::~SrMicroloopAvoidancePath()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::SrMicroloopAvoidancePath::has_data() const
{
    for (std::size_t index=0; index<microloop_repair.size(); index++)
    {
        if(microloop_repair[index]->has_data())
            return true;
    }
    return microloop_repair_list_size.is_set
	|| microloop_tunnel_interface_name.is_set
	|| microloop_strict_spf.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::SrMicroloopAvoidancePath::has_operation() const
{
    for (std::size_t index=0; index<microloop_repair.size(); index++)
    {
        if(microloop_repair[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(microloop_repair_list_size.yfilter)
	|| ydk::is_set(microloop_tunnel_interface_name.yfilter)
	|| ydk::is_set(microloop_strict_spf.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::SrMicroloopAvoidancePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-microloop-avoidance-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::SrMicroloopAvoidancePath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (microloop_repair_list_size.is_set || is_set(microloop_repair_list_size.yfilter)) leaf_name_data.push_back(microloop_repair_list_size.get_name_leafdata());
    if (microloop_tunnel_interface_name.is_set || is_set(microloop_tunnel_interface_name.yfilter)) leaf_name_data.push_back(microloop_tunnel_interface_name.get_name_leafdata());
    if (microloop_strict_spf.is_set || is_set(microloop_strict_spf.yfilter)) leaf_name_data.push_back(microloop_strict_spf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::SrMicroloopAvoidancePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "microloop-repair")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair>();
        c->parent = this;
        microloop_repair.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::SrMicroloopAvoidancePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : microloop_repair)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::SrMicroloopAvoidancePath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "microloop-repair-list-size")
    {
        microloop_repair_list_size = value;
        microloop_repair_list_size.value_namespace = name_space;
        microloop_repair_list_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "microloop-tunnel-interface-name")
    {
        microloop_tunnel_interface_name = value;
        microloop_tunnel_interface_name.value_namespace = name_space;
        microloop_tunnel_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "microloop-strict-spf")
    {
        microloop_strict_spf = value;
        microloop_strict_spf.value_namespace = name_space;
        microloop_strict_spf.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::SrMicroloopAvoidancePath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "microloop-repair-list-size")
    {
        microloop_repair_list_size.yfilter = yfilter;
    }
    if(value_path == "microloop-tunnel-interface-name")
    {
        microloop_tunnel_interface_name.yfilter = yfilter;
    }
    if(value_path == "microloop-strict-spf")
    {
        microloop_strict_spf.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::SrMicroloopAvoidancePath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "microloop-repair" || name == "microloop-repair-list-size" || name == "microloop-tunnel-interface-name" || name == "microloop-strict-spf")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::MicroloopRepair()
    :
    repair_element_id{YType::str, "repair-element-id"},
    repair_label{YType::uint32, "repair-label"},
    repair_element_type{YType::uint32, "repair-element-type"}
{

    yang_name = "microloop-repair"; yang_parent_name = "sr-microloop-avoidance-path"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::~MicroloopRepair()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::has_data() const
{
    return repair_element_id.is_set
	|| repair_label.is_set
	|| repair_element_type.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(repair_element_id.yfilter)
	|| ydk::is_set(repair_label.yfilter)
	|| ydk::is_set(repair_element_type.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "microloop-repair";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (repair_element_id.is_set || is_set(repair_element_id.yfilter)) leaf_name_data.push_back(repair_element_id.get_name_leafdata());
    if (repair_label.is_set || is_set(repair_label.yfilter)) leaf_name_data.push_back(repair_label.get_name_leafdata());
    if (repair_element_type.is_set || is_set(repair_element_type.yfilter)) leaf_name_data.push_back(repair_element_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "repair-element-id")
    {
        repair_element_id = value;
        repair_element_id.value_namespace = name_space;
        repair_element_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-label")
    {
        repair_label = value;
        repair_label.value_namespace = name_space;
        repair_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type = value;
        repair_element_type.value_namespace = name_space;
        repair_element_type.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "repair-element-id")
    {
        repair_element_id.yfilter = yfilter;
    }
    if(value_path == "repair-label")
    {
        repair_label.yfilter = yfilter;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "repair-element-id" || name == "repair-label" || name == "repair-element-type")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::MulticastIntactRouteTable()
{

    yang_name = "multicast-intact-route-table"; yang_parent_name = "route-information"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::~MulticastIntactRouteTable()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::has_data() const
{
    for (std::size_t index=0; index<route.size(); index++)
    {
        if(route[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::has_operation() const
{
    for (std::size_t index=0; index<route.size(); index++)
    {
        if(route[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast-intact-route-table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route>();
        c->parent = this;
        route.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : route)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::Route()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint32, "prefix-length"},
    route_prefix{YType::str, "route-prefix"},
    route_prefix_length{YType::uint32, "route-prefix-length"},
    route_metric{YType::uint32, "route-metric"},
    route_type{YType::enumeration, "route-type"},
    route_connected{YType::boolean, "route-connected"}
    	,
    route_info(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo>())
{
    route_info->parent = this;

    yang_name = "route"; yang_parent_name = "multicast-intact-route-table"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::~Route()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::has_data() const
{
    for (std::size_t index=0; index<route_path.size(); index++)
    {
        if(route_path[index]->has_data())
            return true;
    }
    return prefix.is_set
	|| prefix_length.is_set
	|| route_prefix.is_set
	|| route_prefix_length.is_set
	|| route_metric.is_set
	|| route_type.is_set
	|| route_connected.is_set
	|| (route_info !=  nullptr && route_info->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::has_operation() const
{
    for (std::size_t index=0; index<route_path.size(); index++)
    {
        if(route_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(route_prefix.yfilter)
	|| ydk::is_set(route_prefix_length.yfilter)
	|| ydk::is_set(route_metric.yfilter)
	|| ydk::is_set(route_type.yfilter)
	|| ydk::is_set(route_connected.yfilter)
	|| (route_info !=  nullptr && route_info->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (route_prefix.is_set || is_set(route_prefix.yfilter)) leaf_name_data.push_back(route_prefix.get_name_leafdata());
    if (route_prefix_length.is_set || is_set(route_prefix_length.yfilter)) leaf_name_data.push_back(route_prefix_length.get_name_leafdata());
    if (route_metric.is_set || is_set(route_metric.yfilter)) leaf_name_data.push_back(route_metric.get_name_leafdata());
    if (route_type.is_set || is_set(route_type.yfilter)) leaf_name_data.push_back(route_type.get_name_leafdata());
    if (route_connected.is_set || is_set(route_connected.yfilter)) leaf_name_data.push_back(route_connected.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-info")
    {
        if(route_info == nullptr)
        {
            route_info = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo>();
        }
        return route_info;
    }

    if(child_yang_name == "route-path")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath>();
        c->parent = this;
        route_path.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(route_info != nullptr)
    {
        children["route-info"] = route_info;
    }

    count = 0;
    for (auto const & c : route_path)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-prefix")
    {
        route_prefix = value;
        route_prefix.value_namespace = name_space;
        route_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-prefix-length")
    {
        route_prefix_length = value;
        route_prefix_length.value_namespace = name_space;
        route_prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-metric")
    {
        route_metric = value;
        route_metric.value_namespace = name_space;
        route_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-type")
    {
        route_type = value;
        route_type.value_namespace = name_space;
        route_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-connected")
    {
        route_connected = value;
        route_connected.value_namespace = name_space;
        route_connected.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "route-prefix")
    {
        route_prefix.yfilter = yfilter;
    }
    if(value_path == "route-prefix-length")
    {
        route_prefix_length.yfilter = yfilter;
    }
    if(value_path == "route-metric")
    {
        route_metric.yfilter = yfilter;
    }
    if(value_path == "route-type")
    {
        route_type.yfilter = yfilter;
    }
    if(value_path == "route-connected")
    {
        route_connected.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-info" || name == "route-path" || name == "prefix" || name == "prefix-length" || name == "route-prefix" || name == "route-prefix-length" || name == "route-metric" || name == "route-type" || name == "route-connected")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::RouteInfo()
    :
    route_area_id{YType::uint32, "route-area-id"},
    route_te_metric{YType::uint32, "route-te-metric"},
    route_rib_version{YType::uint32, "route-rib-version"},
    route_spf_version{YType::uint64, "route-spf-version"},
    route_forward_distance{YType::uint32, "route-forward-distance"},
    route_source{YType::uint16, "route-source"},
    route_spf_priority{YType::uint8, "route-spf-priority"},
    route_auto_excluded{YType::boolean, "route-auto-excluded"},
    route_srte_prefix_registered{YType::boolean, "route-srte-prefix-registered"},
    route_srte_nbr_registered{YType::uint16, "route-srte-nbr-registered"}
    	,
    route_update_time(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::RouteUpdateTime>())
	,route_fail_time(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::RouteFailTime>())
{
    route_update_time->parent = this;
    route_fail_time->parent = this;

    yang_name = "route-info"; yang_parent_name = "route"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::~RouteInfo()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::has_data() const
{
    return route_area_id.is_set
	|| route_te_metric.is_set
	|| route_rib_version.is_set
	|| route_spf_version.is_set
	|| route_forward_distance.is_set
	|| route_source.is_set
	|| route_spf_priority.is_set
	|| route_auto_excluded.is_set
	|| route_srte_prefix_registered.is_set
	|| route_srte_nbr_registered.is_set
	|| (route_update_time !=  nullptr && route_update_time->has_data())
	|| (route_fail_time !=  nullptr && route_fail_time->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_area_id.yfilter)
	|| ydk::is_set(route_te_metric.yfilter)
	|| ydk::is_set(route_rib_version.yfilter)
	|| ydk::is_set(route_spf_version.yfilter)
	|| ydk::is_set(route_forward_distance.yfilter)
	|| ydk::is_set(route_source.yfilter)
	|| ydk::is_set(route_spf_priority.yfilter)
	|| ydk::is_set(route_auto_excluded.yfilter)
	|| ydk::is_set(route_srte_prefix_registered.yfilter)
	|| ydk::is_set(route_srte_nbr_registered.yfilter)
	|| (route_update_time !=  nullptr && route_update_time->has_operation())
	|| (route_fail_time !=  nullptr && route_fail_time->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_area_id.is_set || is_set(route_area_id.yfilter)) leaf_name_data.push_back(route_area_id.get_name_leafdata());
    if (route_te_metric.is_set || is_set(route_te_metric.yfilter)) leaf_name_data.push_back(route_te_metric.get_name_leafdata());
    if (route_rib_version.is_set || is_set(route_rib_version.yfilter)) leaf_name_data.push_back(route_rib_version.get_name_leafdata());
    if (route_spf_version.is_set || is_set(route_spf_version.yfilter)) leaf_name_data.push_back(route_spf_version.get_name_leafdata());
    if (route_forward_distance.is_set || is_set(route_forward_distance.yfilter)) leaf_name_data.push_back(route_forward_distance.get_name_leafdata());
    if (route_source.is_set || is_set(route_source.yfilter)) leaf_name_data.push_back(route_source.get_name_leafdata());
    if (route_spf_priority.is_set || is_set(route_spf_priority.yfilter)) leaf_name_data.push_back(route_spf_priority.get_name_leafdata());
    if (route_auto_excluded.is_set || is_set(route_auto_excluded.yfilter)) leaf_name_data.push_back(route_auto_excluded.get_name_leafdata());
    if (route_srte_prefix_registered.is_set || is_set(route_srte_prefix_registered.yfilter)) leaf_name_data.push_back(route_srte_prefix_registered.get_name_leafdata());
    if (route_srte_nbr_registered.is_set || is_set(route_srte_nbr_registered.yfilter)) leaf_name_data.push_back(route_srte_nbr_registered.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-update-time")
    {
        if(route_update_time == nullptr)
        {
            route_update_time = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::RouteUpdateTime>();
        }
        return route_update_time;
    }

    if(child_yang_name == "route-fail-time")
    {
        if(route_fail_time == nullptr)
        {
            route_fail_time = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::RouteFailTime>();
        }
        return route_fail_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(route_update_time != nullptr)
    {
        children["route-update-time"] = route_update_time;
    }

    if(route_fail_time != nullptr)
    {
        children["route-fail-time"] = route_fail_time;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-area-id")
    {
        route_area_id = value;
        route_area_id.value_namespace = name_space;
        route_area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-te-metric")
    {
        route_te_metric = value;
        route_te_metric.value_namespace = name_space;
        route_te_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-rib-version")
    {
        route_rib_version = value;
        route_rib_version.value_namespace = name_space;
        route_rib_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-spf-version")
    {
        route_spf_version = value;
        route_spf_version.value_namespace = name_space;
        route_spf_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-forward-distance")
    {
        route_forward_distance = value;
        route_forward_distance.value_namespace = name_space;
        route_forward_distance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-source")
    {
        route_source = value;
        route_source.value_namespace = name_space;
        route_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-spf-priority")
    {
        route_spf_priority = value;
        route_spf_priority.value_namespace = name_space;
        route_spf_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-auto-excluded")
    {
        route_auto_excluded = value;
        route_auto_excluded.value_namespace = name_space;
        route_auto_excluded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-srte-prefix-registered")
    {
        route_srte_prefix_registered = value;
        route_srte_prefix_registered.value_namespace = name_space;
        route_srte_prefix_registered.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-srte-nbr-registered")
    {
        route_srte_nbr_registered = value;
        route_srte_nbr_registered.value_namespace = name_space;
        route_srte_nbr_registered.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-area-id")
    {
        route_area_id.yfilter = yfilter;
    }
    if(value_path == "route-te-metric")
    {
        route_te_metric.yfilter = yfilter;
    }
    if(value_path == "route-rib-version")
    {
        route_rib_version.yfilter = yfilter;
    }
    if(value_path == "route-spf-version")
    {
        route_spf_version.yfilter = yfilter;
    }
    if(value_path == "route-forward-distance")
    {
        route_forward_distance.yfilter = yfilter;
    }
    if(value_path == "route-source")
    {
        route_source.yfilter = yfilter;
    }
    if(value_path == "route-spf-priority")
    {
        route_spf_priority.yfilter = yfilter;
    }
    if(value_path == "route-auto-excluded")
    {
        route_auto_excluded.yfilter = yfilter;
    }
    if(value_path == "route-srte-prefix-registered")
    {
        route_srte_prefix_registered.yfilter = yfilter;
    }
    if(value_path == "route-srte-nbr-registered")
    {
        route_srte_nbr_registered.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-update-time" || name == "route-fail-time" || name == "route-area-id" || name == "route-te-metric" || name == "route-rib-version" || name == "route-spf-version" || name == "route-forward-distance" || name == "route-source" || name == "route-spf-priority" || name == "route-auto-excluded" || name == "route-srte-prefix-registered" || name == "route-srte-nbr-registered")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::RouteUpdateTime::RouteUpdateTime()
    :
    second{YType::uint32, "second"},
    nanosecond{YType::uint32, "nanosecond"}
{

    yang_name = "route-update-time"; yang_parent_name = "route-info"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::RouteUpdateTime::~RouteUpdateTime()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::RouteUpdateTime::has_data() const
{
    return second.is_set
	|| nanosecond.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::RouteUpdateTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(second.yfilter)
	|| ydk::is_set(nanosecond.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::RouteUpdateTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-update-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::RouteUpdateTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());
    if (nanosecond.is_set || is_set(nanosecond.yfilter)) leaf_name_data.push_back(nanosecond.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::RouteUpdateTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::RouteUpdateTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::RouteUpdateTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "second")
    {
        second = value;
        second.value_namespace = name_space;
        second.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanosecond")
    {
        nanosecond = value;
        nanosecond.value_namespace = name_space;
        nanosecond.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::RouteUpdateTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "second")
    {
        second.yfilter = yfilter;
    }
    if(value_path == "nanosecond")
    {
        nanosecond.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::RouteUpdateTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second" || name == "nanosecond")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::RouteFailTime::RouteFailTime()
    :
    second{YType::uint32, "second"},
    nanosecond{YType::uint32, "nanosecond"}
{

    yang_name = "route-fail-time"; yang_parent_name = "route-info"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::RouteFailTime::~RouteFailTime()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::RouteFailTime::has_data() const
{
    return second.is_set
	|| nanosecond.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::RouteFailTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(second.yfilter)
	|| ydk::is_set(nanosecond.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::RouteFailTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-fail-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::RouteFailTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());
    if (nanosecond.is_set || is_set(nanosecond.yfilter)) leaf_name_data.push_back(nanosecond.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::RouteFailTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::RouteFailTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::RouteFailTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "second")
    {
        second = value;
        second.value_namespace = name_space;
        second.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanosecond")
    {
        nanosecond = value;
        nanosecond.value_namespace = name_space;
        nanosecond.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::RouteFailTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "second")
    {
        second.yfilter = yfilter;
    }
    if(value_path == "nanosecond")
    {
        nanosecond.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::RouteFailTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second" || name == "nanosecond")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::RoutePath()
    :
    route_interface_name{YType::str, "route-interface-name"},
    route_next_hop_address{YType::str, "route-next-hop-address"},
    route_source{YType::str, "route-source"},
    route_lsaid{YType::str, "route-lsaid"},
    route_path_is_mcast_intact{YType::boolean, "route-path-is-mcast-intact"},
    route_path_is_ucmp_path{YType::boolean, "route-path-is-ucmp-path"},
    route_metric{YType::uint32, "route-metric"},
    lsa_type{YType::uint8, "lsa-type"},
    area_id{YType::uint32, "area-id"},
    area_format{YType::boolean, "area-format"}
    	,
    sr_microloop_avoidance_path(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::SrMicroloopAvoidancePath>())
{
    sr_microloop_avoidance_path->parent = this;

    yang_name = "route-path"; yang_parent_name = "route"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::~RoutePath()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::has_data() const
{
    return route_interface_name.is_set
	|| route_next_hop_address.is_set
	|| route_source.is_set
	|| route_lsaid.is_set
	|| route_path_is_mcast_intact.is_set
	|| route_path_is_ucmp_path.is_set
	|| route_metric.is_set
	|| lsa_type.is_set
	|| area_id.is_set
	|| area_format.is_set
	|| (sr_microloop_avoidance_path !=  nullptr && sr_microloop_avoidance_path->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_interface_name.yfilter)
	|| ydk::is_set(route_next_hop_address.yfilter)
	|| ydk::is_set(route_source.yfilter)
	|| ydk::is_set(route_lsaid.yfilter)
	|| ydk::is_set(route_path_is_mcast_intact.yfilter)
	|| ydk::is_set(route_path_is_ucmp_path.yfilter)
	|| ydk::is_set(route_metric.yfilter)
	|| ydk::is_set(lsa_type.yfilter)
	|| ydk::is_set(area_id.yfilter)
	|| ydk::is_set(area_format.yfilter)
	|| (sr_microloop_avoidance_path !=  nullptr && sr_microloop_avoidance_path->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_interface_name.is_set || is_set(route_interface_name.yfilter)) leaf_name_data.push_back(route_interface_name.get_name_leafdata());
    if (route_next_hop_address.is_set || is_set(route_next_hop_address.yfilter)) leaf_name_data.push_back(route_next_hop_address.get_name_leafdata());
    if (route_source.is_set || is_set(route_source.yfilter)) leaf_name_data.push_back(route_source.get_name_leafdata());
    if (route_lsaid.is_set || is_set(route_lsaid.yfilter)) leaf_name_data.push_back(route_lsaid.get_name_leafdata());
    if (route_path_is_mcast_intact.is_set || is_set(route_path_is_mcast_intact.yfilter)) leaf_name_data.push_back(route_path_is_mcast_intact.get_name_leafdata());
    if (route_path_is_ucmp_path.is_set || is_set(route_path_is_ucmp_path.yfilter)) leaf_name_data.push_back(route_path_is_ucmp_path.get_name_leafdata());
    if (route_metric.is_set || is_set(route_metric.yfilter)) leaf_name_data.push_back(route_metric.get_name_leafdata());
    if (lsa_type.is_set || is_set(lsa_type.yfilter)) leaf_name_data.push_back(lsa_type.get_name_leafdata());
    if (area_id.is_set || is_set(area_id.yfilter)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (area_format.is_set || is_set(area_format.yfilter)) leaf_name_data.push_back(area_format.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sr-microloop-avoidance-path")
    {
        if(sr_microloop_avoidance_path == nullptr)
        {
            sr_microloop_avoidance_path = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::SrMicroloopAvoidancePath>();
        }
        return sr_microloop_avoidance_path;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(sr_microloop_avoidance_path != nullptr)
    {
        children["sr-microloop-avoidance-path"] = sr_microloop_avoidance_path;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-interface-name")
    {
        route_interface_name = value;
        route_interface_name.value_namespace = name_space;
        route_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-next-hop-address")
    {
        route_next_hop_address = value;
        route_next_hop_address.value_namespace = name_space;
        route_next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-source")
    {
        route_source = value;
        route_source.value_namespace = name_space;
        route_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-lsaid")
    {
        route_lsaid = value;
        route_lsaid.value_namespace = name_space;
        route_lsaid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-path-is-mcast-intact")
    {
        route_path_is_mcast_intact = value;
        route_path_is_mcast_intact.value_namespace = name_space;
        route_path_is_mcast_intact.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-path-is-ucmp-path")
    {
        route_path_is_ucmp_path = value;
        route_path_is_ucmp_path.value_namespace = name_space;
        route_path_is_ucmp_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-metric")
    {
        route_metric = value;
        route_metric.value_namespace = name_space;
        route_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-type")
    {
        lsa_type = value;
        lsa_type.value_namespace = name_space;
        lsa_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-id")
    {
        area_id = value;
        area_id.value_namespace = name_space;
        area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-format")
    {
        area_format = value;
        area_format.value_namespace = name_space;
        area_format.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-interface-name")
    {
        route_interface_name.yfilter = yfilter;
    }
    if(value_path == "route-next-hop-address")
    {
        route_next_hop_address.yfilter = yfilter;
    }
    if(value_path == "route-source")
    {
        route_source.yfilter = yfilter;
    }
    if(value_path == "route-lsaid")
    {
        route_lsaid.yfilter = yfilter;
    }
    if(value_path == "route-path-is-mcast-intact")
    {
        route_path_is_mcast_intact.yfilter = yfilter;
    }
    if(value_path == "route-path-is-ucmp-path")
    {
        route_path_is_ucmp_path.yfilter = yfilter;
    }
    if(value_path == "route-metric")
    {
        route_metric.yfilter = yfilter;
    }
    if(value_path == "lsa-type")
    {
        lsa_type.yfilter = yfilter;
    }
    if(value_path == "area-id")
    {
        area_id.yfilter = yfilter;
    }
    if(value_path == "area-format")
    {
        area_format.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sr-microloop-avoidance-path" || name == "route-interface-name" || name == "route-next-hop-address" || name == "route-source" || name == "route-lsaid" || name == "route-path-is-mcast-intact" || name == "route-path-is-ucmp-path" || name == "route-metric" || name == "lsa-type" || name == "area-id" || name == "area-format")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::SrMicroloopAvoidancePath::SrMicroloopAvoidancePath()
    :
    microloop_repair_list_size{YType::uint32, "microloop-repair-list-size"},
    microloop_tunnel_interface_name{YType::str, "microloop-tunnel-interface-name"},
    microloop_strict_spf{YType::boolean, "microloop-strict-spf"}
{

    yang_name = "sr-microloop-avoidance-path"; yang_parent_name = "route-path"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::SrMicroloopAvoidancePath::~SrMicroloopAvoidancePath()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::SrMicroloopAvoidancePath::has_data() const
{
    for (std::size_t index=0; index<microloop_repair.size(); index++)
    {
        if(microloop_repair[index]->has_data())
            return true;
    }
    return microloop_repair_list_size.is_set
	|| microloop_tunnel_interface_name.is_set
	|| microloop_strict_spf.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::SrMicroloopAvoidancePath::has_operation() const
{
    for (std::size_t index=0; index<microloop_repair.size(); index++)
    {
        if(microloop_repair[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(microloop_repair_list_size.yfilter)
	|| ydk::is_set(microloop_tunnel_interface_name.yfilter)
	|| ydk::is_set(microloop_strict_spf.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::SrMicroloopAvoidancePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-microloop-avoidance-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::SrMicroloopAvoidancePath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (microloop_repair_list_size.is_set || is_set(microloop_repair_list_size.yfilter)) leaf_name_data.push_back(microloop_repair_list_size.get_name_leafdata());
    if (microloop_tunnel_interface_name.is_set || is_set(microloop_tunnel_interface_name.yfilter)) leaf_name_data.push_back(microloop_tunnel_interface_name.get_name_leafdata());
    if (microloop_strict_spf.is_set || is_set(microloop_strict_spf.yfilter)) leaf_name_data.push_back(microloop_strict_spf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::SrMicroloopAvoidancePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "microloop-repair")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair>();
        c->parent = this;
        microloop_repair.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::SrMicroloopAvoidancePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : microloop_repair)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::SrMicroloopAvoidancePath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "microloop-repair-list-size")
    {
        microloop_repair_list_size = value;
        microloop_repair_list_size.value_namespace = name_space;
        microloop_repair_list_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "microloop-tunnel-interface-name")
    {
        microloop_tunnel_interface_name = value;
        microloop_tunnel_interface_name.value_namespace = name_space;
        microloop_tunnel_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "microloop-strict-spf")
    {
        microloop_strict_spf = value;
        microloop_strict_spf.value_namespace = name_space;
        microloop_strict_spf.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::SrMicroloopAvoidancePath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "microloop-repair-list-size")
    {
        microloop_repair_list_size.yfilter = yfilter;
    }
    if(value_path == "microloop-tunnel-interface-name")
    {
        microloop_tunnel_interface_name.yfilter = yfilter;
    }
    if(value_path == "microloop-strict-spf")
    {
        microloop_strict_spf.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::SrMicroloopAvoidancePath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "microloop-repair" || name == "microloop-repair-list-size" || name == "microloop-tunnel-interface-name" || name == "microloop-strict-spf")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::MicroloopRepair()
    :
    repair_element_id{YType::str, "repair-element-id"},
    repair_label{YType::uint32, "repair-label"},
    repair_element_type{YType::uint32, "repair-element-type"}
{

    yang_name = "microloop-repair"; yang_parent_name = "sr-microloop-avoidance-path"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::~MicroloopRepair()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::has_data() const
{
    return repair_element_id.is_set
	|| repair_label.is_set
	|| repair_element_type.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(repair_element_id.yfilter)
	|| ydk::is_set(repair_label.yfilter)
	|| ydk::is_set(repair_element_type.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "microloop-repair";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (repair_element_id.is_set || is_set(repair_element_id.yfilter)) leaf_name_data.push_back(repair_element_id.get_name_leafdata());
    if (repair_label.is_set || is_set(repair_label.yfilter)) leaf_name_data.push_back(repair_label.get_name_leafdata());
    if (repair_element_type.is_set || is_set(repair_element_type.yfilter)) leaf_name_data.push_back(repair_element_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "repair-element-id")
    {
        repair_element_id = value;
        repair_element_id.value_namespace = name_space;
        repair_element_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-label")
    {
        repair_label = value;
        repair_label.value_namespace = name_space;
        repair_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type = value;
        repair_element_type.value_namespace = name_space;
        repair_element_type.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "repair-element-id")
    {
        repair_element_id.yfilter = yfilter;
    }
    if(value_path == "repair-label")
    {
        repair_label.yfilter = yfilter;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "repair-element-id" || name == "repair-label" || name == "repair-element-type")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoutes()
{

    yang_name = "multicast-intact-backup-routes"; yang_parent_name = "route-information"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::~MulticastIntactBackupRoutes()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::has_data() const
{
    for (std::size_t index=0; index<multicast_intact_backup_route.size(); index++)
    {
        if(multicast_intact_backup_route[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::has_operation() const
{
    for (std::size_t index=0; index<multicast_intact_backup_route.size(); index++)
    {
        if(multicast_intact_backup_route[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast-intact-backup-routes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "multicast-intact-backup-route")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute>();
        c->parent = this;
        multicast_intact_backup_route.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : multicast_intact_backup_route)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "multicast-intact-backup-route")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::MulticastIntactBackupRoute()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint32, "prefix-length"},
    route_prefix{YType::str, "route-prefix"},
    route_prefix_length{YType::uint32, "route-prefix-length"},
    route_metric{YType::uint32, "route-metric"},
    route_type{YType::enumeration, "route-type"},
    route_connected{YType::boolean, "route-connected"}
    	,
    route_info(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo>())
{
    route_info->parent = this;

    yang_name = "multicast-intact-backup-route"; yang_parent_name = "multicast-intact-backup-routes"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::~MulticastIntactBackupRoute()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::has_data() const
{
    for (std::size_t index=0; index<route_path.size(); index++)
    {
        if(route_path[index]->has_data())
            return true;
    }
    return prefix.is_set
	|| prefix_length.is_set
	|| route_prefix.is_set
	|| route_prefix_length.is_set
	|| route_metric.is_set
	|| route_type.is_set
	|| route_connected.is_set
	|| (route_info !=  nullptr && route_info->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::has_operation() const
{
    for (std::size_t index=0; index<route_path.size(); index++)
    {
        if(route_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(route_prefix.yfilter)
	|| ydk::is_set(route_prefix_length.yfilter)
	|| ydk::is_set(route_metric.yfilter)
	|| ydk::is_set(route_type.yfilter)
	|| ydk::is_set(route_connected.yfilter)
	|| (route_info !=  nullptr && route_info->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast-intact-backup-route";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (route_prefix.is_set || is_set(route_prefix.yfilter)) leaf_name_data.push_back(route_prefix.get_name_leafdata());
    if (route_prefix_length.is_set || is_set(route_prefix_length.yfilter)) leaf_name_data.push_back(route_prefix_length.get_name_leafdata());
    if (route_metric.is_set || is_set(route_metric.yfilter)) leaf_name_data.push_back(route_metric.get_name_leafdata());
    if (route_type.is_set || is_set(route_type.yfilter)) leaf_name_data.push_back(route_type.get_name_leafdata());
    if (route_connected.is_set || is_set(route_connected.yfilter)) leaf_name_data.push_back(route_connected.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-info")
    {
        if(route_info == nullptr)
        {
            route_info = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo>();
        }
        return route_info;
    }

    if(child_yang_name == "route-path")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath>();
        c->parent = this;
        route_path.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(route_info != nullptr)
    {
        children["route-info"] = route_info;
    }

    count = 0;
    for (auto const & c : route_path)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-prefix")
    {
        route_prefix = value;
        route_prefix.value_namespace = name_space;
        route_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-prefix-length")
    {
        route_prefix_length = value;
        route_prefix_length.value_namespace = name_space;
        route_prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-metric")
    {
        route_metric = value;
        route_metric.value_namespace = name_space;
        route_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-type")
    {
        route_type = value;
        route_type.value_namespace = name_space;
        route_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-connected")
    {
        route_connected = value;
        route_connected.value_namespace = name_space;
        route_connected.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "route-prefix")
    {
        route_prefix.yfilter = yfilter;
    }
    if(value_path == "route-prefix-length")
    {
        route_prefix_length.yfilter = yfilter;
    }
    if(value_path == "route-metric")
    {
        route_metric.yfilter = yfilter;
    }
    if(value_path == "route-type")
    {
        route_type.yfilter = yfilter;
    }
    if(value_path == "route-connected")
    {
        route_connected.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-info" || name == "route-path" || name == "prefix" || name == "prefix-length" || name == "route-prefix" || name == "route-prefix-length" || name == "route-metric" || name == "route-type" || name == "route-connected")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::RouteInfo()
    :
    route_area_id{YType::uint32, "route-area-id"},
    route_te_metric{YType::uint32, "route-te-metric"},
    route_rib_version{YType::uint32, "route-rib-version"},
    route_spf_version{YType::uint64, "route-spf-version"},
    route_forward_distance{YType::uint32, "route-forward-distance"},
    route_source{YType::uint16, "route-source"},
    route_spf_priority{YType::uint8, "route-spf-priority"},
    route_auto_excluded{YType::boolean, "route-auto-excluded"},
    route_srte_prefix_registered{YType::boolean, "route-srte-prefix-registered"},
    route_srte_nbr_registered{YType::uint16, "route-srte-nbr-registered"}
    	,
    route_update_time(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::RouteUpdateTime>())
	,route_fail_time(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::RouteFailTime>())
{
    route_update_time->parent = this;
    route_fail_time->parent = this;

    yang_name = "route-info"; yang_parent_name = "multicast-intact-backup-route"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::~RouteInfo()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::has_data() const
{
    return route_area_id.is_set
	|| route_te_metric.is_set
	|| route_rib_version.is_set
	|| route_spf_version.is_set
	|| route_forward_distance.is_set
	|| route_source.is_set
	|| route_spf_priority.is_set
	|| route_auto_excluded.is_set
	|| route_srte_prefix_registered.is_set
	|| route_srte_nbr_registered.is_set
	|| (route_update_time !=  nullptr && route_update_time->has_data())
	|| (route_fail_time !=  nullptr && route_fail_time->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_area_id.yfilter)
	|| ydk::is_set(route_te_metric.yfilter)
	|| ydk::is_set(route_rib_version.yfilter)
	|| ydk::is_set(route_spf_version.yfilter)
	|| ydk::is_set(route_forward_distance.yfilter)
	|| ydk::is_set(route_source.yfilter)
	|| ydk::is_set(route_spf_priority.yfilter)
	|| ydk::is_set(route_auto_excluded.yfilter)
	|| ydk::is_set(route_srte_prefix_registered.yfilter)
	|| ydk::is_set(route_srte_nbr_registered.yfilter)
	|| (route_update_time !=  nullptr && route_update_time->has_operation())
	|| (route_fail_time !=  nullptr && route_fail_time->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_area_id.is_set || is_set(route_area_id.yfilter)) leaf_name_data.push_back(route_area_id.get_name_leafdata());
    if (route_te_metric.is_set || is_set(route_te_metric.yfilter)) leaf_name_data.push_back(route_te_metric.get_name_leafdata());
    if (route_rib_version.is_set || is_set(route_rib_version.yfilter)) leaf_name_data.push_back(route_rib_version.get_name_leafdata());
    if (route_spf_version.is_set || is_set(route_spf_version.yfilter)) leaf_name_data.push_back(route_spf_version.get_name_leafdata());
    if (route_forward_distance.is_set || is_set(route_forward_distance.yfilter)) leaf_name_data.push_back(route_forward_distance.get_name_leafdata());
    if (route_source.is_set || is_set(route_source.yfilter)) leaf_name_data.push_back(route_source.get_name_leafdata());
    if (route_spf_priority.is_set || is_set(route_spf_priority.yfilter)) leaf_name_data.push_back(route_spf_priority.get_name_leafdata());
    if (route_auto_excluded.is_set || is_set(route_auto_excluded.yfilter)) leaf_name_data.push_back(route_auto_excluded.get_name_leafdata());
    if (route_srte_prefix_registered.is_set || is_set(route_srte_prefix_registered.yfilter)) leaf_name_data.push_back(route_srte_prefix_registered.get_name_leafdata());
    if (route_srte_nbr_registered.is_set || is_set(route_srte_nbr_registered.yfilter)) leaf_name_data.push_back(route_srte_nbr_registered.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-update-time")
    {
        if(route_update_time == nullptr)
        {
            route_update_time = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::RouteUpdateTime>();
        }
        return route_update_time;
    }

    if(child_yang_name == "route-fail-time")
    {
        if(route_fail_time == nullptr)
        {
            route_fail_time = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::RouteFailTime>();
        }
        return route_fail_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(route_update_time != nullptr)
    {
        children["route-update-time"] = route_update_time;
    }

    if(route_fail_time != nullptr)
    {
        children["route-fail-time"] = route_fail_time;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-area-id")
    {
        route_area_id = value;
        route_area_id.value_namespace = name_space;
        route_area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-te-metric")
    {
        route_te_metric = value;
        route_te_metric.value_namespace = name_space;
        route_te_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-rib-version")
    {
        route_rib_version = value;
        route_rib_version.value_namespace = name_space;
        route_rib_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-spf-version")
    {
        route_spf_version = value;
        route_spf_version.value_namespace = name_space;
        route_spf_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-forward-distance")
    {
        route_forward_distance = value;
        route_forward_distance.value_namespace = name_space;
        route_forward_distance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-source")
    {
        route_source = value;
        route_source.value_namespace = name_space;
        route_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-spf-priority")
    {
        route_spf_priority = value;
        route_spf_priority.value_namespace = name_space;
        route_spf_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-auto-excluded")
    {
        route_auto_excluded = value;
        route_auto_excluded.value_namespace = name_space;
        route_auto_excluded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-srte-prefix-registered")
    {
        route_srte_prefix_registered = value;
        route_srte_prefix_registered.value_namespace = name_space;
        route_srte_prefix_registered.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-srte-nbr-registered")
    {
        route_srte_nbr_registered = value;
        route_srte_nbr_registered.value_namespace = name_space;
        route_srte_nbr_registered.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-area-id")
    {
        route_area_id.yfilter = yfilter;
    }
    if(value_path == "route-te-metric")
    {
        route_te_metric.yfilter = yfilter;
    }
    if(value_path == "route-rib-version")
    {
        route_rib_version.yfilter = yfilter;
    }
    if(value_path == "route-spf-version")
    {
        route_spf_version.yfilter = yfilter;
    }
    if(value_path == "route-forward-distance")
    {
        route_forward_distance.yfilter = yfilter;
    }
    if(value_path == "route-source")
    {
        route_source.yfilter = yfilter;
    }
    if(value_path == "route-spf-priority")
    {
        route_spf_priority.yfilter = yfilter;
    }
    if(value_path == "route-auto-excluded")
    {
        route_auto_excluded.yfilter = yfilter;
    }
    if(value_path == "route-srte-prefix-registered")
    {
        route_srte_prefix_registered.yfilter = yfilter;
    }
    if(value_path == "route-srte-nbr-registered")
    {
        route_srte_nbr_registered.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-update-time" || name == "route-fail-time" || name == "route-area-id" || name == "route-te-metric" || name == "route-rib-version" || name == "route-spf-version" || name == "route-forward-distance" || name == "route-source" || name == "route-spf-priority" || name == "route-auto-excluded" || name == "route-srte-prefix-registered" || name == "route-srte-nbr-registered")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::RouteUpdateTime::RouteUpdateTime()
    :
    second{YType::uint32, "second"},
    nanosecond{YType::uint32, "nanosecond"}
{

    yang_name = "route-update-time"; yang_parent_name = "route-info"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::RouteUpdateTime::~RouteUpdateTime()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::RouteUpdateTime::has_data() const
{
    return second.is_set
	|| nanosecond.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::RouteUpdateTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(second.yfilter)
	|| ydk::is_set(nanosecond.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::RouteUpdateTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-update-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::RouteUpdateTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());
    if (nanosecond.is_set || is_set(nanosecond.yfilter)) leaf_name_data.push_back(nanosecond.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::RouteUpdateTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::RouteUpdateTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::RouteUpdateTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "second")
    {
        second = value;
        second.value_namespace = name_space;
        second.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanosecond")
    {
        nanosecond = value;
        nanosecond.value_namespace = name_space;
        nanosecond.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::RouteUpdateTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "second")
    {
        second.yfilter = yfilter;
    }
    if(value_path == "nanosecond")
    {
        nanosecond.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::RouteUpdateTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second" || name == "nanosecond")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::RouteFailTime::RouteFailTime()
    :
    second{YType::uint32, "second"},
    nanosecond{YType::uint32, "nanosecond"}
{

    yang_name = "route-fail-time"; yang_parent_name = "route-info"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::RouteFailTime::~RouteFailTime()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::RouteFailTime::has_data() const
{
    return second.is_set
	|| nanosecond.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::RouteFailTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(second.yfilter)
	|| ydk::is_set(nanosecond.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::RouteFailTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-fail-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::RouteFailTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());
    if (nanosecond.is_set || is_set(nanosecond.yfilter)) leaf_name_data.push_back(nanosecond.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::RouteFailTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::RouteFailTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::RouteFailTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "second")
    {
        second = value;
        second.value_namespace = name_space;
        second.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanosecond")
    {
        nanosecond = value;
        nanosecond.value_namespace = name_space;
        nanosecond.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::RouteFailTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "second")
    {
        second.yfilter = yfilter;
    }
    if(value_path == "nanosecond")
    {
        nanosecond.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::RouteFailTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second" || name == "nanosecond")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::RoutePath()
    :
    route_interface_name{YType::str, "route-interface-name"},
    route_next_hop_address{YType::str, "route-next-hop-address"},
    route_source{YType::str, "route-source"},
    route_lsaid{YType::str, "route-lsaid"},
    route_path_is_mcast_intact{YType::boolean, "route-path-is-mcast-intact"},
    route_path_is_ucmp_path{YType::boolean, "route-path-is-ucmp-path"},
    route_metric{YType::uint32, "route-metric"},
    route_path_id{YType::uint16, "route-path-id"},
    lsa_type{YType::uint8, "lsa-type"}
    	,
    route_backup_path(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::RouteBackupPath>())
	,sr_microloop_avoidance_path(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::SrMicroloopAvoidancePath>())
{
    route_backup_path->parent = this;
    sr_microloop_avoidance_path->parent = this;

    yang_name = "route-path"; yang_parent_name = "multicast-intact-backup-route"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::~RoutePath()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::has_data() const
{
    return route_interface_name.is_set
	|| route_next_hop_address.is_set
	|| route_source.is_set
	|| route_lsaid.is_set
	|| route_path_is_mcast_intact.is_set
	|| route_path_is_ucmp_path.is_set
	|| route_metric.is_set
	|| route_path_id.is_set
	|| lsa_type.is_set
	|| (route_backup_path !=  nullptr && route_backup_path->has_data())
	|| (sr_microloop_avoidance_path !=  nullptr && sr_microloop_avoidance_path->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_interface_name.yfilter)
	|| ydk::is_set(route_next_hop_address.yfilter)
	|| ydk::is_set(route_source.yfilter)
	|| ydk::is_set(route_lsaid.yfilter)
	|| ydk::is_set(route_path_is_mcast_intact.yfilter)
	|| ydk::is_set(route_path_is_ucmp_path.yfilter)
	|| ydk::is_set(route_metric.yfilter)
	|| ydk::is_set(route_path_id.yfilter)
	|| ydk::is_set(lsa_type.yfilter)
	|| (route_backup_path !=  nullptr && route_backup_path->has_operation())
	|| (sr_microloop_avoidance_path !=  nullptr && sr_microloop_avoidance_path->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_interface_name.is_set || is_set(route_interface_name.yfilter)) leaf_name_data.push_back(route_interface_name.get_name_leafdata());
    if (route_next_hop_address.is_set || is_set(route_next_hop_address.yfilter)) leaf_name_data.push_back(route_next_hop_address.get_name_leafdata());
    if (route_source.is_set || is_set(route_source.yfilter)) leaf_name_data.push_back(route_source.get_name_leafdata());
    if (route_lsaid.is_set || is_set(route_lsaid.yfilter)) leaf_name_data.push_back(route_lsaid.get_name_leafdata());
    if (route_path_is_mcast_intact.is_set || is_set(route_path_is_mcast_intact.yfilter)) leaf_name_data.push_back(route_path_is_mcast_intact.get_name_leafdata());
    if (route_path_is_ucmp_path.is_set || is_set(route_path_is_ucmp_path.yfilter)) leaf_name_data.push_back(route_path_is_ucmp_path.get_name_leafdata());
    if (route_metric.is_set || is_set(route_metric.yfilter)) leaf_name_data.push_back(route_metric.get_name_leafdata());
    if (route_path_id.is_set || is_set(route_path_id.yfilter)) leaf_name_data.push_back(route_path_id.get_name_leafdata());
    if (lsa_type.is_set || is_set(lsa_type.yfilter)) leaf_name_data.push_back(lsa_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-backup-path")
    {
        if(route_backup_path == nullptr)
        {
            route_backup_path = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::RouteBackupPath>();
        }
        return route_backup_path;
    }

    if(child_yang_name == "sr-microloop-avoidance-path")
    {
        if(sr_microloop_avoidance_path == nullptr)
        {
            sr_microloop_avoidance_path = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::SrMicroloopAvoidancePath>();
        }
        return sr_microloop_avoidance_path;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
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

void Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-interface-name")
    {
        route_interface_name = value;
        route_interface_name.value_namespace = name_space;
        route_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-next-hop-address")
    {
        route_next_hop_address = value;
        route_next_hop_address.value_namespace = name_space;
        route_next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-source")
    {
        route_source = value;
        route_source.value_namespace = name_space;
        route_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-lsaid")
    {
        route_lsaid = value;
        route_lsaid.value_namespace = name_space;
        route_lsaid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-path-is-mcast-intact")
    {
        route_path_is_mcast_intact = value;
        route_path_is_mcast_intact.value_namespace = name_space;
        route_path_is_mcast_intact.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-path-is-ucmp-path")
    {
        route_path_is_ucmp_path = value;
        route_path_is_ucmp_path.value_namespace = name_space;
        route_path_is_ucmp_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-metric")
    {
        route_metric = value;
        route_metric.value_namespace = name_space;
        route_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-path-id")
    {
        route_path_id = value;
        route_path_id.value_namespace = name_space;
        route_path_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-type")
    {
        lsa_type = value;
        lsa_type.value_namespace = name_space;
        lsa_type.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-interface-name")
    {
        route_interface_name.yfilter = yfilter;
    }
    if(value_path == "route-next-hop-address")
    {
        route_next_hop_address.yfilter = yfilter;
    }
    if(value_path == "route-source")
    {
        route_source.yfilter = yfilter;
    }
    if(value_path == "route-lsaid")
    {
        route_lsaid.yfilter = yfilter;
    }
    if(value_path == "route-path-is-mcast-intact")
    {
        route_path_is_mcast_intact.yfilter = yfilter;
    }
    if(value_path == "route-path-is-ucmp-path")
    {
        route_path_is_ucmp_path.yfilter = yfilter;
    }
    if(value_path == "route-metric")
    {
        route_metric.yfilter = yfilter;
    }
    if(value_path == "route-path-id")
    {
        route_path_id.yfilter = yfilter;
    }
    if(value_path == "lsa-type")
    {
        lsa_type.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-backup-path" || name == "sr-microloop-avoidance-path" || name == "route-interface-name" || name == "route-next-hop-address" || name == "route-source" || name == "route-lsaid" || name == "route-path-is-mcast-intact" || name == "route-path-is-ucmp-path" || name == "route-metric" || name == "route-path-id" || name == "lsa-type")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::RouteBackupPath::RouteBackupPath()
    :
    backup_route_interface_name{YType::str, "backup-route-interface-name"},
    backup_route_next_hop_address{YType::str, "backup-route-next-hop-address"},
    backup_route_source{YType::str, "backup-route-source"},
    backup_metric{YType::uint32, "backup-metric"},
    primary_path{YType::boolean, "primary-path"},
    line_card_disjoint{YType::boolean, "line-card-disjoint"},
    downstream{YType::boolean, "downstream"},
    node_protect{YType::boolean, "node-protect"},
    srlg_disjoint{YType::boolean, "srlg-disjoint"},
    backup_remote_lfa{YType::str, "backup-remote-lfa"},
    backup_repair_list_size{YType::uint32, "backup-repair-list-size"},
    backup_tunnel_interface_name{YType::str, "backup-tunnel-interface-name"}
{

    yang_name = "route-backup-path"; yang_parent_name = "route-path"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::RouteBackupPath::~RouteBackupPath()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::RouteBackupPath::has_data() const
{
    for (std::size_t index=0; index<backup_repair.size(); index++)
    {
        if(backup_repair[index]->has_data())
            return true;
    }
    return backup_route_interface_name.is_set
	|| backup_route_next_hop_address.is_set
	|| backup_route_source.is_set
	|| backup_metric.is_set
	|| primary_path.is_set
	|| line_card_disjoint.is_set
	|| downstream.is_set
	|| node_protect.is_set
	|| srlg_disjoint.is_set
	|| backup_remote_lfa.is_set
	|| backup_repair_list_size.is_set
	|| backup_tunnel_interface_name.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::RouteBackupPath::has_operation() const
{
    for (std::size_t index=0; index<backup_repair.size(); index++)
    {
        if(backup_repair[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(backup_route_interface_name.yfilter)
	|| ydk::is_set(backup_route_next_hop_address.yfilter)
	|| ydk::is_set(backup_route_source.yfilter)
	|| ydk::is_set(backup_metric.yfilter)
	|| ydk::is_set(primary_path.yfilter)
	|| ydk::is_set(line_card_disjoint.yfilter)
	|| ydk::is_set(downstream.yfilter)
	|| ydk::is_set(node_protect.yfilter)
	|| ydk::is_set(srlg_disjoint.yfilter)
	|| ydk::is_set(backup_remote_lfa.yfilter)
	|| ydk::is_set(backup_repair_list_size.yfilter)
	|| ydk::is_set(backup_tunnel_interface_name.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::RouteBackupPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-backup-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::RouteBackupPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backup_route_interface_name.is_set || is_set(backup_route_interface_name.yfilter)) leaf_name_data.push_back(backup_route_interface_name.get_name_leafdata());
    if (backup_route_next_hop_address.is_set || is_set(backup_route_next_hop_address.yfilter)) leaf_name_data.push_back(backup_route_next_hop_address.get_name_leafdata());
    if (backup_route_source.is_set || is_set(backup_route_source.yfilter)) leaf_name_data.push_back(backup_route_source.get_name_leafdata());
    if (backup_metric.is_set || is_set(backup_metric.yfilter)) leaf_name_data.push_back(backup_metric.get_name_leafdata());
    if (primary_path.is_set || is_set(primary_path.yfilter)) leaf_name_data.push_back(primary_path.get_name_leafdata());
    if (line_card_disjoint.is_set || is_set(line_card_disjoint.yfilter)) leaf_name_data.push_back(line_card_disjoint.get_name_leafdata());
    if (downstream.is_set || is_set(downstream.yfilter)) leaf_name_data.push_back(downstream.get_name_leafdata());
    if (node_protect.is_set || is_set(node_protect.yfilter)) leaf_name_data.push_back(node_protect.get_name_leafdata());
    if (srlg_disjoint.is_set || is_set(srlg_disjoint.yfilter)) leaf_name_data.push_back(srlg_disjoint.get_name_leafdata());
    if (backup_remote_lfa.is_set || is_set(backup_remote_lfa.yfilter)) leaf_name_data.push_back(backup_remote_lfa.get_name_leafdata());
    if (backup_repair_list_size.is_set || is_set(backup_repair_list_size.yfilter)) leaf_name_data.push_back(backup_repair_list_size.get_name_leafdata());
    if (backup_tunnel_interface_name.is_set || is_set(backup_tunnel_interface_name.yfilter)) leaf_name_data.push_back(backup_tunnel_interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::RouteBackupPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup-repair")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::RouteBackupPath::BackupRepair>();
        c->parent = this;
        backup_repair.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::RouteBackupPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : backup_repair)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::RouteBackupPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "backup-route-interface-name")
    {
        backup_route_interface_name = value;
        backup_route_interface_name.value_namespace = name_space;
        backup_route_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-route-next-hop-address")
    {
        backup_route_next_hop_address = value;
        backup_route_next_hop_address.value_namespace = name_space;
        backup_route_next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-route-source")
    {
        backup_route_source = value;
        backup_route_source.value_namespace = name_space;
        backup_route_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-metric")
    {
        backup_metric = value;
        backup_metric.value_namespace = name_space;
        backup_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "primary-path")
    {
        primary_path = value;
        primary_path.value_namespace = name_space;
        primary_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "line-card-disjoint")
    {
        line_card_disjoint = value;
        line_card_disjoint.value_namespace = name_space;
        line_card_disjoint.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "downstream")
    {
        downstream = value;
        downstream.value_namespace = name_space;
        downstream.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-protect")
    {
        node_protect = value;
        node_protect.value_namespace = name_space;
        node_protect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlg-disjoint")
    {
        srlg_disjoint = value;
        srlg_disjoint.value_namespace = name_space;
        srlg_disjoint.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-remote-lfa")
    {
        backup_remote_lfa = value;
        backup_remote_lfa.value_namespace = name_space;
        backup_remote_lfa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-repair-list-size")
    {
        backup_repair_list_size = value;
        backup_repair_list_size.value_namespace = name_space;
        backup_repair_list_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-tunnel-interface-name")
    {
        backup_tunnel_interface_name = value;
        backup_tunnel_interface_name.value_namespace = name_space;
        backup_tunnel_interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::RouteBackupPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "backup-route-interface-name")
    {
        backup_route_interface_name.yfilter = yfilter;
    }
    if(value_path == "backup-route-next-hop-address")
    {
        backup_route_next_hop_address.yfilter = yfilter;
    }
    if(value_path == "backup-route-source")
    {
        backup_route_source.yfilter = yfilter;
    }
    if(value_path == "backup-metric")
    {
        backup_metric.yfilter = yfilter;
    }
    if(value_path == "primary-path")
    {
        primary_path.yfilter = yfilter;
    }
    if(value_path == "line-card-disjoint")
    {
        line_card_disjoint.yfilter = yfilter;
    }
    if(value_path == "downstream")
    {
        downstream.yfilter = yfilter;
    }
    if(value_path == "node-protect")
    {
        node_protect.yfilter = yfilter;
    }
    if(value_path == "srlg-disjoint")
    {
        srlg_disjoint.yfilter = yfilter;
    }
    if(value_path == "backup-remote-lfa")
    {
        backup_remote_lfa.yfilter = yfilter;
    }
    if(value_path == "backup-repair-list-size")
    {
        backup_repair_list_size.yfilter = yfilter;
    }
    if(value_path == "backup-tunnel-interface-name")
    {
        backup_tunnel_interface_name.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::RouteBackupPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backup-repair" || name == "backup-route-interface-name" || name == "backup-route-next-hop-address" || name == "backup-route-source" || name == "backup-metric" || name == "primary-path" || name == "line-card-disjoint" || name == "downstream" || name == "node-protect" || name == "srlg-disjoint" || name == "backup-remote-lfa" || name == "backup-repair-list-size" || name == "backup-tunnel-interface-name")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::RouteBackupPath::BackupRepair::BackupRepair()
    :
    repair_element_id{YType::str, "repair-element-id"},
    repair_label{YType::uint32, "repair-label"},
    repair_element_type{YType::uint32, "repair-element-type"}
{

    yang_name = "backup-repair"; yang_parent_name = "route-backup-path"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::RouteBackupPath::BackupRepair::~BackupRepair()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::RouteBackupPath::BackupRepair::has_data() const
{
    return repair_element_id.is_set
	|| repair_label.is_set
	|| repair_element_type.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::RouteBackupPath::BackupRepair::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(repair_element_id.yfilter)
	|| ydk::is_set(repair_label.yfilter)
	|| ydk::is_set(repair_element_type.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::RouteBackupPath::BackupRepair::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-repair";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::RouteBackupPath::BackupRepair::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (repair_element_id.is_set || is_set(repair_element_id.yfilter)) leaf_name_data.push_back(repair_element_id.get_name_leafdata());
    if (repair_label.is_set || is_set(repair_label.yfilter)) leaf_name_data.push_back(repair_label.get_name_leafdata());
    if (repair_element_type.is_set || is_set(repair_element_type.yfilter)) leaf_name_data.push_back(repair_element_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::RouteBackupPath::BackupRepair::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::RouteBackupPath::BackupRepair::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::RouteBackupPath::BackupRepair::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "repair-element-id")
    {
        repair_element_id = value;
        repair_element_id.value_namespace = name_space;
        repair_element_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-label")
    {
        repair_label = value;
        repair_label.value_namespace = name_space;
        repair_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type = value;
        repair_element_type.value_namespace = name_space;
        repair_element_type.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::RouteBackupPath::BackupRepair::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "repair-element-id")
    {
        repair_element_id.yfilter = yfilter;
    }
    if(value_path == "repair-label")
    {
        repair_label.yfilter = yfilter;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::RouteBackupPath::BackupRepair::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "repair-element-id" || name == "repair-label" || name == "repair-element-type")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::SrMicroloopAvoidancePath::SrMicroloopAvoidancePath()
    :
    microloop_repair_list_size{YType::uint32, "microloop-repair-list-size"},
    microloop_tunnel_interface_name{YType::str, "microloop-tunnel-interface-name"},
    microloop_strict_spf{YType::boolean, "microloop-strict-spf"}
{

    yang_name = "sr-microloop-avoidance-path"; yang_parent_name = "route-path"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::SrMicroloopAvoidancePath::~SrMicroloopAvoidancePath()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::SrMicroloopAvoidancePath::has_data() const
{
    for (std::size_t index=0; index<microloop_repair.size(); index++)
    {
        if(microloop_repair[index]->has_data())
            return true;
    }
    return microloop_repair_list_size.is_set
	|| microloop_tunnel_interface_name.is_set
	|| microloop_strict_spf.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::SrMicroloopAvoidancePath::has_operation() const
{
    for (std::size_t index=0; index<microloop_repair.size(); index++)
    {
        if(microloop_repair[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(microloop_repair_list_size.yfilter)
	|| ydk::is_set(microloop_tunnel_interface_name.yfilter)
	|| ydk::is_set(microloop_strict_spf.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::SrMicroloopAvoidancePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-microloop-avoidance-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::SrMicroloopAvoidancePath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (microloop_repair_list_size.is_set || is_set(microloop_repair_list_size.yfilter)) leaf_name_data.push_back(microloop_repair_list_size.get_name_leafdata());
    if (microloop_tunnel_interface_name.is_set || is_set(microloop_tunnel_interface_name.yfilter)) leaf_name_data.push_back(microloop_tunnel_interface_name.get_name_leafdata());
    if (microloop_strict_spf.is_set || is_set(microloop_strict_spf.yfilter)) leaf_name_data.push_back(microloop_strict_spf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::SrMicroloopAvoidancePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "microloop-repair")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair>();
        c->parent = this;
        microloop_repair.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::SrMicroloopAvoidancePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : microloop_repair)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::SrMicroloopAvoidancePath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "microloop-repair-list-size")
    {
        microloop_repair_list_size = value;
        microloop_repair_list_size.value_namespace = name_space;
        microloop_repair_list_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "microloop-tunnel-interface-name")
    {
        microloop_tunnel_interface_name = value;
        microloop_tunnel_interface_name.value_namespace = name_space;
        microloop_tunnel_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "microloop-strict-spf")
    {
        microloop_strict_spf = value;
        microloop_strict_spf.value_namespace = name_space;
        microloop_strict_spf.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::SrMicroloopAvoidancePath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "microloop-repair-list-size")
    {
        microloop_repair_list_size.yfilter = yfilter;
    }
    if(value_path == "microloop-tunnel-interface-name")
    {
        microloop_tunnel_interface_name.yfilter = yfilter;
    }
    if(value_path == "microloop-strict-spf")
    {
        microloop_strict_spf.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::SrMicroloopAvoidancePath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "microloop-repair" || name == "microloop-repair-list-size" || name == "microloop-tunnel-interface-name" || name == "microloop-strict-spf")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::MicroloopRepair()
    :
    repair_element_id{YType::str, "repair-element-id"},
    repair_label{YType::uint32, "repair-label"},
    repair_element_type{YType::uint32, "repair-element-type"}
{

    yang_name = "microloop-repair"; yang_parent_name = "sr-microloop-avoidance-path"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::~MicroloopRepair()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::has_data() const
{
    return repair_element_id.is_set
	|| repair_label.is_set
	|| repair_element_type.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(repair_element_id.yfilter)
	|| ydk::is_set(repair_label.yfilter)
	|| ydk::is_set(repair_element_type.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "microloop-repair";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (repair_element_id.is_set || is_set(repair_element_id.yfilter)) leaf_name_data.push_back(repair_element_id.get_name_leafdata());
    if (repair_label.is_set || is_set(repair_label.yfilter)) leaf_name_data.push_back(repair_label.get_name_leafdata());
    if (repair_element_type.is_set || is_set(repair_element_type.yfilter)) leaf_name_data.push_back(repair_element_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "repair-element-id")
    {
        repair_element_id = value;
        repair_element_id.value_namespace = name_space;
        repair_element_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-label")
    {
        repair_label = value;
        repair_label.value_namespace = name_space;
        repair_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type = value;
        repair_element_type.value_namespace = name_space;
        repair_element_type.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "repair-element-id")
    {
        repair_element_id.yfilter = yfilter;
    }
    if(value_path == "repair-label")
    {
        repair_label.yfilter = yfilter;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "repair-element-id" || name == "repair-label" || name == "repair-element-type")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::SummaryInformation::SummaryInformation()
    :
    failures{YType::uint32, "failures"},
    failure_address{YType::str, "failure-address"}
    	,
    failure_time(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::SummaryInformation::FailureTime>())
	,common(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::SummaryInformation::Common>())
{
    failure_time->parent = this;
    common->parent = this;

    yang_name = "summary-information"; yang_parent_name = "route-information"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::SummaryInformation::~SummaryInformation()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::SummaryInformation::has_data() const
{
    return failures.is_set
	|| failure_address.is_set
	|| (failure_time !=  nullptr && failure_time->has_data())
	|| (common !=  nullptr && common->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::SummaryInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(failures.yfilter)
	|| ydk::is_set(failure_address.yfilter)
	|| (failure_time !=  nullptr && failure_time->has_operation())
	|| (common !=  nullptr && common->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::SummaryInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::SummaryInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (failures.is_set || is_set(failures.yfilter)) leaf_name_data.push_back(failures.get_name_leafdata());
    if (failure_address.is_set || is_set(failure_address.yfilter)) leaf_name_data.push_back(failure_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::SummaryInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "failure-time")
    {
        if(failure_time == nullptr)
        {
            failure_time = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::SummaryInformation::FailureTime>();
        }
        return failure_time;
    }

    if(child_yang_name == "common")
    {
        if(common == nullptr)
        {
            common = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::SummaryInformation::Common>();
        }
        return common;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::SummaryInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(failure_time != nullptr)
    {
        children["failure-time"] = failure_time;
    }

    if(common != nullptr)
    {
        children["common"] = common;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::SummaryInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "failures")
    {
        failures = value;
        failures.value_namespace = name_space;
        failures.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "failure-address")
    {
        failure_address = value;
        failure_address.value_namespace = name_space;
        failure_address.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::SummaryInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "failures")
    {
        failures.yfilter = yfilter;
    }
    if(value_path == "failure-address")
    {
        failure_address.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::SummaryInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "failure-time" || name == "common" || name == "failures" || name == "failure-address")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::SummaryInformation::FailureTime::FailureTime()
    :
    second{YType::uint32, "second"},
    nanosecond{YType::uint32, "nanosecond"}
{

    yang_name = "failure-time"; yang_parent_name = "summary-information"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::SummaryInformation::FailureTime::~FailureTime()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::SummaryInformation::FailureTime::has_data() const
{
    return second.is_set
	|| nanosecond.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::SummaryInformation::FailureTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(second.yfilter)
	|| ydk::is_set(nanosecond.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::SummaryInformation::FailureTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "failure-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::SummaryInformation::FailureTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());
    if (nanosecond.is_set || is_set(nanosecond.yfilter)) leaf_name_data.push_back(nanosecond.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::SummaryInformation::FailureTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::SummaryInformation::FailureTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::SummaryInformation::FailureTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "second")
    {
        second = value;
        second.value_namespace = name_space;
        second.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanosecond")
    {
        nanosecond = value;
        nanosecond.value_namespace = name_space;
        nanosecond.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::SummaryInformation::FailureTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "second")
    {
        second.yfilter = yfilter;
    }
    if(value_path == "nanosecond")
    {
        nanosecond.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::SummaryInformation::FailureTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second" || name == "nanosecond")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::SummaryInformation::Common::Common()
    :
    external_type1s{YType::uint32, "external-type1s"},
    external_type2s{YType::uint32, "external-type2s"},
    external_nssa_type1s{YType::uint32, "external-nssa-type1s"},
    external_nssa_type2s{YType::uint32, "external-nssa-type2s"},
    inter_areas{YType::uint32, "inter-areas"},
    intra_areas{YType::uint32, "intra-areas"},
    total{YType::uint32, "total"}
{

    yang_name = "common"; yang_parent_name = "summary-information"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::SummaryInformation::Common::~Common()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::SummaryInformation::Common::has_data() const
{
    return external_type1s.is_set
	|| external_type2s.is_set
	|| external_nssa_type1s.is_set
	|| external_nssa_type2s.is_set
	|| inter_areas.is_set
	|| intra_areas.is_set
	|| total.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::SummaryInformation::Common::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(external_type1s.yfilter)
	|| ydk::is_set(external_type2s.yfilter)
	|| ydk::is_set(external_nssa_type1s.yfilter)
	|| ydk::is_set(external_nssa_type2s.yfilter)
	|| ydk::is_set(inter_areas.yfilter)
	|| ydk::is_set(intra_areas.yfilter)
	|| ydk::is_set(total.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::SummaryInformation::Common::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "common";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::SummaryInformation::Common::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (external_type1s.is_set || is_set(external_type1s.yfilter)) leaf_name_data.push_back(external_type1s.get_name_leafdata());
    if (external_type2s.is_set || is_set(external_type2s.yfilter)) leaf_name_data.push_back(external_type2s.get_name_leafdata());
    if (external_nssa_type1s.is_set || is_set(external_nssa_type1s.yfilter)) leaf_name_data.push_back(external_nssa_type1s.get_name_leafdata());
    if (external_nssa_type2s.is_set || is_set(external_nssa_type2s.yfilter)) leaf_name_data.push_back(external_nssa_type2s.get_name_leafdata());
    if (inter_areas.is_set || is_set(inter_areas.yfilter)) leaf_name_data.push_back(inter_areas.get_name_leafdata());
    if (intra_areas.is_set || is_set(intra_areas.yfilter)) leaf_name_data.push_back(intra_areas.get_name_leafdata());
    if (total.is_set || is_set(total.yfilter)) leaf_name_data.push_back(total.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::SummaryInformation::Common::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::SummaryInformation::Common::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::SummaryInformation::Common::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "external-type1s")
    {
        external_type1s = value;
        external_type1s.value_namespace = name_space;
        external_type1s.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-type2s")
    {
        external_type2s = value;
        external_type2s.value_namespace = name_space;
        external_type2s.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-nssa-type1s")
    {
        external_nssa_type1s = value;
        external_nssa_type1s.value_namespace = name_space;
        external_nssa_type1s.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-nssa-type2s")
    {
        external_nssa_type2s = value;
        external_nssa_type2s.value_namespace = name_space;
        external_nssa_type2s.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inter-areas")
    {
        inter_areas = value;
        inter_areas.value_namespace = name_space;
        inter_areas.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "intra-areas")
    {
        intra_areas = value;
        intra_areas.value_namespace = name_space;
        intra_areas.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total")
    {
        total = value;
        total.value_namespace = name_space;
        total.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::SummaryInformation::Common::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "external-type1s")
    {
        external_type1s.yfilter = yfilter;
    }
    if(value_path == "external-type2s")
    {
        external_type2s.yfilter = yfilter;
    }
    if(value_path == "external-nssa-type1s")
    {
        external_nssa_type1s.yfilter = yfilter;
    }
    if(value_path == "external-nssa-type2s")
    {
        external_nssa_type2s.yfilter = yfilter;
    }
    if(value_path == "inter-areas")
    {
        inter_areas.yfilter = yfilter;
    }
    if(value_path == "intra-areas")
    {
        intra_areas.yfilter = yfilter;
    }
    if(value_path == "total")
    {
        total.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::SummaryInformation::Common::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "external-type1s" || name == "external-type2s" || name == "external-nssa-type1s" || name == "external-nssa-type2s" || name == "inter-areas" || name == "intra-areas" || name == "total")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoutes()
{

    yang_name = "connected-routes"; yang_parent_name = "route-information"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::~ConnectedRoutes()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::has_data() const
{
    for (std::size_t index=0; index<connected_route.size(); index++)
    {
        if(connected_route[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::has_operation() const
{
    for (std::size_t index=0; index<connected_route.size(); index++)
    {
        if(connected_route[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connected-routes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "connected-route")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute>();
        c->parent = this;
        connected_route.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : connected_route)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "connected-route")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::ConnectedRoute()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint32, "prefix-length"},
    route_prefix{YType::str, "route-prefix"},
    route_prefix_length{YType::uint32, "route-prefix-length"},
    route_metric{YType::uint32, "route-metric"},
    route_type{YType::enumeration, "route-type"},
    route_connected{YType::boolean, "route-connected"}
    	,
    route_info(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo>())
{
    route_info->parent = this;

    yang_name = "connected-route"; yang_parent_name = "connected-routes"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::~ConnectedRoute()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::has_data() const
{
    for (std::size_t index=0; index<route_path.size(); index++)
    {
        if(route_path[index]->has_data())
            return true;
    }
    return prefix.is_set
	|| prefix_length.is_set
	|| route_prefix.is_set
	|| route_prefix_length.is_set
	|| route_metric.is_set
	|| route_type.is_set
	|| route_connected.is_set
	|| (route_info !=  nullptr && route_info->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::has_operation() const
{
    for (std::size_t index=0; index<route_path.size(); index++)
    {
        if(route_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(route_prefix.yfilter)
	|| ydk::is_set(route_prefix_length.yfilter)
	|| ydk::is_set(route_metric.yfilter)
	|| ydk::is_set(route_type.yfilter)
	|| ydk::is_set(route_connected.yfilter)
	|| (route_info !=  nullptr && route_info->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connected-route";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (route_prefix.is_set || is_set(route_prefix.yfilter)) leaf_name_data.push_back(route_prefix.get_name_leafdata());
    if (route_prefix_length.is_set || is_set(route_prefix_length.yfilter)) leaf_name_data.push_back(route_prefix_length.get_name_leafdata());
    if (route_metric.is_set || is_set(route_metric.yfilter)) leaf_name_data.push_back(route_metric.get_name_leafdata());
    if (route_type.is_set || is_set(route_type.yfilter)) leaf_name_data.push_back(route_type.get_name_leafdata());
    if (route_connected.is_set || is_set(route_connected.yfilter)) leaf_name_data.push_back(route_connected.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-info")
    {
        if(route_info == nullptr)
        {
            route_info = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo>();
        }
        return route_info;
    }

    if(child_yang_name == "route-path")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath>();
        c->parent = this;
        route_path.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(route_info != nullptr)
    {
        children["route-info"] = route_info;
    }

    count = 0;
    for (auto const & c : route_path)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-prefix")
    {
        route_prefix = value;
        route_prefix.value_namespace = name_space;
        route_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-prefix-length")
    {
        route_prefix_length = value;
        route_prefix_length.value_namespace = name_space;
        route_prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-metric")
    {
        route_metric = value;
        route_metric.value_namespace = name_space;
        route_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-type")
    {
        route_type = value;
        route_type.value_namespace = name_space;
        route_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-connected")
    {
        route_connected = value;
        route_connected.value_namespace = name_space;
        route_connected.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "route-prefix")
    {
        route_prefix.yfilter = yfilter;
    }
    if(value_path == "route-prefix-length")
    {
        route_prefix_length.yfilter = yfilter;
    }
    if(value_path == "route-metric")
    {
        route_metric.yfilter = yfilter;
    }
    if(value_path == "route-type")
    {
        route_type.yfilter = yfilter;
    }
    if(value_path == "route-connected")
    {
        route_connected.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-info" || name == "route-path" || name == "prefix" || name == "prefix-length" || name == "route-prefix" || name == "route-prefix-length" || name == "route-metric" || name == "route-type" || name == "route-connected")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::RouteInfo()
    :
    route_area_id{YType::uint32, "route-area-id"},
    route_te_metric{YType::uint32, "route-te-metric"},
    route_rib_version{YType::uint32, "route-rib-version"},
    route_spf_version{YType::uint64, "route-spf-version"},
    route_forward_distance{YType::uint32, "route-forward-distance"},
    route_source{YType::uint16, "route-source"},
    route_spf_priority{YType::uint8, "route-spf-priority"},
    route_auto_excluded{YType::boolean, "route-auto-excluded"},
    route_srte_prefix_registered{YType::boolean, "route-srte-prefix-registered"},
    route_srte_nbr_registered{YType::uint16, "route-srte-nbr-registered"}
    	,
    route_update_time(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::RouteUpdateTime>())
	,route_fail_time(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::RouteFailTime>())
{
    route_update_time->parent = this;
    route_fail_time->parent = this;

    yang_name = "route-info"; yang_parent_name = "connected-route"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::~RouteInfo()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::has_data() const
{
    return route_area_id.is_set
	|| route_te_metric.is_set
	|| route_rib_version.is_set
	|| route_spf_version.is_set
	|| route_forward_distance.is_set
	|| route_source.is_set
	|| route_spf_priority.is_set
	|| route_auto_excluded.is_set
	|| route_srte_prefix_registered.is_set
	|| route_srte_nbr_registered.is_set
	|| (route_update_time !=  nullptr && route_update_time->has_data())
	|| (route_fail_time !=  nullptr && route_fail_time->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_area_id.yfilter)
	|| ydk::is_set(route_te_metric.yfilter)
	|| ydk::is_set(route_rib_version.yfilter)
	|| ydk::is_set(route_spf_version.yfilter)
	|| ydk::is_set(route_forward_distance.yfilter)
	|| ydk::is_set(route_source.yfilter)
	|| ydk::is_set(route_spf_priority.yfilter)
	|| ydk::is_set(route_auto_excluded.yfilter)
	|| ydk::is_set(route_srte_prefix_registered.yfilter)
	|| ydk::is_set(route_srte_nbr_registered.yfilter)
	|| (route_update_time !=  nullptr && route_update_time->has_operation())
	|| (route_fail_time !=  nullptr && route_fail_time->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_area_id.is_set || is_set(route_area_id.yfilter)) leaf_name_data.push_back(route_area_id.get_name_leafdata());
    if (route_te_metric.is_set || is_set(route_te_metric.yfilter)) leaf_name_data.push_back(route_te_metric.get_name_leafdata());
    if (route_rib_version.is_set || is_set(route_rib_version.yfilter)) leaf_name_data.push_back(route_rib_version.get_name_leafdata());
    if (route_spf_version.is_set || is_set(route_spf_version.yfilter)) leaf_name_data.push_back(route_spf_version.get_name_leafdata());
    if (route_forward_distance.is_set || is_set(route_forward_distance.yfilter)) leaf_name_data.push_back(route_forward_distance.get_name_leafdata());
    if (route_source.is_set || is_set(route_source.yfilter)) leaf_name_data.push_back(route_source.get_name_leafdata());
    if (route_spf_priority.is_set || is_set(route_spf_priority.yfilter)) leaf_name_data.push_back(route_spf_priority.get_name_leafdata());
    if (route_auto_excluded.is_set || is_set(route_auto_excluded.yfilter)) leaf_name_data.push_back(route_auto_excluded.get_name_leafdata());
    if (route_srte_prefix_registered.is_set || is_set(route_srte_prefix_registered.yfilter)) leaf_name_data.push_back(route_srte_prefix_registered.get_name_leafdata());
    if (route_srte_nbr_registered.is_set || is_set(route_srte_nbr_registered.yfilter)) leaf_name_data.push_back(route_srte_nbr_registered.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-update-time")
    {
        if(route_update_time == nullptr)
        {
            route_update_time = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::RouteUpdateTime>();
        }
        return route_update_time;
    }

    if(child_yang_name == "route-fail-time")
    {
        if(route_fail_time == nullptr)
        {
            route_fail_time = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::RouteFailTime>();
        }
        return route_fail_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(route_update_time != nullptr)
    {
        children["route-update-time"] = route_update_time;
    }

    if(route_fail_time != nullptr)
    {
        children["route-fail-time"] = route_fail_time;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-area-id")
    {
        route_area_id = value;
        route_area_id.value_namespace = name_space;
        route_area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-te-metric")
    {
        route_te_metric = value;
        route_te_metric.value_namespace = name_space;
        route_te_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-rib-version")
    {
        route_rib_version = value;
        route_rib_version.value_namespace = name_space;
        route_rib_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-spf-version")
    {
        route_spf_version = value;
        route_spf_version.value_namespace = name_space;
        route_spf_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-forward-distance")
    {
        route_forward_distance = value;
        route_forward_distance.value_namespace = name_space;
        route_forward_distance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-source")
    {
        route_source = value;
        route_source.value_namespace = name_space;
        route_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-spf-priority")
    {
        route_spf_priority = value;
        route_spf_priority.value_namespace = name_space;
        route_spf_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-auto-excluded")
    {
        route_auto_excluded = value;
        route_auto_excluded.value_namespace = name_space;
        route_auto_excluded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-srte-prefix-registered")
    {
        route_srte_prefix_registered = value;
        route_srte_prefix_registered.value_namespace = name_space;
        route_srte_prefix_registered.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-srte-nbr-registered")
    {
        route_srte_nbr_registered = value;
        route_srte_nbr_registered.value_namespace = name_space;
        route_srte_nbr_registered.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-area-id")
    {
        route_area_id.yfilter = yfilter;
    }
    if(value_path == "route-te-metric")
    {
        route_te_metric.yfilter = yfilter;
    }
    if(value_path == "route-rib-version")
    {
        route_rib_version.yfilter = yfilter;
    }
    if(value_path == "route-spf-version")
    {
        route_spf_version.yfilter = yfilter;
    }
    if(value_path == "route-forward-distance")
    {
        route_forward_distance.yfilter = yfilter;
    }
    if(value_path == "route-source")
    {
        route_source.yfilter = yfilter;
    }
    if(value_path == "route-spf-priority")
    {
        route_spf_priority.yfilter = yfilter;
    }
    if(value_path == "route-auto-excluded")
    {
        route_auto_excluded.yfilter = yfilter;
    }
    if(value_path == "route-srte-prefix-registered")
    {
        route_srte_prefix_registered.yfilter = yfilter;
    }
    if(value_path == "route-srte-nbr-registered")
    {
        route_srte_nbr_registered.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-update-time" || name == "route-fail-time" || name == "route-area-id" || name == "route-te-metric" || name == "route-rib-version" || name == "route-spf-version" || name == "route-forward-distance" || name == "route-source" || name == "route-spf-priority" || name == "route-auto-excluded" || name == "route-srte-prefix-registered" || name == "route-srte-nbr-registered")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::RouteUpdateTime::RouteUpdateTime()
    :
    second{YType::uint32, "second"},
    nanosecond{YType::uint32, "nanosecond"}
{

    yang_name = "route-update-time"; yang_parent_name = "route-info"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::RouteUpdateTime::~RouteUpdateTime()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::RouteUpdateTime::has_data() const
{
    return second.is_set
	|| nanosecond.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::RouteUpdateTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(second.yfilter)
	|| ydk::is_set(nanosecond.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::RouteUpdateTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-update-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::RouteUpdateTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());
    if (nanosecond.is_set || is_set(nanosecond.yfilter)) leaf_name_data.push_back(nanosecond.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::RouteUpdateTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::RouteUpdateTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::RouteUpdateTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "second")
    {
        second = value;
        second.value_namespace = name_space;
        second.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanosecond")
    {
        nanosecond = value;
        nanosecond.value_namespace = name_space;
        nanosecond.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::RouteUpdateTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "second")
    {
        second.yfilter = yfilter;
    }
    if(value_path == "nanosecond")
    {
        nanosecond.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::RouteUpdateTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second" || name == "nanosecond")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::RouteFailTime::RouteFailTime()
    :
    second{YType::uint32, "second"},
    nanosecond{YType::uint32, "nanosecond"}
{

    yang_name = "route-fail-time"; yang_parent_name = "route-info"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::RouteFailTime::~RouteFailTime()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::RouteFailTime::has_data() const
{
    return second.is_set
	|| nanosecond.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::RouteFailTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(second.yfilter)
	|| ydk::is_set(nanosecond.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::RouteFailTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-fail-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::RouteFailTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());
    if (nanosecond.is_set || is_set(nanosecond.yfilter)) leaf_name_data.push_back(nanosecond.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::RouteFailTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::RouteFailTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::RouteFailTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "second")
    {
        second = value;
        second.value_namespace = name_space;
        second.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanosecond")
    {
        nanosecond = value;
        nanosecond.value_namespace = name_space;
        nanosecond.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::RouteFailTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "second")
    {
        second.yfilter = yfilter;
    }
    if(value_path == "nanosecond")
    {
        nanosecond.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::RouteFailTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second" || name == "nanosecond")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::RoutePath()
    :
    route_interface_name{YType::str, "route-interface-name"},
    route_next_hop_address{YType::str, "route-next-hop-address"},
    route_source{YType::str, "route-source"},
    route_lsaid{YType::str, "route-lsaid"},
    route_path_is_mcast_intact{YType::boolean, "route-path-is-mcast-intact"},
    route_path_is_ucmp_path{YType::boolean, "route-path-is-ucmp-path"},
    route_metric{YType::uint32, "route-metric"},
    lsa_type{YType::uint8, "lsa-type"},
    area_id{YType::uint32, "area-id"},
    area_format{YType::boolean, "area-format"}
    	,
    sr_microloop_avoidance_path(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::SrMicroloopAvoidancePath>())
{
    sr_microloop_avoidance_path->parent = this;

    yang_name = "route-path"; yang_parent_name = "connected-route"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::~RoutePath()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::has_data() const
{
    return route_interface_name.is_set
	|| route_next_hop_address.is_set
	|| route_source.is_set
	|| route_lsaid.is_set
	|| route_path_is_mcast_intact.is_set
	|| route_path_is_ucmp_path.is_set
	|| route_metric.is_set
	|| lsa_type.is_set
	|| area_id.is_set
	|| area_format.is_set
	|| (sr_microloop_avoidance_path !=  nullptr && sr_microloop_avoidance_path->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_interface_name.yfilter)
	|| ydk::is_set(route_next_hop_address.yfilter)
	|| ydk::is_set(route_source.yfilter)
	|| ydk::is_set(route_lsaid.yfilter)
	|| ydk::is_set(route_path_is_mcast_intact.yfilter)
	|| ydk::is_set(route_path_is_ucmp_path.yfilter)
	|| ydk::is_set(route_metric.yfilter)
	|| ydk::is_set(lsa_type.yfilter)
	|| ydk::is_set(area_id.yfilter)
	|| ydk::is_set(area_format.yfilter)
	|| (sr_microloop_avoidance_path !=  nullptr && sr_microloop_avoidance_path->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_interface_name.is_set || is_set(route_interface_name.yfilter)) leaf_name_data.push_back(route_interface_name.get_name_leafdata());
    if (route_next_hop_address.is_set || is_set(route_next_hop_address.yfilter)) leaf_name_data.push_back(route_next_hop_address.get_name_leafdata());
    if (route_source.is_set || is_set(route_source.yfilter)) leaf_name_data.push_back(route_source.get_name_leafdata());
    if (route_lsaid.is_set || is_set(route_lsaid.yfilter)) leaf_name_data.push_back(route_lsaid.get_name_leafdata());
    if (route_path_is_mcast_intact.is_set || is_set(route_path_is_mcast_intact.yfilter)) leaf_name_data.push_back(route_path_is_mcast_intact.get_name_leafdata());
    if (route_path_is_ucmp_path.is_set || is_set(route_path_is_ucmp_path.yfilter)) leaf_name_data.push_back(route_path_is_ucmp_path.get_name_leafdata());
    if (route_metric.is_set || is_set(route_metric.yfilter)) leaf_name_data.push_back(route_metric.get_name_leafdata());
    if (lsa_type.is_set || is_set(lsa_type.yfilter)) leaf_name_data.push_back(lsa_type.get_name_leafdata());
    if (area_id.is_set || is_set(area_id.yfilter)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (area_format.is_set || is_set(area_format.yfilter)) leaf_name_data.push_back(area_format.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sr-microloop-avoidance-path")
    {
        if(sr_microloop_avoidance_path == nullptr)
        {
            sr_microloop_avoidance_path = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::SrMicroloopAvoidancePath>();
        }
        return sr_microloop_avoidance_path;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(sr_microloop_avoidance_path != nullptr)
    {
        children["sr-microloop-avoidance-path"] = sr_microloop_avoidance_path;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-interface-name")
    {
        route_interface_name = value;
        route_interface_name.value_namespace = name_space;
        route_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-next-hop-address")
    {
        route_next_hop_address = value;
        route_next_hop_address.value_namespace = name_space;
        route_next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-source")
    {
        route_source = value;
        route_source.value_namespace = name_space;
        route_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-lsaid")
    {
        route_lsaid = value;
        route_lsaid.value_namespace = name_space;
        route_lsaid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-path-is-mcast-intact")
    {
        route_path_is_mcast_intact = value;
        route_path_is_mcast_intact.value_namespace = name_space;
        route_path_is_mcast_intact.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-path-is-ucmp-path")
    {
        route_path_is_ucmp_path = value;
        route_path_is_ucmp_path.value_namespace = name_space;
        route_path_is_ucmp_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-metric")
    {
        route_metric = value;
        route_metric.value_namespace = name_space;
        route_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-type")
    {
        lsa_type = value;
        lsa_type.value_namespace = name_space;
        lsa_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-id")
    {
        area_id = value;
        area_id.value_namespace = name_space;
        area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-format")
    {
        area_format = value;
        area_format.value_namespace = name_space;
        area_format.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-interface-name")
    {
        route_interface_name.yfilter = yfilter;
    }
    if(value_path == "route-next-hop-address")
    {
        route_next_hop_address.yfilter = yfilter;
    }
    if(value_path == "route-source")
    {
        route_source.yfilter = yfilter;
    }
    if(value_path == "route-lsaid")
    {
        route_lsaid.yfilter = yfilter;
    }
    if(value_path == "route-path-is-mcast-intact")
    {
        route_path_is_mcast_intact.yfilter = yfilter;
    }
    if(value_path == "route-path-is-ucmp-path")
    {
        route_path_is_ucmp_path.yfilter = yfilter;
    }
    if(value_path == "route-metric")
    {
        route_metric.yfilter = yfilter;
    }
    if(value_path == "lsa-type")
    {
        lsa_type.yfilter = yfilter;
    }
    if(value_path == "area-id")
    {
        area_id.yfilter = yfilter;
    }
    if(value_path == "area-format")
    {
        area_format.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sr-microloop-avoidance-path" || name == "route-interface-name" || name == "route-next-hop-address" || name == "route-source" || name == "route-lsaid" || name == "route-path-is-mcast-intact" || name == "route-path-is-ucmp-path" || name == "route-metric" || name == "lsa-type" || name == "area-id" || name == "area-format")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::SrMicroloopAvoidancePath::SrMicroloopAvoidancePath()
    :
    microloop_repair_list_size{YType::uint32, "microloop-repair-list-size"},
    microloop_tunnel_interface_name{YType::str, "microloop-tunnel-interface-name"},
    microloop_strict_spf{YType::boolean, "microloop-strict-spf"}
{

    yang_name = "sr-microloop-avoidance-path"; yang_parent_name = "route-path"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::SrMicroloopAvoidancePath::~SrMicroloopAvoidancePath()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::SrMicroloopAvoidancePath::has_data() const
{
    for (std::size_t index=0; index<microloop_repair.size(); index++)
    {
        if(microloop_repair[index]->has_data())
            return true;
    }
    return microloop_repair_list_size.is_set
	|| microloop_tunnel_interface_name.is_set
	|| microloop_strict_spf.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::SrMicroloopAvoidancePath::has_operation() const
{
    for (std::size_t index=0; index<microloop_repair.size(); index++)
    {
        if(microloop_repair[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(microloop_repair_list_size.yfilter)
	|| ydk::is_set(microloop_tunnel_interface_name.yfilter)
	|| ydk::is_set(microloop_strict_spf.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::SrMicroloopAvoidancePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-microloop-avoidance-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::SrMicroloopAvoidancePath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (microloop_repair_list_size.is_set || is_set(microloop_repair_list_size.yfilter)) leaf_name_data.push_back(microloop_repair_list_size.get_name_leafdata());
    if (microloop_tunnel_interface_name.is_set || is_set(microloop_tunnel_interface_name.yfilter)) leaf_name_data.push_back(microloop_tunnel_interface_name.get_name_leafdata());
    if (microloop_strict_spf.is_set || is_set(microloop_strict_spf.yfilter)) leaf_name_data.push_back(microloop_strict_spf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::SrMicroloopAvoidancePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "microloop-repair")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair>();
        c->parent = this;
        microloop_repair.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::SrMicroloopAvoidancePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : microloop_repair)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::SrMicroloopAvoidancePath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "microloop-repair-list-size")
    {
        microloop_repair_list_size = value;
        microloop_repair_list_size.value_namespace = name_space;
        microloop_repair_list_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "microloop-tunnel-interface-name")
    {
        microloop_tunnel_interface_name = value;
        microloop_tunnel_interface_name.value_namespace = name_space;
        microloop_tunnel_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "microloop-strict-spf")
    {
        microloop_strict_spf = value;
        microloop_strict_spf.value_namespace = name_space;
        microloop_strict_spf.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::SrMicroloopAvoidancePath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "microloop-repair-list-size")
    {
        microloop_repair_list_size.yfilter = yfilter;
    }
    if(value_path == "microloop-tunnel-interface-name")
    {
        microloop_tunnel_interface_name.yfilter = yfilter;
    }
    if(value_path == "microloop-strict-spf")
    {
        microloop_strict_spf.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::SrMicroloopAvoidancePath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "microloop-repair" || name == "microloop-repair-list-size" || name == "microloop-tunnel-interface-name" || name == "microloop-strict-spf")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::MicroloopRepair()
    :
    repair_element_id{YType::str, "repair-element-id"},
    repair_label{YType::uint32, "repair-label"},
    repair_element_type{YType::uint32, "repair-element-type"}
{

    yang_name = "microloop-repair"; yang_parent_name = "sr-microloop-avoidance-path"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::~MicroloopRepair()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::has_data() const
{
    return repair_element_id.is_set
	|| repair_label.is_set
	|| repair_element_type.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(repair_element_id.yfilter)
	|| ydk::is_set(repair_label.yfilter)
	|| ydk::is_set(repair_element_type.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "microloop-repair";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (repair_element_id.is_set || is_set(repair_element_id.yfilter)) leaf_name_data.push_back(repair_element_id.get_name_leafdata());
    if (repair_label.is_set || is_set(repair_label.yfilter)) leaf_name_data.push_back(repair_label.get_name_leafdata());
    if (repair_element_type.is_set || is_set(repair_element_type.yfilter)) leaf_name_data.push_back(repair_element_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "repair-element-id")
    {
        repair_element_id = value;
        repair_element_id.value_namespace = name_space;
        repair_element_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-label")
    {
        repair_label = value;
        repair_label.value_namespace = name_space;
        repair_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type = value;
        repair_element_type.value_namespace = name_space;
        repair_element_type.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "repair-element-id")
    {
        repair_element_id.yfilter = yfilter;
    }
    if(value_path == "repair-label")
    {
        repair_label.yfilter = yfilter;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "repair-element-id" || name == "repair-label" || name == "repair-element-type")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoutes()
{

    yang_name = "local-routes"; yang_parent_name = "route-information"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::~LocalRoutes()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::has_data() const
{
    for (std::size_t index=0; index<local_route.size(); index++)
    {
        if(local_route[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::has_operation() const
{
    for (std::size_t index=0; index<local_route.size(); index++)
    {
        if(local_route[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-routes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "local-route")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute>();
        c->parent = this;
        local_route.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : local_route)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-route")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::LocalRoute()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint32, "prefix-length"},
    route_prefix{YType::str, "route-prefix"},
    route_prefix_length{YType::uint32, "route-prefix-length"},
    route_metric{YType::uint32, "route-metric"},
    route_type{YType::enumeration, "route-type"},
    route_connected{YType::boolean, "route-connected"}
    	,
    route_info(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo>())
{
    route_info->parent = this;

    yang_name = "local-route"; yang_parent_name = "local-routes"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::~LocalRoute()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::has_data() const
{
    for (std::size_t index=0; index<route_path.size(); index++)
    {
        if(route_path[index]->has_data())
            return true;
    }
    return prefix.is_set
	|| prefix_length.is_set
	|| route_prefix.is_set
	|| route_prefix_length.is_set
	|| route_metric.is_set
	|| route_type.is_set
	|| route_connected.is_set
	|| (route_info !=  nullptr && route_info->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::has_operation() const
{
    for (std::size_t index=0; index<route_path.size(); index++)
    {
        if(route_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(route_prefix.yfilter)
	|| ydk::is_set(route_prefix_length.yfilter)
	|| ydk::is_set(route_metric.yfilter)
	|| ydk::is_set(route_type.yfilter)
	|| ydk::is_set(route_connected.yfilter)
	|| (route_info !=  nullptr && route_info->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-route";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (route_prefix.is_set || is_set(route_prefix.yfilter)) leaf_name_data.push_back(route_prefix.get_name_leafdata());
    if (route_prefix_length.is_set || is_set(route_prefix_length.yfilter)) leaf_name_data.push_back(route_prefix_length.get_name_leafdata());
    if (route_metric.is_set || is_set(route_metric.yfilter)) leaf_name_data.push_back(route_metric.get_name_leafdata());
    if (route_type.is_set || is_set(route_type.yfilter)) leaf_name_data.push_back(route_type.get_name_leafdata());
    if (route_connected.is_set || is_set(route_connected.yfilter)) leaf_name_data.push_back(route_connected.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-info")
    {
        if(route_info == nullptr)
        {
            route_info = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo>();
        }
        return route_info;
    }

    if(child_yang_name == "route-path")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath>();
        c->parent = this;
        route_path.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(route_info != nullptr)
    {
        children["route-info"] = route_info;
    }

    count = 0;
    for (auto const & c : route_path)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-prefix")
    {
        route_prefix = value;
        route_prefix.value_namespace = name_space;
        route_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-prefix-length")
    {
        route_prefix_length = value;
        route_prefix_length.value_namespace = name_space;
        route_prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-metric")
    {
        route_metric = value;
        route_metric.value_namespace = name_space;
        route_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-type")
    {
        route_type = value;
        route_type.value_namespace = name_space;
        route_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-connected")
    {
        route_connected = value;
        route_connected.value_namespace = name_space;
        route_connected.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "route-prefix")
    {
        route_prefix.yfilter = yfilter;
    }
    if(value_path == "route-prefix-length")
    {
        route_prefix_length.yfilter = yfilter;
    }
    if(value_path == "route-metric")
    {
        route_metric.yfilter = yfilter;
    }
    if(value_path == "route-type")
    {
        route_type.yfilter = yfilter;
    }
    if(value_path == "route-connected")
    {
        route_connected.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-info" || name == "route-path" || name == "prefix" || name == "prefix-length" || name == "route-prefix" || name == "route-prefix-length" || name == "route-metric" || name == "route-type" || name == "route-connected")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::RouteInfo()
    :
    route_area_id{YType::uint32, "route-area-id"},
    route_te_metric{YType::uint32, "route-te-metric"},
    route_rib_version{YType::uint32, "route-rib-version"},
    route_spf_version{YType::uint64, "route-spf-version"},
    route_forward_distance{YType::uint32, "route-forward-distance"},
    route_source{YType::uint16, "route-source"},
    route_spf_priority{YType::uint8, "route-spf-priority"},
    route_auto_excluded{YType::boolean, "route-auto-excluded"},
    route_srte_prefix_registered{YType::boolean, "route-srte-prefix-registered"},
    route_srte_nbr_registered{YType::uint16, "route-srte-nbr-registered"}
    	,
    route_update_time(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::RouteUpdateTime>())
	,route_fail_time(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::RouteFailTime>())
{
    route_update_time->parent = this;
    route_fail_time->parent = this;

    yang_name = "route-info"; yang_parent_name = "local-route"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::~RouteInfo()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::has_data() const
{
    return route_area_id.is_set
	|| route_te_metric.is_set
	|| route_rib_version.is_set
	|| route_spf_version.is_set
	|| route_forward_distance.is_set
	|| route_source.is_set
	|| route_spf_priority.is_set
	|| route_auto_excluded.is_set
	|| route_srte_prefix_registered.is_set
	|| route_srte_nbr_registered.is_set
	|| (route_update_time !=  nullptr && route_update_time->has_data())
	|| (route_fail_time !=  nullptr && route_fail_time->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_area_id.yfilter)
	|| ydk::is_set(route_te_metric.yfilter)
	|| ydk::is_set(route_rib_version.yfilter)
	|| ydk::is_set(route_spf_version.yfilter)
	|| ydk::is_set(route_forward_distance.yfilter)
	|| ydk::is_set(route_source.yfilter)
	|| ydk::is_set(route_spf_priority.yfilter)
	|| ydk::is_set(route_auto_excluded.yfilter)
	|| ydk::is_set(route_srte_prefix_registered.yfilter)
	|| ydk::is_set(route_srte_nbr_registered.yfilter)
	|| (route_update_time !=  nullptr && route_update_time->has_operation())
	|| (route_fail_time !=  nullptr && route_fail_time->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_area_id.is_set || is_set(route_area_id.yfilter)) leaf_name_data.push_back(route_area_id.get_name_leafdata());
    if (route_te_metric.is_set || is_set(route_te_metric.yfilter)) leaf_name_data.push_back(route_te_metric.get_name_leafdata());
    if (route_rib_version.is_set || is_set(route_rib_version.yfilter)) leaf_name_data.push_back(route_rib_version.get_name_leafdata());
    if (route_spf_version.is_set || is_set(route_spf_version.yfilter)) leaf_name_data.push_back(route_spf_version.get_name_leafdata());
    if (route_forward_distance.is_set || is_set(route_forward_distance.yfilter)) leaf_name_data.push_back(route_forward_distance.get_name_leafdata());
    if (route_source.is_set || is_set(route_source.yfilter)) leaf_name_data.push_back(route_source.get_name_leafdata());
    if (route_spf_priority.is_set || is_set(route_spf_priority.yfilter)) leaf_name_data.push_back(route_spf_priority.get_name_leafdata());
    if (route_auto_excluded.is_set || is_set(route_auto_excluded.yfilter)) leaf_name_data.push_back(route_auto_excluded.get_name_leafdata());
    if (route_srte_prefix_registered.is_set || is_set(route_srte_prefix_registered.yfilter)) leaf_name_data.push_back(route_srte_prefix_registered.get_name_leafdata());
    if (route_srte_nbr_registered.is_set || is_set(route_srte_nbr_registered.yfilter)) leaf_name_data.push_back(route_srte_nbr_registered.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-update-time")
    {
        if(route_update_time == nullptr)
        {
            route_update_time = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::RouteUpdateTime>();
        }
        return route_update_time;
    }

    if(child_yang_name == "route-fail-time")
    {
        if(route_fail_time == nullptr)
        {
            route_fail_time = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::RouteFailTime>();
        }
        return route_fail_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(route_update_time != nullptr)
    {
        children["route-update-time"] = route_update_time;
    }

    if(route_fail_time != nullptr)
    {
        children["route-fail-time"] = route_fail_time;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-area-id")
    {
        route_area_id = value;
        route_area_id.value_namespace = name_space;
        route_area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-te-metric")
    {
        route_te_metric = value;
        route_te_metric.value_namespace = name_space;
        route_te_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-rib-version")
    {
        route_rib_version = value;
        route_rib_version.value_namespace = name_space;
        route_rib_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-spf-version")
    {
        route_spf_version = value;
        route_spf_version.value_namespace = name_space;
        route_spf_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-forward-distance")
    {
        route_forward_distance = value;
        route_forward_distance.value_namespace = name_space;
        route_forward_distance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-source")
    {
        route_source = value;
        route_source.value_namespace = name_space;
        route_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-spf-priority")
    {
        route_spf_priority = value;
        route_spf_priority.value_namespace = name_space;
        route_spf_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-auto-excluded")
    {
        route_auto_excluded = value;
        route_auto_excluded.value_namespace = name_space;
        route_auto_excluded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-srte-prefix-registered")
    {
        route_srte_prefix_registered = value;
        route_srte_prefix_registered.value_namespace = name_space;
        route_srte_prefix_registered.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-srte-nbr-registered")
    {
        route_srte_nbr_registered = value;
        route_srte_nbr_registered.value_namespace = name_space;
        route_srte_nbr_registered.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-area-id")
    {
        route_area_id.yfilter = yfilter;
    }
    if(value_path == "route-te-metric")
    {
        route_te_metric.yfilter = yfilter;
    }
    if(value_path == "route-rib-version")
    {
        route_rib_version.yfilter = yfilter;
    }
    if(value_path == "route-spf-version")
    {
        route_spf_version.yfilter = yfilter;
    }
    if(value_path == "route-forward-distance")
    {
        route_forward_distance.yfilter = yfilter;
    }
    if(value_path == "route-source")
    {
        route_source.yfilter = yfilter;
    }
    if(value_path == "route-spf-priority")
    {
        route_spf_priority.yfilter = yfilter;
    }
    if(value_path == "route-auto-excluded")
    {
        route_auto_excluded.yfilter = yfilter;
    }
    if(value_path == "route-srte-prefix-registered")
    {
        route_srte_prefix_registered.yfilter = yfilter;
    }
    if(value_path == "route-srte-nbr-registered")
    {
        route_srte_nbr_registered.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-update-time" || name == "route-fail-time" || name == "route-area-id" || name == "route-te-metric" || name == "route-rib-version" || name == "route-spf-version" || name == "route-forward-distance" || name == "route-source" || name == "route-spf-priority" || name == "route-auto-excluded" || name == "route-srte-prefix-registered" || name == "route-srte-nbr-registered")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::RouteUpdateTime::RouteUpdateTime()
    :
    second{YType::uint32, "second"},
    nanosecond{YType::uint32, "nanosecond"}
{

    yang_name = "route-update-time"; yang_parent_name = "route-info"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::RouteUpdateTime::~RouteUpdateTime()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::RouteUpdateTime::has_data() const
{
    return second.is_set
	|| nanosecond.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::RouteUpdateTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(second.yfilter)
	|| ydk::is_set(nanosecond.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::RouteUpdateTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-update-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::RouteUpdateTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());
    if (nanosecond.is_set || is_set(nanosecond.yfilter)) leaf_name_data.push_back(nanosecond.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::RouteUpdateTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::RouteUpdateTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::RouteUpdateTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "second")
    {
        second = value;
        second.value_namespace = name_space;
        second.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanosecond")
    {
        nanosecond = value;
        nanosecond.value_namespace = name_space;
        nanosecond.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::RouteUpdateTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "second")
    {
        second.yfilter = yfilter;
    }
    if(value_path == "nanosecond")
    {
        nanosecond.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::RouteUpdateTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second" || name == "nanosecond")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::RouteFailTime::RouteFailTime()
    :
    second{YType::uint32, "second"},
    nanosecond{YType::uint32, "nanosecond"}
{

    yang_name = "route-fail-time"; yang_parent_name = "route-info"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::RouteFailTime::~RouteFailTime()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::RouteFailTime::has_data() const
{
    return second.is_set
	|| nanosecond.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::RouteFailTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(second.yfilter)
	|| ydk::is_set(nanosecond.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::RouteFailTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-fail-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::RouteFailTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());
    if (nanosecond.is_set || is_set(nanosecond.yfilter)) leaf_name_data.push_back(nanosecond.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::RouteFailTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::RouteFailTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::RouteFailTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "second")
    {
        second = value;
        second.value_namespace = name_space;
        second.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanosecond")
    {
        nanosecond = value;
        nanosecond.value_namespace = name_space;
        nanosecond.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::RouteFailTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "second")
    {
        second.yfilter = yfilter;
    }
    if(value_path == "nanosecond")
    {
        nanosecond.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::RouteFailTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second" || name == "nanosecond")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::RoutePath()
    :
    route_interface_name{YType::str, "route-interface-name"},
    route_next_hop_address{YType::str, "route-next-hop-address"},
    route_source{YType::str, "route-source"},
    route_lsaid{YType::str, "route-lsaid"},
    route_path_is_mcast_intact{YType::boolean, "route-path-is-mcast-intact"},
    route_path_is_ucmp_path{YType::boolean, "route-path-is-ucmp-path"},
    route_metric{YType::uint32, "route-metric"},
    lsa_type{YType::uint8, "lsa-type"},
    area_id{YType::uint32, "area-id"},
    area_format{YType::boolean, "area-format"}
    	,
    sr_microloop_avoidance_path(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::SrMicroloopAvoidancePath>())
{
    sr_microloop_avoidance_path->parent = this;

    yang_name = "route-path"; yang_parent_name = "local-route"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::~RoutePath()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::has_data() const
{
    return route_interface_name.is_set
	|| route_next_hop_address.is_set
	|| route_source.is_set
	|| route_lsaid.is_set
	|| route_path_is_mcast_intact.is_set
	|| route_path_is_ucmp_path.is_set
	|| route_metric.is_set
	|| lsa_type.is_set
	|| area_id.is_set
	|| area_format.is_set
	|| (sr_microloop_avoidance_path !=  nullptr && sr_microloop_avoidance_path->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_interface_name.yfilter)
	|| ydk::is_set(route_next_hop_address.yfilter)
	|| ydk::is_set(route_source.yfilter)
	|| ydk::is_set(route_lsaid.yfilter)
	|| ydk::is_set(route_path_is_mcast_intact.yfilter)
	|| ydk::is_set(route_path_is_ucmp_path.yfilter)
	|| ydk::is_set(route_metric.yfilter)
	|| ydk::is_set(lsa_type.yfilter)
	|| ydk::is_set(area_id.yfilter)
	|| ydk::is_set(area_format.yfilter)
	|| (sr_microloop_avoidance_path !=  nullptr && sr_microloop_avoidance_path->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_interface_name.is_set || is_set(route_interface_name.yfilter)) leaf_name_data.push_back(route_interface_name.get_name_leafdata());
    if (route_next_hop_address.is_set || is_set(route_next_hop_address.yfilter)) leaf_name_data.push_back(route_next_hop_address.get_name_leafdata());
    if (route_source.is_set || is_set(route_source.yfilter)) leaf_name_data.push_back(route_source.get_name_leafdata());
    if (route_lsaid.is_set || is_set(route_lsaid.yfilter)) leaf_name_data.push_back(route_lsaid.get_name_leafdata());
    if (route_path_is_mcast_intact.is_set || is_set(route_path_is_mcast_intact.yfilter)) leaf_name_data.push_back(route_path_is_mcast_intact.get_name_leafdata());
    if (route_path_is_ucmp_path.is_set || is_set(route_path_is_ucmp_path.yfilter)) leaf_name_data.push_back(route_path_is_ucmp_path.get_name_leafdata());
    if (route_metric.is_set || is_set(route_metric.yfilter)) leaf_name_data.push_back(route_metric.get_name_leafdata());
    if (lsa_type.is_set || is_set(lsa_type.yfilter)) leaf_name_data.push_back(lsa_type.get_name_leafdata());
    if (area_id.is_set || is_set(area_id.yfilter)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (area_format.is_set || is_set(area_format.yfilter)) leaf_name_data.push_back(area_format.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sr-microloop-avoidance-path")
    {
        if(sr_microloop_avoidance_path == nullptr)
        {
            sr_microloop_avoidance_path = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::SrMicroloopAvoidancePath>();
        }
        return sr_microloop_avoidance_path;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(sr_microloop_avoidance_path != nullptr)
    {
        children["sr-microloop-avoidance-path"] = sr_microloop_avoidance_path;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-interface-name")
    {
        route_interface_name = value;
        route_interface_name.value_namespace = name_space;
        route_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-next-hop-address")
    {
        route_next_hop_address = value;
        route_next_hop_address.value_namespace = name_space;
        route_next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-source")
    {
        route_source = value;
        route_source.value_namespace = name_space;
        route_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-lsaid")
    {
        route_lsaid = value;
        route_lsaid.value_namespace = name_space;
        route_lsaid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-path-is-mcast-intact")
    {
        route_path_is_mcast_intact = value;
        route_path_is_mcast_intact.value_namespace = name_space;
        route_path_is_mcast_intact.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-path-is-ucmp-path")
    {
        route_path_is_ucmp_path = value;
        route_path_is_ucmp_path.value_namespace = name_space;
        route_path_is_ucmp_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-metric")
    {
        route_metric = value;
        route_metric.value_namespace = name_space;
        route_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-type")
    {
        lsa_type = value;
        lsa_type.value_namespace = name_space;
        lsa_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-id")
    {
        area_id = value;
        area_id.value_namespace = name_space;
        area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-format")
    {
        area_format = value;
        area_format.value_namespace = name_space;
        area_format.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-interface-name")
    {
        route_interface_name.yfilter = yfilter;
    }
    if(value_path == "route-next-hop-address")
    {
        route_next_hop_address.yfilter = yfilter;
    }
    if(value_path == "route-source")
    {
        route_source.yfilter = yfilter;
    }
    if(value_path == "route-lsaid")
    {
        route_lsaid.yfilter = yfilter;
    }
    if(value_path == "route-path-is-mcast-intact")
    {
        route_path_is_mcast_intact.yfilter = yfilter;
    }
    if(value_path == "route-path-is-ucmp-path")
    {
        route_path_is_ucmp_path.yfilter = yfilter;
    }
    if(value_path == "route-metric")
    {
        route_metric.yfilter = yfilter;
    }
    if(value_path == "lsa-type")
    {
        lsa_type.yfilter = yfilter;
    }
    if(value_path == "area-id")
    {
        area_id.yfilter = yfilter;
    }
    if(value_path == "area-format")
    {
        area_format.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sr-microloop-avoidance-path" || name == "route-interface-name" || name == "route-next-hop-address" || name == "route-source" || name == "route-lsaid" || name == "route-path-is-mcast-intact" || name == "route-path-is-ucmp-path" || name == "route-metric" || name == "lsa-type" || name == "area-id" || name == "area-format")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::SrMicroloopAvoidancePath::SrMicroloopAvoidancePath()
    :
    microloop_repair_list_size{YType::uint32, "microloop-repair-list-size"},
    microloop_tunnel_interface_name{YType::str, "microloop-tunnel-interface-name"},
    microloop_strict_spf{YType::boolean, "microloop-strict-spf"}
{

    yang_name = "sr-microloop-avoidance-path"; yang_parent_name = "route-path"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::SrMicroloopAvoidancePath::~SrMicroloopAvoidancePath()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::SrMicroloopAvoidancePath::has_data() const
{
    for (std::size_t index=0; index<microloop_repair.size(); index++)
    {
        if(microloop_repair[index]->has_data())
            return true;
    }
    return microloop_repair_list_size.is_set
	|| microloop_tunnel_interface_name.is_set
	|| microloop_strict_spf.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::SrMicroloopAvoidancePath::has_operation() const
{
    for (std::size_t index=0; index<microloop_repair.size(); index++)
    {
        if(microloop_repair[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(microloop_repair_list_size.yfilter)
	|| ydk::is_set(microloop_tunnel_interface_name.yfilter)
	|| ydk::is_set(microloop_strict_spf.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::SrMicroloopAvoidancePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-microloop-avoidance-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::SrMicroloopAvoidancePath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (microloop_repair_list_size.is_set || is_set(microloop_repair_list_size.yfilter)) leaf_name_data.push_back(microloop_repair_list_size.get_name_leafdata());
    if (microloop_tunnel_interface_name.is_set || is_set(microloop_tunnel_interface_name.yfilter)) leaf_name_data.push_back(microloop_tunnel_interface_name.get_name_leafdata());
    if (microloop_strict_spf.is_set || is_set(microloop_strict_spf.yfilter)) leaf_name_data.push_back(microloop_strict_spf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::SrMicroloopAvoidancePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "microloop-repair")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair>();
        c->parent = this;
        microloop_repair.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::SrMicroloopAvoidancePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : microloop_repair)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::SrMicroloopAvoidancePath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "microloop-repair-list-size")
    {
        microloop_repair_list_size = value;
        microloop_repair_list_size.value_namespace = name_space;
        microloop_repair_list_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "microloop-tunnel-interface-name")
    {
        microloop_tunnel_interface_name = value;
        microloop_tunnel_interface_name.value_namespace = name_space;
        microloop_tunnel_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "microloop-strict-spf")
    {
        microloop_strict_spf = value;
        microloop_strict_spf.value_namespace = name_space;
        microloop_strict_spf.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::SrMicroloopAvoidancePath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "microloop-repair-list-size")
    {
        microloop_repair_list_size.yfilter = yfilter;
    }
    if(value_path == "microloop-tunnel-interface-name")
    {
        microloop_tunnel_interface_name.yfilter = yfilter;
    }
    if(value_path == "microloop-strict-spf")
    {
        microloop_strict_spf.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::SrMicroloopAvoidancePath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "microloop-repair" || name == "microloop-repair-list-size" || name == "microloop-tunnel-interface-name" || name == "microloop-strict-spf")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::MicroloopRepair()
    :
    repair_element_id{YType::str, "repair-element-id"},
    repair_label{YType::uint32, "repair-label"},
    repair_element_type{YType::uint32, "repair-element-type"}
{

    yang_name = "microloop-repair"; yang_parent_name = "sr-microloop-avoidance-path"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::~MicroloopRepair()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::has_data() const
{
    return repair_element_id.is_set
	|| repair_label.is_set
	|| repair_element_type.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(repair_element_id.yfilter)
	|| ydk::is_set(repair_label.yfilter)
	|| ydk::is_set(repair_element_type.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "microloop-repair";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (repair_element_id.is_set || is_set(repair_element_id.yfilter)) leaf_name_data.push_back(repair_element_id.get_name_leafdata());
    if (repair_label.is_set || is_set(repair_label.yfilter)) leaf_name_data.push_back(repair_label.get_name_leafdata());
    if (repair_element_type.is_set || is_set(repair_element_type.yfilter)) leaf_name_data.push_back(repair_element_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "repair-element-id")
    {
        repair_element_id = value;
        repair_element_id.value_namespace = name_space;
        repair_element_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-label")
    {
        repair_label = value;
        repair_label.value_namespace = name_space;
        repair_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type = value;
        repair_element_type.value_namespace = name_space;
        repair_element_type.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "repair-element-id")
    {
        repair_element_id.yfilter = yfilter;
    }
    if(value_path == "repair-label")
    {
        repair_label.yfilter = yfilter;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "repair-element-id" || name == "repair-label" || name == "repair-element-type")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteAreas()
{

    yang_name = "route-areas"; yang_parent_name = "route-information"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::~RouteAreas()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::has_data() const
{
    for (std::size_t index=0; index<route_area.size(); index++)
    {
        if(route_area[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::has_operation() const
{
    for (std::size_t index=0; index<route_area.size(); index++)
    {
        if(route_area[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-areas";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-area")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea>();
        c->parent = this;
        route_area.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : route_area)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-area")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteArea()
    :
    area_id{YType::int32, "area-id"}
    	,
    multicast_intact_backup_route_areas(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas>())
	,connected_route_areas(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas>())
	,backup_route_areas(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas>())
	,route_area_informations(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations>())
	,multicast_intact_route_areas(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas>())
	,summary_area_information(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation>())
	,local_route_areas(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas>())
{
    multicast_intact_backup_route_areas->parent = this;
    connected_route_areas->parent = this;
    backup_route_areas->parent = this;
    route_area_informations->parent = this;
    multicast_intact_route_areas->parent = this;
    summary_area_information->parent = this;
    local_route_areas->parent = this;

    yang_name = "route-area"; yang_parent_name = "route-areas"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::~RouteArea()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::has_data() const
{
    return area_id.is_set
	|| (multicast_intact_backup_route_areas !=  nullptr && multicast_intact_backup_route_areas->has_data())
	|| (connected_route_areas !=  nullptr && connected_route_areas->has_data())
	|| (backup_route_areas !=  nullptr && backup_route_areas->has_data())
	|| (route_area_informations !=  nullptr && route_area_informations->has_data())
	|| (multicast_intact_route_areas !=  nullptr && multicast_intact_route_areas->has_data())
	|| (summary_area_information !=  nullptr && summary_area_information->has_data())
	|| (local_route_areas !=  nullptr && local_route_areas->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(area_id.yfilter)
	|| (multicast_intact_backup_route_areas !=  nullptr && multicast_intact_backup_route_areas->has_operation())
	|| (connected_route_areas !=  nullptr && connected_route_areas->has_operation())
	|| (backup_route_areas !=  nullptr && backup_route_areas->has_operation())
	|| (route_area_informations !=  nullptr && route_area_informations->has_operation())
	|| (multicast_intact_route_areas !=  nullptr && multicast_intact_route_areas->has_operation())
	|| (summary_area_information !=  nullptr && summary_area_information->has_operation())
	|| (local_route_areas !=  nullptr && local_route_areas->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-area" <<"[area-id='" <<area_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_id.is_set || is_set(area_id.yfilter)) leaf_name_data.push_back(area_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "multicast-intact-backup-route-areas")
    {
        if(multicast_intact_backup_route_areas == nullptr)
        {
            multicast_intact_backup_route_areas = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas>();
        }
        return multicast_intact_backup_route_areas;
    }

    if(child_yang_name == "connected-route-areas")
    {
        if(connected_route_areas == nullptr)
        {
            connected_route_areas = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas>();
        }
        return connected_route_areas;
    }

    if(child_yang_name == "backup-route-areas")
    {
        if(backup_route_areas == nullptr)
        {
            backup_route_areas = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas>();
        }
        return backup_route_areas;
    }

    if(child_yang_name == "route-area-informations")
    {
        if(route_area_informations == nullptr)
        {
            route_area_informations = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations>();
        }
        return route_area_informations;
    }

    if(child_yang_name == "multicast-intact-route-areas")
    {
        if(multicast_intact_route_areas == nullptr)
        {
            multicast_intact_route_areas = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas>();
        }
        return multicast_intact_route_areas;
    }

    if(child_yang_name == "summary-area-information")
    {
        if(summary_area_information == nullptr)
        {
            summary_area_information = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation>();
        }
        return summary_area_information;
    }

    if(child_yang_name == "local-route-areas")
    {
        if(local_route_areas == nullptr)
        {
            local_route_areas = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas>();
        }
        return local_route_areas;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(multicast_intact_backup_route_areas != nullptr)
    {
        children["multicast-intact-backup-route-areas"] = multicast_intact_backup_route_areas;
    }

    if(connected_route_areas != nullptr)
    {
        children["connected-route-areas"] = connected_route_areas;
    }

    if(backup_route_areas != nullptr)
    {
        children["backup-route-areas"] = backup_route_areas;
    }

    if(route_area_informations != nullptr)
    {
        children["route-area-informations"] = route_area_informations;
    }

    if(multicast_intact_route_areas != nullptr)
    {
        children["multicast-intact-route-areas"] = multicast_intact_route_areas;
    }

    if(summary_area_information != nullptr)
    {
        children["summary-area-information"] = summary_area_information;
    }

    if(local_route_areas != nullptr)
    {
        children["local-route-areas"] = local_route_areas;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "area-id")
    {
        area_id = value;
        area_id.value_namespace = name_space;
        area_id.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "area-id")
    {
        area_id.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "multicast-intact-backup-route-areas" || name == "connected-route-areas" || name == "backup-route-areas" || name == "route-area-informations" || name == "multicast-intact-route-areas" || name == "summary-area-information" || name == "local-route-areas" || name == "area-id")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteAreas()
{

    yang_name = "multicast-intact-backup-route-areas"; yang_parent_name = "route-area"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::~MulticastIntactBackupRouteAreas()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::has_data() const
{
    for (std::size_t index=0; index<multicast_intact_backup_route_area.size(); index++)
    {
        if(multicast_intact_backup_route_area[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::has_operation() const
{
    for (std::size_t index=0; index<multicast_intact_backup_route_area.size(); index++)
    {
        if(multicast_intact_backup_route_area[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast-intact-backup-route-areas";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "multicast-intact-backup-route-area")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea>();
        c->parent = this;
        multicast_intact_backup_route_area.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : multicast_intact_backup_route_area)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "multicast-intact-backup-route-area")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::MulticastIntactBackupRouteArea()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint32, "prefix-length"},
    route_prefix{YType::str, "route-prefix"},
    route_prefix_length{YType::uint32, "route-prefix-length"},
    route_metric{YType::uint32, "route-metric"},
    route_type{YType::enumeration, "route-type"},
    route_connected{YType::boolean, "route-connected"}
    	,
    route_info(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo>())
{
    route_info->parent = this;

    yang_name = "multicast-intact-backup-route-area"; yang_parent_name = "multicast-intact-backup-route-areas"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::~MulticastIntactBackupRouteArea()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::has_data() const
{
    for (std::size_t index=0; index<route_path.size(); index++)
    {
        if(route_path[index]->has_data())
            return true;
    }
    return prefix.is_set
	|| prefix_length.is_set
	|| route_prefix.is_set
	|| route_prefix_length.is_set
	|| route_metric.is_set
	|| route_type.is_set
	|| route_connected.is_set
	|| (route_info !=  nullptr && route_info->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::has_operation() const
{
    for (std::size_t index=0; index<route_path.size(); index++)
    {
        if(route_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(route_prefix.yfilter)
	|| ydk::is_set(route_prefix_length.yfilter)
	|| ydk::is_set(route_metric.yfilter)
	|| ydk::is_set(route_type.yfilter)
	|| ydk::is_set(route_connected.yfilter)
	|| (route_info !=  nullptr && route_info->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast-intact-backup-route-area";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (route_prefix.is_set || is_set(route_prefix.yfilter)) leaf_name_data.push_back(route_prefix.get_name_leafdata());
    if (route_prefix_length.is_set || is_set(route_prefix_length.yfilter)) leaf_name_data.push_back(route_prefix_length.get_name_leafdata());
    if (route_metric.is_set || is_set(route_metric.yfilter)) leaf_name_data.push_back(route_metric.get_name_leafdata());
    if (route_type.is_set || is_set(route_type.yfilter)) leaf_name_data.push_back(route_type.get_name_leafdata());
    if (route_connected.is_set || is_set(route_connected.yfilter)) leaf_name_data.push_back(route_connected.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-info")
    {
        if(route_info == nullptr)
        {
            route_info = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo>();
        }
        return route_info;
    }

    if(child_yang_name == "route-path")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath>();
        c->parent = this;
        route_path.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(route_info != nullptr)
    {
        children["route-info"] = route_info;
    }

    count = 0;
    for (auto const & c : route_path)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-prefix")
    {
        route_prefix = value;
        route_prefix.value_namespace = name_space;
        route_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-prefix-length")
    {
        route_prefix_length = value;
        route_prefix_length.value_namespace = name_space;
        route_prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-metric")
    {
        route_metric = value;
        route_metric.value_namespace = name_space;
        route_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-type")
    {
        route_type = value;
        route_type.value_namespace = name_space;
        route_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-connected")
    {
        route_connected = value;
        route_connected.value_namespace = name_space;
        route_connected.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "route-prefix")
    {
        route_prefix.yfilter = yfilter;
    }
    if(value_path == "route-prefix-length")
    {
        route_prefix_length.yfilter = yfilter;
    }
    if(value_path == "route-metric")
    {
        route_metric.yfilter = yfilter;
    }
    if(value_path == "route-type")
    {
        route_type.yfilter = yfilter;
    }
    if(value_path == "route-connected")
    {
        route_connected.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-info" || name == "route-path" || name == "prefix" || name == "prefix-length" || name == "route-prefix" || name == "route-prefix-length" || name == "route-metric" || name == "route-type" || name == "route-connected")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::RouteInfo()
    :
    route_area_id{YType::uint32, "route-area-id"},
    route_te_metric{YType::uint32, "route-te-metric"},
    route_rib_version{YType::uint32, "route-rib-version"},
    route_spf_version{YType::uint64, "route-spf-version"},
    route_forward_distance{YType::uint32, "route-forward-distance"},
    route_source{YType::uint16, "route-source"},
    route_spf_priority{YType::uint8, "route-spf-priority"},
    route_auto_excluded{YType::boolean, "route-auto-excluded"},
    route_srte_prefix_registered{YType::boolean, "route-srte-prefix-registered"},
    route_srte_nbr_registered{YType::uint16, "route-srte-nbr-registered"}
    	,
    route_update_time(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::RouteUpdateTime>())
	,route_fail_time(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::RouteFailTime>())
{
    route_update_time->parent = this;
    route_fail_time->parent = this;

    yang_name = "route-info"; yang_parent_name = "multicast-intact-backup-route-area"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::~RouteInfo()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::has_data() const
{
    return route_area_id.is_set
	|| route_te_metric.is_set
	|| route_rib_version.is_set
	|| route_spf_version.is_set
	|| route_forward_distance.is_set
	|| route_source.is_set
	|| route_spf_priority.is_set
	|| route_auto_excluded.is_set
	|| route_srte_prefix_registered.is_set
	|| route_srte_nbr_registered.is_set
	|| (route_update_time !=  nullptr && route_update_time->has_data())
	|| (route_fail_time !=  nullptr && route_fail_time->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_area_id.yfilter)
	|| ydk::is_set(route_te_metric.yfilter)
	|| ydk::is_set(route_rib_version.yfilter)
	|| ydk::is_set(route_spf_version.yfilter)
	|| ydk::is_set(route_forward_distance.yfilter)
	|| ydk::is_set(route_source.yfilter)
	|| ydk::is_set(route_spf_priority.yfilter)
	|| ydk::is_set(route_auto_excluded.yfilter)
	|| ydk::is_set(route_srte_prefix_registered.yfilter)
	|| ydk::is_set(route_srte_nbr_registered.yfilter)
	|| (route_update_time !=  nullptr && route_update_time->has_operation())
	|| (route_fail_time !=  nullptr && route_fail_time->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_area_id.is_set || is_set(route_area_id.yfilter)) leaf_name_data.push_back(route_area_id.get_name_leafdata());
    if (route_te_metric.is_set || is_set(route_te_metric.yfilter)) leaf_name_data.push_back(route_te_metric.get_name_leafdata());
    if (route_rib_version.is_set || is_set(route_rib_version.yfilter)) leaf_name_data.push_back(route_rib_version.get_name_leafdata());
    if (route_spf_version.is_set || is_set(route_spf_version.yfilter)) leaf_name_data.push_back(route_spf_version.get_name_leafdata());
    if (route_forward_distance.is_set || is_set(route_forward_distance.yfilter)) leaf_name_data.push_back(route_forward_distance.get_name_leafdata());
    if (route_source.is_set || is_set(route_source.yfilter)) leaf_name_data.push_back(route_source.get_name_leafdata());
    if (route_spf_priority.is_set || is_set(route_spf_priority.yfilter)) leaf_name_data.push_back(route_spf_priority.get_name_leafdata());
    if (route_auto_excluded.is_set || is_set(route_auto_excluded.yfilter)) leaf_name_data.push_back(route_auto_excluded.get_name_leafdata());
    if (route_srte_prefix_registered.is_set || is_set(route_srte_prefix_registered.yfilter)) leaf_name_data.push_back(route_srte_prefix_registered.get_name_leafdata());
    if (route_srte_nbr_registered.is_set || is_set(route_srte_nbr_registered.yfilter)) leaf_name_data.push_back(route_srte_nbr_registered.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-update-time")
    {
        if(route_update_time == nullptr)
        {
            route_update_time = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::RouteUpdateTime>();
        }
        return route_update_time;
    }

    if(child_yang_name == "route-fail-time")
    {
        if(route_fail_time == nullptr)
        {
            route_fail_time = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::RouteFailTime>();
        }
        return route_fail_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(route_update_time != nullptr)
    {
        children["route-update-time"] = route_update_time;
    }

    if(route_fail_time != nullptr)
    {
        children["route-fail-time"] = route_fail_time;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-area-id")
    {
        route_area_id = value;
        route_area_id.value_namespace = name_space;
        route_area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-te-metric")
    {
        route_te_metric = value;
        route_te_metric.value_namespace = name_space;
        route_te_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-rib-version")
    {
        route_rib_version = value;
        route_rib_version.value_namespace = name_space;
        route_rib_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-spf-version")
    {
        route_spf_version = value;
        route_spf_version.value_namespace = name_space;
        route_spf_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-forward-distance")
    {
        route_forward_distance = value;
        route_forward_distance.value_namespace = name_space;
        route_forward_distance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-source")
    {
        route_source = value;
        route_source.value_namespace = name_space;
        route_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-spf-priority")
    {
        route_spf_priority = value;
        route_spf_priority.value_namespace = name_space;
        route_spf_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-auto-excluded")
    {
        route_auto_excluded = value;
        route_auto_excluded.value_namespace = name_space;
        route_auto_excluded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-srte-prefix-registered")
    {
        route_srte_prefix_registered = value;
        route_srte_prefix_registered.value_namespace = name_space;
        route_srte_prefix_registered.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-srte-nbr-registered")
    {
        route_srte_nbr_registered = value;
        route_srte_nbr_registered.value_namespace = name_space;
        route_srte_nbr_registered.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-area-id")
    {
        route_area_id.yfilter = yfilter;
    }
    if(value_path == "route-te-metric")
    {
        route_te_metric.yfilter = yfilter;
    }
    if(value_path == "route-rib-version")
    {
        route_rib_version.yfilter = yfilter;
    }
    if(value_path == "route-spf-version")
    {
        route_spf_version.yfilter = yfilter;
    }
    if(value_path == "route-forward-distance")
    {
        route_forward_distance.yfilter = yfilter;
    }
    if(value_path == "route-source")
    {
        route_source.yfilter = yfilter;
    }
    if(value_path == "route-spf-priority")
    {
        route_spf_priority.yfilter = yfilter;
    }
    if(value_path == "route-auto-excluded")
    {
        route_auto_excluded.yfilter = yfilter;
    }
    if(value_path == "route-srte-prefix-registered")
    {
        route_srte_prefix_registered.yfilter = yfilter;
    }
    if(value_path == "route-srte-nbr-registered")
    {
        route_srte_nbr_registered.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-update-time" || name == "route-fail-time" || name == "route-area-id" || name == "route-te-metric" || name == "route-rib-version" || name == "route-spf-version" || name == "route-forward-distance" || name == "route-source" || name == "route-spf-priority" || name == "route-auto-excluded" || name == "route-srte-prefix-registered" || name == "route-srte-nbr-registered")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::RouteUpdateTime::RouteUpdateTime()
    :
    second{YType::uint32, "second"},
    nanosecond{YType::uint32, "nanosecond"}
{

    yang_name = "route-update-time"; yang_parent_name = "route-info"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::RouteUpdateTime::~RouteUpdateTime()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::RouteUpdateTime::has_data() const
{
    return second.is_set
	|| nanosecond.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::RouteUpdateTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(second.yfilter)
	|| ydk::is_set(nanosecond.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::RouteUpdateTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-update-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::RouteUpdateTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());
    if (nanosecond.is_set || is_set(nanosecond.yfilter)) leaf_name_data.push_back(nanosecond.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::RouteUpdateTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::RouteUpdateTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::RouteUpdateTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "second")
    {
        second = value;
        second.value_namespace = name_space;
        second.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanosecond")
    {
        nanosecond = value;
        nanosecond.value_namespace = name_space;
        nanosecond.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::RouteUpdateTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "second")
    {
        second.yfilter = yfilter;
    }
    if(value_path == "nanosecond")
    {
        nanosecond.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::RouteUpdateTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second" || name == "nanosecond")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::RouteFailTime::RouteFailTime()
    :
    second{YType::uint32, "second"},
    nanosecond{YType::uint32, "nanosecond"}
{

    yang_name = "route-fail-time"; yang_parent_name = "route-info"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::RouteFailTime::~RouteFailTime()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::RouteFailTime::has_data() const
{
    return second.is_set
	|| nanosecond.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::RouteFailTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(second.yfilter)
	|| ydk::is_set(nanosecond.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::RouteFailTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-fail-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::RouteFailTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());
    if (nanosecond.is_set || is_set(nanosecond.yfilter)) leaf_name_data.push_back(nanosecond.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::RouteFailTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::RouteFailTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::RouteFailTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "second")
    {
        second = value;
        second.value_namespace = name_space;
        second.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanosecond")
    {
        nanosecond = value;
        nanosecond.value_namespace = name_space;
        nanosecond.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::RouteFailTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "second")
    {
        second.yfilter = yfilter;
    }
    if(value_path == "nanosecond")
    {
        nanosecond.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::RouteFailTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second" || name == "nanosecond")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::RoutePath()
    :
    route_interface_name{YType::str, "route-interface-name"},
    route_next_hop_address{YType::str, "route-next-hop-address"},
    route_source{YType::str, "route-source"},
    route_lsaid{YType::str, "route-lsaid"},
    route_path_is_mcast_intact{YType::boolean, "route-path-is-mcast-intact"},
    route_path_is_ucmp_path{YType::boolean, "route-path-is-ucmp-path"},
    route_metric{YType::uint32, "route-metric"},
    route_path_id{YType::uint16, "route-path-id"},
    lsa_type{YType::uint8, "lsa-type"}
    	,
    route_backup_path(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::RouteBackupPath>())
	,sr_microloop_avoidance_path(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::SrMicroloopAvoidancePath>())
{
    route_backup_path->parent = this;
    sr_microloop_avoidance_path->parent = this;

    yang_name = "route-path"; yang_parent_name = "multicast-intact-backup-route-area"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::~RoutePath()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::has_data() const
{
    return route_interface_name.is_set
	|| route_next_hop_address.is_set
	|| route_source.is_set
	|| route_lsaid.is_set
	|| route_path_is_mcast_intact.is_set
	|| route_path_is_ucmp_path.is_set
	|| route_metric.is_set
	|| route_path_id.is_set
	|| lsa_type.is_set
	|| (route_backup_path !=  nullptr && route_backup_path->has_data())
	|| (sr_microloop_avoidance_path !=  nullptr && sr_microloop_avoidance_path->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_interface_name.yfilter)
	|| ydk::is_set(route_next_hop_address.yfilter)
	|| ydk::is_set(route_source.yfilter)
	|| ydk::is_set(route_lsaid.yfilter)
	|| ydk::is_set(route_path_is_mcast_intact.yfilter)
	|| ydk::is_set(route_path_is_ucmp_path.yfilter)
	|| ydk::is_set(route_metric.yfilter)
	|| ydk::is_set(route_path_id.yfilter)
	|| ydk::is_set(lsa_type.yfilter)
	|| (route_backup_path !=  nullptr && route_backup_path->has_operation())
	|| (sr_microloop_avoidance_path !=  nullptr && sr_microloop_avoidance_path->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_interface_name.is_set || is_set(route_interface_name.yfilter)) leaf_name_data.push_back(route_interface_name.get_name_leafdata());
    if (route_next_hop_address.is_set || is_set(route_next_hop_address.yfilter)) leaf_name_data.push_back(route_next_hop_address.get_name_leafdata());
    if (route_source.is_set || is_set(route_source.yfilter)) leaf_name_data.push_back(route_source.get_name_leafdata());
    if (route_lsaid.is_set || is_set(route_lsaid.yfilter)) leaf_name_data.push_back(route_lsaid.get_name_leafdata());
    if (route_path_is_mcast_intact.is_set || is_set(route_path_is_mcast_intact.yfilter)) leaf_name_data.push_back(route_path_is_mcast_intact.get_name_leafdata());
    if (route_path_is_ucmp_path.is_set || is_set(route_path_is_ucmp_path.yfilter)) leaf_name_data.push_back(route_path_is_ucmp_path.get_name_leafdata());
    if (route_metric.is_set || is_set(route_metric.yfilter)) leaf_name_data.push_back(route_metric.get_name_leafdata());
    if (route_path_id.is_set || is_set(route_path_id.yfilter)) leaf_name_data.push_back(route_path_id.get_name_leafdata());
    if (lsa_type.is_set || is_set(lsa_type.yfilter)) leaf_name_data.push_back(lsa_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-backup-path")
    {
        if(route_backup_path == nullptr)
        {
            route_backup_path = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::RouteBackupPath>();
        }
        return route_backup_path;
    }

    if(child_yang_name == "sr-microloop-avoidance-path")
    {
        if(sr_microloop_avoidance_path == nullptr)
        {
            sr_microloop_avoidance_path = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::SrMicroloopAvoidancePath>();
        }
        return sr_microloop_avoidance_path;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
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

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-interface-name")
    {
        route_interface_name = value;
        route_interface_name.value_namespace = name_space;
        route_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-next-hop-address")
    {
        route_next_hop_address = value;
        route_next_hop_address.value_namespace = name_space;
        route_next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-source")
    {
        route_source = value;
        route_source.value_namespace = name_space;
        route_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-lsaid")
    {
        route_lsaid = value;
        route_lsaid.value_namespace = name_space;
        route_lsaid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-path-is-mcast-intact")
    {
        route_path_is_mcast_intact = value;
        route_path_is_mcast_intact.value_namespace = name_space;
        route_path_is_mcast_intact.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-path-is-ucmp-path")
    {
        route_path_is_ucmp_path = value;
        route_path_is_ucmp_path.value_namespace = name_space;
        route_path_is_ucmp_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-metric")
    {
        route_metric = value;
        route_metric.value_namespace = name_space;
        route_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-path-id")
    {
        route_path_id = value;
        route_path_id.value_namespace = name_space;
        route_path_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-type")
    {
        lsa_type = value;
        lsa_type.value_namespace = name_space;
        lsa_type.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-interface-name")
    {
        route_interface_name.yfilter = yfilter;
    }
    if(value_path == "route-next-hop-address")
    {
        route_next_hop_address.yfilter = yfilter;
    }
    if(value_path == "route-source")
    {
        route_source.yfilter = yfilter;
    }
    if(value_path == "route-lsaid")
    {
        route_lsaid.yfilter = yfilter;
    }
    if(value_path == "route-path-is-mcast-intact")
    {
        route_path_is_mcast_intact.yfilter = yfilter;
    }
    if(value_path == "route-path-is-ucmp-path")
    {
        route_path_is_ucmp_path.yfilter = yfilter;
    }
    if(value_path == "route-metric")
    {
        route_metric.yfilter = yfilter;
    }
    if(value_path == "route-path-id")
    {
        route_path_id.yfilter = yfilter;
    }
    if(value_path == "lsa-type")
    {
        lsa_type.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-backup-path" || name == "sr-microloop-avoidance-path" || name == "route-interface-name" || name == "route-next-hop-address" || name == "route-source" || name == "route-lsaid" || name == "route-path-is-mcast-intact" || name == "route-path-is-ucmp-path" || name == "route-metric" || name == "route-path-id" || name == "lsa-type")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::RouteBackupPath::RouteBackupPath()
    :
    backup_route_interface_name{YType::str, "backup-route-interface-name"},
    backup_route_next_hop_address{YType::str, "backup-route-next-hop-address"},
    backup_route_source{YType::str, "backup-route-source"},
    backup_metric{YType::uint32, "backup-metric"},
    primary_path{YType::boolean, "primary-path"},
    line_card_disjoint{YType::boolean, "line-card-disjoint"},
    downstream{YType::boolean, "downstream"},
    node_protect{YType::boolean, "node-protect"},
    srlg_disjoint{YType::boolean, "srlg-disjoint"},
    backup_remote_lfa{YType::str, "backup-remote-lfa"},
    backup_repair_list_size{YType::uint32, "backup-repair-list-size"},
    backup_tunnel_interface_name{YType::str, "backup-tunnel-interface-name"}
{

    yang_name = "route-backup-path"; yang_parent_name = "route-path"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::RouteBackupPath::~RouteBackupPath()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::RouteBackupPath::has_data() const
{
    for (std::size_t index=0; index<backup_repair.size(); index++)
    {
        if(backup_repair[index]->has_data())
            return true;
    }
    return backup_route_interface_name.is_set
	|| backup_route_next_hop_address.is_set
	|| backup_route_source.is_set
	|| backup_metric.is_set
	|| primary_path.is_set
	|| line_card_disjoint.is_set
	|| downstream.is_set
	|| node_protect.is_set
	|| srlg_disjoint.is_set
	|| backup_remote_lfa.is_set
	|| backup_repair_list_size.is_set
	|| backup_tunnel_interface_name.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::RouteBackupPath::has_operation() const
{
    for (std::size_t index=0; index<backup_repair.size(); index++)
    {
        if(backup_repair[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(backup_route_interface_name.yfilter)
	|| ydk::is_set(backup_route_next_hop_address.yfilter)
	|| ydk::is_set(backup_route_source.yfilter)
	|| ydk::is_set(backup_metric.yfilter)
	|| ydk::is_set(primary_path.yfilter)
	|| ydk::is_set(line_card_disjoint.yfilter)
	|| ydk::is_set(downstream.yfilter)
	|| ydk::is_set(node_protect.yfilter)
	|| ydk::is_set(srlg_disjoint.yfilter)
	|| ydk::is_set(backup_remote_lfa.yfilter)
	|| ydk::is_set(backup_repair_list_size.yfilter)
	|| ydk::is_set(backup_tunnel_interface_name.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::RouteBackupPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-backup-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::RouteBackupPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backup_route_interface_name.is_set || is_set(backup_route_interface_name.yfilter)) leaf_name_data.push_back(backup_route_interface_name.get_name_leafdata());
    if (backup_route_next_hop_address.is_set || is_set(backup_route_next_hop_address.yfilter)) leaf_name_data.push_back(backup_route_next_hop_address.get_name_leafdata());
    if (backup_route_source.is_set || is_set(backup_route_source.yfilter)) leaf_name_data.push_back(backup_route_source.get_name_leafdata());
    if (backup_metric.is_set || is_set(backup_metric.yfilter)) leaf_name_data.push_back(backup_metric.get_name_leafdata());
    if (primary_path.is_set || is_set(primary_path.yfilter)) leaf_name_data.push_back(primary_path.get_name_leafdata());
    if (line_card_disjoint.is_set || is_set(line_card_disjoint.yfilter)) leaf_name_data.push_back(line_card_disjoint.get_name_leafdata());
    if (downstream.is_set || is_set(downstream.yfilter)) leaf_name_data.push_back(downstream.get_name_leafdata());
    if (node_protect.is_set || is_set(node_protect.yfilter)) leaf_name_data.push_back(node_protect.get_name_leafdata());
    if (srlg_disjoint.is_set || is_set(srlg_disjoint.yfilter)) leaf_name_data.push_back(srlg_disjoint.get_name_leafdata());
    if (backup_remote_lfa.is_set || is_set(backup_remote_lfa.yfilter)) leaf_name_data.push_back(backup_remote_lfa.get_name_leafdata());
    if (backup_repair_list_size.is_set || is_set(backup_repair_list_size.yfilter)) leaf_name_data.push_back(backup_repair_list_size.get_name_leafdata());
    if (backup_tunnel_interface_name.is_set || is_set(backup_tunnel_interface_name.yfilter)) leaf_name_data.push_back(backup_tunnel_interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::RouteBackupPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup-repair")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::RouteBackupPath::BackupRepair>();
        c->parent = this;
        backup_repair.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::RouteBackupPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : backup_repair)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::RouteBackupPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "backup-route-interface-name")
    {
        backup_route_interface_name = value;
        backup_route_interface_name.value_namespace = name_space;
        backup_route_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-route-next-hop-address")
    {
        backup_route_next_hop_address = value;
        backup_route_next_hop_address.value_namespace = name_space;
        backup_route_next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-route-source")
    {
        backup_route_source = value;
        backup_route_source.value_namespace = name_space;
        backup_route_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-metric")
    {
        backup_metric = value;
        backup_metric.value_namespace = name_space;
        backup_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "primary-path")
    {
        primary_path = value;
        primary_path.value_namespace = name_space;
        primary_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "line-card-disjoint")
    {
        line_card_disjoint = value;
        line_card_disjoint.value_namespace = name_space;
        line_card_disjoint.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "downstream")
    {
        downstream = value;
        downstream.value_namespace = name_space;
        downstream.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-protect")
    {
        node_protect = value;
        node_protect.value_namespace = name_space;
        node_protect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlg-disjoint")
    {
        srlg_disjoint = value;
        srlg_disjoint.value_namespace = name_space;
        srlg_disjoint.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-remote-lfa")
    {
        backup_remote_lfa = value;
        backup_remote_lfa.value_namespace = name_space;
        backup_remote_lfa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-repair-list-size")
    {
        backup_repair_list_size = value;
        backup_repair_list_size.value_namespace = name_space;
        backup_repair_list_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-tunnel-interface-name")
    {
        backup_tunnel_interface_name = value;
        backup_tunnel_interface_name.value_namespace = name_space;
        backup_tunnel_interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::RouteBackupPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "backup-route-interface-name")
    {
        backup_route_interface_name.yfilter = yfilter;
    }
    if(value_path == "backup-route-next-hop-address")
    {
        backup_route_next_hop_address.yfilter = yfilter;
    }
    if(value_path == "backup-route-source")
    {
        backup_route_source.yfilter = yfilter;
    }
    if(value_path == "backup-metric")
    {
        backup_metric.yfilter = yfilter;
    }
    if(value_path == "primary-path")
    {
        primary_path.yfilter = yfilter;
    }
    if(value_path == "line-card-disjoint")
    {
        line_card_disjoint.yfilter = yfilter;
    }
    if(value_path == "downstream")
    {
        downstream.yfilter = yfilter;
    }
    if(value_path == "node-protect")
    {
        node_protect.yfilter = yfilter;
    }
    if(value_path == "srlg-disjoint")
    {
        srlg_disjoint.yfilter = yfilter;
    }
    if(value_path == "backup-remote-lfa")
    {
        backup_remote_lfa.yfilter = yfilter;
    }
    if(value_path == "backup-repair-list-size")
    {
        backup_repair_list_size.yfilter = yfilter;
    }
    if(value_path == "backup-tunnel-interface-name")
    {
        backup_tunnel_interface_name.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::RouteBackupPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backup-repair" || name == "backup-route-interface-name" || name == "backup-route-next-hop-address" || name == "backup-route-source" || name == "backup-metric" || name == "primary-path" || name == "line-card-disjoint" || name == "downstream" || name == "node-protect" || name == "srlg-disjoint" || name == "backup-remote-lfa" || name == "backup-repair-list-size" || name == "backup-tunnel-interface-name")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::RouteBackupPath::BackupRepair::BackupRepair()
    :
    repair_element_id{YType::str, "repair-element-id"},
    repair_label{YType::uint32, "repair-label"},
    repair_element_type{YType::uint32, "repair-element-type"}
{

    yang_name = "backup-repair"; yang_parent_name = "route-backup-path"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::RouteBackupPath::BackupRepair::~BackupRepair()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::RouteBackupPath::BackupRepair::has_data() const
{
    return repair_element_id.is_set
	|| repair_label.is_set
	|| repair_element_type.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::RouteBackupPath::BackupRepair::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(repair_element_id.yfilter)
	|| ydk::is_set(repair_label.yfilter)
	|| ydk::is_set(repair_element_type.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::RouteBackupPath::BackupRepair::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-repair";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::RouteBackupPath::BackupRepair::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (repair_element_id.is_set || is_set(repair_element_id.yfilter)) leaf_name_data.push_back(repair_element_id.get_name_leafdata());
    if (repair_label.is_set || is_set(repair_label.yfilter)) leaf_name_data.push_back(repair_label.get_name_leafdata());
    if (repair_element_type.is_set || is_set(repair_element_type.yfilter)) leaf_name_data.push_back(repair_element_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::RouteBackupPath::BackupRepair::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::RouteBackupPath::BackupRepair::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::RouteBackupPath::BackupRepair::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "repair-element-id")
    {
        repair_element_id = value;
        repair_element_id.value_namespace = name_space;
        repair_element_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-label")
    {
        repair_label = value;
        repair_label.value_namespace = name_space;
        repair_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type = value;
        repair_element_type.value_namespace = name_space;
        repair_element_type.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::RouteBackupPath::BackupRepair::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "repair-element-id")
    {
        repair_element_id.yfilter = yfilter;
    }
    if(value_path == "repair-label")
    {
        repair_label.yfilter = yfilter;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::RouteBackupPath::BackupRepair::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "repair-element-id" || name == "repair-label" || name == "repair-element-type")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::SrMicroloopAvoidancePath::SrMicroloopAvoidancePath()
    :
    microloop_repair_list_size{YType::uint32, "microloop-repair-list-size"},
    microloop_tunnel_interface_name{YType::str, "microloop-tunnel-interface-name"},
    microloop_strict_spf{YType::boolean, "microloop-strict-spf"}
{

    yang_name = "sr-microloop-avoidance-path"; yang_parent_name = "route-path"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::SrMicroloopAvoidancePath::~SrMicroloopAvoidancePath()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::SrMicroloopAvoidancePath::has_data() const
{
    for (std::size_t index=0; index<microloop_repair.size(); index++)
    {
        if(microloop_repair[index]->has_data())
            return true;
    }
    return microloop_repair_list_size.is_set
	|| microloop_tunnel_interface_name.is_set
	|| microloop_strict_spf.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::SrMicroloopAvoidancePath::has_operation() const
{
    for (std::size_t index=0; index<microloop_repair.size(); index++)
    {
        if(microloop_repair[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(microloop_repair_list_size.yfilter)
	|| ydk::is_set(microloop_tunnel_interface_name.yfilter)
	|| ydk::is_set(microloop_strict_spf.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::SrMicroloopAvoidancePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-microloop-avoidance-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::SrMicroloopAvoidancePath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (microloop_repair_list_size.is_set || is_set(microloop_repair_list_size.yfilter)) leaf_name_data.push_back(microloop_repair_list_size.get_name_leafdata());
    if (microloop_tunnel_interface_name.is_set || is_set(microloop_tunnel_interface_name.yfilter)) leaf_name_data.push_back(microloop_tunnel_interface_name.get_name_leafdata());
    if (microloop_strict_spf.is_set || is_set(microloop_strict_spf.yfilter)) leaf_name_data.push_back(microloop_strict_spf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::SrMicroloopAvoidancePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "microloop-repair")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair>();
        c->parent = this;
        microloop_repair.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::SrMicroloopAvoidancePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : microloop_repair)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::SrMicroloopAvoidancePath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "microloop-repair-list-size")
    {
        microloop_repair_list_size = value;
        microloop_repair_list_size.value_namespace = name_space;
        microloop_repair_list_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "microloop-tunnel-interface-name")
    {
        microloop_tunnel_interface_name = value;
        microloop_tunnel_interface_name.value_namespace = name_space;
        microloop_tunnel_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "microloop-strict-spf")
    {
        microloop_strict_spf = value;
        microloop_strict_spf.value_namespace = name_space;
        microloop_strict_spf.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::SrMicroloopAvoidancePath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "microloop-repair-list-size")
    {
        microloop_repair_list_size.yfilter = yfilter;
    }
    if(value_path == "microloop-tunnel-interface-name")
    {
        microloop_tunnel_interface_name.yfilter = yfilter;
    }
    if(value_path == "microloop-strict-spf")
    {
        microloop_strict_spf.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::SrMicroloopAvoidancePath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "microloop-repair" || name == "microloop-repair-list-size" || name == "microloop-tunnel-interface-name" || name == "microloop-strict-spf")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::MicroloopRepair()
    :
    repair_element_id{YType::str, "repair-element-id"},
    repair_label{YType::uint32, "repair-label"},
    repair_element_type{YType::uint32, "repair-element-type"}
{

    yang_name = "microloop-repair"; yang_parent_name = "sr-microloop-avoidance-path"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::~MicroloopRepair()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::has_data() const
{
    return repair_element_id.is_set
	|| repair_label.is_set
	|| repair_element_type.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(repair_element_id.yfilter)
	|| ydk::is_set(repair_label.yfilter)
	|| ydk::is_set(repair_element_type.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "microloop-repair";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (repair_element_id.is_set || is_set(repair_element_id.yfilter)) leaf_name_data.push_back(repair_element_id.get_name_leafdata());
    if (repair_label.is_set || is_set(repair_label.yfilter)) leaf_name_data.push_back(repair_label.get_name_leafdata());
    if (repair_element_type.is_set || is_set(repair_element_type.yfilter)) leaf_name_data.push_back(repair_element_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "repair-element-id")
    {
        repair_element_id = value;
        repair_element_id.value_namespace = name_space;
        repair_element_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-label")
    {
        repair_label = value;
        repair_label.value_namespace = name_space;
        repair_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type = value;
        repair_element_type.value_namespace = name_space;
        repair_element_type.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "repair-element-id")
    {
        repair_element_id.yfilter = yfilter;
    }
    if(value_path == "repair-label")
    {
        repair_label.yfilter = yfilter;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "repair-element-id" || name == "repair-label" || name == "repair-element-type")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteAreas()
{

    yang_name = "connected-route-areas"; yang_parent_name = "route-area"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::~ConnectedRouteAreas()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::has_data() const
{
    for (std::size_t index=0; index<connected_route_area.size(); index++)
    {
        if(connected_route_area[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::has_operation() const
{
    for (std::size_t index=0; index<connected_route_area.size(); index++)
    {
        if(connected_route_area[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connected-route-areas";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "connected-route-area")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea>();
        c->parent = this;
        connected_route_area.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : connected_route_area)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "connected-route-area")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::ConnectedRouteArea()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint32, "prefix-length"},
    route_prefix{YType::str, "route-prefix"},
    route_prefix_length{YType::uint32, "route-prefix-length"},
    route_metric{YType::uint32, "route-metric"},
    route_type{YType::enumeration, "route-type"},
    route_connected{YType::boolean, "route-connected"}
    	,
    route_info(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo>())
{
    route_info->parent = this;

    yang_name = "connected-route-area"; yang_parent_name = "connected-route-areas"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::~ConnectedRouteArea()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::has_data() const
{
    for (std::size_t index=0; index<route_path.size(); index++)
    {
        if(route_path[index]->has_data())
            return true;
    }
    return prefix.is_set
	|| prefix_length.is_set
	|| route_prefix.is_set
	|| route_prefix_length.is_set
	|| route_metric.is_set
	|| route_type.is_set
	|| route_connected.is_set
	|| (route_info !=  nullptr && route_info->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::has_operation() const
{
    for (std::size_t index=0; index<route_path.size(); index++)
    {
        if(route_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(route_prefix.yfilter)
	|| ydk::is_set(route_prefix_length.yfilter)
	|| ydk::is_set(route_metric.yfilter)
	|| ydk::is_set(route_type.yfilter)
	|| ydk::is_set(route_connected.yfilter)
	|| (route_info !=  nullptr && route_info->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connected-route-area";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (route_prefix.is_set || is_set(route_prefix.yfilter)) leaf_name_data.push_back(route_prefix.get_name_leafdata());
    if (route_prefix_length.is_set || is_set(route_prefix_length.yfilter)) leaf_name_data.push_back(route_prefix_length.get_name_leafdata());
    if (route_metric.is_set || is_set(route_metric.yfilter)) leaf_name_data.push_back(route_metric.get_name_leafdata());
    if (route_type.is_set || is_set(route_type.yfilter)) leaf_name_data.push_back(route_type.get_name_leafdata());
    if (route_connected.is_set || is_set(route_connected.yfilter)) leaf_name_data.push_back(route_connected.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-info")
    {
        if(route_info == nullptr)
        {
            route_info = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo>();
        }
        return route_info;
    }

    if(child_yang_name == "route-path")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath>();
        c->parent = this;
        route_path.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(route_info != nullptr)
    {
        children["route-info"] = route_info;
    }

    count = 0;
    for (auto const & c : route_path)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-prefix")
    {
        route_prefix = value;
        route_prefix.value_namespace = name_space;
        route_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-prefix-length")
    {
        route_prefix_length = value;
        route_prefix_length.value_namespace = name_space;
        route_prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-metric")
    {
        route_metric = value;
        route_metric.value_namespace = name_space;
        route_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-type")
    {
        route_type = value;
        route_type.value_namespace = name_space;
        route_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-connected")
    {
        route_connected = value;
        route_connected.value_namespace = name_space;
        route_connected.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "route-prefix")
    {
        route_prefix.yfilter = yfilter;
    }
    if(value_path == "route-prefix-length")
    {
        route_prefix_length.yfilter = yfilter;
    }
    if(value_path == "route-metric")
    {
        route_metric.yfilter = yfilter;
    }
    if(value_path == "route-type")
    {
        route_type.yfilter = yfilter;
    }
    if(value_path == "route-connected")
    {
        route_connected.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-info" || name == "route-path" || name == "prefix" || name == "prefix-length" || name == "route-prefix" || name == "route-prefix-length" || name == "route-metric" || name == "route-type" || name == "route-connected")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::RouteInfo()
    :
    route_area_id{YType::uint32, "route-area-id"},
    route_te_metric{YType::uint32, "route-te-metric"},
    route_rib_version{YType::uint32, "route-rib-version"},
    route_spf_version{YType::uint64, "route-spf-version"},
    route_forward_distance{YType::uint32, "route-forward-distance"},
    route_source{YType::uint16, "route-source"},
    route_spf_priority{YType::uint8, "route-spf-priority"},
    route_auto_excluded{YType::boolean, "route-auto-excluded"},
    route_srte_prefix_registered{YType::boolean, "route-srte-prefix-registered"},
    route_srte_nbr_registered{YType::uint16, "route-srte-nbr-registered"}
    	,
    route_update_time(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::RouteUpdateTime>())
	,route_fail_time(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::RouteFailTime>())
{
    route_update_time->parent = this;
    route_fail_time->parent = this;

    yang_name = "route-info"; yang_parent_name = "connected-route-area"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::~RouteInfo()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::has_data() const
{
    return route_area_id.is_set
	|| route_te_metric.is_set
	|| route_rib_version.is_set
	|| route_spf_version.is_set
	|| route_forward_distance.is_set
	|| route_source.is_set
	|| route_spf_priority.is_set
	|| route_auto_excluded.is_set
	|| route_srte_prefix_registered.is_set
	|| route_srte_nbr_registered.is_set
	|| (route_update_time !=  nullptr && route_update_time->has_data())
	|| (route_fail_time !=  nullptr && route_fail_time->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_area_id.yfilter)
	|| ydk::is_set(route_te_metric.yfilter)
	|| ydk::is_set(route_rib_version.yfilter)
	|| ydk::is_set(route_spf_version.yfilter)
	|| ydk::is_set(route_forward_distance.yfilter)
	|| ydk::is_set(route_source.yfilter)
	|| ydk::is_set(route_spf_priority.yfilter)
	|| ydk::is_set(route_auto_excluded.yfilter)
	|| ydk::is_set(route_srte_prefix_registered.yfilter)
	|| ydk::is_set(route_srte_nbr_registered.yfilter)
	|| (route_update_time !=  nullptr && route_update_time->has_operation())
	|| (route_fail_time !=  nullptr && route_fail_time->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_area_id.is_set || is_set(route_area_id.yfilter)) leaf_name_data.push_back(route_area_id.get_name_leafdata());
    if (route_te_metric.is_set || is_set(route_te_metric.yfilter)) leaf_name_data.push_back(route_te_metric.get_name_leafdata());
    if (route_rib_version.is_set || is_set(route_rib_version.yfilter)) leaf_name_data.push_back(route_rib_version.get_name_leafdata());
    if (route_spf_version.is_set || is_set(route_spf_version.yfilter)) leaf_name_data.push_back(route_spf_version.get_name_leafdata());
    if (route_forward_distance.is_set || is_set(route_forward_distance.yfilter)) leaf_name_data.push_back(route_forward_distance.get_name_leafdata());
    if (route_source.is_set || is_set(route_source.yfilter)) leaf_name_data.push_back(route_source.get_name_leafdata());
    if (route_spf_priority.is_set || is_set(route_spf_priority.yfilter)) leaf_name_data.push_back(route_spf_priority.get_name_leafdata());
    if (route_auto_excluded.is_set || is_set(route_auto_excluded.yfilter)) leaf_name_data.push_back(route_auto_excluded.get_name_leafdata());
    if (route_srte_prefix_registered.is_set || is_set(route_srte_prefix_registered.yfilter)) leaf_name_data.push_back(route_srte_prefix_registered.get_name_leafdata());
    if (route_srte_nbr_registered.is_set || is_set(route_srte_nbr_registered.yfilter)) leaf_name_data.push_back(route_srte_nbr_registered.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-update-time")
    {
        if(route_update_time == nullptr)
        {
            route_update_time = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::RouteUpdateTime>();
        }
        return route_update_time;
    }

    if(child_yang_name == "route-fail-time")
    {
        if(route_fail_time == nullptr)
        {
            route_fail_time = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::RouteFailTime>();
        }
        return route_fail_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(route_update_time != nullptr)
    {
        children["route-update-time"] = route_update_time;
    }

    if(route_fail_time != nullptr)
    {
        children["route-fail-time"] = route_fail_time;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-area-id")
    {
        route_area_id = value;
        route_area_id.value_namespace = name_space;
        route_area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-te-metric")
    {
        route_te_metric = value;
        route_te_metric.value_namespace = name_space;
        route_te_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-rib-version")
    {
        route_rib_version = value;
        route_rib_version.value_namespace = name_space;
        route_rib_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-spf-version")
    {
        route_spf_version = value;
        route_spf_version.value_namespace = name_space;
        route_spf_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-forward-distance")
    {
        route_forward_distance = value;
        route_forward_distance.value_namespace = name_space;
        route_forward_distance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-source")
    {
        route_source = value;
        route_source.value_namespace = name_space;
        route_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-spf-priority")
    {
        route_spf_priority = value;
        route_spf_priority.value_namespace = name_space;
        route_spf_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-auto-excluded")
    {
        route_auto_excluded = value;
        route_auto_excluded.value_namespace = name_space;
        route_auto_excluded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-srte-prefix-registered")
    {
        route_srte_prefix_registered = value;
        route_srte_prefix_registered.value_namespace = name_space;
        route_srte_prefix_registered.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-srte-nbr-registered")
    {
        route_srte_nbr_registered = value;
        route_srte_nbr_registered.value_namespace = name_space;
        route_srte_nbr_registered.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-area-id")
    {
        route_area_id.yfilter = yfilter;
    }
    if(value_path == "route-te-metric")
    {
        route_te_metric.yfilter = yfilter;
    }
    if(value_path == "route-rib-version")
    {
        route_rib_version.yfilter = yfilter;
    }
    if(value_path == "route-spf-version")
    {
        route_spf_version.yfilter = yfilter;
    }
    if(value_path == "route-forward-distance")
    {
        route_forward_distance.yfilter = yfilter;
    }
    if(value_path == "route-source")
    {
        route_source.yfilter = yfilter;
    }
    if(value_path == "route-spf-priority")
    {
        route_spf_priority.yfilter = yfilter;
    }
    if(value_path == "route-auto-excluded")
    {
        route_auto_excluded.yfilter = yfilter;
    }
    if(value_path == "route-srte-prefix-registered")
    {
        route_srte_prefix_registered.yfilter = yfilter;
    }
    if(value_path == "route-srte-nbr-registered")
    {
        route_srte_nbr_registered.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-update-time" || name == "route-fail-time" || name == "route-area-id" || name == "route-te-metric" || name == "route-rib-version" || name == "route-spf-version" || name == "route-forward-distance" || name == "route-source" || name == "route-spf-priority" || name == "route-auto-excluded" || name == "route-srte-prefix-registered" || name == "route-srte-nbr-registered")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::RouteUpdateTime::RouteUpdateTime()
    :
    second{YType::uint32, "second"},
    nanosecond{YType::uint32, "nanosecond"}
{

    yang_name = "route-update-time"; yang_parent_name = "route-info"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::RouteUpdateTime::~RouteUpdateTime()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::RouteUpdateTime::has_data() const
{
    return second.is_set
	|| nanosecond.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::RouteUpdateTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(second.yfilter)
	|| ydk::is_set(nanosecond.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::RouteUpdateTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-update-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::RouteUpdateTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());
    if (nanosecond.is_set || is_set(nanosecond.yfilter)) leaf_name_data.push_back(nanosecond.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::RouteUpdateTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::RouteUpdateTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::RouteUpdateTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "second")
    {
        second = value;
        second.value_namespace = name_space;
        second.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanosecond")
    {
        nanosecond = value;
        nanosecond.value_namespace = name_space;
        nanosecond.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::RouteUpdateTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "second")
    {
        second.yfilter = yfilter;
    }
    if(value_path == "nanosecond")
    {
        nanosecond.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::RouteUpdateTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second" || name == "nanosecond")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::RouteFailTime::RouteFailTime()
    :
    second{YType::uint32, "second"},
    nanosecond{YType::uint32, "nanosecond"}
{

    yang_name = "route-fail-time"; yang_parent_name = "route-info"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::RouteFailTime::~RouteFailTime()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::RouteFailTime::has_data() const
{
    return second.is_set
	|| nanosecond.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::RouteFailTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(second.yfilter)
	|| ydk::is_set(nanosecond.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::RouteFailTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-fail-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::RouteFailTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());
    if (nanosecond.is_set || is_set(nanosecond.yfilter)) leaf_name_data.push_back(nanosecond.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::RouteFailTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::RouteFailTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::RouteFailTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "second")
    {
        second = value;
        second.value_namespace = name_space;
        second.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanosecond")
    {
        nanosecond = value;
        nanosecond.value_namespace = name_space;
        nanosecond.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::RouteFailTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "second")
    {
        second.yfilter = yfilter;
    }
    if(value_path == "nanosecond")
    {
        nanosecond.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::RouteFailTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second" || name == "nanosecond")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::RoutePath()
    :
    route_interface_name{YType::str, "route-interface-name"},
    route_next_hop_address{YType::str, "route-next-hop-address"},
    route_source{YType::str, "route-source"},
    route_lsaid{YType::str, "route-lsaid"},
    route_path_is_mcast_intact{YType::boolean, "route-path-is-mcast-intact"},
    route_path_is_ucmp_path{YType::boolean, "route-path-is-ucmp-path"},
    route_metric{YType::uint32, "route-metric"},
    lsa_type{YType::uint8, "lsa-type"},
    area_id{YType::uint32, "area-id"},
    area_format{YType::boolean, "area-format"}
    	,
    sr_microloop_avoidance_path(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::SrMicroloopAvoidancePath>())
{
    sr_microloop_avoidance_path->parent = this;

    yang_name = "route-path"; yang_parent_name = "connected-route-area"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::~RoutePath()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::has_data() const
{
    return route_interface_name.is_set
	|| route_next_hop_address.is_set
	|| route_source.is_set
	|| route_lsaid.is_set
	|| route_path_is_mcast_intact.is_set
	|| route_path_is_ucmp_path.is_set
	|| route_metric.is_set
	|| lsa_type.is_set
	|| area_id.is_set
	|| area_format.is_set
	|| (sr_microloop_avoidance_path !=  nullptr && sr_microloop_avoidance_path->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_interface_name.yfilter)
	|| ydk::is_set(route_next_hop_address.yfilter)
	|| ydk::is_set(route_source.yfilter)
	|| ydk::is_set(route_lsaid.yfilter)
	|| ydk::is_set(route_path_is_mcast_intact.yfilter)
	|| ydk::is_set(route_path_is_ucmp_path.yfilter)
	|| ydk::is_set(route_metric.yfilter)
	|| ydk::is_set(lsa_type.yfilter)
	|| ydk::is_set(area_id.yfilter)
	|| ydk::is_set(area_format.yfilter)
	|| (sr_microloop_avoidance_path !=  nullptr && sr_microloop_avoidance_path->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_interface_name.is_set || is_set(route_interface_name.yfilter)) leaf_name_data.push_back(route_interface_name.get_name_leafdata());
    if (route_next_hop_address.is_set || is_set(route_next_hop_address.yfilter)) leaf_name_data.push_back(route_next_hop_address.get_name_leafdata());
    if (route_source.is_set || is_set(route_source.yfilter)) leaf_name_data.push_back(route_source.get_name_leafdata());
    if (route_lsaid.is_set || is_set(route_lsaid.yfilter)) leaf_name_data.push_back(route_lsaid.get_name_leafdata());
    if (route_path_is_mcast_intact.is_set || is_set(route_path_is_mcast_intact.yfilter)) leaf_name_data.push_back(route_path_is_mcast_intact.get_name_leafdata());
    if (route_path_is_ucmp_path.is_set || is_set(route_path_is_ucmp_path.yfilter)) leaf_name_data.push_back(route_path_is_ucmp_path.get_name_leafdata());
    if (route_metric.is_set || is_set(route_metric.yfilter)) leaf_name_data.push_back(route_metric.get_name_leafdata());
    if (lsa_type.is_set || is_set(lsa_type.yfilter)) leaf_name_data.push_back(lsa_type.get_name_leafdata());
    if (area_id.is_set || is_set(area_id.yfilter)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (area_format.is_set || is_set(area_format.yfilter)) leaf_name_data.push_back(area_format.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sr-microloop-avoidance-path")
    {
        if(sr_microloop_avoidance_path == nullptr)
        {
            sr_microloop_avoidance_path = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::SrMicroloopAvoidancePath>();
        }
        return sr_microloop_avoidance_path;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(sr_microloop_avoidance_path != nullptr)
    {
        children["sr-microloop-avoidance-path"] = sr_microloop_avoidance_path;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-interface-name")
    {
        route_interface_name = value;
        route_interface_name.value_namespace = name_space;
        route_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-next-hop-address")
    {
        route_next_hop_address = value;
        route_next_hop_address.value_namespace = name_space;
        route_next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-source")
    {
        route_source = value;
        route_source.value_namespace = name_space;
        route_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-lsaid")
    {
        route_lsaid = value;
        route_lsaid.value_namespace = name_space;
        route_lsaid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-path-is-mcast-intact")
    {
        route_path_is_mcast_intact = value;
        route_path_is_mcast_intact.value_namespace = name_space;
        route_path_is_mcast_intact.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-path-is-ucmp-path")
    {
        route_path_is_ucmp_path = value;
        route_path_is_ucmp_path.value_namespace = name_space;
        route_path_is_ucmp_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-metric")
    {
        route_metric = value;
        route_metric.value_namespace = name_space;
        route_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-type")
    {
        lsa_type = value;
        lsa_type.value_namespace = name_space;
        lsa_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-id")
    {
        area_id = value;
        area_id.value_namespace = name_space;
        area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-format")
    {
        area_format = value;
        area_format.value_namespace = name_space;
        area_format.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-interface-name")
    {
        route_interface_name.yfilter = yfilter;
    }
    if(value_path == "route-next-hop-address")
    {
        route_next_hop_address.yfilter = yfilter;
    }
    if(value_path == "route-source")
    {
        route_source.yfilter = yfilter;
    }
    if(value_path == "route-lsaid")
    {
        route_lsaid.yfilter = yfilter;
    }
    if(value_path == "route-path-is-mcast-intact")
    {
        route_path_is_mcast_intact.yfilter = yfilter;
    }
    if(value_path == "route-path-is-ucmp-path")
    {
        route_path_is_ucmp_path.yfilter = yfilter;
    }
    if(value_path == "route-metric")
    {
        route_metric.yfilter = yfilter;
    }
    if(value_path == "lsa-type")
    {
        lsa_type.yfilter = yfilter;
    }
    if(value_path == "area-id")
    {
        area_id.yfilter = yfilter;
    }
    if(value_path == "area-format")
    {
        area_format.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sr-microloop-avoidance-path" || name == "route-interface-name" || name == "route-next-hop-address" || name == "route-source" || name == "route-lsaid" || name == "route-path-is-mcast-intact" || name == "route-path-is-ucmp-path" || name == "route-metric" || name == "lsa-type" || name == "area-id" || name == "area-format")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::SrMicroloopAvoidancePath::SrMicroloopAvoidancePath()
    :
    microloop_repair_list_size{YType::uint32, "microloop-repair-list-size"},
    microloop_tunnel_interface_name{YType::str, "microloop-tunnel-interface-name"},
    microloop_strict_spf{YType::boolean, "microloop-strict-spf"}
{

    yang_name = "sr-microloop-avoidance-path"; yang_parent_name = "route-path"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::SrMicroloopAvoidancePath::~SrMicroloopAvoidancePath()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::SrMicroloopAvoidancePath::has_data() const
{
    for (std::size_t index=0; index<microloop_repair.size(); index++)
    {
        if(microloop_repair[index]->has_data())
            return true;
    }
    return microloop_repair_list_size.is_set
	|| microloop_tunnel_interface_name.is_set
	|| microloop_strict_spf.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::SrMicroloopAvoidancePath::has_operation() const
{
    for (std::size_t index=0; index<microloop_repair.size(); index++)
    {
        if(microloop_repair[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(microloop_repair_list_size.yfilter)
	|| ydk::is_set(microloop_tunnel_interface_name.yfilter)
	|| ydk::is_set(microloop_strict_spf.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::SrMicroloopAvoidancePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-microloop-avoidance-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::SrMicroloopAvoidancePath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (microloop_repair_list_size.is_set || is_set(microloop_repair_list_size.yfilter)) leaf_name_data.push_back(microloop_repair_list_size.get_name_leafdata());
    if (microloop_tunnel_interface_name.is_set || is_set(microloop_tunnel_interface_name.yfilter)) leaf_name_data.push_back(microloop_tunnel_interface_name.get_name_leafdata());
    if (microloop_strict_spf.is_set || is_set(microloop_strict_spf.yfilter)) leaf_name_data.push_back(microloop_strict_spf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::SrMicroloopAvoidancePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "microloop-repair")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair>();
        c->parent = this;
        microloop_repair.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::SrMicroloopAvoidancePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : microloop_repair)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::SrMicroloopAvoidancePath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "microloop-repair-list-size")
    {
        microloop_repair_list_size = value;
        microloop_repair_list_size.value_namespace = name_space;
        microloop_repair_list_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "microloop-tunnel-interface-name")
    {
        microloop_tunnel_interface_name = value;
        microloop_tunnel_interface_name.value_namespace = name_space;
        microloop_tunnel_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "microloop-strict-spf")
    {
        microloop_strict_spf = value;
        microloop_strict_spf.value_namespace = name_space;
        microloop_strict_spf.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::SrMicroloopAvoidancePath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "microloop-repair-list-size")
    {
        microloop_repair_list_size.yfilter = yfilter;
    }
    if(value_path == "microloop-tunnel-interface-name")
    {
        microloop_tunnel_interface_name.yfilter = yfilter;
    }
    if(value_path == "microloop-strict-spf")
    {
        microloop_strict_spf.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::SrMicroloopAvoidancePath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "microloop-repair" || name == "microloop-repair-list-size" || name == "microloop-tunnel-interface-name" || name == "microloop-strict-spf")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::MicroloopRepair()
    :
    repair_element_id{YType::str, "repair-element-id"},
    repair_label{YType::uint32, "repair-label"},
    repair_element_type{YType::uint32, "repair-element-type"}
{

    yang_name = "microloop-repair"; yang_parent_name = "sr-microloop-avoidance-path"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::~MicroloopRepair()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::has_data() const
{
    return repair_element_id.is_set
	|| repair_label.is_set
	|| repair_element_type.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(repair_element_id.yfilter)
	|| ydk::is_set(repair_label.yfilter)
	|| ydk::is_set(repair_element_type.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "microloop-repair";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (repair_element_id.is_set || is_set(repair_element_id.yfilter)) leaf_name_data.push_back(repair_element_id.get_name_leafdata());
    if (repair_label.is_set || is_set(repair_label.yfilter)) leaf_name_data.push_back(repair_label.get_name_leafdata());
    if (repair_element_type.is_set || is_set(repair_element_type.yfilter)) leaf_name_data.push_back(repair_element_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "repair-element-id")
    {
        repair_element_id = value;
        repair_element_id.value_namespace = name_space;
        repair_element_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-label")
    {
        repair_label = value;
        repair_label.value_namespace = name_space;
        repair_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type = value;
        repair_element_type.value_namespace = name_space;
        repair_element_type.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "repair-element-id")
    {
        repair_element_id.yfilter = yfilter;
    }
    if(value_path == "repair-label")
    {
        repair_label.yfilter = yfilter;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "repair-element-id" || name == "repair-label" || name == "repair-element-type")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteAreas()
{

    yang_name = "backup-route-areas"; yang_parent_name = "route-area"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::~BackupRouteAreas()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::has_data() const
{
    for (std::size_t index=0; index<backup_route_area.size(); index++)
    {
        if(backup_route_area[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::has_operation() const
{
    for (std::size_t index=0; index<backup_route_area.size(); index++)
    {
        if(backup_route_area[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-route-areas";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup-route-area")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea>();
        c->parent = this;
        backup_route_area.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : backup_route_area)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backup-route-area")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::BackupRouteArea()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint32, "prefix-length"},
    route_prefix{YType::str, "route-prefix"},
    route_prefix_length{YType::uint32, "route-prefix-length"},
    route_metric{YType::uint32, "route-metric"},
    route_type{YType::enumeration, "route-type"},
    route_connected{YType::boolean, "route-connected"}
    	,
    route_info(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo>())
{
    route_info->parent = this;

    yang_name = "backup-route-area"; yang_parent_name = "backup-route-areas"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::~BackupRouteArea()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::has_data() const
{
    for (std::size_t index=0; index<route_path.size(); index++)
    {
        if(route_path[index]->has_data())
            return true;
    }
    return prefix.is_set
	|| prefix_length.is_set
	|| route_prefix.is_set
	|| route_prefix_length.is_set
	|| route_metric.is_set
	|| route_type.is_set
	|| route_connected.is_set
	|| (route_info !=  nullptr && route_info->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::has_operation() const
{
    for (std::size_t index=0; index<route_path.size(); index++)
    {
        if(route_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(route_prefix.yfilter)
	|| ydk::is_set(route_prefix_length.yfilter)
	|| ydk::is_set(route_metric.yfilter)
	|| ydk::is_set(route_type.yfilter)
	|| ydk::is_set(route_connected.yfilter)
	|| (route_info !=  nullptr && route_info->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-route-area";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (route_prefix.is_set || is_set(route_prefix.yfilter)) leaf_name_data.push_back(route_prefix.get_name_leafdata());
    if (route_prefix_length.is_set || is_set(route_prefix_length.yfilter)) leaf_name_data.push_back(route_prefix_length.get_name_leafdata());
    if (route_metric.is_set || is_set(route_metric.yfilter)) leaf_name_data.push_back(route_metric.get_name_leafdata());
    if (route_type.is_set || is_set(route_type.yfilter)) leaf_name_data.push_back(route_type.get_name_leafdata());
    if (route_connected.is_set || is_set(route_connected.yfilter)) leaf_name_data.push_back(route_connected.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-info")
    {
        if(route_info == nullptr)
        {
            route_info = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo>();
        }
        return route_info;
    }

    if(child_yang_name == "route-path")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath>();
        c->parent = this;
        route_path.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(route_info != nullptr)
    {
        children["route-info"] = route_info;
    }

    count = 0;
    for (auto const & c : route_path)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-prefix")
    {
        route_prefix = value;
        route_prefix.value_namespace = name_space;
        route_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-prefix-length")
    {
        route_prefix_length = value;
        route_prefix_length.value_namespace = name_space;
        route_prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-metric")
    {
        route_metric = value;
        route_metric.value_namespace = name_space;
        route_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-type")
    {
        route_type = value;
        route_type.value_namespace = name_space;
        route_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-connected")
    {
        route_connected = value;
        route_connected.value_namespace = name_space;
        route_connected.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "route-prefix")
    {
        route_prefix.yfilter = yfilter;
    }
    if(value_path == "route-prefix-length")
    {
        route_prefix_length.yfilter = yfilter;
    }
    if(value_path == "route-metric")
    {
        route_metric.yfilter = yfilter;
    }
    if(value_path == "route-type")
    {
        route_type.yfilter = yfilter;
    }
    if(value_path == "route-connected")
    {
        route_connected.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-info" || name == "route-path" || name == "prefix" || name == "prefix-length" || name == "route-prefix" || name == "route-prefix-length" || name == "route-metric" || name == "route-type" || name == "route-connected")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteInfo()
    :
    route_area_id{YType::uint32, "route-area-id"},
    route_te_metric{YType::uint32, "route-te-metric"},
    route_rib_version{YType::uint32, "route-rib-version"},
    route_spf_version{YType::uint64, "route-spf-version"},
    route_forward_distance{YType::uint32, "route-forward-distance"},
    route_source{YType::uint16, "route-source"},
    route_spf_priority{YType::uint8, "route-spf-priority"},
    route_auto_excluded{YType::boolean, "route-auto-excluded"},
    route_srte_prefix_registered{YType::boolean, "route-srte-prefix-registered"},
    route_srte_nbr_registered{YType::uint16, "route-srte-nbr-registered"}
    	,
    route_update_time(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteUpdateTime>())
	,route_fail_time(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteFailTime>())
{
    route_update_time->parent = this;
    route_fail_time->parent = this;

    yang_name = "route-info"; yang_parent_name = "backup-route-area"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::~RouteInfo()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::has_data() const
{
    return route_area_id.is_set
	|| route_te_metric.is_set
	|| route_rib_version.is_set
	|| route_spf_version.is_set
	|| route_forward_distance.is_set
	|| route_source.is_set
	|| route_spf_priority.is_set
	|| route_auto_excluded.is_set
	|| route_srte_prefix_registered.is_set
	|| route_srte_nbr_registered.is_set
	|| (route_update_time !=  nullptr && route_update_time->has_data())
	|| (route_fail_time !=  nullptr && route_fail_time->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_area_id.yfilter)
	|| ydk::is_set(route_te_metric.yfilter)
	|| ydk::is_set(route_rib_version.yfilter)
	|| ydk::is_set(route_spf_version.yfilter)
	|| ydk::is_set(route_forward_distance.yfilter)
	|| ydk::is_set(route_source.yfilter)
	|| ydk::is_set(route_spf_priority.yfilter)
	|| ydk::is_set(route_auto_excluded.yfilter)
	|| ydk::is_set(route_srte_prefix_registered.yfilter)
	|| ydk::is_set(route_srte_nbr_registered.yfilter)
	|| (route_update_time !=  nullptr && route_update_time->has_operation())
	|| (route_fail_time !=  nullptr && route_fail_time->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_area_id.is_set || is_set(route_area_id.yfilter)) leaf_name_data.push_back(route_area_id.get_name_leafdata());
    if (route_te_metric.is_set || is_set(route_te_metric.yfilter)) leaf_name_data.push_back(route_te_metric.get_name_leafdata());
    if (route_rib_version.is_set || is_set(route_rib_version.yfilter)) leaf_name_data.push_back(route_rib_version.get_name_leafdata());
    if (route_spf_version.is_set || is_set(route_spf_version.yfilter)) leaf_name_data.push_back(route_spf_version.get_name_leafdata());
    if (route_forward_distance.is_set || is_set(route_forward_distance.yfilter)) leaf_name_data.push_back(route_forward_distance.get_name_leafdata());
    if (route_source.is_set || is_set(route_source.yfilter)) leaf_name_data.push_back(route_source.get_name_leafdata());
    if (route_spf_priority.is_set || is_set(route_spf_priority.yfilter)) leaf_name_data.push_back(route_spf_priority.get_name_leafdata());
    if (route_auto_excluded.is_set || is_set(route_auto_excluded.yfilter)) leaf_name_data.push_back(route_auto_excluded.get_name_leafdata());
    if (route_srte_prefix_registered.is_set || is_set(route_srte_prefix_registered.yfilter)) leaf_name_data.push_back(route_srte_prefix_registered.get_name_leafdata());
    if (route_srte_nbr_registered.is_set || is_set(route_srte_nbr_registered.yfilter)) leaf_name_data.push_back(route_srte_nbr_registered.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-update-time")
    {
        if(route_update_time == nullptr)
        {
            route_update_time = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteUpdateTime>();
        }
        return route_update_time;
    }

    if(child_yang_name == "route-fail-time")
    {
        if(route_fail_time == nullptr)
        {
            route_fail_time = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteFailTime>();
        }
        return route_fail_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(route_update_time != nullptr)
    {
        children["route-update-time"] = route_update_time;
    }

    if(route_fail_time != nullptr)
    {
        children["route-fail-time"] = route_fail_time;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-area-id")
    {
        route_area_id = value;
        route_area_id.value_namespace = name_space;
        route_area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-te-metric")
    {
        route_te_metric = value;
        route_te_metric.value_namespace = name_space;
        route_te_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-rib-version")
    {
        route_rib_version = value;
        route_rib_version.value_namespace = name_space;
        route_rib_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-spf-version")
    {
        route_spf_version = value;
        route_spf_version.value_namespace = name_space;
        route_spf_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-forward-distance")
    {
        route_forward_distance = value;
        route_forward_distance.value_namespace = name_space;
        route_forward_distance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-source")
    {
        route_source = value;
        route_source.value_namespace = name_space;
        route_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-spf-priority")
    {
        route_spf_priority = value;
        route_spf_priority.value_namespace = name_space;
        route_spf_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-auto-excluded")
    {
        route_auto_excluded = value;
        route_auto_excluded.value_namespace = name_space;
        route_auto_excluded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-srte-prefix-registered")
    {
        route_srte_prefix_registered = value;
        route_srte_prefix_registered.value_namespace = name_space;
        route_srte_prefix_registered.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-srte-nbr-registered")
    {
        route_srte_nbr_registered = value;
        route_srte_nbr_registered.value_namespace = name_space;
        route_srte_nbr_registered.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-area-id")
    {
        route_area_id.yfilter = yfilter;
    }
    if(value_path == "route-te-metric")
    {
        route_te_metric.yfilter = yfilter;
    }
    if(value_path == "route-rib-version")
    {
        route_rib_version.yfilter = yfilter;
    }
    if(value_path == "route-spf-version")
    {
        route_spf_version.yfilter = yfilter;
    }
    if(value_path == "route-forward-distance")
    {
        route_forward_distance.yfilter = yfilter;
    }
    if(value_path == "route-source")
    {
        route_source.yfilter = yfilter;
    }
    if(value_path == "route-spf-priority")
    {
        route_spf_priority.yfilter = yfilter;
    }
    if(value_path == "route-auto-excluded")
    {
        route_auto_excluded.yfilter = yfilter;
    }
    if(value_path == "route-srte-prefix-registered")
    {
        route_srte_prefix_registered.yfilter = yfilter;
    }
    if(value_path == "route-srte-nbr-registered")
    {
        route_srte_nbr_registered.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-update-time" || name == "route-fail-time" || name == "route-area-id" || name == "route-te-metric" || name == "route-rib-version" || name == "route-spf-version" || name == "route-forward-distance" || name == "route-source" || name == "route-spf-priority" || name == "route-auto-excluded" || name == "route-srte-prefix-registered" || name == "route-srte-nbr-registered")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteUpdateTime::RouteUpdateTime()
    :
    second{YType::uint32, "second"},
    nanosecond{YType::uint32, "nanosecond"}
{

    yang_name = "route-update-time"; yang_parent_name = "route-info"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteUpdateTime::~RouteUpdateTime()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteUpdateTime::has_data() const
{
    return second.is_set
	|| nanosecond.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteUpdateTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(second.yfilter)
	|| ydk::is_set(nanosecond.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteUpdateTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-update-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteUpdateTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());
    if (nanosecond.is_set || is_set(nanosecond.yfilter)) leaf_name_data.push_back(nanosecond.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteUpdateTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteUpdateTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteUpdateTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "second")
    {
        second = value;
        second.value_namespace = name_space;
        second.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanosecond")
    {
        nanosecond = value;
        nanosecond.value_namespace = name_space;
        nanosecond.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteUpdateTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "second")
    {
        second.yfilter = yfilter;
    }
    if(value_path == "nanosecond")
    {
        nanosecond.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteUpdateTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second" || name == "nanosecond")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteFailTime::RouteFailTime()
    :
    second{YType::uint32, "second"},
    nanosecond{YType::uint32, "nanosecond"}
{

    yang_name = "route-fail-time"; yang_parent_name = "route-info"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteFailTime::~RouteFailTime()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteFailTime::has_data() const
{
    return second.is_set
	|| nanosecond.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteFailTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(second.yfilter)
	|| ydk::is_set(nanosecond.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteFailTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-fail-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteFailTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());
    if (nanosecond.is_set || is_set(nanosecond.yfilter)) leaf_name_data.push_back(nanosecond.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteFailTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteFailTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteFailTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "second")
    {
        second = value;
        second.value_namespace = name_space;
        second.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanosecond")
    {
        nanosecond = value;
        nanosecond.value_namespace = name_space;
        nanosecond.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteFailTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "second")
    {
        second.yfilter = yfilter;
    }
    if(value_path == "nanosecond")
    {
        nanosecond.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteFailTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second" || name == "nanosecond")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::RoutePath()
    :
    route_interface_name{YType::str, "route-interface-name"},
    route_next_hop_address{YType::str, "route-next-hop-address"},
    route_source{YType::str, "route-source"},
    route_lsaid{YType::str, "route-lsaid"},
    route_path_is_mcast_intact{YType::boolean, "route-path-is-mcast-intact"},
    route_path_is_ucmp_path{YType::boolean, "route-path-is-ucmp-path"},
    route_metric{YType::uint32, "route-metric"},
    route_path_id{YType::uint16, "route-path-id"},
    lsa_type{YType::uint8, "lsa-type"}
    	,
    route_backup_path(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::RouteBackupPath>())
	,sr_microloop_avoidance_path(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::SrMicroloopAvoidancePath>())
{
    route_backup_path->parent = this;
    sr_microloop_avoidance_path->parent = this;

    yang_name = "route-path"; yang_parent_name = "backup-route-area"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::~RoutePath()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::has_data() const
{
    return route_interface_name.is_set
	|| route_next_hop_address.is_set
	|| route_source.is_set
	|| route_lsaid.is_set
	|| route_path_is_mcast_intact.is_set
	|| route_path_is_ucmp_path.is_set
	|| route_metric.is_set
	|| route_path_id.is_set
	|| lsa_type.is_set
	|| (route_backup_path !=  nullptr && route_backup_path->has_data())
	|| (sr_microloop_avoidance_path !=  nullptr && sr_microloop_avoidance_path->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_interface_name.yfilter)
	|| ydk::is_set(route_next_hop_address.yfilter)
	|| ydk::is_set(route_source.yfilter)
	|| ydk::is_set(route_lsaid.yfilter)
	|| ydk::is_set(route_path_is_mcast_intact.yfilter)
	|| ydk::is_set(route_path_is_ucmp_path.yfilter)
	|| ydk::is_set(route_metric.yfilter)
	|| ydk::is_set(route_path_id.yfilter)
	|| ydk::is_set(lsa_type.yfilter)
	|| (route_backup_path !=  nullptr && route_backup_path->has_operation())
	|| (sr_microloop_avoidance_path !=  nullptr && sr_microloop_avoidance_path->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_interface_name.is_set || is_set(route_interface_name.yfilter)) leaf_name_data.push_back(route_interface_name.get_name_leafdata());
    if (route_next_hop_address.is_set || is_set(route_next_hop_address.yfilter)) leaf_name_data.push_back(route_next_hop_address.get_name_leafdata());
    if (route_source.is_set || is_set(route_source.yfilter)) leaf_name_data.push_back(route_source.get_name_leafdata());
    if (route_lsaid.is_set || is_set(route_lsaid.yfilter)) leaf_name_data.push_back(route_lsaid.get_name_leafdata());
    if (route_path_is_mcast_intact.is_set || is_set(route_path_is_mcast_intact.yfilter)) leaf_name_data.push_back(route_path_is_mcast_intact.get_name_leafdata());
    if (route_path_is_ucmp_path.is_set || is_set(route_path_is_ucmp_path.yfilter)) leaf_name_data.push_back(route_path_is_ucmp_path.get_name_leafdata());
    if (route_metric.is_set || is_set(route_metric.yfilter)) leaf_name_data.push_back(route_metric.get_name_leafdata());
    if (route_path_id.is_set || is_set(route_path_id.yfilter)) leaf_name_data.push_back(route_path_id.get_name_leafdata());
    if (lsa_type.is_set || is_set(lsa_type.yfilter)) leaf_name_data.push_back(lsa_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-backup-path")
    {
        if(route_backup_path == nullptr)
        {
            route_backup_path = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::RouteBackupPath>();
        }
        return route_backup_path;
    }

    if(child_yang_name == "sr-microloop-avoidance-path")
    {
        if(sr_microloop_avoidance_path == nullptr)
        {
            sr_microloop_avoidance_path = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::SrMicroloopAvoidancePath>();
        }
        return sr_microloop_avoidance_path;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
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

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-interface-name")
    {
        route_interface_name = value;
        route_interface_name.value_namespace = name_space;
        route_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-next-hop-address")
    {
        route_next_hop_address = value;
        route_next_hop_address.value_namespace = name_space;
        route_next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-source")
    {
        route_source = value;
        route_source.value_namespace = name_space;
        route_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-lsaid")
    {
        route_lsaid = value;
        route_lsaid.value_namespace = name_space;
        route_lsaid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-path-is-mcast-intact")
    {
        route_path_is_mcast_intact = value;
        route_path_is_mcast_intact.value_namespace = name_space;
        route_path_is_mcast_intact.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-path-is-ucmp-path")
    {
        route_path_is_ucmp_path = value;
        route_path_is_ucmp_path.value_namespace = name_space;
        route_path_is_ucmp_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-metric")
    {
        route_metric = value;
        route_metric.value_namespace = name_space;
        route_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-path-id")
    {
        route_path_id = value;
        route_path_id.value_namespace = name_space;
        route_path_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-type")
    {
        lsa_type = value;
        lsa_type.value_namespace = name_space;
        lsa_type.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-interface-name")
    {
        route_interface_name.yfilter = yfilter;
    }
    if(value_path == "route-next-hop-address")
    {
        route_next_hop_address.yfilter = yfilter;
    }
    if(value_path == "route-source")
    {
        route_source.yfilter = yfilter;
    }
    if(value_path == "route-lsaid")
    {
        route_lsaid.yfilter = yfilter;
    }
    if(value_path == "route-path-is-mcast-intact")
    {
        route_path_is_mcast_intact.yfilter = yfilter;
    }
    if(value_path == "route-path-is-ucmp-path")
    {
        route_path_is_ucmp_path.yfilter = yfilter;
    }
    if(value_path == "route-metric")
    {
        route_metric.yfilter = yfilter;
    }
    if(value_path == "route-path-id")
    {
        route_path_id.yfilter = yfilter;
    }
    if(value_path == "lsa-type")
    {
        lsa_type.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-backup-path" || name == "sr-microloop-avoidance-path" || name == "route-interface-name" || name == "route-next-hop-address" || name == "route-source" || name == "route-lsaid" || name == "route-path-is-mcast-intact" || name == "route-path-is-ucmp-path" || name == "route-metric" || name == "route-path-id" || name == "lsa-type")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::RouteBackupPath::RouteBackupPath()
    :
    backup_route_interface_name{YType::str, "backup-route-interface-name"},
    backup_route_next_hop_address{YType::str, "backup-route-next-hop-address"},
    backup_route_source{YType::str, "backup-route-source"},
    backup_metric{YType::uint32, "backup-metric"},
    primary_path{YType::boolean, "primary-path"},
    line_card_disjoint{YType::boolean, "line-card-disjoint"},
    downstream{YType::boolean, "downstream"},
    node_protect{YType::boolean, "node-protect"},
    srlg_disjoint{YType::boolean, "srlg-disjoint"},
    backup_remote_lfa{YType::str, "backup-remote-lfa"},
    backup_repair_list_size{YType::uint32, "backup-repair-list-size"},
    backup_tunnel_interface_name{YType::str, "backup-tunnel-interface-name"}
{

    yang_name = "route-backup-path"; yang_parent_name = "route-path"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::RouteBackupPath::~RouteBackupPath()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::RouteBackupPath::has_data() const
{
    for (std::size_t index=0; index<backup_repair.size(); index++)
    {
        if(backup_repair[index]->has_data())
            return true;
    }
    return backup_route_interface_name.is_set
	|| backup_route_next_hop_address.is_set
	|| backup_route_source.is_set
	|| backup_metric.is_set
	|| primary_path.is_set
	|| line_card_disjoint.is_set
	|| downstream.is_set
	|| node_protect.is_set
	|| srlg_disjoint.is_set
	|| backup_remote_lfa.is_set
	|| backup_repair_list_size.is_set
	|| backup_tunnel_interface_name.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::RouteBackupPath::has_operation() const
{
    for (std::size_t index=0; index<backup_repair.size(); index++)
    {
        if(backup_repair[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(backup_route_interface_name.yfilter)
	|| ydk::is_set(backup_route_next_hop_address.yfilter)
	|| ydk::is_set(backup_route_source.yfilter)
	|| ydk::is_set(backup_metric.yfilter)
	|| ydk::is_set(primary_path.yfilter)
	|| ydk::is_set(line_card_disjoint.yfilter)
	|| ydk::is_set(downstream.yfilter)
	|| ydk::is_set(node_protect.yfilter)
	|| ydk::is_set(srlg_disjoint.yfilter)
	|| ydk::is_set(backup_remote_lfa.yfilter)
	|| ydk::is_set(backup_repair_list_size.yfilter)
	|| ydk::is_set(backup_tunnel_interface_name.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::RouteBackupPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-backup-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::RouteBackupPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backup_route_interface_name.is_set || is_set(backup_route_interface_name.yfilter)) leaf_name_data.push_back(backup_route_interface_name.get_name_leafdata());
    if (backup_route_next_hop_address.is_set || is_set(backup_route_next_hop_address.yfilter)) leaf_name_data.push_back(backup_route_next_hop_address.get_name_leafdata());
    if (backup_route_source.is_set || is_set(backup_route_source.yfilter)) leaf_name_data.push_back(backup_route_source.get_name_leafdata());
    if (backup_metric.is_set || is_set(backup_metric.yfilter)) leaf_name_data.push_back(backup_metric.get_name_leafdata());
    if (primary_path.is_set || is_set(primary_path.yfilter)) leaf_name_data.push_back(primary_path.get_name_leafdata());
    if (line_card_disjoint.is_set || is_set(line_card_disjoint.yfilter)) leaf_name_data.push_back(line_card_disjoint.get_name_leafdata());
    if (downstream.is_set || is_set(downstream.yfilter)) leaf_name_data.push_back(downstream.get_name_leafdata());
    if (node_protect.is_set || is_set(node_protect.yfilter)) leaf_name_data.push_back(node_protect.get_name_leafdata());
    if (srlg_disjoint.is_set || is_set(srlg_disjoint.yfilter)) leaf_name_data.push_back(srlg_disjoint.get_name_leafdata());
    if (backup_remote_lfa.is_set || is_set(backup_remote_lfa.yfilter)) leaf_name_data.push_back(backup_remote_lfa.get_name_leafdata());
    if (backup_repair_list_size.is_set || is_set(backup_repair_list_size.yfilter)) leaf_name_data.push_back(backup_repair_list_size.get_name_leafdata());
    if (backup_tunnel_interface_name.is_set || is_set(backup_tunnel_interface_name.yfilter)) leaf_name_data.push_back(backup_tunnel_interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::RouteBackupPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup-repair")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::RouteBackupPath::BackupRepair>();
        c->parent = this;
        backup_repair.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::RouteBackupPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : backup_repair)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::RouteBackupPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "backup-route-interface-name")
    {
        backup_route_interface_name = value;
        backup_route_interface_name.value_namespace = name_space;
        backup_route_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-route-next-hop-address")
    {
        backup_route_next_hop_address = value;
        backup_route_next_hop_address.value_namespace = name_space;
        backup_route_next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-route-source")
    {
        backup_route_source = value;
        backup_route_source.value_namespace = name_space;
        backup_route_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-metric")
    {
        backup_metric = value;
        backup_metric.value_namespace = name_space;
        backup_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "primary-path")
    {
        primary_path = value;
        primary_path.value_namespace = name_space;
        primary_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "line-card-disjoint")
    {
        line_card_disjoint = value;
        line_card_disjoint.value_namespace = name_space;
        line_card_disjoint.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "downstream")
    {
        downstream = value;
        downstream.value_namespace = name_space;
        downstream.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-protect")
    {
        node_protect = value;
        node_protect.value_namespace = name_space;
        node_protect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlg-disjoint")
    {
        srlg_disjoint = value;
        srlg_disjoint.value_namespace = name_space;
        srlg_disjoint.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-remote-lfa")
    {
        backup_remote_lfa = value;
        backup_remote_lfa.value_namespace = name_space;
        backup_remote_lfa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-repair-list-size")
    {
        backup_repair_list_size = value;
        backup_repair_list_size.value_namespace = name_space;
        backup_repair_list_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-tunnel-interface-name")
    {
        backup_tunnel_interface_name = value;
        backup_tunnel_interface_name.value_namespace = name_space;
        backup_tunnel_interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::RouteBackupPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "backup-route-interface-name")
    {
        backup_route_interface_name.yfilter = yfilter;
    }
    if(value_path == "backup-route-next-hop-address")
    {
        backup_route_next_hop_address.yfilter = yfilter;
    }
    if(value_path == "backup-route-source")
    {
        backup_route_source.yfilter = yfilter;
    }
    if(value_path == "backup-metric")
    {
        backup_metric.yfilter = yfilter;
    }
    if(value_path == "primary-path")
    {
        primary_path.yfilter = yfilter;
    }
    if(value_path == "line-card-disjoint")
    {
        line_card_disjoint.yfilter = yfilter;
    }
    if(value_path == "downstream")
    {
        downstream.yfilter = yfilter;
    }
    if(value_path == "node-protect")
    {
        node_protect.yfilter = yfilter;
    }
    if(value_path == "srlg-disjoint")
    {
        srlg_disjoint.yfilter = yfilter;
    }
    if(value_path == "backup-remote-lfa")
    {
        backup_remote_lfa.yfilter = yfilter;
    }
    if(value_path == "backup-repair-list-size")
    {
        backup_repair_list_size.yfilter = yfilter;
    }
    if(value_path == "backup-tunnel-interface-name")
    {
        backup_tunnel_interface_name.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::RouteBackupPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backup-repair" || name == "backup-route-interface-name" || name == "backup-route-next-hop-address" || name == "backup-route-source" || name == "backup-metric" || name == "primary-path" || name == "line-card-disjoint" || name == "downstream" || name == "node-protect" || name == "srlg-disjoint" || name == "backup-remote-lfa" || name == "backup-repair-list-size" || name == "backup-tunnel-interface-name")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::RouteBackupPath::BackupRepair::BackupRepair()
    :
    repair_element_id{YType::str, "repair-element-id"},
    repair_label{YType::uint32, "repair-label"},
    repair_element_type{YType::uint32, "repair-element-type"}
{

    yang_name = "backup-repair"; yang_parent_name = "route-backup-path"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::RouteBackupPath::BackupRepair::~BackupRepair()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::RouteBackupPath::BackupRepair::has_data() const
{
    return repair_element_id.is_set
	|| repair_label.is_set
	|| repair_element_type.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::RouteBackupPath::BackupRepair::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(repair_element_id.yfilter)
	|| ydk::is_set(repair_label.yfilter)
	|| ydk::is_set(repair_element_type.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::RouteBackupPath::BackupRepair::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-repair";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::RouteBackupPath::BackupRepair::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (repair_element_id.is_set || is_set(repair_element_id.yfilter)) leaf_name_data.push_back(repair_element_id.get_name_leafdata());
    if (repair_label.is_set || is_set(repair_label.yfilter)) leaf_name_data.push_back(repair_label.get_name_leafdata());
    if (repair_element_type.is_set || is_set(repair_element_type.yfilter)) leaf_name_data.push_back(repair_element_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::RouteBackupPath::BackupRepair::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::RouteBackupPath::BackupRepair::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::RouteBackupPath::BackupRepair::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "repair-element-id")
    {
        repair_element_id = value;
        repair_element_id.value_namespace = name_space;
        repair_element_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-label")
    {
        repair_label = value;
        repair_label.value_namespace = name_space;
        repair_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type = value;
        repair_element_type.value_namespace = name_space;
        repair_element_type.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::RouteBackupPath::BackupRepair::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "repair-element-id")
    {
        repair_element_id.yfilter = yfilter;
    }
    if(value_path == "repair-label")
    {
        repair_label.yfilter = yfilter;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::RouteBackupPath::BackupRepair::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "repair-element-id" || name == "repair-label" || name == "repair-element-type")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::SrMicroloopAvoidancePath::SrMicroloopAvoidancePath()
    :
    microloop_repair_list_size{YType::uint32, "microloop-repair-list-size"},
    microloop_tunnel_interface_name{YType::str, "microloop-tunnel-interface-name"},
    microloop_strict_spf{YType::boolean, "microloop-strict-spf"}
{

    yang_name = "sr-microloop-avoidance-path"; yang_parent_name = "route-path"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::SrMicroloopAvoidancePath::~SrMicroloopAvoidancePath()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::SrMicroloopAvoidancePath::has_data() const
{
    for (std::size_t index=0; index<microloop_repair.size(); index++)
    {
        if(microloop_repair[index]->has_data())
            return true;
    }
    return microloop_repair_list_size.is_set
	|| microloop_tunnel_interface_name.is_set
	|| microloop_strict_spf.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::SrMicroloopAvoidancePath::has_operation() const
{
    for (std::size_t index=0; index<microloop_repair.size(); index++)
    {
        if(microloop_repair[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(microloop_repair_list_size.yfilter)
	|| ydk::is_set(microloop_tunnel_interface_name.yfilter)
	|| ydk::is_set(microloop_strict_spf.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::SrMicroloopAvoidancePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-microloop-avoidance-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::SrMicroloopAvoidancePath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (microloop_repair_list_size.is_set || is_set(microloop_repair_list_size.yfilter)) leaf_name_data.push_back(microloop_repair_list_size.get_name_leafdata());
    if (microloop_tunnel_interface_name.is_set || is_set(microloop_tunnel_interface_name.yfilter)) leaf_name_data.push_back(microloop_tunnel_interface_name.get_name_leafdata());
    if (microloop_strict_spf.is_set || is_set(microloop_strict_spf.yfilter)) leaf_name_data.push_back(microloop_strict_spf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::SrMicroloopAvoidancePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "microloop-repair")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair>();
        c->parent = this;
        microloop_repair.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::SrMicroloopAvoidancePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : microloop_repair)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::SrMicroloopAvoidancePath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "microloop-repair-list-size")
    {
        microloop_repair_list_size = value;
        microloop_repair_list_size.value_namespace = name_space;
        microloop_repair_list_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "microloop-tunnel-interface-name")
    {
        microloop_tunnel_interface_name = value;
        microloop_tunnel_interface_name.value_namespace = name_space;
        microloop_tunnel_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "microloop-strict-spf")
    {
        microloop_strict_spf = value;
        microloop_strict_spf.value_namespace = name_space;
        microloop_strict_spf.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::SrMicroloopAvoidancePath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "microloop-repair-list-size")
    {
        microloop_repair_list_size.yfilter = yfilter;
    }
    if(value_path == "microloop-tunnel-interface-name")
    {
        microloop_tunnel_interface_name.yfilter = yfilter;
    }
    if(value_path == "microloop-strict-spf")
    {
        microloop_strict_spf.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::SrMicroloopAvoidancePath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "microloop-repair" || name == "microloop-repair-list-size" || name == "microloop-tunnel-interface-name" || name == "microloop-strict-spf")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::MicroloopRepair()
    :
    repair_element_id{YType::str, "repair-element-id"},
    repair_label{YType::uint32, "repair-label"},
    repair_element_type{YType::uint32, "repair-element-type"}
{

    yang_name = "microloop-repair"; yang_parent_name = "sr-microloop-avoidance-path"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::~MicroloopRepair()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::has_data() const
{
    return repair_element_id.is_set
	|| repair_label.is_set
	|| repair_element_type.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(repair_element_id.yfilter)
	|| ydk::is_set(repair_label.yfilter)
	|| ydk::is_set(repair_element_type.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "microloop-repair";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (repair_element_id.is_set || is_set(repair_element_id.yfilter)) leaf_name_data.push_back(repair_element_id.get_name_leafdata());
    if (repair_label.is_set || is_set(repair_label.yfilter)) leaf_name_data.push_back(repair_label.get_name_leafdata());
    if (repair_element_type.is_set || is_set(repair_element_type.yfilter)) leaf_name_data.push_back(repair_element_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "repair-element-id")
    {
        repair_element_id = value;
        repair_element_id.value_namespace = name_space;
        repair_element_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-label")
    {
        repair_label = value;
        repair_label.value_namespace = name_space;
        repair_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type = value;
        repair_element_type.value_namespace = name_space;
        repair_element_type.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "repair-element-id")
    {
        repair_element_id.yfilter = yfilter;
    }
    if(value_path == "repair-label")
    {
        repair_label.yfilter = yfilter;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "repair-element-id" || name == "repair-label" || name == "repair-element-type")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformations()
{

    yang_name = "route-area-informations"; yang_parent_name = "route-area"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::~RouteAreaInformations()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::has_data() const
{
    for (std::size_t index=0; index<route_area_information.size(); index++)
    {
        if(route_area_information[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::has_operation() const
{
    for (std::size_t index=0; index<route_area_information.size(); index++)
    {
        if(route_area_information[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-area-informations";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-area-information")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation>();
        c->parent = this;
        route_area_information.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : route_area_information)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-area-information")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteAreaInformation()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint32, "prefix-length"},
    route_prefix{YType::str, "route-prefix"},
    route_prefix_length{YType::uint32, "route-prefix-length"},
    route_metric{YType::uint32, "route-metric"},
    route_type{YType::enumeration, "route-type"},
    route_connected{YType::boolean, "route-connected"}
    	,
    route_info(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo>())
{
    route_info->parent = this;

    yang_name = "route-area-information"; yang_parent_name = "route-area-informations"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::~RouteAreaInformation()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::has_data() const
{
    for (std::size_t index=0; index<route_path.size(); index++)
    {
        if(route_path[index]->has_data())
            return true;
    }
    return prefix.is_set
	|| prefix_length.is_set
	|| route_prefix.is_set
	|| route_prefix_length.is_set
	|| route_metric.is_set
	|| route_type.is_set
	|| route_connected.is_set
	|| (route_info !=  nullptr && route_info->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::has_operation() const
{
    for (std::size_t index=0; index<route_path.size(); index++)
    {
        if(route_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(route_prefix.yfilter)
	|| ydk::is_set(route_prefix_length.yfilter)
	|| ydk::is_set(route_metric.yfilter)
	|| ydk::is_set(route_type.yfilter)
	|| ydk::is_set(route_connected.yfilter)
	|| (route_info !=  nullptr && route_info->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-area-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (route_prefix.is_set || is_set(route_prefix.yfilter)) leaf_name_data.push_back(route_prefix.get_name_leafdata());
    if (route_prefix_length.is_set || is_set(route_prefix_length.yfilter)) leaf_name_data.push_back(route_prefix_length.get_name_leafdata());
    if (route_metric.is_set || is_set(route_metric.yfilter)) leaf_name_data.push_back(route_metric.get_name_leafdata());
    if (route_type.is_set || is_set(route_type.yfilter)) leaf_name_data.push_back(route_type.get_name_leafdata());
    if (route_connected.is_set || is_set(route_connected.yfilter)) leaf_name_data.push_back(route_connected.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-info")
    {
        if(route_info == nullptr)
        {
            route_info = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo>();
        }
        return route_info;
    }

    if(child_yang_name == "route-path")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath>();
        c->parent = this;
        route_path.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(route_info != nullptr)
    {
        children["route-info"] = route_info;
    }

    count = 0;
    for (auto const & c : route_path)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-prefix")
    {
        route_prefix = value;
        route_prefix.value_namespace = name_space;
        route_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-prefix-length")
    {
        route_prefix_length = value;
        route_prefix_length.value_namespace = name_space;
        route_prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-metric")
    {
        route_metric = value;
        route_metric.value_namespace = name_space;
        route_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-type")
    {
        route_type = value;
        route_type.value_namespace = name_space;
        route_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-connected")
    {
        route_connected = value;
        route_connected.value_namespace = name_space;
        route_connected.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "route-prefix")
    {
        route_prefix.yfilter = yfilter;
    }
    if(value_path == "route-prefix-length")
    {
        route_prefix_length.yfilter = yfilter;
    }
    if(value_path == "route-metric")
    {
        route_metric.yfilter = yfilter;
    }
    if(value_path == "route-type")
    {
        route_type.yfilter = yfilter;
    }
    if(value_path == "route-connected")
    {
        route_connected.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-info" || name == "route-path" || name == "prefix" || name == "prefix-length" || name == "route-prefix" || name == "route-prefix-length" || name == "route-metric" || name == "route-type" || name == "route-connected")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::RouteInfo()
    :
    route_area_id{YType::uint32, "route-area-id"},
    route_te_metric{YType::uint32, "route-te-metric"},
    route_rib_version{YType::uint32, "route-rib-version"},
    route_spf_version{YType::uint64, "route-spf-version"},
    route_forward_distance{YType::uint32, "route-forward-distance"},
    route_source{YType::uint16, "route-source"},
    route_spf_priority{YType::uint8, "route-spf-priority"},
    route_auto_excluded{YType::boolean, "route-auto-excluded"},
    route_srte_prefix_registered{YType::boolean, "route-srte-prefix-registered"},
    route_srte_nbr_registered{YType::uint16, "route-srte-nbr-registered"}
    	,
    route_update_time(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::RouteUpdateTime>())
	,route_fail_time(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::RouteFailTime>())
{
    route_update_time->parent = this;
    route_fail_time->parent = this;

    yang_name = "route-info"; yang_parent_name = "route-area-information"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::~RouteInfo()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::has_data() const
{
    return route_area_id.is_set
	|| route_te_metric.is_set
	|| route_rib_version.is_set
	|| route_spf_version.is_set
	|| route_forward_distance.is_set
	|| route_source.is_set
	|| route_spf_priority.is_set
	|| route_auto_excluded.is_set
	|| route_srte_prefix_registered.is_set
	|| route_srte_nbr_registered.is_set
	|| (route_update_time !=  nullptr && route_update_time->has_data())
	|| (route_fail_time !=  nullptr && route_fail_time->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_area_id.yfilter)
	|| ydk::is_set(route_te_metric.yfilter)
	|| ydk::is_set(route_rib_version.yfilter)
	|| ydk::is_set(route_spf_version.yfilter)
	|| ydk::is_set(route_forward_distance.yfilter)
	|| ydk::is_set(route_source.yfilter)
	|| ydk::is_set(route_spf_priority.yfilter)
	|| ydk::is_set(route_auto_excluded.yfilter)
	|| ydk::is_set(route_srte_prefix_registered.yfilter)
	|| ydk::is_set(route_srte_nbr_registered.yfilter)
	|| (route_update_time !=  nullptr && route_update_time->has_operation())
	|| (route_fail_time !=  nullptr && route_fail_time->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_area_id.is_set || is_set(route_area_id.yfilter)) leaf_name_data.push_back(route_area_id.get_name_leafdata());
    if (route_te_metric.is_set || is_set(route_te_metric.yfilter)) leaf_name_data.push_back(route_te_metric.get_name_leafdata());
    if (route_rib_version.is_set || is_set(route_rib_version.yfilter)) leaf_name_data.push_back(route_rib_version.get_name_leafdata());
    if (route_spf_version.is_set || is_set(route_spf_version.yfilter)) leaf_name_data.push_back(route_spf_version.get_name_leafdata());
    if (route_forward_distance.is_set || is_set(route_forward_distance.yfilter)) leaf_name_data.push_back(route_forward_distance.get_name_leafdata());
    if (route_source.is_set || is_set(route_source.yfilter)) leaf_name_data.push_back(route_source.get_name_leafdata());
    if (route_spf_priority.is_set || is_set(route_spf_priority.yfilter)) leaf_name_data.push_back(route_spf_priority.get_name_leafdata());
    if (route_auto_excluded.is_set || is_set(route_auto_excluded.yfilter)) leaf_name_data.push_back(route_auto_excluded.get_name_leafdata());
    if (route_srte_prefix_registered.is_set || is_set(route_srte_prefix_registered.yfilter)) leaf_name_data.push_back(route_srte_prefix_registered.get_name_leafdata());
    if (route_srte_nbr_registered.is_set || is_set(route_srte_nbr_registered.yfilter)) leaf_name_data.push_back(route_srte_nbr_registered.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-update-time")
    {
        if(route_update_time == nullptr)
        {
            route_update_time = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::RouteUpdateTime>();
        }
        return route_update_time;
    }

    if(child_yang_name == "route-fail-time")
    {
        if(route_fail_time == nullptr)
        {
            route_fail_time = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::RouteFailTime>();
        }
        return route_fail_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(route_update_time != nullptr)
    {
        children["route-update-time"] = route_update_time;
    }

    if(route_fail_time != nullptr)
    {
        children["route-fail-time"] = route_fail_time;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-area-id")
    {
        route_area_id = value;
        route_area_id.value_namespace = name_space;
        route_area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-te-metric")
    {
        route_te_metric = value;
        route_te_metric.value_namespace = name_space;
        route_te_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-rib-version")
    {
        route_rib_version = value;
        route_rib_version.value_namespace = name_space;
        route_rib_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-spf-version")
    {
        route_spf_version = value;
        route_spf_version.value_namespace = name_space;
        route_spf_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-forward-distance")
    {
        route_forward_distance = value;
        route_forward_distance.value_namespace = name_space;
        route_forward_distance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-source")
    {
        route_source = value;
        route_source.value_namespace = name_space;
        route_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-spf-priority")
    {
        route_spf_priority = value;
        route_spf_priority.value_namespace = name_space;
        route_spf_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-auto-excluded")
    {
        route_auto_excluded = value;
        route_auto_excluded.value_namespace = name_space;
        route_auto_excluded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-srte-prefix-registered")
    {
        route_srte_prefix_registered = value;
        route_srte_prefix_registered.value_namespace = name_space;
        route_srte_prefix_registered.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-srte-nbr-registered")
    {
        route_srte_nbr_registered = value;
        route_srte_nbr_registered.value_namespace = name_space;
        route_srte_nbr_registered.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-area-id")
    {
        route_area_id.yfilter = yfilter;
    }
    if(value_path == "route-te-metric")
    {
        route_te_metric.yfilter = yfilter;
    }
    if(value_path == "route-rib-version")
    {
        route_rib_version.yfilter = yfilter;
    }
    if(value_path == "route-spf-version")
    {
        route_spf_version.yfilter = yfilter;
    }
    if(value_path == "route-forward-distance")
    {
        route_forward_distance.yfilter = yfilter;
    }
    if(value_path == "route-source")
    {
        route_source.yfilter = yfilter;
    }
    if(value_path == "route-spf-priority")
    {
        route_spf_priority.yfilter = yfilter;
    }
    if(value_path == "route-auto-excluded")
    {
        route_auto_excluded.yfilter = yfilter;
    }
    if(value_path == "route-srte-prefix-registered")
    {
        route_srte_prefix_registered.yfilter = yfilter;
    }
    if(value_path == "route-srte-nbr-registered")
    {
        route_srte_nbr_registered.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-update-time" || name == "route-fail-time" || name == "route-area-id" || name == "route-te-metric" || name == "route-rib-version" || name == "route-spf-version" || name == "route-forward-distance" || name == "route-source" || name == "route-spf-priority" || name == "route-auto-excluded" || name == "route-srte-prefix-registered" || name == "route-srte-nbr-registered")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::RouteUpdateTime::RouteUpdateTime()
    :
    second{YType::uint32, "second"},
    nanosecond{YType::uint32, "nanosecond"}
{

    yang_name = "route-update-time"; yang_parent_name = "route-info"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::RouteUpdateTime::~RouteUpdateTime()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::RouteUpdateTime::has_data() const
{
    return second.is_set
	|| nanosecond.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::RouteUpdateTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(second.yfilter)
	|| ydk::is_set(nanosecond.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::RouteUpdateTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-update-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::RouteUpdateTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());
    if (nanosecond.is_set || is_set(nanosecond.yfilter)) leaf_name_data.push_back(nanosecond.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::RouteUpdateTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::RouteUpdateTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::RouteUpdateTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "second")
    {
        second = value;
        second.value_namespace = name_space;
        second.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanosecond")
    {
        nanosecond = value;
        nanosecond.value_namespace = name_space;
        nanosecond.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::RouteUpdateTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "second")
    {
        second.yfilter = yfilter;
    }
    if(value_path == "nanosecond")
    {
        nanosecond.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::RouteUpdateTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second" || name == "nanosecond")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::RouteFailTime::RouteFailTime()
    :
    second{YType::uint32, "second"},
    nanosecond{YType::uint32, "nanosecond"}
{

    yang_name = "route-fail-time"; yang_parent_name = "route-info"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::RouteFailTime::~RouteFailTime()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::RouteFailTime::has_data() const
{
    return second.is_set
	|| nanosecond.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::RouteFailTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(second.yfilter)
	|| ydk::is_set(nanosecond.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::RouteFailTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-fail-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::RouteFailTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());
    if (nanosecond.is_set || is_set(nanosecond.yfilter)) leaf_name_data.push_back(nanosecond.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::RouteFailTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::RouteFailTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::RouteFailTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "second")
    {
        second = value;
        second.value_namespace = name_space;
        second.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanosecond")
    {
        nanosecond = value;
        nanosecond.value_namespace = name_space;
        nanosecond.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::RouteFailTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "second")
    {
        second.yfilter = yfilter;
    }
    if(value_path == "nanosecond")
    {
        nanosecond.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::RouteFailTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second" || name == "nanosecond")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::RoutePath()
    :
    route_interface_name{YType::str, "route-interface-name"},
    route_next_hop_address{YType::str, "route-next-hop-address"},
    route_source{YType::str, "route-source"},
    route_lsaid{YType::str, "route-lsaid"},
    route_path_is_mcast_intact{YType::boolean, "route-path-is-mcast-intact"},
    route_path_is_ucmp_path{YType::boolean, "route-path-is-ucmp-path"},
    route_metric{YType::uint32, "route-metric"},
    lsa_type{YType::uint8, "lsa-type"},
    area_id{YType::uint32, "area-id"},
    area_format{YType::boolean, "area-format"}
    	,
    sr_microloop_avoidance_path(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::SrMicroloopAvoidancePath>())
{
    sr_microloop_avoidance_path->parent = this;

    yang_name = "route-path"; yang_parent_name = "route-area-information"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::~RoutePath()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::has_data() const
{
    return route_interface_name.is_set
	|| route_next_hop_address.is_set
	|| route_source.is_set
	|| route_lsaid.is_set
	|| route_path_is_mcast_intact.is_set
	|| route_path_is_ucmp_path.is_set
	|| route_metric.is_set
	|| lsa_type.is_set
	|| area_id.is_set
	|| area_format.is_set
	|| (sr_microloop_avoidance_path !=  nullptr && sr_microloop_avoidance_path->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_interface_name.yfilter)
	|| ydk::is_set(route_next_hop_address.yfilter)
	|| ydk::is_set(route_source.yfilter)
	|| ydk::is_set(route_lsaid.yfilter)
	|| ydk::is_set(route_path_is_mcast_intact.yfilter)
	|| ydk::is_set(route_path_is_ucmp_path.yfilter)
	|| ydk::is_set(route_metric.yfilter)
	|| ydk::is_set(lsa_type.yfilter)
	|| ydk::is_set(area_id.yfilter)
	|| ydk::is_set(area_format.yfilter)
	|| (sr_microloop_avoidance_path !=  nullptr && sr_microloop_avoidance_path->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_interface_name.is_set || is_set(route_interface_name.yfilter)) leaf_name_data.push_back(route_interface_name.get_name_leafdata());
    if (route_next_hop_address.is_set || is_set(route_next_hop_address.yfilter)) leaf_name_data.push_back(route_next_hop_address.get_name_leafdata());
    if (route_source.is_set || is_set(route_source.yfilter)) leaf_name_data.push_back(route_source.get_name_leafdata());
    if (route_lsaid.is_set || is_set(route_lsaid.yfilter)) leaf_name_data.push_back(route_lsaid.get_name_leafdata());
    if (route_path_is_mcast_intact.is_set || is_set(route_path_is_mcast_intact.yfilter)) leaf_name_data.push_back(route_path_is_mcast_intact.get_name_leafdata());
    if (route_path_is_ucmp_path.is_set || is_set(route_path_is_ucmp_path.yfilter)) leaf_name_data.push_back(route_path_is_ucmp_path.get_name_leafdata());
    if (route_metric.is_set || is_set(route_metric.yfilter)) leaf_name_data.push_back(route_metric.get_name_leafdata());
    if (lsa_type.is_set || is_set(lsa_type.yfilter)) leaf_name_data.push_back(lsa_type.get_name_leafdata());
    if (area_id.is_set || is_set(area_id.yfilter)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (area_format.is_set || is_set(area_format.yfilter)) leaf_name_data.push_back(area_format.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sr-microloop-avoidance-path")
    {
        if(sr_microloop_avoidance_path == nullptr)
        {
            sr_microloop_avoidance_path = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::SrMicroloopAvoidancePath>();
        }
        return sr_microloop_avoidance_path;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(sr_microloop_avoidance_path != nullptr)
    {
        children["sr-microloop-avoidance-path"] = sr_microloop_avoidance_path;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-interface-name")
    {
        route_interface_name = value;
        route_interface_name.value_namespace = name_space;
        route_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-next-hop-address")
    {
        route_next_hop_address = value;
        route_next_hop_address.value_namespace = name_space;
        route_next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-source")
    {
        route_source = value;
        route_source.value_namespace = name_space;
        route_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-lsaid")
    {
        route_lsaid = value;
        route_lsaid.value_namespace = name_space;
        route_lsaid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-path-is-mcast-intact")
    {
        route_path_is_mcast_intact = value;
        route_path_is_mcast_intact.value_namespace = name_space;
        route_path_is_mcast_intact.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-path-is-ucmp-path")
    {
        route_path_is_ucmp_path = value;
        route_path_is_ucmp_path.value_namespace = name_space;
        route_path_is_ucmp_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-metric")
    {
        route_metric = value;
        route_metric.value_namespace = name_space;
        route_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-type")
    {
        lsa_type = value;
        lsa_type.value_namespace = name_space;
        lsa_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-id")
    {
        area_id = value;
        area_id.value_namespace = name_space;
        area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-format")
    {
        area_format = value;
        area_format.value_namespace = name_space;
        area_format.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-interface-name")
    {
        route_interface_name.yfilter = yfilter;
    }
    if(value_path == "route-next-hop-address")
    {
        route_next_hop_address.yfilter = yfilter;
    }
    if(value_path == "route-source")
    {
        route_source.yfilter = yfilter;
    }
    if(value_path == "route-lsaid")
    {
        route_lsaid.yfilter = yfilter;
    }
    if(value_path == "route-path-is-mcast-intact")
    {
        route_path_is_mcast_intact.yfilter = yfilter;
    }
    if(value_path == "route-path-is-ucmp-path")
    {
        route_path_is_ucmp_path.yfilter = yfilter;
    }
    if(value_path == "route-metric")
    {
        route_metric.yfilter = yfilter;
    }
    if(value_path == "lsa-type")
    {
        lsa_type.yfilter = yfilter;
    }
    if(value_path == "area-id")
    {
        area_id.yfilter = yfilter;
    }
    if(value_path == "area-format")
    {
        area_format.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sr-microloop-avoidance-path" || name == "route-interface-name" || name == "route-next-hop-address" || name == "route-source" || name == "route-lsaid" || name == "route-path-is-mcast-intact" || name == "route-path-is-ucmp-path" || name == "route-metric" || name == "lsa-type" || name == "area-id" || name == "area-format")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::SrMicroloopAvoidancePath::SrMicroloopAvoidancePath()
    :
    microloop_repair_list_size{YType::uint32, "microloop-repair-list-size"},
    microloop_tunnel_interface_name{YType::str, "microloop-tunnel-interface-name"},
    microloop_strict_spf{YType::boolean, "microloop-strict-spf"}
{

    yang_name = "sr-microloop-avoidance-path"; yang_parent_name = "route-path"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::SrMicroloopAvoidancePath::~SrMicroloopAvoidancePath()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::SrMicroloopAvoidancePath::has_data() const
{
    for (std::size_t index=0; index<microloop_repair.size(); index++)
    {
        if(microloop_repair[index]->has_data())
            return true;
    }
    return microloop_repair_list_size.is_set
	|| microloop_tunnel_interface_name.is_set
	|| microloop_strict_spf.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::SrMicroloopAvoidancePath::has_operation() const
{
    for (std::size_t index=0; index<microloop_repair.size(); index++)
    {
        if(microloop_repair[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(microloop_repair_list_size.yfilter)
	|| ydk::is_set(microloop_tunnel_interface_name.yfilter)
	|| ydk::is_set(microloop_strict_spf.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::SrMicroloopAvoidancePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-microloop-avoidance-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::SrMicroloopAvoidancePath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (microloop_repair_list_size.is_set || is_set(microloop_repair_list_size.yfilter)) leaf_name_data.push_back(microloop_repair_list_size.get_name_leafdata());
    if (microloop_tunnel_interface_name.is_set || is_set(microloop_tunnel_interface_name.yfilter)) leaf_name_data.push_back(microloop_tunnel_interface_name.get_name_leafdata());
    if (microloop_strict_spf.is_set || is_set(microloop_strict_spf.yfilter)) leaf_name_data.push_back(microloop_strict_spf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::SrMicroloopAvoidancePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "microloop-repair")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair>();
        c->parent = this;
        microloop_repair.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::SrMicroloopAvoidancePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : microloop_repair)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::SrMicroloopAvoidancePath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "microloop-repair-list-size")
    {
        microloop_repair_list_size = value;
        microloop_repair_list_size.value_namespace = name_space;
        microloop_repair_list_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "microloop-tunnel-interface-name")
    {
        microloop_tunnel_interface_name = value;
        microloop_tunnel_interface_name.value_namespace = name_space;
        microloop_tunnel_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "microloop-strict-spf")
    {
        microloop_strict_spf = value;
        microloop_strict_spf.value_namespace = name_space;
        microloop_strict_spf.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::SrMicroloopAvoidancePath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "microloop-repair-list-size")
    {
        microloop_repair_list_size.yfilter = yfilter;
    }
    if(value_path == "microloop-tunnel-interface-name")
    {
        microloop_tunnel_interface_name.yfilter = yfilter;
    }
    if(value_path == "microloop-strict-spf")
    {
        microloop_strict_spf.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::SrMicroloopAvoidancePath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "microloop-repair" || name == "microloop-repair-list-size" || name == "microloop-tunnel-interface-name" || name == "microloop-strict-spf")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::MicroloopRepair()
    :
    repair_element_id{YType::str, "repair-element-id"},
    repair_label{YType::uint32, "repair-label"},
    repair_element_type{YType::uint32, "repair-element-type"}
{

    yang_name = "microloop-repair"; yang_parent_name = "sr-microloop-avoidance-path"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::~MicroloopRepair()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::has_data() const
{
    return repair_element_id.is_set
	|| repair_label.is_set
	|| repair_element_type.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(repair_element_id.yfilter)
	|| ydk::is_set(repair_label.yfilter)
	|| ydk::is_set(repair_element_type.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "microloop-repair";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (repair_element_id.is_set || is_set(repair_element_id.yfilter)) leaf_name_data.push_back(repair_element_id.get_name_leafdata());
    if (repair_label.is_set || is_set(repair_label.yfilter)) leaf_name_data.push_back(repair_label.get_name_leafdata());
    if (repair_element_type.is_set || is_set(repair_element_type.yfilter)) leaf_name_data.push_back(repair_element_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "repair-element-id")
    {
        repair_element_id = value;
        repair_element_id.value_namespace = name_space;
        repair_element_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-label")
    {
        repair_label = value;
        repair_label.value_namespace = name_space;
        repair_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type = value;
        repair_element_type.value_namespace = name_space;
        repair_element_type.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "repair-element-id")
    {
        repair_element_id.yfilter = yfilter;
    }
    if(value_path == "repair-label")
    {
        repair_label.yfilter = yfilter;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "repair-element-id" || name == "repair-label" || name == "repair-element-type")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteAreas()
{

    yang_name = "multicast-intact-route-areas"; yang_parent_name = "route-area"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::~MulticastIntactRouteAreas()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::has_data() const
{
    for (std::size_t index=0; index<multicast_intact_route_area.size(); index++)
    {
        if(multicast_intact_route_area[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::has_operation() const
{
    for (std::size_t index=0; index<multicast_intact_route_area.size(); index++)
    {
        if(multicast_intact_route_area[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast-intact-route-areas";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "multicast-intact-route-area")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea>();
        c->parent = this;
        multicast_intact_route_area.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : multicast_intact_route_area)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "multicast-intact-route-area")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::MulticastIntactRouteArea()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint32, "prefix-length"},
    route_prefix{YType::str, "route-prefix"},
    route_prefix_length{YType::uint32, "route-prefix-length"},
    route_metric{YType::uint32, "route-metric"},
    route_type{YType::enumeration, "route-type"},
    route_connected{YType::boolean, "route-connected"}
    	,
    route_info(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo>())
{
    route_info->parent = this;

    yang_name = "multicast-intact-route-area"; yang_parent_name = "multicast-intact-route-areas"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::~MulticastIntactRouteArea()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::has_data() const
{
    for (std::size_t index=0; index<route_path.size(); index++)
    {
        if(route_path[index]->has_data())
            return true;
    }
    return prefix.is_set
	|| prefix_length.is_set
	|| route_prefix.is_set
	|| route_prefix_length.is_set
	|| route_metric.is_set
	|| route_type.is_set
	|| route_connected.is_set
	|| (route_info !=  nullptr && route_info->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::has_operation() const
{
    for (std::size_t index=0; index<route_path.size(); index++)
    {
        if(route_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(route_prefix.yfilter)
	|| ydk::is_set(route_prefix_length.yfilter)
	|| ydk::is_set(route_metric.yfilter)
	|| ydk::is_set(route_type.yfilter)
	|| ydk::is_set(route_connected.yfilter)
	|| (route_info !=  nullptr && route_info->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast-intact-route-area";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (route_prefix.is_set || is_set(route_prefix.yfilter)) leaf_name_data.push_back(route_prefix.get_name_leafdata());
    if (route_prefix_length.is_set || is_set(route_prefix_length.yfilter)) leaf_name_data.push_back(route_prefix_length.get_name_leafdata());
    if (route_metric.is_set || is_set(route_metric.yfilter)) leaf_name_data.push_back(route_metric.get_name_leafdata());
    if (route_type.is_set || is_set(route_type.yfilter)) leaf_name_data.push_back(route_type.get_name_leafdata());
    if (route_connected.is_set || is_set(route_connected.yfilter)) leaf_name_data.push_back(route_connected.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-info")
    {
        if(route_info == nullptr)
        {
            route_info = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo>();
        }
        return route_info;
    }

    if(child_yang_name == "route-path")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath>();
        c->parent = this;
        route_path.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(route_info != nullptr)
    {
        children["route-info"] = route_info;
    }

    count = 0;
    for (auto const & c : route_path)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-prefix")
    {
        route_prefix = value;
        route_prefix.value_namespace = name_space;
        route_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-prefix-length")
    {
        route_prefix_length = value;
        route_prefix_length.value_namespace = name_space;
        route_prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-metric")
    {
        route_metric = value;
        route_metric.value_namespace = name_space;
        route_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-type")
    {
        route_type = value;
        route_type.value_namespace = name_space;
        route_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-connected")
    {
        route_connected = value;
        route_connected.value_namespace = name_space;
        route_connected.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "route-prefix")
    {
        route_prefix.yfilter = yfilter;
    }
    if(value_path == "route-prefix-length")
    {
        route_prefix_length.yfilter = yfilter;
    }
    if(value_path == "route-metric")
    {
        route_metric.yfilter = yfilter;
    }
    if(value_path == "route-type")
    {
        route_type.yfilter = yfilter;
    }
    if(value_path == "route-connected")
    {
        route_connected.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-info" || name == "route-path" || name == "prefix" || name == "prefix-length" || name == "route-prefix" || name == "route-prefix-length" || name == "route-metric" || name == "route-type" || name == "route-connected")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::RouteInfo()
    :
    route_area_id{YType::uint32, "route-area-id"},
    route_te_metric{YType::uint32, "route-te-metric"},
    route_rib_version{YType::uint32, "route-rib-version"},
    route_spf_version{YType::uint64, "route-spf-version"},
    route_forward_distance{YType::uint32, "route-forward-distance"},
    route_source{YType::uint16, "route-source"},
    route_spf_priority{YType::uint8, "route-spf-priority"},
    route_auto_excluded{YType::boolean, "route-auto-excluded"},
    route_srte_prefix_registered{YType::boolean, "route-srte-prefix-registered"},
    route_srte_nbr_registered{YType::uint16, "route-srte-nbr-registered"}
    	,
    route_update_time(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::RouteUpdateTime>())
	,route_fail_time(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::RouteFailTime>())
{
    route_update_time->parent = this;
    route_fail_time->parent = this;

    yang_name = "route-info"; yang_parent_name = "multicast-intact-route-area"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::~RouteInfo()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::has_data() const
{
    return route_area_id.is_set
	|| route_te_metric.is_set
	|| route_rib_version.is_set
	|| route_spf_version.is_set
	|| route_forward_distance.is_set
	|| route_source.is_set
	|| route_spf_priority.is_set
	|| route_auto_excluded.is_set
	|| route_srte_prefix_registered.is_set
	|| route_srte_nbr_registered.is_set
	|| (route_update_time !=  nullptr && route_update_time->has_data())
	|| (route_fail_time !=  nullptr && route_fail_time->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_area_id.yfilter)
	|| ydk::is_set(route_te_metric.yfilter)
	|| ydk::is_set(route_rib_version.yfilter)
	|| ydk::is_set(route_spf_version.yfilter)
	|| ydk::is_set(route_forward_distance.yfilter)
	|| ydk::is_set(route_source.yfilter)
	|| ydk::is_set(route_spf_priority.yfilter)
	|| ydk::is_set(route_auto_excluded.yfilter)
	|| ydk::is_set(route_srte_prefix_registered.yfilter)
	|| ydk::is_set(route_srte_nbr_registered.yfilter)
	|| (route_update_time !=  nullptr && route_update_time->has_operation())
	|| (route_fail_time !=  nullptr && route_fail_time->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_area_id.is_set || is_set(route_area_id.yfilter)) leaf_name_data.push_back(route_area_id.get_name_leafdata());
    if (route_te_metric.is_set || is_set(route_te_metric.yfilter)) leaf_name_data.push_back(route_te_metric.get_name_leafdata());
    if (route_rib_version.is_set || is_set(route_rib_version.yfilter)) leaf_name_data.push_back(route_rib_version.get_name_leafdata());
    if (route_spf_version.is_set || is_set(route_spf_version.yfilter)) leaf_name_data.push_back(route_spf_version.get_name_leafdata());
    if (route_forward_distance.is_set || is_set(route_forward_distance.yfilter)) leaf_name_data.push_back(route_forward_distance.get_name_leafdata());
    if (route_source.is_set || is_set(route_source.yfilter)) leaf_name_data.push_back(route_source.get_name_leafdata());
    if (route_spf_priority.is_set || is_set(route_spf_priority.yfilter)) leaf_name_data.push_back(route_spf_priority.get_name_leafdata());
    if (route_auto_excluded.is_set || is_set(route_auto_excluded.yfilter)) leaf_name_data.push_back(route_auto_excluded.get_name_leafdata());
    if (route_srte_prefix_registered.is_set || is_set(route_srte_prefix_registered.yfilter)) leaf_name_data.push_back(route_srte_prefix_registered.get_name_leafdata());
    if (route_srte_nbr_registered.is_set || is_set(route_srte_nbr_registered.yfilter)) leaf_name_data.push_back(route_srte_nbr_registered.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-update-time")
    {
        if(route_update_time == nullptr)
        {
            route_update_time = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::RouteUpdateTime>();
        }
        return route_update_time;
    }

    if(child_yang_name == "route-fail-time")
    {
        if(route_fail_time == nullptr)
        {
            route_fail_time = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::RouteFailTime>();
        }
        return route_fail_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(route_update_time != nullptr)
    {
        children["route-update-time"] = route_update_time;
    }

    if(route_fail_time != nullptr)
    {
        children["route-fail-time"] = route_fail_time;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-area-id")
    {
        route_area_id = value;
        route_area_id.value_namespace = name_space;
        route_area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-te-metric")
    {
        route_te_metric = value;
        route_te_metric.value_namespace = name_space;
        route_te_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-rib-version")
    {
        route_rib_version = value;
        route_rib_version.value_namespace = name_space;
        route_rib_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-spf-version")
    {
        route_spf_version = value;
        route_spf_version.value_namespace = name_space;
        route_spf_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-forward-distance")
    {
        route_forward_distance = value;
        route_forward_distance.value_namespace = name_space;
        route_forward_distance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-source")
    {
        route_source = value;
        route_source.value_namespace = name_space;
        route_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-spf-priority")
    {
        route_spf_priority = value;
        route_spf_priority.value_namespace = name_space;
        route_spf_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-auto-excluded")
    {
        route_auto_excluded = value;
        route_auto_excluded.value_namespace = name_space;
        route_auto_excluded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-srte-prefix-registered")
    {
        route_srte_prefix_registered = value;
        route_srte_prefix_registered.value_namespace = name_space;
        route_srte_prefix_registered.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-srte-nbr-registered")
    {
        route_srte_nbr_registered = value;
        route_srte_nbr_registered.value_namespace = name_space;
        route_srte_nbr_registered.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-area-id")
    {
        route_area_id.yfilter = yfilter;
    }
    if(value_path == "route-te-metric")
    {
        route_te_metric.yfilter = yfilter;
    }
    if(value_path == "route-rib-version")
    {
        route_rib_version.yfilter = yfilter;
    }
    if(value_path == "route-spf-version")
    {
        route_spf_version.yfilter = yfilter;
    }
    if(value_path == "route-forward-distance")
    {
        route_forward_distance.yfilter = yfilter;
    }
    if(value_path == "route-source")
    {
        route_source.yfilter = yfilter;
    }
    if(value_path == "route-spf-priority")
    {
        route_spf_priority.yfilter = yfilter;
    }
    if(value_path == "route-auto-excluded")
    {
        route_auto_excluded.yfilter = yfilter;
    }
    if(value_path == "route-srte-prefix-registered")
    {
        route_srte_prefix_registered.yfilter = yfilter;
    }
    if(value_path == "route-srte-nbr-registered")
    {
        route_srte_nbr_registered.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-update-time" || name == "route-fail-time" || name == "route-area-id" || name == "route-te-metric" || name == "route-rib-version" || name == "route-spf-version" || name == "route-forward-distance" || name == "route-source" || name == "route-spf-priority" || name == "route-auto-excluded" || name == "route-srte-prefix-registered" || name == "route-srte-nbr-registered")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::RouteUpdateTime::RouteUpdateTime()
    :
    second{YType::uint32, "second"},
    nanosecond{YType::uint32, "nanosecond"}
{

    yang_name = "route-update-time"; yang_parent_name = "route-info"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::RouteUpdateTime::~RouteUpdateTime()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::RouteUpdateTime::has_data() const
{
    return second.is_set
	|| nanosecond.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::RouteUpdateTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(second.yfilter)
	|| ydk::is_set(nanosecond.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::RouteUpdateTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-update-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::RouteUpdateTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());
    if (nanosecond.is_set || is_set(nanosecond.yfilter)) leaf_name_data.push_back(nanosecond.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::RouteUpdateTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::RouteUpdateTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::RouteUpdateTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "second")
    {
        second = value;
        second.value_namespace = name_space;
        second.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanosecond")
    {
        nanosecond = value;
        nanosecond.value_namespace = name_space;
        nanosecond.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::RouteUpdateTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "second")
    {
        second.yfilter = yfilter;
    }
    if(value_path == "nanosecond")
    {
        nanosecond.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::RouteUpdateTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second" || name == "nanosecond")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::RouteFailTime::RouteFailTime()
    :
    second{YType::uint32, "second"},
    nanosecond{YType::uint32, "nanosecond"}
{

    yang_name = "route-fail-time"; yang_parent_name = "route-info"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::RouteFailTime::~RouteFailTime()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::RouteFailTime::has_data() const
{
    return second.is_set
	|| nanosecond.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::RouteFailTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(second.yfilter)
	|| ydk::is_set(nanosecond.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::RouteFailTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-fail-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::RouteFailTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());
    if (nanosecond.is_set || is_set(nanosecond.yfilter)) leaf_name_data.push_back(nanosecond.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::RouteFailTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::RouteFailTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::RouteFailTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "second")
    {
        second = value;
        second.value_namespace = name_space;
        second.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanosecond")
    {
        nanosecond = value;
        nanosecond.value_namespace = name_space;
        nanosecond.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::RouteFailTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "second")
    {
        second.yfilter = yfilter;
    }
    if(value_path == "nanosecond")
    {
        nanosecond.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::RouteFailTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second" || name == "nanosecond")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::RoutePath()
    :
    route_interface_name{YType::str, "route-interface-name"},
    route_next_hop_address{YType::str, "route-next-hop-address"},
    route_source{YType::str, "route-source"},
    route_lsaid{YType::str, "route-lsaid"},
    route_path_is_mcast_intact{YType::boolean, "route-path-is-mcast-intact"},
    route_path_is_ucmp_path{YType::boolean, "route-path-is-ucmp-path"},
    route_metric{YType::uint32, "route-metric"},
    lsa_type{YType::uint8, "lsa-type"},
    area_id{YType::uint32, "area-id"},
    area_format{YType::boolean, "area-format"}
    	,
    sr_microloop_avoidance_path(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::SrMicroloopAvoidancePath>())
{
    sr_microloop_avoidance_path->parent = this;

    yang_name = "route-path"; yang_parent_name = "multicast-intact-route-area"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::~RoutePath()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::has_data() const
{
    return route_interface_name.is_set
	|| route_next_hop_address.is_set
	|| route_source.is_set
	|| route_lsaid.is_set
	|| route_path_is_mcast_intact.is_set
	|| route_path_is_ucmp_path.is_set
	|| route_metric.is_set
	|| lsa_type.is_set
	|| area_id.is_set
	|| area_format.is_set
	|| (sr_microloop_avoidance_path !=  nullptr && sr_microloop_avoidance_path->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_interface_name.yfilter)
	|| ydk::is_set(route_next_hop_address.yfilter)
	|| ydk::is_set(route_source.yfilter)
	|| ydk::is_set(route_lsaid.yfilter)
	|| ydk::is_set(route_path_is_mcast_intact.yfilter)
	|| ydk::is_set(route_path_is_ucmp_path.yfilter)
	|| ydk::is_set(route_metric.yfilter)
	|| ydk::is_set(lsa_type.yfilter)
	|| ydk::is_set(area_id.yfilter)
	|| ydk::is_set(area_format.yfilter)
	|| (sr_microloop_avoidance_path !=  nullptr && sr_microloop_avoidance_path->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_interface_name.is_set || is_set(route_interface_name.yfilter)) leaf_name_data.push_back(route_interface_name.get_name_leafdata());
    if (route_next_hop_address.is_set || is_set(route_next_hop_address.yfilter)) leaf_name_data.push_back(route_next_hop_address.get_name_leafdata());
    if (route_source.is_set || is_set(route_source.yfilter)) leaf_name_data.push_back(route_source.get_name_leafdata());
    if (route_lsaid.is_set || is_set(route_lsaid.yfilter)) leaf_name_data.push_back(route_lsaid.get_name_leafdata());
    if (route_path_is_mcast_intact.is_set || is_set(route_path_is_mcast_intact.yfilter)) leaf_name_data.push_back(route_path_is_mcast_intact.get_name_leafdata());
    if (route_path_is_ucmp_path.is_set || is_set(route_path_is_ucmp_path.yfilter)) leaf_name_data.push_back(route_path_is_ucmp_path.get_name_leafdata());
    if (route_metric.is_set || is_set(route_metric.yfilter)) leaf_name_data.push_back(route_metric.get_name_leafdata());
    if (lsa_type.is_set || is_set(lsa_type.yfilter)) leaf_name_data.push_back(lsa_type.get_name_leafdata());
    if (area_id.is_set || is_set(area_id.yfilter)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (area_format.is_set || is_set(area_format.yfilter)) leaf_name_data.push_back(area_format.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sr-microloop-avoidance-path")
    {
        if(sr_microloop_avoidance_path == nullptr)
        {
            sr_microloop_avoidance_path = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::SrMicroloopAvoidancePath>();
        }
        return sr_microloop_avoidance_path;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(sr_microloop_avoidance_path != nullptr)
    {
        children["sr-microloop-avoidance-path"] = sr_microloop_avoidance_path;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-interface-name")
    {
        route_interface_name = value;
        route_interface_name.value_namespace = name_space;
        route_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-next-hop-address")
    {
        route_next_hop_address = value;
        route_next_hop_address.value_namespace = name_space;
        route_next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-source")
    {
        route_source = value;
        route_source.value_namespace = name_space;
        route_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-lsaid")
    {
        route_lsaid = value;
        route_lsaid.value_namespace = name_space;
        route_lsaid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-path-is-mcast-intact")
    {
        route_path_is_mcast_intact = value;
        route_path_is_mcast_intact.value_namespace = name_space;
        route_path_is_mcast_intact.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-path-is-ucmp-path")
    {
        route_path_is_ucmp_path = value;
        route_path_is_ucmp_path.value_namespace = name_space;
        route_path_is_ucmp_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-metric")
    {
        route_metric = value;
        route_metric.value_namespace = name_space;
        route_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-type")
    {
        lsa_type = value;
        lsa_type.value_namespace = name_space;
        lsa_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-id")
    {
        area_id = value;
        area_id.value_namespace = name_space;
        area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-format")
    {
        area_format = value;
        area_format.value_namespace = name_space;
        area_format.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-interface-name")
    {
        route_interface_name.yfilter = yfilter;
    }
    if(value_path == "route-next-hop-address")
    {
        route_next_hop_address.yfilter = yfilter;
    }
    if(value_path == "route-source")
    {
        route_source.yfilter = yfilter;
    }
    if(value_path == "route-lsaid")
    {
        route_lsaid.yfilter = yfilter;
    }
    if(value_path == "route-path-is-mcast-intact")
    {
        route_path_is_mcast_intact.yfilter = yfilter;
    }
    if(value_path == "route-path-is-ucmp-path")
    {
        route_path_is_ucmp_path.yfilter = yfilter;
    }
    if(value_path == "route-metric")
    {
        route_metric.yfilter = yfilter;
    }
    if(value_path == "lsa-type")
    {
        lsa_type.yfilter = yfilter;
    }
    if(value_path == "area-id")
    {
        area_id.yfilter = yfilter;
    }
    if(value_path == "area-format")
    {
        area_format.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sr-microloop-avoidance-path" || name == "route-interface-name" || name == "route-next-hop-address" || name == "route-source" || name == "route-lsaid" || name == "route-path-is-mcast-intact" || name == "route-path-is-ucmp-path" || name == "route-metric" || name == "lsa-type" || name == "area-id" || name == "area-format")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::SrMicroloopAvoidancePath::SrMicroloopAvoidancePath()
    :
    microloop_repair_list_size{YType::uint32, "microloop-repair-list-size"},
    microloop_tunnel_interface_name{YType::str, "microloop-tunnel-interface-name"},
    microloop_strict_spf{YType::boolean, "microloop-strict-spf"}
{

    yang_name = "sr-microloop-avoidance-path"; yang_parent_name = "route-path"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::SrMicroloopAvoidancePath::~SrMicroloopAvoidancePath()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::SrMicroloopAvoidancePath::has_data() const
{
    for (std::size_t index=0; index<microloop_repair.size(); index++)
    {
        if(microloop_repair[index]->has_data())
            return true;
    }
    return microloop_repair_list_size.is_set
	|| microloop_tunnel_interface_name.is_set
	|| microloop_strict_spf.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::SrMicroloopAvoidancePath::has_operation() const
{
    for (std::size_t index=0; index<microloop_repair.size(); index++)
    {
        if(microloop_repair[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(microloop_repair_list_size.yfilter)
	|| ydk::is_set(microloop_tunnel_interface_name.yfilter)
	|| ydk::is_set(microloop_strict_spf.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::SrMicroloopAvoidancePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-microloop-avoidance-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::SrMicroloopAvoidancePath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (microloop_repair_list_size.is_set || is_set(microloop_repair_list_size.yfilter)) leaf_name_data.push_back(microloop_repair_list_size.get_name_leafdata());
    if (microloop_tunnel_interface_name.is_set || is_set(microloop_tunnel_interface_name.yfilter)) leaf_name_data.push_back(microloop_tunnel_interface_name.get_name_leafdata());
    if (microloop_strict_spf.is_set || is_set(microloop_strict_spf.yfilter)) leaf_name_data.push_back(microloop_strict_spf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::SrMicroloopAvoidancePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "microloop-repair")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair>();
        c->parent = this;
        microloop_repair.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::SrMicroloopAvoidancePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : microloop_repair)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::SrMicroloopAvoidancePath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "microloop-repair-list-size")
    {
        microloop_repair_list_size = value;
        microloop_repair_list_size.value_namespace = name_space;
        microloop_repair_list_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "microloop-tunnel-interface-name")
    {
        microloop_tunnel_interface_name = value;
        microloop_tunnel_interface_name.value_namespace = name_space;
        microloop_tunnel_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "microloop-strict-spf")
    {
        microloop_strict_spf = value;
        microloop_strict_spf.value_namespace = name_space;
        microloop_strict_spf.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::SrMicroloopAvoidancePath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "microloop-repair-list-size")
    {
        microloop_repair_list_size.yfilter = yfilter;
    }
    if(value_path == "microloop-tunnel-interface-name")
    {
        microloop_tunnel_interface_name.yfilter = yfilter;
    }
    if(value_path == "microloop-strict-spf")
    {
        microloop_strict_spf.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::SrMicroloopAvoidancePath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "microloop-repair" || name == "microloop-repair-list-size" || name == "microloop-tunnel-interface-name" || name == "microloop-strict-spf")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::MicroloopRepair()
    :
    repair_element_id{YType::str, "repair-element-id"},
    repair_label{YType::uint32, "repair-label"},
    repair_element_type{YType::uint32, "repair-element-type"}
{

    yang_name = "microloop-repair"; yang_parent_name = "sr-microloop-avoidance-path"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::~MicroloopRepair()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::has_data() const
{
    return repair_element_id.is_set
	|| repair_label.is_set
	|| repair_element_type.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(repair_element_id.yfilter)
	|| ydk::is_set(repair_label.yfilter)
	|| ydk::is_set(repair_element_type.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "microloop-repair";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (repair_element_id.is_set || is_set(repair_element_id.yfilter)) leaf_name_data.push_back(repair_element_id.get_name_leafdata());
    if (repair_label.is_set || is_set(repair_label.yfilter)) leaf_name_data.push_back(repair_label.get_name_leafdata());
    if (repair_element_type.is_set || is_set(repair_element_type.yfilter)) leaf_name_data.push_back(repair_element_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "repair-element-id")
    {
        repair_element_id = value;
        repair_element_id.value_namespace = name_space;
        repair_element_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-label")
    {
        repair_label = value;
        repair_label.value_namespace = name_space;
        repair_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type = value;
        repair_element_type.value_namespace = name_space;
        repair_element_type.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "repair-element-id")
    {
        repair_element_id.yfilter = yfilter;
    }
    if(value_path == "repair-label")
    {
        repair_label.yfilter = yfilter;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "repair-element-id" || name == "repair-label" || name == "repair-element-type")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::SummaryAreaInformation()
    :
    failures{YType::uint32, "failures"},
    failure_address{YType::str, "failure-address"}
    	,
    failure_time(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::FailureTime>())
	,common(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::Common>())
{
    failure_time->parent = this;
    common->parent = this;

    yang_name = "summary-area-information"; yang_parent_name = "route-area"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::~SummaryAreaInformation()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::has_data() const
{
    return failures.is_set
	|| failure_address.is_set
	|| (failure_time !=  nullptr && failure_time->has_data())
	|| (common !=  nullptr && common->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(failures.yfilter)
	|| ydk::is_set(failure_address.yfilter)
	|| (failure_time !=  nullptr && failure_time->has_operation())
	|| (common !=  nullptr && common->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary-area-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (failures.is_set || is_set(failures.yfilter)) leaf_name_data.push_back(failures.get_name_leafdata());
    if (failure_address.is_set || is_set(failure_address.yfilter)) leaf_name_data.push_back(failure_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "failure-time")
    {
        if(failure_time == nullptr)
        {
            failure_time = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::FailureTime>();
        }
        return failure_time;
    }

    if(child_yang_name == "common")
    {
        if(common == nullptr)
        {
            common = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::Common>();
        }
        return common;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(failure_time != nullptr)
    {
        children["failure-time"] = failure_time;
    }

    if(common != nullptr)
    {
        children["common"] = common;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "failures")
    {
        failures = value;
        failures.value_namespace = name_space;
        failures.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "failure-address")
    {
        failure_address = value;
        failure_address.value_namespace = name_space;
        failure_address.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "failures")
    {
        failures.yfilter = yfilter;
    }
    if(value_path == "failure-address")
    {
        failure_address.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "failure-time" || name == "common" || name == "failures" || name == "failure-address")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::FailureTime::FailureTime()
    :
    second{YType::uint32, "second"},
    nanosecond{YType::uint32, "nanosecond"}
{

    yang_name = "failure-time"; yang_parent_name = "summary-area-information"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::FailureTime::~FailureTime()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::FailureTime::has_data() const
{
    return second.is_set
	|| nanosecond.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::FailureTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(second.yfilter)
	|| ydk::is_set(nanosecond.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::FailureTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "failure-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::FailureTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());
    if (nanosecond.is_set || is_set(nanosecond.yfilter)) leaf_name_data.push_back(nanosecond.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::FailureTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::FailureTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::FailureTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "second")
    {
        second = value;
        second.value_namespace = name_space;
        second.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanosecond")
    {
        nanosecond = value;
        nanosecond.value_namespace = name_space;
        nanosecond.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::FailureTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "second")
    {
        second.yfilter = yfilter;
    }
    if(value_path == "nanosecond")
    {
        nanosecond.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::FailureTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second" || name == "nanosecond")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::Common::Common()
    :
    external_type1s{YType::uint32, "external-type1s"},
    external_type2s{YType::uint32, "external-type2s"},
    external_nssa_type1s{YType::uint32, "external-nssa-type1s"},
    external_nssa_type2s{YType::uint32, "external-nssa-type2s"},
    inter_areas{YType::uint32, "inter-areas"},
    intra_areas{YType::uint32, "intra-areas"},
    total{YType::uint32, "total"}
{

    yang_name = "common"; yang_parent_name = "summary-area-information"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::Common::~Common()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::Common::has_data() const
{
    return external_type1s.is_set
	|| external_type2s.is_set
	|| external_nssa_type1s.is_set
	|| external_nssa_type2s.is_set
	|| inter_areas.is_set
	|| intra_areas.is_set
	|| total.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::Common::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(external_type1s.yfilter)
	|| ydk::is_set(external_type2s.yfilter)
	|| ydk::is_set(external_nssa_type1s.yfilter)
	|| ydk::is_set(external_nssa_type2s.yfilter)
	|| ydk::is_set(inter_areas.yfilter)
	|| ydk::is_set(intra_areas.yfilter)
	|| ydk::is_set(total.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::Common::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "common";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::Common::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (external_type1s.is_set || is_set(external_type1s.yfilter)) leaf_name_data.push_back(external_type1s.get_name_leafdata());
    if (external_type2s.is_set || is_set(external_type2s.yfilter)) leaf_name_data.push_back(external_type2s.get_name_leafdata());
    if (external_nssa_type1s.is_set || is_set(external_nssa_type1s.yfilter)) leaf_name_data.push_back(external_nssa_type1s.get_name_leafdata());
    if (external_nssa_type2s.is_set || is_set(external_nssa_type2s.yfilter)) leaf_name_data.push_back(external_nssa_type2s.get_name_leafdata());
    if (inter_areas.is_set || is_set(inter_areas.yfilter)) leaf_name_data.push_back(inter_areas.get_name_leafdata());
    if (intra_areas.is_set || is_set(intra_areas.yfilter)) leaf_name_data.push_back(intra_areas.get_name_leafdata());
    if (total.is_set || is_set(total.yfilter)) leaf_name_data.push_back(total.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::Common::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::Common::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::Common::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "external-type1s")
    {
        external_type1s = value;
        external_type1s.value_namespace = name_space;
        external_type1s.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-type2s")
    {
        external_type2s = value;
        external_type2s.value_namespace = name_space;
        external_type2s.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-nssa-type1s")
    {
        external_nssa_type1s = value;
        external_nssa_type1s.value_namespace = name_space;
        external_nssa_type1s.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-nssa-type2s")
    {
        external_nssa_type2s = value;
        external_nssa_type2s.value_namespace = name_space;
        external_nssa_type2s.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inter-areas")
    {
        inter_areas = value;
        inter_areas.value_namespace = name_space;
        inter_areas.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "intra-areas")
    {
        intra_areas = value;
        intra_areas.value_namespace = name_space;
        intra_areas.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total")
    {
        total = value;
        total.value_namespace = name_space;
        total.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::Common::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "external-type1s")
    {
        external_type1s.yfilter = yfilter;
    }
    if(value_path == "external-type2s")
    {
        external_type2s.yfilter = yfilter;
    }
    if(value_path == "external-nssa-type1s")
    {
        external_nssa_type1s.yfilter = yfilter;
    }
    if(value_path == "external-nssa-type2s")
    {
        external_nssa_type2s.yfilter = yfilter;
    }
    if(value_path == "inter-areas")
    {
        inter_areas.yfilter = yfilter;
    }
    if(value_path == "intra-areas")
    {
        intra_areas.yfilter = yfilter;
    }
    if(value_path == "total")
    {
        total.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::Common::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "external-type1s" || name == "external-type2s" || name == "external-nssa-type1s" || name == "external-nssa-type2s" || name == "inter-areas" || name == "intra-areas" || name == "total")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteAreas()
{

    yang_name = "local-route-areas"; yang_parent_name = "route-area"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::~LocalRouteAreas()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::has_data() const
{
    for (std::size_t index=0; index<local_route_area.size(); index++)
    {
        if(local_route_area[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::has_operation() const
{
    for (std::size_t index=0; index<local_route_area.size(); index++)
    {
        if(local_route_area[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-route-areas";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "local-route-area")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea>();
        c->parent = this;
        local_route_area.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : local_route_area)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-route-area")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::LocalRouteArea()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint32, "prefix-length"},
    route_prefix{YType::str, "route-prefix"},
    route_prefix_length{YType::uint32, "route-prefix-length"},
    route_metric{YType::uint32, "route-metric"},
    route_type{YType::enumeration, "route-type"},
    route_connected{YType::boolean, "route-connected"}
    	,
    route_info(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo>())
{
    route_info->parent = this;

    yang_name = "local-route-area"; yang_parent_name = "local-route-areas"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::~LocalRouteArea()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::has_data() const
{
    for (std::size_t index=0; index<route_path.size(); index++)
    {
        if(route_path[index]->has_data())
            return true;
    }
    return prefix.is_set
	|| prefix_length.is_set
	|| route_prefix.is_set
	|| route_prefix_length.is_set
	|| route_metric.is_set
	|| route_type.is_set
	|| route_connected.is_set
	|| (route_info !=  nullptr && route_info->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::has_operation() const
{
    for (std::size_t index=0; index<route_path.size(); index++)
    {
        if(route_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(route_prefix.yfilter)
	|| ydk::is_set(route_prefix_length.yfilter)
	|| ydk::is_set(route_metric.yfilter)
	|| ydk::is_set(route_type.yfilter)
	|| ydk::is_set(route_connected.yfilter)
	|| (route_info !=  nullptr && route_info->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-route-area";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (route_prefix.is_set || is_set(route_prefix.yfilter)) leaf_name_data.push_back(route_prefix.get_name_leafdata());
    if (route_prefix_length.is_set || is_set(route_prefix_length.yfilter)) leaf_name_data.push_back(route_prefix_length.get_name_leafdata());
    if (route_metric.is_set || is_set(route_metric.yfilter)) leaf_name_data.push_back(route_metric.get_name_leafdata());
    if (route_type.is_set || is_set(route_type.yfilter)) leaf_name_data.push_back(route_type.get_name_leafdata());
    if (route_connected.is_set || is_set(route_connected.yfilter)) leaf_name_data.push_back(route_connected.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-info")
    {
        if(route_info == nullptr)
        {
            route_info = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo>();
        }
        return route_info;
    }

    if(child_yang_name == "route-path")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath>();
        c->parent = this;
        route_path.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(route_info != nullptr)
    {
        children["route-info"] = route_info;
    }

    count = 0;
    for (auto const & c : route_path)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-prefix")
    {
        route_prefix = value;
        route_prefix.value_namespace = name_space;
        route_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-prefix-length")
    {
        route_prefix_length = value;
        route_prefix_length.value_namespace = name_space;
        route_prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-metric")
    {
        route_metric = value;
        route_metric.value_namespace = name_space;
        route_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-type")
    {
        route_type = value;
        route_type.value_namespace = name_space;
        route_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-connected")
    {
        route_connected = value;
        route_connected.value_namespace = name_space;
        route_connected.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "route-prefix")
    {
        route_prefix.yfilter = yfilter;
    }
    if(value_path == "route-prefix-length")
    {
        route_prefix_length.yfilter = yfilter;
    }
    if(value_path == "route-metric")
    {
        route_metric.yfilter = yfilter;
    }
    if(value_path == "route-type")
    {
        route_type.yfilter = yfilter;
    }
    if(value_path == "route-connected")
    {
        route_connected.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-info" || name == "route-path" || name == "prefix" || name == "prefix-length" || name == "route-prefix" || name == "route-prefix-length" || name == "route-metric" || name == "route-type" || name == "route-connected")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::RouteInfo()
    :
    route_area_id{YType::uint32, "route-area-id"},
    route_te_metric{YType::uint32, "route-te-metric"},
    route_rib_version{YType::uint32, "route-rib-version"},
    route_spf_version{YType::uint64, "route-spf-version"},
    route_forward_distance{YType::uint32, "route-forward-distance"},
    route_source{YType::uint16, "route-source"},
    route_spf_priority{YType::uint8, "route-spf-priority"},
    route_auto_excluded{YType::boolean, "route-auto-excluded"},
    route_srte_prefix_registered{YType::boolean, "route-srte-prefix-registered"},
    route_srte_nbr_registered{YType::uint16, "route-srte-nbr-registered"}
    	,
    route_update_time(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::RouteUpdateTime>())
	,route_fail_time(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::RouteFailTime>())
{
    route_update_time->parent = this;
    route_fail_time->parent = this;

    yang_name = "route-info"; yang_parent_name = "local-route-area"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::~RouteInfo()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::has_data() const
{
    return route_area_id.is_set
	|| route_te_metric.is_set
	|| route_rib_version.is_set
	|| route_spf_version.is_set
	|| route_forward_distance.is_set
	|| route_source.is_set
	|| route_spf_priority.is_set
	|| route_auto_excluded.is_set
	|| route_srte_prefix_registered.is_set
	|| route_srte_nbr_registered.is_set
	|| (route_update_time !=  nullptr && route_update_time->has_data())
	|| (route_fail_time !=  nullptr && route_fail_time->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_area_id.yfilter)
	|| ydk::is_set(route_te_metric.yfilter)
	|| ydk::is_set(route_rib_version.yfilter)
	|| ydk::is_set(route_spf_version.yfilter)
	|| ydk::is_set(route_forward_distance.yfilter)
	|| ydk::is_set(route_source.yfilter)
	|| ydk::is_set(route_spf_priority.yfilter)
	|| ydk::is_set(route_auto_excluded.yfilter)
	|| ydk::is_set(route_srte_prefix_registered.yfilter)
	|| ydk::is_set(route_srte_nbr_registered.yfilter)
	|| (route_update_time !=  nullptr && route_update_time->has_operation())
	|| (route_fail_time !=  nullptr && route_fail_time->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_area_id.is_set || is_set(route_area_id.yfilter)) leaf_name_data.push_back(route_area_id.get_name_leafdata());
    if (route_te_metric.is_set || is_set(route_te_metric.yfilter)) leaf_name_data.push_back(route_te_metric.get_name_leafdata());
    if (route_rib_version.is_set || is_set(route_rib_version.yfilter)) leaf_name_data.push_back(route_rib_version.get_name_leafdata());
    if (route_spf_version.is_set || is_set(route_spf_version.yfilter)) leaf_name_data.push_back(route_spf_version.get_name_leafdata());
    if (route_forward_distance.is_set || is_set(route_forward_distance.yfilter)) leaf_name_data.push_back(route_forward_distance.get_name_leafdata());
    if (route_source.is_set || is_set(route_source.yfilter)) leaf_name_data.push_back(route_source.get_name_leafdata());
    if (route_spf_priority.is_set || is_set(route_spf_priority.yfilter)) leaf_name_data.push_back(route_spf_priority.get_name_leafdata());
    if (route_auto_excluded.is_set || is_set(route_auto_excluded.yfilter)) leaf_name_data.push_back(route_auto_excluded.get_name_leafdata());
    if (route_srte_prefix_registered.is_set || is_set(route_srte_prefix_registered.yfilter)) leaf_name_data.push_back(route_srte_prefix_registered.get_name_leafdata());
    if (route_srte_nbr_registered.is_set || is_set(route_srte_nbr_registered.yfilter)) leaf_name_data.push_back(route_srte_nbr_registered.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-update-time")
    {
        if(route_update_time == nullptr)
        {
            route_update_time = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::RouteUpdateTime>();
        }
        return route_update_time;
    }

    if(child_yang_name == "route-fail-time")
    {
        if(route_fail_time == nullptr)
        {
            route_fail_time = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::RouteFailTime>();
        }
        return route_fail_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(route_update_time != nullptr)
    {
        children["route-update-time"] = route_update_time;
    }

    if(route_fail_time != nullptr)
    {
        children["route-fail-time"] = route_fail_time;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-area-id")
    {
        route_area_id = value;
        route_area_id.value_namespace = name_space;
        route_area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-te-metric")
    {
        route_te_metric = value;
        route_te_metric.value_namespace = name_space;
        route_te_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-rib-version")
    {
        route_rib_version = value;
        route_rib_version.value_namespace = name_space;
        route_rib_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-spf-version")
    {
        route_spf_version = value;
        route_spf_version.value_namespace = name_space;
        route_spf_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-forward-distance")
    {
        route_forward_distance = value;
        route_forward_distance.value_namespace = name_space;
        route_forward_distance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-source")
    {
        route_source = value;
        route_source.value_namespace = name_space;
        route_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-spf-priority")
    {
        route_spf_priority = value;
        route_spf_priority.value_namespace = name_space;
        route_spf_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-auto-excluded")
    {
        route_auto_excluded = value;
        route_auto_excluded.value_namespace = name_space;
        route_auto_excluded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-srte-prefix-registered")
    {
        route_srte_prefix_registered = value;
        route_srte_prefix_registered.value_namespace = name_space;
        route_srte_prefix_registered.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-srte-nbr-registered")
    {
        route_srte_nbr_registered = value;
        route_srte_nbr_registered.value_namespace = name_space;
        route_srte_nbr_registered.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-area-id")
    {
        route_area_id.yfilter = yfilter;
    }
    if(value_path == "route-te-metric")
    {
        route_te_metric.yfilter = yfilter;
    }
    if(value_path == "route-rib-version")
    {
        route_rib_version.yfilter = yfilter;
    }
    if(value_path == "route-spf-version")
    {
        route_spf_version.yfilter = yfilter;
    }
    if(value_path == "route-forward-distance")
    {
        route_forward_distance.yfilter = yfilter;
    }
    if(value_path == "route-source")
    {
        route_source.yfilter = yfilter;
    }
    if(value_path == "route-spf-priority")
    {
        route_spf_priority.yfilter = yfilter;
    }
    if(value_path == "route-auto-excluded")
    {
        route_auto_excluded.yfilter = yfilter;
    }
    if(value_path == "route-srte-prefix-registered")
    {
        route_srte_prefix_registered.yfilter = yfilter;
    }
    if(value_path == "route-srte-nbr-registered")
    {
        route_srte_nbr_registered.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-update-time" || name == "route-fail-time" || name == "route-area-id" || name == "route-te-metric" || name == "route-rib-version" || name == "route-spf-version" || name == "route-forward-distance" || name == "route-source" || name == "route-spf-priority" || name == "route-auto-excluded" || name == "route-srte-prefix-registered" || name == "route-srte-nbr-registered")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::RouteUpdateTime::RouteUpdateTime()
    :
    second{YType::uint32, "second"},
    nanosecond{YType::uint32, "nanosecond"}
{

    yang_name = "route-update-time"; yang_parent_name = "route-info"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::RouteUpdateTime::~RouteUpdateTime()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::RouteUpdateTime::has_data() const
{
    return second.is_set
	|| nanosecond.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::RouteUpdateTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(second.yfilter)
	|| ydk::is_set(nanosecond.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::RouteUpdateTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-update-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::RouteUpdateTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());
    if (nanosecond.is_set || is_set(nanosecond.yfilter)) leaf_name_data.push_back(nanosecond.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::RouteUpdateTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::RouteUpdateTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::RouteUpdateTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "second")
    {
        second = value;
        second.value_namespace = name_space;
        second.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanosecond")
    {
        nanosecond = value;
        nanosecond.value_namespace = name_space;
        nanosecond.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::RouteUpdateTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "second")
    {
        second.yfilter = yfilter;
    }
    if(value_path == "nanosecond")
    {
        nanosecond.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::RouteUpdateTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second" || name == "nanosecond")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::RouteFailTime::RouteFailTime()
    :
    second{YType::uint32, "second"},
    nanosecond{YType::uint32, "nanosecond"}
{

    yang_name = "route-fail-time"; yang_parent_name = "route-info"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::RouteFailTime::~RouteFailTime()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::RouteFailTime::has_data() const
{
    return second.is_set
	|| nanosecond.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::RouteFailTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(second.yfilter)
	|| ydk::is_set(nanosecond.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::RouteFailTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-fail-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::RouteFailTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());
    if (nanosecond.is_set || is_set(nanosecond.yfilter)) leaf_name_data.push_back(nanosecond.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::RouteFailTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::RouteFailTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::RouteFailTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "second")
    {
        second = value;
        second.value_namespace = name_space;
        second.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanosecond")
    {
        nanosecond = value;
        nanosecond.value_namespace = name_space;
        nanosecond.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::RouteFailTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "second")
    {
        second.yfilter = yfilter;
    }
    if(value_path == "nanosecond")
    {
        nanosecond.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::RouteFailTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second" || name == "nanosecond")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::RoutePath()
    :
    route_interface_name{YType::str, "route-interface-name"},
    route_next_hop_address{YType::str, "route-next-hop-address"},
    route_source{YType::str, "route-source"},
    route_lsaid{YType::str, "route-lsaid"},
    route_path_is_mcast_intact{YType::boolean, "route-path-is-mcast-intact"},
    route_path_is_ucmp_path{YType::boolean, "route-path-is-ucmp-path"},
    route_metric{YType::uint32, "route-metric"},
    lsa_type{YType::uint8, "lsa-type"},
    area_id{YType::uint32, "area-id"},
    area_format{YType::boolean, "area-format"}
    	,
    sr_microloop_avoidance_path(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::SrMicroloopAvoidancePath>())
{
    sr_microloop_avoidance_path->parent = this;

    yang_name = "route-path"; yang_parent_name = "local-route-area"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::~RoutePath()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::has_data() const
{
    return route_interface_name.is_set
	|| route_next_hop_address.is_set
	|| route_source.is_set
	|| route_lsaid.is_set
	|| route_path_is_mcast_intact.is_set
	|| route_path_is_ucmp_path.is_set
	|| route_metric.is_set
	|| lsa_type.is_set
	|| area_id.is_set
	|| area_format.is_set
	|| (sr_microloop_avoidance_path !=  nullptr && sr_microloop_avoidance_path->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_interface_name.yfilter)
	|| ydk::is_set(route_next_hop_address.yfilter)
	|| ydk::is_set(route_source.yfilter)
	|| ydk::is_set(route_lsaid.yfilter)
	|| ydk::is_set(route_path_is_mcast_intact.yfilter)
	|| ydk::is_set(route_path_is_ucmp_path.yfilter)
	|| ydk::is_set(route_metric.yfilter)
	|| ydk::is_set(lsa_type.yfilter)
	|| ydk::is_set(area_id.yfilter)
	|| ydk::is_set(area_format.yfilter)
	|| (sr_microloop_avoidance_path !=  nullptr && sr_microloop_avoidance_path->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_interface_name.is_set || is_set(route_interface_name.yfilter)) leaf_name_data.push_back(route_interface_name.get_name_leafdata());
    if (route_next_hop_address.is_set || is_set(route_next_hop_address.yfilter)) leaf_name_data.push_back(route_next_hop_address.get_name_leafdata());
    if (route_source.is_set || is_set(route_source.yfilter)) leaf_name_data.push_back(route_source.get_name_leafdata());
    if (route_lsaid.is_set || is_set(route_lsaid.yfilter)) leaf_name_data.push_back(route_lsaid.get_name_leafdata());
    if (route_path_is_mcast_intact.is_set || is_set(route_path_is_mcast_intact.yfilter)) leaf_name_data.push_back(route_path_is_mcast_intact.get_name_leafdata());
    if (route_path_is_ucmp_path.is_set || is_set(route_path_is_ucmp_path.yfilter)) leaf_name_data.push_back(route_path_is_ucmp_path.get_name_leafdata());
    if (route_metric.is_set || is_set(route_metric.yfilter)) leaf_name_data.push_back(route_metric.get_name_leafdata());
    if (lsa_type.is_set || is_set(lsa_type.yfilter)) leaf_name_data.push_back(lsa_type.get_name_leafdata());
    if (area_id.is_set || is_set(area_id.yfilter)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (area_format.is_set || is_set(area_format.yfilter)) leaf_name_data.push_back(area_format.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sr-microloop-avoidance-path")
    {
        if(sr_microloop_avoidance_path == nullptr)
        {
            sr_microloop_avoidance_path = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::SrMicroloopAvoidancePath>();
        }
        return sr_microloop_avoidance_path;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(sr_microloop_avoidance_path != nullptr)
    {
        children["sr-microloop-avoidance-path"] = sr_microloop_avoidance_path;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-interface-name")
    {
        route_interface_name = value;
        route_interface_name.value_namespace = name_space;
        route_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-next-hop-address")
    {
        route_next_hop_address = value;
        route_next_hop_address.value_namespace = name_space;
        route_next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-source")
    {
        route_source = value;
        route_source.value_namespace = name_space;
        route_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-lsaid")
    {
        route_lsaid = value;
        route_lsaid.value_namespace = name_space;
        route_lsaid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-path-is-mcast-intact")
    {
        route_path_is_mcast_intact = value;
        route_path_is_mcast_intact.value_namespace = name_space;
        route_path_is_mcast_intact.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-path-is-ucmp-path")
    {
        route_path_is_ucmp_path = value;
        route_path_is_ucmp_path.value_namespace = name_space;
        route_path_is_ucmp_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-metric")
    {
        route_metric = value;
        route_metric.value_namespace = name_space;
        route_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-type")
    {
        lsa_type = value;
        lsa_type.value_namespace = name_space;
        lsa_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-id")
    {
        area_id = value;
        area_id.value_namespace = name_space;
        area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-format")
    {
        area_format = value;
        area_format.value_namespace = name_space;
        area_format.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-interface-name")
    {
        route_interface_name.yfilter = yfilter;
    }
    if(value_path == "route-next-hop-address")
    {
        route_next_hop_address.yfilter = yfilter;
    }
    if(value_path == "route-source")
    {
        route_source.yfilter = yfilter;
    }
    if(value_path == "route-lsaid")
    {
        route_lsaid.yfilter = yfilter;
    }
    if(value_path == "route-path-is-mcast-intact")
    {
        route_path_is_mcast_intact.yfilter = yfilter;
    }
    if(value_path == "route-path-is-ucmp-path")
    {
        route_path_is_ucmp_path.yfilter = yfilter;
    }
    if(value_path == "route-metric")
    {
        route_metric.yfilter = yfilter;
    }
    if(value_path == "lsa-type")
    {
        lsa_type.yfilter = yfilter;
    }
    if(value_path == "area-id")
    {
        area_id.yfilter = yfilter;
    }
    if(value_path == "area-format")
    {
        area_format.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sr-microloop-avoidance-path" || name == "route-interface-name" || name == "route-next-hop-address" || name == "route-source" || name == "route-lsaid" || name == "route-path-is-mcast-intact" || name == "route-path-is-ucmp-path" || name == "route-metric" || name == "lsa-type" || name == "area-id" || name == "area-format")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::SrMicroloopAvoidancePath::SrMicroloopAvoidancePath()
    :
    microloop_repair_list_size{YType::uint32, "microloop-repair-list-size"},
    microloop_tunnel_interface_name{YType::str, "microloop-tunnel-interface-name"},
    microloop_strict_spf{YType::boolean, "microloop-strict-spf"}
{

    yang_name = "sr-microloop-avoidance-path"; yang_parent_name = "route-path"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::SrMicroloopAvoidancePath::~SrMicroloopAvoidancePath()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::SrMicroloopAvoidancePath::has_data() const
{
    for (std::size_t index=0; index<microloop_repair.size(); index++)
    {
        if(microloop_repair[index]->has_data())
            return true;
    }
    return microloop_repair_list_size.is_set
	|| microloop_tunnel_interface_name.is_set
	|| microloop_strict_spf.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::SrMicroloopAvoidancePath::has_operation() const
{
    for (std::size_t index=0; index<microloop_repair.size(); index++)
    {
        if(microloop_repair[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(microloop_repair_list_size.yfilter)
	|| ydk::is_set(microloop_tunnel_interface_name.yfilter)
	|| ydk::is_set(microloop_strict_spf.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::SrMicroloopAvoidancePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-microloop-avoidance-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::SrMicroloopAvoidancePath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (microloop_repair_list_size.is_set || is_set(microloop_repair_list_size.yfilter)) leaf_name_data.push_back(microloop_repair_list_size.get_name_leafdata());
    if (microloop_tunnel_interface_name.is_set || is_set(microloop_tunnel_interface_name.yfilter)) leaf_name_data.push_back(microloop_tunnel_interface_name.get_name_leafdata());
    if (microloop_strict_spf.is_set || is_set(microloop_strict_spf.yfilter)) leaf_name_data.push_back(microloop_strict_spf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::SrMicroloopAvoidancePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "microloop-repair")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair>();
        c->parent = this;
        microloop_repair.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::SrMicroloopAvoidancePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : microloop_repair)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::SrMicroloopAvoidancePath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "microloop-repair-list-size")
    {
        microloop_repair_list_size = value;
        microloop_repair_list_size.value_namespace = name_space;
        microloop_repair_list_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "microloop-tunnel-interface-name")
    {
        microloop_tunnel_interface_name = value;
        microloop_tunnel_interface_name.value_namespace = name_space;
        microloop_tunnel_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "microloop-strict-spf")
    {
        microloop_strict_spf = value;
        microloop_strict_spf.value_namespace = name_space;
        microloop_strict_spf.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::SrMicroloopAvoidancePath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "microloop-repair-list-size")
    {
        microloop_repair_list_size.yfilter = yfilter;
    }
    if(value_path == "microloop-tunnel-interface-name")
    {
        microloop_tunnel_interface_name.yfilter = yfilter;
    }
    if(value_path == "microloop-strict-spf")
    {
        microloop_strict_spf.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::SrMicroloopAvoidancePath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "microloop-repair" || name == "microloop-repair-list-size" || name == "microloop-tunnel-interface-name" || name == "microloop-strict-spf")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::MicroloopRepair()
    :
    repair_element_id{YType::str, "repair-element-id"},
    repair_label{YType::uint32, "repair-label"},
    repair_element_type{YType::uint32, "repair-element-type"}
{

    yang_name = "microloop-repair"; yang_parent_name = "sr-microloop-avoidance-path"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::~MicroloopRepair()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::has_data() const
{
    return repair_element_id.is_set
	|| repair_label.is_set
	|| repair_element_type.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(repair_element_id.yfilter)
	|| ydk::is_set(repair_label.yfilter)
	|| ydk::is_set(repair_element_type.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "microloop-repair";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (repair_element_id.is_set || is_set(repair_element_id.yfilter)) leaf_name_data.push_back(repair_element_id.get_name_leafdata());
    if (repair_label.is_set || is_set(repair_label.yfilter)) leaf_name_data.push_back(repair_label.get_name_leafdata());
    if (repair_element_type.is_set || is_set(repair_element_type.yfilter)) leaf_name_data.push_back(repair_element_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "repair-element-id")
    {
        repair_element_id = value;
        repair_element_id.value_namespace = name_space;
        repair_element_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-label")
    {
        repair_label = value;
        repair_label.value_namespace = name_space;
        repair_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type = value;
        repair_element_type.value_namespace = name_space;
        repair_element_type.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "repair-element-id")
    {
        repair_element_id.yfilter = yfilter;
    }
    if(value_path == "repair-label")
    {
        repair_label.yfilter = yfilter;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "repair-element-id" || name == "repair-label" || name == "repair-element-type")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::RouteTable()
{

    yang_name = "route-table"; yang_parent_name = "route-information"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::~RouteTable()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::has_data() const
{
    for (std::size_t index=0; index<route.size(); index++)
    {
        if(route[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::has_operation() const
{
    for (std::size_t index=0; index<route.size(); index++)
    {
        if(route[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route>();
        c->parent = this;
        route.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : route)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::Route()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint32, "prefix-length"},
    route_prefix{YType::str, "route-prefix"},
    route_prefix_length{YType::uint32, "route-prefix-length"},
    route_metric{YType::uint32, "route-metric"},
    route_type{YType::enumeration, "route-type"},
    route_connected{YType::boolean, "route-connected"}
    	,
    route_info(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RouteInfo>())
{
    route_info->parent = this;

    yang_name = "route"; yang_parent_name = "route-table"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::~Route()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::has_data() const
{
    for (std::size_t index=0; index<route_path.size(); index++)
    {
        if(route_path[index]->has_data())
            return true;
    }
    return prefix.is_set
	|| prefix_length.is_set
	|| route_prefix.is_set
	|| route_prefix_length.is_set
	|| route_metric.is_set
	|| route_type.is_set
	|| route_connected.is_set
	|| (route_info !=  nullptr && route_info->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::has_operation() const
{
    for (std::size_t index=0; index<route_path.size(); index++)
    {
        if(route_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(route_prefix.yfilter)
	|| ydk::is_set(route_prefix_length.yfilter)
	|| ydk::is_set(route_metric.yfilter)
	|| ydk::is_set(route_type.yfilter)
	|| ydk::is_set(route_connected.yfilter)
	|| (route_info !=  nullptr && route_info->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (route_prefix.is_set || is_set(route_prefix.yfilter)) leaf_name_data.push_back(route_prefix.get_name_leafdata());
    if (route_prefix_length.is_set || is_set(route_prefix_length.yfilter)) leaf_name_data.push_back(route_prefix_length.get_name_leafdata());
    if (route_metric.is_set || is_set(route_metric.yfilter)) leaf_name_data.push_back(route_metric.get_name_leafdata());
    if (route_type.is_set || is_set(route_type.yfilter)) leaf_name_data.push_back(route_type.get_name_leafdata());
    if (route_connected.is_set || is_set(route_connected.yfilter)) leaf_name_data.push_back(route_connected.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-info")
    {
        if(route_info == nullptr)
        {
            route_info = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RouteInfo>();
        }
        return route_info;
    }

    if(child_yang_name == "route-path")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RoutePath>();
        c->parent = this;
        route_path.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(route_info != nullptr)
    {
        children["route-info"] = route_info;
    }

    count = 0;
    for (auto const & c : route_path)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-prefix")
    {
        route_prefix = value;
        route_prefix.value_namespace = name_space;
        route_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-prefix-length")
    {
        route_prefix_length = value;
        route_prefix_length.value_namespace = name_space;
        route_prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-metric")
    {
        route_metric = value;
        route_metric.value_namespace = name_space;
        route_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-type")
    {
        route_type = value;
        route_type.value_namespace = name_space;
        route_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-connected")
    {
        route_connected = value;
        route_connected.value_namespace = name_space;
        route_connected.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "route-prefix")
    {
        route_prefix.yfilter = yfilter;
    }
    if(value_path == "route-prefix-length")
    {
        route_prefix_length.yfilter = yfilter;
    }
    if(value_path == "route-metric")
    {
        route_metric.yfilter = yfilter;
    }
    if(value_path == "route-type")
    {
        route_type.yfilter = yfilter;
    }
    if(value_path == "route-connected")
    {
        route_connected.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-info" || name == "route-path" || name == "prefix" || name == "prefix-length" || name == "route-prefix" || name == "route-prefix-length" || name == "route-metric" || name == "route-type" || name == "route-connected")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RouteInfo::RouteInfo()
    :
    route_area_id{YType::uint32, "route-area-id"},
    route_te_metric{YType::uint32, "route-te-metric"},
    route_rib_version{YType::uint32, "route-rib-version"},
    route_spf_version{YType::uint64, "route-spf-version"},
    route_forward_distance{YType::uint32, "route-forward-distance"},
    route_source{YType::uint16, "route-source"},
    route_spf_priority{YType::uint8, "route-spf-priority"},
    route_auto_excluded{YType::boolean, "route-auto-excluded"},
    route_srte_prefix_registered{YType::boolean, "route-srte-prefix-registered"},
    route_srte_nbr_registered{YType::uint16, "route-srte-nbr-registered"}
    	,
    route_update_time(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RouteInfo::RouteUpdateTime>())
	,route_fail_time(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RouteInfo::RouteFailTime>())
{
    route_update_time->parent = this;
    route_fail_time->parent = this;

    yang_name = "route-info"; yang_parent_name = "route"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RouteInfo::~RouteInfo()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RouteInfo::has_data() const
{
    return route_area_id.is_set
	|| route_te_metric.is_set
	|| route_rib_version.is_set
	|| route_spf_version.is_set
	|| route_forward_distance.is_set
	|| route_source.is_set
	|| route_spf_priority.is_set
	|| route_auto_excluded.is_set
	|| route_srte_prefix_registered.is_set
	|| route_srte_nbr_registered.is_set
	|| (route_update_time !=  nullptr && route_update_time->has_data())
	|| (route_fail_time !=  nullptr && route_fail_time->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RouteInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_area_id.yfilter)
	|| ydk::is_set(route_te_metric.yfilter)
	|| ydk::is_set(route_rib_version.yfilter)
	|| ydk::is_set(route_spf_version.yfilter)
	|| ydk::is_set(route_forward_distance.yfilter)
	|| ydk::is_set(route_source.yfilter)
	|| ydk::is_set(route_spf_priority.yfilter)
	|| ydk::is_set(route_auto_excluded.yfilter)
	|| ydk::is_set(route_srte_prefix_registered.yfilter)
	|| ydk::is_set(route_srte_nbr_registered.yfilter)
	|| (route_update_time !=  nullptr && route_update_time->has_operation())
	|| (route_fail_time !=  nullptr && route_fail_time->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RouteInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RouteInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_area_id.is_set || is_set(route_area_id.yfilter)) leaf_name_data.push_back(route_area_id.get_name_leafdata());
    if (route_te_metric.is_set || is_set(route_te_metric.yfilter)) leaf_name_data.push_back(route_te_metric.get_name_leafdata());
    if (route_rib_version.is_set || is_set(route_rib_version.yfilter)) leaf_name_data.push_back(route_rib_version.get_name_leafdata());
    if (route_spf_version.is_set || is_set(route_spf_version.yfilter)) leaf_name_data.push_back(route_spf_version.get_name_leafdata());
    if (route_forward_distance.is_set || is_set(route_forward_distance.yfilter)) leaf_name_data.push_back(route_forward_distance.get_name_leafdata());
    if (route_source.is_set || is_set(route_source.yfilter)) leaf_name_data.push_back(route_source.get_name_leafdata());
    if (route_spf_priority.is_set || is_set(route_spf_priority.yfilter)) leaf_name_data.push_back(route_spf_priority.get_name_leafdata());
    if (route_auto_excluded.is_set || is_set(route_auto_excluded.yfilter)) leaf_name_data.push_back(route_auto_excluded.get_name_leafdata());
    if (route_srte_prefix_registered.is_set || is_set(route_srte_prefix_registered.yfilter)) leaf_name_data.push_back(route_srte_prefix_registered.get_name_leafdata());
    if (route_srte_nbr_registered.is_set || is_set(route_srte_nbr_registered.yfilter)) leaf_name_data.push_back(route_srte_nbr_registered.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RouteInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-update-time")
    {
        if(route_update_time == nullptr)
        {
            route_update_time = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RouteInfo::RouteUpdateTime>();
        }
        return route_update_time;
    }

    if(child_yang_name == "route-fail-time")
    {
        if(route_fail_time == nullptr)
        {
            route_fail_time = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RouteInfo::RouteFailTime>();
        }
        return route_fail_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RouteInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(route_update_time != nullptr)
    {
        children["route-update-time"] = route_update_time;
    }

    if(route_fail_time != nullptr)
    {
        children["route-fail-time"] = route_fail_time;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RouteInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-area-id")
    {
        route_area_id = value;
        route_area_id.value_namespace = name_space;
        route_area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-te-metric")
    {
        route_te_metric = value;
        route_te_metric.value_namespace = name_space;
        route_te_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-rib-version")
    {
        route_rib_version = value;
        route_rib_version.value_namespace = name_space;
        route_rib_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-spf-version")
    {
        route_spf_version = value;
        route_spf_version.value_namespace = name_space;
        route_spf_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-forward-distance")
    {
        route_forward_distance = value;
        route_forward_distance.value_namespace = name_space;
        route_forward_distance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-source")
    {
        route_source = value;
        route_source.value_namespace = name_space;
        route_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-spf-priority")
    {
        route_spf_priority = value;
        route_spf_priority.value_namespace = name_space;
        route_spf_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-auto-excluded")
    {
        route_auto_excluded = value;
        route_auto_excluded.value_namespace = name_space;
        route_auto_excluded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-srte-prefix-registered")
    {
        route_srte_prefix_registered = value;
        route_srte_prefix_registered.value_namespace = name_space;
        route_srte_prefix_registered.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-srte-nbr-registered")
    {
        route_srte_nbr_registered = value;
        route_srte_nbr_registered.value_namespace = name_space;
        route_srte_nbr_registered.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RouteInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-area-id")
    {
        route_area_id.yfilter = yfilter;
    }
    if(value_path == "route-te-metric")
    {
        route_te_metric.yfilter = yfilter;
    }
    if(value_path == "route-rib-version")
    {
        route_rib_version.yfilter = yfilter;
    }
    if(value_path == "route-spf-version")
    {
        route_spf_version.yfilter = yfilter;
    }
    if(value_path == "route-forward-distance")
    {
        route_forward_distance.yfilter = yfilter;
    }
    if(value_path == "route-source")
    {
        route_source.yfilter = yfilter;
    }
    if(value_path == "route-spf-priority")
    {
        route_spf_priority.yfilter = yfilter;
    }
    if(value_path == "route-auto-excluded")
    {
        route_auto_excluded.yfilter = yfilter;
    }
    if(value_path == "route-srte-prefix-registered")
    {
        route_srte_prefix_registered.yfilter = yfilter;
    }
    if(value_path == "route-srte-nbr-registered")
    {
        route_srte_nbr_registered.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RouteInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-update-time" || name == "route-fail-time" || name == "route-area-id" || name == "route-te-metric" || name == "route-rib-version" || name == "route-spf-version" || name == "route-forward-distance" || name == "route-source" || name == "route-spf-priority" || name == "route-auto-excluded" || name == "route-srte-prefix-registered" || name == "route-srte-nbr-registered")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RouteInfo::RouteUpdateTime::RouteUpdateTime()
    :
    second{YType::uint32, "second"},
    nanosecond{YType::uint32, "nanosecond"}
{

    yang_name = "route-update-time"; yang_parent_name = "route-info"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RouteInfo::RouteUpdateTime::~RouteUpdateTime()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RouteInfo::RouteUpdateTime::has_data() const
{
    return second.is_set
	|| nanosecond.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RouteInfo::RouteUpdateTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(second.yfilter)
	|| ydk::is_set(nanosecond.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RouteInfo::RouteUpdateTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-update-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RouteInfo::RouteUpdateTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());
    if (nanosecond.is_set || is_set(nanosecond.yfilter)) leaf_name_data.push_back(nanosecond.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RouteInfo::RouteUpdateTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RouteInfo::RouteUpdateTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RouteInfo::RouteUpdateTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "second")
    {
        second = value;
        second.value_namespace = name_space;
        second.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanosecond")
    {
        nanosecond = value;
        nanosecond.value_namespace = name_space;
        nanosecond.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RouteInfo::RouteUpdateTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "second")
    {
        second.yfilter = yfilter;
    }
    if(value_path == "nanosecond")
    {
        nanosecond.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RouteInfo::RouteUpdateTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second" || name == "nanosecond")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RouteInfo::RouteFailTime::RouteFailTime()
    :
    second{YType::uint32, "second"},
    nanosecond{YType::uint32, "nanosecond"}
{

    yang_name = "route-fail-time"; yang_parent_name = "route-info"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RouteInfo::RouteFailTime::~RouteFailTime()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RouteInfo::RouteFailTime::has_data() const
{
    return second.is_set
	|| nanosecond.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RouteInfo::RouteFailTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(second.yfilter)
	|| ydk::is_set(nanosecond.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RouteInfo::RouteFailTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-fail-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RouteInfo::RouteFailTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());
    if (nanosecond.is_set || is_set(nanosecond.yfilter)) leaf_name_data.push_back(nanosecond.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RouteInfo::RouteFailTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RouteInfo::RouteFailTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RouteInfo::RouteFailTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "second")
    {
        second = value;
        second.value_namespace = name_space;
        second.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanosecond")
    {
        nanosecond = value;
        nanosecond.value_namespace = name_space;
        nanosecond.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RouteInfo::RouteFailTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "second")
    {
        second.yfilter = yfilter;
    }
    if(value_path == "nanosecond")
    {
        nanosecond.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RouteInfo::RouteFailTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second" || name == "nanosecond")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RoutePath::RoutePath()
    :
    route_interface_name{YType::str, "route-interface-name"},
    route_next_hop_address{YType::str, "route-next-hop-address"},
    route_source{YType::str, "route-source"},
    route_lsaid{YType::str, "route-lsaid"},
    route_path_is_mcast_intact{YType::boolean, "route-path-is-mcast-intact"},
    route_path_is_ucmp_path{YType::boolean, "route-path-is-ucmp-path"},
    route_metric{YType::uint32, "route-metric"},
    lsa_type{YType::uint8, "lsa-type"},
    area_id{YType::uint32, "area-id"},
    area_format{YType::boolean, "area-format"}
    	,
    sr_microloop_avoidance_path(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RoutePath::SrMicroloopAvoidancePath>())
{
    sr_microloop_avoidance_path->parent = this;

    yang_name = "route-path"; yang_parent_name = "route"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RoutePath::~RoutePath()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RoutePath::has_data() const
{
    return route_interface_name.is_set
	|| route_next_hop_address.is_set
	|| route_source.is_set
	|| route_lsaid.is_set
	|| route_path_is_mcast_intact.is_set
	|| route_path_is_ucmp_path.is_set
	|| route_metric.is_set
	|| lsa_type.is_set
	|| area_id.is_set
	|| area_format.is_set
	|| (sr_microloop_avoidance_path !=  nullptr && sr_microloop_avoidance_path->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RoutePath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_interface_name.yfilter)
	|| ydk::is_set(route_next_hop_address.yfilter)
	|| ydk::is_set(route_source.yfilter)
	|| ydk::is_set(route_lsaid.yfilter)
	|| ydk::is_set(route_path_is_mcast_intact.yfilter)
	|| ydk::is_set(route_path_is_ucmp_path.yfilter)
	|| ydk::is_set(route_metric.yfilter)
	|| ydk::is_set(lsa_type.yfilter)
	|| ydk::is_set(area_id.yfilter)
	|| ydk::is_set(area_format.yfilter)
	|| (sr_microloop_avoidance_path !=  nullptr && sr_microloop_avoidance_path->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RoutePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RoutePath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_interface_name.is_set || is_set(route_interface_name.yfilter)) leaf_name_data.push_back(route_interface_name.get_name_leafdata());
    if (route_next_hop_address.is_set || is_set(route_next_hop_address.yfilter)) leaf_name_data.push_back(route_next_hop_address.get_name_leafdata());
    if (route_source.is_set || is_set(route_source.yfilter)) leaf_name_data.push_back(route_source.get_name_leafdata());
    if (route_lsaid.is_set || is_set(route_lsaid.yfilter)) leaf_name_data.push_back(route_lsaid.get_name_leafdata());
    if (route_path_is_mcast_intact.is_set || is_set(route_path_is_mcast_intact.yfilter)) leaf_name_data.push_back(route_path_is_mcast_intact.get_name_leafdata());
    if (route_path_is_ucmp_path.is_set || is_set(route_path_is_ucmp_path.yfilter)) leaf_name_data.push_back(route_path_is_ucmp_path.get_name_leafdata());
    if (route_metric.is_set || is_set(route_metric.yfilter)) leaf_name_data.push_back(route_metric.get_name_leafdata());
    if (lsa_type.is_set || is_set(lsa_type.yfilter)) leaf_name_data.push_back(lsa_type.get_name_leafdata());
    if (area_id.is_set || is_set(area_id.yfilter)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (area_format.is_set || is_set(area_format.yfilter)) leaf_name_data.push_back(area_format.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RoutePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sr-microloop-avoidance-path")
    {
        if(sr_microloop_avoidance_path == nullptr)
        {
            sr_microloop_avoidance_path = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RoutePath::SrMicroloopAvoidancePath>();
        }
        return sr_microloop_avoidance_path;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RoutePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(sr_microloop_avoidance_path != nullptr)
    {
        children["sr-microloop-avoidance-path"] = sr_microloop_avoidance_path;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RoutePath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-interface-name")
    {
        route_interface_name = value;
        route_interface_name.value_namespace = name_space;
        route_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-next-hop-address")
    {
        route_next_hop_address = value;
        route_next_hop_address.value_namespace = name_space;
        route_next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-source")
    {
        route_source = value;
        route_source.value_namespace = name_space;
        route_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-lsaid")
    {
        route_lsaid = value;
        route_lsaid.value_namespace = name_space;
        route_lsaid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-path-is-mcast-intact")
    {
        route_path_is_mcast_intact = value;
        route_path_is_mcast_intact.value_namespace = name_space;
        route_path_is_mcast_intact.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-path-is-ucmp-path")
    {
        route_path_is_ucmp_path = value;
        route_path_is_ucmp_path.value_namespace = name_space;
        route_path_is_ucmp_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-metric")
    {
        route_metric = value;
        route_metric.value_namespace = name_space;
        route_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-type")
    {
        lsa_type = value;
        lsa_type.value_namespace = name_space;
        lsa_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-id")
    {
        area_id = value;
        area_id.value_namespace = name_space;
        area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-format")
    {
        area_format = value;
        area_format.value_namespace = name_space;
        area_format.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RoutePath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-interface-name")
    {
        route_interface_name.yfilter = yfilter;
    }
    if(value_path == "route-next-hop-address")
    {
        route_next_hop_address.yfilter = yfilter;
    }
    if(value_path == "route-source")
    {
        route_source.yfilter = yfilter;
    }
    if(value_path == "route-lsaid")
    {
        route_lsaid.yfilter = yfilter;
    }
    if(value_path == "route-path-is-mcast-intact")
    {
        route_path_is_mcast_intact.yfilter = yfilter;
    }
    if(value_path == "route-path-is-ucmp-path")
    {
        route_path_is_ucmp_path.yfilter = yfilter;
    }
    if(value_path == "route-metric")
    {
        route_metric.yfilter = yfilter;
    }
    if(value_path == "lsa-type")
    {
        lsa_type.yfilter = yfilter;
    }
    if(value_path == "area-id")
    {
        area_id.yfilter = yfilter;
    }
    if(value_path == "area-format")
    {
        area_format.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RoutePath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sr-microloop-avoidance-path" || name == "route-interface-name" || name == "route-next-hop-address" || name == "route-source" || name == "route-lsaid" || name == "route-path-is-mcast-intact" || name == "route-path-is-ucmp-path" || name == "route-metric" || name == "lsa-type" || name == "area-id" || name == "area-format")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RoutePath::SrMicroloopAvoidancePath::SrMicroloopAvoidancePath()
    :
    microloop_repair_list_size{YType::uint32, "microloop-repair-list-size"},
    microloop_tunnel_interface_name{YType::str, "microloop-tunnel-interface-name"},
    microloop_strict_spf{YType::boolean, "microloop-strict-spf"}
{

    yang_name = "sr-microloop-avoidance-path"; yang_parent_name = "route-path"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RoutePath::SrMicroloopAvoidancePath::~SrMicroloopAvoidancePath()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RoutePath::SrMicroloopAvoidancePath::has_data() const
{
    for (std::size_t index=0; index<microloop_repair.size(); index++)
    {
        if(microloop_repair[index]->has_data())
            return true;
    }
    return microloop_repair_list_size.is_set
	|| microloop_tunnel_interface_name.is_set
	|| microloop_strict_spf.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RoutePath::SrMicroloopAvoidancePath::has_operation() const
{
    for (std::size_t index=0; index<microloop_repair.size(); index++)
    {
        if(microloop_repair[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(microloop_repair_list_size.yfilter)
	|| ydk::is_set(microloop_tunnel_interface_name.yfilter)
	|| ydk::is_set(microloop_strict_spf.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RoutePath::SrMicroloopAvoidancePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-microloop-avoidance-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RoutePath::SrMicroloopAvoidancePath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (microloop_repair_list_size.is_set || is_set(microloop_repair_list_size.yfilter)) leaf_name_data.push_back(microloop_repair_list_size.get_name_leafdata());
    if (microloop_tunnel_interface_name.is_set || is_set(microloop_tunnel_interface_name.yfilter)) leaf_name_data.push_back(microloop_tunnel_interface_name.get_name_leafdata());
    if (microloop_strict_spf.is_set || is_set(microloop_strict_spf.yfilter)) leaf_name_data.push_back(microloop_strict_spf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RoutePath::SrMicroloopAvoidancePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "microloop-repair")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair>();
        c->parent = this;
        microloop_repair.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RoutePath::SrMicroloopAvoidancePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : microloop_repair)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RoutePath::SrMicroloopAvoidancePath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "microloop-repair-list-size")
    {
        microloop_repair_list_size = value;
        microloop_repair_list_size.value_namespace = name_space;
        microloop_repair_list_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "microloop-tunnel-interface-name")
    {
        microloop_tunnel_interface_name = value;
        microloop_tunnel_interface_name.value_namespace = name_space;
        microloop_tunnel_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "microloop-strict-spf")
    {
        microloop_strict_spf = value;
        microloop_strict_spf.value_namespace = name_space;
        microloop_strict_spf.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RoutePath::SrMicroloopAvoidancePath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "microloop-repair-list-size")
    {
        microloop_repair_list_size.yfilter = yfilter;
    }
    if(value_path == "microloop-tunnel-interface-name")
    {
        microloop_tunnel_interface_name.yfilter = yfilter;
    }
    if(value_path == "microloop-strict-spf")
    {
        microloop_strict_spf.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RoutePath::SrMicroloopAvoidancePath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "microloop-repair" || name == "microloop-repair-list-size" || name == "microloop-tunnel-interface-name" || name == "microloop-strict-spf")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::MicroloopRepair()
    :
    repair_element_id{YType::str, "repair-element-id"},
    repair_label{YType::uint32, "repair-label"},
    repair_element_type{YType::uint32, "repair-element-type"}
{

    yang_name = "microloop-repair"; yang_parent_name = "sr-microloop-avoidance-path"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::~MicroloopRepair()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::has_data() const
{
    return repair_element_id.is_set
	|| repair_label.is_set
	|| repair_element_type.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(repair_element_id.yfilter)
	|| ydk::is_set(repair_label.yfilter)
	|| ydk::is_set(repair_element_type.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "microloop-repair";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (repair_element_id.is_set || is_set(repair_element_id.yfilter)) leaf_name_data.push_back(repair_element_id.get_name_leafdata());
    if (repair_label.is_set || is_set(repair_label.yfilter)) leaf_name_data.push_back(repair_label.get_name_leafdata());
    if (repair_element_type.is_set || is_set(repair_element_type.yfilter)) leaf_name_data.push_back(repair_element_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "repair-element-id")
    {
        repair_element_id = value;
        repair_element_id.value_namespace = name_space;
        repair_element_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-label")
    {
        repair_label = value;
        repair_label.value_namespace = name_space;
        repair_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type = value;
        repair_element_type.value_namespace = name_space;
        repair_element_type.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "repair-element-id")
    {
        repair_element_id.yfilter = yfilter;
    }
    if(value_path == "repair-label")
    {
        repair_label.yfilter = yfilter;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "repair-element-id" || name == "repair-label" || name == "repair-element-type")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoutes()
{

    yang_name = "external-routes"; yang_parent_name = "route-information"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::~ExternalRoutes()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::has_data() const
{
    for (std::size_t index=0; index<external_route.size(); index++)
    {
        if(external_route[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::has_operation() const
{
    for (std::size_t index=0; index<external_route.size(); index++)
    {
        if(external_route[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "external-routes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "external-route")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute>();
        c->parent = this;
        external_route.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : external_route)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "external-route")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::ExternalRoute()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint32, "prefix-length"}
    	,
    route_information(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_>())
	,protocol_name(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::ProtocolName>())
	,route_extended_community(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteExtendedCommunity>())
{
    route_information->parent = this;
    protocol_name->parent = this;
    route_extended_community->parent = this;

    yang_name = "external-route"; yang_parent_name = "external-routes"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::~ExternalRoute()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::has_data() const
{
    return prefix.is_set
	|| prefix_length.is_set
	|| (route_information !=  nullptr && route_information->has_data())
	|| (protocol_name !=  nullptr && protocol_name->has_data())
	|| (route_extended_community !=  nullptr && route_extended_community->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| (route_information !=  nullptr && route_information->has_operation())
	|| (protocol_name !=  nullptr && protocol_name->has_operation())
	|| (route_extended_community !=  nullptr && route_extended_community->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "external-route";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-information")
    {
        if(route_information == nullptr)
        {
            route_information = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_>();
        }
        return route_information;
    }

    if(child_yang_name == "protocol-name")
    {
        if(protocol_name == nullptr)
        {
            protocol_name = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::ProtocolName>();
        }
        return protocol_name;
    }

    if(child_yang_name == "route-extended-community")
    {
        if(route_extended_community == nullptr)
        {
            route_extended_community = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteExtendedCommunity>();
        }
        return route_extended_community;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(route_information != nullptr)
    {
        children["route-information"] = route_information;
    }

    if(protocol_name != nullptr)
    {
        children["protocol-name"] = protocol_name;
    }

    if(route_extended_community != nullptr)
    {
        children["route-extended-community"] = route_extended_community;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-information" || name == "protocol-name" || name == "route-extended-community" || name == "prefix" || name == "prefix-length")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInformation_()
    :
    route_prefix{YType::str, "route-prefix"},
    route_prefix_length{YType::uint32, "route-prefix-length"},
    route_metric{YType::uint32, "route-metric"},
    route_type{YType::enumeration, "route-type"},
    route_connected{YType::boolean, "route-connected"}
    	,
    route_info(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo>())
{
    route_info->parent = this;

    yang_name = "route-information"; yang_parent_name = "external-route"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::~RouteInformation_()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::has_data() const
{
    for (std::size_t index=0; index<route_path.size(); index++)
    {
        if(route_path[index]->has_data())
            return true;
    }
    return route_prefix.is_set
	|| route_prefix_length.is_set
	|| route_metric.is_set
	|| route_type.is_set
	|| route_connected.is_set
	|| (route_info !=  nullptr && route_info->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::has_operation() const
{
    for (std::size_t index=0; index<route_path.size(); index++)
    {
        if(route_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(route_prefix.yfilter)
	|| ydk::is_set(route_prefix_length.yfilter)
	|| ydk::is_set(route_metric.yfilter)
	|| ydk::is_set(route_type.yfilter)
	|| ydk::is_set(route_connected.yfilter)
	|| (route_info !=  nullptr && route_info->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_prefix.is_set || is_set(route_prefix.yfilter)) leaf_name_data.push_back(route_prefix.get_name_leafdata());
    if (route_prefix_length.is_set || is_set(route_prefix_length.yfilter)) leaf_name_data.push_back(route_prefix_length.get_name_leafdata());
    if (route_metric.is_set || is_set(route_metric.yfilter)) leaf_name_data.push_back(route_metric.get_name_leafdata());
    if (route_type.is_set || is_set(route_type.yfilter)) leaf_name_data.push_back(route_type.get_name_leafdata());
    if (route_connected.is_set || is_set(route_connected.yfilter)) leaf_name_data.push_back(route_connected.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-info")
    {
        if(route_info == nullptr)
        {
            route_info = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo>();
        }
        return route_info;
    }

    if(child_yang_name == "route-path")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RoutePath>();
        c->parent = this;
        route_path.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(route_info != nullptr)
    {
        children["route-info"] = route_info;
    }

    count = 0;
    for (auto const & c : route_path)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-prefix")
    {
        route_prefix = value;
        route_prefix.value_namespace = name_space;
        route_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-prefix-length")
    {
        route_prefix_length = value;
        route_prefix_length.value_namespace = name_space;
        route_prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-metric")
    {
        route_metric = value;
        route_metric.value_namespace = name_space;
        route_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-type")
    {
        route_type = value;
        route_type.value_namespace = name_space;
        route_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-connected")
    {
        route_connected = value;
        route_connected.value_namespace = name_space;
        route_connected.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-prefix")
    {
        route_prefix.yfilter = yfilter;
    }
    if(value_path == "route-prefix-length")
    {
        route_prefix_length.yfilter = yfilter;
    }
    if(value_path == "route-metric")
    {
        route_metric.yfilter = yfilter;
    }
    if(value_path == "route-type")
    {
        route_type.yfilter = yfilter;
    }
    if(value_path == "route-connected")
    {
        route_connected.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-info" || name == "route-path" || name == "route-prefix" || name == "route-prefix-length" || name == "route-metric" || name == "route-type" || name == "route-connected")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo::RouteInfo()
    :
    route_area_id{YType::uint32, "route-area-id"},
    route_te_metric{YType::uint32, "route-te-metric"},
    route_rib_version{YType::uint32, "route-rib-version"},
    route_spf_version{YType::uint64, "route-spf-version"},
    route_forward_distance{YType::uint32, "route-forward-distance"},
    route_source{YType::uint16, "route-source"},
    route_spf_priority{YType::uint8, "route-spf-priority"},
    route_auto_excluded{YType::boolean, "route-auto-excluded"},
    route_srte_prefix_registered{YType::boolean, "route-srte-prefix-registered"},
    route_srte_nbr_registered{YType::uint16, "route-srte-nbr-registered"}
    	,
    route_update_time(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo::RouteUpdateTime>())
	,route_fail_time(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo::RouteFailTime>())
{
    route_update_time->parent = this;
    route_fail_time->parent = this;

    yang_name = "route-info"; yang_parent_name = "route-information"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo::~RouteInfo()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo::has_data() const
{
    return route_area_id.is_set
	|| route_te_metric.is_set
	|| route_rib_version.is_set
	|| route_spf_version.is_set
	|| route_forward_distance.is_set
	|| route_source.is_set
	|| route_spf_priority.is_set
	|| route_auto_excluded.is_set
	|| route_srte_prefix_registered.is_set
	|| route_srte_nbr_registered.is_set
	|| (route_update_time !=  nullptr && route_update_time->has_data())
	|| (route_fail_time !=  nullptr && route_fail_time->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_area_id.yfilter)
	|| ydk::is_set(route_te_metric.yfilter)
	|| ydk::is_set(route_rib_version.yfilter)
	|| ydk::is_set(route_spf_version.yfilter)
	|| ydk::is_set(route_forward_distance.yfilter)
	|| ydk::is_set(route_source.yfilter)
	|| ydk::is_set(route_spf_priority.yfilter)
	|| ydk::is_set(route_auto_excluded.yfilter)
	|| ydk::is_set(route_srte_prefix_registered.yfilter)
	|| ydk::is_set(route_srte_nbr_registered.yfilter)
	|| (route_update_time !=  nullptr && route_update_time->has_operation())
	|| (route_fail_time !=  nullptr && route_fail_time->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_area_id.is_set || is_set(route_area_id.yfilter)) leaf_name_data.push_back(route_area_id.get_name_leafdata());
    if (route_te_metric.is_set || is_set(route_te_metric.yfilter)) leaf_name_data.push_back(route_te_metric.get_name_leafdata());
    if (route_rib_version.is_set || is_set(route_rib_version.yfilter)) leaf_name_data.push_back(route_rib_version.get_name_leafdata());
    if (route_spf_version.is_set || is_set(route_spf_version.yfilter)) leaf_name_data.push_back(route_spf_version.get_name_leafdata());
    if (route_forward_distance.is_set || is_set(route_forward_distance.yfilter)) leaf_name_data.push_back(route_forward_distance.get_name_leafdata());
    if (route_source.is_set || is_set(route_source.yfilter)) leaf_name_data.push_back(route_source.get_name_leafdata());
    if (route_spf_priority.is_set || is_set(route_spf_priority.yfilter)) leaf_name_data.push_back(route_spf_priority.get_name_leafdata());
    if (route_auto_excluded.is_set || is_set(route_auto_excluded.yfilter)) leaf_name_data.push_back(route_auto_excluded.get_name_leafdata());
    if (route_srte_prefix_registered.is_set || is_set(route_srte_prefix_registered.yfilter)) leaf_name_data.push_back(route_srte_prefix_registered.get_name_leafdata());
    if (route_srte_nbr_registered.is_set || is_set(route_srte_nbr_registered.yfilter)) leaf_name_data.push_back(route_srte_nbr_registered.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-update-time")
    {
        if(route_update_time == nullptr)
        {
            route_update_time = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo::RouteUpdateTime>();
        }
        return route_update_time;
    }

    if(child_yang_name == "route-fail-time")
    {
        if(route_fail_time == nullptr)
        {
            route_fail_time = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo::RouteFailTime>();
        }
        return route_fail_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(route_update_time != nullptr)
    {
        children["route-update-time"] = route_update_time;
    }

    if(route_fail_time != nullptr)
    {
        children["route-fail-time"] = route_fail_time;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-area-id")
    {
        route_area_id = value;
        route_area_id.value_namespace = name_space;
        route_area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-te-metric")
    {
        route_te_metric = value;
        route_te_metric.value_namespace = name_space;
        route_te_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-rib-version")
    {
        route_rib_version = value;
        route_rib_version.value_namespace = name_space;
        route_rib_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-spf-version")
    {
        route_spf_version = value;
        route_spf_version.value_namespace = name_space;
        route_spf_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-forward-distance")
    {
        route_forward_distance = value;
        route_forward_distance.value_namespace = name_space;
        route_forward_distance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-source")
    {
        route_source = value;
        route_source.value_namespace = name_space;
        route_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-spf-priority")
    {
        route_spf_priority = value;
        route_spf_priority.value_namespace = name_space;
        route_spf_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-auto-excluded")
    {
        route_auto_excluded = value;
        route_auto_excluded.value_namespace = name_space;
        route_auto_excluded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-srte-prefix-registered")
    {
        route_srte_prefix_registered = value;
        route_srte_prefix_registered.value_namespace = name_space;
        route_srte_prefix_registered.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-srte-nbr-registered")
    {
        route_srte_nbr_registered = value;
        route_srte_nbr_registered.value_namespace = name_space;
        route_srte_nbr_registered.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-area-id")
    {
        route_area_id.yfilter = yfilter;
    }
    if(value_path == "route-te-metric")
    {
        route_te_metric.yfilter = yfilter;
    }
    if(value_path == "route-rib-version")
    {
        route_rib_version.yfilter = yfilter;
    }
    if(value_path == "route-spf-version")
    {
        route_spf_version.yfilter = yfilter;
    }
    if(value_path == "route-forward-distance")
    {
        route_forward_distance.yfilter = yfilter;
    }
    if(value_path == "route-source")
    {
        route_source.yfilter = yfilter;
    }
    if(value_path == "route-spf-priority")
    {
        route_spf_priority.yfilter = yfilter;
    }
    if(value_path == "route-auto-excluded")
    {
        route_auto_excluded.yfilter = yfilter;
    }
    if(value_path == "route-srte-prefix-registered")
    {
        route_srte_prefix_registered.yfilter = yfilter;
    }
    if(value_path == "route-srte-nbr-registered")
    {
        route_srte_nbr_registered.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-update-time" || name == "route-fail-time" || name == "route-area-id" || name == "route-te-metric" || name == "route-rib-version" || name == "route-spf-version" || name == "route-forward-distance" || name == "route-source" || name == "route-spf-priority" || name == "route-auto-excluded" || name == "route-srte-prefix-registered" || name == "route-srte-nbr-registered")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo::RouteUpdateTime::RouteUpdateTime()
    :
    second{YType::uint32, "second"},
    nanosecond{YType::uint32, "nanosecond"}
{

    yang_name = "route-update-time"; yang_parent_name = "route-info"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo::RouteUpdateTime::~RouteUpdateTime()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo::RouteUpdateTime::has_data() const
{
    return second.is_set
	|| nanosecond.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo::RouteUpdateTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(second.yfilter)
	|| ydk::is_set(nanosecond.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo::RouteUpdateTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-update-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo::RouteUpdateTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());
    if (nanosecond.is_set || is_set(nanosecond.yfilter)) leaf_name_data.push_back(nanosecond.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo::RouteUpdateTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo::RouteUpdateTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo::RouteUpdateTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "second")
    {
        second = value;
        second.value_namespace = name_space;
        second.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanosecond")
    {
        nanosecond = value;
        nanosecond.value_namespace = name_space;
        nanosecond.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo::RouteUpdateTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "second")
    {
        second.yfilter = yfilter;
    }
    if(value_path == "nanosecond")
    {
        nanosecond.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo::RouteUpdateTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second" || name == "nanosecond")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo::RouteFailTime::RouteFailTime()
    :
    second{YType::uint32, "second"},
    nanosecond{YType::uint32, "nanosecond"}
{

    yang_name = "route-fail-time"; yang_parent_name = "route-info"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo::RouteFailTime::~RouteFailTime()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo::RouteFailTime::has_data() const
{
    return second.is_set
	|| nanosecond.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo::RouteFailTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(second.yfilter)
	|| ydk::is_set(nanosecond.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo::RouteFailTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-fail-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo::RouteFailTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());
    if (nanosecond.is_set || is_set(nanosecond.yfilter)) leaf_name_data.push_back(nanosecond.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo::RouteFailTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo::RouteFailTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo::RouteFailTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "second")
    {
        second = value;
        second.value_namespace = name_space;
        second.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanosecond")
    {
        nanosecond = value;
        nanosecond.value_namespace = name_space;
        nanosecond.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo::RouteFailTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "second")
    {
        second.yfilter = yfilter;
    }
    if(value_path == "nanosecond")
    {
        nanosecond.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo::RouteFailTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second" || name == "nanosecond")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RoutePath::RoutePath()
    :
    route_interface_name{YType::str, "route-interface-name"},
    route_next_hop_address{YType::str, "route-next-hop-address"},
    route_source{YType::str, "route-source"},
    route_lsaid{YType::str, "route-lsaid"},
    route_path_is_mcast_intact{YType::boolean, "route-path-is-mcast-intact"},
    route_path_is_ucmp_path{YType::boolean, "route-path-is-ucmp-path"},
    route_metric{YType::uint32, "route-metric"},
    lsa_type{YType::uint8, "lsa-type"},
    area_id{YType::uint32, "area-id"},
    area_format{YType::boolean, "area-format"}
    	,
    sr_microloop_avoidance_path(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RoutePath::SrMicroloopAvoidancePath>())
{
    sr_microloop_avoidance_path->parent = this;

    yang_name = "route-path"; yang_parent_name = "route-information"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RoutePath::~RoutePath()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RoutePath::has_data() const
{
    return route_interface_name.is_set
	|| route_next_hop_address.is_set
	|| route_source.is_set
	|| route_lsaid.is_set
	|| route_path_is_mcast_intact.is_set
	|| route_path_is_ucmp_path.is_set
	|| route_metric.is_set
	|| lsa_type.is_set
	|| area_id.is_set
	|| area_format.is_set
	|| (sr_microloop_avoidance_path !=  nullptr && sr_microloop_avoidance_path->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RoutePath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_interface_name.yfilter)
	|| ydk::is_set(route_next_hop_address.yfilter)
	|| ydk::is_set(route_source.yfilter)
	|| ydk::is_set(route_lsaid.yfilter)
	|| ydk::is_set(route_path_is_mcast_intact.yfilter)
	|| ydk::is_set(route_path_is_ucmp_path.yfilter)
	|| ydk::is_set(route_metric.yfilter)
	|| ydk::is_set(lsa_type.yfilter)
	|| ydk::is_set(area_id.yfilter)
	|| ydk::is_set(area_format.yfilter)
	|| (sr_microloop_avoidance_path !=  nullptr && sr_microloop_avoidance_path->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RoutePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RoutePath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_interface_name.is_set || is_set(route_interface_name.yfilter)) leaf_name_data.push_back(route_interface_name.get_name_leafdata());
    if (route_next_hop_address.is_set || is_set(route_next_hop_address.yfilter)) leaf_name_data.push_back(route_next_hop_address.get_name_leafdata());
    if (route_source.is_set || is_set(route_source.yfilter)) leaf_name_data.push_back(route_source.get_name_leafdata());
    if (route_lsaid.is_set || is_set(route_lsaid.yfilter)) leaf_name_data.push_back(route_lsaid.get_name_leafdata());
    if (route_path_is_mcast_intact.is_set || is_set(route_path_is_mcast_intact.yfilter)) leaf_name_data.push_back(route_path_is_mcast_intact.get_name_leafdata());
    if (route_path_is_ucmp_path.is_set || is_set(route_path_is_ucmp_path.yfilter)) leaf_name_data.push_back(route_path_is_ucmp_path.get_name_leafdata());
    if (route_metric.is_set || is_set(route_metric.yfilter)) leaf_name_data.push_back(route_metric.get_name_leafdata());
    if (lsa_type.is_set || is_set(lsa_type.yfilter)) leaf_name_data.push_back(lsa_type.get_name_leafdata());
    if (area_id.is_set || is_set(area_id.yfilter)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (area_format.is_set || is_set(area_format.yfilter)) leaf_name_data.push_back(area_format.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RoutePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sr-microloop-avoidance-path")
    {
        if(sr_microloop_avoidance_path == nullptr)
        {
            sr_microloop_avoidance_path = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RoutePath::SrMicroloopAvoidancePath>();
        }
        return sr_microloop_avoidance_path;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RoutePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(sr_microloop_avoidance_path != nullptr)
    {
        children["sr-microloop-avoidance-path"] = sr_microloop_avoidance_path;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RoutePath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-interface-name")
    {
        route_interface_name = value;
        route_interface_name.value_namespace = name_space;
        route_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-next-hop-address")
    {
        route_next_hop_address = value;
        route_next_hop_address.value_namespace = name_space;
        route_next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-source")
    {
        route_source = value;
        route_source.value_namespace = name_space;
        route_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-lsaid")
    {
        route_lsaid = value;
        route_lsaid.value_namespace = name_space;
        route_lsaid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-path-is-mcast-intact")
    {
        route_path_is_mcast_intact = value;
        route_path_is_mcast_intact.value_namespace = name_space;
        route_path_is_mcast_intact.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-path-is-ucmp-path")
    {
        route_path_is_ucmp_path = value;
        route_path_is_ucmp_path.value_namespace = name_space;
        route_path_is_ucmp_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-metric")
    {
        route_metric = value;
        route_metric.value_namespace = name_space;
        route_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-type")
    {
        lsa_type = value;
        lsa_type.value_namespace = name_space;
        lsa_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-id")
    {
        area_id = value;
        area_id.value_namespace = name_space;
        area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-format")
    {
        area_format = value;
        area_format.value_namespace = name_space;
        area_format.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RoutePath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-interface-name")
    {
        route_interface_name.yfilter = yfilter;
    }
    if(value_path == "route-next-hop-address")
    {
        route_next_hop_address.yfilter = yfilter;
    }
    if(value_path == "route-source")
    {
        route_source.yfilter = yfilter;
    }
    if(value_path == "route-lsaid")
    {
        route_lsaid.yfilter = yfilter;
    }
    if(value_path == "route-path-is-mcast-intact")
    {
        route_path_is_mcast_intact.yfilter = yfilter;
    }
    if(value_path == "route-path-is-ucmp-path")
    {
        route_path_is_ucmp_path.yfilter = yfilter;
    }
    if(value_path == "route-metric")
    {
        route_metric.yfilter = yfilter;
    }
    if(value_path == "lsa-type")
    {
        lsa_type.yfilter = yfilter;
    }
    if(value_path == "area-id")
    {
        area_id.yfilter = yfilter;
    }
    if(value_path == "area-format")
    {
        area_format.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RoutePath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sr-microloop-avoidance-path" || name == "route-interface-name" || name == "route-next-hop-address" || name == "route-source" || name == "route-lsaid" || name == "route-path-is-mcast-intact" || name == "route-path-is-ucmp-path" || name == "route-metric" || name == "lsa-type" || name == "area-id" || name == "area-format")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RoutePath::SrMicroloopAvoidancePath::SrMicroloopAvoidancePath()
    :
    microloop_repair_list_size{YType::uint32, "microloop-repair-list-size"},
    microloop_tunnel_interface_name{YType::str, "microloop-tunnel-interface-name"},
    microloop_strict_spf{YType::boolean, "microloop-strict-spf"}
{

    yang_name = "sr-microloop-avoidance-path"; yang_parent_name = "route-path"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RoutePath::SrMicroloopAvoidancePath::~SrMicroloopAvoidancePath()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RoutePath::SrMicroloopAvoidancePath::has_data() const
{
    for (std::size_t index=0; index<microloop_repair.size(); index++)
    {
        if(microloop_repair[index]->has_data())
            return true;
    }
    return microloop_repair_list_size.is_set
	|| microloop_tunnel_interface_name.is_set
	|| microloop_strict_spf.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RoutePath::SrMicroloopAvoidancePath::has_operation() const
{
    for (std::size_t index=0; index<microloop_repair.size(); index++)
    {
        if(microloop_repair[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(microloop_repair_list_size.yfilter)
	|| ydk::is_set(microloop_tunnel_interface_name.yfilter)
	|| ydk::is_set(microloop_strict_spf.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RoutePath::SrMicroloopAvoidancePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-microloop-avoidance-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RoutePath::SrMicroloopAvoidancePath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (microloop_repair_list_size.is_set || is_set(microloop_repair_list_size.yfilter)) leaf_name_data.push_back(microloop_repair_list_size.get_name_leafdata());
    if (microloop_tunnel_interface_name.is_set || is_set(microloop_tunnel_interface_name.yfilter)) leaf_name_data.push_back(microloop_tunnel_interface_name.get_name_leafdata());
    if (microloop_strict_spf.is_set || is_set(microloop_strict_spf.yfilter)) leaf_name_data.push_back(microloop_strict_spf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RoutePath::SrMicroloopAvoidancePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "microloop-repair")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair>();
        c->parent = this;
        microloop_repair.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RoutePath::SrMicroloopAvoidancePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : microloop_repair)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RoutePath::SrMicroloopAvoidancePath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "microloop-repair-list-size")
    {
        microloop_repair_list_size = value;
        microloop_repair_list_size.value_namespace = name_space;
        microloop_repair_list_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "microloop-tunnel-interface-name")
    {
        microloop_tunnel_interface_name = value;
        microloop_tunnel_interface_name.value_namespace = name_space;
        microloop_tunnel_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "microloop-strict-spf")
    {
        microloop_strict_spf = value;
        microloop_strict_spf.value_namespace = name_space;
        microloop_strict_spf.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RoutePath::SrMicroloopAvoidancePath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "microloop-repair-list-size")
    {
        microloop_repair_list_size.yfilter = yfilter;
    }
    if(value_path == "microloop-tunnel-interface-name")
    {
        microloop_tunnel_interface_name.yfilter = yfilter;
    }
    if(value_path == "microloop-strict-spf")
    {
        microloop_strict_spf.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RoutePath::SrMicroloopAvoidancePath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "microloop-repair" || name == "microloop-repair-list-size" || name == "microloop-tunnel-interface-name" || name == "microloop-strict-spf")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::MicroloopRepair()
    :
    repair_element_id{YType::str, "repair-element-id"},
    repair_label{YType::uint32, "repair-label"},
    repair_element_type{YType::uint32, "repair-element-type"}
{

    yang_name = "microloop-repair"; yang_parent_name = "sr-microloop-avoidance-path"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::~MicroloopRepair()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::has_data() const
{
    return repair_element_id.is_set
	|| repair_label.is_set
	|| repair_element_type.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(repair_element_id.yfilter)
	|| ydk::is_set(repair_label.yfilter)
	|| ydk::is_set(repair_element_type.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "microloop-repair";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (repair_element_id.is_set || is_set(repair_element_id.yfilter)) leaf_name_data.push_back(repair_element_id.get_name_leafdata());
    if (repair_label.is_set || is_set(repair_label.yfilter)) leaf_name_data.push_back(repair_label.get_name_leafdata());
    if (repair_element_type.is_set || is_set(repair_element_type.yfilter)) leaf_name_data.push_back(repair_element_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "repair-element-id")
    {
        repair_element_id = value;
        repair_element_id.value_namespace = name_space;
        repair_element_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-label")
    {
        repair_label = value;
        repair_label.value_namespace = name_space;
        repair_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type = value;
        repair_element_type.value_namespace = name_space;
        repair_element_type.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "repair-element-id")
    {
        repair_element_id.yfilter = yfilter;
    }
    if(value_path == "repair-label")
    {
        repair_label.yfilter = yfilter;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "repair-element-id" || name == "repair-label" || name == "repair-element-type")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::ProtocolName::ProtocolName()
    :
    protocol_type{YType::enumeration, "protocol-type"},
    isis_instance_id{YType::str, "isis-instance-id"},
    ospf_process_id{YType::str, "ospf-process-id"},
    bgp_as_number{YType::str, "bgp-as-number"},
    eigrp_as_number{YType::str, "eigrp-as-number"},
    connected_instance{YType::str, "connected-instance"}
{

    yang_name = "protocol-name"; yang_parent_name = "external-route"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::ProtocolName::~ProtocolName()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::ProtocolName::has_data() const
{
    return protocol_type.is_set
	|| isis_instance_id.is_set
	|| ospf_process_id.is_set
	|| bgp_as_number.is_set
	|| eigrp_as_number.is_set
	|| connected_instance.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::ProtocolName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(protocol_type.yfilter)
	|| ydk::is_set(isis_instance_id.yfilter)
	|| ydk::is_set(ospf_process_id.yfilter)
	|| ydk::is_set(bgp_as_number.yfilter)
	|| ydk::is_set(eigrp_as_number.yfilter)
	|| ydk::is_set(connected_instance.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::ProtocolName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol-name";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::ProtocolName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocol_type.is_set || is_set(protocol_type.yfilter)) leaf_name_data.push_back(protocol_type.get_name_leafdata());
    if (isis_instance_id.is_set || is_set(isis_instance_id.yfilter)) leaf_name_data.push_back(isis_instance_id.get_name_leafdata());
    if (ospf_process_id.is_set || is_set(ospf_process_id.yfilter)) leaf_name_data.push_back(ospf_process_id.get_name_leafdata());
    if (bgp_as_number.is_set || is_set(bgp_as_number.yfilter)) leaf_name_data.push_back(bgp_as_number.get_name_leafdata());
    if (eigrp_as_number.is_set || is_set(eigrp_as_number.yfilter)) leaf_name_data.push_back(eigrp_as_number.get_name_leafdata());
    if (connected_instance.is_set || is_set(connected_instance.yfilter)) leaf_name_data.push_back(connected_instance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::ProtocolName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::ProtocolName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::ProtocolName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protocol-type")
    {
        protocol_type = value;
        protocol_type.value_namespace = name_space;
        protocol_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isis-instance-id")
    {
        isis_instance_id = value;
        isis_instance_id.value_namespace = name_space;
        isis_instance_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospf-process-id")
    {
        ospf_process_id = value;
        ospf_process_id.value_namespace = name_space;
        ospf_process_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bgp-as-number")
    {
        bgp_as_number = value;
        bgp_as_number.value_namespace = name_space;
        bgp_as_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eigrp-as-number")
    {
        eigrp_as_number = value;
        eigrp_as_number.value_namespace = name_space;
        eigrp_as_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connected-instance")
    {
        connected_instance = value;
        connected_instance.value_namespace = name_space;
        connected_instance.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::ProtocolName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocol-type")
    {
        protocol_type.yfilter = yfilter;
    }
    if(value_path == "isis-instance-id")
    {
        isis_instance_id.yfilter = yfilter;
    }
    if(value_path == "ospf-process-id")
    {
        ospf_process_id.yfilter = yfilter;
    }
    if(value_path == "bgp-as-number")
    {
        bgp_as_number.yfilter = yfilter;
    }
    if(value_path == "eigrp-as-number")
    {
        eigrp_as_number.yfilter = yfilter;
    }
    if(value_path == "connected-instance")
    {
        connected_instance.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::ProtocolName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol-type" || name == "isis-instance-id" || name == "ospf-process-id" || name == "bgp-as-number" || name == "eigrp-as-number" || name == "connected-instance")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteExtendedCommunity::RouteExtendedCommunity()
    :
    extended_community_domain_id_value{YType::str, "extended-community-domain-id-value"},
    extended_communityl_domain_id_type{YType::uint16, "extended-communityl-domain-id-type"},
    extended_community_area_id{YType::uint32, "extended-community-area-id"},
    extended_community_router_id{YType::str, "extended-community-router-id"},
    extended_community_route_type{YType::uint8, "extended-community-route-type"},
    extended_community_options{YType::uint8, "extended-community-options"}
{

    yang_name = "route-extended-community"; yang_parent_name = "external-route"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteExtendedCommunity::~RouteExtendedCommunity()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteExtendedCommunity::has_data() const
{
    return extended_community_domain_id_value.is_set
	|| extended_communityl_domain_id_type.is_set
	|| extended_community_area_id.is_set
	|| extended_community_router_id.is_set
	|| extended_community_route_type.is_set
	|| extended_community_options.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteExtendedCommunity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(extended_community_domain_id_value.yfilter)
	|| ydk::is_set(extended_communityl_domain_id_type.yfilter)
	|| ydk::is_set(extended_community_area_id.yfilter)
	|| ydk::is_set(extended_community_router_id.yfilter)
	|| ydk::is_set(extended_community_route_type.yfilter)
	|| ydk::is_set(extended_community_options.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteExtendedCommunity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-extended-community";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteExtendedCommunity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (extended_community_domain_id_value.is_set || is_set(extended_community_domain_id_value.yfilter)) leaf_name_data.push_back(extended_community_domain_id_value.get_name_leafdata());
    if (extended_communityl_domain_id_type.is_set || is_set(extended_communityl_domain_id_type.yfilter)) leaf_name_data.push_back(extended_communityl_domain_id_type.get_name_leafdata());
    if (extended_community_area_id.is_set || is_set(extended_community_area_id.yfilter)) leaf_name_data.push_back(extended_community_area_id.get_name_leafdata());
    if (extended_community_router_id.is_set || is_set(extended_community_router_id.yfilter)) leaf_name_data.push_back(extended_community_router_id.get_name_leafdata());
    if (extended_community_route_type.is_set || is_set(extended_community_route_type.yfilter)) leaf_name_data.push_back(extended_community_route_type.get_name_leafdata());
    if (extended_community_options.is_set || is_set(extended_community_options.yfilter)) leaf_name_data.push_back(extended_community_options.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteExtendedCommunity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteExtendedCommunity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteExtendedCommunity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "extended-community-domain-id-value")
    {
        extended_community_domain_id_value = value;
        extended_community_domain_id_value.value_namespace = name_space;
        extended_community_domain_id_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extended-communityl-domain-id-type")
    {
        extended_communityl_domain_id_type = value;
        extended_communityl_domain_id_type.value_namespace = name_space;
        extended_communityl_domain_id_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extended-community-area-id")
    {
        extended_community_area_id = value;
        extended_community_area_id.value_namespace = name_space;
        extended_community_area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extended-community-router-id")
    {
        extended_community_router_id = value;
        extended_community_router_id.value_namespace = name_space;
        extended_community_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extended-community-route-type")
    {
        extended_community_route_type = value;
        extended_community_route_type.value_namespace = name_space;
        extended_community_route_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extended-community-options")
    {
        extended_community_options = value;
        extended_community_options.value_namespace = name_space;
        extended_community_options.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteExtendedCommunity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "extended-community-domain-id-value")
    {
        extended_community_domain_id_value.yfilter = yfilter;
    }
    if(value_path == "extended-communityl-domain-id-type")
    {
        extended_communityl_domain_id_type.yfilter = yfilter;
    }
    if(value_path == "extended-community-area-id")
    {
        extended_community_area_id.yfilter = yfilter;
    }
    if(value_path == "extended-community-router-id")
    {
        extended_community_router_id.yfilter = yfilter;
    }
    if(value_path == "extended-community-route-type")
    {
        extended_community_route_type.yfilter = yfilter;
    }
    if(value_path == "extended-community-options")
    {
        extended_community_options.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteExtendedCommunity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "extended-community-domain-id-value" || name == "extended-communityl-domain-id-type" || name == "extended-community-area-id" || name == "extended-community-router-id" || name == "extended-community-route-type" || name == "extended-community-options")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::InterfaceInformation::InterfaceInformation()
    :
    virtual_links(std::make_shared<Ospf::Processes::Process::DefaultVrf::InterfaceInformation::VirtualLinks>())
	,interface_briefs(std::make_shared<Ospf::Processes::Process::DefaultVrf::InterfaceInformation::InterfaceBriefs>())
	,interfaces(std::make_shared<Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces>())
{
    virtual_links->parent = this;
    interface_briefs->parent = this;
    interfaces->parent = this;

    yang_name = "interface-information"; yang_parent_name = "default-vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::InterfaceInformation::~InterfaceInformation()
{
}

bool Ospf::Processes::Process::DefaultVrf::InterfaceInformation::has_data() const
{
    return (virtual_links !=  nullptr && virtual_links->has_data())
	|| (interface_briefs !=  nullptr && interface_briefs->has_data())
	|| (interfaces !=  nullptr && interfaces->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::InterfaceInformation::has_operation() const
{
    return is_set(yfilter)
	|| (virtual_links !=  nullptr && virtual_links->has_operation())
	|| (interface_briefs !=  nullptr && interface_briefs->has_operation())
	|| (interfaces !=  nullptr && interfaces->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::InterfaceInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::InterfaceInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::InterfaceInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "virtual-links")
    {
        if(virtual_links == nullptr)
        {
            virtual_links = std::make_shared<Ospf::Processes::Process::DefaultVrf::InterfaceInformation::VirtualLinks>();
        }
        return virtual_links;
    }

    if(child_yang_name == "interface-briefs")
    {
        if(interface_briefs == nullptr)
        {
            interface_briefs = std::make_shared<Ospf::Processes::Process::DefaultVrf::InterfaceInformation::InterfaceBriefs>();
        }
        return interface_briefs;
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces == nullptr)
        {
            interfaces = std::make_shared<Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces>();
        }
        return interfaces;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::InterfaceInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(virtual_links != nullptr)
    {
        children["virtual-links"] = virtual_links;
    }

    if(interface_briefs != nullptr)
    {
        children["interface-briefs"] = interface_briefs;
    }

    if(interfaces != nullptr)
    {
        children["interfaces"] = interfaces;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::InterfaceInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::DefaultVrf::InterfaceInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::DefaultVrf::InterfaceInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "virtual-links" || name == "interface-briefs" || name == "interfaces")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::InterfaceInformation::VirtualLinks::VirtualLinks()
{

    yang_name = "virtual-links"; yang_parent_name = "interface-information"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::InterfaceInformation::VirtualLinks::~VirtualLinks()
{
}

bool Ospf::Processes::Process::DefaultVrf::InterfaceInformation::VirtualLinks::has_data() const
{
    for (std::size_t index=0; index<virtual_link.size(); index++)
    {
        if(virtual_link[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::DefaultVrf::InterfaceInformation::VirtualLinks::has_operation() const
{
    for (std::size_t index=0; index<virtual_link.size(); index++)
    {
        if(virtual_link[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::InterfaceInformation::VirtualLinks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "virtual-links";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::InterfaceInformation::VirtualLinks::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::InterfaceInformation::VirtualLinks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "virtual-link")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::InterfaceInformation::VirtualLinks::VirtualLink>();
        c->parent = this;
        virtual_link.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::InterfaceInformation::VirtualLinks::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : virtual_link)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::InterfaceInformation::VirtualLinks::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::DefaultVrf::InterfaceInformation::VirtualLinks::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::DefaultVrf::InterfaceInformation::VirtualLinks::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "virtual-link")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::InterfaceInformation::VirtualLinks::VirtualLink::VirtualLink()
    :
    virtual_link_name{YType::str, "virtual-link-name"},
    virtual_link_name_xr{YType::str, "virtual-link-name-xr"},
    virtual_link_neighbor_id{YType::str, "virtual-link-neighbor-id"},
    virtual_link_state{YType::enumeration, "virtual-link-state"},
    virtual_link_demand_circuit{YType::boolean, "virtual-link-demand-circuit"},
    virtual_link_dc_bitless_lsa{YType::uint32, "virtual-link-dc-bitless-lsa"},
    transit_area{YType::str, "transit-area"},
    virtual_link_interface_name{YType::str, "virtual-link-interface-name"},
    virtual_link_cost{YType::uint16, "virtual-link-cost"},
    virual_link_transmission_delay{YType::uint16, "virual-link-transmission-delay"},
    virtual_link_hello_interval{YType::uint32, "virtual-link-hello-interval"},
    virtual_link_hello_interval_ms{YType::uint32, "virtual-link-hello-interval-ms"},
    virtual_link_dead_interval{YType::uint32, "virtual-link-dead-interval"},
    virtual_link_wait_interval{YType::uint32, "virtual-link-wait-interval"},
    virtaul_link_retransmission_interval{YType::uint32, "virtaul-link-retransmission-interval"},
    virtual_link_next_hello{YType::uint32, "virtual-link-next-hello"},
    virtual_link_next_hello_ms{YType::uint32, "virtual-link-next-hello-ms"},
    virtual_link_passive{YType::boolean, "virtual-link-passive"},
    virtual_link_authentication_type{YType::enumeration, "virtual-link-authentication-type"},
    virtual_link_youngest_md_key{YType::boolean, "virtual-link-youngest-md-key"},
    virtual_link_youngest_md_key_id{YType::uint16, "virtual-link-youngest-md-key-id"},
    virtual_link_old_md_key_count{YType::uint32, "virtual-link-old-md-key-count"},
    virtual_link_keychain_id{YType::uint64, "virtual-link-keychain-id"},
    virtual_link_nsf_enabled{YType::boolean, "virtual-link-nsf-enabled"},
    virtual_link_nsf{YType::boolean, "virtual-link-nsf"},
    virtual_link_last_nsf{YType::uint32, "virtual-link-last-nsf"}
    	,
    virtual_link_neighbor(std::make_shared<Ospf::Processes::Process::DefaultVrf::InterfaceInformation::VirtualLinks::VirtualLink::VirtualLinkNeighbor>())
{
    virtual_link_neighbor->parent = this;

    yang_name = "virtual-link"; yang_parent_name = "virtual-links"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::InterfaceInformation::VirtualLinks::VirtualLink::~VirtualLink()
{
}

bool Ospf::Processes::Process::DefaultVrf::InterfaceInformation::VirtualLinks::VirtualLink::has_data() const
{
    for (std::size_t index=0; index<virtual_link_md_key.size(); index++)
    {
        if(virtual_link_md_key[index]->has_data())
            return true;
    }
    return virtual_link_name.is_set
	|| virtual_link_name_xr.is_set
	|| virtual_link_neighbor_id.is_set
	|| virtual_link_state.is_set
	|| virtual_link_demand_circuit.is_set
	|| virtual_link_dc_bitless_lsa.is_set
	|| transit_area.is_set
	|| virtual_link_interface_name.is_set
	|| virtual_link_cost.is_set
	|| virual_link_transmission_delay.is_set
	|| virtual_link_hello_interval.is_set
	|| virtual_link_hello_interval_ms.is_set
	|| virtual_link_dead_interval.is_set
	|| virtual_link_wait_interval.is_set
	|| virtaul_link_retransmission_interval.is_set
	|| virtual_link_next_hello.is_set
	|| virtual_link_next_hello_ms.is_set
	|| virtual_link_passive.is_set
	|| virtual_link_authentication_type.is_set
	|| virtual_link_youngest_md_key.is_set
	|| virtual_link_youngest_md_key_id.is_set
	|| virtual_link_old_md_key_count.is_set
	|| virtual_link_keychain_id.is_set
	|| virtual_link_nsf_enabled.is_set
	|| virtual_link_nsf.is_set
	|| virtual_link_last_nsf.is_set
	|| (virtual_link_neighbor !=  nullptr && virtual_link_neighbor->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::InterfaceInformation::VirtualLinks::VirtualLink::has_operation() const
{
    for (std::size_t index=0; index<virtual_link_md_key.size(); index++)
    {
        if(virtual_link_md_key[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(virtual_link_name.yfilter)
	|| ydk::is_set(virtual_link_name_xr.yfilter)
	|| ydk::is_set(virtual_link_neighbor_id.yfilter)
	|| ydk::is_set(virtual_link_state.yfilter)
	|| ydk::is_set(virtual_link_demand_circuit.yfilter)
	|| ydk::is_set(virtual_link_dc_bitless_lsa.yfilter)
	|| ydk::is_set(transit_area.yfilter)
	|| ydk::is_set(virtual_link_interface_name.yfilter)
	|| ydk::is_set(virtual_link_cost.yfilter)
	|| ydk::is_set(virual_link_transmission_delay.yfilter)
	|| ydk::is_set(virtual_link_hello_interval.yfilter)
	|| ydk::is_set(virtual_link_hello_interval_ms.yfilter)
	|| ydk::is_set(virtual_link_dead_interval.yfilter)
	|| ydk::is_set(virtual_link_wait_interval.yfilter)
	|| ydk::is_set(virtaul_link_retransmission_interval.yfilter)
	|| ydk::is_set(virtual_link_next_hello.yfilter)
	|| ydk::is_set(virtual_link_next_hello_ms.yfilter)
	|| ydk::is_set(virtual_link_passive.yfilter)
	|| ydk::is_set(virtual_link_authentication_type.yfilter)
	|| ydk::is_set(virtual_link_youngest_md_key.yfilter)
	|| ydk::is_set(virtual_link_youngest_md_key_id.yfilter)
	|| ydk::is_set(virtual_link_old_md_key_count.yfilter)
	|| ydk::is_set(virtual_link_keychain_id.yfilter)
	|| ydk::is_set(virtual_link_nsf_enabled.yfilter)
	|| ydk::is_set(virtual_link_nsf.yfilter)
	|| ydk::is_set(virtual_link_last_nsf.yfilter)
	|| (virtual_link_neighbor !=  nullptr && virtual_link_neighbor->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::InterfaceInformation::VirtualLinks::VirtualLink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "virtual-link" <<"[virtual-link-name='" <<virtual_link_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::InterfaceInformation::VirtualLinks::VirtualLink::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (virtual_link_name.is_set || is_set(virtual_link_name.yfilter)) leaf_name_data.push_back(virtual_link_name.get_name_leafdata());
    if (virtual_link_name_xr.is_set || is_set(virtual_link_name_xr.yfilter)) leaf_name_data.push_back(virtual_link_name_xr.get_name_leafdata());
    if (virtual_link_neighbor_id.is_set || is_set(virtual_link_neighbor_id.yfilter)) leaf_name_data.push_back(virtual_link_neighbor_id.get_name_leafdata());
    if (virtual_link_state.is_set || is_set(virtual_link_state.yfilter)) leaf_name_data.push_back(virtual_link_state.get_name_leafdata());
    if (virtual_link_demand_circuit.is_set || is_set(virtual_link_demand_circuit.yfilter)) leaf_name_data.push_back(virtual_link_demand_circuit.get_name_leafdata());
    if (virtual_link_dc_bitless_lsa.is_set || is_set(virtual_link_dc_bitless_lsa.yfilter)) leaf_name_data.push_back(virtual_link_dc_bitless_lsa.get_name_leafdata());
    if (transit_area.is_set || is_set(transit_area.yfilter)) leaf_name_data.push_back(transit_area.get_name_leafdata());
    if (virtual_link_interface_name.is_set || is_set(virtual_link_interface_name.yfilter)) leaf_name_data.push_back(virtual_link_interface_name.get_name_leafdata());
    if (virtual_link_cost.is_set || is_set(virtual_link_cost.yfilter)) leaf_name_data.push_back(virtual_link_cost.get_name_leafdata());
    if (virual_link_transmission_delay.is_set || is_set(virual_link_transmission_delay.yfilter)) leaf_name_data.push_back(virual_link_transmission_delay.get_name_leafdata());
    if (virtual_link_hello_interval.is_set || is_set(virtual_link_hello_interval.yfilter)) leaf_name_data.push_back(virtual_link_hello_interval.get_name_leafdata());
    if (virtual_link_hello_interval_ms.is_set || is_set(virtual_link_hello_interval_ms.yfilter)) leaf_name_data.push_back(virtual_link_hello_interval_ms.get_name_leafdata());
    if (virtual_link_dead_interval.is_set || is_set(virtual_link_dead_interval.yfilter)) leaf_name_data.push_back(virtual_link_dead_interval.get_name_leafdata());
    if (virtual_link_wait_interval.is_set || is_set(virtual_link_wait_interval.yfilter)) leaf_name_data.push_back(virtual_link_wait_interval.get_name_leafdata());
    if (virtaul_link_retransmission_interval.is_set || is_set(virtaul_link_retransmission_interval.yfilter)) leaf_name_data.push_back(virtaul_link_retransmission_interval.get_name_leafdata());
    if (virtual_link_next_hello.is_set || is_set(virtual_link_next_hello.yfilter)) leaf_name_data.push_back(virtual_link_next_hello.get_name_leafdata());
    if (virtual_link_next_hello_ms.is_set || is_set(virtual_link_next_hello_ms.yfilter)) leaf_name_data.push_back(virtual_link_next_hello_ms.get_name_leafdata());
    if (virtual_link_passive.is_set || is_set(virtual_link_passive.yfilter)) leaf_name_data.push_back(virtual_link_passive.get_name_leafdata());
    if (virtual_link_authentication_type.is_set || is_set(virtual_link_authentication_type.yfilter)) leaf_name_data.push_back(virtual_link_authentication_type.get_name_leafdata());
    if (virtual_link_youngest_md_key.is_set || is_set(virtual_link_youngest_md_key.yfilter)) leaf_name_data.push_back(virtual_link_youngest_md_key.get_name_leafdata());
    if (virtual_link_youngest_md_key_id.is_set || is_set(virtual_link_youngest_md_key_id.yfilter)) leaf_name_data.push_back(virtual_link_youngest_md_key_id.get_name_leafdata());
    if (virtual_link_old_md_key_count.is_set || is_set(virtual_link_old_md_key_count.yfilter)) leaf_name_data.push_back(virtual_link_old_md_key_count.get_name_leafdata());
    if (virtual_link_keychain_id.is_set || is_set(virtual_link_keychain_id.yfilter)) leaf_name_data.push_back(virtual_link_keychain_id.get_name_leafdata());
    if (virtual_link_nsf_enabled.is_set || is_set(virtual_link_nsf_enabled.yfilter)) leaf_name_data.push_back(virtual_link_nsf_enabled.get_name_leafdata());
    if (virtual_link_nsf.is_set || is_set(virtual_link_nsf.yfilter)) leaf_name_data.push_back(virtual_link_nsf.get_name_leafdata());
    if (virtual_link_last_nsf.is_set || is_set(virtual_link_last_nsf.yfilter)) leaf_name_data.push_back(virtual_link_last_nsf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::InterfaceInformation::VirtualLinks::VirtualLink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "virtual-link-neighbor")
    {
        if(virtual_link_neighbor == nullptr)
        {
            virtual_link_neighbor = std::make_shared<Ospf::Processes::Process::DefaultVrf::InterfaceInformation::VirtualLinks::VirtualLink::VirtualLinkNeighbor>();
        }
        return virtual_link_neighbor;
    }

    if(child_yang_name == "virtual-link-md-key")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::InterfaceInformation::VirtualLinks::VirtualLink::VirtualLinkMdKey>();
        c->parent = this;
        virtual_link_md_key.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::InterfaceInformation::VirtualLinks::VirtualLink::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(virtual_link_neighbor != nullptr)
    {
        children["virtual-link-neighbor"] = virtual_link_neighbor;
    }

    count = 0;
    for (auto const & c : virtual_link_md_key)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::InterfaceInformation::VirtualLinks::VirtualLink::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "virtual-link-name")
    {
        virtual_link_name = value;
        virtual_link_name.value_namespace = name_space;
        virtual_link_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-link-name-xr")
    {
        virtual_link_name_xr = value;
        virtual_link_name_xr.value_namespace = name_space;
        virtual_link_name_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-link-neighbor-id")
    {
        virtual_link_neighbor_id = value;
        virtual_link_neighbor_id.value_namespace = name_space;
        virtual_link_neighbor_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-link-state")
    {
        virtual_link_state = value;
        virtual_link_state.value_namespace = name_space;
        virtual_link_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-link-demand-circuit")
    {
        virtual_link_demand_circuit = value;
        virtual_link_demand_circuit.value_namespace = name_space;
        virtual_link_demand_circuit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-link-dc-bitless-lsa")
    {
        virtual_link_dc_bitless_lsa = value;
        virtual_link_dc_bitless_lsa.value_namespace = name_space;
        virtual_link_dc_bitless_lsa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transit-area")
    {
        transit_area = value;
        transit_area.value_namespace = name_space;
        transit_area.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-link-interface-name")
    {
        virtual_link_interface_name = value;
        virtual_link_interface_name.value_namespace = name_space;
        virtual_link_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-link-cost")
    {
        virtual_link_cost = value;
        virtual_link_cost.value_namespace = name_space;
        virtual_link_cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virual-link-transmission-delay")
    {
        virual_link_transmission_delay = value;
        virual_link_transmission_delay.value_namespace = name_space;
        virual_link_transmission_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-link-hello-interval")
    {
        virtual_link_hello_interval = value;
        virtual_link_hello_interval.value_namespace = name_space;
        virtual_link_hello_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-link-hello-interval-ms")
    {
        virtual_link_hello_interval_ms = value;
        virtual_link_hello_interval_ms.value_namespace = name_space;
        virtual_link_hello_interval_ms.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-link-dead-interval")
    {
        virtual_link_dead_interval = value;
        virtual_link_dead_interval.value_namespace = name_space;
        virtual_link_dead_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-link-wait-interval")
    {
        virtual_link_wait_interval = value;
        virtual_link_wait_interval.value_namespace = name_space;
        virtual_link_wait_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtaul-link-retransmission-interval")
    {
        virtaul_link_retransmission_interval = value;
        virtaul_link_retransmission_interval.value_namespace = name_space;
        virtaul_link_retransmission_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-link-next-hello")
    {
        virtual_link_next_hello = value;
        virtual_link_next_hello.value_namespace = name_space;
        virtual_link_next_hello.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-link-next-hello-ms")
    {
        virtual_link_next_hello_ms = value;
        virtual_link_next_hello_ms.value_namespace = name_space;
        virtual_link_next_hello_ms.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-link-passive")
    {
        virtual_link_passive = value;
        virtual_link_passive.value_namespace = name_space;
        virtual_link_passive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-link-authentication-type")
    {
        virtual_link_authentication_type = value;
        virtual_link_authentication_type.value_namespace = name_space;
        virtual_link_authentication_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-link-youngest-md-key")
    {
        virtual_link_youngest_md_key = value;
        virtual_link_youngest_md_key.value_namespace = name_space;
        virtual_link_youngest_md_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-link-youngest-md-key-id")
    {
        virtual_link_youngest_md_key_id = value;
        virtual_link_youngest_md_key_id.value_namespace = name_space;
        virtual_link_youngest_md_key_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-link-old-md-key-count")
    {
        virtual_link_old_md_key_count = value;
        virtual_link_old_md_key_count.value_namespace = name_space;
        virtual_link_old_md_key_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-link-keychain-id")
    {
        virtual_link_keychain_id = value;
        virtual_link_keychain_id.value_namespace = name_space;
        virtual_link_keychain_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-link-nsf-enabled")
    {
        virtual_link_nsf_enabled = value;
        virtual_link_nsf_enabled.value_namespace = name_space;
        virtual_link_nsf_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-link-nsf")
    {
        virtual_link_nsf = value;
        virtual_link_nsf.value_namespace = name_space;
        virtual_link_nsf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-link-last-nsf")
    {
        virtual_link_last_nsf = value;
        virtual_link_last_nsf.value_namespace = name_space;
        virtual_link_last_nsf.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::InterfaceInformation::VirtualLinks::VirtualLink::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "virtual-link-name")
    {
        virtual_link_name.yfilter = yfilter;
    }
    if(value_path == "virtual-link-name-xr")
    {
        virtual_link_name_xr.yfilter = yfilter;
    }
    if(value_path == "virtual-link-neighbor-id")
    {
        virtual_link_neighbor_id.yfilter = yfilter;
    }
    if(value_path == "virtual-link-state")
    {
        virtual_link_state.yfilter = yfilter;
    }
    if(value_path == "virtual-link-demand-circuit")
    {
        virtual_link_demand_circuit.yfilter = yfilter;
    }
    if(value_path == "virtual-link-dc-bitless-lsa")
    {
        virtual_link_dc_bitless_lsa.yfilter = yfilter;
    }
    if(value_path == "transit-area")
    {
        transit_area.yfilter = yfilter;
    }
    if(value_path == "virtual-link-interface-name")
    {
        virtual_link_interface_name.yfilter = yfilter;
    }
    if(value_path == "virtual-link-cost")
    {
        virtual_link_cost.yfilter = yfilter;
    }
    if(value_path == "virual-link-transmission-delay")
    {
        virual_link_transmission_delay.yfilter = yfilter;
    }
    if(value_path == "virtual-link-hello-interval")
    {
        virtual_link_hello_interval.yfilter = yfilter;
    }
    if(value_path == "virtual-link-hello-interval-ms")
    {
        virtual_link_hello_interval_ms.yfilter = yfilter;
    }
    if(value_path == "virtual-link-dead-interval")
    {
        virtual_link_dead_interval.yfilter = yfilter;
    }
    if(value_path == "virtual-link-wait-interval")
    {
        virtual_link_wait_interval.yfilter = yfilter;
    }
    if(value_path == "virtaul-link-retransmission-interval")
    {
        virtaul_link_retransmission_interval.yfilter = yfilter;
    }
    if(value_path == "virtual-link-next-hello")
    {
        virtual_link_next_hello.yfilter = yfilter;
    }
    if(value_path == "virtual-link-next-hello-ms")
    {
        virtual_link_next_hello_ms.yfilter = yfilter;
    }
    if(value_path == "virtual-link-passive")
    {
        virtual_link_passive.yfilter = yfilter;
    }
    if(value_path == "virtual-link-authentication-type")
    {
        virtual_link_authentication_type.yfilter = yfilter;
    }
    if(value_path == "virtual-link-youngest-md-key")
    {
        virtual_link_youngest_md_key.yfilter = yfilter;
    }
    if(value_path == "virtual-link-youngest-md-key-id")
    {
        virtual_link_youngest_md_key_id.yfilter = yfilter;
    }
    if(value_path == "virtual-link-old-md-key-count")
    {
        virtual_link_old_md_key_count.yfilter = yfilter;
    }
    if(value_path == "virtual-link-keychain-id")
    {
        virtual_link_keychain_id.yfilter = yfilter;
    }
    if(value_path == "virtual-link-nsf-enabled")
    {
        virtual_link_nsf_enabled.yfilter = yfilter;
    }
    if(value_path == "virtual-link-nsf")
    {
        virtual_link_nsf.yfilter = yfilter;
    }
    if(value_path == "virtual-link-last-nsf")
    {
        virtual_link_last_nsf.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::InterfaceInformation::VirtualLinks::VirtualLink::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "virtual-link-neighbor" || name == "virtual-link-md-key" || name == "virtual-link-name" || name == "virtual-link-name-xr" || name == "virtual-link-neighbor-id" || name == "virtual-link-state" || name == "virtual-link-demand-circuit" || name == "virtual-link-dc-bitless-lsa" || name == "transit-area" || name == "virtual-link-interface-name" || name == "virtual-link-cost" || name == "virual-link-transmission-delay" || name == "virtual-link-hello-interval" || name == "virtual-link-hello-interval-ms" || name == "virtual-link-dead-interval" || name == "virtual-link-wait-interval" || name == "virtaul-link-retransmission-interval" || name == "virtual-link-next-hello" || name == "virtual-link-next-hello-ms" || name == "virtual-link-passive" || name == "virtual-link-authentication-type" || name == "virtual-link-youngest-md-key" || name == "virtual-link-youngest-md-key-id" || name == "virtual-link-old-md-key-count" || name == "virtual-link-keychain-id" || name == "virtual-link-nsf-enabled" || name == "virtual-link-nsf" || name == "virtual-link-last-nsf")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::InterfaceInformation::VirtualLinks::VirtualLink::VirtualLinkNeighbor::VirtualLinkNeighbor()
    :
    virtual_link_suppress_hello{YType::boolean, "virtual-link-suppress-hello"},
    virtual_link_state{YType::enumeration, "virtual-link-state"}
    	,
    virtual_link_retransmissoin(std::make_shared<Ospf::Processes::Process::DefaultVrf::InterfaceInformation::VirtualLinks::VirtualLink::VirtualLinkNeighbor::VirtualLinkRetransmissoin>())
{
    virtual_link_retransmissoin->parent = this;

    yang_name = "virtual-link-neighbor"; yang_parent_name = "virtual-link"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::InterfaceInformation::VirtualLinks::VirtualLink::VirtualLinkNeighbor::~VirtualLinkNeighbor()
{
}

bool Ospf::Processes::Process::DefaultVrf::InterfaceInformation::VirtualLinks::VirtualLink::VirtualLinkNeighbor::has_data() const
{
    return virtual_link_suppress_hello.is_set
	|| virtual_link_state.is_set
	|| (virtual_link_retransmissoin !=  nullptr && virtual_link_retransmissoin->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::InterfaceInformation::VirtualLinks::VirtualLink::VirtualLinkNeighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(virtual_link_suppress_hello.yfilter)
	|| ydk::is_set(virtual_link_state.yfilter)
	|| (virtual_link_retransmissoin !=  nullptr && virtual_link_retransmissoin->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::InterfaceInformation::VirtualLinks::VirtualLink::VirtualLinkNeighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "virtual-link-neighbor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::InterfaceInformation::VirtualLinks::VirtualLink::VirtualLinkNeighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (virtual_link_suppress_hello.is_set || is_set(virtual_link_suppress_hello.yfilter)) leaf_name_data.push_back(virtual_link_suppress_hello.get_name_leafdata());
    if (virtual_link_state.is_set || is_set(virtual_link_state.yfilter)) leaf_name_data.push_back(virtual_link_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::InterfaceInformation::VirtualLinks::VirtualLink::VirtualLinkNeighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "virtual-link-retransmissoin")
    {
        if(virtual_link_retransmissoin == nullptr)
        {
            virtual_link_retransmissoin = std::make_shared<Ospf::Processes::Process::DefaultVrf::InterfaceInformation::VirtualLinks::VirtualLink::VirtualLinkNeighbor::VirtualLinkRetransmissoin>();
        }
        return virtual_link_retransmissoin;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::InterfaceInformation::VirtualLinks::VirtualLink::VirtualLinkNeighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(virtual_link_retransmissoin != nullptr)
    {
        children["virtual-link-retransmissoin"] = virtual_link_retransmissoin;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::InterfaceInformation::VirtualLinks::VirtualLink::VirtualLinkNeighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "virtual-link-suppress-hello")
    {
        virtual_link_suppress_hello = value;
        virtual_link_suppress_hello.value_namespace = name_space;
        virtual_link_suppress_hello.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-link-state")
    {
        virtual_link_state = value;
        virtual_link_state.value_namespace = name_space;
        virtual_link_state.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::InterfaceInformation::VirtualLinks::VirtualLink::VirtualLinkNeighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "virtual-link-suppress-hello")
    {
        virtual_link_suppress_hello.yfilter = yfilter;
    }
    if(value_path == "virtual-link-state")
    {
        virtual_link_state.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::InterfaceInformation::VirtualLinks::VirtualLink::VirtualLinkNeighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "virtual-link-retransmissoin" || name == "virtual-link-suppress-hello" || name == "virtual-link-state")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::InterfaceInformation::VirtualLinks::VirtualLink::VirtualLinkNeighbor::VirtualLinkRetransmissoin::VirtualLinkRetransmissoin()
    :
    dbd_retransmission_count{YType::uint32, "dbd-retransmission-count"},
    dbd_retransmission_total_count{YType::uint32, "dbd-retransmission-total-count"},
    area_flooding_index{YType::uint32, "area-flooding-index"},
    as_flood_index{YType::uint32, "as-flood-index"},
    neighbor_retransmission_count{YType::uint32, "neighbor-retransmission-count"},
    number_of_retransmissions{YType::uint32, "number-of-retransmissions"},
    area_first_flood_information{YType::uint32, "area-first-flood-information"},
    area_first_flood_information_index{YType::uint32, "area-first-flood-information-index"},
    as_first_flood_information{YType::uint32, "as-first-flood-information"},
    as_first_flood_information_index{YType::uint32, "as-first-flood-information-index"},
    area_next_flood_information{YType::uint32, "area-next-flood-information"},
    area_next_flood_information_index{YType::uint32, "area-next-flood-information-index"},
    as_next_flood_information{YType::uint32, "as-next-flood-information"},
    as_next_flood_information_index{YType::uint32, "as-next-flood-information-index"},
    last_retransmission_length{YType::uint32, "last-retransmission-length"},
    maximum_retransmission_length{YType::uint32, "maximum-retransmission-length"},
    last_retransmission_time{YType::uint32, "last-retransmission-time"},
    maximum_retransmission_time{YType::uint32, "maximum-retransmission-time"},
    lsa_retransmission_timer{YType::uint32, "lsa-retransmission-timer"}
{

    yang_name = "virtual-link-retransmissoin"; yang_parent_name = "virtual-link-neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::InterfaceInformation::VirtualLinks::VirtualLink::VirtualLinkNeighbor::VirtualLinkRetransmissoin::~VirtualLinkRetransmissoin()
{
}

bool Ospf::Processes::Process::DefaultVrf::InterfaceInformation::VirtualLinks::VirtualLink::VirtualLinkNeighbor::VirtualLinkRetransmissoin::has_data() const
{
    return dbd_retransmission_count.is_set
	|| dbd_retransmission_total_count.is_set
	|| area_flooding_index.is_set
	|| as_flood_index.is_set
	|| neighbor_retransmission_count.is_set
	|| number_of_retransmissions.is_set
	|| area_first_flood_information.is_set
	|| area_first_flood_information_index.is_set
	|| as_first_flood_information.is_set
	|| as_first_flood_information_index.is_set
	|| area_next_flood_information.is_set
	|| area_next_flood_information_index.is_set
	|| as_next_flood_information.is_set
	|| as_next_flood_information_index.is_set
	|| last_retransmission_length.is_set
	|| maximum_retransmission_length.is_set
	|| last_retransmission_time.is_set
	|| maximum_retransmission_time.is_set
	|| lsa_retransmission_timer.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::InterfaceInformation::VirtualLinks::VirtualLink::VirtualLinkNeighbor::VirtualLinkRetransmissoin::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dbd_retransmission_count.yfilter)
	|| ydk::is_set(dbd_retransmission_total_count.yfilter)
	|| ydk::is_set(area_flooding_index.yfilter)
	|| ydk::is_set(as_flood_index.yfilter)
	|| ydk::is_set(neighbor_retransmission_count.yfilter)
	|| ydk::is_set(number_of_retransmissions.yfilter)
	|| ydk::is_set(area_first_flood_information.yfilter)
	|| ydk::is_set(area_first_flood_information_index.yfilter)
	|| ydk::is_set(as_first_flood_information.yfilter)
	|| ydk::is_set(as_first_flood_information_index.yfilter)
	|| ydk::is_set(area_next_flood_information.yfilter)
	|| ydk::is_set(area_next_flood_information_index.yfilter)
	|| ydk::is_set(as_next_flood_information.yfilter)
	|| ydk::is_set(as_next_flood_information_index.yfilter)
	|| ydk::is_set(last_retransmission_length.yfilter)
	|| ydk::is_set(maximum_retransmission_length.yfilter)
	|| ydk::is_set(last_retransmission_time.yfilter)
	|| ydk::is_set(maximum_retransmission_time.yfilter)
	|| ydk::is_set(lsa_retransmission_timer.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::InterfaceInformation::VirtualLinks::VirtualLink::VirtualLinkNeighbor::VirtualLinkRetransmissoin::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "virtual-link-retransmissoin";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::InterfaceInformation::VirtualLinks::VirtualLink::VirtualLinkNeighbor::VirtualLinkRetransmissoin::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dbd_retransmission_count.is_set || is_set(dbd_retransmission_count.yfilter)) leaf_name_data.push_back(dbd_retransmission_count.get_name_leafdata());
    if (dbd_retransmission_total_count.is_set || is_set(dbd_retransmission_total_count.yfilter)) leaf_name_data.push_back(dbd_retransmission_total_count.get_name_leafdata());
    if (area_flooding_index.is_set || is_set(area_flooding_index.yfilter)) leaf_name_data.push_back(area_flooding_index.get_name_leafdata());
    if (as_flood_index.is_set || is_set(as_flood_index.yfilter)) leaf_name_data.push_back(as_flood_index.get_name_leafdata());
    if (neighbor_retransmission_count.is_set || is_set(neighbor_retransmission_count.yfilter)) leaf_name_data.push_back(neighbor_retransmission_count.get_name_leafdata());
    if (number_of_retransmissions.is_set || is_set(number_of_retransmissions.yfilter)) leaf_name_data.push_back(number_of_retransmissions.get_name_leafdata());
    if (area_first_flood_information.is_set || is_set(area_first_flood_information.yfilter)) leaf_name_data.push_back(area_first_flood_information.get_name_leafdata());
    if (area_first_flood_information_index.is_set || is_set(area_first_flood_information_index.yfilter)) leaf_name_data.push_back(area_first_flood_information_index.get_name_leafdata());
    if (as_first_flood_information.is_set || is_set(as_first_flood_information.yfilter)) leaf_name_data.push_back(as_first_flood_information.get_name_leafdata());
    if (as_first_flood_information_index.is_set || is_set(as_first_flood_information_index.yfilter)) leaf_name_data.push_back(as_first_flood_information_index.get_name_leafdata());
    if (area_next_flood_information.is_set || is_set(area_next_flood_information.yfilter)) leaf_name_data.push_back(area_next_flood_information.get_name_leafdata());
    if (area_next_flood_information_index.is_set || is_set(area_next_flood_information_index.yfilter)) leaf_name_data.push_back(area_next_flood_information_index.get_name_leafdata());
    if (as_next_flood_information.is_set || is_set(as_next_flood_information.yfilter)) leaf_name_data.push_back(as_next_flood_information.get_name_leafdata());
    if (as_next_flood_information_index.is_set || is_set(as_next_flood_information_index.yfilter)) leaf_name_data.push_back(as_next_flood_information_index.get_name_leafdata());
    if (last_retransmission_length.is_set || is_set(last_retransmission_length.yfilter)) leaf_name_data.push_back(last_retransmission_length.get_name_leafdata());
    if (maximum_retransmission_length.is_set || is_set(maximum_retransmission_length.yfilter)) leaf_name_data.push_back(maximum_retransmission_length.get_name_leafdata());
    if (last_retransmission_time.is_set || is_set(last_retransmission_time.yfilter)) leaf_name_data.push_back(last_retransmission_time.get_name_leafdata());
    if (maximum_retransmission_time.is_set || is_set(maximum_retransmission_time.yfilter)) leaf_name_data.push_back(maximum_retransmission_time.get_name_leafdata());
    if (lsa_retransmission_timer.is_set || is_set(lsa_retransmission_timer.yfilter)) leaf_name_data.push_back(lsa_retransmission_timer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::InterfaceInformation::VirtualLinks::VirtualLink::VirtualLinkNeighbor::VirtualLinkRetransmissoin::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::InterfaceInformation::VirtualLinks::VirtualLink::VirtualLinkNeighbor::VirtualLinkRetransmissoin::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::InterfaceInformation::VirtualLinks::VirtualLink::VirtualLinkNeighbor::VirtualLinkRetransmissoin::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dbd-retransmission-count")
    {
        dbd_retransmission_count = value;
        dbd_retransmission_count.value_namespace = name_space;
        dbd_retransmission_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dbd-retransmission-total-count")
    {
        dbd_retransmission_total_count = value;
        dbd_retransmission_total_count.value_namespace = name_space;
        dbd_retransmission_total_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-flooding-index")
    {
        area_flooding_index = value;
        area_flooding_index.value_namespace = name_space;
        area_flooding_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-flood-index")
    {
        as_flood_index = value;
        as_flood_index.value_namespace = name_space;
        as_flood_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-retransmission-count")
    {
        neighbor_retransmission_count = value;
        neighbor_retransmission_count.value_namespace = name_space;
        neighbor_retransmission_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-retransmissions")
    {
        number_of_retransmissions = value;
        number_of_retransmissions.value_namespace = name_space;
        number_of_retransmissions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-first-flood-information")
    {
        area_first_flood_information = value;
        area_first_flood_information.value_namespace = name_space;
        area_first_flood_information.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-first-flood-information-index")
    {
        area_first_flood_information_index = value;
        area_first_flood_information_index.value_namespace = name_space;
        area_first_flood_information_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-first-flood-information")
    {
        as_first_flood_information = value;
        as_first_flood_information.value_namespace = name_space;
        as_first_flood_information.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-first-flood-information-index")
    {
        as_first_flood_information_index = value;
        as_first_flood_information_index.value_namespace = name_space;
        as_first_flood_information_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-next-flood-information")
    {
        area_next_flood_information = value;
        area_next_flood_information.value_namespace = name_space;
        area_next_flood_information.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-next-flood-information-index")
    {
        area_next_flood_information_index = value;
        area_next_flood_information_index.value_namespace = name_space;
        area_next_flood_information_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-next-flood-information")
    {
        as_next_flood_information = value;
        as_next_flood_information.value_namespace = name_space;
        as_next_flood_information.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-next-flood-information-index")
    {
        as_next_flood_information_index = value;
        as_next_flood_information_index.value_namespace = name_space;
        as_next_flood_information_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-retransmission-length")
    {
        last_retransmission_length = value;
        last_retransmission_length.value_namespace = name_space;
        last_retransmission_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-retransmission-length")
    {
        maximum_retransmission_length = value;
        maximum_retransmission_length.value_namespace = name_space;
        maximum_retransmission_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-retransmission-time")
    {
        last_retransmission_time = value;
        last_retransmission_time.value_namespace = name_space;
        last_retransmission_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-retransmission-time")
    {
        maximum_retransmission_time = value;
        maximum_retransmission_time.value_namespace = name_space;
        maximum_retransmission_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-retransmission-timer")
    {
        lsa_retransmission_timer = value;
        lsa_retransmission_timer.value_namespace = name_space;
        lsa_retransmission_timer.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::InterfaceInformation::VirtualLinks::VirtualLink::VirtualLinkNeighbor::VirtualLinkRetransmissoin::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dbd-retransmission-count")
    {
        dbd_retransmission_count.yfilter = yfilter;
    }
    if(value_path == "dbd-retransmission-total-count")
    {
        dbd_retransmission_total_count.yfilter = yfilter;
    }
    if(value_path == "area-flooding-index")
    {
        area_flooding_index.yfilter = yfilter;
    }
    if(value_path == "as-flood-index")
    {
        as_flood_index.yfilter = yfilter;
    }
    if(value_path == "neighbor-retransmission-count")
    {
        neighbor_retransmission_count.yfilter = yfilter;
    }
    if(value_path == "number-of-retransmissions")
    {
        number_of_retransmissions.yfilter = yfilter;
    }
    if(value_path == "area-first-flood-information")
    {
        area_first_flood_information.yfilter = yfilter;
    }
    if(value_path == "area-first-flood-information-index")
    {
        area_first_flood_information_index.yfilter = yfilter;
    }
    if(value_path == "as-first-flood-information")
    {
        as_first_flood_information.yfilter = yfilter;
    }
    if(value_path == "as-first-flood-information-index")
    {
        as_first_flood_information_index.yfilter = yfilter;
    }
    if(value_path == "area-next-flood-information")
    {
        area_next_flood_information.yfilter = yfilter;
    }
    if(value_path == "area-next-flood-information-index")
    {
        area_next_flood_information_index.yfilter = yfilter;
    }
    if(value_path == "as-next-flood-information")
    {
        as_next_flood_information.yfilter = yfilter;
    }
    if(value_path == "as-next-flood-information-index")
    {
        as_next_flood_information_index.yfilter = yfilter;
    }
    if(value_path == "last-retransmission-length")
    {
        last_retransmission_length.yfilter = yfilter;
    }
    if(value_path == "maximum-retransmission-length")
    {
        maximum_retransmission_length.yfilter = yfilter;
    }
    if(value_path == "last-retransmission-time")
    {
        last_retransmission_time.yfilter = yfilter;
    }
    if(value_path == "maximum-retransmission-time")
    {
        maximum_retransmission_time.yfilter = yfilter;
    }
    if(value_path == "lsa-retransmission-timer")
    {
        lsa_retransmission_timer.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::InterfaceInformation::VirtualLinks::VirtualLink::VirtualLinkNeighbor::VirtualLinkRetransmissoin::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dbd-retransmission-count" || name == "dbd-retransmission-total-count" || name == "area-flooding-index" || name == "as-flood-index" || name == "neighbor-retransmission-count" || name == "number-of-retransmissions" || name == "area-first-flood-information" || name == "area-first-flood-information-index" || name == "as-first-flood-information" || name == "as-first-flood-information-index" || name == "area-next-flood-information" || name == "area-next-flood-information-index" || name == "as-next-flood-information" || name == "as-next-flood-information-index" || name == "last-retransmission-length" || name == "maximum-retransmission-length" || name == "last-retransmission-time" || name == "maximum-retransmission-time" || name == "lsa-retransmission-timer")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::InterfaceInformation::VirtualLinks::VirtualLink::VirtualLinkMdKey::VirtualLinkMdKey()
    :
    entry{YType::uint16, "entry"}
{

    yang_name = "virtual-link-md-key"; yang_parent_name = "virtual-link"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::InterfaceInformation::VirtualLinks::VirtualLink::VirtualLinkMdKey::~VirtualLinkMdKey()
{
}

bool Ospf::Processes::Process::DefaultVrf::InterfaceInformation::VirtualLinks::VirtualLink::VirtualLinkMdKey::has_data() const
{
    return entry.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::InterfaceInformation::VirtualLinks::VirtualLink::VirtualLinkMdKey::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::InterfaceInformation::VirtualLinks::VirtualLink::VirtualLinkMdKey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "virtual-link-md-key";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::InterfaceInformation::VirtualLinks::VirtualLink::VirtualLinkMdKey::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::InterfaceInformation::VirtualLinks::VirtualLink::VirtualLinkMdKey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::InterfaceInformation::VirtualLinks::VirtualLink::VirtualLinkMdKey::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::InterfaceInformation::VirtualLinks::VirtualLink::VirtualLinkMdKey::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::InterfaceInformation::VirtualLinks::VirtualLink::VirtualLinkMdKey::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::InterfaceInformation::VirtualLinks::VirtualLink::VirtualLinkMdKey::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::InterfaceInformation::InterfaceBriefs::InterfaceBriefs()
{

    yang_name = "interface-briefs"; yang_parent_name = "interface-information"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::InterfaceInformation::InterfaceBriefs::~InterfaceBriefs()
{
}

bool Ospf::Processes::Process::DefaultVrf::InterfaceInformation::InterfaceBriefs::has_data() const
{
    for (std::size_t index=0; index<interface_brief.size(); index++)
    {
        if(interface_brief[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::DefaultVrf::InterfaceInformation::InterfaceBriefs::has_operation() const
{
    for (std::size_t index=0; index<interface_brief.size(); index++)
    {
        if(interface_brief[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::InterfaceInformation::InterfaceBriefs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-briefs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::InterfaceInformation::InterfaceBriefs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::InterfaceInformation::InterfaceBriefs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-brief")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::InterfaceInformation::InterfaceBriefs::InterfaceBrief>();
        c->parent = this;
        interface_brief.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::InterfaceInformation::InterfaceBriefs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : interface_brief)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::InterfaceInformation::InterfaceBriefs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::DefaultVrf::InterfaceInformation::InterfaceBriefs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::DefaultVrf::InterfaceInformation::InterfaceBriefs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-brief")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::InterfaceInformation::InterfaceBriefs::InterfaceBrief::InterfaceBrief()
    :
    interface_name{YType::str, "interface-name"},
    interface_name_xr{YType::str, "interface-name-xr"},
    interface_area{YType::str, "interface-area"},
    interface_address{YType::str, "interface-address"},
    interface_mask{YType::uint32, "interface-mask"},
    interface_link_cost{YType::uint16, "interface-link-cost"},
    ospf_interface_state{YType::enumeration, "ospf-interface-state"},
    interface_fast_detect_hold_down{YType::boolean, "interface-fast-detect-hold-down"},
    interface_neighbor_count{YType::uint16, "interface-neighbor-count"},
    interface_adj_neighbor_count{YType::uint16, "interface-adj-neighbor-count"},
    interfaceis_madj{YType::boolean, "interfaceis-madj"},
    interface_madj_count{YType::uint16, "interface-madj-count"}
{

    yang_name = "interface-brief"; yang_parent_name = "interface-briefs"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::InterfaceInformation::InterfaceBriefs::InterfaceBrief::~InterfaceBrief()
{
}

bool Ospf::Processes::Process::DefaultVrf::InterfaceInformation::InterfaceBriefs::InterfaceBrief::has_data() const
{
    for (std::size_t index=0; index<interface_madj.size(); index++)
    {
        if(interface_madj[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| interface_name_xr.is_set
	|| interface_area.is_set
	|| interface_address.is_set
	|| interface_mask.is_set
	|| interface_link_cost.is_set
	|| ospf_interface_state.is_set
	|| interface_fast_detect_hold_down.is_set
	|| interface_neighbor_count.is_set
	|| interface_adj_neighbor_count.is_set
	|| interfaceis_madj.is_set
	|| interface_madj_count.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::InterfaceInformation::InterfaceBriefs::InterfaceBrief::has_operation() const
{
    for (std::size_t index=0; index<interface_madj.size(); index++)
    {
        if(interface_madj[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(interface_name_xr.yfilter)
	|| ydk::is_set(interface_area.yfilter)
	|| ydk::is_set(interface_address.yfilter)
	|| ydk::is_set(interface_mask.yfilter)
	|| ydk::is_set(interface_link_cost.yfilter)
	|| ydk::is_set(ospf_interface_state.yfilter)
	|| ydk::is_set(interface_fast_detect_hold_down.yfilter)
	|| ydk::is_set(interface_neighbor_count.yfilter)
	|| ydk::is_set(interface_adj_neighbor_count.yfilter)
	|| ydk::is_set(interfaceis_madj.yfilter)
	|| ydk::is_set(interface_madj_count.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::InterfaceInformation::InterfaceBriefs::InterfaceBrief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-brief" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::InterfaceInformation::InterfaceBriefs::InterfaceBrief::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.yfilter)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (interface_area.is_set || is_set(interface_area.yfilter)) leaf_name_data.push_back(interface_area.get_name_leafdata());
    if (interface_address.is_set || is_set(interface_address.yfilter)) leaf_name_data.push_back(interface_address.get_name_leafdata());
    if (interface_mask.is_set || is_set(interface_mask.yfilter)) leaf_name_data.push_back(interface_mask.get_name_leafdata());
    if (interface_link_cost.is_set || is_set(interface_link_cost.yfilter)) leaf_name_data.push_back(interface_link_cost.get_name_leafdata());
    if (ospf_interface_state.is_set || is_set(ospf_interface_state.yfilter)) leaf_name_data.push_back(ospf_interface_state.get_name_leafdata());
    if (interface_fast_detect_hold_down.is_set || is_set(interface_fast_detect_hold_down.yfilter)) leaf_name_data.push_back(interface_fast_detect_hold_down.get_name_leafdata());
    if (interface_neighbor_count.is_set || is_set(interface_neighbor_count.yfilter)) leaf_name_data.push_back(interface_neighbor_count.get_name_leafdata());
    if (interface_adj_neighbor_count.is_set || is_set(interface_adj_neighbor_count.yfilter)) leaf_name_data.push_back(interface_adj_neighbor_count.get_name_leafdata());
    if (interfaceis_madj.is_set || is_set(interfaceis_madj.yfilter)) leaf_name_data.push_back(interfaceis_madj.get_name_leafdata());
    if (interface_madj_count.is_set || is_set(interface_madj_count.yfilter)) leaf_name_data.push_back(interface_madj_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::InterfaceInformation::InterfaceBriefs::InterfaceBrief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-madj")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::InterfaceInformation::InterfaceBriefs::InterfaceBrief::InterfaceMadj>();
        c->parent = this;
        interface_madj.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::InterfaceInformation::InterfaceBriefs::InterfaceBrief::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : interface_madj)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::InterfaceInformation::InterfaceBriefs::InterfaceBrief::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
        interface_name_xr.value_namespace = name_space;
        interface_name_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-area")
    {
        interface_area = value;
        interface_area.value_namespace = name_space;
        interface_area.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-address")
    {
        interface_address = value;
        interface_address.value_namespace = name_space;
        interface_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-mask")
    {
        interface_mask = value;
        interface_mask.value_namespace = name_space;
        interface_mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-link-cost")
    {
        interface_link_cost = value;
        interface_link_cost.value_namespace = name_space;
        interface_link_cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospf-interface-state")
    {
        ospf_interface_state = value;
        ospf_interface_state.value_namespace = name_space;
        ospf_interface_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-fast-detect-hold-down")
    {
        interface_fast_detect_hold_down = value;
        interface_fast_detect_hold_down.value_namespace = name_space;
        interface_fast_detect_hold_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-neighbor-count")
    {
        interface_neighbor_count = value;
        interface_neighbor_count.value_namespace = name_space;
        interface_neighbor_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-adj-neighbor-count")
    {
        interface_adj_neighbor_count = value;
        interface_adj_neighbor_count.value_namespace = name_space;
        interface_adj_neighbor_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interfaceis-madj")
    {
        interfaceis_madj = value;
        interfaceis_madj.value_namespace = name_space;
        interfaceis_madj.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-madj-count")
    {
        interface_madj_count = value;
        interface_madj_count.value_namespace = name_space;
        interface_madj_count.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::InterfaceInformation::InterfaceBriefs::InterfaceBrief::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr.yfilter = yfilter;
    }
    if(value_path == "interface-area")
    {
        interface_area.yfilter = yfilter;
    }
    if(value_path == "interface-address")
    {
        interface_address.yfilter = yfilter;
    }
    if(value_path == "interface-mask")
    {
        interface_mask.yfilter = yfilter;
    }
    if(value_path == "interface-link-cost")
    {
        interface_link_cost.yfilter = yfilter;
    }
    if(value_path == "ospf-interface-state")
    {
        ospf_interface_state.yfilter = yfilter;
    }
    if(value_path == "interface-fast-detect-hold-down")
    {
        interface_fast_detect_hold_down.yfilter = yfilter;
    }
    if(value_path == "interface-neighbor-count")
    {
        interface_neighbor_count.yfilter = yfilter;
    }
    if(value_path == "interface-adj-neighbor-count")
    {
        interface_adj_neighbor_count.yfilter = yfilter;
    }
    if(value_path == "interfaceis-madj")
    {
        interfaceis_madj.yfilter = yfilter;
    }
    if(value_path == "interface-madj-count")
    {
        interface_madj_count.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::InterfaceInformation::InterfaceBriefs::InterfaceBrief::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-madj" || name == "interface-name" || name == "interface-name-xr" || name == "interface-area" || name == "interface-address" || name == "interface-mask" || name == "interface-link-cost" || name == "ospf-interface-state" || name == "interface-fast-detect-hold-down" || name == "interface-neighbor-count" || name == "interface-adj-neighbor-count" || name == "interfaceis-madj" || name == "interface-madj-count")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::InterfaceInformation::InterfaceBriefs::InterfaceBrief::InterfaceMadj::InterfaceMadj()
    :
    interface_area{YType::str, "interface-area"},
    madj_area_id{YType::uint32, "madj-area-id"},
    interface_neighbor_count{YType::uint16, "interface-neighbor-count"},
    interface_adj_neighbor_count{YType::uint16, "interface-adj-neighbor-count"},
    interface_link_cost{YType::uint16, "interface-link-cost"},
    ospf_interface_state{YType::enumeration, "ospf-interface-state"}
{

    yang_name = "interface-madj"; yang_parent_name = "interface-brief"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::InterfaceInformation::InterfaceBriefs::InterfaceBrief::InterfaceMadj::~InterfaceMadj()
{
}

bool Ospf::Processes::Process::DefaultVrf::InterfaceInformation::InterfaceBriefs::InterfaceBrief::InterfaceMadj::has_data() const
{
    return interface_area.is_set
	|| madj_area_id.is_set
	|| interface_neighbor_count.is_set
	|| interface_adj_neighbor_count.is_set
	|| interface_link_cost.is_set
	|| ospf_interface_state.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::InterfaceInformation::InterfaceBriefs::InterfaceBrief::InterfaceMadj::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_area.yfilter)
	|| ydk::is_set(madj_area_id.yfilter)
	|| ydk::is_set(interface_neighbor_count.yfilter)
	|| ydk::is_set(interface_adj_neighbor_count.yfilter)
	|| ydk::is_set(interface_link_cost.yfilter)
	|| ydk::is_set(ospf_interface_state.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::InterfaceInformation::InterfaceBriefs::InterfaceBrief::InterfaceMadj::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-madj";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::InterfaceInformation::InterfaceBriefs::InterfaceBrief::InterfaceMadj::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_area.is_set || is_set(interface_area.yfilter)) leaf_name_data.push_back(interface_area.get_name_leafdata());
    if (madj_area_id.is_set || is_set(madj_area_id.yfilter)) leaf_name_data.push_back(madj_area_id.get_name_leafdata());
    if (interface_neighbor_count.is_set || is_set(interface_neighbor_count.yfilter)) leaf_name_data.push_back(interface_neighbor_count.get_name_leafdata());
    if (interface_adj_neighbor_count.is_set || is_set(interface_adj_neighbor_count.yfilter)) leaf_name_data.push_back(interface_adj_neighbor_count.get_name_leafdata());
    if (interface_link_cost.is_set || is_set(interface_link_cost.yfilter)) leaf_name_data.push_back(interface_link_cost.get_name_leafdata());
    if (ospf_interface_state.is_set || is_set(ospf_interface_state.yfilter)) leaf_name_data.push_back(ospf_interface_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::InterfaceInformation::InterfaceBriefs::InterfaceBrief::InterfaceMadj::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::InterfaceInformation::InterfaceBriefs::InterfaceBrief::InterfaceMadj::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::InterfaceInformation::InterfaceBriefs::InterfaceBrief::InterfaceMadj::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-area")
    {
        interface_area = value;
        interface_area.value_namespace = name_space;
        interface_area.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "madj-area-id")
    {
        madj_area_id = value;
        madj_area_id.value_namespace = name_space;
        madj_area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-neighbor-count")
    {
        interface_neighbor_count = value;
        interface_neighbor_count.value_namespace = name_space;
        interface_neighbor_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-adj-neighbor-count")
    {
        interface_adj_neighbor_count = value;
        interface_adj_neighbor_count.value_namespace = name_space;
        interface_adj_neighbor_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-link-cost")
    {
        interface_link_cost = value;
        interface_link_cost.value_namespace = name_space;
        interface_link_cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospf-interface-state")
    {
        ospf_interface_state = value;
        ospf_interface_state.value_namespace = name_space;
        ospf_interface_state.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::InterfaceInformation::InterfaceBriefs::InterfaceBrief::InterfaceMadj::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-area")
    {
        interface_area.yfilter = yfilter;
    }
    if(value_path == "madj-area-id")
    {
        madj_area_id.yfilter = yfilter;
    }
    if(value_path == "interface-neighbor-count")
    {
        interface_neighbor_count.yfilter = yfilter;
    }
    if(value_path == "interface-adj-neighbor-count")
    {
        interface_adj_neighbor_count.yfilter = yfilter;
    }
    if(value_path == "interface-link-cost")
    {
        interface_link_cost.yfilter = yfilter;
    }
    if(value_path == "ospf-interface-state")
    {
        ospf_interface_state.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::InterfaceInformation::InterfaceBriefs::InterfaceBrief::InterfaceMadj::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-area" || name == "madj-area-id" || name == "interface-neighbor-count" || name == "interface-adj-neighbor-count" || name == "interface-link-cost" || name == "ospf-interface-state")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interfaces()
{

    yang_name = "interfaces"; yang_parent_name = "interface-information"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::~Interfaces()
{
}

bool Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    interface_name_xr{YType::str, "interface-name-xr"},
    interface_state{YType::enumeration, "interface-state"},
    interface_line_state{YType::boolean, "interface-line-state"},
    interface_address{YType::str, "interface-address"},
    interface_mask{YType::uint32, "interface-mask"},
    interface_area{YType::str, "interface-area"},
    interface_sid{YType::uint32, "interface-sid"},
    interface_sid_php_off{YType::boolean, "interface-sid-php-off"},
    interface_sid_n_flag_clear{YType::boolean, "interface-sid-n-flag-clear"},
    interface_strict_spf_sid{YType::uint32, "interface-strict-spf-sid"},
    interface_strict_spf_sid_php_off{YType::boolean, "interface-strict-spf-sid-php-off"},
    interface_strict_spf_sid_n_flag_clear{YType::boolean, "interface-strict-spf-sid-n-flag-clear"},
    interface_router_id{YType::str, "interface-router-id"},
    network_type{YType::enumeration, "network-type"},
    ip_mtu{YType::uint16, "ip-mtu"},
    maximum_packet_size{YType::uint16, "maximum-packet-size"},
    interface_tunnel_flags{YType::uint32, "interface-tunnel-flags"},
    interface_link_cost{YType::uint16, "interface-link-cost"},
    interface_bandwidth{YType::uint32, "interface-bandwidth"},
    cfg_cost_fallback{YType::boolean, "cfg-cost-fallback"},
    interface_cost_fallback{YType::uint16, "interface-cost-fallback"},
    cost_fallback_active{YType::boolean, "cost-fallback-active"},
    configured_ldp_sync{YType::boolean, "configured-ldp-sync"},
    configured_ldp_sync_igp_shortcuts{YType::boolean, "configured-ldp-sync-igp-shortcuts"},
    interface_ldp_sync{YType::boolean, "interface-ldp-sync"},
    configured_demand_circuit{YType::boolean, "configured-demand-circuit"},
    interface_demand_circuit{YType::boolean, "interface-demand-circuit"},
    interface_dc_bitless_lsa_count{YType::uint32, "interface-dc-bitless-lsa-count"},
    transmission_delay{YType::uint16, "transmission-delay"},
    ospf_interface_state{YType::enumeration, "ospf-interface-state"},
    interface_priority{YType::uint8, "interface-priority"},
    designated_router{YType::boolean, "designated-router"},
    designated_router_id{YType::str, "designated-router-id"},
    designated_router_address{YType::str, "designated-router-address"},
    backup_designated_router{YType::boolean, "backup-designated-router"},
    backup_designated_router_id{YType::str, "backup-designated-router-id"},
    backup_designated_router_address{YType::str, "backup-designated-router-address"},
    network_lsa_flush_timer{YType::uint32, "network-lsa-flush-timer"},
    interface_lsa_filter{YType::boolean, "interface-lsa-filter"},
    hello_interval{YType::uint32, "hello-interval"},
    hello_interval_ms{YType::uint32, "hello-interval-ms"},
    dead_interval{YType::uint32, "dead-interval"},
    wait_interval{YType::uint32, "wait-interval"},
    interface_retransmission_interrval{YType::uint32, "interface-retransmission-interrval"},
    interface_nsf_enabled{YType::boolean, "interface-nsf-enabled"},
    interface_nsf{YType::boolean, "interface-nsf"},
    interface_last_nsf{YType::uint32, "interface-last-nsf"},
    passive_interface{YType::boolean, "passive-interface"},
    next_hello_time{YType::uint32, "next-hello-time"},
    next_hello_time_ms{YType::uint32, "next-hello-time-ms"},
    ttl_security_enabled{YType::boolean, "ttl-security-enabled"},
    ttl_security_hop_count{YType::uint32, "ttl-security-hop-count"},
    interfaceis_madj{YType::boolean, "interfaceis-madj"},
    interface_madj_count{YType::uint16, "interface-madj-count"},
    prefix_suppress_primary_addresses{YType::boolean, "prefix-suppress-primary-addresses"},
    prefix_suppress_secondary_addresses{YType::boolean, "prefix-suppress-secondary-addresses"},
    is_loopback_stub_network{YType::boolean, "is-loopback-stub-network"},
    interface_ack_list_count{YType::uint32, "interface-ack-list-count"},
    interface_ack_list_high_watermark{YType::uint32, "interface-ack-list-high-watermark"},
    registered_for_link_down_fast_detection{YType::boolean, "registered-for-link-down-fast-detection"},
    fast_detect_hold_down_time{YType::uint32, "fast-detect-hold-down-time"},
    interface_fast_detect_hold_down{YType::boolean, "interface-fast-detect-hold-down"},
    fast_detect_hold_down_time_remaining{YType::uint32, "fast-detect-hold-down-time-remaining"},
    fast_reroute_type{YType::enumeration, "fast-reroute-type"},
    fast_reroute_topology_independent_lfa{YType::boolean, "fast-reroute-topology-independent-lfa"},
    interface_unnum{YType::str, "interface-unnum"},
    interface_forw{YType::boolean, "interface-forw"},
    interface_pri_labels{YType::uint8, "interface-pri-labels"},
    interface_bkp_labels{YType::uint8, "interface-bkp-labels"},
    interface_srte_labels{YType::uint8, "interface-srte-labels"}
    	,
    interface_bfd_information(std::make_shared<Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::InterfaceBfdInformation>())
	,active_interface(std::make_shared<Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::ActiveInterface>())
{
    interface_bfd_information->parent = this;
    active_interface->parent = this;

    yang_name = "interface"; yang_parent_name = "interfaces"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::~Interface()
{
}

bool Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::has_data() const
{
    for (std::size_t index=0; index<srlg.size(); index++)
    {
        if(srlg[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<interface_neighbor.size(); index++)
    {
        if(interface_neighbor[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<interface_madj.size(); index++)
    {
        if(interface_madj[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ipfrr_tiebreakers.size(); index++)
    {
        if(ipfrr_tiebreakers[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ip_sec_addr.size(); index++)
    {
        if(ip_sec_addr[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| interface_name_xr.is_set
	|| interface_state.is_set
	|| interface_line_state.is_set
	|| interface_address.is_set
	|| interface_mask.is_set
	|| interface_area.is_set
	|| interface_sid.is_set
	|| interface_sid_php_off.is_set
	|| interface_sid_n_flag_clear.is_set
	|| interface_strict_spf_sid.is_set
	|| interface_strict_spf_sid_php_off.is_set
	|| interface_strict_spf_sid_n_flag_clear.is_set
	|| interface_router_id.is_set
	|| network_type.is_set
	|| ip_mtu.is_set
	|| maximum_packet_size.is_set
	|| interface_tunnel_flags.is_set
	|| interface_link_cost.is_set
	|| interface_bandwidth.is_set
	|| cfg_cost_fallback.is_set
	|| interface_cost_fallback.is_set
	|| cost_fallback_active.is_set
	|| configured_ldp_sync.is_set
	|| configured_ldp_sync_igp_shortcuts.is_set
	|| interface_ldp_sync.is_set
	|| configured_demand_circuit.is_set
	|| interface_demand_circuit.is_set
	|| interface_dc_bitless_lsa_count.is_set
	|| transmission_delay.is_set
	|| ospf_interface_state.is_set
	|| interface_priority.is_set
	|| designated_router.is_set
	|| designated_router_id.is_set
	|| designated_router_address.is_set
	|| backup_designated_router.is_set
	|| backup_designated_router_id.is_set
	|| backup_designated_router_address.is_set
	|| network_lsa_flush_timer.is_set
	|| interface_lsa_filter.is_set
	|| hello_interval.is_set
	|| hello_interval_ms.is_set
	|| dead_interval.is_set
	|| wait_interval.is_set
	|| interface_retransmission_interrval.is_set
	|| interface_nsf_enabled.is_set
	|| interface_nsf.is_set
	|| interface_last_nsf.is_set
	|| passive_interface.is_set
	|| next_hello_time.is_set
	|| next_hello_time_ms.is_set
	|| ttl_security_enabled.is_set
	|| ttl_security_hop_count.is_set
	|| interfaceis_madj.is_set
	|| interface_madj_count.is_set
	|| prefix_suppress_primary_addresses.is_set
	|| prefix_suppress_secondary_addresses.is_set
	|| is_loopback_stub_network.is_set
	|| interface_ack_list_count.is_set
	|| interface_ack_list_high_watermark.is_set
	|| registered_for_link_down_fast_detection.is_set
	|| fast_detect_hold_down_time.is_set
	|| interface_fast_detect_hold_down.is_set
	|| fast_detect_hold_down_time_remaining.is_set
	|| fast_reroute_type.is_set
	|| fast_reroute_topology_independent_lfa.is_set
	|| interface_unnum.is_set
	|| interface_forw.is_set
	|| interface_pri_labels.is_set
	|| interface_bkp_labels.is_set
	|| interface_srte_labels.is_set
	|| (interface_bfd_information !=  nullptr && interface_bfd_information->has_data())
	|| (active_interface !=  nullptr && active_interface->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::has_operation() const
{
    for (std::size_t index=0; index<srlg.size(); index++)
    {
        if(srlg[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<interface_neighbor.size(); index++)
    {
        if(interface_neighbor[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<interface_madj.size(); index++)
    {
        if(interface_madj[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ipfrr_tiebreakers.size(); index++)
    {
        if(ipfrr_tiebreakers[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ip_sec_addr.size(); index++)
    {
        if(ip_sec_addr[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(interface_name_xr.yfilter)
	|| ydk::is_set(interface_state.yfilter)
	|| ydk::is_set(interface_line_state.yfilter)
	|| ydk::is_set(interface_address.yfilter)
	|| ydk::is_set(interface_mask.yfilter)
	|| ydk::is_set(interface_area.yfilter)
	|| ydk::is_set(interface_sid.yfilter)
	|| ydk::is_set(interface_sid_php_off.yfilter)
	|| ydk::is_set(interface_sid_n_flag_clear.yfilter)
	|| ydk::is_set(interface_strict_spf_sid.yfilter)
	|| ydk::is_set(interface_strict_spf_sid_php_off.yfilter)
	|| ydk::is_set(interface_strict_spf_sid_n_flag_clear.yfilter)
	|| ydk::is_set(interface_router_id.yfilter)
	|| ydk::is_set(network_type.yfilter)
	|| ydk::is_set(ip_mtu.yfilter)
	|| ydk::is_set(maximum_packet_size.yfilter)
	|| ydk::is_set(interface_tunnel_flags.yfilter)
	|| ydk::is_set(interface_link_cost.yfilter)
	|| ydk::is_set(interface_bandwidth.yfilter)
	|| ydk::is_set(cfg_cost_fallback.yfilter)
	|| ydk::is_set(interface_cost_fallback.yfilter)
	|| ydk::is_set(cost_fallback_active.yfilter)
	|| ydk::is_set(configured_ldp_sync.yfilter)
	|| ydk::is_set(configured_ldp_sync_igp_shortcuts.yfilter)
	|| ydk::is_set(interface_ldp_sync.yfilter)
	|| ydk::is_set(configured_demand_circuit.yfilter)
	|| ydk::is_set(interface_demand_circuit.yfilter)
	|| ydk::is_set(interface_dc_bitless_lsa_count.yfilter)
	|| ydk::is_set(transmission_delay.yfilter)
	|| ydk::is_set(ospf_interface_state.yfilter)
	|| ydk::is_set(interface_priority.yfilter)
	|| ydk::is_set(designated_router.yfilter)
	|| ydk::is_set(designated_router_id.yfilter)
	|| ydk::is_set(designated_router_address.yfilter)
	|| ydk::is_set(backup_designated_router.yfilter)
	|| ydk::is_set(backup_designated_router_id.yfilter)
	|| ydk::is_set(backup_designated_router_address.yfilter)
	|| ydk::is_set(network_lsa_flush_timer.yfilter)
	|| ydk::is_set(interface_lsa_filter.yfilter)
	|| ydk::is_set(hello_interval.yfilter)
	|| ydk::is_set(hello_interval_ms.yfilter)
	|| ydk::is_set(dead_interval.yfilter)
	|| ydk::is_set(wait_interval.yfilter)
	|| ydk::is_set(interface_retransmission_interrval.yfilter)
	|| ydk::is_set(interface_nsf_enabled.yfilter)
	|| ydk::is_set(interface_nsf.yfilter)
	|| ydk::is_set(interface_last_nsf.yfilter)
	|| ydk::is_set(passive_interface.yfilter)
	|| ydk::is_set(next_hello_time.yfilter)
	|| ydk::is_set(next_hello_time_ms.yfilter)
	|| ydk::is_set(ttl_security_enabled.yfilter)
	|| ydk::is_set(ttl_security_hop_count.yfilter)
	|| ydk::is_set(interfaceis_madj.yfilter)
	|| ydk::is_set(interface_madj_count.yfilter)
	|| ydk::is_set(prefix_suppress_primary_addresses.yfilter)
	|| ydk::is_set(prefix_suppress_secondary_addresses.yfilter)
	|| ydk::is_set(is_loopback_stub_network.yfilter)
	|| ydk::is_set(interface_ack_list_count.yfilter)
	|| ydk::is_set(interface_ack_list_high_watermark.yfilter)
	|| ydk::is_set(registered_for_link_down_fast_detection.yfilter)
	|| ydk::is_set(fast_detect_hold_down_time.yfilter)
	|| ydk::is_set(interface_fast_detect_hold_down.yfilter)
	|| ydk::is_set(fast_detect_hold_down_time_remaining.yfilter)
	|| ydk::is_set(fast_reroute_type.yfilter)
	|| ydk::is_set(fast_reroute_topology_independent_lfa.yfilter)
	|| ydk::is_set(interface_unnum.yfilter)
	|| ydk::is_set(interface_forw.yfilter)
	|| ydk::is_set(interface_pri_labels.yfilter)
	|| ydk::is_set(interface_bkp_labels.yfilter)
	|| ydk::is_set(interface_srte_labels.yfilter)
	|| (interface_bfd_information !=  nullptr && interface_bfd_information->has_operation())
	|| (active_interface !=  nullptr && active_interface->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.yfilter)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (interface_state.is_set || is_set(interface_state.yfilter)) leaf_name_data.push_back(interface_state.get_name_leafdata());
    if (interface_line_state.is_set || is_set(interface_line_state.yfilter)) leaf_name_data.push_back(interface_line_state.get_name_leafdata());
    if (interface_address.is_set || is_set(interface_address.yfilter)) leaf_name_data.push_back(interface_address.get_name_leafdata());
    if (interface_mask.is_set || is_set(interface_mask.yfilter)) leaf_name_data.push_back(interface_mask.get_name_leafdata());
    if (interface_area.is_set || is_set(interface_area.yfilter)) leaf_name_data.push_back(interface_area.get_name_leafdata());
    if (interface_sid.is_set || is_set(interface_sid.yfilter)) leaf_name_data.push_back(interface_sid.get_name_leafdata());
    if (interface_sid_php_off.is_set || is_set(interface_sid_php_off.yfilter)) leaf_name_data.push_back(interface_sid_php_off.get_name_leafdata());
    if (interface_sid_n_flag_clear.is_set || is_set(interface_sid_n_flag_clear.yfilter)) leaf_name_data.push_back(interface_sid_n_flag_clear.get_name_leafdata());
    if (interface_strict_spf_sid.is_set || is_set(interface_strict_spf_sid.yfilter)) leaf_name_data.push_back(interface_strict_spf_sid.get_name_leafdata());
    if (interface_strict_spf_sid_php_off.is_set || is_set(interface_strict_spf_sid_php_off.yfilter)) leaf_name_data.push_back(interface_strict_spf_sid_php_off.get_name_leafdata());
    if (interface_strict_spf_sid_n_flag_clear.is_set || is_set(interface_strict_spf_sid_n_flag_clear.yfilter)) leaf_name_data.push_back(interface_strict_spf_sid_n_flag_clear.get_name_leafdata());
    if (interface_router_id.is_set || is_set(interface_router_id.yfilter)) leaf_name_data.push_back(interface_router_id.get_name_leafdata());
    if (network_type.is_set || is_set(network_type.yfilter)) leaf_name_data.push_back(network_type.get_name_leafdata());
    if (ip_mtu.is_set || is_set(ip_mtu.yfilter)) leaf_name_data.push_back(ip_mtu.get_name_leafdata());
    if (maximum_packet_size.is_set || is_set(maximum_packet_size.yfilter)) leaf_name_data.push_back(maximum_packet_size.get_name_leafdata());
    if (interface_tunnel_flags.is_set || is_set(interface_tunnel_flags.yfilter)) leaf_name_data.push_back(interface_tunnel_flags.get_name_leafdata());
    if (interface_link_cost.is_set || is_set(interface_link_cost.yfilter)) leaf_name_data.push_back(interface_link_cost.get_name_leafdata());
    if (interface_bandwidth.is_set || is_set(interface_bandwidth.yfilter)) leaf_name_data.push_back(interface_bandwidth.get_name_leafdata());
    if (cfg_cost_fallback.is_set || is_set(cfg_cost_fallback.yfilter)) leaf_name_data.push_back(cfg_cost_fallback.get_name_leafdata());
    if (interface_cost_fallback.is_set || is_set(interface_cost_fallback.yfilter)) leaf_name_data.push_back(interface_cost_fallback.get_name_leafdata());
    if (cost_fallback_active.is_set || is_set(cost_fallback_active.yfilter)) leaf_name_data.push_back(cost_fallback_active.get_name_leafdata());
    if (configured_ldp_sync.is_set || is_set(configured_ldp_sync.yfilter)) leaf_name_data.push_back(configured_ldp_sync.get_name_leafdata());
    if (configured_ldp_sync_igp_shortcuts.is_set || is_set(configured_ldp_sync_igp_shortcuts.yfilter)) leaf_name_data.push_back(configured_ldp_sync_igp_shortcuts.get_name_leafdata());
    if (interface_ldp_sync.is_set || is_set(interface_ldp_sync.yfilter)) leaf_name_data.push_back(interface_ldp_sync.get_name_leafdata());
    if (configured_demand_circuit.is_set || is_set(configured_demand_circuit.yfilter)) leaf_name_data.push_back(configured_demand_circuit.get_name_leafdata());
    if (interface_demand_circuit.is_set || is_set(interface_demand_circuit.yfilter)) leaf_name_data.push_back(interface_demand_circuit.get_name_leafdata());
    if (interface_dc_bitless_lsa_count.is_set || is_set(interface_dc_bitless_lsa_count.yfilter)) leaf_name_data.push_back(interface_dc_bitless_lsa_count.get_name_leafdata());
    if (transmission_delay.is_set || is_set(transmission_delay.yfilter)) leaf_name_data.push_back(transmission_delay.get_name_leafdata());
    if (ospf_interface_state.is_set || is_set(ospf_interface_state.yfilter)) leaf_name_data.push_back(ospf_interface_state.get_name_leafdata());
    if (interface_priority.is_set || is_set(interface_priority.yfilter)) leaf_name_data.push_back(interface_priority.get_name_leafdata());
    if (designated_router.is_set || is_set(designated_router.yfilter)) leaf_name_data.push_back(designated_router.get_name_leafdata());
    if (designated_router_id.is_set || is_set(designated_router_id.yfilter)) leaf_name_data.push_back(designated_router_id.get_name_leafdata());
    if (designated_router_address.is_set || is_set(designated_router_address.yfilter)) leaf_name_data.push_back(designated_router_address.get_name_leafdata());
    if (backup_designated_router.is_set || is_set(backup_designated_router.yfilter)) leaf_name_data.push_back(backup_designated_router.get_name_leafdata());
    if (backup_designated_router_id.is_set || is_set(backup_designated_router_id.yfilter)) leaf_name_data.push_back(backup_designated_router_id.get_name_leafdata());
    if (backup_designated_router_address.is_set || is_set(backup_designated_router_address.yfilter)) leaf_name_data.push_back(backup_designated_router_address.get_name_leafdata());
    if (network_lsa_flush_timer.is_set || is_set(network_lsa_flush_timer.yfilter)) leaf_name_data.push_back(network_lsa_flush_timer.get_name_leafdata());
    if (interface_lsa_filter.is_set || is_set(interface_lsa_filter.yfilter)) leaf_name_data.push_back(interface_lsa_filter.get_name_leafdata());
    if (hello_interval.is_set || is_set(hello_interval.yfilter)) leaf_name_data.push_back(hello_interval.get_name_leafdata());
    if (hello_interval_ms.is_set || is_set(hello_interval_ms.yfilter)) leaf_name_data.push_back(hello_interval_ms.get_name_leafdata());
    if (dead_interval.is_set || is_set(dead_interval.yfilter)) leaf_name_data.push_back(dead_interval.get_name_leafdata());
    if (wait_interval.is_set || is_set(wait_interval.yfilter)) leaf_name_data.push_back(wait_interval.get_name_leafdata());
    if (interface_retransmission_interrval.is_set || is_set(interface_retransmission_interrval.yfilter)) leaf_name_data.push_back(interface_retransmission_interrval.get_name_leafdata());
    if (interface_nsf_enabled.is_set || is_set(interface_nsf_enabled.yfilter)) leaf_name_data.push_back(interface_nsf_enabled.get_name_leafdata());
    if (interface_nsf.is_set || is_set(interface_nsf.yfilter)) leaf_name_data.push_back(interface_nsf.get_name_leafdata());
    if (interface_last_nsf.is_set || is_set(interface_last_nsf.yfilter)) leaf_name_data.push_back(interface_last_nsf.get_name_leafdata());
    if (passive_interface.is_set || is_set(passive_interface.yfilter)) leaf_name_data.push_back(passive_interface.get_name_leafdata());
    if (next_hello_time.is_set || is_set(next_hello_time.yfilter)) leaf_name_data.push_back(next_hello_time.get_name_leafdata());
    if (next_hello_time_ms.is_set || is_set(next_hello_time_ms.yfilter)) leaf_name_data.push_back(next_hello_time_ms.get_name_leafdata());
    if (ttl_security_enabled.is_set || is_set(ttl_security_enabled.yfilter)) leaf_name_data.push_back(ttl_security_enabled.get_name_leafdata());
    if (ttl_security_hop_count.is_set || is_set(ttl_security_hop_count.yfilter)) leaf_name_data.push_back(ttl_security_hop_count.get_name_leafdata());
    if (interfaceis_madj.is_set || is_set(interfaceis_madj.yfilter)) leaf_name_data.push_back(interfaceis_madj.get_name_leafdata());
    if (interface_madj_count.is_set || is_set(interface_madj_count.yfilter)) leaf_name_data.push_back(interface_madj_count.get_name_leafdata());
    if (prefix_suppress_primary_addresses.is_set || is_set(prefix_suppress_primary_addresses.yfilter)) leaf_name_data.push_back(prefix_suppress_primary_addresses.get_name_leafdata());
    if (prefix_suppress_secondary_addresses.is_set || is_set(prefix_suppress_secondary_addresses.yfilter)) leaf_name_data.push_back(prefix_suppress_secondary_addresses.get_name_leafdata());
    if (is_loopback_stub_network.is_set || is_set(is_loopback_stub_network.yfilter)) leaf_name_data.push_back(is_loopback_stub_network.get_name_leafdata());
    if (interface_ack_list_count.is_set || is_set(interface_ack_list_count.yfilter)) leaf_name_data.push_back(interface_ack_list_count.get_name_leafdata());
    if (interface_ack_list_high_watermark.is_set || is_set(interface_ack_list_high_watermark.yfilter)) leaf_name_data.push_back(interface_ack_list_high_watermark.get_name_leafdata());
    if (registered_for_link_down_fast_detection.is_set || is_set(registered_for_link_down_fast_detection.yfilter)) leaf_name_data.push_back(registered_for_link_down_fast_detection.get_name_leafdata());
    if (fast_detect_hold_down_time.is_set || is_set(fast_detect_hold_down_time.yfilter)) leaf_name_data.push_back(fast_detect_hold_down_time.get_name_leafdata());
    if (interface_fast_detect_hold_down.is_set || is_set(interface_fast_detect_hold_down.yfilter)) leaf_name_data.push_back(interface_fast_detect_hold_down.get_name_leafdata());
    if (fast_detect_hold_down_time_remaining.is_set || is_set(fast_detect_hold_down_time_remaining.yfilter)) leaf_name_data.push_back(fast_detect_hold_down_time_remaining.get_name_leafdata());
    if (fast_reroute_type.is_set || is_set(fast_reroute_type.yfilter)) leaf_name_data.push_back(fast_reroute_type.get_name_leafdata());
    if (fast_reroute_topology_independent_lfa.is_set || is_set(fast_reroute_topology_independent_lfa.yfilter)) leaf_name_data.push_back(fast_reroute_topology_independent_lfa.get_name_leafdata());
    if (interface_unnum.is_set || is_set(interface_unnum.yfilter)) leaf_name_data.push_back(interface_unnum.get_name_leafdata());
    if (interface_forw.is_set || is_set(interface_forw.yfilter)) leaf_name_data.push_back(interface_forw.get_name_leafdata());
    if (interface_pri_labels.is_set || is_set(interface_pri_labels.yfilter)) leaf_name_data.push_back(interface_pri_labels.get_name_leafdata());
    if (interface_bkp_labels.is_set || is_set(interface_bkp_labels.yfilter)) leaf_name_data.push_back(interface_bkp_labels.get_name_leafdata());
    if (interface_srte_labels.is_set || is_set(interface_srte_labels.yfilter)) leaf_name_data.push_back(interface_srte_labels.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-bfd-information")
    {
        if(interface_bfd_information == nullptr)
        {
            interface_bfd_information = std::make_shared<Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::InterfaceBfdInformation>();
        }
        return interface_bfd_information;
    }

    if(child_yang_name == "active-interface")
    {
        if(active_interface == nullptr)
        {
            active_interface = std::make_shared<Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::ActiveInterface>();
        }
        return active_interface;
    }

    if(child_yang_name == "srlg")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::Srlg>();
        c->parent = this;
        srlg.push_back(c);
        return c;
    }

    if(child_yang_name == "interface-neighbor")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::InterfaceNeighbor>();
        c->parent = this;
        interface_neighbor.push_back(c);
        return c;
    }

    if(child_yang_name == "interface-madj")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::InterfaceMadj>();
        c->parent = this;
        interface_madj.push_back(c);
        return c;
    }

    if(child_yang_name == "ipfrr-tiebreakers")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::IpfrrTiebreakers>();
        c->parent = this;
        ipfrr_tiebreakers.push_back(c);
        return c;
    }

    if(child_yang_name == "ip-sec-addr")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::IpSecAddr>();
        c->parent = this;
        ip_sec_addr.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(interface_bfd_information != nullptr)
    {
        children["interface-bfd-information"] = interface_bfd_information;
    }

    if(active_interface != nullptr)
    {
        children["active-interface"] = active_interface;
    }

    count = 0;
    for (auto const & c : srlg)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : interface_neighbor)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : interface_madj)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : ipfrr_tiebreakers)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : ip_sec_addr)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
        interface_name_xr.value_namespace = name_space;
        interface_name_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-state")
    {
        interface_state = value;
        interface_state.value_namespace = name_space;
        interface_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-line-state")
    {
        interface_line_state = value;
        interface_line_state.value_namespace = name_space;
        interface_line_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-address")
    {
        interface_address = value;
        interface_address.value_namespace = name_space;
        interface_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-mask")
    {
        interface_mask = value;
        interface_mask.value_namespace = name_space;
        interface_mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-area")
    {
        interface_area = value;
        interface_area.value_namespace = name_space;
        interface_area.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-sid")
    {
        interface_sid = value;
        interface_sid.value_namespace = name_space;
        interface_sid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-sid-php-off")
    {
        interface_sid_php_off = value;
        interface_sid_php_off.value_namespace = name_space;
        interface_sid_php_off.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-sid-n-flag-clear")
    {
        interface_sid_n_flag_clear = value;
        interface_sid_n_flag_clear.value_namespace = name_space;
        interface_sid_n_flag_clear.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-strict-spf-sid")
    {
        interface_strict_spf_sid = value;
        interface_strict_spf_sid.value_namespace = name_space;
        interface_strict_spf_sid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-strict-spf-sid-php-off")
    {
        interface_strict_spf_sid_php_off = value;
        interface_strict_spf_sid_php_off.value_namespace = name_space;
        interface_strict_spf_sid_php_off.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-strict-spf-sid-n-flag-clear")
    {
        interface_strict_spf_sid_n_flag_clear = value;
        interface_strict_spf_sid_n_flag_clear.value_namespace = name_space;
        interface_strict_spf_sid_n_flag_clear.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-router-id")
    {
        interface_router_id = value;
        interface_router_id.value_namespace = name_space;
        interface_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "network-type")
    {
        network_type = value;
        network_type.value_namespace = name_space;
        network_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-mtu")
    {
        ip_mtu = value;
        ip_mtu.value_namespace = name_space;
        ip_mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-packet-size")
    {
        maximum_packet_size = value;
        maximum_packet_size.value_namespace = name_space;
        maximum_packet_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-tunnel-flags")
    {
        interface_tunnel_flags = value;
        interface_tunnel_flags.value_namespace = name_space;
        interface_tunnel_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-link-cost")
    {
        interface_link_cost = value;
        interface_link_cost.value_namespace = name_space;
        interface_link_cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-bandwidth")
    {
        interface_bandwidth = value;
        interface_bandwidth.value_namespace = name_space;
        interface_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cfg-cost-fallback")
    {
        cfg_cost_fallback = value;
        cfg_cost_fallback.value_namespace = name_space;
        cfg_cost_fallback.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-cost-fallback")
    {
        interface_cost_fallback = value;
        interface_cost_fallback.value_namespace = name_space;
        interface_cost_fallback.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cost-fallback-active")
    {
        cost_fallback_active = value;
        cost_fallback_active.value_namespace = name_space;
        cost_fallback_active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-ldp-sync")
    {
        configured_ldp_sync = value;
        configured_ldp_sync.value_namespace = name_space;
        configured_ldp_sync.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-ldp-sync-igp-shortcuts")
    {
        configured_ldp_sync_igp_shortcuts = value;
        configured_ldp_sync_igp_shortcuts.value_namespace = name_space;
        configured_ldp_sync_igp_shortcuts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-ldp-sync")
    {
        interface_ldp_sync = value;
        interface_ldp_sync.value_namespace = name_space;
        interface_ldp_sync.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-demand-circuit")
    {
        configured_demand_circuit = value;
        configured_demand_circuit.value_namespace = name_space;
        configured_demand_circuit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-demand-circuit")
    {
        interface_demand_circuit = value;
        interface_demand_circuit.value_namespace = name_space;
        interface_demand_circuit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-dc-bitless-lsa-count")
    {
        interface_dc_bitless_lsa_count = value;
        interface_dc_bitless_lsa_count.value_namespace = name_space;
        interface_dc_bitless_lsa_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmission-delay")
    {
        transmission_delay = value;
        transmission_delay.value_namespace = name_space;
        transmission_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospf-interface-state")
    {
        ospf_interface_state = value;
        ospf_interface_state.value_namespace = name_space;
        ospf_interface_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-priority")
    {
        interface_priority = value;
        interface_priority.value_namespace = name_space;
        interface_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "designated-router")
    {
        designated_router = value;
        designated_router.value_namespace = name_space;
        designated_router.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "designated-router-id")
    {
        designated_router_id = value;
        designated_router_id.value_namespace = name_space;
        designated_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "designated-router-address")
    {
        designated_router_address = value;
        designated_router_address.value_namespace = name_space;
        designated_router_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-designated-router")
    {
        backup_designated_router = value;
        backup_designated_router.value_namespace = name_space;
        backup_designated_router.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-designated-router-id")
    {
        backup_designated_router_id = value;
        backup_designated_router_id.value_namespace = name_space;
        backup_designated_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-designated-router-address")
    {
        backup_designated_router_address = value;
        backup_designated_router_address.value_namespace = name_space;
        backup_designated_router_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "network-lsa-flush-timer")
    {
        network_lsa_flush_timer = value;
        network_lsa_flush_timer.value_namespace = name_space;
        network_lsa_flush_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-lsa-filter")
    {
        interface_lsa_filter = value;
        interface_lsa_filter.value_namespace = name_space;
        interface_lsa_filter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-interval")
    {
        hello_interval = value;
        hello_interval.value_namespace = name_space;
        hello_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-interval-ms")
    {
        hello_interval_ms = value;
        hello_interval_ms.value_namespace = name_space;
        hello_interval_ms.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dead-interval")
    {
        dead_interval = value;
        dead_interval.value_namespace = name_space;
        dead_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wait-interval")
    {
        wait_interval = value;
        wait_interval.value_namespace = name_space;
        wait_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-retransmission-interrval")
    {
        interface_retransmission_interrval = value;
        interface_retransmission_interrval.value_namespace = name_space;
        interface_retransmission_interrval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-nsf-enabled")
    {
        interface_nsf_enabled = value;
        interface_nsf_enabled.value_namespace = name_space;
        interface_nsf_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-nsf")
    {
        interface_nsf = value;
        interface_nsf.value_namespace = name_space;
        interface_nsf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-last-nsf")
    {
        interface_last_nsf = value;
        interface_last_nsf.value_namespace = name_space;
        interface_last_nsf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "passive-interface")
    {
        passive_interface = value;
        passive_interface.value_namespace = name_space;
        passive_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hello-time")
    {
        next_hello_time = value;
        next_hello_time.value_namespace = name_space;
        next_hello_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hello-time-ms")
    {
        next_hello_time_ms = value;
        next_hello_time_ms.value_namespace = name_space;
        next_hello_time_ms.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ttl-security-enabled")
    {
        ttl_security_enabled = value;
        ttl_security_enabled.value_namespace = name_space;
        ttl_security_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ttl-security-hop-count")
    {
        ttl_security_hop_count = value;
        ttl_security_hop_count.value_namespace = name_space;
        ttl_security_hop_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interfaceis-madj")
    {
        interfaceis_madj = value;
        interfaceis_madj.value_namespace = name_space;
        interfaceis_madj.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-madj-count")
    {
        interface_madj_count = value;
        interface_madj_count.value_namespace = name_space;
        interface_madj_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-suppress-primary-addresses")
    {
        prefix_suppress_primary_addresses = value;
        prefix_suppress_primary_addresses.value_namespace = name_space;
        prefix_suppress_primary_addresses.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-suppress-secondary-addresses")
    {
        prefix_suppress_secondary_addresses = value;
        prefix_suppress_secondary_addresses.value_namespace = name_space;
        prefix_suppress_secondary_addresses.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-loopback-stub-network")
    {
        is_loopback_stub_network = value;
        is_loopback_stub_network.value_namespace = name_space;
        is_loopback_stub_network.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-ack-list-count")
    {
        interface_ack_list_count = value;
        interface_ack_list_count.value_namespace = name_space;
        interface_ack_list_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-ack-list-high-watermark")
    {
        interface_ack_list_high_watermark = value;
        interface_ack_list_high_watermark.value_namespace = name_space;
        interface_ack_list_high_watermark.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "registered-for-link-down-fast-detection")
    {
        registered_for_link_down_fast_detection = value;
        registered_for_link_down_fast_detection.value_namespace = name_space;
        registered_for_link_down_fast_detection.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fast-detect-hold-down-time")
    {
        fast_detect_hold_down_time = value;
        fast_detect_hold_down_time.value_namespace = name_space;
        fast_detect_hold_down_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-fast-detect-hold-down")
    {
        interface_fast_detect_hold_down = value;
        interface_fast_detect_hold_down.value_namespace = name_space;
        interface_fast_detect_hold_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fast-detect-hold-down-time-remaining")
    {
        fast_detect_hold_down_time_remaining = value;
        fast_detect_hold_down_time_remaining.value_namespace = name_space;
        fast_detect_hold_down_time_remaining.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fast-reroute-type")
    {
        fast_reroute_type = value;
        fast_reroute_type.value_namespace = name_space;
        fast_reroute_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fast-reroute-topology-independent-lfa")
    {
        fast_reroute_topology_independent_lfa = value;
        fast_reroute_topology_independent_lfa.value_namespace = name_space;
        fast_reroute_topology_independent_lfa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-unnum")
    {
        interface_unnum = value;
        interface_unnum.value_namespace = name_space;
        interface_unnum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-forw")
    {
        interface_forw = value;
        interface_forw.value_namespace = name_space;
        interface_forw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-pri-labels")
    {
        interface_pri_labels = value;
        interface_pri_labels.value_namespace = name_space;
        interface_pri_labels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-bkp-labels")
    {
        interface_bkp_labels = value;
        interface_bkp_labels.value_namespace = name_space;
        interface_bkp_labels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-srte-labels")
    {
        interface_srte_labels = value;
        interface_srte_labels.value_namespace = name_space;
        interface_srte_labels.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr.yfilter = yfilter;
    }
    if(value_path == "interface-state")
    {
        interface_state.yfilter = yfilter;
    }
    if(value_path == "interface-line-state")
    {
        interface_line_state.yfilter = yfilter;
    }
    if(value_path == "interface-address")
    {
        interface_address.yfilter = yfilter;
    }
    if(value_path == "interface-mask")
    {
        interface_mask.yfilter = yfilter;
    }
    if(value_path == "interface-area")
    {
        interface_area.yfilter = yfilter;
    }
    if(value_path == "interface-sid")
    {
        interface_sid.yfilter = yfilter;
    }
    if(value_path == "interface-sid-php-off")
    {
        interface_sid_php_off.yfilter = yfilter;
    }
    if(value_path == "interface-sid-n-flag-clear")
    {
        interface_sid_n_flag_clear.yfilter = yfilter;
    }
    if(value_path == "interface-strict-spf-sid")
    {
        interface_strict_spf_sid.yfilter = yfilter;
    }
    if(value_path == "interface-strict-spf-sid-php-off")
    {
        interface_strict_spf_sid_php_off.yfilter = yfilter;
    }
    if(value_path == "interface-strict-spf-sid-n-flag-clear")
    {
        interface_strict_spf_sid_n_flag_clear.yfilter = yfilter;
    }
    if(value_path == "interface-router-id")
    {
        interface_router_id.yfilter = yfilter;
    }
    if(value_path == "network-type")
    {
        network_type.yfilter = yfilter;
    }
    if(value_path == "ip-mtu")
    {
        ip_mtu.yfilter = yfilter;
    }
    if(value_path == "maximum-packet-size")
    {
        maximum_packet_size.yfilter = yfilter;
    }
    if(value_path == "interface-tunnel-flags")
    {
        interface_tunnel_flags.yfilter = yfilter;
    }
    if(value_path == "interface-link-cost")
    {
        interface_link_cost.yfilter = yfilter;
    }
    if(value_path == "interface-bandwidth")
    {
        interface_bandwidth.yfilter = yfilter;
    }
    if(value_path == "cfg-cost-fallback")
    {
        cfg_cost_fallback.yfilter = yfilter;
    }
    if(value_path == "interface-cost-fallback")
    {
        interface_cost_fallback.yfilter = yfilter;
    }
    if(value_path == "cost-fallback-active")
    {
        cost_fallback_active.yfilter = yfilter;
    }
    if(value_path == "configured-ldp-sync")
    {
        configured_ldp_sync.yfilter = yfilter;
    }
    if(value_path == "configured-ldp-sync-igp-shortcuts")
    {
        configured_ldp_sync_igp_shortcuts.yfilter = yfilter;
    }
    if(value_path == "interface-ldp-sync")
    {
        interface_ldp_sync.yfilter = yfilter;
    }
    if(value_path == "configured-demand-circuit")
    {
        configured_demand_circuit.yfilter = yfilter;
    }
    if(value_path == "interface-demand-circuit")
    {
        interface_demand_circuit.yfilter = yfilter;
    }
    if(value_path == "interface-dc-bitless-lsa-count")
    {
        interface_dc_bitless_lsa_count.yfilter = yfilter;
    }
    if(value_path == "transmission-delay")
    {
        transmission_delay.yfilter = yfilter;
    }
    if(value_path == "ospf-interface-state")
    {
        ospf_interface_state.yfilter = yfilter;
    }
    if(value_path == "interface-priority")
    {
        interface_priority.yfilter = yfilter;
    }
    if(value_path == "designated-router")
    {
        designated_router.yfilter = yfilter;
    }
    if(value_path == "designated-router-id")
    {
        designated_router_id.yfilter = yfilter;
    }
    if(value_path == "designated-router-address")
    {
        designated_router_address.yfilter = yfilter;
    }
    if(value_path == "backup-designated-router")
    {
        backup_designated_router.yfilter = yfilter;
    }
    if(value_path == "backup-designated-router-id")
    {
        backup_designated_router_id.yfilter = yfilter;
    }
    if(value_path == "backup-designated-router-address")
    {
        backup_designated_router_address.yfilter = yfilter;
    }
    if(value_path == "network-lsa-flush-timer")
    {
        network_lsa_flush_timer.yfilter = yfilter;
    }
    if(value_path == "interface-lsa-filter")
    {
        interface_lsa_filter.yfilter = yfilter;
    }
    if(value_path == "hello-interval")
    {
        hello_interval.yfilter = yfilter;
    }
    if(value_path == "hello-interval-ms")
    {
        hello_interval_ms.yfilter = yfilter;
    }
    if(value_path == "dead-interval")
    {
        dead_interval.yfilter = yfilter;
    }
    if(value_path == "wait-interval")
    {
        wait_interval.yfilter = yfilter;
    }
    if(value_path == "interface-retransmission-interrval")
    {
        interface_retransmission_interrval.yfilter = yfilter;
    }
    if(value_path == "interface-nsf-enabled")
    {
        interface_nsf_enabled.yfilter = yfilter;
    }
    if(value_path == "interface-nsf")
    {
        interface_nsf.yfilter = yfilter;
    }
    if(value_path == "interface-last-nsf")
    {
        interface_last_nsf.yfilter = yfilter;
    }
    if(value_path == "passive-interface")
    {
        passive_interface.yfilter = yfilter;
    }
    if(value_path == "next-hello-time")
    {
        next_hello_time.yfilter = yfilter;
    }
    if(value_path == "next-hello-time-ms")
    {
        next_hello_time_ms.yfilter = yfilter;
    }
    if(value_path == "ttl-security-enabled")
    {
        ttl_security_enabled.yfilter = yfilter;
    }
    if(value_path == "ttl-security-hop-count")
    {
        ttl_security_hop_count.yfilter = yfilter;
    }
    if(value_path == "interfaceis-madj")
    {
        interfaceis_madj.yfilter = yfilter;
    }
    if(value_path == "interface-madj-count")
    {
        interface_madj_count.yfilter = yfilter;
    }
    if(value_path == "prefix-suppress-primary-addresses")
    {
        prefix_suppress_primary_addresses.yfilter = yfilter;
    }
    if(value_path == "prefix-suppress-secondary-addresses")
    {
        prefix_suppress_secondary_addresses.yfilter = yfilter;
    }
    if(value_path == "is-loopback-stub-network")
    {
        is_loopback_stub_network.yfilter = yfilter;
    }
    if(value_path == "interface-ack-list-count")
    {
        interface_ack_list_count.yfilter = yfilter;
    }
    if(value_path == "interface-ack-list-high-watermark")
    {
        interface_ack_list_high_watermark.yfilter = yfilter;
    }
    if(value_path == "registered-for-link-down-fast-detection")
    {
        registered_for_link_down_fast_detection.yfilter = yfilter;
    }
    if(value_path == "fast-detect-hold-down-time")
    {
        fast_detect_hold_down_time.yfilter = yfilter;
    }
    if(value_path == "interface-fast-detect-hold-down")
    {
        interface_fast_detect_hold_down.yfilter = yfilter;
    }
    if(value_path == "fast-detect-hold-down-time-remaining")
    {
        fast_detect_hold_down_time_remaining.yfilter = yfilter;
    }
    if(value_path == "fast-reroute-type")
    {
        fast_reroute_type.yfilter = yfilter;
    }
    if(value_path == "fast-reroute-topology-independent-lfa")
    {
        fast_reroute_topology_independent_lfa.yfilter = yfilter;
    }
    if(value_path == "interface-unnum")
    {
        interface_unnum.yfilter = yfilter;
    }
    if(value_path == "interface-forw")
    {
        interface_forw.yfilter = yfilter;
    }
    if(value_path == "interface-pri-labels")
    {
        interface_pri_labels.yfilter = yfilter;
    }
    if(value_path == "interface-bkp-labels")
    {
        interface_bkp_labels.yfilter = yfilter;
    }
    if(value_path == "interface-srte-labels")
    {
        interface_srte_labels.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-bfd-information" || name == "active-interface" || name == "srlg" || name == "interface-neighbor" || name == "interface-madj" || name == "ipfrr-tiebreakers" || name == "ip-sec-addr" || name == "interface-name" || name == "interface-name-xr" || name == "interface-state" || name == "interface-line-state" || name == "interface-address" || name == "interface-mask" || name == "interface-area" || name == "interface-sid" || name == "interface-sid-php-off" || name == "interface-sid-n-flag-clear" || name == "interface-strict-spf-sid" || name == "interface-strict-spf-sid-php-off" || name == "interface-strict-spf-sid-n-flag-clear" || name == "interface-router-id" || name == "network-type" || name == "ip-mtu" || name == "maximum-packet-size" || name == "interface-tunnel-flags" || name == "interface-link-cost" || name == "interface-bandwidth" || name == "cfg-cost-fallback" || name == "interface-cost-fallback" || name == "cost-fallback-active" || name == "configured-ldp-sync" || name == "configured-ldp-sync-igp-shortcuts" || name == "interface-ldp-sync" || name == "configured-demand-circuit" || name == "interface-demand-circuit" || name == "interface-dc-bitless-lsa-count" || name == "transmission-delay" || name == "ospf-interface-state" || name == "interface-priority" || name == "designated-router" || name == "designated-router-id" || name == "designated-router-address" || name == "backup-designated-router" || name == "backup-designated-router-id" || name == "backup-designated-router-address" || name == "network-lsa-flush-timer" || name == "interface-lsa-filter" || name == "hello-interval" || name == "hello-interval-ms" || name == "dead-interval" || name == "wait-interval" || name == "interface-retransmission-interrval" || name == "interface-nsf-enabled" || name == "interface-nsf" || name == "interface-last-nsf" || name == "passive-interface" || name == "next-hello-time" || name == "next-hello-time-ms" || name == "ttl-security-enabled" || name == "ttl-security-hop-count" || name == "interfaceis-madj" || name == "interface-madj-count" || name == "prefix-suppress-primary-addresses" || name == "prefix-suppress-secondary-addresses" || name == "is-loopback-stub-network" || name == "interface-ack-list-count" || name == "interface-ack-list-high-watermark" || name == "registered-for-link-down-fast-detection" || name == "fast-detect-hold-down-time" || name == "interface-fast-detect-hold-down" || name == "fast-detect-hold-down-time-remaining" || name == "fast-reroute-type" || name == "fast-reroute-topology-independent-lfa" || name == "interface-unnum" || name == "interface-forw" || name == "interface-pri-labels" || name == "interface-bkp-labels" || name == "interface-srte-labels")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::InterfaceBfdInformation::InterfaceBfdInformation()
    :
    bfd_intf_enable_mode{YType::uint32, "bfd-intf-enable-mode"},
    interval{YType::uint32, "interval"},
    detection_multiplier{YType::uint32, "detection-multiplier"}
{

    yang_name = "interface-bfd-information"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::InterfaceBfdInformation::~InterfaceBfdInformation()
{
}

bool Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::InterfaceBfdInformation::has_data() const
{
    return bfd_intf_enable_mode.is_set
	|| interval.is_set
	|| detection_multiplier.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::InterfaceBfdInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bfd_intf_enable_mode.yfilter)
	|| ydk::is_set(interval.yfilter)
	|| ydk::is_set(detection_multiplier.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::InterfaceBfdInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-bfd-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::InterfaceBfdInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bfd_intf_enable_mode.is_set || is_set(bfd_intf_enable_mode.yfilter)) leaf_name_data.push_back(bfd_intf_enable_mode.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (detection_multiplier.is_set || is_set(detection_multiplier.yfilter)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::InterfaceBfdInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::InterfaceBfdInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::InterfaceBfdInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bfd-intf-enable-mode")
    {
        bfd_intf_enable_mode = value;
        bfd_intf_enable_mode.value_namespace = name_space;
        bfd_intf_enable_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
        detection_multiplier.value_namespace = name_space;
        detection_multiplier.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::InterfaceBfdInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bfd-intf-enable-mode")
    {
        bfd_intf_enable_mode.yfilter = yfilter;
    }
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::InterfaceBfdInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bfd-intf-enable-mode" || name == "interval" || name == "detection-multiplier")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::ActiveInterface::ActiveInterface()
    :
    wait_time{YType::uint32, "wait-time"},
    interface_area_flood_index{YType::uint32, "interface-area-flood-index"},
    interface_as_flood_index{YType::uint32, "interface-as-flood-index"},
    interface_flood_length{YType::uint32, "interface-flood-length"},
    interface_area_next_flood{YType::uint32, "interface-area-next-flood"},
    interface_area_next_flood_index{YType::uint32, "interface-area-next-flood-index"},
    interface_as_next_flood{YType::uint32, "interface-as-next-flood"},
    interface_as_next_flood_index{YType::uint32, "interface-as-next-flood-index"},
    flood_scan_length{YType::uint32, "flood-scan-length"},
    maximum_flood_length{YType::uint32, "maximum-flood-length"},
    last_flood_time{YType::uint32, "last-flood-time"},
    maximum_flood_time{YType::uint32, "maximum-flood-time"},
    interface_flood_pacing_timer{YType::uint32, "interface-flood-pacing-timer"},
    interface_neighbor_count{YType::uint16, "interface-neighbor-count"},
    suppress_hello_count{YType::uint16, "suppress-hello-count"},
    interface_authentication_type{YType::enumeration, "interface-authentication-type"},
    youngest_md_key{YType::boolean, "youngest-md-key"},
    old_md5_key_neighbor_count{YType::uint32, "old-md5-key-neighbor-count"},
    youngest_md_key_id{YType::uint16, "youngest-md-key-id"},
    keychain_id{YType::uint64, "keychain-id"}
{

    yang_name = "active-interface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::ActiveInterface::~ActiveInterface()
{
}

bool Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::ActiveInterface::has_data() const
{
    for (std::size_t index=0; index<md_keys.size(); index++)
    {
        if(md_keys[index]->has_data())
            return true;
    }
    return wait_time.is_set
	|| interface_area_flood_index.is_set
	|| interface_as_flood_index.is_set
	|| interface_flood_length.is_set
	|| interface_area_next_flood.is_set
	|| interface_area_next_flood_index.is_set
	|| interface_as_next_flood.is_set
	|| interface_as_next_flood_index.is_set
	|| flood_scan_length.is_set
	|| maximum_flood_length.is_set
	|| last_flood_time.is_set
	|| maximum_flood_time.is_set
	|| interface_flood_pacing_timer.is_set
	|| interface_neighbor_count.is_set
	|| suppress_hello_count.is_set
	|| interface_authentication_type.is_set
	|| youngest_md_key.is_set
	|| old_md5_key_neighbor_count.is_set
	|| youngest_md_key_id.is_set
	|| keychain_id.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::ActiveInterface::has_operation() const
{
    for (std::size_t index=0; index<md_keys.size(); index++)
    {
        if(md_keys[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(wait_time.yfilter)
	|| ydk::is_set(interface_area_flood_index.yfilter)
	|| ydk::is_set(interface_as_flood_index.yfilter)
	|| ydk::is_set(interface_flood_length.yfilter)
	|| ydk::is_set(interface_area_next_flood.yfilter)
	|| ydk::is_set(interface_area_next_flood_index.yfilter)
	|| ydk::is_set(interface_as_next_flood.yfilter)
	|| ydk::is_set(interface_as_next_flood_index.yfilter)
	|| ydk::is_set(flood_scan_length.yfilter)
	|| ydk::is_set(maximum_flood_length.yfilter)
	|| ydk::is_set(last_flood_time.yfilter)
	|| ydk::is_set(maximum_flood_time.yfilter)
	|| ydk::is_set(interface_flood_pacing_timer.yfilter)
	|| ydk::is_set(interface_neighbor_count.yfilter)
	|| ydk::is_set(suppress_hello_count.yfilter)
	|| ydk::is_set(interface_authentication_type.yfilter)
	|| ydk::is_set(youngest_md_key.yfilter)
	|| ydk::is_set(old_md5_key_neighbor_count.yfilter)
	|| ydk::is_set(youngest_md_key_id.yfilter)
	|| ydk::is_set(keychain_id.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::ActiveInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "active-interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::ActiveInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (wait_time.is_set || is_set(wait_time.yfilter)) leaf_name_data.push_back(wait_time.get_name_leafdata());
    if (interface_area_flood_index.is_set || is_set(interface_area_flood_index.yfilter)) leaf_name_data.push_back(interface_area_flood_index.get_name_leafdata());
    if (interface_as_flood_index.is_set || is_set(interface_as_flood_index.yfilter)) leaf_name_data.push_back(interface_as_flood_index.get_name_leafdata());
    if (interface_flood_length.is_set || is_set(interface_flood_length.yfilter)) leaf_name_data.push_back(interface_flood_length.get_name_leafdata());
    if (interface_area_next_flood.is_set || is_set(interface_area_next_flood.yfilter)) leaf_name_data.push_back(interface_area_next_flood.get_name_leafdata());
    if (interface_area_next_flood_index.is_set || is_set(interface_area_next_flood_index.yfilter)) leaf_name_data.push_back(interface_area_next_flood_index.get_name_leafdata());
    if (interface_as_next_flood.is_set || is_set(interface_as_next_flood.yfilter)) leaf_name_data.push_back(interface_as_next_flood.get_name_leafdata());
    if (interface_as_next_flood_index.is_set || is_set(interface_as_next_flood_index.yfilter)) leaf_name_data.push_back(interface_as_next_flood_index.get_name_leafdata());
    if (flood_scan_length.is_set || is_set(flood_scan_length.yfilter)) leaf_name_data.push_back(flood_scan_length.get_name_leafdata());
    if (maximum_flood_length.is_set || is_set(maximum_flood_length.yfilter)) leaf_name_data.push_back(maximum_flood_length.get_name_leafdata());
    if (last_flood_time.is_set || is_set(last_flood_time.yfilter)) leaf_name_data.push_back(last_flood_time.get_name_leafdata());
    if (maximum_flood_time.is_set || is_set(maximum_flood_time.yfilter)) leaf_name_data.push_back(maximum_flood_time.get_name_leafdata());
    if (interface_flood_pacing_timer.is_set || is_set(interface_flood_pacing_timer.yfilter)) leaf_name_data.push_back(interface_flood_pacing_timer.get_name_leafdata());
    if (interface_neighbor_count.is_set || is_set(interface_neighbor_count.yfilter)) leaf_name_data.push_back(interface_neighbor_count.get_name_leafdata());
    if (suppress_hello_count.is_set || is_set(suppress_hello_count.yfilter)) leaf_name_data.push_back(suppress_hello_count.get_name_leafdata());
    if (interface_authentication_type.is_set || is_set(interface_authentication_type.yfilter)) leaf_name_data.push_back(interface_authentication_type.get_name_leafdata());
    if (youngest_md_key.is_set || is_set(youngest_md_key.yfilter)) leaf_name_data.push_back(youngest_md_key.get_name_leafdata());
    if (old_md5_key_neighbor_count.is_set || is_set(old_md5_key_neighbor_count.yfilter)) leaf_name_data.push_back(old_md5_key_neighbor_count.get_name_leafdata());
    if (youngest_md_key_id.is_set || is_set(youngest_md_key_id.yfilter)) leaf_name_data.push_back(youngest_md_key_id.get_name_leafdata());
    if (keychain_id.is_set || is_set(keychain_id.yfilter)) leaf_name_data.push_back(keychain_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::ActiveInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "md-keys")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::ActiveInterface::MdKeys>();
        c->parent = this;
        md_keys.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::ActiveInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : md_keys)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::ActiveInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "wait-time")
    {
        wait_time = value;
        wait_time.value_namespace = name_space;
        wait_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-area-flood-index")
    {
        interface_area_flood_index = value;
        interface_area_flood_index.value_namespace = name_space;
        interface_area_flood_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-as-flood-index")
    {
        interface_as_flood_index = value;
        interface_as_flood_index.value_namespace = name_space;
        interface_as_flood_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-flood-length")
    {
        interface_flood_length = value;
        interface_flood_length.value_namespace = name_space;
        interface_flood_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-area-next-flood")
    {
        interface_area_next_flood = value;
        interface_area_next_flood.value_namespace = name_space;
        interface_area_next_flood.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-area-next-flood-index")
    {
        interface_area_next_flood_index = value;
        interface_area_next_flood_index.value_namespace = name_space;
        interface_area_next_flood_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-as-next-flood")
    {
        interface_as_next_flood = value;
        interface_as_next_flood.value_namespace = name_space;
        interface_as_next_flood.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-as-next-flood-index")
    {
        interface_as_next_flood_index = value;
        interface_as_next_flood_index.value_namespace = name_space;
        interface_as_next_flood_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flood-scan-length")
    {
        flood_scan_length = value;
        flood_scan_length.value_namespace = name_space;
        flood_scan_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-flood-length")
    {
        maximum_flood_length = value;
        maximum_flood_length.value_namespace = name_space;
        maximum_flood_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-flood-time")
    {
        last_flood_time = value;
        last_flood_time.value_namespace = name_space;
        last_flood_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-flood-time")
    {
        maximum_flood_time = value;
        maximum_flood_time.value_namespace = name_space;
        maximum_flood_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-flood-pacing-timer")
    {
        interface_flood_pacing_timer = value;
        interface_flood_pacing_timer.value_namespace = name_space;
        interface_flood_pacing_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-neighbor-count")
    {
        interface_neighbor_count = value;
        interface_neighbor_count.value_namespace = name_space;
        interface_neighbor_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppress-hello-count")
    {
        suppress_hello_count = value;
        suppress_hello_count.value_namespace = name_space;
        suppress_hello_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-authentication-type")
    {
        interface_authentication_type = value;
        interface_authentication_type.value_namespace = name_space;
        interface_authentication_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "youngest-md-key")
    {
        youngest_md_key = value;
        youngest_md_key.value_namespace = name_space;
        youngest_md_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "old-md5-key-neighbor-count")
    {
        old_md5_key_neighbor_count = value;
        old_md5_key_neighbor_count.value_namespace = name_space;
        old_md5_key_neighbor_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "youngest-md-key-id")
    {
        youngest_md_key_id = value;
        youngest_md_key_id.value_namespace = name_space;
        youngest_md_key_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keychain-id")
    {
        keychain_id = value;
        keychain_id.value_namespace = name_space;
        keychain_id.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::ActiveInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "wait-time")
    {
        wait_time.yfilter = yfilter;
    }
    if(value_path == "interface-area-flood-index")
    {
        interface_area_flood_index.yfilter = yfilter;
    }
    if(value_path == "interface-as-flood-index")
    {
        interface_as_flood_index.yfilter = yfilter;
    }
    if(value_path == "interface-flood-length")
    {
        interface_flood_length.yfilter = yfilter;
    }
    if(value_path == "interface-area-next-flood")
    {
        interface_area_next_flood.yfilter = yfilter;
    }
    if(value_path == "interface-area-next-flood-index")
    {
        interface_area_next_flood_index.yfilter = yfilter;
    }
    if(value_path == "interface-as-next-flood")
    {
        interface_as_next_flood.yfilter = yfilter;
    }
    if(value_path == "interface-as-next-flood-index")
    {
        interface_as_next_flood_index.yfilter = yfilter;
    }
    if(value_path == "flood-scan-length")
    {
        flood_scan_length.yfilter = yfilter;
    }
    if(value_path == "maximum-flood-length")
    {
        maximum_flood_length.yfilter = yfilter;
    }
    if(value_path == "last-flood-time")
    {
        last_flood_time.yfilter = yfilter;
    }
    if(value_path == "maximum-flood-time")
    {
        maximum_flood_time.yfilter = yfilter;
    }
    if(value_path == "interface-flood-pacing-timer")
    {
        interface_flood_pacing_timer.yfilter = yfilter;
    }
    if(value_path == "interface-neighbor-count")
    {
        interface_neighbor_count.yfilter = yfilter;
    }
    if(value_path == "suppress-hello-count")
    {
        suppress_hello_count.yfilter = yfilter;
    }
    if(value_path == "interface-authentication-type")
    {
        interface_authentication_type.yfilter = yfilter;
    }
    if(value_path == "youngest-md-key")
    {
        youngest_md_key.yfilter = yfilter;
    }
    if(value_path == "old-md5-key-neighbor-count")
    {
        old_md5_key_neighbor_count.yfilter = yfilter;
    }
    if(value_path == "youngest-md-key-id")
    {
        youngest_md_key_id.yfilter = yfilter;
    }
    if(value_path == "keychain-id")
    {
        keychain_id.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::ActiveInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "md-keys" || name == "wait-time" || name == "interface-area-flood-index" || name == "interface-as-flood-index" || name == "interface-flood-length" || name == "interface-area-next-flood" || name == "interface-area-next-flood-index" || name == "interface-as-next-flood" || name == "interface-as-next-flood-index" || name == "flood-scan-length" || name == "maximum-flood-length" || name == "last-flood-time" || name == "maximum-flood-time" || name == "interface-flood-pacing-timer" || name == "interface-neighbor-count" || name == "suppress-hello-count" || name == "interface-authentication-type" || name == "youngest-md-key" || name == "old-md5-key-neighbor-count" || name == "youngest-md-key-id" || name == "keychain-id")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::ActiveInterface::MdKeys::MdKeys()
    :
    entry{YType::uint16, "entry"}
{

    yang_name = "md-keys"; yang_parent_name = "active-interface"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::ActiveInterface::MdKeys::~MdKeys()
{
}

bool Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::ActiveInterface::MdKeys::has_data() const
{
    return entry.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::ActiveInterface::MdKeys::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::ActiveInterface::MdKeys::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "md-keys";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::ActiveInterface::MdKeys::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::ActiveInterface::MdKeys::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::ActiveInterface::MdKeys::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::ActiveInterface::MdKeys::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::ActiveInterface::MdKeys::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::ActiveInterface::MdKeys::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::Srlg::Srlg()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "srlg"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::Srlg::~Srlg()
{
}

bool Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::Srlg::has_data() const
{
    return entry.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::Srlg::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::Srlg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srlg";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::Srlg::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::Srlg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::Srlg::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::Srlg::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::Srlg::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::Srlg::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::InterfaceNeighbor::InterfaceNeighbor()
    :
    interface_neighbor_id{YType::str, "interface-neighbor-id"},
    interface_neighbor_cost{YType::uint32, "interface-neighbor-cost"},
    neighbor_dr{YType::boolean, "neighbor-dr"},
    neighbor_bdr{YType::boolean, "neighbor-bdr"},
    suppress_hello{YType::boolean, "suppress-hello"}
{

    yang_name = "interface-neighbor"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::InterfaceNeighbor::~InterfaceNeighbor()
{
}

bool Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::InterfaceNeighbor::has_data() const
{
    return interface_neighbor_id.is_set
	|| interface_neighbor_cost.is_set
	|| neighbor_dr.is_set
	|| neighbor_bdr.is_set
	|| suppress_hello.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::InterfaceNeighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_neighbor_id.yfilter)
	|| ydk::is_set(interface_neighbor_cost.yfilter)
	|| ydk::is_set(neighbor_dr.yfilter)
	|| ydk::is_set(neighbor_bdr.yfilter)
	|| ydk::is_set(suppress_hello.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::InterfaceNeighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-neighbor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::InterfaceNeighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_neighbor_id.is_set || is_set(interface_neighbor_id.yfilter)) leaf_name_data.push_back(interface_neighbor_id.get_name_leafdata());
    if (interface_neighbor_cost.is_set || is_set(interface_neighbor_cost.yfilter)) leaf_name_data.push_back(interface_neighbor_cost.get_name_leafdata());
    if (neighbor_dr.is_set || is_set(neighbor_dr.yfilter)) leaf_name_data.push_back(neighbor_dr.get_name_leafdata());
    if (neighbor_bdr.is_set || is_set(neighbor_bdr.yfilter)) leaf_name_data.push_back(neighbor_bdr.get_name_leafdata());
    if (suppress_hello.is_set || is_set(suppress_hello.yfilter)) leaf_name_data.push_back(suppress_hello.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::InterfaceNeighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::InterfaceNeighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::InterfaceNeighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-neighbor-id")
    {
        interface_neighbor_id = value;
        interface_neighbor_id.value_namespace = name_space;
        interface_neighbor_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-neighbor-cost")
    {
        interface_neighbor_cost = value;
        interface_neighbor_cost.value_namespace = name_space;
        interface_neighbor_cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-dr")
    {
        neighbor_dr = value;
        neighbor_dr.value_namespace = name_space;
        neighbor_dr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-bdr")
    {
        neighbor_bdr = value;
        neighbor_bdr.value_namespace = name_space;
        neighbor_bdr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppress-hello")
    {
        suppress_hello = value;
        suppress_hello.value_namespace = name_space;
        suppress_hello.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::InterfaceNeighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-neighbor-id")
    {
        interface_neighbor_id.yfilter = yfilter;
    }
    if(value_path == "interface-neighbor-cost")
    {
        interface_neighbor_cost.yfilter = yfilter;
    }
    if(value_path == "neighbor-dr")
    {
        neighbor_dr.yfilter = yfilter;
    }
    if(value_path == "neighbor-bdr")
    {
        neighbor_bdr.yfilter = yfilter;
    }
    if(value_path == "suppress-hello")
    {
        suppress_hello.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::InterfaceNeighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-neighbor-id" || name == "interface-neighbor-cost" || name == "neighbor-dr" || name == "neighbor-bdr" || name == "suppress-hello")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::InterfaceMadj::InterfaceMadj()
    :
    interface_area{YType::str, "interface-area"},
    madj_area_id{YType::uint32, "madj-area-id"},
    interface_neighbor_count{YType::uint16, "interface-neighbor-count"},
    interface_adj_neighbor_count{YType::uint16, "interface-adj-neighbor-count"},
    interface_link_cost{YType::uint16, "interface-link-cost"},
    ospf_interface_state{YType::enumeration, "ospf-interface-state"}
{

    yang_name = "interface-madj"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::InterfaceMadj::~InterfaceMadj()
{
}

bool Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::InterfaceMadj::has_data() const
{
    return interface_area.is_set
	|| madj_area_id.is_set
	|| interface_neighbor_count.is_set
	|| interface_adj_neighbor_count.is_set
	|| interface_link_cost.is_set
	|| ospf_interface_state.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::InterfaceMadj::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_area.yfilter)
	|| ydk::is_set(madj_area_id.yfilter)
	|| ydk::is_set(interface_neighbor_count.yfilter)
	|| ydk::is_set(interface_adj_neighbor_count.yfilter)
	|| ydk::is_set(interface_link_cost.yfilter)
	|| ydk::is_set(ospf_interface_state.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::InterfaceMadj::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-madj";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::InterfaceMadj::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_area.is_set || is_set(interface_area.yfilter)) leaf_name_data.push_back(interface_area.get_name_leafdata());
    if (madj_area_id.is_set || is_set(madj_area_id.yfilter)) leaf_name_data.push_back(madj_area_id.get_name_leafdata());
    if (interface_neighbor_count.is_set || is_set(interface_neighbor_count.yfilter)) leaf_name_data.push_back(interface_neighbor_count.get_name_leafdata());
    if (interface_adj_neighbor_count.is_set || is_set(interface_adj_neighbor_count.yfilter)) leaf_name_data.push_back(interface_adj_neighbor_count.get_name_leafdata());
    if (interface_link_cost.is_set || is_set(interface_link_cost.yfilter)) leaf_name_data.push_back(interface_link_cost.get_name_leafdata());
    if (ospf_interface_state.is_set || is_set(ospf_interface_state.yfilter)) leaf_name_data.push_back(ospf_interface_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::InterfaceMadj::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::InterfaceMadj::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::InterfaceMadj::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-area")
    {
        interface_area = value;
        interface_area.value_namespace = name_space;
        interface_area.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "madj-area-id")
    {
        madj_area_id = value;
        madj_area_id.value_namespace = name_space;
        madj_area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-neighbor-count")
    {
        interface_neighbor_count = value;
        interface_neighbor_count.value_namespace = name_space;
        interface_neighbor_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-adj-neighbor-count")
    {
        interface_adj_neighbor_count = value;
        interface_adj_neighbor_count.value_namespace = name_space;
        interface_adj_neighbor_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-link-cost")
    {
        interface_link_cost = value;
        interface_link_cost.value_namespace = name_space;
        interface_link_cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospf-interface-state")
    {
        ospf_interface_state = value;
        ospf_interface_state.value_namespace = name_space;
        ospf_interface_state.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::InterfaceMadj::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-area")
    {
        interface_area.yfilter = yfilter;
    }
    if(value_path == "madj-area-id")
    {
        madj_area_id.yfilter = yfilter;
    }
    if(value_path == "interface-neighbor-count")
    {
        interface_neighbor_count.yfilter = yfilter;
    }
    if(value_path == "interface-adj-neighbor-count")
    {
        interface_adj_neighbor_count.yfilter = yfilter;
    }
    if(value_path == "interface-link-cost")
    {
        interface_link_cost.yfilter = yfilter;
    }
    if(value_path == "ospf-interface-state")
    {
        ospf_interface_state.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::InterfaceMadj::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-area" || name == "madj-area-id" || name == "interface-neighbor-count" || name == "interface-adj-neighbor-count" || name == "interface-link-cost" || name == "ospf-interface-state")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::IpfrrTiebreakers::IpfrrTiebreakers()
    :
    tiebreaker_type{YType::enumeration, "tiebreaker-type"},
    tiebreaker_index{YType::uint32, "tiebreaker-index"}
{

    yang_name = "ipfrr-tiebreakers"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::IpfrrTiebreakers::~IpfrrTiebreakers()
{
}

bool Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::IpfrrTiebreakers::has_data() const
{
    return tiebreaker_type.is_set
	|| tiebreaker_index.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::IpfrrTiebreakers::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tiebreaker_type.yfilter)
	|| ydk::is_set(tiebreaker_index.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::IpfrrTiebreakers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipfrr-tiebreakers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::IpfrrTiebreakers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tiebreaker_type.is_set || is_set(tiebreaker_type.yfilter)) leaf_name_data.push_back(tiebreaker_type.get_name_leafdata());
    if (tiebreaker_index.is_set || is_set(tiebreaker_index.yfilter)) leaf_name_data.push_back(tiebreaker_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::IpfrrTiebreakers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::IpfrrTiebreakers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::IpfrrTiebreakers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tiebreaker-type")
    {
        tiebreaker_type = value;
        tiebreaker_type.value_namespace = name_space;
        tiebreaker_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tiebreaker-index")
    {
        tiebreaker_index = value;
        tiebreaker_index.value_namespace = name_space;
        tiebreaker_index.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::IpfrrTiebreakers::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tiebreaker-type")
    {
        tiebreaker_type.yfilter = yfilter;
    }
    if(value_path == "tiebreaker-index")
    {
        tiebreaker_index.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::IpfrrTiebreakers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tiebreaker-type" || name == "tiebreaker-index")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::IpSecAddr::IpSecAddr()
    :
    secondary_addr{YType::str, "secondary-addr"},
    secondary_prefix{YType::uint32, "secondary-prefix"}
{

    yang_name = "ip-sec-addr"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::IpSecAddr::~IpSecAddr()
{
}

bool Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::IpSecAddr::has_data() const
{
    return secondary_addr.is_set
	|| secondary_prefix.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::IpSecAddr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(secondary_addr.yfilter)
	|| ydk::is_set(secondary_prefix.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::IpSecAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-sec-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::IpSecAddr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (secondary_addr.is_set || is_set(secondary_addr.yfilter)) leaf_name_data.push_back(secondary_addr.get_name_leafdata());
    if (secondary_prefix.is_set || is_set(secondary_prefix.yfilter)) leaf_name_data.push_back(secondary_prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::IpSecAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::IpSecAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::IpSecAddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "secondary-addr")
    {
        secondary_addr = value;
        secondary_addr.value_namespace = name_space;
        secondary_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secondary-prefix")
    {
        secondary_prefix = value;
        secondary_prefix.value_namespace = name_space;
        secondary_prefix.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::IpSecAddr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "secondary-addr")
    {
        secondary_addr.yfilter = yfilter;
    }
    if(value_path == "secondary-prefix")
    {
        secondary_prefix.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::IpSecAddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "secondary-addr" || name == "secondary-prefix")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::BorderRouters::BorderRouters()
{

    yang_name = "border-routers"; yang_parent_name = "default-vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::BorderRouters::~BorderRouters()
{
}

bool Ospf::Processes::Process::DefaultVrf::BorderRouters::has_data() const
{
    for (std::size_t index=0; index<border_router.size(); index++)
    {
        if(border_router[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::DefaultVrf::BorderRouters::has_operation() const
{
    for (std::size_t index=0; index<border_router.size(); index++)
    {
        if(border_router[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::BorderRouters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "border-routers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::BorderRouters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::BorderRouters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "border-router")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::BorderRouters::BorderRouter>();
        c->parent = this;
        border_router.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::BorderRouters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : border_router)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::BorderRouters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::DefaultVrf::BorderRouters::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::DefaultVrf::BorderRouters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "border-router")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::BorderRouters::BorderRouter::BorderRouter()
    :
    border_router_id{YType::str, "border-router-id"},
    border_router_id_xr{YType::str, "border-router-id-xr"}
{

    yang_name = "border-router"; yang_parent_name = "border-routers"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::BorderRouters::BorderRouter::~BorderRouter()
{
}

bool Ospf::Processes::Process::DefaultVrf::BorderRouters::BorderRouter::has_data() const
{
    for (std::size_t index=0; index<border_router_path.size(); index++)
    {
        if(border_router_path[index]->has_data())
            return true;
    }
    return border_router_id.is_set
	|| border_router_id_xr.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::BorderRouters::BorderRouter::has_operation() const
{
    for (std::size_t index=0; index<border_router_path.size(); index++)
    {
        if(border_router_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(border_router_id.yfilter)
	|| ydk::is_set(border_router_id_xr.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::BorderRouters::BorderRouter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "border-router" <<"[border-router-id='" <<border_router_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::BorderRouters::BorderRouter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (border_router_id.is_set || is_set(border_router_id.yfilter)) leaf_name_data.push_back(border_router_id.get_name_leafdata());
    if (border_router_id_xr.is_set || is_set(border_router_id_xr.yfilter)) leaf_name_data.push_back(border_router_id_xr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::BorderRouters::BorderRouter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "border-router-path")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::BorderRouters::BorderRouter::BorderRouterPath>();
        c->parent = this;
        border_router_path.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::BorderRouters::BorderRouter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : border_router_path)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::BorderRouters::BorderRouter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "border-router-id")
    {
        border_router_id = value;
        border_router_id.value_namespace = name_space;
        border_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "border-router-id-xr")
    {
        border_router_id_xr = value;
        border_router_id_xr.value_namespace = name_space;
        border_router_id_xr.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::BorderRouters::BorderRouter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "border-router-id")
    {
        border_router_id.yfilter = yfilter;
    }
    if(value_path == "border-router-id-xr")
    {
        border_router_id_xr.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::BorderRouters::BorderRouter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "border-router-path" || name == "border-router-id" || name == "border-router-id-xr")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::BorderRouters::BorderRouter::BorderRouterPath::BorderRouterPath()
    :
    border_router_route_type{YType::enumeration, "border-router-route-type"},
    border_router_route_metric{YType::uint32, "border-router-route-metric"},
    border_router_next_hop{YType::str, "border-router-next-hop"},
    border_router_next_hop_interface_name{YType::str, "border-router-next-hop-interface-name"},
    border_router_type{YType::enumeration, "border-router-type"},
    border_router_area_id{YType::str, "border-router-area-id"},
    spf_version{YType::uint64, "spf-version"}
{

    yang_name = "border-router-path"; yang_parent_name = "border-router"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::BorderRouters::BorderRouter::BorderRouterPath::~BorderRouterPath()
{
}

bool Ospf::Processes::Process::DefaultVrf::BorderRouters::BorderRouter::BorderRouterPath::has_data() const
{
    return border_router_route_type.is_set
	|| border_router_route_metric.is_set
	|| border_router_next_hop.is_set
	|| border_router_next_hop_interface_name.is_set
	|| border_router_type.is_set
	|| border_router_area_id.is_set
	|| spf_version.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::BorderRouters::BorderRouter::BorderRouterPath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(border_router_route_type.yfilter)
	|| ydk::is_set(border_router_route_metric.yfilter)
	|| ydk::is_set(border_router_next_hop.yfilter)
	|| ydk::is_set(border_router_next_hop_interface_name.yfilter)
	|| ydk::is_set(border_router_type.yfilter)
	|| ydk::is_set(border_router_area_id.yfilter)
	|| ydk::is_set(spf_version.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::BorderRouters::BorderRouter::BorderRouterPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "border-router-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::BorderRouters::BorderRouter::BorderRouterPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (border_router_route_type.is_set || is_set(border_router_route_type.yfilter)) leaf_name_data.push_back(border_router_route_type.get_name_leafdata());
    if (border_router_route_metric.is_set || is_set(border_router_route_metric.yfilter)) leaf_name_data.push_back(border_router_route_metric.get_name_leafdata());
    if (border_router_next_hop.is_set || is_set(border_router_next_hop.yfilter)) leaf_name_data.push_back(border_router_next_hop.get_name_leafdata());
    if (border_router_next_hop_interface_name.is_set || is_set(border_router_next_hop_interface_name.yfilter)) leaf_name_data.push_back(border_router_next_hop_interface_name.get_name_leafdata());
    if (border_router_type.is_set || is_set(border_router_type.yfilter)) leaf_name_data.push_back(border_router_type.get_name_leafdata());
    if (border_router_area_id.is_set || is_set(border_router_area_id.yfilter)) leaf_name_data.push_back(border_router_area_id.get_name_leafdata());
    if (spf_version.is_set || is_set(spf_version.yfilter)) leaf_name_data.push_back(spf_version.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::BorderRouters::BorderRouter::BorderRouterPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::BorderRouters::BorderRouter::BorderRouterPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::BorderRouters::BorderRouter::BorderRouterPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "border-router-route-type")
    {
        border_router_route_type = value;
        border_router_route_type.value_namespace = name_space;
        border_router_route_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "border-router-route-metric")
    {
        border_router_route_metric = value;
        border_router_route_metric.value_namespace = name_space;
        border_router_route_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "border-router-next-hop")
    {
        border_router_next_hop = value;
        border_router_next_hop.value_namespace = name_space;
        border_router_next_hop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "border-router-next-hop-interface-name")
    {
        border_router_next_hop_interface_name = value;
        border_router_next_hop_interface_name.value_namespace = name_space;
        border_router_next_hop_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "border-router-type")
    {
        border_router_type = value;
        border_router_type.value_namespace = name_space;
        border_router_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "border-router-area-id")
    {
        border_router_area_id = value;
        border_router_area_id.value_namespace = name_space;
        border_router_area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spf-version")
    {
        spf_version = value;
        spf_version.value_namespace = name_space;
        spf_version.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::BorderRouters::BorderRouter::BorderRouterPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "border-router-route-type")
    {
        border_router_route_type.yfilter = yfilter;
    }
    if(value_path == "border-router-route-metric")
    {
        border_router_route_metric.yfilter = yfilter;
    }
    if(value_path == "border-router-next-hop")
    {
        border_router_next_hop.yfilter = yfilter;
    }
    if(value_path == "border-router-next-hop-interface-name")
    {
        border_router_next_hop_interface_name.yfilter = yfilter;
    }
    if(value_path == "border-router-type")
    {
        border_router_type.yfilter = yfilter;
    }
    if(value_path == "border-router-area-id")
    {
        border_router_area_id.yfilter = yfilter;
    }
    if(value_path == "spf-version")
    {
        spf_version.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::BorderRouters::BorderRouter::BorderRouterPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "border-router-route-type" || name == "border-router-route-metric" || name == "border-router-next-hop" || name == "border-router-next-hop-interface-name" || name == "border-router-type" || name == "border-router-area-id" || name == "spf-version")
        return true;
    return false;
}


}
}

