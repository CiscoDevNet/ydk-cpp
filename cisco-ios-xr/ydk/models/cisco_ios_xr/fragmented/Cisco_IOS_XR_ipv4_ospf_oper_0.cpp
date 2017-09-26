
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ipv4_ospf_oper_0.hpp"
#include "Cisco_IOS_XR_ipv4_ospf_oper_1.hpp"
#include "Cisco_IOS_XR_ipv4_ospf_oper_3.hpp"
#include "Cisco_IOS_XR_ipv4_ospf_oper_2.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ipv4_ospf_oper {

Ospf::Ospf()
    :
    processes(std::make_shared<Ospf::Processes>())
{
    processes->parent = this;

    yang_name = "ospf"; yang_parent_name = "Cisco-IOS-XR-ipv4-ospf-oper"; is_top_level_class = true; has_list_ancestor = false;
}

Ospf::~Ospf()
{
}

bool Ospf::has_data() const
{
    return (processes !=  nullptr && processes->has_data());
}

bool Ospf::has_operation() const
{
    return is_set(yfilter)
	|| (processes !=  nullptr && processes->has_operation());
}

std::string Ospf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-ospf-oper:ospf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "processes")
    {
        if(processes == nullptr)
        {
            processes = std::make_shared<Ospf::Processes>();
        }
        return processes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(processes != nullptr)
    {
        children["processes"] = processes;
    }

    return children;
}

void Ospf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> Ospf::clone_ptr() const
{
    return std::make_shared<Ospf>();
}

std::string Ospf::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Ospf::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Ospf::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Ospf::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Ospf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "processes")
        return true;
    return false;
}

Ospf::Processes::Processes()
{

    yang_name = "processes"; yang_parent_name = "ospf"; is_top_level_class = false; has_list_ancestor = false;
}

Ospf::Processes::~Processes()
{
}

bool Ospf::Processes::has_data() const
{
    for (std::size_t index=0; index<process.size(); index++)
    {
        if(process[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::has_operation() const
{
    for (std::size_t index=0; index<process.size(); index++)
    {
        if(process[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-ospf-oper:ospf/" << get_segment_path();
    return path_buffer.str();
}

std::string Ospf::Processes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "processes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "process")
    {
        for(auto const & c : process)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process>();
        c->parent = this;
        process.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : process)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "process")
        return true;
    return false;
}

Ospf::Processes::Process::Process()
    :
    process_name{YType::str, "process-name"}
    	,
    default_vrf(std::make_shared<Ospf::Processes::Process::DefaultVrf>())
	,srms(std::make_shared<Ospf::Processes::Process::Srms>())
	,vrfs(std::make_shared<Ospf::Processes::Process::Vrfs>())
{
    default_vrf->parent = this;
    srms->parent = this;
    vrfs->parent = this;

    yang_name = "process"; yang_parent_name = "processes"; is_top_level_class = false; has_list_ancestor = false;
}

Ospf::Processes::Process::~Process()
{
}

bool Ospf::Processes::Process::has_data() const
{
    return process_name.is_set
	|| (default_vrf !=  nullptr && default_vrf->has_data())
	|| (srms !=  nullptr && srms->has_data())
	|| (vrfs !=  nullptr && vrfs->has_data());
}

bool Ospf::Processes::Process::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(process_name.yfilter)
	|| (default_vrf !=  nullptr && default_vrf->has_operation())
	|| (srms !=  nullptr && srms->has_operation())
	|| (vrfs !=  nullptr && vrfs->has_operation());
}

std::string Ospf::Processes::Process::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-ospf-oper:ospf/processes/" << get_segment_path();
    return path_buffer.str();
}

std::string Ospf::Processes::Process::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "process" <<"[process-name='" <<process_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (process_name.is_set || is_set(process_name.yfilter)) leaf_name_data.push_back(process_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default-vrf")
    {
        if(default_vrf == nullptr)
        {
            default_vrf = std::make_shared<Ospf::Processes::Process::DefaultVrf>();
        }
        return default_vrf;
    }

    if(child_yang_name == "srms")
    {
        if(srms == nullptr)
        {
            srms = std::make_shared<Ospf::Processes::Process::Srms>();
        }
        return srms;
    }

    if(child_yang_name == "vrfs")
    {
        if(vrfs == nullptr)
        {
            vrfs = std::make_shared<Ospf::Processes::Process::Vrfs>();
        }
        return vrfs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(default_vrf != nullptr)
    {
        children["default-vrf"] = default_vrf;
    }

    if(srms != nullptr)
    {
        children["srms"] = srms;
    }

    if(vrfs != nullptr)
    {
        children["vrfs"] = vrfs;
    }

    return children;
}

void Ospf::Processes::Process::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "process-name")
    {
        process_name = value;
        process_name.value_namespace = name_space;
        process_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "process-name")
    {
        process_name.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default-vrf" || name == "srms" || name == "vrfs" || name == "process-name")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::DefaultVrf()
    :
    adjacency_information(std::make_shared<Ospf::Processes::Process::DefaultVrf::AdjacencyInformation>())
	,area_statistics(std::make_shared<Ospf::Processes::Process::DefaultVrf::AreaStatistics>())
	,areas(std::make_shared<Ospf::Processes::Process::DefaultVrf::Areas>())
	,border_routers(std::make_shared<Ospf::Processes::Process::DefaultVrf::BorderRouters>())
	,database(std::make_shared<Ospf::Processes::Process::DefaultVrf::Database>())
	,fast_reroute(std::make_shared<Ospf::Processes::Process::DefaultVrf::FastReroute>())
	,flood_list_table(std::make_shared<Ospf::Processes::Process::DefaultVrf::FloodListTable>())
	,interface_information(std::make_shared<Ospf::Processes::Process::DefaultVrf::InterfaceInformation>())
	,mpls_te(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe>())
	,ospf_summary(std::make_shared<Ospf::Processes::Process::DefaultVrf::OspfSummary>())
	,process_information(std::make_shared<Ospf::Processes::Process::DefaultVrf::ProcessInformation>())
	,route_information(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation>())
	,statistics(std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics>())
	,summary_prefixes(std::make_shared<Ospf::Processes::Process::DefaultVrf::SummaryPrefixes>())
{
    adjacency_information->parent = this;
    area_statistics->parent = this;
    areas->parent = this;
    border_routers->parent = this;
    database->parent = this;
    fast_reroute->parent = this;
    flood_list_table->parent = this;
    interface_information->parent = this;
    mpls_te->parent = this;
    ospf_summary->parent = this;
    process_information->parent = this;
    route_information->parent = this;
    statistics->parent = this;
    summary_prefixes->parent = this;

    yang_name = "default-vrf"; yang_parent_name = "process"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::~DefaultVrf()
{
}

bool Ospf::Processes::Process::DefaultVrf::has_data() const
{
    return (adjacency_information !=  nullptr && adjacency_information->has_data())
	|| (area_statistics !=  nullptr && area_statistics->has_data())
	|| (areas !=  nullptr && areas->has_data())
	|| (border_routers !=  nullptr && border_routers->has_data())
	|| (database !=  nullptr && database->has_data())
	|| (fast_reroute !=  nullptr && fast_reroute->has_data())
	|| (flood_list_table !=  nullptr && flood_list_table->has_data())
	|| (interface_information !=  nullptr && interface_information->has_data())
	|| (mpls_te !=  nullptr && mpls_te->has_data())
	|| (ospf_summary !=  nullptr && ospf_summary->has_data())
	|| (process_information !=  nullptr && process_information->has_data())
	|| (route_information !=  nullptr && route_information->has_data())
	|| (statistics !=  nullptr && statistics->has_data())
	|| (summary_prefixes !=  nullptr && summary_prefixes->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::has_operation() const
{
    return is_set(yfilter)
	|| (adjacency_information !=  nullptr && adjacency_information->has_operation())
	|| (area_statistics !=  nullptr && area_statistics->has_operation())
	|| (areas !=  nullptr && areas->has_operation())
	|| (border_routers !=  nullptr && border_routers->has_operation())
	|| (database !=  nullptr && database->has_operation())
	|| (fast_reroute !=  nullptr && fast_reroute->has_operation())
	|| (flood_list_table !=  nullptr && flood_list_table->has_operation())
	|| (interface_information !=  nullptr && interface_information->has_operation())
	|| (mpls_te !=  nullptr && mpls_te->has_operation())
	|| (ospf_summary !=  nullptr && ospf_summary->has_operation())
	|| (process_information !=  nullptr && process_information->has_operation())
	|| (route_information !=  nullptr && route_information->has_operation())
	|| (statistics !=  nullptr && statistics->has_operation())
	|| (summary_prefixes !=  nullptr && summary_prefixes->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "adjacency-information")
    {
        if(adjacency_information == nullptr)
        {
            adjacency_information = std::make_shared<Ospf::Processes::Process::DefaultVrf::AdjacencyInformation>();
        }
        return adjacency_information;
    }

    if(child_yang_name == "area-statistics")
    {
        if(area_statistics == nullptr)
        {
            area_statistics = std::make_shared<Ospf::Processes::Process::DefaultVrf::AreaStatistics>();
        }
        return area_statistics;
    }

    if(child_yang_name == "areas")
    {
        if(areas == nullptr)
        {
            areas = std::make_shared<Ospf::Processes::Process::DefaultVrf::Areas>();
        }
        return areas;
    }

    if(child_yang_name == "border-routers")
    {
        if(border_routers == nullptr)
        {
            border_routers = std::make_shared<Ospf::Processes::Process::DefaultVrf::BorderRouters>();
        }
        return border_routers;
    }

    if(child_yang_name == "database")
    {
        if(database == nullptr)
        {
            database = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database>();
        }
        return database;
    }

    if(child_yang_name == "fast-reroute")
    {
        if(fast_reroute == nullptr)
        {
            fast_reroute = std::make_shared<Ospf::Processes::Process::DefaultVrf::FastReroute>();
        }
        return fast_reroute;
    }

    if(child_yang_name == "flood-list-table")
    {
        if(flood_list_table == nullptr)
        {
            flood_list_table = std::make_shared<Ospf::Processes::Process::DefaultVrf::FloodListTable>();
        }
        return flood_list_table;
    }

    if(child_yang_name == "interface-information")
    {
        if(interface_information == nullptr)
        {
            interface_information = std::make_shared<Ospf::Processes::Process::DefaultVrf::InterfaceInformation>();
        }
        return interface_information;
    }

    if(child_yang_name == "mpls-te")
    {
        if(mpls_te == nullptr)
        {
            mpls_te = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe>();
        }
        return mpls_te;
    }

    if(child_yang_name == "ospf-summary")
    {
        if(ospf_summary == nullptr)
        {
            ospf_summary = std::make_shared<Ospf::Processes::Process::DefaultVrf::OspfSummary>();
        }
        return ospf_summary;
    }

    if(child_yang_name == "process-information")
    {
        if(process_information == nullptr)
        {
            process_information = std::make_shared<Ospf::Processes::Process::DefaultVrf::ProcessInformation>();
        }
        return process_information;
    }

    if(child_yang_name == "route-information")
    {
        if(route_information == nullptr)
        {
            route_information = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation>();
        }
        return route_information;
    }

    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics>();
        }
        return statistics;
    }

    if(child_yang_name == "summary-prefixes")
    {
        if(summary_prefixes == nullptr)
        {
            summary_prefixes = std::make_shared<Ospf::Processes::Process::DefaultVrf::SummaryPrefixes>();
        }
        return summary_prefixes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(adjacency_information != nullptr)
    {
        children["adjacency-information"] = adjacency_information;
    }

    if(area_statistics != nullptr)
    {
        children["area-statistics"] = area_statistics;
    }

    if(areas != nullptr)
    {
        children["areas"] = areas;
    }

    if(border_routers != nullptr)
    {
        children["border-routers"] = border_routers;
    }

    if(database != nullptr)
    {
        children["database"] = database;
    }

    if(fast_reroute != nullptr)
    {
        children["fast-reroute"] = fast_reroute;
    }

    if(flood_list_table != nullptr)
    {
        children["flood-list-table"] = flood_list_table;
    }

    if(interface_information != nullptr)
    {
        children["interface-information"] = interface_information;
    }

    if(mpls_te != nullptr)
    {
        children["mpls-te"] = mpls_te;
    }

    if(ospf_summary != nullptr)
    {
        children["ospf-summary"] = ospf_summary;
    }

    if(process_information != nullptr)
    {
        children["process-information"] = process_information;
    }

    if(route_information != nullptr)
    {
        children["route-information"] = route_information;
    }

    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    if(summary_prefixes != nullptr)
    {
        children["summary-prefixes"] = summary_prefixes;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::DefaultVrf::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::DefaultVrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adjacency-information" || name == "area-statistics" || name == "areas" || name == "border-routers" || name == "database" || name == "fast-reroute" || name == "flood-list-table" || name == "interface-information" || name == "mpls-te" || name == "ospf-summary" || name == "process-information" || name == "route-information" || name == "statistics" || name == "summary-prefixes")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::AdjacencyInformation()
    :
    neighbor_details(std::make_shared<Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails>())
	,neighbors(std::make_shared<Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Neighbors>())
	,requests(std::make_shared<Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Requests>())
	,retransmissions(std::make_shared<Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Retransmissions>())
{
    neighbor_details->parent = this;
    neighbors->parent = this;
    requests->parent = this;
    retransmissions->parent = this;

    yang_name = "adjacency-information"; yang_parent_name = "default-vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::~AdjacencyInformation()
{
}

bool Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::has_data() const
{
    return (neighbor_details !=  nullptr && neighbor_details->has_data())
	|| (neighbors !=  nullptr && neighbors->has_data())
	|| (requests !=  nullptr && requests->has_data())
	|| (retransmissions !=  nullptr && retransmissions->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::has_operation() const
{
    return is_set(yfilter)
	|| (neighbor_details !=  nullptr && neighbor_details->has_operation())
	|| (neighbors !=  nullptr && neighbors->has_operation())
	|| (requests !=  nullptr && requests->has_operation())
	|| (retransmissions !=  nullptr && retransmissions->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adjacency-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor-details")
    {
        if(neighbor_details == nullptr)
        {
            neighbor_details = std::make_shared<Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails>();
        }
        return neighbor_details;
    }

    if(child_yang_name == "neighbors")
    {
        if(neighbors == nullptr)
        {
            neighbors = std::make_shared<Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Neighbors>();
        }
        return neighbors;
    }

    if(child_yang_name == "requests")
    {
        if(requests == nullptr)
        {
            requests = std::make_shared<Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Requests>();
        }
        return requests;
    }

    if(child_yang_name == "retransmissions")
    {
        if(retransmissions == nullptr)
        {
            retransmissions = std::make_shared<Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Retransmissions>();
        }
        return retransmissions;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::get_children() const
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

void Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-details" || name == "neighbors" || name == "requests" || name == "retransmissions")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetails()
{

    yang_name = "neighbor-details"; yang_parent_name = "adjacency-information"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::~NeighborDetails()
{
}

bool Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::has_data() const
{
    for (std::size_t index=0; index<neighbor_detail.size(); index++)
    {
        if(neighbor_detail[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::has_operation() const
{
    for (std::size_t index=0; index<neighbor_detail.size(); index++)
    {
        if(neighbor_detail[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-details";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail>();
        c->parent = this;
        neighbor_detail.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : neighbor_detail)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-detail")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborDetail()
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
    neighbor_interface_id{YType::uint16, "neighbor-interface-id"},
    neighbor_lls_option{YType::uint32, "neighbor-lls-option"},
    neighbor_option{YType::uint8, "neighbor-option"},
    next_poll_interval{YType::uint32, "next-poll-interval"},
    nsf_router_state{YType::enumeration, "nsf-router-state"},
    oob_resynchronization{YType::boolean, "oob-resynchronization"},
    pending_events{YType::uint16, "pending-events"},
    poll_interval{YType::uint32, "poll-interval"},
    state_change_count{YType::uint16, "state-change-count"}
    	,
    neighbor_bfd_information(std::make_shared<Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborBfdInformation>())
	,neighbor_retransmission_information(std::make_shared<Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborRetransmissionInformation>())
	,neighbor_summary(std::make_shared<Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary>())
{
    neighbor_bfd_information->parent = this;
    neighbor_retransmission_information->parent = this;
    neighbor_summary->parent = this;

    yang_name = "neighbor-detail"; yang_parent_name = "neighbor-details"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::~NeighborDetail()
{
}

bool Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::has_data() const
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
	|| neighbor_interface_id.is_set
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

bool Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adjacency_sid_label.yfilter)
	|| ydk::is_set(adjacency_sid_protected.yfilter)
	|| ydk::is_set(adjacency_sid_unprotected_label.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(interface_type.yfilter)
	|| ydk::is_set(last_oob_time.yfilter)
	|| ydk::is_set(lfa_interface.yfilter)
	|| ydk::is_set(lfa_neighbor_id.yfilter)
	|| ydk::is_set(lfa_neighbor_revision.yfilter)
	|| ydk::is_set(lfa_next_hop.yfilter)
	|| ydk::is_set(neighbor_ack_list_count.yfilter)
	|| ydk::is_set(neighbor_ack_list_high_watermark.yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(neighbor_area_id.yfilter)
	|| ydk::is_set(neighbor_backup_designated_router_address.yfilter)
	|| ydk::is_set(neighbor_cost.yfilter)
	|| ydk::is_set(neighbor_designated_router_address.yfilter)
	|| ydk::is_set(neighbor_filter.yfilter)
	|| ydk::is_set(neighbor_interface_id.yfilter)
	|| ydk::is_set(neighbor_lls_option.yfilter)
	|| ydk::is_set(neighbor_option.yfilter)
	|| ydk::is_set(next_poll_interval.yfilter)
	|| ydk::is_set(nsf_router_state.yfilter)
	|| ydk::is_set(oob_resynchronization.yfilter)
	|| ydk::is_set(pending_events.yfilter)
	|| ydk::is_set(poll_interval.yfilter)
	|| ydk::is_set(state_change_count.yfilter)
	|| (neighbor_bfd_information !=  nullptr && neighbor_bfd_information->has_operation())
	|| (neighbor_retransmission_information !=  nullptr && neighbor_retransmission_information->has_operation())
	|| (neighbor_summary !=  nullptr && neighbor_summary->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adjacency_sid_label.is_set || is_set(adjacency_sid_label.yfilter)) leaf_name_data.push_back(adjacency_sid_label.get_name_leafdata());
    if (adjacency_sid_protected.is_set || is_set(adjacency_sid_protected.yfilter)) leaf_name_data.push_back(adjacency_sid_protected.get_name_leafdata());
    if (adjacency_sid_unprotected_label.is_set || is_set(adjacency_sid_unprotected_label.yfilter)) leaf_name_data.push_back(adjacency_sid_unprotected_label.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (interface_type.is_set || is_set(interface_type.yfilter)) leaf_name_data.push_back(interface_type.get_name_leafdata());
    if (last_oob_time.is_set || is_set(last_oob_time.yfilter)) leaf_name_data.push_back(last_oob_time.get_name_leafdata());
    if (lfa_interface.is_set || is_set(lfa_interface.yfilter)) leaf_name_data.push_back(lfa_interface.get_name_leafdata());
    if (lfa_neighbor_id.is_set || is_set(lfa_neighbor_id.yfilter)) leaf_name_data.push_back(lfa_neighbor_id.get_name_leafdata());
    if (lfa_neighbor_revision.is_set || is_set(lfa_neighbor_revision.yfilter)) leaf_name_data.push_back(lfa_neighbor_revision.get_name_leafdata());
    if (lfa_next_hop.is_set || is_set(lfa_next_hop.yfilter)) leaf_name_data.push_back(lfa_next_hop.get_name_leafdata());
    if (neighbor_ack_list_count.is_set || is_set(neighbor_ack_list_count.yfilter)) leaf_name_data.push_back(neighbor_ack_list_count.get_name_leafdata());
    if (neighbor_ack_list_high_watermark.is_set || is_set(neighbor_ack_list_high_watermark.yfilter)) leaf_name_data.push_back(neighbor_ack_list_high_watermark.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (neighbor_area_id.is_set || is_set(neighbor_area_id.yfilter)) leaf_name_data.push_back(neighbor_area_id.get_name_leafdata());
    if (neighbor_backup_designated_router_address.is_set || is_set(neighbor_backup_designated_router_address.yfilter)) leaf_name_data.push_back(neighbor_backup_designated_router_address.get_name_leafdata());
    if (neighbor_cost.is_set || is_set(neighbor_cost.yfilter)) leaf_name_data.push_back(neighbor_cost.get_name_leafdata());
    if (neighbor_designated_router_address.is_set || is_set(neighbor_designated_router_address.yfilter)) leaf_name_data.push_back(neighbor_designated_router_address.get_name_leafdata());
    if (neighbor_filter.is_set || is_set(neighbor_filter.yfilter)) leaf_name_data.push_back(neighbor_filter.get_name_leafdata());
    if (neighbor_interface_id.is_set || is_set(neighbor_interface_id.yfilter)) leaf_name_data.push_back(neighbor_interface_id.get_name_leafdata());
    if (neighbor_lls_option.is_set || is_set(neighbor_lls_option.yfilter)) leaf_name_data.push_back(neighbor_lls_option.get_name_leafdata());
    if (neighbor_option.is_set || is_set(neighbor_option.yfilter)) leaf_name_data.push_back(neighbor_option.get_name_leafdata());
    if (next_poll_interval.is_set || is_set(next_poll_interval.yfilter)) leaf_name_data.push_back(next_poll_interval.get_name_leafdata());
    if (nsf_router_state.is_set || is_set(nsf_router_state.yfilter)) leaf_name_data.push_back(nsf_router_state.get_name_leafdata());
    if (oob_resynchronization.is_set || is_set(oob_resynchronization.yfilter)) leaf_name_data.push_back(oob_resynchronization.get_name_leafdata());
    if (pending_events.is_set || is_set(pending_events.yfilter)) leaf_name_data.push_back(pending_events.get_name_leafdata());
    if (poll_interval.is_set || is_set(poll_interval.yfilter)) leaf_name_data.push_back(poll_interval.get_name_leafdata());
    if (state_change_count.is_set || is_set(state_change_count.yfilter)) leaf_name_data.push_back(state_change_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor-bfd-information")
    {
        if(neighbor_bfd_information == nullptr)
        {
            neighbor_bfd_information = std::make_shared<Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborBfdInformation>();
        }
        return neighbor_bfd_information;
    }

    if(child_yang_name == "neighbor-retransmission-information")
    {
        if(neighbor_retransmission_information == nullptr)
        {
            neighbor_retransmission_information = std::make_shared<Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborRetransmissionInformation>();
        }
        return neighbor_retransmission_information;
    }

    if(child_yang_name == "neighbor-summary")
    {
        if(neighbor_summary == nullptr)
        {
            neighbor_summary = std::make_shared<Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary>();
        }
        return neighbor_summary;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::get_children() const
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

void Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "adjacency-sid-label")
    {
        adjacency_sid_label = value;
        adjacency_sid_label.value_namespace = name_space;
        adjacency_sid_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjacency-sid-protected")
    {
        adjacency_sid_protected = value;
        adjacency_sid_protected.value_namespace = name_space;
        adjacency_sid_protected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjacency-sid-unprotected-label")
    {
        adjacency_sid_unprotected_label = value;
        adjacency_sid_unprotected_label.value_namespace = name_space;
        adjacency_sid_unprotected_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-type")
    {
        interface_type = value;
        interface_type.value_namespace = name_space;
        interface_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-oob-time")
    {
        last_oob_time = value;
        last_oob_time.value_namespace = name_space;
        last_oob_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lfa-interface")
    {
        lfa_interface = value;
        lfa_interface.value_namespace = name_space;
        lfa_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lfa-neighbor-id")
    {
        lfa_neighbor_id = value;
        lfa_neighbor_id.value_namespace = name_space;
        lfa_neighbor_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lfa-neighbor-revision")
    {
        lfa_neighbor_revision = value;
        lfa_neighbor_revision.value_namespace = name_space;
        lfa_neighbor_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lfa-next-hop")
    {
        lfa_next_hop = value;
        lfa_next_hop.value_namespace = name_space;
        lfa_next_hop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-ack-list-count")
    {
        neighbor_ack_list_count = value;
        neighbor_ack_list_count.value_namespace = name_space;
        neighbor_ack_list_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-ack-list-high-watermark")
    {
        neighbor_ack_list_high_watermark = value;
        neighbor_ack_list_high_watermark.value_namespace = name_space;
        neighbor_ack_list_high_watermark.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-area-id")
    {
        neighbor_area_id = value;
        neighbor_area_id.value_namespace = name_space;
        neighbor_area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-backup-designated-router-address")
    {
        neighbor_backup_designated_router_address = value;
        neighbor_backup_designated_router_address.value_namespace = name_space;
        neighbor_backup_designated_router_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-cost")
    {
        neighbor_cost = value;
        neighbor_cost.value_namespace = name_space;
        neighbor_cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-designated-router-address")
    {
        neighbor_designated_router_address = value;
        neighbor_designated_router_address.value_namespace = name_space;
        neighbor_designated_router_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-filter")
    {
        neighbor_filter = value;
        neighbor_filter.value_namespace = name_space;
        neighbor_filter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-interface-id")
    {
        neighbor_interface_id = value;
        neighbor_interface_id.value_namespace = name_space;
        neighbor_interface_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-lls-option")
    {
        neighbor_lls_option = value;
        neighbor_lls_option.value_namespace = name_space;
        neighbor_lls_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-option")
    {
        neighbor_option = value;
        neighbor_option.value_namespace = name_space;
        neighbor_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-poll-interval")
    {
        next_poll_interval = value;
        next_poll_interval.value_namespace = name_space;
        next_poll_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsf-router-state")
    {
        nsf_router_state = value;
        nsf_router_state.value_namespace = name_space;
        nsf_router_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oob-resynchronization")
    {
        oob_resynchronization = value;
        oob_resynchronization.value_namespace = name_space;
        oob_resynchronization.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pending-events")
    {
        pending_events = value;
        pending_events.value_namespace = name_space;
        pending_events.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "poll-interval")
    {
        poll_interval = value;
        poll_interval.value_namespace = name_space;
        poll_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state-change-count")
    {
        state_change_count = value;
        state_change_count.value_namespace = name_space;
        state_change_count.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adjacency-sid-label")
    {
        adjacency_sid_label.yfilter = yfilter;
    }
    if(value_path == "adjacency-sid-protected")
    {
        adjacency_sid_protected.yfilter = yfilter;
    }
    if(value_path == "adjacency-sid-unprotected-label")
    {
        adjacency_sid_unprotected_label.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "interface-type")
    {
        interface_type.yfilter = yfilter;
    }
    if(value_path == "last-oob-time")
    {
        last_oob_time.yfilter = yfilter;
    }
    if(value_path == "lfa-interface")
    {
        lfa_interface.yfilter = yfilter;
    }
    if(value_path == "lfa-neighbor-id")
    {
        lfa_neighbor_id.yfilter = yfilter;
    }
    if(value_path == "lfa-neighbor-revision")
    {
        lfa_neighbor_revision.yfilter = yfilter;
    }
    if(value_path == "lfa-next-hop")
    {
        lfa_next_hop.yfilter = yfilter;
    }
    if(value_path == "neighbor-ack-list-count")
    {
        neighbor_ack_list_count.yfilter = yfilter;
    }
    if(value_path == "neighbor-ack-list-high-watermark")
    {
        neighbor_ack_list_high_watermark.yfilter = yfilter;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "neighbor-area-id")
    {
        neighbor_area_id.yfilter = yfilter;
    }
    if(value_path == "neighbor-backup-designated-router-address")
    {
        neighbor_backup_designated_router_address.yfilter = yfilter;
    }
    if(value_path == "neighbor-cost")
    {
        neighbor_cost.yfilter = yfilter;
    }
    if(value_path == "neighbor-designated-router-address")
    {
        neighbor_designated_router_address.yfilter = yfilter;
    }
    if(value_path == "neighbor-filter")
    {
        neighbor_filter.yfilter = yfilter;
    }
    if(value_path == "neighbor-interface-id")
    {
        neighbor_interface_id.yfilter = yfilter;
    }
    if(value_path == "neighbor-lls-option")
    {
        neighbor_lls_option.yfilter = yfilter;
    }
    if(value_path == "neighbor-option")
    {
        neighbor_option.yfilter = yfilter;
    }
    if(value_path == "next-poll-interval")
    {
        next_poll_interval.yfilter = yfilter;
    }
    if(value_path == "nsf-router-state")
    {
        nsf_router_state.yfilter = yfilter;
    }
    if(value_path == "oob-resynchronization")
    {
        oob_resynchronization.yfilter = yfilter;
    }
    if(value_path == "pending-events")
    {
        pending_events.yfilter = yfilter;
    }
    if(value_path == "poll-interval")
    {
        poll_interval.yfilter = yfilter;
    }
    if(value_path == "state-change-count")
    {
        state_change_count.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-bfd-information" || name == "neighbor-retransmission-information" || name == "neighbor-summary" || name == "adjacency-sid-label" || name == "adjacency-sid-protected" || name == "adjacency-sid-unprotected-label" || name == "interface-name" || name == "interface-type" || name == "last-oob-time" || name == "lfa-interface" || name == "lfa-neighbor-id" || name == "lfa-neighbor-revision" || name == "lfa-next-hop" || name == "neighbor-ack-list-count" || name == "neighbor-ack-list-high-watermark" || name == "neighbor-address" || name == "neighbor-area-id" || name == "neighbor-backup-designated-router-address" || name == "neighbor-cost" || name == "neighbor-designated-router-address" || name == "neighbor-filter" || name == "neighbor-interface-id" || name == "neighbor-lls-option" || name == "neighbor-option" || name == "next-poll-interval" || name == "nsf-router-state" || name == "oob-resynchronization" || name == "pending-events" || name == "poll-interval" || name == "state-change-count")
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

    yang_name = "neighbor-retransmission-information"; yang_parent_name = "neighbor-detail"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborRetransmissionInformation::~NeighborRetransmissionInformation()
{
}

bool Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborRetransmissionInformation::has_data() const
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

bool Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborRetransmissionInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(area_first_flood_information.yfilter)
	|| ydk::is_set(area_first_flood_information_index.yfilter)
	|| ydk::is_set(area_flooding_index.yfilter)
	|| ydk::is_set(area_next_flood_information.yfilter)
	|| ydk::is_set(area_next_flood_information_index.yfilter)
	|| ydk::is_set(as_first_flood_information.yfilter)
	|| ydk::is_set(as_first_flood_information_index.yfilter)
	|| ydk::is_set(as_flood_index.yfilter)
	|| ydk::is_set(as_next_flood_information.yfilter)
	|| ydk::is_set(as_next_flood_information_index.yfilter)
	|| ydk::is_set(dbd_retransmission_count.yfilter)
	|| ydk::is_set(dbd_retransmission_total_count.yfilter)
	|| ydk::is_set(last_retransmission_length.yfilter)
	|| ydk::is_set(last_retransmission_time.yfilter)
	|| ydk::is_set(lsa_retransmission_timer.yfilter)
	|| ydk::is_set(maximum_retransmission_length.yfilter)
	|| ydk::is_set(maximum_retransmission_time.yfilter)
	|| ydk::is_set(neighbor_retransmission_count.yfilter)
	|| ydk::is_set(number_of_retransmissions.yfilter);
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

    if (area_first_flood_information.is_set || is_set(area_first_flood_information.yfilter)) leaf_name_data.push_back(area_first_flood_information.get_name_leafdata());
    if (area_first_flood_information_index.is_set || is_set(area_first_flood_information_index.yfilter)) leaf_name_data.push_back(area_first_flood_information_index.get_name_leafdata());
    if (area_flooding_index.is_set || is_set(area_flooding_index.yfilter)) leaf_name_data.push_back(area_flooding_index.get_name_leafdata());
    if (area_next_flood_information.is_set || is_set(area_next_flood_information.yfilter)) leaf_name_data.push_back(area_next_flood_information.get_name_leafdata());
    if (area_next_flood_information_index.is_set || is_set(area_next_flood_information_index.yfilter)) leaf_name_data.push_back(area_next_flood_information_index.get_name_leafdata());
    if (as_first_flood_information.is_set || is_set(as_first_flood_information.yfilter)) leaf_name_data.push_back(as_first_flood_information.get_name_leafdata());
    if (as_first_flood_information_index.is_set || is_set(as_first_flood_information_index.yfilter)) leaf_name_data.push_back(as_first_flood_information_index.get_name_leafdata());
    if (as_flood_index.is_set || is_set(as_flood_index.yfilter)) leaf_name_data.push_back(as_flood_index.get_name_leafdata());
    if (as_next_flood_information.is_set || is_set(as_next_flood_information.yfilter)) leaf_name_data.push_back(as_next_flood_information.get_name_leafdata());
    if (as_next_flood_information_index.is_set || is_set(as_next_flood_information_index.yfilter)) leaf_name_data.push_back(as_next_flood_information_index.get_name_leafdata());
    if (dbd_retransmission_count.is_set || is_set(dbd_retransmission_count.yfilter)) leaf_name_data.push_back(dbd_retransmission_count.get_name_leafdata());
    if (dbd_retransmission_total_count.is_set || is_set(dbd_retransmission_total_count.yfilter)) leaf_name_data.push_back(dbd_retransmission_total_count.get_name_leafdata());
    if (last_retransmission_length.is_set || is_set(last_retransmission_length.yfilter)) leaf_name_data.push_back(last_retransmission_length.get_name_leafdata());
    if (last_retransmission_time.is_set || is_set(last_retransmission_time.yfilter)) leaf_name_data.push_back(last_retransmission_time.get_name_leafdata());
    if (lsa_retransmission_timer.is_set || is_set(lsa_retransmission_timer.yfilter)) leaf_name_data.push_back(lsa_retransmission_timer.get_name_leafdata());
    if (maximum_retransmission_length.is_set || is_set(maximum_retransmission_length.yfilter)) leaf_name_data.push_back(maximum_retransmission_length.get_name_leafdata());
    if (maximum_retransmission_time.is_set || is_set(maximum_retransmission_time.yfilter)) leaf_name_data.push_back(maximum_retransmission_time.get_name_leafdata());
    if (neighbor_retransmission_count.is_set || is_set(neighbor_retransmission_count.yfilter)) leaf_name_data.push_back(neighbor_retransmission_count.get_name_leafdata());
    if (number_of_retransmissions.is_set || is_set(number_of_retransmissions.yfilter)) leaf_name_data.push_back(number_of_retransmissions.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborRetransmissionInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborRetransmissionInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborRetransmissionInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "area-flooding-index")
    {
        area_flooding_index = value;
        area_flooding_index.value_namespace = name_space;
        area_flooding_index.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "as-flood-index")
    {
        as_flood_index = value;
        as_flood_index.value_namespace = name_space;
        as_flood_index.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "last-retransmission-length")
    {
        last_retransmission_length = value;
        last_retransmission_length.value_namespace = name_space;
        last_retransmission_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-retransmission-time")
    {
        last_retransmission_time = value;
        last_retransmission_time.value_namespace = name_space;
        last_retransmission_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-retransmission-timer")
    {
        lsa_retransmission_timer = value;
        lsa_retransmission_timer.value_namespace = name_space;
        lsa_retransmission_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-retransmission-length")
    {
        maximum_retransmission_length = value;
        maximum_retransmission_length.value_namespace = name_space;
        maximum_retransmission_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-retransmission-time")
    {
        maximum_retransmission_time = value;
        maximum_retransmission_time.value_namespace = name_space;
        maximum_retransmission_time.value_namespace_prefix = name_space_prefix;
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
}

void Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborRetransmissionInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "area-first-flood-information")
    {
        area_first_flood_information.yfilter = yfilter;
    }
    if(value_path == "area-first-flood-information-index")
    {
        area_first_flood_information_index.yfilter = yfilter;
    }
    if(value_path == "area-flooding-index")
    {
        area_flooding_index.yfilter = yfilter;
    }
    if(value_path == "area-next-flood-information")
    {
        area_next_flood_information.yfilter = yfilter;
    }
    if(value_path == "area-next-flood-information-index")
    {
        area_next_flood_information_index.yfilter = yfilter;
    }
    if(value_path == "as-first-flood-information")
    {
        as_first_flood_information.yfilter = yfilter;
    }
    if(value_path == "as-first-flood-information-index")
    {
        as_first_flood_information_index.yfilter = yfilter;
    }
    if(value_path == "as-flood-index")
    {
        as_flood_index.yfilter = yfilter;
    }
    if(value_path == "as-next-flood-information")
    {
        as_next_flood_information.yfilter = yfilter;
    }
    if(value_path == "as-next-flood-information-index")
    {
        as_next_flood_information_index.yfilter = yfilter;
    }
    if(value_path == "dbd-retransmission-count")
    {
        dbd_retransmission_count.yfilter = yfilter;
    }
    if(value_path == "dbd-retransmission-total-count")
    {
        dbd_retransmission_total_count.yfilter = yfilter;
    }
    if(value_path == "last-retransmission-length")
    {
        last_retransmission_length.yfilter = yfilter;
    }
    if(value_path == "last-retransmission-time")
    {
        last_retransmission_time.yfilter = yfilter;
    }
    if(value_path == "lsa-retransmission-timer")
    {
        lsa_retransmission_timer.yfilter = yfilter;
    }
    if(value_path == "maximum-retransmission-length")
    {
        maximum_retransmission_length.yfilter = yfilter;
    }
    if(value_path == "maximum-retransmission-time")
    {
        maximum_retransmission_time.yfilter = yfilter;
    }
    if(value_path == "neighbor-retransmission-count")
    {
        neighbor_retransmission_count.yfilter = yfilter;
    }
    if(value_path == "number-of-retransmissions")
    {
        number_of_retransmissions.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborRetransmissionInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "area-first-flood-information" || name == "area-first-flood-information-index" || name == "area-flooding-index" || name == "area-next-flood-information" || name == "area-next-flood-information-index" || name == "as-first-flood-information" || name == "as-first-flood-information-index" || name == "as-flood-index" || name == "as-next-flood-information" || name == "as-next-flood-information-index" || name == "dbd-retransmission-count" || name == "dbd-retransmission-total-count" || name == "last-retransmission-length" || name == "last-retransmission-time" || name == "lsa-retransmission-timer" || name == "maximum-retransmission-length" || name == "maximum-retransmission-time" || name == "neighbor-retransmission-count" || name == "number-of-retransmissions")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary::NeighborSummary()
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

bool Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dr_bdr_state.yfilter)
	|| ydk::is_set(neighbor_address_xr.yfilter)
	|| ydk::is_set(neighbor_dead_timer.yfilter)
	|| ydk::is_set(neighbor_dr_priority.yfilter)
	|| ydk::is_set(neighbor_id.yfilter)
	|| ydk::is_set(neighbor_interface_name.yfilter)
	|| ydk::is_set(neighbor_madj_interface.yfilter)
	|| ydk::is_set(neighbor_state.yfilter)
	|| ydk::is_set(neighbor_up_time.yfilter)
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

    if (dr_bdr_state.is_set || is_set(dr_bdr_state.yfilter)) leaf_name_data.push_back(dr_bdr_state.get_name_leafdata());
    if (neighbor_address_xr.is_set || is_set(neighbor_address_xr.yfilter)) leaf_name_data.push_back(neighbor_address_xr.get_name_leafdata());
    if (neighbor_dead_timer.is_set || is_set(neighbor_dead_timer.yfilter)) leaf_name_data.push_back(neighbor_dead_timer.get_name_leafdata());
    if (neighbor_dr_priority.is_set || is_set(neighbor_dr_priority.yfilter)) leaf_name_data.push_back(neighbor_dr_priority.get_name_leafdata());
    if (neighbor_id.is_set || is_set(neighbor_id.yfilter)) leaf_name_data.push_back(neighbor_id.get_name_leafdata());
    if (neighbor_interface_name.is_set || is_set(neighbor_interface_name.yfilter)) leaf_name_data.push_back(neighbor_interface_name.get_name_leafdata());
    if (neighbor_madj_interface.is_set || is_set(neighbor_madj_interface.yfilter)) leaf_name_data.push_back(neighbor_madj_interface.get_name_leafdata());
    if (neighbor_state.is_set || is_set(neighbor_state.yfilter)) leaf_name_data.push_back(neighbor_state.get_name_leafdata());
    if (neighbor_up_time.is_set || is_set(neighbor_up_time.yfilter)) leaf_name_data.push_back(neighbor_up_time.get_name_leafdata());

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
    if(neighbor_bfd_information != nullptr)
    {
        children["neighbor-bfd-information"] = neighbor_bfd_information;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dr-bdr-state")
    {
        dr_bdr_state = value;
        dr_bdr_state.value_namespace = name_space;
        dr_bdr_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-address-xr")
    {
        neighbor_address_xr = value;
        neighbor_address_xr.value_namespace = name_space;
        neighbor_address_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-dead-timer")
    {
        neighbor_dead_timer = value;
        neighbor_dead_timer.value_namespace = name_space;
        neighbor_dead_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-dr-priority")
    {
        neighbor_dr_priority = value;
        neighbor_dr_priority.value_namespace = name_space;
        neighbor_dr_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-id")
    {
        neighbor_id = value;
        neighbor_id.value_namespace = name_space;
        neighbor_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-interface-name")
    {
        neighbor_interface_name = value;
        neighbor_interface_name.value_namespace = name_space;
        neighbor_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-madj-interface")
    {
        neighbor_madj_interface = value;
        neighbor_madj_interface.value_namespace = name_space;
        neighbor_madj_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-state")
    {
        neighbor_state = value;
        neighbor_state.value_namespace = name_space;
        neighbor_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-up-time")
    {
        neighbor_up_time = value;
        neighbor_up_time.value_namespace = name_space;
        neighbor_up_time.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dr-bdr-state")
    {
        dr_bdr_state.yfilter = yfilter;
    }
    if(value_path == "neighbor-address-xr")
    {
        neighbor_address_xr.yfilter = yfilter;
    }
    if(value_path == "neighbor-dead-timer")
    {
        neighbor_dead_timer.yfilter = yfilter;
    }
    if(value_path == "neighbor-dr-priority")
    {
        neighbor_dr_priority.yfilter = yfilter;
    }
    if(value_path == "neighbor-id")
    {
        neighbor_id.yfilter = yfilter;
    }
    if(value_path == "neighbor-interface-name")
    {
        neighbor_interface_name.yfilter = yfilter;
    }
    if(value_path == "neighbor-madj-interface")
    {
        neighbor_madj_interface.yfilter = yfilter;
    }
    if(value_path == "neighbor-state")
    {
        neighbor_state.yfilter = yfilter;
    }
    if(value_path == "neighbor-up-time")
    {
        neighbor_up_time.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-bfd-information" || name == "dr-bdr-state" || name == "neighbor-address-xr" || name == "neighbor-dead-timer" || name == "neighbor-dr-priority" || name == "neighbor-id" || name == "neighbor-interface-name" || name == "neighbor-madj-interface" || name == "neighbor-state" || name == "neighbor-up-time")
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

Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Neighbors::Neighbors()
{

    yang_name = "neighbors"; yang_parent_name = "adjacency-information"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Neighbors::~Neighbors()
{
}

bool Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Neighbors::has_data() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Neighbors::has_operation() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Neighbors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Neighbors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Neighbors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Neighbors::Neighbor>();
        c->parent = this;
        neighbor.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Neighbors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : neighbor)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Neighbors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Neighbors::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Neighbors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Neighbors::Neighbor::Neighbor()
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
    neighbor_bfd_information(std::make_shared<Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Neighbors::Neighbor::NeighborBfdInformation>())
{
    neighbor_bfd_information->parent = this;

    yang_name = "neighbor"; yang_parent_name = "neighbors"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Neighbors::Neighbor::~Neighbor()
{
}

bool Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Neighbors::Neighbor::has_data() const
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

bool Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Neighbors::Neighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dr_bdr_state.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(neighbor_address_xr.yfilter)
	|| ydk::is_set(neighbor_dead_timer.yfilter)
	|| ydk::is_set(neighbor_dr_priority.yfilter)
	|| ydk::is_set(neighbor_id.yfilter)
	|| ydk::is_set(neighbor_interface_name.yfilter)
	|| ydk::is_set(neighbor_madj_interface.yfilter)
	|| ydk::is_set(neighbor_state.yfilter)
	|| ydk::is_set(neighbor_up_time.yfilter)
	|| (neighbor_bfd_information !=  nullptr && neighbor_bfd_information->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Neighbors::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Neighbors::Neighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dr_bdr_state.is_set || is_set(dr_bdr_state.yfilter)) leaf_name_data.push_back(dr_bdr_state.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (neighbor_address_xr.is_set || is_set(neighbor_address_xr.yfilter)) leaf_name_data.push_back(neighbor_address_xr.get_name_leafdata());
    if (neighbor_dead_timer.is_set || is_set(neighbor_dead_timer.yfilter)) leaf_name_data.push_back(neighbor_dead_timer.get_name_leafdata());
    if (neighbor_dr_priority.is_set || is_set(neighbor_dr_priority.yfilter)) leaf_name_data.push_back(neighbor_dr_priority.get_name_leafdata());
    if (neighbor_id.is_set || is_set(neighbor_id.yfilter)) leaf_name_data.push_back(neighbor_id.get_name_leafdata());
    if (neighbor_interface_name.is_set || is_set(neighbor_interface_name.yfilter)) leaf_name_data.push_back(neighbor_interface_name.get_name_leafdata());
    if (neighbor_madj_interface.is_set || is_set(neighbor_madj_interface.yfilter)) leaf_name_data.push_back(neighbor_madj_interface.get_name_leafdata());
    if (neighbor_state.is_set || is_set(neighbor_state.yfilter)) leaf_name_data.push_back(neighbor_state.get_name_leafdata());
    if (neighbor_up_time.is_set || is_set(neighbor_up_time.yfilter)) leaf_name_data.push_back(neighbor_up_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Neighbors::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor-bfd-information")
    {
        if(neighbor_bfd_information == nullptr)
        {
            neighbor_bfd_information = std::make_shared<Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Neighbors::Neighbor::NeighborBfdInformation>();
        }
        return neighbor_bfd_information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Neighbors::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(neighbor_bfd_information != nullptr)
    {
        children["neighbor-bfd-information"] = neighbor_bfd_information;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Neighbors::Neighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dr-bdr-state")
    {
        dr_bdr_state = value;
        dr_bdr_state.value_namespace = name_space;
        dr_bdr_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-address-xr")
    {
        neighbor_address_xr = value;
        neighbor_address_xr.value_namespace = name_space;
        neighbor_address_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-dead-timer")
    {
        neighbor_dead_timer = value;
        neighbor_dead_timer.value_namespace = name_space;
        neighbor_dead_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-dr-priority")
    {
        neighbor_dr_priority = value;
        neighbor_dr_priority.value_namespace = name_space;
        neighbor_dr_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-id")
    {
        neighbor_id = value;
        neighbor_id.value_namespace = name_space;
        neighbor_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-interface-name")
    {
        neighbor_interface_name = value;
        neighbor_interface_name.value_namespace = name_space;
        neighbor_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-madj-interface")
    {
        neighbor_madj_interface = value;
        neighbor_madj_interface.value_namespace = name_space;
        neighbor_madj_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-state")
    {
        neighbor_state = value;
        neighbor_state.value_namespace = name_space;
        neighbor_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-up-time")
    {
        neighbor_up_time = value;
        neighbor_up_time.value_namespace = name_space;
        neighbor_up_time.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Neighbors::Neighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dr-bdr-state")
    {
        dr_bdr_state.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "neighbor-address-xr")
    {
        neighbor_address_xr.yfilter = yfilter;
    }
    if(value_path == "neighbor-dead-timer")
    {
        neighbor_dead_timer.yfilter = yfilter;
    }
    if(value_path == "neighbor-dr-priority")
    {
        neighbor_dr_priority.yfilter = yfilter;
    }
    if(value_path == "neighbor-id")
    {
        neighbor_id.yfilter = yfilter;
    }
    if(value_path == "neighbor-interface-name")
    {
        neighbor_interface_name.yfilter = yfilter;
    }
    if(value_path == "neighbor-madj-interface")
    {
        neighbor_madj_interface.yfilter = yfilter;
    }
    if(value_path == "neighbor-state")
    {
        neighbor_state.yfilter = yfilter;
    }
    if(value_path == "neighbor-up-time")
    {
        neighbor_up_time.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Neighbors::Neighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-bfd-information" || name == "dr-bdr-state" || name == "interface-name" || name == "neighbor-address" || name == "neighbor-address-xr" || name == "neighbor-dead-timer" || name == "neighbor-dr-priority" || name == "neighbor-id" || name == "neighbor-interface-name" || name == "neighbor-madj-interface" || name == "neighbor-state" || name == "neighbor-up-time")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Neighbors::Neighbor::NeighborBfdInformation::NeighborBfdInformation()
    :
    bfd_intf_enable_mode{YType::uint32, "bfd-intf-enable-mode"},
    bfd_status_flag{YType::uint8, "bfd-status-flag"}
{

    yang_name = "neighbor-bfd-information"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Neighbors::Neighbor::NeighborBfdInformation::~NeighborBfdInformation()
{
}

bool Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Neighbors::Neighbor::NeighborBfdInformation::has_data() const
{
    return bfd_intf_enable_mode.is_set
	|| bfd_status_flag.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Neighbors::Neighbor::NeighborBfdInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bfd_intf_enable_mode.yfilter)
	|| ydk::is_set(bfd_status_flag.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Neighbors::Neighbor::NeighborBfdInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-bfd-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Neighbors::Neighbor::NeighborBfdInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bfd_intf_enable_mode.is_set || is_set(bfd_intf_enable_mode.yfilter)) leaf_name_data.push_back(bfd_intf_enable_mode.get_name_leafdata());
    if (bfd_status_flag.is_set || is_set(bfd_status_flag.yfilter)) leaf_name_data.push_back(bfd_status_flag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Neighbors::Neighbor::NeighborBfdInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Neighbors::Neighbor::NeighborBfdInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Neighbors::Neighbor::NeighborBfdInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Neighbors::Neighbor::NeighborBfdInformation::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Neighbors::Neighbor::NeighborBfdInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bfd-intf-enable-mode" || name == "bfd-status-flag")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Requests::Requests()
{

    yang_name = "requests"; yang_parent_name = "adjacency-information"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Requests::~Requests()
{
}

bool Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Requests::has_data() const
{
    for (std::size_t index=0; index<request.size(); index++)
    {
        if(request[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Requests::has_operation() const
{
    for (std::size_t index=0; index<request.size(); index++)
    {
        if(request[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Requests::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "requests";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Requests::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Requests::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Requests::Request>();
        c->parent = this;
        request.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Requests::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : request)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Requests::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Requests::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Requests::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "request")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Requests::Request::Request()
    :
    interface_name{YType::str, "interface-name"},
    neighbor_address{YType::str, "neighbor-address"},
    request_interface_name{YType::str, "request-interface-name"},
    request_neighbor_address{YType::str, "request-neighbor-address"},
    request_neighbor_id{YType::str, "request-neighbor-id"}
{

    yang_name = "request"; yang_parent_name = "requests"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Requests::Request::~Request()
{
}

bool Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Requests::Request::has_data() const
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

bool Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Requests::Request::has_operation() const
{
    for (std::size_t index=0; index<request.size(); index++)
    {
        if(request[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(request_interface_name.yfilter)
	|| ydk::is_set(request_neighbor_address.yfilter)
	|| ydk::is_set(request_neighbor_id.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Requests::Request::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "request";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Requests::Request::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (request_interface_name.is_set || is_set(request_interface_name.yfilter)) leaf_name_data.push_back(request_interface_name.get_name_leafdata());
    if (request_neighbor_address.is_set || is_set(request_neighbor_address.yfilter)) leaf_name_data.push_back(request_neighbor_address.get_name_leafdata());
    if (request_neighbor_id.is_set || is_set(request_neighbor_id.yfilter)) leaf_name_data.push_back(request_neighbor_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Requests::Request::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Requests::Request::Request_>();
        c->parent = this;
        request.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Requests::Request::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : request)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Requests::Request::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "request-interface-name")
    {
        request_interface_name = value;
        request_interface_name.value_namespace = name_space;
        request_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "request-neighbor-address")
    {
        request_neighbor_address = value;
        request_neighbor_address.value_namespace = name_space;
        request_neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "request-neighbor-id")
    {
        request_neighbor_id = value;
        request_neighbor_id.value_namespace = name_space;
        request_neighbor_id.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Requests::Request::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "request-interface-name")
    {
        request_interface_name.yfilter = yfilter;
    }
    if(value_path == "request-neighbor-address")
    {
        request_neighbor_address.yfilter = yfilter;
    }
    if(value_path == "request-neighbor-id")
    {
        request_neighbor_id.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Requests::Request::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "request" || name == "interface-name" || name == "neighbor-address" || name == "request-interface-name" || name == "request-neighbor-address" || name == "request-neighbor-id")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Requests::Request::Request_::Request_()
    :
    header_advertising_router{YType::str, "header-advertising-router"},
    header_ls_id{YType::str, "header-ls-id"},
    header_lsa_age{YType::uint16, "header-lsa-age"},
    header_lsa_checksum{YType::uint16, "header-lsa-checksum"},
    header_lsa_type{YType::enumeration, "header-lsa-type"},
    header_sequence_number{YType::uint32, "header-sequence-number"}
{

    yang_name = "request"; yang_parent_name = "request"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Requests::Request::Request_::~Request_()
{
}

bool Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Requests::Request::Request_::has_data() const
{
    return header_advertising_router.is_set
	|| header_ls_id.is_set
	|| header_lsa_age.is_set
	|| header_lsa_checksum.is_set
	|| header_lsa_type.is_set
	|| header_sequence_number.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Requests::Request::Request_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(header_advertising_router.yfilter)
	|| ydk::is_set(header_ls_id.yfilter)
	|| ydk::is_set(header_lsa_age.yfilter)
	|| ydk::is_set(header_lsa_checksum.yfilter)
	|| ydk::is_set(header_lsa_type.yfilter)
	|| ydk::is_set(header_sequence_number.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Requests::Request::Request_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "request";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Requests::Request::Request_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (header_advertising_router.is_set || is_set(header_advertising_router.yfilter)) leaf_name_data.push_back(header_advertising_router.get_name_leafdata());
    if (header_ls_id.is_set || is_set(header_ls_id.yfilter)) leaf_name_data.push_back(header_ls_id.get_name_leafdata());
    if (header_lsa_age.is_set || is_set(header_lsa_age.yfilter)) leaf_name_data.push_back(header_lsa_age.get_name_leafdata());
    if (header_lsa_checksum.is_set || is_set(header_lsa_checksum.yfilter)) leaf_name_data.push_back(header_lsa_checksum.get_name_leafdata());
    if (header_lsa_type.is_set || is_set(header_lsa_type.yfilter)) leaf_name_data.push_back(header_lsa_type.get_name_leafdata());
    if (header_sequence_number.is_set || is_set(header_sequence_number.yfilter)) leaf_name_data.push_back(header_sequence_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Requests::Request::Request_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Requests::Request::Request_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Requests::Request::Request_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "header-advertising-router")
    {
        header_advertising_router = value;
        header_advertising_router.value_namespace = name_space;
        header_advertising_router.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "header-ls-id")
    {
        header_ls_id = value;
        header_ls_id.value_namespace = name_space;
        header_ls_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "header-lsa-age")
    {
        header_lsa_age = value;
        header_lsa_age.value_namespace = name_space;
        header_lsa_age.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "header-lsa-checksum")
    {
        header_lsa_checksum = value;
        header_lsa_checksum.value_namespace = name_space;
        header_lsa_checksum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "header-lsa-type")
    {
        header_lsa_type = value;
        header_lsa_type.value_namespace = name_space;
        header_lsa_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "header-sequence-number")
    {
        header_sequence_number = value;
        header_sequence_number.value_namespace = name_space;
        header_sequence_number.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Requests::Request::Request_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "header-advertising-router")
    {
        header_advertising_router.yfilter = yfilter;
    }
    if(value_path == "header-ls-id")
    {
        header_ls_id.yfilter = yfilter;
    }
    if(value_path == "header-lsa-age")
    {
        header_lsa_age.yfilter = yfilter;
    }
    if(value_path == "header-lsa-checksum")
    {
        header_lsa_checksum.yfilter = yfilter;
    }
    if(value_path == "header-lsa-type")
    {
        header_lsa_type.yfilter = yfilter;
    }
    if(value_path == "header-sequence-number")
    {
        header_sequence_number.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Requests::Request::Request_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "header-advertising-router" || name == "header-ls-id" || name == "header-lsa-age" || name == "header-lsa-checksum" || name == "header-lsa-type" || name == "header-sequence-number")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Retransmissions::Retransmissions()
{

    yang_name = "retransmissions"; yang_parent_name = "adjacency-information"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Retransmissions::~Retransmissions()
{
}

bool Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Retransmissions::has_data() const
{
    for (std::size_t index=0; index<retransmission.size(); index++)
    {
        if(retransmission[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Retransmissions::has_operation() const
{
    for (std::size_t index=0; index<retransmission.size(); index++)
    {
        if(retransmission[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Retransmissions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "retransmissions";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Retransmissions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Retransmissions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Retransmissions::Retransmission>();
        c->parent = this;
        retransmission.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Retransmissions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : retransmission)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Retransmissions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Retransmissions::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Retransmissions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "retransmission")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Retransmissions::Retransmission::Retransmission()
    :
    interface_name{YType::str, "interface-name"},
    neighbor_address{YType::str, "neighbor-address"},
    retransmission_count{YType::uint32, "retransmission-count"},
    retransmission_interface_name{YType::str, "retransmission-interface-name"},
    retransmission_neighbor_id{YType::str, "retransmission-neighbor-id"},
    retransmission_neighbor_ip_address{YType::str, "retransmission-neighbor-ip-address"},
    retransmission_timer{YType::uint32, "retransmission-timer"}
{

    yang_name = "retransmission"; yang_parent_name = "retransmissions"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Retransmissions::Retransmission::~Retransmission()
{
}

bool Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Retransmissions::Retransmission::has_data() const
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

bool Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Retransmissions::Retransmission::has_operation() const
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
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(retransmission_count.yfilter)
	|| ydk::is_set(retransmission_interface_name.yfilter)
	|| ydk::is_set(retransmission_neighbor_id.yfilter)
	|| ydk::is_set(retransmission_neighbor_ip_address.yfilter)
	|| ydk::is_set(retransmission_timer.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Retransmissions::Retransmission::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "retransmission";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Retransmissions::Retransmission::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (retransmission_count.is_set || is_set(retransmission_count.yfilter)) leaf_name_data.push_back(retransmission_count.get_name_leafdata());
    if (retransmission_interface_name.is_set || is_set(retransmission_interface_name.yfilter)) leaf_name_data.push_back(retransmission_interface_name.get_name_leafdata());
    if (retransmission_neighbor_id.is_set || is_set(retransmission_neighbor_id.yfilter)) leaf_name_data.push_back(retransmission_neighbor_id.get_name_leafdata());
    if (retransmission_neighbor_ip_address.is_set || is_set(retransmission_neighbor_ip_address.yfilter)) leaf_name_data.push_back(retransmission_neighbor_ip_address.get_name_leafdata());
    if (retransmission_timer.is_set || is_set(retransmission_timer.yfilter)) leaf_name_data.push_back(retransmission_timer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Retransmissions::Retransmission::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Retransmissions::Retransmission::RetransmissionAreaDb>();
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
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Retransmissions::Retransmission::RetransmissionAsdb>();
        c->parent = this;
        retransmission_asdb.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Retransmissions::Retransmission::get_children() const
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

void Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Retransmissions::Retransmission::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retransmission-count")
    {
        retransmission_count = value;
        retransmission_count.value_namespace = name_space;
        retransmission_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retransmission-interface-name")
    {
        retransmission_interface_name = value;
        retransmission_interface_name.value_namespace = name_space;
        retransmission_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retransmission-neighbor-id")
    {
        retransmission_neighbor_id = value;
        retransmission_neighbor_id.value_namespace = name_space;
        retransmission_neighbor_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retransmission-neighbor-ip-address")
    {
        retransmission_neighbor_ip_address = value;
        retransmission_neighbor_ip_address.value_namespace = name_space;
        retransmission_neighbor_ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retransmission-timer")
    {
        retransmission_timer = value;
        retransmission_timer.value_namespace = name_space;
        retransmission_timer.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Retransmissions::Retransmission::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "retransmission-count")
    {
        retransmission_count.yfilter = yfilter;
    }
    if(value_path == "retransmission-interface-name")
    {
        retransmission_interface_name.yfilter = yfilter;
    }
    if(value_path == "retransmission-neighbor-id")
    {
        retransmission_neighbor_id.yfilter = yfilter;
    }
    if(value_path == "retransmission-neighbor-ip-address")
    {
        retransmission_neighbor_ip_address.yfilter = yfilter;
    }
    if(value_path == "retransmission-timer")
    {
        retransmission_timer.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Retransmissions::Retransmission::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "retransmission-area-db" || name == "retransmission-asdb" || name == "interface-name" || name == "neighbor-address" || name == "retransmission-count" || name == "retransmission-interface-name" || name == "retransmission-neighbor-id" || name == "retransmission-neighbor-ip-address" || name == "retransmission-timer")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Retransmissions::Retransmission::RetransmissionAreaDb::RetransmissionAreaDb()
    :
    header_advertising_router{YType::str, "header-advertising-router"},
    header_ls_id{YType::str, "header-ls-id"},
    header_lsa_age{YType::uint16, "header-lsa-age"},
    header_lsa_checksum{YType::uint16, "header-lsa-checksum"},
    header_lsa_type{YType::enumeration, "header-lsa-type"},
    header_sequence_number{YType::uint32, "header-sequence-number"}
{

    yang_name = "retransmission-area-db"; yang_parent_name = "retransmission"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Retransmissions::Retransmission::RetransmissionAreaDb::~RetransmissionAreaDb()
{
}

bool Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Retransmissions::Retransmission::RetransmissionAreaDb::has_data() const
{
    return header_advertising_router.is_set
	|| header_ls_id.is_set
	|| header_lsa_age.is_set
	|| header_lsa_checksum.is_set
	|| header_lsa_type.is_set
	|| header_sequence_number.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Retransmissions::Retransmission::RetransmissionAreaDb::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(header_advertising_router.yfilter)
	|| ydk::is_set(header_ls_id.yfilter)
	|| ydk::is_set(header_lsa_age.yfilter)
	|| ydk::is_set(header_lsa_checksum.yfilter)
	|| ydk::is_set(header_lsa_type.yfilter)
	|| ydk::is_set(header_sequence_number.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Retransmissions::Retransmission::RetransmissionAreaDb::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "retransmission-area-db";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Retransmissions::Retransmission::RetransmissionAreaDb::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (header_advertising_router.is_set || is_set(header_advertising_router.yfilter)) leaf_name_data.push_back(header_advertising_router.get_name_leafdata());
    if (header_ls_id.is_set || is_set(header_ls_id.yfilter)) leaf_name_data.push_back(header_ls_id.get_name_leafdata());
    if (header_lsa_age.is_set || is_set(header_lsa_age.yfilter)) leaf_name_data.push_back(header_lsa_age.get_name_leafdata());
    if (header_lsa_checksum.is_set || is_set(header_lsa_checksum.yfilter)) leaf_name_data.push_back(header_lsa_checksum.get_name_leafdata());
    if (header_lsa_type.is_set || is_set(header_lsa_type.yfilter)) leaf_name_data.push_back(header_lsa_type.get_name_leafdata());
    if (header_sequence_number.is_set || is_set(header_sequence_number.yfilter)) leaf_name_data.push_back(header_sequence_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Retransmissions::Retransmission::RetransmissionAreaDb::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Retransmissions::Retransmission::RetransmissionAreaDb::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Retransmissions::Retransmission::RetransmissionAreaDb::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "header-advertising-router")
    {
        header_advertising_router = value;
        header_advertising_router.value_namespace = name_space;
        header_advertising_router.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "header-ls-id")
    {
        header_ls_id = value;
        header_ls_id.value_namespace = name_space;
        header_ls_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "header-lsa-age")
    {
        header_lsa_age = value;
        header_lsa_age.value_namespace = name_space;
        header_lsa_age.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "header-lsa-checksum")
    {
        header_lsa_checksum = value;
        header_lsa_checksum.value_namespace = name_space;
        header_lsa_checksum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "header-lsa-type")
    {
        header_lsa_type = value;
        header_lsa_type.value_namespace = name_space;
        header_lsa_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "header-sequence-number")
    {
        header_sequence_number = value;
        header_sequence_number.value_namespace = name_space;
        header_sequence_number.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Retransmissions::Retransmission::RetransmissionAreaDb::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "header-advertising-router")
    {
        header_advertising_router.yfilter = yfilter;
    }
    if(value_path == "header-ls-id")
    {
        header_ls_id.yfilter = yfilter;
    }
    if(value_path == "header-lsa-age")
    {
        header_lsa_age.yfilter = yfilter;
    }
    if(value_path == "header-lsa-checksum")
    {
        header_lsa_checksum.yfilter = yfilter;
    }
    if(value_path == "header-lsa-type")
    {
        header_lsa_type.yfilter = yfilter;
    }
    if(value_path == "header-sequence-number")
    {
        header_sequence_number.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Retransmissions::Retransmission::RetransmissionAreaDb::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "header-advertising-router" || name == "header-ls-id" || name == "header-lsa-age" || name == "header-lsa-checksum" || name == "header-lsa-type" || name == "header-sequence-number")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Retransmissions::Retransmission::RetransmissionAsdb::RetransmissionAsdb()
    :
    header_advertising_router{YType::str, "header-advertising-router"},
    header_ls_id{YType::str, "header-ls-id"},
    header_lsa_age{YType::uint16, "header-lsa-age"},
    header_lsa_checksum{YType::uint16, "header-lsa-checksum"},
    header_lsa_type{YType::enumeration, "header-lsa-type"},
    header_sequence_number{YType::uint32, "header-sequence-number"}
{

    yang_name = "retransmission-asdb"; yang_parent_name = "retransmission"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Retransmissions::Retransmission::RetransmissionAsdb::~RetransmissionAsdb()
{
}

bool Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Retransmissions::Retransmission::RetransmissionAsdb::has_data() const
{
    return header_advertising_router.is_set
	|| header_ls_id.is_set
	|| header_lsa_age.is_set
	|| header_lsa_checksum.is_set
	|| header_lsa_type.is_set
	|| header_sequence_number.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Retransmissions::Retransmission::RetransmissionAsdb::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(header_advertising_router.yfilter)
	|| ydk::is_set(header_ls_id.yfilter)
	|| ydk::is_set(header_lsa_age.yfilter)
	|| ydk::is_set(header_lsa_checksum.yfilter)
	|| ydk::is_set(header_lsa_type.yfilter)
	|| ydk::is_set(header_sequence_number.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Retransmissions::Retransmission::RetransmissionAsdb::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "retransmission-asdb";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Retransmissions::Retransmission::RetransmissionAsdb::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (header_advertising_router.is_set || is_set(header_advertising_router.yfilter)) leaf_name_data.push_back(header_advertising_router.get_name_leafdata());
    if (header_ls_id.is_set || is_set(header_ls_id.yfilter)) leaf_name_data.push_back(header_ls_id.get_name_leafdata());
    if (header_lsa_age.is_set || is_set(header_lsa_age.yfilter)) leaf_name_data.push_back(header_lsa_age.get_name_leafdata());
    if (header_lsa_checksum.is_set || is_set(header_lsa_checksum.yfilter)) leaf_name_data.push_back(header_lsa_checksum.get_name_leafdata());
    if (header_lsa_type.is_set || is_set(header_lsa_type.yfilter)) leaf_name_data.push_back(header_lsa_type.get_name_leafdata());
    if (header_sequence_number.is_set || is_set(header_sequence_number.yfilter)) leaf_name_data.push_back(header_sequence_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Retransmissions::Retransmission::RetransmissionAsdb::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Retransmissions::Retransmission::RetransmissionAsdb::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Retransmissions::Retransmission::RetransmissionAsdb::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "header-advertising-router")
    {
        header_advertising_router = value;
        header_advertising_router.value_namespace = name_space;
        header_advertising_router.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "header-ls-id")
    {
        header_ls_id = value;
        header_ls_id.value_namespace = name_space;
        header_ls_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "header-lsa-age")
    {
        header_lsa_age = value;
        header_lsa_age.value_namespace = name_space;
        header_lsa_age.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "header-lsa-checksum")
    {
        header_lsa_checksum = value;
        header_lsa_checksum.value_namespace = name_space;
        header_lsa_checksum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "header-lsa-type")
    {
        header_lsa_type = value;
        header_lsa_type.value_namespace = name_space;
        header_lsa_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "header-sequence-number")
    {
        header_sequence_number = value;
        header_sequence_number.value_namespace = name_space;
        header_sequence_number.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Retransmissions::Retransmission::RetransmissionAsdb::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "header-advertising-router")
    {
        header_advertising_router.yfilter = yfilter;
    }
    if(value_path == "header-ls-id")
    {
        header_ls_id.yfilter = yfilter;
    }
    if(value_path == "header-lsa-age")
    {
        header_lsa_age.yfilter = yfilter;
    }
    if(value_path == "header-lsa-checksum")
    {
        header_lsa_checksum.yfilter = yfilter;
    }
    if(value_path == "header-lsa-type")
    {
        header_lsa_type.yfilter = yfilter;
    }
    if(value_path == "header-sequence-number")
    {
        header_sequence_number.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Retransmissions::Retransmission::RetransmissionAsdb::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "header-advertising-router" || name == "header-ls-id" || name == "header-lsa-age" || name == "header-lsa-checksum" || name == "header-lsa-type" || name == "header-sequence-number")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::AreaStatistics::AreaStatistics()
    :
    interface_stats_entries(std::make_shared<Ospf::Processes::Process::DefaultVrf::AreaStatistics::InterfaceStatsEntries>())
{
    interface_stats_entries->parent = this;

    yang_name = "area-statistics"; yang_parent_name = "default-vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::AreaStatistics::~AreaStatistics()
{
}

bool Ospf::Processes::Process::DefaultVrf::AreaStatistics::has_data() const
{
    return (interface_stats_entries !=  nullptr && interface_stats_entries->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::AreaStatistics::has_operation() const
{
    return is_set(yfilter)
	|| (interface_stats_entries !=  nullptr && interface_stats_entries->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::AreaStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "area-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::AreaStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::AreaStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-stats-entries")
    {
        if(interface_stats_entries == nullptr)
        {
            interface_stats_entries = std::make_shared<Ospf::Processes::Process::DefaultVrf::AreaStatistics::InterfaceStatsEntries>();
        }
        return interface_stats_entries;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::AreaStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interface_stats_entries != nullptr)
    {
        children["interface-stats-entries"] = interface_stats_entries;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::AreaStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::DefaultVrf::AreaStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::DefaultVrf::AreaStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-stats-entries")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntries()
{

    yang_name = "interface-stats-entries"; yang_parent_name = "area-statistics"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::AreaStatistics::InterfaceStatsEntries::~InterfaceStatsEntries()
{
}

bool Ospf::Processes::Process::DefaultVrf::AreaStatistics::InterfaceStatsEntries::has_data() const
{
    for (std::size_t index=0; index<interface_stats_entry.size(); index++)
    {
        if(interface_stats_entry[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::DefaultVrf::AreaStatistics::InterfaceStatsEntries::has_operation() const
{
    for (std::size_t index=0; index<interface_stats_entry.size(); index++)
    {
        if(interface_stats_entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::AreaStatistics::InterfaceStatsEntries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-stats-entries";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::AreaStatistics::InterfaceStatsEntries::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::AreaStatistics::InterfaceStatsEntries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-stats-entry")
    {
        for(auto const & c : interface_stats_entry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry>();
        c->parent = this;
        interface_stats_entry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::AreaStatistics::InterfaceStatsEntries::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface_stats_entry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::AreaStatistics::InterfaceStatsEntries::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::DefaultVrf::AreaStatistics::InterfaceStatsEntries::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::DefaultVrf::AreaStatistics::InterfaceStatsEntries::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-stats-entry")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::InterfaceStatsEntry()
    :
    interface_name{YType::str, "interface-name"},
    handle{YType::str, "handle"},
    if_name_str{YType::str, "if-name-str"}
{

    yang_name = "interface-stats-entry"; yang_parent_name = "interface-stats-entries"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::~InterfaceStatsEntry()
{
}

bool Ospf::Processes::Process::DefaultVrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::has_data() const
{
    for (std::size_t index=0; index<if_entry.size(); index++)
    {
        if(if_entry[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| handle.is_set
	|| if_name_str.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::has_operation() const
{
    for (std::size_t index=0; index<if_entry.size(); index++)
    {
        if(if_entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(handle.yfilter)
	|| ydk::is_set(if_name_str.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-stats-entry" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (handle.is_set || is_set(handle.yfilter)) leaf_name_data.push_back(handle.get_name_leafdata());
    if (if_name_str.is_set || is_set(if_name_str.yfilter)) leaf_name_data.push_back(if_name_str.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "if-entry")
    {
        for(auto const & c : if_entry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry>();
        c->parent = this;
        if_entry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : if_entry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "handle")
    {
        handle = value;
        handle.value_namespace = name_space;
        handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "if-name-str")
    {
        if_name_str = value;
        if_name_str.value_namespace = name_space;
        if_name_str.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "handle")
    {
        handle.yfilter = yfilter;
    }
    if(value_path == "if-name-str")
    {
        if_name_str.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "if-entry" || name == "interface-name" || name == "handle" || name == "if-name-str")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfEntry()
    :
    area_id{YType::uint32, "area-id"},
    area_id_str{YType::str, "area-id-str"},
    madj_intf{YType::boolean, "madj-intf"}
{

    yang_name = "if-entry"; yang_parent_name = "interface-stats-entry"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::~IfEntry()
{
}

bool Ospf::Processes::Process::DefaultVrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::has_data() const
{
    for (std::size_t index=0; index<if_stat.size(); index++)
    {
        if(if_stat[index]->has_data())
            return true;
    }
    return area_id.is_set
	|| area_id_str.is_set
	|| madj_intf.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::has_operation() const
{
    for (std::size_t index=0; index<if_stat.size(); index++)
    {
        if(if_stat[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(area_id.yfilter)
	|| ydk::is_set(area_id_str.yfilter)
	|| ydk::is_set(madj_intf.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "if-entry";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_id.is_set || is_set(area_id.yfilter)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (area_id_str.is_set || is_set(area_id_str.yfilter)) leaf_name_data.push_back(area_id_str.get_name_leafdata());
    if (madj_intf.is_set || is_set(madj_intf.yfilter)) leaf_name_data.push_back(madj_intf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "if-stat")
    {
        for(auto const & c : if_stat)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfStat>();
        c->parent = this;
        if_stat.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : if_stat)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "area-id")
    {
        area_id = value;
        area_id.value_namespace = name_space;
        area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-id-str")
    {
        area_id_str = value;
        area_id_str.value_namespace = name_space;
        area_id_str.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "madj-intf")
    {
        madj_intf = value;
        madj_intf.value_namespace = name_space;
        madj_intf.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "area-id")
    {
        area_id.yfilter = yfilter;
    }
    if(value_path == "area-id-str")
    {
        area_id_str.yfilter = yfilter;
    }
    if(value_path == "madj-intf")
    {
        madj_intf.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "if-stat" || name == "area-id" || name == "area-id-str" || name == "madj-intf")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfStat::IfStat()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "if-stat"; yang_parent_name = "if-entry"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfStat::~IfStat()
{
}

bool Ospf::Processes::Process::DefaultVrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfStat::has_data() const
{
    return entry.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfStat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "if-stat";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfStat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfStat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfStat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfStat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfStat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Areas::Areas()
{

    yang_name = "areas"; yang_parent_name = "default-vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Areas::~Areas()
{
}

bool Ospf::Processes::Process::DefaultVrf::Areas::has_data() const
{
    for (std::size_t index=0; index<area.size(); index++)
    {
        if(area[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::DefaultVrf::Areas::has_operation() const
{
    for (std::size_t index=0; index<area.size(); index++)
    {
        if(area[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Areas::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "areas";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Areas::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Areas::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "area")
    {
        for(auto const & c : area)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::Areas::Area>();
        c->parent = this;
        area.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Areas::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : area)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Areas::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::DefaultVrf::Areas::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::DefaultVrf::Areas::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "area")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Areas::Area::Area()
    :
    area_id{YType::int32, "area-id"}
    	,
    area_statistics(std::make_shared<Ospf::Processes::Process::DefaultVrf::Areas::Area::AreaStatistics>())
	,flood_list_area_table(std::make_shared<Ospf::Processes::Process::DefaultVrf::Areas::Area::FloodListAreaTable>())
	,interface_briefs(std::make_shared<Ospf::Processes::Process::DefaultVrf::Areas::Area::InterfaceBriefs>())
	,interfaces(std::make_shared<Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces>())
	,neighbor_details(std::make_shared<Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails>())
	,neighbors(std::make_shared<Ospf::Processes::Process::DefaultVrf::Areas::Area::Neighbors>())
	,requests(std::make_shared<Ospf::Processes::Process::DefaultVrf::Areas::Area::Requests>())
	,retransmissions(std::make_shared<Ospf::Processes::Process::DefaultVrf::Areas::Area::Retransmissions>())
{
    area_statistics->parent = this;
    flood_list_area_table->parent = this;
    interface_briefs->parent = this;
    interfaces->parent = this;
    neighbor_details->parent = this;
    neighbors->parent = this;
    requests->parent = this;
    retransmissions->parent = this;

    yang_name = "area"; yang_parent_name = "areas"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Areas::Area::~Area()
{
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::has_data() const
{
    return area_id.is_set
	|| (area_statistics !=  nullptr && area_statistics->has_data())
	|| (flood_list_area_table !=  nullptr && flood_list_area_table->has_data())
	|| (interface_briefs !=  nullptr && interface_briefs->has_data())
	|| (interfaces !=  nullptr && interfaces->has_data())
	|| (neighbor_details !=  nullptr && neighbor_details->has_data())
	|| (neighbors !=  nullptr && neighbors->has_data())
	|| (requests !=  nullptr && requests->has_data())
	|| (retransmissions !=  nullptr && retransmissions->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(area_id.yfilter)
	|| (area_statistics !=  nullptr && area_statistics->has_operation())
	|| (flood_list_area_table !=  nullptr && flood_list_area_table->has_operation())
	|| (interface_briefs !=  nullptr && interface_briefs->has_operation())
	|| (interfaces !=  nullptr && interfaces->has_operation())
	|| (neighbor_details !=  nullptr && neighbor_details->has_operation())
	|| (neighbors !=  nullptr && neighbors->has_operation())
	|| (requests !=  nullptr && requests->has_operation())
	|| (retransmissions !=  nullptr && retransmissions->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::Areas::Area::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "area" <<"[area-id='" <<area_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Areas::Area::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_id.is_set || is_set(area_id.yfilter)) leaf_name_data.push_back(area_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Areas::Area::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "area-statistics")
    {
        if(area_statistics == nullptr)
        {
            area_statistics = std::make_shared<Ospf::Processes::Process::DefaultVrf::Areas::Area::AreaStatistics>();
        }
        return area_statistics;
    }

    if(child_yang_name == "flood-list-area-table")
    {
        if(flood_list_area_table == nullptr)
        {
            flood_list_area_table = std::make_shared<Ospf::Processes::Process::DefaultVrf::Areas::Area::FloodListAreaTable>();
        }
        return flood_list_area_table;
    }

    if(child_yang_name == "interface-briefs")
    {
        if(interface_briefs == nullptr)
        {
            interface_briefs = std::make_shared<Ospf::Processes::Process::DefaultVrf::Areas::Area::InterfaceBriefs>();
        }
        return interface_briefs;
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces == nullptr)
        {
            interfaces = std::make_shared<Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces>();
        }
        return interfaces;
    }

    if(child_yang_name == "neighbor-details")
    {
        if(neighbor_details == nullptr)
        {
            neighbor_details = std::make_shared<Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails>();
        }
        return neighbor_details;
    }

    if(child_yang_name == "neighbors")
    {
        if(neighbors == nullptr)
        {
            neighbors = std::make_shared<Ospf::Processes::Process::DefaultVrf::Areas::Area::Neighbors>();
        }
        return neighbors;
    }

    if(child_yang_name == "requests")
    {
        if(requests == nullptr)
        {
            requests = std::make_shared<Ospf::Processes::Process::DefaultVrf::Areas::Area::Requests>();
        }
        return requests;
    }

    if(child_yang_name == "retransmissions")
    {
        if(retransmissions == nullptr)
        {
            retransmissions = std::make_shared<Ospf::Processes::Process::DefaultVrf::Areas::Area::Retransmissions>();
        }
        return retransmissions;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Areas::Area::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(area_statistics != nullptr)
    {
        children["area-statistics"] = area_statistics;
    }

    if(flood_list_area_table != nullptr)
    {
        children["flood-list-area-table"] = flood_list_area_table;
    }

    if(interface_briefs != nullptr)
    {
        children["interface-briefs"] = interface_briefs;
    }

    if(interfaces != nullptr)
    {
        children["interfaces"] = interfaces;
    }

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

void Ospf::Processes::Process::DefaultVrf::Areas::Area::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "area-id")
    {
        area_id = value;
        area_id.value_namespace = name_space;
        area_id.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Areas::Area::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "area-id")
    {
        area_id.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "area-statistics" || name == "flood-list-area-table" || name == "interface-briefs" || name == "interfaces" || name == "neighbor-details" || name == "neighbors" || name == "requests" || name == "retransmissions" || name == "area-id")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Areas::Area::AreaStatistics::AreaStatistics()
    :
    interface_stats_entries(std::make_shared<Ospf::Processes::Process::DefaultVrf::Areas::Area::AreaStatistics::InterfaceStatsEntries>())
{
    interface_stats_entries->parent = this;

    yang_name = "area-statistics"; yang_parent_name = "area"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Areas::Area::AreaStatistics::~AreaStatistics()
{
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::AreaStatistics::has_data() const
{
    return (interface_stats_entries !=  nullptr && interface_stats_entries->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::AreaStatistics::has_operation() const
{
    return is_set(yfilter)
	|| (interface_stats_entries !=  nullptr && interface_stats_entries->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::Areas::Area::AreaStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "area-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Areas::Area::AreaStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Areas::Area::AreaStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-stats-entries")
    {
        if(interface_stats_entries == nullptr)
        {
            interface_stats_entries = std::make_shared<Ospf::Processes::Process::DefaultVrf::Areas::Area::AreaStatistics::InterfaceStatsEntries>();
        }
        return interface_stats_entries;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Areas::Area::AreaStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interface_stats_entries != nullptr)
    {
        children["interface-stats-entries"] = interface_stats_entries;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Areas::Area::AreaStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::DefaultVrf::Areas::Area::AreaStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::AreaStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-stats-entries")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntries()
{

    yang_name = "interface-stats-entries"; yang_parent_name = "area-statistics"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::~InterfaceStatsEntries()
{
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::has_data() const
{
    for (std::size_t index=0; index<interface_stats_entry.size(); index++)
    {
        if(interface_stats_entry[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::has_operation() const
{
    for (std::size_t index=0; index<interface_stats_entry.size(); index++)
    {
        if(interface_stats_entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-stats-entries";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-stats-entry")
    {
        for(auto const & c : interface_stats_entry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry>();
        c->parent = this;
        interface_stats_entry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface_stats_entry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::DefaultVrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-stats-entry")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::InterfaceStatsEntry()
    :
    interface_name{YType::str, "interface-name"},
    handle{YType::str, "handle"},
    if_name_str{YType::str, "if-name-str"}
{

    yang_name = "interface-stats-entry"; yang_parent_name = "interface-stats-entries"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::~InterfaceStatsEntry()
{
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::has_data() const
{
    for (std::size_t index=0; index<if_entry.size(); index++)
    {
        if(if_entry[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| handle.is_set
	|| if_name_str.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::has_operation() const
{
    for (std::size_t index=0; index<if_entry.size(); index++)
    {
        if(if_entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(handle.yfilter)
	|| ydk::is_set(if_name_str.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-stats-entry" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (handle.is_set || is_set(handle.yfilter)) leaf_name_data.push_back(handle.get_name_leafdata());
    if (if_name_str.is_set || is_set(if_name_str.yfilter)) leaf_name_data.push_back(if_name_str.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "if-entry")
    {
        for(auto const & c : if_entry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry>();
        c->parent = this;
        if_entry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : if_entry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "handle")
    {
        handle = value;
        handle.value_namespace = name_space;
        handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "if-name-str")
    {
        if_name_str = value;
        if_name_str.value_namespace = name_space;
        if_name_str.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "handle")
    {
        handle.yfilter = yfilter;
    }
    if(value_path == "if-name-str")
    {
        if_name_str.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "if-entry" || name == "interface-name" || name == "handle" || name == "if-name-str")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfEntry()
    :
    area_id{YType::uint32, "area-id"},
    area_id_str{YType::str, "area-id-str"},
    madj_intf{YType::boolean, "madj-intf"}
{

    yang_name = "if-entry"; yang_parent_name = "interface-stats-entry"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::~IfEntry()
{
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::has_data() const
{
    for (std::size_t index=0; index<if_stat.size(); index++)
    {
        if(if_stat[index]->has_data())
            return true;
    }
    return area_id.is_set
	|| area_id_str.is_set
	|| madj_intf.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::has_operation() const
{
    for (std::size_t index=0; index<if_stat.size(); index++)
    {
        if(if_stat[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(area_id.yfilter)
	|| ydk::is_set(area_id_str.yfilter)
	|| ydk::is_set(madj_intf.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "if-entry";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_id.is_set || is_set(area_id.yfilter)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (area_id_str.is_set || is_set(area_id_str.yfilter)) leaf_name_data.push_back(area_id_str.get_name_leafdata());
    if (madj_intf.is_set || is_set(madj_intf.yfilter)) leaf_name_data.push_back(madj_intf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "if-stat")
    {
        for(auto const & c : if_stat)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfStat>();
        c->parent = this;
        if_stat.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : if_stat)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "area-id")
    {
        area_id = value;
        area_id.value_namespace = name_space;
        area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-id-str")
    {
        area_id_str = value;
        area_id_str.value_namespace = name_space;
        area_id_str.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "madj-intf")
    {
        madj_intf = value;
        madj_intf.value_namespace = name_space;
        madj_intf.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "area-id")
    {
        area_id.yfilter = yfilter;
    }
    if(value_path == "area-id-str")
    {
        area_id_str.yfilter = yfilter;
    }
    if(value_path == "madj-intf")
    {
        madj_intf.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "if-stat" || name == "area-id" || name == "area-id-str" || name == "madj-intf")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfStat::IfStat()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "if-stat"; yang_parent_name = "if-entry"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfStat::~IfStat()
{
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfStat::has_data() const
{
    return entry.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfStat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "if-stat";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfStat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfStat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfStat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfStat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfStat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Areas::Area::FloodListAreaTable::FloodListAreaTable()
{

    yang_name = "flood-list-area-table"; yang_parent_name = "area"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Areas::Area::FloodListAreaTable::~FloodListAreaTable()
{
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::FloodListAreaTable::has_data() const
{
    for (std::size_t index=0; index<flood.size(); index++)
    {
        if(flood[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::FloodListAreaTable::has_operation() const
{
    for (std::size_t index=0; index<flood.size(); index++)
    {
        if(flood[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Areas::Area::FloodListAreaTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flood-list-area-table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Areas::Area::FloodListAreaTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Areas::Area::FloodListAreaTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flood")
    {
        for(auto const & c : flood)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::Areas::Area::FloodListAreaTable::Flood>();
        c->parent = this;
        flood.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Areas::Area::FloodListAreaTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : flood)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Areas::Area::FloodListAreaTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::DefaultVrf::Areas::Area::FloodListAreaTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::FloodListAreaTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flood")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Areas::Area::FloodListAreaTable::Flood::Flood()
    :
    interface_name{YType::str, "interface-name"},
    flood_interface_name{YType::str, "flood-interface-name"},
    flood_lsa_count{YType::uint32, "flood-lsa-count"},
    flood_pacing_timer{YType::uint32, "flood-pacing-timer"}
{

    yang_name = "flood"; yang_parent_name = "flood-list-area-table"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Areas::Area::FloodListAreaTable::Flood::~Flood()
{
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::FloodListAreaTable::Flood::has_data() const
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
    return interface_name.is_set
	|| flood_interface_name.is_set
	|| flood_lsa_count.is_set
	|| flood_pacing_timer.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::FloodListAreaTable::Flood::has_operation() const
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
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(flood_interface_name.yfilter)
	|| ydk::is_set(flood_lsa_count.yfilter)
	|| ydk::is_set(flood_pacing_timer.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Areas::Area::FloodListAreaTable::Flood::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flood" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Areas::Area::FloodListAreaTable::Flood::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (flood_interface_name.is_set || is_set(flood_interface_name.yfilter)) leaf_name_data.push_back(flood_interface_name.get_name_leafdata());
    if (flood_lsa_count.is_set || is_set(flood_lsa_count.yfilter)) leaf_name_data.push_back(flood_lsa_count.get_name_leafdata());
    if (flood_pacing_timer.is_set || is_set(flood_pacing_timer.yfilter)) leaf_name_data.push_back(flood_pacing_timer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Areas::Area::FloodListAreaTable::Flood::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "area-flood")
    {
        for(auto const & c : area_flood)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::Areas::Area::FloodListAreaTable::Flood::AreaFlood>();
        c->parent = this;
        area_flood.push_back(c);
        return c;
    }

    if(child_yang_name == "as-flood")
    {
        for(auto const & c : as_flood)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::Areas::Area::FloodListAreaTable::Flood::AsFlood>();
        c->parent = this;
        as_flood.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Areas::Area::FloodListAreaTable::Flood::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : area_flood)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : as_flood)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Areas::Area::FloodListAreaTable::Flood::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flood-interface-name")
    {
        flood_interface_name = value;
        flood_interface_name.value_namespace = name_space;
        flood_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flood-lsa-count")
    {
        flood_lsa_count = value;
        flood_lsa_count.value_namespace = name_space;
        flood_lsa_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flood-pacing-timer")
    {
        flood_pacing_timer = value;
        flood_pacing_timer.value_namespace = name_space;
        flood_pacing_timer.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Areas::Area::FloodListAreaTable::Flood::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "flood-interface-name")
    {
        flood_interface_name.yfilter = yfilter;
    }
    if(value_path == "flood-lsa-count")
    {
        flood_lsa_count.yfilter = yfilter;
    }
    if(value_path == "flood-pacing-timer")
    {
        flood_pacing_timer.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::FloodListAreaTable::Flood::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "area-flood" || name == "as-flood" || name == "interface-name" || name == "flood-interface-name" || name == "flood-lsa-count" || name == "flood-pacing-timer")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Areas::Area::FloodListAreaTable::Flood::AreaFlood::AreaFlood()
    :
    header_advertising_router{YType::str, "header-advertising-router"},
    header_ls_id{YType::str, "header-ls-id"},
    header_lsa_age{YType::uint16, "header-lsa-age"},
    header_lsa_checksum{YType::uint16, "header-lsa-checksum"},
    header_lsa_type{YType::enumeration, "header-lsa-type"},
    header_sequence_number{YType::uint32, "header-sequence-number"}
{

    yang_name = "area-flood"; yang_parent_name = "flood"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Areas::Area::FloodListAreaTable::Flood::AreaFlood::~AreaFlood()
{
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::FloodListAreaTable::Flood::AreaFlood::has_data() const
{
    return header_advertising_router.is_set
	|| header_ls_id.is_set
	|| header_lsa_age.is_set
	|| header_lsa_checksum.is_set
	|| header_lsa_type.is_set
	|| header_sequence_number.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::FloodListAreaTable::Flood::AreaFlood::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(header_advertising_router.yfilter)
	|| ydk::is_set(header_ls_id.yfilter)
	|| ydk::is_set(header_lsa_age.yfilter)
	|| ydk::is_set(header_lsa_checksum.yfilter)
	|| ydk::is_set(header_lsa_type.yfilter)
	|| ydk::is_set(header_sequence_number.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Areas::Area::FloodListAreaTable::Flood::AreaFlood::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "area-flood";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Areas::Area::FloodListAreaTable::Flood::AreaFlood::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (header_advertising_router.is_set || is_set(header_advertising_router.yfilter)) leaf_name_data.push_back(header_advertising_router.get_name_leafdata());
    if (header_ls_id.is_set || is_set(header_ls_id.yfilter)) leaf_name_data.push_back(header_ls_id.get_name_leafdata());
    if (header_lsa_age.is_set || is_set(header_lsa_age.yfilter)) leaf_name_data.push_back(header_lsa_age.get_name_leafdata());
    if (header_lsa_checksum.is_set || is_set(header_lsa_checksum.yfilter)) leaf_name_data.push_back(header_lsa_checksum.get_name_leafdata());
    if (header_lsa_type.is_set || is_set(header_lsa_type.yfilter)) leaf_name_data.push_back(header_lsa_type.get_name_leafdata());
    if (header_sequence_number.is_set || is_set(header_sequence_number.yfilter)) leaf_name_data.push_back(header_sequence_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Areas::Area::FloodListAreaTable::Flood::AreaFlood::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Areas::Area::FloodListAreaTable::Flood::AreaFlood::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Areas::Area::FloodListAreaTable::Flood::AreaFlood::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "header-advertising-router")
    {
        header_advertising_router = value;
        header_advertising_router.value_namespace = name_space;
        header_advertising_router.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "header-ls-id")
    {
        header_ls_id = value;
        header_ls_id.value_namespace = name_space;
        header_ls_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "header-lsa-age")
    {
        header_lsa_age = value;
        header_lsa_age.value_namespace = name_space;
        header_lsa_age.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "header-lsa-checksum")
    {
        header_lsa_checksum = value;
        header_lsa_checksum.value_namespace = name_space;
        header_lsa_checksum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "header-lsa-type")
    {
        header_lsa_type = value;
        header_lsa_type.value_namespace = name_space;
        header_lsa_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "header-sequence-number")
    {
        header_sequence_number = value;
        header_sequence_number.value_namespace = name_space;
        header_sequence_number.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Areas::Area::FloodListAreaTable::Flood::AreaFlood::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "header-advertising-router")
    {
        header_advertising_router.yfilter = yfilter;
    }
    if(value_path == "header-ls-id")
    {
        header_ls_id.yfilter = yfilter;
    }
    if(value_path == "header-lsa-age")
    {
        header_lsa_age.yfilter = yfilter;
    }
    if(value_path == "header-lsa-checksum")
    {
        header_lsa_checksum.yfilter = yfilter;
    }
    if(value_path == "header-lsa-type")
    {
        header_lsa_type.yfilter = yfilter;
    }
    if(value_path == "header-sequence-number")
    {
        header_sequence_number.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::FloodListAreaTable::Flood::AreaFlood::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "header-advertising-router" || name == "header-ls-id" || name == "header-lsa-age" || name == "header-lsa-checksum" || name == "header-lsa-type" || name == "header-sequence-number")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Areas::Area::FloodListAreaTable::Flood::AsFlood::AsFlood()
    :
    header_advertising_router{YType::str, "header-advertising-router"},
    header_ls_id{YType::str, "header-ls-id"},
    header_lsa_age{YType::uint16, "header-lsa-age"},
    header_lsa_checksum{YType::uint16, "header-lsa-checksum"},
    header_lsa_type{YType::enumeration, "header-lsa-type"},
    header_sequence_number{YType::uint32, "header-sequence-number"}
{

    yang_name = "as-flood"; yang_parent_name = "flood"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Areas::Area::FloodListAreaTable::Flood::AsFlood::~AsFlood()
{
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::FloodListAreaTable::Flood::AsFlood::has_data() const
{
    return header_advertising_router.is_set
	|| header_ls_id.is_set
	|| header_lsa_age.is_set
	|| header_lsa_checksum.is_set
	|| header_lsa_type.is_set
	|| header_sequence_number.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::FloodListAreaTable::Flood::AsFlood::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(header_advertising_router.yfilter)
	|| ydk::is_set(header_ls_id.yfilter)
	|| ydk::is_set(header_lsa_age.yfilter)
	|| ydk::is_set(header_lsa_checksum.yfilter)
	|| ydk::is_set(header_lsa_type.yfilter)
	|| ydk::is_set(header_sequence_number.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Areas::Area::FloodListAreaTable::Flood::AsFlood::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "as-flood";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Areas::Area::FloodListAreaTable::Flood::AsFlood::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (header_advertising_router.is_set || is_set(header_advertising_router.yfilter)) leaf_name_data.push_back(header_advertising_router.get_name_leafdata());
    if (header_ls_id.is_set || is_set(header_ls_id.yfilter)) leaf_name_data.push_back(header_ls_id.get_name_leafdata());
    if (header_lsa_age.is_set || is_set(header_lsa_age.yfilter)) leaf_name_data.push_back(header_lsa_age.get_name_leafdata());
    if (header_lsa_checksum.is_set || is_set(header_lsa_checksum.yfilter)) leaf_name_data.push_back(header_lsa_checksum.get_name_leafdata());
    if (header_lsa_type.is_set || is_set(header_lsa_type.yfilter)) leaf_name_data.push_back(header_lsa_type.get_name_leafdata());
    if (header_sequence_number.is_set || is_set(header_sequence_number.yfilter)) leaf_name_data.push_back(header_sequence_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Areas::Area::FloodListAreaTable::Flood::AsFlood::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Areas::Area::FloodListAreaTable::Flood::AsFlood::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Areas::Area::FloodListAreaTable::Flood::AsFlood::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "header-advertising-router")
    {
        header_advertising_router = value;
        header_advertising_router.value_namespace = name_space;
        header_advertising_router.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "header-ls-id")
    {
        header_ls_id = value;
        header_ls_id.value_namespace = name_space;
        header_ls_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "header-lsa-age")
    {
        header_lsa_age = value;
        header_lsa_age.value_namespace = name_space;
        header_lsa_age.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "header-lsa-checksum")
    {
        header_lsa_checksum = value;
        header_lsa_checksum.value_namespace = name_space;
        header_lsa_checksum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "header-lsa-type")
    {
        header_lsa_type = value;
        header_lsa_type.value_namespace = name_space;
        header_lsa_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "header-sequence-number")
    {
        header_sequence_number = value;
        header_sequence_number.value_namespace = name_space;
        header_sequence_number.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Areas::Area::FloodListAreaTable::Flood::AsFlood::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "header-advertising-router")
    {
        header_advertising_router.yfilter = yfilter;
    }
    if(value_path == "header-ls-id")
    {
        header_ls_id.yfilter = yfilter;
    }
    if(value_path == "header-lsa-age")
    {
        header_lsa_age.yfilter = yfilter;
    }
    if(value_path == "header-lsa-checksum")
    {
        header_lsa_checksum.yfilter = yfilter;
    }
    if(value_path == "header-lsa-type")
    {
        header_lsa_type.yfilter = yfilter;
    }
    if(value_path == "header-sequence-number")
    {
        header_sequence_number.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::FloodListAreaTable::Flood::AsFlood::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "header-advertising-router" || name == "header-ls-id" || name == "header-lsa-age" || name == "header-lsa-checksum" || name == "header-lsa-type" || name == "header-sequence-number")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Areas::Area::InterfaceBriefs::InterfaceBriefs()
{

    yang_name = "interface-briefs"; yang_parent_name = "area"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Areas::Area::InterfaceBriefs::~InterfaceBriefs()
{
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::InterfaceBriefs::has_data() const
{
    for (std::size_t index=0; index<interface_brief.size(); index++)
    {
        if(interface_brief[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::InterfaceBriefs::has_operation() const
{
    for (std::size_t index=0; index<interface_brief.size(); index++)
    {
        if(interface_brief[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Areas::Area::InterfaceBriefs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-briefs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Areas::Area::InterfaceBriefs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Areas::Area::InterfaceBriefs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::Areas::Area::InterfaceBriefs::InterfaceBrief>();
        c->parent = this;
        interface_brief.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Areas::Area::InterfaceBriefs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface_brief)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Areas::Area::InterfaceBriefs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::DefaultVrf::Areas::Area::InterfaceBriefs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::InterfaceBriefs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-brief")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Areas::Area::InterfaceBriefs::InterfaceBrief::InterfaceBrief()
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

    yang_name = "interface-brief"; yang_parent_name = "interface-briefs"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Areas::Area::InterfaceBriefs::InterfaceBrief::~InterfaceBrief()
{
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::InterfaceBriefs::InterfaceBrief::has_data() const
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

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::InterfaceBriefs::InterfaceBrief::has_operation() const
{
    for (std::size_t index=0; index<interface_madj.size(); index++)
    {
        if(interface_madj[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(interface_address.yfilter)
	|| ydk::is_set(interface_adj_neighbor_count.yfilter)
	|| ydk::is_set(interface_area.yfilter)
	|| ydk::is_set(interface_fast_detect_hold_down.yfilter)
	|| ydk::is_set(interface_link_cost.yfilter)
	|| ydk::is_set(interface_madj_count.yfilter)
	|| ydk::is_set(interface_mask.yfilter)
	|| ydk::is_set(interface_name_xr.yfilter)
	|| ydk::is_set(interface_neighbor_count.yfilter)
	|| ydk::is_set(interfaceis_madj.yfilter)
	|| ydk::is_set(ospf_interface_state.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Areas::Area::InterfaceBriefs::InterfaceBrief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-brief" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Areas::Area::InterfaceBriefs::InterfaceBrief::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (interface_address.is_set || is_set(interface_address.yfilter)) leaf_name_data.push_back(interface_address.get_name_leafdata());
    if (interface_adj_neighbor_count.is_set || is_set(interface_adj_neighbor_count.yfilter)) leaf_name_data.push_back(interface_adj_neighbor_count.get_name_leafdata());
    if (interface_area.is_set || is_set(interface_area.yfilter)) leaf_name_data.push_back(interface_area.get_name_leafdata());
    if (interface_fast_detect_hold_down.is_set || is_set(interface_fast_detect_hold_down.yfilter)) leaf_name_data.push_back(interface_fast_detect_hold_down.get_name_leafdata());
    if (interface_link_cost.is_set || is_set(interface_link_cost.yfilter)) leaf_name_data.push_back(interface_link_cost.get_name_leafdata());
    if (interface_madj_count.is_set || is_set(interface_madj_count.yfilter)) leaf_name_data.push_back(interface_madj_count.get_name_leafdata());
    if (interface_mask.is_set || is_set(interface_mask.yfilter)) leaf_name_data.push_back(interface_mask.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.yfilter)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (interface_neighbor_count.is_set || is_set(interface_neighbor_count.yfilter)) leaf_name_data.push_back(interface_neighbor_count.get_name_leafdata());
    if (interfaceis_madj.is_set || is_set(interfaceis_madj.yfilter)) leaf_name_data.push_back(interfaceis_madj.get_name_leafdata());
    if (ospf_interface_state.is_set || is_set(ospf_interface_state.yfilter)) leaf_name_data.push_back(ospf_interface_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Areas::Area::InterfaceBriefs::InterfaceBrief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::Areas::Area::InterfaceBriefs::InterfaceBrief::InterfaceMadj>();
        c->parent = this;
        interface_madj.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Areas::Area::InterfaceBriefs::InterfaceBrief::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface_madj)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Areas::Area::InterfaceBriefs::InterfaceBrief::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-address")
    {
        interface_address = value;
        interface_address.value_namespace = name_space;
        interface_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-adj-neighbor-count")
    {
        interface_adj_neighbor_count = value;
        interface_adj_neighbor_count.value_namespace = name_space;
        interface_adj_neighbor_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-area")
    {
        interface_area = value;
        interface_area.value_namespace = name_space;
        interface_area.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-fast-detect-hold-down")
    {
        interface_fast_detect_hold_down = value;
        interface_fast_detect_hold_down.value_namespace = name_space;
        interface_fast_detect_hold_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-link-cost")
    {
        interface_link_cost = value;
        interface_link_cost.value_namespace = name_space;
        interface_link_cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-madj-count")
    {
        interface_madj_count = value;
        interface_madj_count.value_namespace = name_space;
        interface_madj_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-mask")
    {
        interface_mask = value;
        interface_mask.value_namespace = name_space;
        interface_mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
        interface_name_xr.value_namespace = name_space;
        interface_name_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-neighbor-count")
    {
        interface_neighbor_count = value;
        interface_neighbor_count.value_namespace = name_space;
        interface_neighbor_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interfaceis-madj")
    {
        interfaceis_madj = value;
        interfaceis_madj.value_namespace = name_space;
        interfaceis_madj.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospf-interface-state")
    {
        ospf_interface_state = value;
        ospf_interface_state.value_namespace = name_space;
        ospf_interface_state.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Areas::Area::InterfaceBriefs::InterfaceBrief::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "interface-address")
    {
        interface_address.yfilter = yfilter;
    }
    if(value_path == "interface-adj-neighbor-count")
    {
        interface_adj_neighbor_count.yfilter = yfilter;
    }
    if(value_path == "interface-area")
    {
        interface_area.yfilter = yfilter;
    }
    if(value_path == "interface-fast-detect-hold-down")
    {
        interface_fast_detect_hold_down.yfilter = yfilter;
    }
    if(value_path == "interface-link-cost")
    {
        interface_link_cost.yfilter = yfilter;
    }
    if(value_path == "interface-madj-count")
    {
        interface_madj_count.yfilter = yfilter;
    }
    if(value_path == "interface-mask")
    {
        interface_mask.yfilter = yfilter;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr.yfilter = yfilter;
    }
    if(value_path == "interface-neighbor-count")
    {
        interface_neighbor_count.yfilter = yfilter;
    }
    if(value_path == "interfaceis-madj")
    {
        interfaceis_madj.yfilter = yfilter;
    }
    if(value_path == "ospf-interface-state")
    {
        ospf_interface_state.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::InterfaceBriefs::InterfaceBrief::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-madj" || name == "interface-name" || name == "interface-address" || name == "interface-adj-neighbor-count" || name == "interface-area" || name == "interface-fast-detect-hold-down" || name == "interface-link-cost" || name == "interface-madj-count" || name == "interface-mask" || name == "interface-name-xr" || name == "interface-neighbor-count" || name == "interfaceis-madj" || name == "ospf-interface-state")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Areas::Area::InterfaceBriefs::InterfaceBrief::InterfaceMadj::InterfaceMadj()
    :
    interface_adj_neighbor_count{YType::uint16, "interface-adj-neighbor-count"},
    interface_area{YType::str, "interface-area"},
    interface_link_cost{YType::uint16, "interface-link-cost"},
    interface_neighbor_count{YType::uint16, "interface-neighbor-count"},
    madj_area_id{YType::uint32, "madj-area-id"},
    ospf_interface_state{YType::enumeration, "ospf-interface-state"}
{

    yang_name = "interface-madj"; yang_parent_name = "interface-brief"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Areas::Area::InterfaceBriefs::InterfaceBrief::InterfaceMadj::~InterfaceMadj()
{
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::InterfaceBriefs::InterfaceBrief::InterfaceMadj::has_data() const
{
    return interface_adj_neighbor_count.is_set
	|| interface_area.is_set
	|| interface_link_cost.is_set
	|| interface_neighbor_count.is_set
	|| madj_area_id.is_set
	|| ospf_interface_state.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::InterfaceBriefs::InterfaceBrief::InterfaceMadj::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_adj_neighbor_count.yfilter)
	|| ydk::is_set(interface_area.yfilter)
	|| ydk::is_set(interface_link_cost.yfilter)
	|| ydk::is_set(interface_neighbor_count.yfilter)
	|| ydk::is_set(madj_area_id.yfilter)
	|| ydk::is_set(ospf_interface_state.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Areas::Area::InterfaceBriefs::InterfaceBrief::InterfaceMadj::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-madj";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Areas::Area::InterfaceBriefs::InterfaceBrief::InterfaceMadj::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_adj_neighbor_count.is_set || is_set(interface_adj_neighbor_count.yfilter)) leaf_name_data.push_back(interface_adj_neighbor_count.get_name_leafdata());
    if (interface_area.is_set || is_set(interface_area.yfilter)) leaf_name_data.push_back(interface_area.get_name_leafdata());
    if (interface_link_cost.is_set || is_set(interface_link_cost.yfilter)) leaf_name_data.push_back(interface_link_cost.get_name_leafdata());
    if (interface_neighbor_count.is_set || is_set(interface_neighbor_count.yfilter)) leaf_name_data.push_back(interface_neighbor_count.get_name_leafdata());
    if (madj_area_id.is_set || is_set(madj_area_id.yfilter)) leaf_name_data.push_back(madj_area_id.get_name_leafdata());
    if (ospf_interface_state.is_set || is_set(ospf_interface_state.yfilter)) leaf_name_data.push_back(ospf_interface_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Areas::Area::InterfaceBriefs::InterfaceBrief::InterfaceMadj::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Areas::Area::InterfaceBriefs::InterfaceBrief::InterfaceMadj::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Areas::Area::InterfaceBriefs::InterfaceBrief::InterfaceMadj::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-adj-neighbor-count")
    {
        interface_adj_neighbor_count = value;
        interface_adj_neighbor_count.value_namespace = name_space;
        interface_adj_neighbor_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-area")
    {
        interface_area = value;
        interface_area.value_namespace = name_space;
        interface_area.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-link-cost")
    {
        interface_link_cost = value;
        interface_link_cost.value_namespace = name_space;
        interface_link_cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-neighbor-count")
    {
        interface_neighbor_count = value;
        interface_neighbor_count.value_namespace = name_space;
        interface_neighbor_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "madj-area-id")
    {
        madj_area_id = value;
        madj_area_id.value_namespace = name_space;
        madj_area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospf-interface-state")
    {
        ospf_interface_state = value;
        ospf_interface_state.value_namespace = name_space;
        ospf_interface_state.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Areas::Area::InterfaceBriefs::InterfaceBrief::InterfaceMadj::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-adj-neighbor-count")
    {
        interface_adj_neighbor_count.yfilter = yfilter;
    }
    if(value_path == "interface-area")
    {
        interface_area.yfilter = yfilter;
    }
    if(value_path == "interface-link-cost")
    {
        interface_link_cost.yfilter = yfilter;
    }
    if(value_path == "interface-neighbor-count")
    {
        interface_neighbor_count.yfilter = yfilter;
    }
    if(value_path == "madj-area-id")
    {
        madj_area_id.yfilter = yfilter;
    }
    if(value_path == "ospf-interface-state")
    {
        ospf_interface_state.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::InterfaceBriefs::InterfaceBrief::InterfaceMadj::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-adj-neighbor-count" || name == "interface-area" || name == "interface-link-cost" || name == "interface-neighbor-count" || name == "madj-area-id" || name == "ospf-interface-state")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interfaces()
{

    yang_name = "interfaces"; yang_parent_name = "area"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::~Interfaces()
{
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    backup_designated_router{YType::boolean, "backup-designated-router"},
    backup_designated_router_address{YType::str, "backup-designated-router-address"},
    backup_designated_router_id{YType::str, "backup-designated-router-id"},
    cfg_cost_fallback{YType::boolean, "cfg-cost-fallback"},
    configured_demand_circuit{YType::boolean, "configured-demand-circuit"},
    configured_ldp_sync{YType::boolean, "configured-ldp-sync"},
    configured_ldp_sync_igp_shortcuts{YType::boolean, "configured-ldp-sync-igp-shortcuts"},
    cost_fallback_active{YType::boolean, "cost-fallback-active"},
    dead_interval{YType::uint32, "dead-interval"},
    designated_router{YType::boolean, "designated-router"},
    designated_router_address{YType::str, "designated-router-address"},
    designated_router_id{YType::str, "designated-router-id"},
    fast_detect_hold_down_time{YType::uint32, "fast-detect-hold-down-time"},
    fast_detect_hold_down_time_remaining{YType::uint32, "fast-detect-hold-down-time-remaining"},
    fast_reroute_topology_independent_lfa{YType::boolean, "fast-reroute-topology-independent-lfa"},
    fast_reroute_type{YType::enumeration, "fast-reroute-type"},
    hello_interval{YType::uint32, "hello-interval"},
    hello_interval_ms{YType::uint32, "hello-interval-ms"},
    interface_ack_list_count{YType::uint32, "interface-ack-list-count"},
    interface_ack_list_high_watermark{YType::uint32, "interface-ack-list-high-watermark"},
    interface_address{YType::str, "interface-address"},
    interface_area{YType::str, "interface-area"},
    interface_bandwidth{YType::uint32, "interface-bandwidth"},
    interface_bkp_labels{YType::uint8, "interface-bkp-labels"},
    interface_cost_fallback{YType::uint16, "interface-cost-fallback"},
    interface_dc_bitless_lsa_count{YType::uint32, "interface-dc-bitless-lsa-count"},
    interface_demand_circuit{YType::boolean, "interface-demand-circuit"},
    interface_fast_detect_hold_down{YType::boolean, "interface-fast-detect-hold-down"},
    interface_forw{YType::boolean, "interface-forw"},
    interface_last_nsf{YType::uint32, "interface-last-nsf"},
    interface_ldp_sync{YType::boolean, "interface-ldp-sync"},
    interface_line_state{YType::boolean, "interface-line-state"},
    interface_link_cost{YType::uint16, "interface-link-cost"},
    interface_lsa_filter{YType::boolean, "interface-lsa-filter"},
    interface_madj_count{YType::uint16, "interface-madj-count"},
    interface_mask{YType::uint32, "interface-mask"},
    interface_name_xr{YType::str, "interface-name-xr"},
    interface_nsf{YType::boolean, "interface-nsf"},
    interface_nsf_enabled{YType::boolean, "interface-nsf-enabled"},
    interface_pri_labels{YType::uint8, "interface-pri-labels"},
    interface_priority{YType::uint8, "interface-priority"},
    interface_retransmission_interrval{YType::uint32, "interface-retransmission-interrval"},
    interface_router_id{YType::str, "interface-router-id"},
    interface_sid{YType::uint32, "interface-sid"},
    interface_sid_n_flag_clear{YType::boolean, "interface-sid-n-flag-clear"},
    interface_sid_php_off{YType::boolean, "interface-sid-php-off"},
    interface_srte_labels{YType::uint8, "interface-srte-labels"},
    interface_state{YType::enumeration, "interface-state"},
    interface_strict_spf_sid{YType::uint32, "interface-strict-spf-sid"},
    interface_strict_spf_sid_n_flag_clear{YType::boolean, "interface-strict-spf-sid-n-flag-clear"},
    interface_strict_spf_sid_php_off{YType::boolean, "interface-strict-spf-sid-php-off"},
    interface_tunnel_flags{YType::uint32, "interface-tunnel-flags"},
    interface_unnum{YType::str, "interface-unnum"},
    interfaceis_madj{YType::boolean, "interfaceis-madj"},
    ip_mtu{YType::uint16, "ip-mtu"},
    is_loopback_stub_network{YType::boolean, "is-loopback-stub-network"},
    maximum_packet_size{YType::uint16, "maximum-packet-size"},
    network_lsa_flush_timer{YType::uint32, "network-lsa-flush-timer"},
    network_type{YType::enumeration, "network-type"},
    next_hello_time{YType::uint32, "next-hello-time"},
    next_hello_time_ms{YType::uint32, "next-hello-time-ms"},
    ospf_interface_state{YType::enumeration, "ospf-interface-state"},
    passive_interface{YType::boolean, "passive-interface"},
    prefix_suppress_primary_addresses{YType::boolean, "prefix-suppress-primary-addresses"},
    prefix_suppress_secondary_addresses{YType::boolean, "prefix-suppress-secondary-addresses"},
    registered_for_link_down_fast_detection{YType::boolean, "registered-for-link-down-fast-detection"},
    transmission_delay{YType::uint16, "transmission-delay"},
    ttl_security_enabled{YType::boolean, "ttl-security-enabled"},
    ttl_security_hop_count{YType::uint32, "ttl-security-hop-count"},
    wait_interval{YType::uint32, "wait-interval"}
    	,
    active_interface(std::make_shared<Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::ActiveInterface>())
	,interface_bfd_information(std::make_shared<Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::InterfaceBfdInformation>())
{
    active_interface->parent = this;
    interface_bfd_information->parent = this;

    yang_name = "interface"; yang_parent_name = "interfaces"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::~Interface()
{
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::has_data() const
{
    for (std::size_t index=0; index<interface_madj.size(); index++)
    {
        if(interface_madj[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<interface_neighbor.size(); index++)
    {
        if(interface_neighbor[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ip_sec_addr.size(); index++)
    {
        if(ip_sec_addr[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ipfrr_tiebreakers.size(); index++)
    {
        if(ipfrr_tiebreakers[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<srlg.size(); index++)
    {
        if(srlg[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| backup_designated_router.is_set
	|| backup_designated_router_address.is_set
	|| backup_designated_router_id.is_set
	|| cfg_cost_fallback.is_set
	|| configured_demand_circuit.is_set
	|| configured_ldp_sync.is_set
	|| configured_ldp_sync_igp_shortcuts.is_set
	|| cost_fallback_active.is_set
	|| dead_interval.is_set
	|| designated_router.is_set
	|| designated_router_address.is_set
	|| designated_router_id.is_set
	|| fast_detect_hold_down_time.is_set
	|| fast_detect_hold_down_time_remaining.is_set
	|| fast_reroute_topology_independent_lfa.is_set
	|| fast_reroute_type.is_set
	|| hello_interval.is_set
	|| hello_interval_ms.is_set
	|| interface_ack_list_count.is_set
	|| interface_ack_list_high_watermark.is_set
	|| interface_address.is_set
	|| interface_area.is_set
	|| interface_bandwidth.is_set
	|| interface_bkp_labels.is_set
	|| interface_cost_fallback.is_set
	|| interface_dc_bitless_lsa_count.is_set
	|| interface_demand_circuit.is_set
	|| interface_fast_detect_hold_down.is_set
	|| interface_forw.is_set
	|| interface_last_nsf.is_set
	|| interface_ldp_sync.is_set
	|| interface_line_state.is_set
	|| interface_link_cost.is_set
	|| interface_lsa_filter.is_set
	|| interface_madj_count.is_set
	|| interface_mask.is_set
	|| interface_name_xr.is_set
	|| interface_nsf.is_set
	|| interface_nsf_enabled.is_set
	|| interface_pri_labels.is_set
	|| interface_priority.is_set
	|| interface_retransmission_interrval.is_set
	|| interface_router_id.is_set
	|| interface_sid.is_set
	|| interface_sid_n_flag_clear.is_set
	|| interface_sid_php_off.is_set
	|| interface_srte_labels.is_set
	|| interface_state.is_set
	|| interface_strict_spf_sid.is_set
	|| interface_strict_spf_sid_n_flag_clear.is_set
	|| interface_strict_spf_sid_php_off.is_set
	|| interface_tunnel_flags.is_set
	|| interface_unnum.is_set
	|| interfaceis_madj.is_set
	|| ip_mtu.is_set
	|| is_loopback_stub_network.is_set
	|| maximum_packet_size.is_set
	|| network_lsa_flush_timer.is_set
	|| network_type.is_set
	|| next_hello_time.is_set
	|| next_hello_time_ms.is_set
	|| ospf_interface_state.is_set
	|| passive_interface.is_set
	|| prefix_suppress_primary_addresses.is_set
	|| prefix_suppress_secondary_addresses.is_set
	|| registered_for_link_down_fast_detection.is_set
	|| transmission_delay.is_set
	|| ttl_security_enabled.is_set
	|| ttl_security_hop_count.is_set
	|| wait_interval.is_set
	|| (active_interface !=  nullptr && active_interface->has_data())
	|| (interface_bfd_information !=  nullptr && interface_bfd_information->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::has_operation() const
{
    for (std::size_t index=0; index<interface_madj.size(); index++)
    {
        if(interface_madj[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<interface_neighbor.size(); index++)
    {
        if(interface_neighbor[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ip_sec_addr.size(); index++)
    {
        if(ip_sec_addr[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ipfrr_tiebreakers.size(); index++)
    {
        if(ipfrr_tiebreakers[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<srlg.size(); index++)
    {
        if(srlg[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(backup_designated_router.yfilter)
	|| ydk::is_set(backup_designated_router_address.yfilter)
	|| ydk::is_set(backup_designated_router_id.yfilter)
	|| ydk::is_set(cfg_cost_fallback.yfilter)
	|| ydk::is_set(configured_demand_circuit.yfilter)
	|| ydk::is_set(configured_ldp_sync.yfilter)
	|| ydk::is_set(configured_ldp_sync_igp_shortcuts.yfilter)
	|| ydk::is_set(cost_fallback_active.yfilter)
	|| ydk::is_set(dead_interval.yfilter)
	|| ydk::is_set(designated_router.yfilter)
	|| ydk::is_set(designated_router_address.yfilter)
	|| ydk::is_set(designated_router_id.yfilter)
	|| ydk::is_set(fast_detect_hold_down_time.yfilter)
	|| ydk::is_set(fast_detect_hold_down_time_remaining.yfilter)
	|| ydk::is_set(fast_reroute_topology_independent_lfa.yfilter)
	|| ydk::is_set(fast_reroute_type.yfilter)
	|| ydk::is_set(hello_interval.yfilter)
	|| ydk::is_set(hello_interval_ms.yfilter)
	|| ydk::is_set(interface_ack_list_count.yfilter)
	|| ydk::is_set(interface_ack_list_high_watermark.yfilter)
	|| ydk::is_set(interface_address.yfilter)
	|| ydk::is_set(interface_area.yfilter)
	|| ydk::is_set(interface_bandwidth.yfilter)
	|| ydk::is_set(interface_bkp_labels.yfilter)
	|| ydk::is_set(interface_cost_fallback.yfilter)
	|| ydk::is_set(interface_dc_bitless_lsa_count.yfilter)
	|| ydk::is_set(interface_demand_circuit.yfilter)
	|| ydk::is_set(interface_fast_detect_hold_down.yfilter)
	|| ydk::is_set(interface_forw.yfilter)
	|| ydk::is_set(interface_last_nsf.yfilter)
	|| ydk::is_set(interface_ldp_sync.yfilter)
	|| ydk::is_set(interface_line_state.yfilter)
	|| ydk::is_set(interface_link_cost.yfilter)
	|| ydk::is_set(interface_lsa_filter.yfilter)
	|| ydk::is_set(interface_madj_count.yfilter)
	|| ydk::is_set(interface_mask.yfilter)
	|| ydk::is_set(interface_name_xr.yfilter)
	|| ydk::is_set(interface_nsf.yfilter)
	|| ydk::is_set(interface_nsf_enabled.yfilter)
	|| ydk::is_set(interface_pri_labels.yfilter)
	|| ydk::is_set(interface_priority.yfilter)
	|| ydk::is_set(interface_retransmission_interrval.yfilter)
	|| ydk::is_set(interface_router_id.yfilter)
	|| ydk::is_set(interface_sid.yfilter)
	|| ydk::is_set(interface_sid_n_flag_clear.yfilter)
	|| ydk::is_set(interface_sid_php_off.yfilter)
	|| ydk::is_set(interface_srte_labels.yfilter)
	|| ydk::is_set(interface_state.yfilter)
	|| ydk::is_set(interface_strict_spf_sid.yfilter)
	|| ydk::is_set(interface_strict_spf_sid_n_flag_clear.yfilter)
	|| ydk::is_set(interface_strict_spf_sid_php_off.yfilter)
	|| ydk::is_set(interface_tunnel_flags.yfilter)
	|| ydk::is_set(interface_unnum.yfilter)
	|| ydk::is_set(interfaceis_madj.yfilter)
	|| ydk::is_set(ip_mtu.yfilter)
	|| ydk::is_set(is_loopback_stub_network.yfilter)
	|| ydk::is_set(maximum_packet_size.yfilter)
	|| ydk::is_set(network_lsa_flush_timer.yfilter)
	|| ydk::is_set(network_type.yfilter)
	|| ydk::is_set(next_hello_time.yfilter)
	|| ydk::is_set(next_hello_time_ms.yfilter)
	|| ydk::is_set(ospf_interface_state.yfilter)
	|| ydk::is_set(passive_interface.yfilter)
	|| ydk::is_set(prefix_suppress_primary_addresses.yfilter)
	|| ydk::is_set(prefix_suppress_secondary_addresses.yfilter)
	|| ydk::is_set(registered_for_link_down_fast_detection.yfilter)
	|| ydk::is_set(transmission_delay.yfilter)
	|| ydk::is_set(ttl_security_enabled.yfilter)
	|| ydk::is_set(ttl_security_hop_count.yfilter)
	|| ydk::is_set(wait_interval.yfilter)
	|| (active_interface !=  nullptr && active_interface->has_operation())
	|| (interface_bfd_information !=  nullptr && interface_bfd_information->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (backup_designated_router.is_set || is_set(backup_designated_router.yfilter)) leaf_name_data.push_back(backup_designated_router.get_name_leafdata());
    if (backup_designated_router_address.is_set || is_set(backup_designated_router_address.yfilter)) leaf_name_data.push_back(backup_designated_router_address.get_name_leafdata());
    if (backup_designated_router_id.is_set || is_set(backup_designated_router_id.yfilter)) leaf_name_data.push_back(backup_designated_router_id.get_name_leafdata());
    if (cfg_cost_fallback.is_set || is_set(cfg_cost_fallback.yfilter)) leaf_name_data.push_back(cfg_cost_fallback.get_name_leafdata());
    if (configured_demand_circuit.is_set || is_set(configured_demand_circuit.yfilter)) leaf_name_data.push_back(configured_demand_circuit.get_name_leafdata());
    if (configured_ldp_sync.is_set || is_set(configured_ldp_sync.yfilter)) leaf_name_data.push_back(configured_ldp_sync.get_name_leafdata());
    if (configured_ldp_sync_igp_shortcuts.is_set || is_set(configured_ldp_sync_igp_shortcuts.yfilter)) leaf_name_data.push_back(configured_ldp_sync_igp_shortcuts.get_name_leafdata());
    if (cost_fallback_active.is_set || is_set(cost_fallback_active.yfilter)) leaf_name_data.push_back(cost_fallback_active.get_name_leafdata());
    if (dead_interval.is_set || is_set(dead_interval.yfilter)) leaf_name_data.push_back(dead_interval.get_name_leafdata());
    if (designated_router.is_set || is_set(designated_router.yfilter)) leaf_name_data.push_back(designated_router.get_name_leafdata());
    if (designated_router_address.is_set || is_set(designated_router_address.yfilter)) leaf_name_data.push_back(designated_router_address.get_name_leafdata());
    if (designated_router_id.is_set || is_set(designated_router_id.yfilter)) leaf_name_data.push_back(designated_router_id.get_name_leafdata());
    if (fast_detect_hold_down_time.is_set || is_set(fast_detect_hold_down_time.yfilter)) leaf_name_data.push_back(fast_detect_hold_down_time.get_name_leafdata());
    if (fast_detect_hold_down_time_remaining.is_set || is_set(fast_detect_hold_down_time_remaining.yfilter)) leaf_name_data.push_back(fast_detect_hold_down_time_remaining.get_name_leafdata());
    if (fast_reroute_topology_independent_lfa.is_set || is_set(fast_reroute_topology_independent_lfa.yfilter)) leaf_name_data.push_back(fast_reroute_topology_independent_lfa.get_name_leafdata());
    if (fast_reroute_type.is_set || is_set(fast_reroute_type.yfilter)) leaf_name_data.push_back(fast_reroute_type.get_name_leafdata());
    if (hello_interval.is_set || is_set(hello_interval.yfilter)) leaf_name_data.push_back(hello_interval.get_name_leafdata());
    if (hello_interval_ms.is_set || is_set(hello_interval_ms.yfilter)) leaf_name_data.push_back(hello_interval_ms.get_name_leafdata());
    if (interface_ack_list_count.is_set || is_set(interface_ack_list_count.yfilter)) leaf_name_data.push_back(interface_ack_list_count.get_name_leafdata());
    if (interface_ack_list_high_watermark.is_set || is_set(interface_ack_list_high_watermark.yfilter)) leaf_name_data.push_back(interface_ack_list_high_watermark.get_name_leafdata());
    if (interface_address.is_set || is_set(interface_address.yfilter)) leaf_name_data.push_back(interface_address.get_name_leafdata());
    if (interface_area.is_set || is_set(interface_area.yfilter)) leaf_name_data.push_back(interface_area.get_name_leafdata());
    if (interface_bandwidth.is_set || is_set(interface_bandwidth.yfilter)) leaf_name_data.push_back(interface_bandwidth.get_name_leafdata());
    if (interface_bkp_labels.is_set || is_set(interface_bkp_labels.yfilter)) leaf_name_data.push_back(interface_bkp_labels.get_name_leafdata());
    if (interface_cost_fallback.is_set || is_set(interface_cost_fallback.yfilter)) leaf_name_data.push_back(interface_cost_fallback.get_name_leafdata());
    if (interface_dc_bitless_lsa_count.is_set || is_set(interface_dc_bitless_lsa_count.yfilter)) leaf_name_data.push_back(interface_dc_bitless_lsa_count.get_name_leafdata());
    if (interface_demand_circuit.is_set || is_set(interface_demand_circuit.yfilter)) leaf_name_data.push_back(interface_demand_circuit.get_name_leafdata());
    if (interface_fast_detect_hold_down.is_set || is_set(interface_fast_detect_hold_down.yfilter)) leaf_name_data.push_back(interface_fast_detect_hold_down.get_name_leafdata());
    if (interface_forw.is_set || is_set(interface_forw.yfilter)) leaf_name_data.push_back(interface_forw.get_name_leafdata());
    if (interface_last_nsf.is_set || is_set(interface_last_nsf.yfilter)) leaf_name_data.push_back(interface_last_nsf.get_name_leafdata());
    if (interface_ldp_sync.is_set || is_set(interface_ldp_sync.yfilter)) leaf_name_data.push_back(interface_ldp_sync.get_name_leafdata());
    if (interface_line_state.is_set || is_set(interface_line_state.yfilter)) leaf_name_data.push_back(interface_line_state.get_name_leafdata());
    if (interface_link_cost.is_set || is_set(interface_link_cost.yfilter)) leaf_name_data.push_back(interface_link_cost.get_name_leafdata());
    if (interface_lsa_filter.is_set || is_set(interface_lsa_filter.yfilter)) leaf_name_data.push_back(interface_lsa_filter.get_name_leafdata());
    if (interface_madj_count.is_set || is_set(interface_madj_count.yfilter)) leaf_name_data.push_back(interface_madj_count.get_name_leafdata());
    if (interface_mask.is_set || is_set(interface_mask.yfilter)) leaf_name_data.push_back(interface_mask.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.yfilter)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (interface_nsf.is_set || is_set(interface_nsf.yfilter)) leaf_name_data.push_back(interface_nsf.get_name_leafdata());
    if (interface_nsf_enabled.is_set || is_set(interface_nsf_enabled.yfilter)) leaf_name_data.push_back(interface_nsf_enabled.get_name_leafdata());
    if (interface_pri_labels.is_set || is_set(interface_pri_labels.yfilter)) leaf_name_data.push_back(interface_pri_labels.get_name_leafdata());
    if (interface_priority.is_set || is_set(interface_priority.yfilter)) leaf_name_data.push_back(interface_priority.get_name_leafdata());
    if (interface_retransmission_interrval.is_set || is_set(interface_retransmission_interrval.yfilter)) leaf_name_data.push_back(interface_retransmission_interrval.get_name_leafdata());
    if (interface_router_id.is_set || is_set(interface_router_id.yfilter)) leaf_name_data.push_back(interface_router_id.get_name_leafdata());
    if (interface_sid.is_set || is_set(interface_sid.yfilter)) leaf_name_data.push_back(interface_sid.get_name_leafdata());
    if (interface_sid_n_flag_clear.is_set || is_set(interface_sid_n_flag_clear.yfilter)) leaf_name_data.push_back(interface_sid_n_flag_clear.get_name_leafdata());
    if (interface_sid_php_off.is_set || is_set(interface_sid_php_off.yfilter)) leaf_name_data.push_back(interface_sid_php_off.get_name_leafdata());
    if (interface_srte_labels.is_set || is_set(interface_srte_labels.yfilter)) leaf_name_data.push_back(interface_srte_labels.get_name_leafdata());
    if (interface_state.is_set || is_set(interface_state.yfilter)) leaf_name_data.push_back(interface_state.get_name_leafdata());
    if (interface_strict_spf_sid.is_set || is_set(interface_strict_spf_sid.yfilter)) leaf_name_data.push_back(interface_strict_spf_sid.get_name_leafdata());
    if (interface_strict_spf_sid_n_flag_clear.is_set || is_set(interface_strict_spf_sid_n_flag_clear.yfilter)) leaf_name_data.push_back(interface_strict_spf_sid_n_flag_clear.get_name_leafdata());
    if (interface_strict_spf_sid_php_off.is_set || is_set(interface_strict_spf_sid_php_off.yfilter)) leaf_name_data.push_back(interface_strict_spf_sid_php_off.get_name_leafdata());
    if (interface_tunnel_flags.is_set || is_set(interface_tunnel_flags.yfilter)) leaf_name_data.push_back(interface_tunnel_flags.get_name_leafdata());
    if (interface_unnum.is_set || is_set(interface_unnum.yfilter)) leaf_name_data.push_back(interface_unnum.get_name_leafdata());
    if (interfaceis_madj.is_set || is_set(interfaceis_madj.yfilter)) leaf_name_data.push_back(interfaceis_madj.get_name_leafdata());
    if (ip_mtu.is_set || is_set(ip_mtu.yfilter)) leaf_name_data.push_back(ip_mtu.get_name_leafdata());
    if (is_loopback_stub_network.is_set || is_set(is_loopback_stub_network.yfilter)) leaf_name_data.push_back(is_loopback_stub_network.get_name_leafdata());
    if (maximum_packet_size.is_set || is_set(maximum_packet_size.yfilter)) leaf_name_data.push_back(maximum_packet_size.get_name_leafdata());
    if (network_lsa_flush_timer.is_set || is_set(network_lsa_flush_timer.yfilter)) leaf_name_data.push_back(network_lsa_flush_timer.get_name_leafdata());
    if (network_type.is_set || is_set(network_type.yfilter)) leaf_name_data.push_back(network_type.get_name_leafdata());
    if (next_hello_time.is_set || is_set(next_hello_time.yfilter)) leaf_name_data.push_back(next_hello_time.get_name_leafdata());
    if (next_hello_time_ms.is_set || is_set(next_hello_time_ms.yfilter)) leaf_name_data.push_back(next_hello_time_ms.get_name_leafdata());
    if (ospf_interface_state.is_set || is_set(ospf_interface_state.yfilter)) leaf_name_data.push_back(ospf_interface_state.get_name_leafdata());
    if (passive_interface.is_set || is_set(passive_interface.yfilter)) leaf_name_data.push_back(passive_interface.get_name_leafdata());
    if (prefix_suppress_primary_addresses.is_set || is_set(prefix_suppress_primary_addresses.yfilter)) leaf_name_data.push_back(prefix_suppress_primary_addresses.get_name_leafdata());
    if (prefix_suppress_secondary_addresses.is_set || is_set(prefix_suppress_secondary_addresses.yfilter)) leaf_name_data.push_back(prefix_suppress_secondary_addresses.get_name_leafdata());
    if (registered_for_link_down_fast_detection.is_set || is_set(registered_for_link_down_fast_detection.yfilter)) leaf_name_data.push_back(registered_for_link_down_fast_detection.get_name_leafdata());
    if (transmission_delay.is_set || is_set(transmission_delay.yfilter)) leaf_name_data.push_back(transmission_delay.get_name_leafdata());
    if (ttl_security_enabled.is_set || is_set(ttl_security_enabled.yfilter)) leaf_name_data.push_back(ttl_security_enabled.get_name_leafdata());
    if (ttl_security_hop_count.is_set || is_set(ttl_security_hop_count.yfilter)) leaf_name_data.push_back(ttl_security_hop_count.get_name_leafdata());
    if (wait_interval.is_set || is_set(wait_interval.yfilter)) leaf_name_data.push_back(wait_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "active-interface")
    {
        if(active_interface == nullptr)
        {
            active_interface = std::make_shared<Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::ActiveInterface>();
        }
        return active_interface;
    }

    if(child_yang_name == "interface-bfd-information")
    {
        if(interface_bfd_information == nullptr)
        {
            interface_bfd_information = std::make_shared<Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::InterfaceBfdInformation>();
        }
        return interface_bfd_information;
    }

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
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::InterfaceMadj>();
        c->parent = this;
        interface_madj.push_back(c);
        return c;
    }

    if(child_yang_name == "interface-neighbor")
    {
        for(auto const & c : interface_neighbor)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::InterfaceNeighbor>();
        c->parent = this;
        interface_neighbor.push_back(c);
        return c;
    }

    if(child_yang_name == "ip-sec-addr")
    {
        for(auto const & c : ip_sec_addr)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::IpSecAddr>();
        c->parent = this;
        ip_sec_addr.push_back(c);
        return c;
    }

    if(child_yang_name == "ipfrr-tiebreakers")
    {
        for(auto const & c : ipfrr_tiebreakers)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::IpfrrTiebreakers>();
        c->parent = this;
        ipfrr_tiebreakers.push_back(c);
        return c;
    }

    if(child_yang_name == "srlg")
    {
        for(auto const & c : srlg)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::Srlg>();
        c->parent = this;
        srlg.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(active_interface != nullptr)
    {
        children["active-interface"] = active_interface;
    }

    if(interface_bfd_information != nullptr)
    {
        children["interface-bfd-information"] = interface_bfd_information;
    }

    for (auto const & c : interface_madj)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : interface_neighbor)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : ip_sec_addr)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : ipfrr_tiebreakers)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : srlg)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-designated-router")
    {
        backup_designated_router = value;
        backup_designated_router.value_namespace = name_space;
        backup_designated_router.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-designated-router-address")
    {
        backup_designated_router_address = value;
        backup_designated_router_address.value_namespace = name_space;
        backup_designated_router_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-designated-router-id")
    {
        backup_designated_router_id = value;
        backup_designated_router_id.value_namespace = name_space;
        backup_designated_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cfg-cost-fallback")
    {
        cfg_cost_fallback = value;
        cfg_cost_fallback.value_namespace = name_space;
        cfg_cost_fallback.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-demand-circuit")
    {
        configured_demand_circuit = value;
        configured_demand_circuit.value_namespace = name_space;
        configured_demand_circuit.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "cost-fallback-active")
    {
        cost_fallback_active = value;
        cost_fallback_active.value_namespace = name_space;
        cost_fallback_active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dead-interval")
    {
        dead_interval = value;
        dead_interval.value_namespace = name_space;
        dead_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "designated-router")
    {
        designated_router = value;
        designated_router.value_namespace = name_space;
        designated_router.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "designated-router-address")
    {
        designated_router_address = value;
        designated_router_address.value_namespace = name_space;
        designated_router_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "designated-router-id")
    {
        designated_router_id = value;
        designated_router_id.value_namespace = name_space;
        designated_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fast-detect-hold-down-time")
    {
        fast_detect_hold_down_time = value;
        fast_detect_hold_down_time.value_namespace = name_space;
        fast_detect_hold_down_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fast-detect-hold-down-time-remaining")
    {
        fast_detect_hold_down_time_remaining = value;
        fast_detect_hold_down_time_remaining.value_namespace = name_space;
        fast_detect_hold_down_time_remaining.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fast-reroute-topology-independent-lfa")
    {
        fast_reroute_topology_independent_lfa = value;
        fast_reroute_topology_independent_lfa.value_namespace = name_space;
        fast_reroute_topology_independent_lfa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fast-reroute-type")
    {
        fast_reroute_type = value;
        fast_reroute_type.value_namespace = name_space;
        fast_reroute_type.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "interface-address")
    {
        interface_address = value;
        interface_address.value_namespace = name_space;
        interface_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-area")
    {
        interface_area = value;
        interface_area.value_namespace = name_space;
        interface_area.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-bandwidth")
    {
        interface_bandwidth = value;
        interface_bandwidth.value_namespace = name_space;
        interface_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-bkp-labels")
    {
        interface_bkp_labels = value;
        interface_bkp_labels.value_namespace = name_space;
        interface_bkp_labels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-cost-fallback")
    {
        interface_cost_fallback = value;
        interface_cost_fallback.value_namespace = name_space;
        interface_cost_fallback.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-dc-bitless-lsa-count")
    {
        interface_dc_bitless_lsa_count = value;
        interface_dc_bitless_lsa_count.value_namespace = name_space;
        interface_dc_bitless_lsa_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-demand-circuit")
    {
        interface_demand_circuit = value;
        interface_demand_circuit.value_namespace = name_space;
        interface_demand_circuit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-fast-detect-hold-down")
    {
        interface_fast_detect_hold_down = value;
        interface_fast_detect_hold_down.value_namespace = name_space;
        interface_fast_detect_hold_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-forw")
    {
        interface_forw = value;
        interface_forw.value_namespace = name_space;
        interface_forw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-last-nsf")
    {
        interface_last_nsf = value;
        interface_last_nsf.value_namespace = name_space;
        interface_last_nsf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-ldp-sync")
    {
        interface_ldp_sync = value;
        interface_ldp_sync.value_namespace = name_space;
        interface_ldp_sync.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-line-state")
    {
        interface_line_state = value;
        interface_line_state.value_namespace = name_space;
        interface_line_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-link-cost")
    {
        interface_link_cost = value;
        interface_link_cost.value_namespace = name_space;
        interface_link_cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-lsa-filter")
    {
        interface_lsa_filter = value;
        interface_lsa_filter.value_namespace = name_space;
        interface_lsa_filter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-madj-count")
    {
        interface_madj_count = value;
        interface_madj_count.value_namespace = name_space;
        interface_madj_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-mask")
    {
        interface_mask = value;
        interface_mask.value_namespace = name_space;
        interface_mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
        interface_name_xr.value_namespace = name_space;
        interface_name_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-nsf")
    {
        interface_nsf = value;
        interface_nsf.value_namespace = name_space;
        interface_nsf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-nsf-enabled")
    {
        interface_nsf_enabled = value;
        interface_nsf_enabled.value_namespace = name_space;
        interface_nsf_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-pri-labels")
    {
        interface_pri_labels = value;
        interface_pri_labels.value_namespace = name_space;
        interface_pri_labels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-priority")
    {
        interface_priority = value;
        interface_priority.value_namespace = name_space;
        interface_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-retransmission-interrval")
    {
        interface_retransmission_interrval = value;
        interface_retransmission_interrval.value_namespace = name_space;
        interface_retransmission_interrval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-router-id")
    {
        interface_router_id = value;
        interface_router_id.value_namespace = name_space;
        interface_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-sid")
    {
        interface_sid = value;
        interface_sid.value_namespace = name_space;
        interface_sid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-sid-n-flag-clear")
    {
        interface_sid_n_flag_clear = value;
        interface_sid_n_flag_clear.value_namespace = name_space;
        interface_sid_n_flag_clear.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-sid-php-off")
    {
        interface_sid_php_off = value;
        interface_sid_php_off.value_namespace = name_space;
        interface_sid_php_off.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-srte-labels")
    {
        interface_srte_labels = value;
        interface_srte_labels.value_namespace = name_space;
        interface_srte_labels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-state")
    {
        interface_state = value;
        interface_state.value_namespace = name_space;
        interface_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-strict-spf-sid")
    {
        interface_strict_spf_sid = value;
        interface_strict_spf_sid.value_namespace = name_space;
        interface_strict_spf_sid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-strict-spf-sid-n-flag-clear")
    {
        interface_strict_spf_sid_n_flag_clear = value;
        interface_strict_spf_sid_n_flag_clear.value_namespace = name_space;
        interface_strict_spf_sid_n_flag_clear.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-strict-spf-sid-php-off")
    {
        interface_strict_spf_sid_php_off = value;
        interface_strict_spf_sid_php_off.value_namespace = name_space;
        interface_strict_spf_sid_php_off.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-tunnel-flags")
    {
        interface_tunnel_flags = value;
        interface_tunnel_flags.value_namespace = name_space;
        interface_tunnel_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-unnum")
    {
        interface_unnum = value;
        interface_unnum.value_namespace = name_space;
        interface_unnum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interfaceis-madj")
    {
        interfaceis_madj = value;
        interfaceis_madj.value_namespace = name_space;
        interfaceis_madj.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-mtu")
    {
        ip_mtu = value;
        ip_mtu.value_namespace = name_space;
        ip_mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-loopback-stub-network")
    {
        is_loopback_stub_network = value;
        is_loopback_stub_network.value_namespace = name_space;
        is_loopback_stub_network.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-packet-size")
    {
        maximum_packet_size = value;
        maximum_packet_size.value_namespace = name_space;
        maximum_packet_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "network-lsa-flush-timer")
    {
        network_lsa_flush_timer = value;
        network_lsa_flush_timer.value_namespace = name_space;
        network_lsa_flush_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "network-type")
    {
        network_type = value;
        network_type.value_namespace = name_space;
        network_type.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "ospf-interface-state")
    {
        ospf_interface_state = value;
        ospf_interface_state.value_namespace = name_space;
        ospf_interface_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "passive-interface")
    {
        passive_interface = value;
        passive_interface.value_namespace = name_space;
        passive_interface.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "registered-for-link-down-fast-detection")
    {
        registered_for_link_down_fast_detection = value;
        registered_for_link_down_fast_detection.value_namespace = name_space;
        registered_for_link_down_fast_detection.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmission-delay")
    {
        transmission_delay = value;
        transmission_delay.value_namespace = name_space;
        transmission_delay.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "wait-interval")
    {
        wait_interval = value;
        wait_interval.value_namespace = name_space;
        wait_interval.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "backup-designated-router")
    {
        backup_designated_router.yfilter = yfilter;
    }
    if(value_path == "backup-designated-router-address")
    {
        backup_designated_router_address.yfilter = yfilter;
    }
    if(value_path == "backup-designated-router-id")
    {
        backup_designated_router_id.yfilter = yfilter;
    }
    if(value_path == "cfg-cost-fallback")
    {
        cfg_cost_fallback.yfilter = yfilter;
    }
    if(value_path == "configured-demand-circuit")
    {
        configured_demand_circuit.yfilter = yfilter;
    }
    if(value_path == "configured-ldp-sync")
    {
        configured_ldp_sync.yfilter = yfilter;
    }
    if(value_path == "configured-ldp-sync-igp-shortcuts")
    {
        configured_ldp_sync_igp_shortcuts.yfilter = yfilter;
    }
    if(value_path == "cost-fallback-active")
    {
        cost_fallback_active.yfilter = yfilter;
    }
    if(value_path == "dead-interval")
    {
        dead_interval.yfilter = yfilter;
    }
    if(value_path == "designated-router")
    {
        designated_router.yfilter = yfilter;
    }
    if(value_path == "designated-router-address")
    {
        designated_router_address.yfilter = yfilter;
    }
    if(value_path == "designated-router-id")
    {
        designated_router_id.yfilter = yfilter;
    }
    if(value_path == "fast-detect-hold-down-time")
    {
        fast_detect_hold_down_time.yfilter = yfilter;
    }
    if(value_path == "fast-detect-hold-down-time-remaining")
    {
        fast_detect_hold_down_time_remaining.yfilter = yfilter;
    }
    if(value_path == "fast-reroute-topology-independent-lfa")
    {
        fast_reroute_topology_independent_lfa.yfilter = yfilter;
    }
    if(value_path == "fast-reroute-type")
    {
        fast_reroute_type.yfilter = yfilter;
    }
    if(value_path == "hello-interval")
    {
        hello_interval.yfilter = yfilter;
    }
    if(value_path == "hello-interval-ms")
    {
        hello_interval_ms.yfilter = yfilter;
    }
    if(value_path == "interface-ack-list-count")
    {
        interface_ack_list_count.yfilter = yfilter;
    }
    if(value_path == "interface-ack-list-high-watermark")
    {
        interface_ack_list_high_watermark.yfilter = yfilter;
    }
    if(value_path == "interface-address")
    {
        interface_address.yfilter = yfilter;
    }
    if(value_path == "interface-area")
    {
        interface_area.yfilter = yfilter;
    }
    if(value_path == "interface-bandwidth")
    {
        interface_bandwidth.yfilter = yfilter;
    }
    if(value_path == "interface-bkp-labels")
    {
        interface_bkp_labels.yfilter = yfilter;
    }
    if(value_path == "interface-cost-fallback")
    {
        interface_cost_fallback.yfilter = yfilter;
    }
    if(value_path == "interface-dc-bitless-lsa-count")
    {
        interface_dc_bitless_lsa_count.yfilter = yfilter;
    }
    if(value_path == "interface-demand-circuit")
    {
        interface_demand_circuit.yfilter = yfilter;
    }
    if(value_path == "interface-fast-detect-hold-down")
    {
        interface_fast_detect_hold_down.yfilter = yfilter;
    }
    if(value_path == "interface-forw")
    {
        interface_forw.yfilter = yfilter;
    }
    if(value_path == "interface-last-nsf")
    {
        interface_last_nsf.yfilter = yfilter;
    }
    if(value_path == "interface-ldp-sync")
    {
        interface_ldp_sync.yfilter = yfilter;
    }
    if(value_path == "interface-line-state")
    {
        interface_line_state.yfilter = yfilter;
    }
    if(value_path == "interface-link-cost")
    {
        interface_link_cost.yfilter = yfilter;
    }
    if(value_path == "interface-lsa-filter")
    {
        interface_lsa_filter.yfilter = yfilter;
    }
    if(value_path == "interface-madj-count")
    {
        interface_madj_count.yfilter = yfilter;
    }
    if(value_path == "interface-mask")
    {
        interface_mask.yfilter = yfilter;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr.yfilter = yfilter;
    }
    if(value_path == "interface-nsf")
    {
        interface_nsf.yfilter = yfilter;
    }
    if(value_path == "interface-nsf-enabled")
    {
        interface_nsf_enabled.yfilter = yfilter;
    }
    if(value_path == "interface-pri-labels")
    {
        interface_pri_labels.yfilter = yfilter;
    }
    if(value_path == "interface-priority")
    {
        interface_priority.yfilter = yfilter;
    }
    if(value_path == "interface-retransmission-interrval")
    {
        interface_retransmission_interrval.yfilter = yfilter;
    }
    if(value_path == "interface-router-id")
    {
        interface_router_id.yfilter = yfilter;
    }
    if(value_path == "interface-sid")
    {
        interface_sid.yfilter = yfilter;
    }
    if(value_path == "interface-sid-n-flag-clear")
    {
        interface_sid_n_flag_clear.yfilter = yfilter;
    }
    if(value_path == "interface-sid-php-off")
    {
        interface_sid_php_off.yfilter = yfilter;
    }
    if(value_path == "interface-srte-labels")
    {
        interface_srte_labels.yfilter = yfilter;
    }
    if(value_path == "interface-state")
    {
        interface_state.yfilter = yfilter;
    }
    if(value_path == "interface-strict-spf-sid")
    {
        interface_strict_spf_sid.yfilter = yfilter;
    }
    if(value_path == "interface-strict-spf-sid-n-flag-clear")
    {
        interface_strict_spf_sid_n_flag_clear.yfilter = yfilter;
    }
    if(value_path == "interface-strict-spf-sid-php-off")
    {
        interface_strict_spf_sid_php_off.yfilter = yfilter;
    }
    if(value_path == "interface-tunnel-flags")
    {
        interface_tunnel_flags.yfilter = yfilter;
    }
    if(value_path == "interface-unnum")
    {
        interface_unnum.yfilter = yfilter;
    }
    if(value_path == "interfaceis-madj")
    {
        interfaceis_madj.yfilter = yfilter;
    }
    if(value_path == "ip-mtu")
    {
        ip_mtu.yfilter = yfilter;
    }
    if(value_path == "is-loopback-stub-network")
    {
        is_loopback_stub_network.yfilter = yfilter;
    }
    if(value_path == "maximum-packet-size")
    {
        maximum_packet_size.yfilter = yfilter;
    }
    if(value_path == "network-lsa-flush-timer")
    {
        network_lsa_flush_timer.yfilter = yfilter;
    }
    if(value_path == "network-type")
    {
        network_type.yfilter = yfilter;
    }
    if(value_path == "next-hello-time")
    {
        next_hello_time.yfilter = yfilter;
    }
    if(value_path == "next-hello-time-ms")
    {
        next_hello_time_ms.yfilter = yfilter;
    }
    if(value_path == "ospf-interface-state")
    {
        ospf_interface_state.yfilter = yfilter;
    }
    if(value_path == "passive-interface")
    {
        passive_interface.yfilter = yfilter;
    }
    if(value_path == "prefix-suppress-primary-addresses")
    {
        prefix_suppress_primary_addresses.yfilter = yfilter;
    }
    if(value_path == "prefix-suppress-secondary-addresses")
    {
        prefix_suppress_secondary_addresses.yfilter = yfilter;
    }
    if(value_path == "registered-for-link-down-fast-detection")
    {
        registered_for_link_down_fast_detection.yfilter = yfilter;
    }
    if(value_path == "transmission-delay")
    {
        transmission_delay.yfilter = yfilter;
    }
    if(value_path == "ttl-security-enabled")
    {
        ttl_security_enabled.yfilter = yfilter;
    }
    if(value_path == "ttl-security-hop-count")
    {
        ttl_security_hop_count.yfilter = yfilter;
    }
    if(value_path == "wait-interval")
    {
        wait_interval.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "active-interface" || name == "interface-bfd-information" || name == "interface-madj" || name == "interface-neighbor" || name == "ip-sec-addr" || name == "ipfrr-tiebreakers" || name == "srlg" || name == "interface-name" || name == "backup-designated-router" || name == "backup-designated-router-address" || name == "backup-designated-router-id" || name == "cfg-cost-fallback" || name == "configured-demand-circuit" || name == "configured-ldp-sync" || name == "configured-ldp-sync-igp-shortcuts" || name == "cost-fallback-active" || name == "dead-interval" || name == "designated-router" || name == "designated-router-address" || name == "designated-router-id" || name == "fast-detect-hold-down-time" || name == "fast-detect-hold-down-time-remaining" || name == "fast-reroute-topology-independent-lfa" || name == "fast-reroute-type" || name == "hello-interval" || name == "hello-interval-ms" || name == "interface-ack-list-count" || name == "interface-ack-list-high-watermark" || name == "interface-address" || name == "interface-area" || name == "interface-bandwidth" || name == "interface-bkp-labels" || name == "interface-cost-fallback" || name == "interface-dc-bitless-lsa-count" || name == "interface-demand-circuit" || name == "interface-fast-detect-hold-down" || name == "interface-forw" || name == "interface-last-nsf" || name == "interface-ldp-sync" || name == "interface-line-state" || name == "interface-link-cost" || name == "interface-lsa-filter" || name == "interface-madj-count" || name == "interface-mask" || name == "interface-name-xr" || name == "interface-nsf" || name == "interface-nsf-enabled" || name == "interface-pri-labels" || name == "interface-priority" || name == "interface-retransmission-interrval" || name == "interface-router-id" || name == "interface-sid" || name == "interface-sid-n-flag-clear" || name == "interface-sid-php-off" || name == "interface-srte-labels" || name == "interface-state" || name == "interface-strict-spf-sid" || name == "interface-strict-spf-sid-n-flag-clear" || name == "interface-strict-spf-sid-php-off" || name == "interface-tunnel-flags" || name == "interface-unnum" || name == "interfaceis-madj" || name == "ip-mtu" || name == "is-loopback-stub-network" || name == "maximum-packet-size" || name == "network-lsa-flush-timer" || name == "network-type" || name == "next-hello-time" || name == "next-hello-time-ms" || name == "ospf-interface-state" || name == "passive-interface" || name == "prefix-suppress-primary-addresses" || name == "prefix-suppress-secondary-addresses" || name == "registered-for-link-down-fast-detection" || name == "transmission-delay" || name == "ttl-security-enabled" || name == "ttl-security-hop-count" || name == "wait-interval")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::ActiveInterface::ActiveInterface()
    :
    flood_scan_length{YType::uint32, "flood-scan-length"},
    interface_area_flood_index{YType::uint32, "interface-area-flood-index"},
    interface_area_next_flood{YType::uint32, "interface-area-next-flood"},
    interface_area_next_flood_index{YType::uint32, "interface-area-next-flood-index"},
    interface_as_flood_index{YType::uint32, "interface-as-flood-index"},
    interface_as_next_flood{YType::uint32, "interface-as-next-flood"},
    interface_as_next_flood_index{YType::uint32, "interface-as-next-flood-index"},
    interface_authentication_type{YType::enumeration, "interface-authentication-type"},
    interface_flood_length{YType::uint32, "interface-flood-length"},
    interface_flood_pacing_timer{YType::uint32, "interface-flood-pacing-timer"},
    interface_neighbor_count{YType::uint16, "interface-neighbor-count"},
    keychain_id{YType::uint64, "keychain-id"},
    last_flood_time{YType::uint32, "last-flood-time"},
    maximum_flood_length{YType::uint32, "maximum-flood-length"},
    maximum_flood_time{YType::uint32, "maximum-flood-time"},
    old_md5_key_neighbor_count{YType::uint32, "old-md5-key-neighbor-count"},
    suppress_hello_count{YType::uint16, "suppress-hello-count"},
    wait_time{YType::uint32, "wait-time"},
    youngest_md_key{YType::boolean, "youngest-md-key"},
    youngest_md_key_id{YType::uint16, "youngest-md-key-id"}
{

    yang_name = "active-interface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::ActiveInterface::~ActiveInterface()
{
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::ActiveInterface::has_data() const
{
    for (std::size_t index=0; index<md_keys.size(); index++)
    {
        if(md_keys[index]->has_data())
            return true;
    }
    return flood_scan_length.is_set
	|| interface_area_flood_index.is_set
	|| interface_area_next_flood.is_set
	|| interface_area_next_flood_index.is_set
	|| interface_as_flood_index.is_set
	|| interface_as_next_flood.is_set
	|| interface_as_next_flood_index.is_set
	|| interface_authentication_type.is_set
	|| interface_flood_length.is_set
	|| interface_flood_pacing_timer.is_set
	|| interface_neighbor_count.is_set
	|| keychain_id.is_set
	|| last_flood_time.is_set
	|| maximum_flood_length.is_set
	|| maximum_flood_time.is_set
	|| old_md5_key_neighbor_count.is_set
	|| suppress_hello_count.is_set
	|| wait_time.is_set
	|| youngest_md_key.is_set
	|| youngest_md_key_id.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::ActiveInterface::has_operation() const
{
    for (std::size_t index=0; index<md_keys.size(); index++)
    {
        if(md_keys[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(flood_scan_length.yfilter)
	|| ydk::is_set(interface_area_flood_index.yfilter)
	|| ydk::is_set(interface_area_next_flood.yfilter)
	|| ydk::is_set(interface_area_next_flood_index.yfilter)
	|| ydk::is_set(interface_as_flood_index.yfilter)
	|| ydk::is_set(interface_as_next_flood.yfilter)
	|| ydk::is_set(interface_as_next_flood_index.yfilter)
	|| ydk::is_set(interface_authentication_type.yfilter)
	|| ydk::is_set(interface_flood_length.yfilter)
	|| ydk::is_set(interface_flood_pacing_timer.yfilter)
	|| ydk::is_set(interface_neighbor_count.yfilter)
	|| ydk::is_set(keychain_id.yfilter)
	|| ydk::is_set(last_flood_time.yfilter)
	|| ydk::is_set(maximum_flood_length.yfilter)
	|| ydk::is_set(maximum_flood_time.yfilter)
	|| ydk::is_set(old_md5_key_neighbor_count.yfilter)
	|| ydk::is_set(suppress_hello_count.yfilter)
	|| ydk::is_set(wait_time.yfilter)
	|| ydk::is_set(youngest_md_key.yfilter)
	|| ydk::is_set(youngest_md_key_id.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::ActiveInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "active-interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::ActiveInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flood_scan_length.is_set || is_set(flood_scan_length.yfilter)) leaf_name_data.push_back(flood_scan_length.get_name_leafdata());
    if (interface_area_flood_index.is_set || is_set(interface_area_flood_index.yfilter)) leaf_name_data.push_back(interface_area_flood_index.get_name_leafdata());
    if (interface_area_next_flood.is_set || is_set(interface_area_next_flood.yfilter)) leaf_name_data.push_back(interface_area_next_flood.get_name_leafdata());
    if (interface_area_next_flood_index.is_set || is_set(interface_area_next_flood_index.yfilter)) leaf_name_data.push_back(interface_area_next_flood_index.get_name_leafdata());
    if (interface_as_flood_index.is_set || is_set(interface_as_flood_index.yfilter)) leaf_name_data.push_back(interface_as_flood_index.get_name_leafdata());
    if (interface_as_next_flood.is_set || is_set(interface_as_next_flood.yfilter)) leaf_name_data.push_back(interface_as_next_flood.get_name_leafdata());
    if (interface_as_next_flood_index.is_set || is_set(interface_as_next_flood_index.yfilter)) leaf_name_data.push_back(interface_as_next_flood_index.get_name_leafdata());
    if (interface_authentication_type.is_set || is_set(interface_authentication_type.yfilter)) leaf_name_data.push_back(interface_authentication_type.get_name_leafdata());
    if (interface_flood_length.is_set || is_set(interface_flood_length.yfilter)) leaf_name_data.push_back(interface_flood_length.get_name_leafdata());
    if (interface_flood_pacing_timer.is_set || is_set(interface_flood_pacing_timer.yfilter)) leaf_name_data.push_back(interface_flood_pacing_timer.get_name_leafdata());
    if (interface_neighbor_count.is_set || is_set(interface_neighbor_count.yfilter)) leaf_name_data.push_back(interface_neighbor_count.get_name_leafdata());
    if (keychain_id.is_set || is_set(keychain_id.yfilter)) leaf_name_data.push_back(keychain_id.get_name_leafdata());
    if (last_flood_time.is_set || is_set(last_flood_time.yfilter)) leaf_name_data.push_back(last_flood_time.get_name_leafdata());
    if (maximum_flood_length.is_set || is_set(maximum_flood_length.yfilter)) leaf_name_data.push_back(maximum_flood_length.get_name_leafdata());
    if (maximum_flood_time.is_set || is_set(maximum_flood_time.yfilter)) leaf_name_data.push_back(maximum_flood_time.get_name_leafdata());
    if (old_md5_key_neighbor_count.is_set || is_set(old_md5_key_neighbor_count.yfilter)) leaf_name_data.push_back(old_md5_key_neighbor_count.get_name_leafdata());
    if (suppress_hello_count.is_set || is_set(suppress_hello_count.yfilter)) leaf_name_data.push_back(suppress_hello_count.get_name_leafdata());
    if (wait_time.is_set || is_set(wait_time.yfilter)) leaf_name_data.push_back(wait_time.get_name_leafdata());
    if (youngest_md_key.is_set || is_set(youngest_md_key.yfilter)) leaf_name_data.push_back(youngest_md_key.get_name_leafdata());
    if (youngest_md_key_id.is_set || is_set(youngest_md_key_id.yfilter)) leaf_name_data.push_back(youngest_md_key_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::ActiveInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "md-keys")
    {
        for(auto const & c : md_keys)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::ActiveInterface::MdKeys>();
        c->parent = this;
        md_keys.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::ActiveInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : md_keys)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::ActiveInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flood-scan-length")
    {
        flood_scan_length = value;
        flood_scan_length.value_namespace = name_space;
        flood_scan_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-area-flood-index")
    {
        interface_area_flood_index = value;
        interface_area_flood_index.value_namespace = name_space;
        interface_area_flood_index.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "interface-as-flood-index")
    {
        interface_as_flood_index = value;
        interface_as_flood_index.value_namespace = name_space;
        interface_as_flood_index.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "interface-authentication-type")
    {
        interface_authentication_type = value;
        interface_authentication_type.value_namespace = name_space;
        interface_authentication_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-flood-length")
    {
        interface_flood_length = value;
        interface_flood_length.value_namespace = name_space;
        interface_flood_length.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "keychain-id")
    {
        keychain_id = value;
        keychain_id.value_namespace = name_space;
        keychain_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-flood-time")
    {
        last_flood_time = value;
        last_flood_time.value_namespace = name_space;
        last_flood_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-flood-length")
    {
        maximum_flood_length = value;
        maximum_flood_length.value_namespace = name_space;
        maximum_flood_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-flood-time")
    {
        maximum_flood_time = value;
        maximum_flood_time.value_namespace = name_space;
        maximum_flood_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "old-md5-key-neighbor-count")
    {
        old_md5_key_neighbor_count = value;
        old_md5_key_neighbor_count.value_namespace = name_space;
        old_md5_key_neighbor_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppress-hello-count")
    {
        suppress_hello_count = value;
        suppress_hello_count.value_namespace = name_space;
        suppress_hello_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wait-time")
    {
        wait_time = value;
        wait_time.value_namespace = name_space;
        wait_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "youngest-md-key")
    {
        youngest_md_key = value;
        youngest_md_key.value_namespace = name_space;
        youngest_md_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "youngest-md-key-id")
    {
        youngest_md_key_id = value;
        youngest_md_key_id.value_namespace = name_space;
        youngest_md_key_id.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::ActiveInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flood-scan-length")
    {
        flood_scan_length.yfilter = yfilter;
    }
    if(value_path == "interface-area-flood-index")
    {
        interface_area_flood_index.yfilter = yfilter;
    }
    if(value_path == "interface-area-next-flood")
    {
        interface_area_next_flood.yfilter = yfilter;
    }
    if(value_path == "interface-area-next-flood-index")
    {
        interface_area_next_flood_index.yfilter = yfilter;
    }
    if(value_path == "interface-as-flood-index")
    {
        interface_as_flood_index.yfilter = yfilter;
    }
    if(value_path == "interface-as-next-flood")
    {
        interface_as_next_flood.yfilter = yfilter;
    }
    if(value_path == "interface-as-next-flood-index")
    {
        interface_as_next_flood_index.yfilter = yfilter;
    }
    if(value_path == "interface-authentication-type")
    {
        interface_authentication_type.yfilter = yfilter;
    }
    if(value_path == "interface-flood-length")
    {
        interface_flood_length.yfilter = yfilter;
    }
    if(value_path == "interface-flood-pacing-timer")
    {
        interface_flood_pacing_timer.yfilter = yfilter;
    }
    if(value_path == "interface-neighbor-count")
    {
        interface_neighbor_count.yfilter = yfilter;
    }
    if(value_path == "keychain-id")
    {
        keychain_id.yfilter = yfilter;
    }
    if(value_path == "last-flood-time")
    {
        last_flood_time.yfilter = yfilter;
    }
    if(value_path == "maximum-flood-length")
    {
        maximum_flood_length.yfilter = yfilter;
    }
    if(value_path == "maximum-flood-time")
    {
        maximum_flood_time.yfilter = yfilter;
    }
    if(value_path == "old-md5-key-neighbor-count")
    {
        old_md5_key_neighbor_count.yfilter = yfilter;
    }
    if(value_path == "suppress-hello-count")
    {
        suppress_hello_count.yfilter = yfilter;
    }
    if(value_path == "wait-time")
    {
        wait_time.yfilter = yfilter;
    }
    if(value_path == "youngest-md-key")
    {
        youngest_md_key.yfilter = yfilter;
    }
    if(value_path == "youngest-md-key-id")
    {
        youngest_md_key_id.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::ActiveInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "md-keys" || name == "flood-scan-length" || name == "interface-area-flood-index" || name == "interface-area-next-flood" || name == "interface-area-next-flood-index" || name == "interface-as-flood-index" || name == "interface-as-next-flood" || name == "interface-as-next-flood-index" || name == "interface-authentication-type" || name == "interface-flood-length" || name == "interface-flood-pacing-timer" || name == "interface-neighbor-count" || name == "keychain-id" || name == "last-flood-time" || name == "maximum-flood-length" || name == "maximum-flood-time" || name == "old-md5-key-neighbor-count" || name == "suppress-hello-count" || name == "wait-time" || name == "youngest-md-key" || name == "youngest-md-key-id")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::ActiveInterface::MdKeys::MdKeys()
    :
    entry{YType::uint16, "entry"}
{

    yang_name = "md-keys"; yang_parent_name = "active-interface"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::ActiveInterface::MdKeys::~MdKeys()
{
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::ActiveInterface::MdKeys::has_data() const
{
    return entry.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::ActiveInterface::MdKeys::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::ActiveInterface::MdKeys::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "md-keys";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::ActiveInterface::MdKeys::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::ActiveInterface::MdKeys::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::ActiveInterface::MdKeys::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::ActiveInterface::MdKeys::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::ActiveInterface::MdKeys::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::ActiveInterface::MdKeys::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::InterfaceBfdInformation::InterfaceBfdInformation()
    :
    bfd_intf_enable_mode{YType::uint32, "bfd-intf-enable-mode"},
    detection_multiplier{YType::uint32, "detection-multiplier"},
    interval{YType::uint32, "interval"}
{

    yang_name = "interface-bfd-information"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::InterfaceBfdInformation::~InterfaceBfdInformation()
{
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::InterfaceBfdInformation::has_data() const
{
    return bfd_intf_enable_mode.is_set
	|| detection_multiplier.is_set
	|| interval.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::InterfaceBfdInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bfd_intf_enable_mode.yfilter)
	|| ydk::is_set(detection_multiplier.yfilter)
	|| ydk::is_set(interval.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::InterfaceBfdInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-bfd-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::InterfaceBfdInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bfd_intf_enable_mode.is_set || is_set(bfd_intf_enable_mode.yfilter)) leaf_name_data.push_back(bfd_intf_enable_mode.get_name_leafdata());
    if (detection_multiplier.is_set || is_set(detection_multiplier.yfilter)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::InterfaceBfdInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::InterfaceBfdInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::InterfaceBfdInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bfd-intf-enable-mode")
    {
        bfd_intf_enable_mode = value;
        bfd_intf_enable_mode.value_namespace = name_space;
        bfd_intf_enable_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
        detection_multiplier.value_namespace = name_space;
        detection_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::InterfaceBfdInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bfd-intf-enable-mode")
    {
        bfd_intf_enable_mode.yfilter = yfilter;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier.yfilter = yfilter;
    }
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::InterfaceBfdInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bfd-intf-enable-mode" || name == "detection-multiplier" || name == "interval")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::InterfaceMadj::InterfaceMadj()
    :
    interface_adj_neighbor_count{YType::uint16, "interface-adj-neighbor-count"},
    interface_area{YType::str, "interface-area"},
    interface_link_cost{YType::uint16, "interface-link-cost"},
    interface_neighbor_count{YType::uint16, "interface-neighbor-count"},
    madj_area_id{YType::uint32, "madj-area-id"},
    ospf_interface_state{YType::enumeration, "ospf-interface-state"}
{

    yang_name = "interface-madj"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::InterfaceMadj::~InterfaceMadj()
{
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::InterfaceMadj::has_data() const
{
    return interface_adj_neighbor_count.is_set
	|| interface_area.is_set
	|| interface_link_cost.is_set
	|| interface_neighbor_count.is_set
	|| madj_area_id.is_set
	|| ospf_interface_state.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::InterfaceMadj::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_adj_neighbor_count.yfilter)
	|| ydk::is_set(interface_area.yfilter)
	|| ydk::is_set(interface_link_cost.yfilter)
	|| ydk::is_set(interface_neighbor_count.yfilter)
	|| ydk::is_set(madj_area_id.yfilter)
	|| ydk::is_set(ospf_interface_state.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::InterfaceMadj::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-madj";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::InterfaceMadj::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_adj_neighbor_count.is_set || is_set(interface_adj_neighbor_count.yfilter)) leaf_name_data.push_back(interface_adj_neighbor_count.get_name_leafdata());
    if (interface_area.is_set || is_set(interface_area.yfilter)) leaf_name_data.push_back(interface_area.get_name_leafdata());
    if (interface_link_cost.is_set || is_set(interface_link_cost.yfilter)) leaf_name_data.push_back(interface_link_cost.get_name_leafdata());
    if (interface_neighbor_count.is_set || is_set(interface_neighbor_count.yfilter)) leaf_name_data.push_back(interface_neighbor_count.get_name_leafdata());
    if (madj_area_id.is_set || is_set(madj_area_id.yfilter)) leaf_name_data.push_back(madj_area_id.get_name_leafdata());
    if (ospf_interface_state.is_set || is_set(ospf_interface_state.yfilter)) leaf_name_data.push_back(ospf_interface_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::InterfaceMadj::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::InterfaceMadj::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::InterfaceMadj::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-adj-neighbor-count")
    {
        interface_adj_neighbor_count = value;
        interface_adj_neighbor_count.value_namespace = name_space;
        interface_adj_neighbor_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-area")
    {
        interface_area = value;
        interface_area.value_namespace = name_space;
        interface_area.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-link-cost")
    {
        interface_link_cost = value;
        interface_link_cost.value_namespace = name_space;
        interface_link_cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-neighbor-count")
    {
        interface_neighbor_count = value;
        interface_neighbor_count.value_namespace = name_space;
        interface_neighbor_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "madj-area-id")
    {
        madj_area_id = value;
        madj_area_id.value_namespace = name_space;
        madj_area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospf-interface-state")
    {
        ospf_interface_state = value;
        ospf_interface_state.value_namespace = name_space;
        ospf_interface_state.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::InterfaceMadj::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-adj-neighbor-count")
    {
        interface_adj_neighbor_count.yfilter = yfilter;
    }
    if(value_path == "interface-area")
    {
        interface_area.yfilter = yfilter;
    }
    if(value_path == "interface-link-cost")
    {
        interface_link_cost.yfilter = yfilter;
    }
    if(value_path == "interface-neighbor-count")
    {
        interface_neighbor_count.yfilter = yfilter;
    }
    if(value_path == "madj-area-id")
    {
        madj_area_id.yfilter = yfilter;
    }
    if(value_path == "ospf-interface-state")
    {
        ospf_interface_state.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::InterfaceMadj::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-adj-neighbor-count" || name == "interface-area" || name == "interface-link-cost" || name == "interface-neighbor-count" || name == "madj-area-id" || name == "ospf-interface-state")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::InterfaceNeighbor::InterfaceNeighbor()
    :
    interface_neighbor_cost{YType::uint32, "interface-neighbor-cost"},
    interface_neighbor_id{YType::str, "interface-neighbor-id"},
    neighbor_bdr{YType::boolean, "neighbor-bdr"},
    neighbor_dr{YType::boolean, "neighbor-dr"},
    suppress_hello{YType::boolean, "suppress-hello"}
{

    yang_name = "interface-neighbor"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::InterfaceNeighbor::~InterfaceNeighbor()
{
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::InterfaceNeighbor::has_data() const
{
    return interface_neighbor_cost.is_set
	|| interface_neighbor_id.is_set
	|| neighbor_bdr.is_set
	|| neighbor_dr.is_set
	|| suppress_hello.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::InterfaceNeighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_neighbor_cost.yfilter)
	|| ydk::is_set(interface_neighbor_id.yfilter)
	|| ydk::is_set(neighbor_bdr.yfilter)
	|| ydk::is_set(neighbor_dr.yfilter)
	|| ydk::is_set(suppress_hello.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::InterfaceNeighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-neighbor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::InterfaceNeighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_neighbor_cost.is_set || is_set(interface_neighbor_cost.yfilter)) leaf_name_data.push_back(interface_neighbor_cost.get_name_leafdata());
    if (interface_neighbor_id.is_set || is_set(interface_neighbor_id.yfilter)) leaf_name_data.push_back(interface_neighbor_id.get_name_leafdata());
    if (neighbor_bdr.is_set || is_set(neighbor_bdr.yfilter)) leaf_name_data.push_back(neighbor_bdr.get_name_leafdata());
    if (neighbor_dr.is_set || is_set(neighbor_dr.yfilter)) leaf_name_data.push_back(neighbor_dr.get_name_leafdata());
    if (suppress_hello.is_set || is_set(suppress_hello.yfilter)) leaf_name_data.push_back(suppress_hello.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::InterfaceNeighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::InterfaceNeighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::InterfaceNeighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-neighbor-cost")
    {
        interface_neighbor_cost = value;
        interface_neighbor_cost.value_namespace = name_space;
        interface_neighbor_cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-neighbor-id")
    {
        interface_neighbor_id = value;
        interface_neighbor_id.value_namespace = name_space;
        interface_neighbor_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-bdr")
    {
        neighbor_bdr = value;
        neighbor_bdr.value_namespace = name_space;
        neighbor_bdr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-dr")
    {
        neighbor_dr = value;
        neighbor_dr.value_namespace = name_space;
        neighbor_dr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppress-hello")
    {
        suppress_hello = value;
        suppress_hello.value_namespace = name_space;
        suppress_hello.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::InterfaceNeighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-neighbor-cost")
    {
        interface_neighbor_cost.yfilter = yfilter;
    }
    if(value_path == "interface-neighbor-id")
    {
        interface_neighbor_id.yfilter = yfilter;
    }
    if(value_path == "neighbor-bdr")
    {
        neighbor_bdr.yfilter = yfilter;
    }
    if(value_path == "neighbor-dr")
    {
        neighbor_dr.yfilter = yfilter;
    }
    if(value_path == "suppress-hello")
    {
        suppress_hello.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::InterfaceNeighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-neighbor-cost" || name == "interface-neighbor-id" || name == "neighbor-bdr" || name == "neighbor-dr" || name == "suppress-hello")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::IpSecAddr::IpSecAddr()
    :
    secondary_addr{YType::str, "secondary-addr"},
    secondary_prefix{YType::uint32, "secondary-prefix"}
{

    yang_name = "ip-sec-addr"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::IpSecAddr::~IpSecAddr()
{
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::IpSecAddr::has_data() const
{
    return secondary_addr.is_set
	|| secondary_prefix.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::IpSecAddr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(secondary_addr.yfilter)
	|| ydk::is_set(secondary_prefix.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::IpSecAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-sec-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::IpSecAddr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (secondary_addr.is_set || is_set(secondary_addr.yfilter)) leaf_name_data.push_back(secondary_addr.get_name_leafdata());
    if (secondary_prefix.is_set || is_set(secondary_prefix.yfilter)) leaf_name_data.push_back(secondary_prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::IpSecAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::IpSecAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::IpSecAddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::IpSecAddr::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::IpSecAddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "secondary-addr" || name == "secondary-prefix")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::IpfrrTiebreakers::IpfrrTiebreakers()
    :
    tiebreaker_index{YType::uint32, "tiebreaker-index"},
    tiebreaker_type{YType::enumeration, "tiebreaker-type"}
{

    yang_name = "ipfrr-tiebreakers"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::IpfrrTiebreakers::~IpfrrTiebreakers()
{
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::IpfrrTiebreakers::has_data() const
{
    return tiebreaker_index.is_set
	|| tiebreaker_type.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::IpfrrTiebreakers::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tiebreaker_index.yfilter)
	|| ydk::is_set(tiebreaker_type.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::IpfrrTiebreakers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipfrr-tiebreakers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::IpfrrTiebreakers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tiebreaker_index.is_set || is_set(tiebreaker_index.yfilter)) leaf_name_data.push_back(tiebreaker_index.get_name_leafdata());
    if (tiebreaker_type.is_set || is_set(tiebreaker_type.yfilter)) leaf_name_data.push_back(tiebreaker_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::IpfrrTiebreakers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::IpfrrTiebreakers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::IpfrrTiebreakers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tiebreaker-index")
    {
        tiebreaker_index = value;
        tiebreaker_index.value_namespace = name_space;
        tiebreaker_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tiebreaker-type")
    {
        tiebreaker_type = value;
        tiebreaker_type.value_namespace = name_space;
        tiebreaker_type.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::IpfrrTiebreakers::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tiebreaker-index")
    {
        tiebreaker_index.yfilter = yfilter;
    }
    if(value_path == "tiebreaker-type")
    {
        tiebreaker_type.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::IpfrrTiebreakers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tiebreaker-index" || name == "tiebreaker-type")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::Srlg::Srlg()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "srlg"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::Srlg::~Srlg()
{
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::Srlg::has_data() const
{
    return entry.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::Srlg::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::Srlg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srlg";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::Srlg::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::Srlg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::Srlg::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::Srlg::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::Srlg::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::Srlg::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetails()
{

    yang_name = "neighbor-details"; yang_parent_name = "area"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::~NeighborDetails()
{
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::has_data() const
{
    for (std::size_t index=0; index<neighbor_detail.size(); index++)
    {
        if(neighbor_detail[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::has_operation() const
{
    for (std::size_t index=0; index<neighbor_detail.size(); index++)
    {
        if(neighbor_detail[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-details";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail>();
        c->parent = this;
        neighbor_detail.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : neighbor_detail)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-detail")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborDetail()
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
    neighbor_interface_id{YType::uint16, "neighbor-interface-id"},
    neighbor_lls_option{YType::uint32, "neighbor-lls-option"},
    neighbor_option{YType::uint8, "neighbor-option"},
    next_poll_interval{YType::uint32, "next-poll-interval"},
    nsf_router_state{YType::enumeration, "nsf-router-state"},
    oob_resynchronization{YType::boolean, "oob-resynchronization"},
    pending_events{YType::uint16, "pending-events"},
    poll_interval{YType::uint32, "poll-interval"},
    state_change_count{YType::uint16, "state-change-count"}
    	,
    neighbor_bfd_information(std::make_shared<Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborBfdInformation>())
	,neighbor_retransmission_information(std::make_shared<Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborRetransmissionInformation>())
	,neighbor_summary(std::make_shared<Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborSummary>())
{
    neighbor_bfd_information->parent = this;
    neighbor_retransmission_information->parent = this;
    neighbor_summary->parent = this;

    yang_name = "neighbor-detail"; yang_parent_name = "neighbor-details"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail::~NeighborDetail()
{
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail::has_data() const
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
	|| neighbor_interface_id.is_set
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

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adjacency_sid_label.yfilter)
	|| ydk::is_set(adjacency_sid_protected.yfilter)
	|| ydk::is_set(adjacency_sid_unprotected_label.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(interface_type.yfilter)
	|| ydk::is_set(last_oob_time.yfilter)
	|| ydk::is_set(lfa_interface.yfilter)
	|| ydk::is_set(lfa_neighbor_id.yfilter)
	|| ydk::is_set(lfa_neighbor_revision.yfilter)
	|| ydk::is_set(lfa_next_hop.yfilter)
	|| ydk::is_set(neighbor_ack_list_count.yfilter)
	|| ydk::is_set(neighbor_ack_list_high_watermark.yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(neighbor_area_id.yfilter)
	|| ydk::is_set(neighbor_backup_designated_router_address.yfilter)
	|| ydk::is_set(neighbor_cost.yfilter)
	|| ydk::is_set(neighbor_designated_router_address.yfilter)
	|| ydk::is_set(neighbor_filter.yfilter)
	|| ydk::is_set(neighbor_interface_id.yfilter)
	|| ydk::is_set(neighbor_lls_option.yfilter)
	|| ydk::is_set(neighbor_option.yfilter)
	|| ydk::is_set(next_poll_interval.yfilter)
	|| ydk::is_set(nsf_router_state.yfilter)
	|| ydk::is_set(oob_resynchronization.yfilter)
	|| ydk::is_set(pending_events.yfilter)
	|| ydk::is_set(poll_interval.yfilter)
	|| ydk::is_set(state_change_count.yfilter)
	|| (neighbor_bfd_information !=  nullptr && neighbor_bfd_information->has_operation())
	|| (neighbor_retransmission_information !=  nullptr && neighbor_retransmission_information->has_operation())
	|| (neighbor_summary !=  nullptr && neighbor_summary->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adjacency_sid_label.is_set || is_set(adjacency_sid_label.yfilter)) leaf_name_data.push_back(adjacency_sid_label.get_name_leafdata());
    if (adjacency_sid_protected.is_set || is_set(adjacency_sid_protected.yfilter)) leaf_name_data.push_back(adjacency_sid_protected.get_name_leafdata());
    if (adjacency_sid_unprotected_label.is_set || is_set(adjacency_sid_unprotected_label.yfilter)) leaf_name_data.push_back(adjacency_sid_unprotected_label.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (interface_type.is_set || is_set(interface_type.yfilter)) leaf_name_data.push_back(interface_type.get_name_leafdata());
    if (last_oob_time.is_set || is_set(last_oob_time.yfilter)) leaf_name_data.push_back(last_oob_time.get_name_leafdata());
    if (lfa_interface.is_set || is_set(lfa_interface.yfilter)) leaf_name_data.push_back(lfa_interface.get_name_leafdata());
    if (lfa_neighbor_id.is_set || is_set(lfa_neighbor_id.yfilter)) leaf_name_data.push_back(lfa_neighbor_id.get_name_leafdata());
    if (lfa_neighbor_revision.is_set || is_set(lfa_neighbor_revision.yfilter)) leaf_name_data.push_back(lfa_neighbor_revision.get_name_leafdata());
    if (lfa_next_hop.is_set || is_set(lfa_next_hop.yfilter)) leaf_name_data.push_back(lfa_next_hop.get_name_leafdata());
    if (neighbor_ack_list_count.is_set || is_set(neighbor_ack_list_count.yfilter)) leaf_name_data.push_back(neighbor_ack_list_count.get_name_leafdata());
    if (neighbor_ack_list_high_watermark.is_set || is_set(neighbor_ack_list_high_watermark.yfilter)) leaf_name_data.push_back(neighbor_ack_list_high_watermark.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (neighbor_area_id.is_set || is_set(neighbor_area_id.yfilter)) leaf_name_data.push_back(neighbor_area_id.get_name_leafdata());
    if (neighbor_backup_designated_router_address.is_set || is_set(neighbor_backup_designated_router_address.yfilter)) leaf_name_data.push_back(neighbor_backup_designated_router_address.get_name_leafdata());
    if (neighbor_cost.is_set || is_set(neighbor_cost.yfilter)) leaf_name_data.push_back(neighbor_cost.get_name_leafdata());
    if (neighbor_designated_router_address.is_set || is_set(neighbor_designated_router_address.yfilter)) leaf_name_data.push_back(neighbor_designated_router_address.get_name_leafdata());
    if (neighbor_filter.is_set || is_set(neighbor_filter.yfilter)) leaf_name_data.push_back(neighbor_filter.get_name_leafdata());
    if (neighbor_interface_id.is_set || is_set(neighbor_interface_id.yfilter)) leaf_name_data.push_back(neighbor_interface_id.get_name_leafdata());
    if (neighbor_lls_option.is_set || is_set(neighbor_lls_option.yfilter)) leaf_name_data.push_back(neighbor_lls_option.get_name_leafdata());
    if (neighbor_option.is_set || is_set(neighbor_option.yfilter)) leaf_name_data.push_back(neighbor_option.get_name_leafdata());
    if (next_poll_interval.is_set || is_set(next_poll_interval.yfilter)) leaf_name_data.push_back(next_poll_interval.get_name_leafdata());
    if (nsf_router_state.is_set || is_set(nsf_router_state.yfilter)) leaf_name_data.push_back(nsf_router_state.get_name_leafdata());
    if (oob_resynchronization.is_set || is_set(oob_resynchronization.yfilter)) leaf_name_data.push_back(oob_resynchronization.get_name_leafdata());
    if (pending_events.is_set || is_set(pending_events.yfilter)) leaf_name_data.push_back(pending_events.get_name_leafdata());
    if (poll_interval.is_set || is_set(poll_interval.yfilter)) leaf_name_data.push_back(poll_interval.get_name_leafdata());
    if (state_change_count.is_set || is_set(state_change_count.yfilter)) leaf_name_data.push_back(state_change_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor-bfd-information")
    {
        if(neighbor_bfd_information == nullptr)
        {
            neighbor_bfd_information = std::make_shared<Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborBfdInformation>();
        }
        return neighbor_bfd_information;
    }

    if(child_yang_name == "neighbor-retransmission-information")
    {
        if(neighbor_retransmission_information == nullptr)
        {
            neighbor_retransmission_information = std::make_shared<Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborRetransmissionInformation>();
        }
        return neighbor_retransmission_information;
    }

    if(child_yang_name == "neighbor-summary")
    {
        if(neighbor_summary == nullptr)
        {
            neighbor_summary = std::make_shared<Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborSummary>();
        }
        return neighbor_summary;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail::get_children() const
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

void Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "adjacency-sid-label")
    {
        adjacency_sid_label = value;
        adjacency_sid_label.value_namespace = name_space;
        adjacency_sid_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjacency-sid-protected")
    {
        adjacency_sid_protected = value;
        adjacency_sid_protected.value_namespace = name_space;
        adjacency_sid_protected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjacency-sid-unprotected-label")
    {
        adjacency_sid_unprotected_label = value;
        adjacency_sid_unprotected_label.value_namespace = name_space;
        adjacency_sid_unprotected_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-type")
    {
        interface_type = value;
        interface_type.value_namespace = name_space;
        interface_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-oob-time")
    {
        last_oob_time = value;
        last_oob_time.value_namespace = name_space;
        last_oob_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lfa-interface")
    {
        lfa_interface = value;
        lfa_interface.value_namespace = name_space;
        lfa_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lfa-neighbor-id")
    {
        lfa_neighbor_id = value;
        lfa_neighbor_id.value_namespace = name_space;
        lfa_neighbor_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lfa-neighbor-revision")
    {
        lfa_neighbor_revision = value;
        lfa_neighbor_revision.value_namespace = name_space;
        lfa_neighbor_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lfa-next-hop")
    {
        lfa_next_hop = value;
        lfa_next_hop.value_namespace = name_space;
        lfa_next_hop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-ack-list-count")
    {
        neighbor_ack_list_count = value;
        neighbor_ack_list_count.value_namespace = name_space;
        neighbor_ack_list_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-ack-list-high-watermark")
    {
        neighbor_ack_list_high_watermark = value;
        neighbor_ack_list_high_watermark.value_namespace = name_space;
        neighbor_ack_list_high_watermark.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-area-id")
    {
        neighbor_area_id = value;
        neighbor_area_id.value_namespace = name_space;
        neighbor_area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-backup-designated-router-address")
    {
        neighbor_backup_designated_router_address = value;
        neighbor_backup_designated_router_address.value_namespace = name_space;
        neighbor_backup_designated_router_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-cost")
    {
        neighbor_cost = value;
        neighbor_cost.value_namespace = name_space;
        neighbor_cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-designated-router-address")
    {
        neighbor_designated_router_address = value;
        neighbor_designated_router_address.value_namespace = name_space;
        neighbor_designated_router_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-filter")
    {
        neighbor_filter = value;
        neighbor_filter.value_namespace = name_space;
        neighbor_filter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-interface-id")
    {
        neighbor_interface_id = value;
        neighbor_interface_id.value_namespace = name_space;
        neighbor_interface_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-lls-option")
    {
        neighbor_lls_option = value;
        neighbor_lls_option.value_namespace = name_space;
        neighbor_lls_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-option")
    {
        neighbor_option = value;
        neighbor_option.value_namespace = name_space;
        neighbor_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-poll-interval")
    {
        next_poll_interval = value;
        next_poll_interval.value_namespace = name_space;
        next_poll_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsf-router-state")
    {
        nsf_router_state = value;
        nsf_router_state.value_namespace = name_space;
        nsf_router_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oob-resynchronization")
    {
        oob_resynchronization = value;
        oob_resynchronization.value_namespace = name_space;
        oob_resynchronization.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pending-events")
    {
        pending_events = value;
        pending_events.value_namespace = name_space;
        pending_events.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "poll-interval")
    {
        poll_interval = value;
        poll_interval.value_namespace = name_space;
        poll_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state-change-count")
    {
        state_change_count = value;
        state_change_count.value_namespace = name_space;
        state_change_count.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adjacency-sid-label")
    {
        adjacency_sid_label.yfilter = yfilter;
    }
    if(value_path == "adjacency-sid-protected")
    {
        adjacency_sid_protected.yfilter = yfilter;
    }
    if(value_path == "adjacency-sid-unprotected-label")
    {
        adjacency_sid_unprotected_label.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "interface-type")
    {
        interface_type.yfilter = yfilter;
    }
    if(value_path == "last-oob-time")
    {
        last_oob_time.yfilter = yfilter;
    }
    if(value_path == "lfa-interface")
    {
        lfa_interface.yfilter = yfilter;
    }
    if(value_path == "lfa-neighbor-id")
    {
        lfa_neighbor_id.yfilter = yfilter;
    }
    if(value_path == "lfa-neighbor-revision")
    {
        lfa_neighbor_revision.yfilter = yfilter;
    }
    if(value_path == "lfa-next-hop")
    {
        lfa_next_hop.yfilter = yfilter;
    }
    if(value_path == "neighbor-ack-list-count")
    {
        neighbor_ack_list_count.yfilter = yfilter;
    }
    if(value_path == "neighbor-ack-list-high-watermark")
    {
        neighbor_ack_list_high_watermark.yfilter = yfilter;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "neighbor-area-id")
    {
        neighbor_area_id.yfilter = yfilter;
    }
    if(value_path == "neighbor-backup-designated-router-address")
    {
        neighbor_backup_designated_router_address.yfilter = yfilter;
    }
    if(value_path == "neighbor-cost")
    {
        neighbor_cost.yfilter = yfilter;
    }
    if(value_path == "neighbor-designated-router-address")
    {
        neighbor_designated_router_address.yfilter = yfilter;
    }
    if(value_path == "neighbor-filter")
    {
        neighbor_filter.yfilter = yfilter;
    }
    if(value_path == "neighbor-interface-id")
    {
        neighbor_interface_id.yfilter = yfilter;
    }
    if(value_path == "neighbor-lls-option")
    {
        neighbor_lls_option.yfilter = yfilter;
    }
    if(value_path == "neighbor-option")
    {
        neighbor_option.yfilter = yfilter;
    }
    if(value_path == "next-poll-interval")
    {
        next_poll_interval.yfilter = yfilter;
    }
    if(value_path == "nsf-router-state")
    {
        nsf_router_state.yfilter = yfilter;
    }
    if(value_path == "oob-resynchronization")
    {
        oob_resynchronization.yfilter = yfilter;
    }
    if(value_path == "pending-events")
    {
        pending_events.yfilter = yfilter;
    }
    if(value_path == "poll-interval")
    {
        poll_interval.yfilter = yfilter;
    }
    if(value_path == "state-change-count")
    {
        state_change_count.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-bfd-information" || name == "neighbor-retransmission-information" || name == "neighbor-summary" || name == "adjacency-sid-label" || name == "adjacency-sid-protected" || name == "adjacency-sid-unprotected-label" || name == "interface-name" || name == "interface-type" || name == "last-oob-time" || name == "lfa-interface" || name == "lfa-neighbor-id" || name == "lfa-neighbor-revision" || name == "lfa-next-hop" || name == "neighbor-ack-list-count" || name == "neighbor-ack-list-high-watermark" || name == "neighbor-address" || name == "neighbor-area-id" || name == "neighbor-backup-designated-router-address" || name == "neighbor-cost" || name == "neighbor-designated-router-address" || name == "neighbor-filter" || name == "neighbor-interface-id" || name == "neighbor-lls-option" || name == "neighbor-option" || name == "next-poll-interval" || name == "nsf-router-state" || name == "oob-resynchronization" || name == "pending-events" || name == "poll-interval" || name == "state-change-count")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborBfdInformation::NeighborBfdInformation()
    :
    bfd_intf_enable_mode{YType::uint32, "bfd-intf-enable-mode"},
    bfd_status_flag{YType::uint8, "bfd-status-flag"}
{

    yang_name = "neighbor-bfd-information"; yang_parent_name = "neighbor-detail"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborBfdInformation::~NeighborBfdInformation()
{
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborBfdInformation::has_data() const
{
    return bfd_intf_enable_mode.is_set
	|| bfd_status_flag.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborBfdInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bfd_intf_enable_mode.yfilter)
	|| ydk::is_set(bfd_status_flag.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborBfdInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-bfd-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborBfdInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bfd_intf_enable_mode.is_set || is_set(bfd_intf_enable_mode.yfilter)) leaf_name_data.push_back(bfd_intf_enable_mode.get_name_leafdata());
    if (bfd_status_flag.is_set || is_set(bfd_status_flag.yfilter)) leaf_name_data.push_back(bfd_status_flag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborBfdInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborBfdInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborBfdInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborBfdInformation::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborBfdInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bfd-intf-enable-mode" || name == "bfd-status-flag")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborRetransmissionInformation::NeighborRetransmissionInformation()
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

    yang_name = "neighbor-retransmission-information"; yang_parent_name = "neighbor-detail"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborRetransmissionInformation::~NeighborRetransmissionInformation()
{
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborRetransmissionInformation::has_data() const
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

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborRetransmissionInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(area_first_flood_information.yfilter)
	|| ydk::is_set(area_first_flood_information_index.yfilter)
	|| ydk::is_set(area_flooding_index.yfilter)
	|| ydk::is_set(area_next_flood_information.yfilter)
	|| ydk::is_set(area_next_flood_information_index.yfilter)
	|| ydk::is_set(as_first_flood_information.yfilter)
	|| ydk::is_set(as_first_flood_information_index.yfilter)
	|| ydk::is_set(as_flood_index.yfilter)
	|| ydk::is_set(as_next_flood_information.yfilter)
	|| ydk::is_set(as_next_flood_information_index.yfilter)
	|| ydk::is_set(dbd_retransmission_count.yfilter)
	|| ydk::is_set(dbd_retransmission_total_count.yfilter)
	|| ydk::is_set(last_retransmission_length.yfilter)
	|| ydk::is_set(last_retransmission_time.yfilter)
	|| ydk::is_set(lsa_retransmission_timer.yfilter)
	|| ydk::is_set(maximum_retransmission_length.yfilter)
	|| ydk::is_set(maximum_retransmission_time.yfilter)
	|| ydk::is_set(neighbor_retransmission_count.yfilter)
	|| ydk::is_set(number_of_retransmissions.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborRetransmissionInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-retransmission-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborRetransmissionInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_first_flood_information.is_set || is_set(area_first_flood_information.yfilter)) leaf_name_data.push_back(area_first_flood_information.get_name_leafdata());
    if (area_first_flood_information_index.is_set || is_set(area_first_flood_information_index.yfilter)) leaf_name_data.push_back(area_first_flood_information_index.get_name_leafdata());
    if (area_flooding_index.is_set || is_set(area_flooding_index.yfilter)) leaf_name_data.push_back(area_flooding_index.get_name_leafdata());
    if (area_next_flood_information.is_set || is_set(area_next_flood_information.yfilter)) leaf_name_data.push_back(area_next_flood_information.get_name_leafdata());
    if (area_next_flood_information_index.is_set || is_set(area_next_flood_information_index.yfilter)) leaf_name_data.push_back(area_next_flood_information_index.get_name_leafdata());
    if (as_first_flood_information.is_set || is_set(as_first_flood_information.yfilter)) leaf_name_data.push_back(as_first_flood_information.get_name_leafdata());
    if (as_first_flood_information_index.is_set || is_set(as_first_flood_information_index.yfilter)) leaf_name_data.push_back(as_first_flood_information_index.get_name_leafdata());
    if (as_flood_index.is_set || is_set(as_flood_index.yfilter)) leaf_name_data.push_back(as_flood_index.get_name_leafdata());
    if (as_next_flood_information.is_set || is_set(as_next_flood_information.yfilter)) leaf_name_data.push_back(as_next_flood_information.get_name_leafdata());
    if (as_next_flood_information_index.is_set || is_set(as_next_flood_information_index.yfilter)) leaf_name_data.push_back(as_next_flood_information_index.get_name_leafdata());
    if (dbd_retransmission_count.is_set || is_set(dbd_retransmission_count.yfilter)) leaf_name_data.push_back(dbd_retransmission_count.get_name_leafdata());
    if (dbd_retransmission_total_count.is_set || is_set(dbd_retransmission_total_count.yfilter)) leaf_name_data.push_back(dbd_retransmission_total_count.get_name_leafdata());
    if (last_retransmission_length.is_set || is_set(last_retransmission_length.yfilter)) leaf_name_data.push_back(last_retransmission_length.get_name_leafdata());
    if (last_retransmission_time.is_set || is_set(last_retransmission_time.yfilter)) leaf_name_data.push_back(last_retransmission_time.get_name_leafdata());
    if (lsa_retransmission_timer.is_set || is_set(lsa_retransmission_timer.yfilter)) leaf_name_data.push_back(lsa_retransmission_timer.get_name_leafdata());
    if (maximum_retransmission_length.is_set || is_set(maximum_retransmission_length.yfilter)) leaf_name_data.push_back(maximum_retransmission_length.get_name_leafdata());
    if (maximum_retransmission_time.is_set || is_set(maximum_retransmission_time.yfilter)) leaf_name_data.push_back(maximum_retransmission_time.get_name_leafdata());
    if (neighbor_retransmission_count.is_set || is_set(neighbor_retransmission_count.yfilter)) leaf_name_data.push_back(neighbor_retransmission_count.get_name_leafdata());
    if (number_of_retransmissions.is_set || is_set(number_of_retransmissions.yfilter)) leaf_name_data.push_back(number_of_retransmissions.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborRetransmissionInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborRetransmissionInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborRetransmissionInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "area-flooding-index")
    {
        area_flooding_index = value;
        area_flooding_index.value_namespace = name_space;
        area_flooding_index.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "as-flood-index")
    {
        as_flood_index = value;
        as_flood_index.value_namespace = name_space;
        as_flood_index.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "last-retransmission-length")
    {
        last_retransmission_length = value;
        last_retransmission_length.value_namespace = name_space;
        last_retransmission_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-retransmission-time")
    {
        last_retransmission_time = value;
        last_retransmission_time.value_namespace = name_space;
        last_retransmission_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-retransmission-timer")
    {
        lsa_retransmission_timer = value;
        lsa_retransmission_timer.value_namespace = name_space;
        lsa_retransmission_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-retransmission-length")
    {
        maximum_retransmission_length = value;
        maximum_retransmission_length.value_namespace = name_space;
        maximum_retransmission_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-retransmission-time")
    {
        maximum_retransmission_time = value;
        maximum_retransmission_time.value_namespace = name_space;
        maximum_retransmission_time.value_namespace_prefix = name_space_prefix;
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
}

void Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborRetransmissionInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "area-first-flood-information")
    {
        area_first_flood_information.yfilter = yfilter;
    }
    if(value_path == "area-first-flood-information-index")
    {
        area_first_flood_information_index.yfilter = yfilter;
    }
    if(value_path == "area-flooding-index")
    {
        area_flooding_index.yfilter = yfilter;
    }
    if(value_path == "area-next-flood-information")
    {
        area_next_flood_information.yfilter = yfilter;
    }
    if(value_path == "area-next-flood-information-index")
    {
        area_next_flood_information_index.yfilter = yfilter;
    }
    if(value_path == "as-first-flood-information")
    {
        as_first_flood_information.yfilter = yfilter;
    }
    if(value_path == "as-first-flood-information-index")
    {
        as_first_flood_information_index.yfilter = yfilter;
    }
    if(value_path == "as-flood-index")
    {
        as_flood_index.yfilter = yfilter;
    }
    if(value_path == "as-next-flood-information")
    {
        as_next_flood_information.yfilter = yfilter;
    }
    if(value_path == "as-next-flood-information-index")
    {
        as_next_flood_information_index.yfilter = yfilter;
    }
    if(value_path == "dbd-retransmission-count")
    {
        dbd_retransmission_count.yfilter = yfilter;
    }
    if(value_path == "dbd-retransmission-total-count")
    {
        dbd_retransmission_total_count.yfilter = yfilter;
    }
    if(value_path == "last-retransmission-length")
    {
        last_retransmission_length.yfilter = yfilter;
    }
    if(value_path == "last-retransmission-time")
    {
        last_retransmission_time.yfilter = yfilter;
    }
    if(value_path == "lsa-retransmission-timer")
    {
        lsa_retransmission_timer.yfilter = yfilter;
    }
    if(value_path == "maximum-retransmission-length")
    {
        maximum_retransmission_length.yfilter = yfilter;
    }
    if(value_path == "maximum-retransmission-time")
    {
        maximum_retransmission_time.yfilter = yfilter;
    }
    if(value_path == "neighbor-retransmission-count")
    {
        neighbor_retransmission_count.yfilter = yfilter;
    }
    if(value_path == "number-of-retransmissions")
    {
        number_of_retransmissions.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborRetransmissionInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "area-first-flood-information" || name == "area-first-flood-information-index" || name == "area-flooding-index" || name == "area-next-flood-information" || name == "area-next-flood-information-index" || name == "as-first-flood-information" || name == "as-first-flood-information-index" || name == "as-flood-index" || name == "as-next-flood-information" || name == "as-next-flood-information-index" || name == "dbd-retransmission-count" || name == "dbd-retransmission-total-count" || name == "last-retransmission-length" || name == "last-retransmission-time" || name == "lsa-retransmission-timer" || name == "maximum-retransmission-length" || name == "maximum-retransmission-time" || name == "neighbor-retransmission-count" || name == "number-of-retransmissions")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborSummary::NeighborSummary()
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
    neighbor_bfd_information(std::make_shared<Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborSummary::NeighborBfdInformation>())
{
    neighbor_bfd_information->parent = this;

    yang_name = "neighbor-summary"; yang_parent_name = "neighbor-detail"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborSummary::~NeighborSummary()
{
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborSummary::has_data() const
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

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dr_bdr_state.yfilter)
	|| ydk::is_set(neighbor_address_xr.yfilter)
	|| ydk::is_set(neighbor_dead_timer.yfilter)
	|| ydk::is_set(neighbor_dr_priority.yfilter)
	|| ydk::is_set(neighbor_id.yfilter)
	|| ydk::is_set(neighbor_interface_name.yfilter)
	|| ydk::is_set(neighbor_madj_interface.yfilter)
	|| ydk::is_set(neighbor_state.yfilter)
	|| ydk::is_set(neighbor_up_time.yfilter)
	|| (neighbor_bfd_information !=  nullptr && neighbor_bfd_information->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dr_bdr_state.is_set || is_set(dr_bdr_state.yfilter)) leaf_name_data.push_back(dr_bdr_state.get_name_leafdata());
    if (neighbor_address_xr.is_set || is_set(neighbor_address_xr.yfilter)) leaf_name_data.push_back(neighbor_address_xr.get_name_leafdata());
    if (neighbor_dead_timer.is_set || is_set(neighbor_dead_timer.yfilter)) leaf_name_data.push_back(neighbor_dead_timer.get_name_leafdata());
    if (neighbor_dr_priority.is_set || is_set(neighbor_dr_priority.yfilter)) leaf_name_data.push_back(neighbor_dr_priority.get_name_leafdata());
    if (neighbor_id.is_set || is_set(neighbor_id.yfilter)) leaf_name_data.push_back(neighbor_id.get_name_leafdata());
    if (neighbor_interface_name.is_set || is_set(neighbor_interface_name.yfilter)) leaf_name_data.push_back(neighbor_interface_name.get_name_leafdata());
    if (neighbor_madj_interface.is_set || is_set(neighbor_madj_interface.yfilter)) leaf_name_data.push_back(neighbor_madj_interface.get_name_leafdata());
    if (neighbor_state.is_set || is_set(neighbor_state.yfilter)) leaf_name_data.push_back(neighbor_state.get_name_leafdata());
    if (neighbor_up_time.is_set || is_set(neighbor_up_time.yfilter)) leaf_name_data.push_back(neighbor_up_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor-bfd-information")
    {
        if(neighbor_bfd_information == nullptr)
        {
            neighbor_bfd_information = std::make_shared<Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborSummary::NeighborBfdInformation>();
        }
        return neighbor_bfd_information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(neighbor_bfd_information != nullptr)
    {
        children["neighbor-bfd-information"] = neighbor_bfd_information;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dr-bdr-state")
    {
        dr_bdr_state = value;
        dr_bdr_state.value_namespace = name_space;
        dr_bdr_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-address-xr")
    {
        neighbor_address_xr = value;
        neighbor_address_xr.value_namespace = name_space;
        neighbor_address_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-dead-timer")
    {
        neighbor_dead_timer = value;
        neighbor_dead_timer.value_namespace = name_space;
        neighbor_dead_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-dr-priority")
    {
        neighbor_dr_priority = value;
        neighbor_dr_priority.value_namespace = name_space;
        neighbor_dr_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-id")
    {
        neighbor_id = value;
        neighbor_id.value_namespace = name_space;
        neighbor_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-interface-name")
    {
        neighbor_interface_name = value;
        neighbor_interface_name.value_namespace = name_space;
        neighbor_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-madj-interface")
    {
        neighbor_madj_interface = value;
        neighbor_madj_interface.value_namespace = name_space;
        neighbor_madj_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-state")
    {
        neighbor_state = value;
        neighbor_state.value_namespace = name_space;
        neighbor_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-up-time")
    {
        neighbor_up_time = value;
        neighbor_up_time.value_namespace = name_space;
        neighbor_up_time.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dr-bdr-state")
    {
        dr_bdr_state.yfilter = yfilter;
    }
    if(value_path == "neighbor-address-xr")
    {
        neighbor_address_xr.yfilter = yfilter;
    }
    if(value_path == "neighbor-dead-timer")
    {
        neighbor_dead_timer.yfilter = yfilter;
    }
    if(value_path == "neighbor-dr-priority")
    {
        neighbor_dr_priority.yfilter = yfilter;
    }
    if(value_path == "neighbor-id")
    {
        neighbor_id.yfilter = yfilter;
    }
    if(value_path == "neighbor-interface-name")
    {
        neighbor_interface_name.yfilter = yfilter;
    }
    if(value_path == "neighbor-madj-interface")
    {
        neighbor_madj_interface.yfilter = yfilter;
    }
    if(value_path == "neighbor-state")
    {
        neighbor_state.yfilter = yfilter;
    }
    if(value_path == "neighbor-up-time")
    {
        neighbor_up_time.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-bfd-information" || name == "dr-bdr-state" || name == "neighbor-address-xr" || name == "neighbor-dead-timer" || name == "neighbor-dr-priority" || name == "neighbor-id" || name == "neighbor-interface-name" || name == "neighbor-madj-interface" || name == "neighbor-state" || name == "neighbor-up-time")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborSummary::NeighborBfdInformation::NeighborBfdInformation()
    :
    bfd_intf_enable_mode{YType::uint32, "bfd-intf-enable-mode"},
    bfd_status_flag{YType::uint8, "bfd-status-flag"}
{

    yang_name = "neighbor-bfd-information"; yang_parent_name = "neighbor-summary"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborSummary::NeighborBfdInformation::~NeighborBfdInformation()
{
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborSummary::NeighborBfdInformation::has_data() const
{
    return bfd_intf_enable_mode.is_set
	|| bfd_status_flag.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborSummary::NeighborBfdInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bfd_intf_enable_mode.yfilter)
	|| ydk::is_set(bfd_status_flag.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborSummary::NeighborBfdInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-bfd-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborSummary::NeighborBfdInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bfd_intf_enable_mode.is_set || is_set(bfd_intf_enable_mode.yfilter)) leaf_name_data.push_back(bfd_intf_enable_mode.get_name_leafdata());
    if (bfd_status_flag.is_set || is_set(bfd_status_flag.yfilter)) leaf_name_data.push_back(bfd_status_flag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborSummary::NeighborBfdInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborSummary::NeighborBfdInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborSummary::NeighborBfdInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborSummary::NeighborBfdInformation::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborSummary::NeighborBfdInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bfd-intf-enable-mode" || name == "bfd-status-flag")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Areas::Area::Neighbors::Neighbors()
{

    yang_name = "neighbors"; yang_parent_name = "area"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Areas::Area::Neighbors::~Neighbors()
{
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::Neighbors::has_data() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::Neighbors::has_operation() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Areas::Area::Neighbors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Areas::Area::Neighbors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Areas::Area::Neighbors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::Areas::Area::Neighbors::Neighbor>();
        c->parent = this;
        neighbor.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Areas::Area::Neighbors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : neighbor)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Areas::Area::Neighbors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::DefaultVrf::Areas::Area::Neighbors::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::Neighbors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Areas::Area::Neighbors::Neighbor::Neighbor()
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
    neighbor_bfd_information(std::make_shared<Ospf::Processes::Process::DefaultVrf::Areas::Area::Neighbors::Neighbor::NeighborBfdInformation>())
{
    neighbor_bfd_information->parent = this;

    yang_name = "neighbor"; yang_parent_name = "neighbors"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Areas::Area::Neighbors::Neighbor::~Neighbor()
{
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::Neighbors::Neighbor::has_data() const
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

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::Neighbors::Neighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dr_bdr_state.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(neighbor_address_xr.yfilter)
	|| ydk::is_set(neighbor_dead_timer.yfilter)
	|| ydk::is_set(neighbor_dr_priority.yfilter)
	|| ydk::is_set(neighbor_id.yfilter)
	|| ydk::is_set(neighbor_interface_name.yfilter)
	|| ydk::is_set(neighbor_madj_interface.yfilter)
	|| ydk::is_set(neighbor_state.yfilter)
	|| ydk::is_set(neighbor_up_time.yfilter)
	|| (neighbor_bfd_information !=  nullptr && neighbor_bfd_information->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::Areas::Area::Neighbors::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Areas::Area::Neighbors::Neighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dr_bdr_state.is_set || is_set(dr_bdr_state.yfilter)) leaf_name_data.push_back(dr_bdr_state.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (neighbor_address_xr.is_set || is_set(neighbor_address_xr.yfilter)) leaf_name_data.push_back(neighbor_address_xr.get_name_leafdata());
    if (neighbor_dead_timer.is_set || is_set(neighbor_dead_timer.yfilter)) leaf_name_data.push_back(neighbor_dead_timer.get_name_leafdata());
    if (neighbor_dr_priority.is_set || is_set(neighbor_dr_priority.yfilter)) leaf_name_data.push_back(neighbor_dr_priority.get_name_leafdata());
    if (neighbor_id.is_set || is_set(neighbor_id.yfilter)) leaf_name_data.push_back(neighbor_id.get_name_leafdata());
    if (neighbor_interface_name.is_set || is_set(neighbor_interface_name.yfilter)) leaf_name_data.push_back(neighbor_interface_name.get_name_leafdata());
    if (neighbor_madj_interface.is_set || is_set(neighbor_madj_interface.yfilter)) leaf_name_data.push_back(neighbor_madj_interface.get_name_leafdata());
    if (neighbor_state.is_set || is_set(neighbor_state.yfilter)) leaf_name_data.push_back(neighbor_state.get_name_leafdata());
    if (neighbor_up_time.is_set || is_set(neighbor_up_time.yfilter)) leaf_name_data.push_back(neighbor_up_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Areas::Area::Neighbors::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor-bfd-information")
    {
        if(neighbor_bfd_information == nullptr)
        {
            neighbor_bfd_information = std::make_shared<Ospf::Processes::Process::DefaultVrf::Areas::Area::Neighbors::Neighbor::NeighborBfdInformation>();
        }
        return neighbor_bfd_information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Areas::Area::Neighbors::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(neighbor_bfd_information != nullptr)
    {
        children["neighbor-bfd-information"] = neighbor_bfd_information;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Areas::Area::Neighbors::Neighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dr-bdr-state")
    {
        dr_bdr_state = value;
        dr_bdr_state.value_namespace = name_space;
        dr_bdr_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-address-xr")
    {
        neighbor_address_xr = value;
        neighbor_address_xr.value_namespace = name_space;
        neighbor_address_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-dead-timer")
    {
        neighbor_dead_timer = value;
        neighbor_dead_timer.value_namespace = name_space;
        neighbor_dead_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-dr-priority")
    {
        neighbor_dr_priority = value;
        neighbor_dr_priority.value_namespace = name_space;
        neighbor_dr_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-id")
    {
        neighbor_id = value;
        neighbor_id.value_namespace = name_space;
        neighbor_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-interface-name")
    {
        neighbor_interface_name = value;
        neighbor_interface_name.value_namespace = name_space;
        neighbor_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-madj-interface")
    {
        neighbor_madj_interface = value;
        neighbor_madj_interface.value_namespace = name_space;
        neighbor_madj_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-state")
    {
        neighbor_state = value;
        neighbor_state.value_namespace = name_space;
        neighbor_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-up-time")
    {
        neighbor_up_time = value;
        neighbor_up_time.value_namespace = name_space;
        neighbor_up_time.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Areas::Area::Neighbors::Neighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dr-bdr-state")
    {
        dr_bdr_state.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "neighbor-address-xr")
    {
        neighbor_address_xr.yfilter = yfilter;
    }
    if(value_path == "neighbor-dead-timer")
    {
        neighbor_dead_timer.yfilter = yfilter;
    }
    if(value_path == "neighbor-dr-priority")
    {
        neighbor_dr_priority.yfilter = yfilter;
    }
    if(value_path == "neighbor-id")
    {
        neighbor_id.yfilter = yfilter;
    }
    if(value_path == "neighbor-interface-name")
    {
        neighbor_interface_name.yfilter = yfilter;
    }
    if(value_path == "neighbor-madj-interface")
    {
        neighbor_madj_interface.yfilter = yfilter;
    }
    if(value_path == "neighbor-state")
    {
        neighbor_state.yfilter = yfilter;
    }
    if(value_path == "neighbor-up-time")
    {
        neighbor_up_time.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::Neighbors::Neighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-bfd-information" || name == "dr-bdr-state" || name == "interface-name" || name == "neighbor-address" || name == "neighbor-address-xr" || name == "neighbor-dead-timer" || name == "neighbor-dr-priority" || name == "neighbor-id" || name == "neighbor-interface-name" || name == "neighbor-madj-interface" || name == "neighbor-state" || name == "neighbor-up-time")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Areas::Area::Neighbors::Neighbor::NeighborBfdInformation::NeighborBfdInformation()
    :
    bfd_intf_enable_mode{YType::uint32, "bfd-intf-enable-mode"},
    bfd_status_flag{YType::uint8, "bfd-status-flag"}
{

    yang_name = "neighbor-bfd-information"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Areas::Area::Neighbors::Neighbor::NeighborBfdInformation::~NeighborBfdInformation()
{
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::Neighbors::Neighbor::NeighborBfdInformation::has_data() const
{
    return bfd_intf_enable_mode.is_set
	|| bfd_status_flag.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::Neighbors::Neighbor::NeighborBfdInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bfd_intf_enable_mode.yfilter)
	|| ydk::is_set(bfd_status_flag.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Areas::Area::Neighbors::Neighbor::NeighborBfdInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-bfd-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Areas::Area::Neighbors::Neighbor::NeighborBfdInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bfd_intf_enable_mode.is_set || is_set(bfd_intf_enable_mode.yfilter)) leaf_name_data.push_back(bfd_intf_enable_mode.get_name_leafdata());
    if (bfd_status_flag.is_set || is_set(bfd_status_flag.yfilter)) leaf_name_data.push_back(bfd_status_flag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Areas::Area::Neighbors::Neighbor::NeighborBfdInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Areas::Area::Neighbors::Neighbor::NeighborBfdInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Areas::Area::Neighbors::Neighbor::NeighborBfdInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Ospf::Processes::Process::DefaultVrf::Areas::Area::Neighbors::Neighbor::NeighborBfdInformation::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::Neighbors::Neighbor::NeighborBfdInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bfd-intf-enable-mode" || name == "bfd-status-flag")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Areas::Area::Requests::Requests()
{

    yang_name = "requests"; yang_parent_name = "area"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Areas::Area::Requests::~Requests()
{
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::Requests::has_data() const
{
    for (std::size_t index=0; index<request.size(); index++)
    {
        if(request[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::Requests::has_operation() const
{
    for (std::size_t index=0; index<request.size(); index++)
    {
        if(request[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Areas::Area::Requests::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "requests";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Areas::Area::Requests::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Areas::Area::Requests::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::Areas::Area::Requests::Request>();
        c->parent = this;
        request.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Areas::Area::Requests::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : request)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Areas::Area::Requests::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::DefaultVrf::Areas::Area::Requests::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::Requests::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "request")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Areas::Area::Requests::Request::Request()
    :
    interface_name{YType::str, "interface-name"},
    neighbor_address{YType::str, "neighbor-address"},
    request_interface_name{YType::str, "request-interface-name"},
    request_neighbor_address{YType::str, "request-neighbor-address"},
    request_neighbor_id{YType::str, "request-neighbor-id"}
{

    yang_name = "request"; yang_parent_name = "requests"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Areas::Area::Requests::Request::~Request()
{
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::Requests::Request::has_data() const
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

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::Requests::Request::has_operation() const
{
    for (std::size_t index=0; index<request.size(); index++)
    {
        if(request[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(request_interface_name.yfilter)
	|| ydk::is_set(request_neighbor_address.yfilter)
	|| ydk::is_set(request_neighbor_id.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Areas::Area::Requests::Request::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "request";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Areas::Area::Requests::Request::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (request_interface_name.is_set || is_set(request_interface_name.yfilter)) leaf_name_data.push_back(request_interface_name.get_name_leafdata());
    if (request_neighbor_address.is_set || is_set(request_neighbor_address.yfilter)) leaf_name_data.push_back(request_neighbor_address.get_name_leafdata());
    if (request_neighbor_id.is_set || is_set(request_neighbor_id.yfilter)) leaf_name_data.push_back(request_neighbor_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Areas::Area::Requests::Request::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::Areas::Area::Requests::Request::Request_>();
        c->parent = this;
        request.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Areas::Area::Requests::Request::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : request)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Areas::Area::Requests::Request::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "request-interface-name")
    {
        request_interface_name = value;
        request_interface_name.value_namespace = name_space;
        request_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "request-neighbor-address")
    {
        request_neighbor_address = value;
        request_neighbor_address.value_namespace = name_space;
        request_neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "request-neighbor-id")
    {
        request_neighbor_id = value;
        request_neighbor_id.value_namespace = name_space;
        request_neighbor_id.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Areas::Area::Requests::Request::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "request-interface-name")
    {
        request_interface_name.yfilter = yfilter;
    }
    if(value_path == "request-neighbor-address")
    {
        request_neighbor_address.yfilter = yfilter;
    }
    if(value_path == "request-neighbor-id")
    {
        request_neighbor_id.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::Requests::Request::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "request" || name == "interface-name" || name == "neighbor-address" || name == "request-interface-name" || name == "request-neighbor-address" || name == "request-neighbor-id")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Areas::Area::Requests::Request::Request_::Request_()
    :
    header_advertising_router{YType::str, "header-advertising-router"},
    header_ls_id{YType::str, "header-ls-id"},
    header_lsa_age{YType::uint16, "header-lsa-age"},
    header_lsa_checksum{YType::uint16, "header-lsa-checksum"},
    header_lsa_type{YType::enumeration, "header-lsa-type"},
    header_sequence_number{YType::uint32, "header-sequence-number"}
{

    yang_name = "request"; yang_parent_name = "request"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Areas::Area::Requests::Request::Request_::~Request_()
{
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::Requests::Request::Request_::has_data() const
{
    return header_advertising_router.is_set
	|| header_ls_id.is_set
	|| header_lsa_age.is_set
	|| header_lsa_checksum.is_set
	|| header_lsa_type.is_set
	|| header_sequence_number.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::Requests::Request::Request_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(header_advertising_router.yfilter)
	|| ydk::is_set(header_ls_id.yfilter)
	|| ydk::is_set(header_lsa_age.yfilter)
	|| ydk::is_set(header_lsa_checksum.yfilter)
	|| ydk::is_set(header_lsa_type.yfilter)
	|| ydk::is_set(header_sequence_number.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Areas::Area::Requests::Request::Request_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "request";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Areas::Area::Requests::Request::Request_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (header_advertising_router.is_set || is_set(header_advertising_router.yfilter)) leaf_name_data.push_back(header_advertising_router.get_name_leafdata());
    if (header_ls_id.is_set || is_set(header_ls_id.yfilter)) leaf_name_data.push_back(header_ls_id.get_name_leafdata());
    if (header_lsa_age.is_set || is_set(header_lsa_age.yfilter)) leaf_name_data.push_back(header_lsa_age.get_name_leafdata());
    if (header_lsa_checksum.is_set || is_set(header_lsa_checksum.yfilter)) leaf_name_data.push_back(header_lsa_checksum.get_name_leafdata());
    if (header_lsa_type.is_set || is_set(header_lsa_type.yfilter)) leaf_name_data.push_back(header_lsa_type.get_name_leafdata());
    if (header_sequence_number.is_set || is_set(header_sequence_number.yfilter)) leaf_name_data.push_back(header_sequence_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Areas::Area::Requests::Request::Request_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Areas::Area::Requests::Request::Request_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Areas::Area::Requests::Request::Request_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "header-advertising-router")
    {
        header_advertising_router = value;
        header_advertising_router.value_namespace = name_space;
        header_advertising_router.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "header-ls-id")
    {
        header_ls_id = value;
        header_ls_id.value_namespace = name_space;
        header_ls_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "header-lsa-age")
    {
        header_lsa_age = value;
        header_lsa_age.value_namespace = name_space;
        header_lsa_age.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "header-lsa-checksum")
    {
        header_lsa_checksum = value;
        header_lsa_checksum.value_namespace = name_space;
        header_lsa_checksum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "header-lsa-type")
    {
        header_lsa_type = value;
        header_lsa_type.value_namespace = name_space;
        header_lsa_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "header-sequence-number")
    {
        header_sequence_number = value;
        header_sequence_number.value_namespace = name_space;
        header_sequence_number.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Areas::Area::Requests::Request::Request_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "header-advertising-router")
    {
        header_advertising_router.yfilter = yfilter;
    }
    if(value_path == "header-ls-id")
    {
        header_ls_id.yfilter = yfilter;
    }
    if(value_path == "header-lsa-age")
    {
        header_lsa_age.yfilter = yfilter;
    }
    if(value_path == "header-lsa-checksum")
    {
        header_lsa_checksum.yfilter = yfilter;
    }
    if(value_path == "header-lsa-type")
    {
        header_lsa_type.yfilter = yfilter;
    }
    if(value_path == "header-sequence-number")
    {
        header_sequence_number.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::Requests::Request::Request_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "header-advertising-router" || name == "header-ls-id" || name == "header-lsa-age" || name == "header-lsa-checksum" || name == "header-lsa-type" || name == "header-sequence-number")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Areas::Area::Retransmissions::Retransmissions()
{

    yang_name = "retransmissions"; yang_parent_name = "area"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Areas::Area::Retransmissions::~Retransmissions()
{
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::Retransmissions::has_data() const
{
    for (std::size_t index=0; index<retransmission.size(); index++)
    {
        if(retransmission[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::Retransmissions::has_operation() const
{
    for (std::size_t index=0; index<retransmission.size(); index++)
    {
        if(retransmission[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Areas::Area::Retransmissions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "retransmissions";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Areas::Area::Retransmissions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Areas::Area::Retransmissions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::Areas::Area::Retransmissions::Retransmission>();
        c->parent = this;
        retransmission.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Areas::Area::Retransmissions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : retransmission)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Areas::Area::Retransmissions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::DefaultVrf::Areas::Area::Retransmissions::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::Retransmissions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "retransmission")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Areas::Area::Retransmissions::Retransmission::Retransmission()
    :
    interface_name{YType::str, "interface-name"},
    neighbor_address{YType::str, "neighbor-address"},
    retransmission_count{YType::uint32, "retransmission-count"},
    retransmission_interface_name{YType::str, "retransmission-interface-name"},
    retransmission_neighbor_id{YType::str, "retransmission-neighbor-id"},
    retransmission_neighbor_ip_address{YType::str, "retransmission-neighbor-ip-address"},
    retransmission_timer{YType::uint32, "retransmission-timer"}
{

    yang_name = "retransmission"; yang_parent_name = "retransmissions"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Areas::Area::Retransmissions::Retransmission::~Retransmission()
{
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::Retransmissions::Retransmission::has_data() const
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

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::Retransmissions::Retransmission::has_operation() const
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
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(retransmission_count.yfilter)
	|| ydk::is_set(retransmission_interface_name.yfilter)
	|| ydk::is_set(retransmission_neighbor_id.yfilter)
	|| ydk::is_set(retransmission_neighbor_ip_address.yfilter)
	|| ydk::is_set(retransmission_timer.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Areas::Area::Retransmissions::Retransmission::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "retransmission";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Areas::Area::Retransmissions::Retransmission::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (retransmission_count.is_set || is_set(retransmission_count.yfilter)) leaf_name_data.push_back(retransmission_count.get_name_leafdata());
    if (retransmission_interface_name.is_set || is_set(retransmission_interface_name.yfilter)) leaf_name_data.push_back(retransmission_interface_name.get_name_leafdata());
    if (retransmission_neighbor_id.is_set || is_set(retransmission_neighbor_id.yfilter)) leaf_name_data.push_back(retransmission_neighbor_id.get_name_leafdata());
    if (retransmission_neighbor_ip_address.is_set || is_set(retransmission_neighbor_ip_address.yfilter)) leaf_name_data.push_back(retransmission_neighbor_ip_address.get_name_leafdata());
    if (retransmission_timer.is_set || is_set(retransmission_timer.yfilter)) leaf_name_data.push_back(retransmission_timer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Areas::Area::Retransmissions::Retransmission::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::Areas::Area::Retransmissions::Retransmission::RetransmissionAreaDb>();
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
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::Areas::Area::Retransmissions::Retransmission::RetransmissionAsdb>();
        c->parent = this;
        retransmission_asdb.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Areas::Area::Retransmissions::Retransmission::get_children() const
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

void Ospf::Processes::Process::DefaultVrf::Areas::Area::Retransmissions::Retransmission::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retransmission-count")
    {
        retransmission_count = value;
        retransmission_count.value_namespace = name_space;
        retransmission_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retransmission-interface-name")
    {
        retransmission_interface_name = value;
        retransmission_interface_name.value_namespace = name_space;
        retransmission_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retransmission-neighbor-id")
    {
        retransmission_neighbor_id = value;
        retransmission_neighbor_id.value_namespace = name_space;
        retransmission_neighbor_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retransmission-neighbor-ip-address")
    {
        retransmission_neighbor_ip_address = value;
        retransmission_neighbor_ip_address.value_namespace = name_space;
        retransmission_neighbor_ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retransmission-timer")
    {
        retransmission_timer = value;
        retransmission_timer.value_namespace = name_space;
        retransmission_timer.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Areas::Area::Retransmissions::Retransmission::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "retransmission-count")
    {
        retransmission_count.yfilter = yfilter;
    }
    if(value_path == "retransmission-interface-name")
    {
        retransmission_interface_name.yfilter = yfilter;
    }
    if(value_path == "retransmission-neighbor-id")
    {
        retransmission_neighbor_id.yfilter = yfilter;
    }
    if(value_path == "retransmission-neighbor-ip-address")
    {
        retransmission_neighbor_ip_address.yfilter = yfilter;
    }
    if(value_path == "retransmission-timer")
    {
        retransmission_timer.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::Retransmissions::Retransmission::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "retransmission-area-db" || name == "retransmission-asdb" || name == "interface-name" || name == "neighbor-address" || name == "retransmission-count" || name == "retransmission-interface-name" || name == "retransmission-neighbor-id" || name == "retransmission-neighbor-ip-address" || name == "retransmission-timer")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Areas::Area::Retransmissions::Retransmission::RetransmissionAreaDb::RetransmissionAreaDb()
    :
    header_advertising_router{YType::str, "header-advertising-router"},
    header_ls_id{YType::str, "header-ls-id"},
    header_lsa_age{YType::uint16, "header-lsa-age"},
    header_lsa_checksum{YType::uint16, "header-lsa-checksum"},
    header_lsa_type{YType::enumeration, "header-lsa-type"},
    header_sequence_number{YType::uint32, "header-sequence-number"}
{

    yang_name = "retransmission-area-db"; yang_parent_name = "retransmission"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Areas::Area::Retransmissions::Retransmission::RetransmissionAreaDb::~RetransmissionAreaDb()
{
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::Retransmissions::Retransmission::RetransmissionAreaDb::has_data() const
{
    return header_advertising_router.is_set
	|| header_ls_id.is_set
	|| header_lsa_age.is_set
	|| header_lsa_checksum.is_set
	|| header_lsa_type.is_set
	|| header_sequence_number.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::Retransmissions::Retransmission::RetransmissionAreaDb::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(header_advertising_router.yfilter)
	|| ydk::is_set(header_ls_id.yfilter)
	|| ydk::is_set(header_lsa_age.yfilter)
	|| ydk::is_set(header_lsa_checksum.yfilter)
	|| ydk::is_set(header_lsa_type.yfilter)
	|| ydk::is_set(header_sequence_number.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Areas::Area::Retransmissions::Retransmission::RetransmissionAreaDb::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "retransmission-area-db";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Areas::Area::Retransmissions::Retransmission::RetransmissionAreaDb::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (header_advertising_router.is_set || is_set(header_advertising_router.yfilter)) leaf_name_data.push_back(header_advertising_router.get_name_leafdata());
    if (header_ls_id.is_set || is_set(header_ls_id.yfilter)) leaf_name_data.push_back(header_ls_id.get_name_leafdata());
    if (header_lsa_age.is_set || is_set(header_lsa_age.yfilter)) leaf_name_data.push_back(header_lsa_age.get_name_leafdata());
    if (header_lsa_checksum.is_set || is_set(header_lsa_checksum.yfilter)) leaf_name_data.push_back(header_lsa_checksum.get_name_leafdata());
    if (header_lsa_type.is_set || is_set(header_lsa_type.yfilter)) leaf_name_data.push_back(header_lsa_type.get_name_leafdata());
    if (header_sequence_number.is_set || is_set(header_sequence_number.yfilter)) leaf_name_data.push_back(header_sequence_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Areas::Area::Retransmissions::Retransmission::RetransmissionAreaDb::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Areas::Area::Retransmissions::Retransmission::RetransmissionAreaDb::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Areas::Area::Retransmissions::Retransmission::RetransmissionAreaDb::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "header-advertising-router")
    {
        header_advertising_router = value;
        header_advertising_router.value_namespace = name_space;
        header_advertising_router.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "header-ls-id")
    {
        header_ls_id = value;
        header_ls_id.value_namespace = name_space;
        header_ls_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "header-lsa-age")
    {
        header_lsa_age = value;
        header_lsa_age.value_namespace = name_space;
        header_lsa_age.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "header-lsa-checksum")
    {
        header_lsa_checksum = value;
        header_lsa_checksum.value_namespace = name_space;
        header_lsa_checksum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "header-lsa-type")
    {
        header_lsa_type = value;
        header_lsa_type.value_namespace = name_space;
        header_lsa_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "header-sequence-number")
    {
        header_sequence_number = value;
        header_sequence_number.value_namespace = name_space;
        header_sequence_number.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Areas::Area::Retransmissions::Retransmission::RetransmissionAreaDb::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "header-advertising-router")
    {
        header_advertising_router.yfilter = yfilter;
    }
    if(value_path == "header-ls-id")
    {
        header_ls_id.yfilter = yfilter;
    }
    if(value_path == "header-lsa-age")
    {
        header_lsa_age.yfilter = yfilter;
    }
    if(value_path == "header-lsa-checksum")
    {
        header_lsa_checksum.yfilter = yfilter;
    }
    if(value_path == "header-lsa-type")
    {
        header_lsa_type.yfilter = yfilter;
    }
    if(value_path == "header-sequence-number")
    {
        header_sequence_number.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::Retransmissions::Retransmission::RetransmissionAreaDb::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "header-advertising-router" || name == "header-ls-id" || name == "header-lsa-age" || name == "header-lsa-checksum" || name == "header-lsa-type" || name == "header-sequence-number")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Areas::Area::Retransmissions::Retransmission::RetransmissionAsdb::RetransmissionAsdb()
    :
    header_advertising_router{YType::str, "header-advertising-router"},
    header_ls_id{YType::str, "header-ls-id"},
    header_lsa_age{YType::uint16, "header-lsa-age"},
    header_lsa_checksum{YType::uint16, "header-lsa-checksum"},
    header_lsa_type{YType::enumeration, "header-lsa-type"},
    header_sequence_number{YType::uint32, "header-sequence-number"}
{

    yang_name = "retransmission-asdb"; yang_parent_name = "retransmission"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Areas::Area::Retransmissions::Retransmission::RetransmissionAsdb::~RetransmissionAsdb()
{
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::Retransmissions::Retransmission::RetransmissionAsdb::has_data() const
{
    return header_advertising_router.is_set
	|| header_ls_id.is_set
	|| header_lsa_age.is_set
	|| header_lsa_checksum.is_set
	|| header_lsa_type.is_set
	|| header_sequence_number.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::Retransmissions::Retransmission::RetransmissionAsdb::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(header_advertising_router.yfilter)
	|| ydk::is_set(header_ls_id.yfilter)
	|| ydk::is_set(header_lsa_age.yfilter)
	|| ydk::is_set(header_lsa_checksum.yfilter)
	|| ydk::is_set(header_lsa_type.yfilter)
	|| ydk::is_set(header_sequence_number.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Areas::Area::Retransmissions::Retransmission::RetransmissionAsdb::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "retransmission-asdb";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Areas::Area::Retransmissions::Retransmission::RetransmissionAsdb::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (header_advertising_router.is_set || is_set(header_advertising_router.yfilter)) leaf_name_data.push_back(header_advertising_router.get_name_leafdata());
    if (header_ls_id.is_set || is_set(header_ls_id.yfilter)) leaf_name_data.push_back(header_ls_id.get_name_leafdata());
    if (header_lsa_age.is_set || is_set(header_lsa_age.yfilter)) leaf_name_data.push_back(header_lsa_age.get_name_leafdata());
    if (header_lsa_checksum.is_set || is_set(header_lsa_checksum.yfilter)) leaf_name_data.push_back(header_lsa_checksum.get_name_leafdata());
    if (header_lsa_type.is_set || is_set(header_lsa_type.yfilter)) leaf_name_data.push_back(header_lsa_type.get_name_leafdata());
    if (header_sequence_number.is_set || is_set(header_sequence_number.yfilter)) leaf_name_data.push_back(header_sequence_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Areas::Area::Retransmissions::Retransmission::RetransmissionAsdb::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Areas::Area::Retransmissions::Retransmission::RetransmissionAsdb::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Areas::Area::Retransmissions::Retransmission::RetransmissionAsdb::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "header-advertising-router")
    {
        header_advertising_router = value;
        header_advertising_router.value_namespace = name_space;
        header_advertising_router.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "header-ls-id")
    {
        header_ls_id = value;
        header_ls_id.value_namespace = name_space;
        header_ls_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "header-lsa-age")
    {
        header_lsa_age = value;
        header_lsa_age.value_namespace = name_space;
        header_lsa_age.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "header-lsa-checksum")
    {
        header_lsa_checksum = value;
        header_lsa_checksum.value_namespace = name_space;
        header_lsa_checksum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "header-lsa-type")
    {
        header_lsa_type = value;
        header_lsa_type.value_namespace = name_space;
        header_lsa_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "header-sequence-number")
    {
        header_sequence_number = value;
        header_sequence_number.value_namespace = name_space;
        header_sequence_number.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Areas::Area::Retransmissions::Retransmission::RetransmissionAsdb::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "header-advertising-router")
    {
        header_advertising_router.yfilter = yfilter;
    }
    if(value_path == "header-ls-id")
    {
        header_ls_id.yfilter = yfilter;
    }
    if(value_path == "header-lsa-age")
    {
        header_lsa_age.yfilter = yfilter;
    }
    if(value_path == "header-lsa-checksum")
    {
        header_lsa_checksum.yfilter = yfilter;
    }
    if(value_path == "header-lsa-type")
    {
        header_lsa_type.yfilter = yfilter;
    }
    if(value_path == "header-sequence-number")
    {
        header_sequence_number.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Areas::Area::Retransmissions::Retransmission::RetransmissionAsdb::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "header-advertising-router" || name == "header-ls-id" || name == "header-lsa-age" || name == "header-lsa-checksum" || name == "header-lsa-type" || name == "header-sequence-number")
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
        for(auto const & c : border_router)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
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
    for (auto const & c : border_router)
    {
        children[c->get_segment_path()] = c;
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
        for(auto const & c : border_router_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
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
    for (auto const & c : border_router_path)
    {
        children[c->get_segment_path()] = c;
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
    border_router_area_id{YType::str, "border-router-area-id"},
    border_router_next_hop{YType::str, "border-router-next-hop"},
    border_router_next_hop_interface_name{YType::str, "border-router-next-hop-interface-name"},
    border_router_route_metric{YType::uint32, "border-router-route-metric"},
    border_router_route_type{YType::enumeration, "border-router-route-type"},
    border_router_type{YType::enumeration, "border-router-type"},
    spf_version{YType::uint64, "spf-version"}
{

    yang_name = "border-router-path"; yang_parent_name = "border-router"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::BorderRouters::BorderRouter::BorderRouterPath::~BorderRouterPath()
{
}

bool Ospf::Processes::Process::DefaultVrf::BorderRouters::BorderRouter::BorderRouterPath::has_data() const
{
    return border_router_area_id.is_set
	|| border_router_next_hop.is_set
	|| border_router_next_hop_interface_name.is_set
	|| border_router_route_metric.is_set
	|| border_router_route_type.is_set
	|| border_router_type.is_set
	|| spf_version.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::BorderRouters::BorderRouter::BorderRouterPath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(border_router_area_id.yfilter)
	|| ydk::is_set(border_router_next_hop.yfilter)
	|| ydk::is_set(border_router_next_hop_interface_name.yfilter)
	|| ydk::is_set(border_router_route_metric.yfilter)
	|| ydk::is_set(border_router_route_type.yfilter)
	|| ydk::is_set(border_router_type.yfilter)
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

    if (border_router_area_id.is_set || is_set(border_router_area_id.yfilter)) leaf_name_data.push_back(border_router_area_id.get_name_leafdata());
    if (border_router_next_hop.is_set || is_set(border_router_next_hop.yfilter)) leaf_name_data.push_back(border_router_next_hop.get_name_leafdata());
    if (border_router_next_hop_interface_name.is_set || is_set(border_router_next_hop_interface_name.yfilter)) leaf_name_data.push_back(border_router_next_hop_interface_name.get_name_leafdata());
    if (border_router_route_metric.is_set || is_set(border_router_route_metric.yfilter)) leaf_name_data.push_back(border_router_route_metric.get_name_leafdata());
    if (border_router_route_type.is_set || is_set(border_router_route_type.yfilter)) leaf_name_data.push_back(border_router_route_type.get_name_leafdata());
    if (border_router_type.is_set || is_set(border_router_type.yfilter)) leaf_name_data.push_back(border_router_type.get_name_leafdata());
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
    return children;
}

void Ospf::Processes::Process::DefaultVrf::BorderRouters::BorderRouter::BorderRouterPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "border-router-area-id")
    {
        border_router_area_id = value;
        border_router_area_id.value_namespace = name_space;
        border_router_area_id.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "border-router-route-metric")
    {
        border_router_route_metric = value;
        border_router_route_metric.value_namespace = name_space;
        border_router_route_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "border-router-route-type")
    {
        border_router_route_type = value;
        border_router_route_type.value_namespace = name_space;
        border_router_route_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "border-router-type")
    {
        border_router_type = value;
        border_router_type.value_namespace = name_space;
        border_router_type.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "border-router-area-id")
    {
        border_router_area_id.yfilter = yfilter;
    }
    if(value_path == "border-router-next-hop")
    {
        border_router_next_hop.yfilter = yfilter;
    }
    if(value_path == "border-router-next-hop-interface-name")
    {
        border_router_next_hop_interface_name.yfilter = yfilter;
    }
    if(value_path == "border-router-route-metric")
    {
        border_router_route_metric.yfilter = yfilter;
    }
    if(value_path == "border-router-route-type")
    {
        border_router_route_type.yfilter = yfilter;
    }
    if(value_path == "border-router-type")
    {
        border_router_type.yfilter = yfilter;
    }
    if(value_path == "spf-version")
    {
        spf_version.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::BorderRouters::BorderRouter::BorderRouterPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "border-router-area-id" || name == "border-router-next-hop" || name == "border-router-next-hop-interface-name" || name == "border-router-route-metric" || name == "border-router-route-type" || name == "border-router-type" || name == "spf-version")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::Database()
    :
    database_areas(std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas>())
	,database_summaries(std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::DatabaseSummaries>())
	,database_summary_as(std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::DatabaseSummaryAs>())
	,lsa_summaries(std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::LsaSummaries>())
	,lsas(std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::Lsas>())
{
    database_areas->parent = this;
    database_summaries->parent = this;
    database_summary_as->parent = this;
    lsa_summaries->parent = this;
    lsas->parent = this;

    yang_name = "database"; yang_parent_name = "default-vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::~Database()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::has_data() const
{
    return (database_areas !=  nullptr && database_areas->has_data())
	|| (database_summaries !=  nullptr && database_summaries->has_data())
	|| (database_summary_as !=  nullptr && database_summary_as->has_data())
	|| (lsa_summaries !=  nullptr && lsa_summaries->has_data())
	|| (lsas !=  nullptr && lsas->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::Database::has_operation() const
{
    return is_set(yfilter)
	|| (database_areas !=  nullptr && database_areas->has_operation())
	|| (database_summaries !=  nullptr && database_summaries->has_operation())
	|| (database_summary_as !=  nullptr && database_summary_as->has_operation())
	|| (lsa_summaries !=  nullptr && lsa_summaries->has_operation())
	|| (lsas !=  nullptr && lsas->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::Database::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "database-areas")
    {
        if(database_areas == nullptr)
        {
            database_areas = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas>();
        }
        return database_areas;
    }

    if(child_yang_name == "database-summaries")
    {
        if(database_summaries == nullptr)
        {
            database_summaries = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::DatabaseSummaries>();
        }
        return database_summaries;
    }

    if(child_yang_name == "database-summary-as")
    {
        if(database_summary_as == nullptr)
        {
            database_summary_as = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::DatabaseSummaryAs>();
        }
        return database_summary_as;
    }

    if(child_yang_name == "lsa-summaries")
    {
        if(lsa_summaries == nullptr)
        {
            lsa_summaries = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::LsaSummaries>();
        }
        return lsa_summaries;
    }

    if(child_yang_name == "lsas")
    {
        if(lsas == nullptr)
        {
            lsas = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::Lsas>();
        }
        return lsas;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(database_areas != nullptr)
    {
        children["database-areas"] = database_areas;
    }

    if(database_summaries != nullptr)
    {
        children["database-summaries"] = database_summaries;
    }

    if(database_summary_as != nullptr)
    {
        children["database-summary-as"] = database_summary_as;
    }

    if(lsa_summaries != nullptr)
    {
        children["lsa-summaries"] = lsa_summaries;
    }

    if(lsas != nullptr)
    {
        children["lsas"] = lsas;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::DefaultVrf::Database::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "database-areas" || name == "database-summaries" || name == "database-summary-as" || name == "lsa-summaries" || name == "lsas")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseAreas()
{

    yang_name = "database-areas"; yang_parent_name = "database"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::~DatabaseAreas()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::has_data() const
{
    for (std::size_t index=0; index<database_area.size(); index++)
    {
        if(database_area[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::has_operation() const
{
    for (std::size_t index=0; index<database_area.size(); index++)
    {
        if(database_area[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-areas";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "database-area")
    {
        for(auto const & c : database_area)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea>();
        c->parent = this;
        database_area.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : database_area)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "database-area")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::DatabaseArea()
    :
    area_id{YType::int32, "area-id"}
    	,
    lsa_summaries(std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries>())
	,lsas(std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas>())
{
    lsa_summaries->parent = this;
    lsas->parent = this;

    yang_name = "database-area"; yang_parent_name = "database-areas"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::~DatabaseArea()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::has_data() const
{
    return area_id.is_set
	|| (lsa_summaries !=  nullptr && lsa_summaries->has_data())
	|| (lsas !=  nullptr && lsas->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(area_id.yfilter)
	|| (lsa_summaries !=  nullptr && lsa_summaries->has_operation())
	|| (lsas !=  nullptr && lsas->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-area" <<"[area-id='" <<area_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_id.is_set || is_set(area_id.yfilter)) leaf_name_data.push_back(area_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsa-summaries")
    {
        if(lsa_summaries == nullptr)
        {
            lsa_summaries = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries>();
        }
        return lsa_summaries;
    }

    if(child_yang_name == "lsas")
    {
        if(lsas == nullptr)
        {
            lsas = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas>();
        }
        return lsas;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(lsa_summaries != nullptr)
    {
        children["lsa-summaries"] = lsa_summaries;
    }

    if(lsas != nullptr)
    {
        children["lsas"] = lsas;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "area-id")
    {
        area_id = value;
        area_id.value_namespace = name_space;
        area_id.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "area-id")
    {
        area_id.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsa-summaries" || name == "lsas" || name == "area-id")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::LsaSummaries()
{

    yang_name = "lsa-summaries"; yang_parent_name = "database-area"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::~LsaSummaries()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::has_data() const
{
    for (std::size_t index=0; index<lsa_summary.size(); index++)
    {
        if(lsa_summary[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::has_operation() const
{
    for (std::size_t index=0; index<lsa_summary.size(); index++)
    {
        if(lsa_summary[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-summaries";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsa-summary")
    {
        for(auto const & c : lsa_summary)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::LsaSummary>();
        c->parent = this;
        lsa_summary.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : lsa_summary)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsa-summary")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::LsaSummary::LsaSummary()
    :
    advertising_router{YType::str, "advertising-router"},
    area_id{YType::int32, "area-id"},
    external_tag{YType::uint32, "external-tag"},
    interface_name{YType::str, "interface-name"},
    link_count{YType::uint16, "link-count"},
    ls_id{YType::str, "ls-id"},
    ls_type{YType::enumeration, "ls-type"}
    	,
    lsa_header(std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::LsaSummary::LsaHeader>())
{
    lsa_header->parent = this;

    yang_name = "lsa-summary"; yang_parent_name = "lsa-summaries"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::LsaSummary::~LsaSummary()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::LsaSummary::has_data() const
{
    return advertising_router.is_set
	|| area_id.is_set
	|| external_tag.is_set
	|| interface_name.is_set
	|| link_count.is_set
	|| ls_id.is_set
	|| ls_type.is_set
	|| (lsa_header !=  nullptr && lsa_header->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::LsaSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(advertising_router.yfilter)
	|| ydk::is_set(area_id.yfilter)
	|| ydk::is_set(external_tag.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(link_count.yfilter)
	|| ydk::is_set(ls_id.yfilter)
	|| ydk::is_set(ls_type.yfilter)
	|| (lsa_header !=  nullptr && lsa_header->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::LsaSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::LsaSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (advertising_router.is_set || is_set(advertising_router.yfilter)) leaf_name_data.push_back(advertising_router.get_name_leafdata());
    if (area_id.is_set || is_set(area_id.yfilter)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (external_tag.is_set || is_set(external_tag.yfilter)) leaf_name_data.push_back(external_tag.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (link_count.is_set || is_set(link_count.yfilter)) leaf_name_data.push_back(link_count.get_name_leafdata());
    if (ls_id.is_set || is_set(ls_id.yfilter)) leaf_name_data.push_back(ls_id.get_name_leafdata());
    if (ls_type.is_set || is_set(ls_type.yfilter)) leaf_name_data.push_back(ls_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::LsaSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsa-header")
    {
        if(lsa_header == nullptr)
        {
            lsa_header = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::LsaSummary::LsaHeader>();
        }
        return lsa_header;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::LsaSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(lsa_header != nullptr)
    {
        children["lsa-header"] = lsa_header;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::LsaSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "advertising-router")
    {
        advertising_router = value;
        advertising_router.value_namespace = name_space;
        advertising_router.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-id")
    {
        area_id = value;
        area_id.value_namespace = name_space;
        area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-tag")
    {
        external_tag = value;
        external_tag.value_namespace = name_space;
        external_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-count")
    {
        link_count = value;
        link_count.value_namespace = name_space;
        link_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ls-id")
    {
        ls_id = value;
        ls_id.value_namespace = name_space;
        ls_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ls-type")
    {
        ls_type = value;
        ls_type.value_namespace = name_space;
        ls_type.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::LsaSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "advertising-router")
    {
        advertising_router.yfilter = yfilter;
    }
    if(value_path == "area-id")
    {
        area_id.yfilter = yfilter;
    }
    if(value_path == "external-tag")
    {
        external_tag.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "link-count")
    {
        link_count.yfilter = yfilter;
    }
    if(value_path == "ls-id")
    {
        ls_id.yfilter = yfilter;
    }
    if(value_path == "ls-type")
    {
        ls_type.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::LsaSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsa-header" || name == "advertising-router" || name == "area-id" || name == "external-tag" || name == "interface-name" || name == "link-count" || name == "ls-id" || name == "ls-type")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::LsaSummary::LsaHeader::LsaHeader()
    :
    advertising_router{YType::str, "advertising-router"},
    checksum{YType::uint16, "checksum"},
    dn_age_lsa{YType::boolean, "dn-age-lsa"},
    ls_type{YType::enumeration, "ls-type"},
    lsa_age{YType::uint16, "lsa-age"},
    lsa_area_id{YType::str, "lsa-area-id"},
    lsid{YType::str, "lsid"},
    nsf{YType::boolean, "nsf"},
    sequence_number{YType::uint32, "sequence-number"}
{

    yang_name = "lsa-header"; yang_parent_name = "lsa-summary"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::LsaSummary::LsaHeader::~LsaHeader()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::LsaSummary::LsaHeader::has_data() const
{
    return advertising_router.is_set
	|| checksum.is_set
	|| dn_age_lsa.is_set
	|| ls_type.is_set
	|| lsa_age.is_set
	|| lsa_area_id.is_set
	|| lsid.is_set
	|| nsf.is_set
	|| sequence_number.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::LsaSummary::LsaHeader::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(advertising_router.yfilter)
	|| ydk::is_set(checksum.yfilter)
	|| ydk::is_set(dn_age_lsa.yfilter)
	|| ydk::is_set(ls_type.yfilter)
	|| ydk::is_set(lsa_age.yfilter)
	|| ydk::is_set(lsa_area_id.yfilter)
	|| ydk::is_set(lsid.yfilter)
	|| ydk::is_set(nsf.yfilter)
	|| ydk::is_set(sequence_number.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::LsaSummary::LsaHeader::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-header";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::LsaSummary::LsaHeader::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (advertising_router.is_set || is_set(advertising_router.yfilter)) leaf_name_data.push_back(advertising_router.get_name_leafdata());
    if (checksum.is_set || is_set(checksum.yfilter)) leaf_name_data.push_back(checksum.get_name_leafdata());
    if (dn_age_lsa.is_set || is_set(dn_age_lsa.yfilter)) leaf_name_data.push_back(dn_age_lsa.get_name_leafdata());
    if (ls_type.is_set || is_set(ls_type.yfilter)) leaf_name_data.push_back(ls_type.get_name_leafdata());
    if (lsa_age.is_set || is_set(lsa_age.yfilter)) leaf_name_data.push_back(lsa_age.get_name_leafdata());
    if (lsa_area_id.is_set || is_set(lsa_area_id.yfilter)) leaf_name_data.push_back(lsa_area_id.get_name_leafdata());
    if (lsid.is_set || is_set(lsid.yfilter)) leaf_name_data.push_back(lsid.get_name_leafdata());
    if (nsf.is_set || is_set(nsf.yfilter)) leaf_name_data.push_back(nsf.get_name_leafdata());
    if (sequence_number.is_set || is_set(sequence_number.yfilter)) leaf_name_data.push_back(sequence_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::LsaSummary::LsaHeader::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::LsaSummary::LsaHeader::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::LsaSummary::LsaHeader::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "advertising-router")
    {
        advertising_router = value;
        advertising_router.value_namespace = name_space;
        advertising_router.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "checksum")
    {
        checksum = value;
        checksum.value_namespace = name_space;
        checksum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dn-age-lsa")
    {
        dn_age_lsa = value;
        dn_age_lsa.value_namespace = name_space;
        dn_age_lsa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ls-type")
    {
        ls_type = value;
        ls_type.value_namespace = name_space;
        ls_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-age")
    {
        lsa_age = value;
        lsa_age.value_namespace = name_space;
        lsa_age.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-area-id")
    {
        lsa_area_id = value;
        lsa_area_id.value_namespace = name_space;
        lsa_area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsid")
    {
        lsid = value;
        lsid.value_namespace = name_space;
        lsid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsf")
    {
        nsf = value;
        nsf.value_namespace = name_space;
        nsf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence-number")
    {
        sequence_number = value;
        sequence_number.value_namespace = name_space;
        sequence_number.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::LsaSummary::LsaHeader::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "advertising-router")
    {
        advertising_router.yfilter = yfilter;
    }
    if(value_path == "checksum")
    {
        checksum.yfilter = yfilter;
    }
    if(value_path == "dn-age-lsa")
    {
        dn_age_lsa.yfilter = yfilter;
    }
    if(value_path == "ls-type")
    {
        ls_type.yfilter = yfilter;
    }
    if(value_path == "lsa-age")
    {
        lsa_age.yfilter = yfilter;
    }
    if(value_path == "lsa-area-id")
    {
        lsa_area_id.yfilter = yfilter;
    }
    if(value_path == "lsid")
    {
        lsid.yfilter = yfilter;
    }
    if(value_path == "nsf")
    {
        nsf.yfilter = yfilter;
    }
    if(value_path == "sequence-number")
    {
        sequence_number.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::LsaSummary::LsaHeader::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "advertising-router" || name == "checksum" || name == "dn-age-lsa" || name == "ls-type" || name == "lsa-age" || name == "lsa-area-id" || name == "lsid" || name == "nsf" || name == "sequence-number")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsas()
{

    yang_name = "lsas"; yang_parent_name = "database-area"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::~Lsas()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::has_data() const
{
    for (std::size_t index=0; index<lsa.size(); index++)
    {
        if(lsa[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::has_operation() const
{
    for (std::size_t index=0; index<lsa.size(); index++)
    {
        if(lsa[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsas";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsa")
    {
        for(auto const & c : lsa)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa>();
        c->parent = this;
        lsa.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : lsa)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsa")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::Lsa()
    :
    advertising_router{YType::str, "advertising-router"},
    area_id{YType::int32, "area-id"},
    interface_name{YType::str, "interface-name"},
    ls_id{YType::str, "ls-id"},
    ls_type{YType::enumeration, "ls-type"}
    	,
    lsa_detail_data(std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData>())
	,lsa_header(std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaHeader>())
	,lsa_internal_data(std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData>())
{
    lsa_detail_data->parent = this;
    lsa_header->parent = this;
    lsa_internal_data->parent = this;

    yang_name = "lsa"; yang_parent_name = "lsas"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::~Lsa()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::has_data() const
{
    return advertising_router.is_set
	|| area_id.is_set
	|| interface_name.is_set
	|| ls_id.is_set
	|| ls_type.is_set
	|| (lsa_detail_data !=  nullptr && lsa_detail_data->has_data())
	|| (lsa_header !=  nullptr && lsa_header->has_data())
	|| (lsa_internal_data !=  nullptr && lsa_internal_data->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(advertising_router.yfilter)
	|| ydk::is_set(area_id.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(ls_id.yfilter)
	|| ydk::is_set(ls_type.yfilter)
	|| (lsa_detail_data !=  nullptr && lsa_detail_data->has_operation())
	|| (lsa_header !=  nullptr && lsa_header->has_operation())
	|| (lsa_internal_data !=  nullptr && lsa_internal_data->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (advertising_router.is_set || is_set(advertising_router.yfilter)) leaf_name_data.push_back(advertising_router.get_name_leafdata());
    if (area_id.is_set || is_set(area_id.yfilter)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (ls_id.is_set || is_set(ls_id.yfilter)) leaf_name_data.push_back(ls_id.get_name_leafdata());
    if (ls_type.is_set || is_set(ls_type.yfilter)) leaf_name_data.push_back(ls_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsa-detail-data")
    {
        if(lsa_detail_data == nullptr)
        {
            lsa_detail_data = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData>();
        }
        return lsa_detail_data;
    }

    if(child_yang_name == "lsa-header")
    {
        if(lsa_header == nullptr)
        {
            lsa_header = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaHeader>();
        }
        return lsa_header;
    }

    if(child_yang_name == "lsa-internal-data")
    {
        if(lsa_internal_data == nullptr)
        {
            lsa_internal_data = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData>();
        }
        return lsa_internal_data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(lsa_detail_data != nullptr)
    {
        children["lsa-detail-data"] = lsa_detail_data;
    }

    if(lsa_header != nullptr)
    {
        children["lsa-header"] = lsa_header;
    }

    if(lsa_internal_data != nullptr)
    {
        children["lsa-internal-data"] = lsa_internal_data;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "advertising-router")
    {
        advertising_router = value;
        advertising_router.value_namespace = name_space;
        advertising_router.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-id")
    {
        area_id = value;
        area_id.value_namespace = name_space;
        area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ls-id")
    {
        ls_id = value;
        ls_id.value_namespace = name_space;
        ls_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ls-type")
    {
        ls_type = value;
        ls_type.value_namespace = name_space;
        ls_type.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "advertising-router")
    {
        advertising_router.yfilter = yfilter;
    }
    if(value_path == "area-id")
    {
        area_id.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "ls-id")
    {
        ls_id.yfilter = yfilter;
    }
    if(value_path == "ls-type")
    {
        ls_type.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsa-detail-data" || name == "lsa-header" || name == "lsa-internal-data" || name == "advertising-router" || name == "area-id" || name == "interface-name" || name == "ls-id" || name == "ls-type")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsaDetailData()
    :
    advertising_router_reachable{YType::boolean, "advertising-router-reachable"},
    ase_origin{YType::uint16, "ase-origin"},
    demand_circuit{YType::boolean, "demand-circuit"},
    dn_bit{YType::boolean, "dn-bit"},
    in_sync{YType::uint8, "in-sync"},
    length{YType::uint16, "length"},
    lsa_flood_required_post_fail_over{YType::boolean, "lsa-flood-required-post-fail-over"},
    lsa_prefix_priority{YType::uint8, "lsa-prefix-priority"},
    lsa_rate_limit_due_time{YType::uint32, "lsa-rate-limit-due-time"},
    lsadb_base_clock{YType::uint64, "lsadb-base-clock"},
    new_lsa_prefix_priority{YType::uint8, "new-lsa-prefix-priority"},
    nssa_translation{YType::boolean, "nssa-translation"},
    routing_bit{YType::boolean, "routing-bit"},
    sum_origin{YType::uint16, "sum-origin"},
    tos_capable{YType::boolean, "tos-capable"}
    	,
    lsa_last_updated_time(std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsaLastUpdatedTime>())
	,lsa_throttle_timer(std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsaThrottleTimer>())
	,lsadb_base_time_stamp(std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsadbBaseTimeStamp>())
	,not_delete(std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::NotDelete>())
{
    lsa_last_updated_time->parent = this;
    lsa_throttle_timer->parent = this;
    lsadb_base_time_stamp->parent = this;
    not_delete->parent = this;

    yang_name = "lsa-detail-data"; yang_parent_name = "lsa"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::~LsaDetailData()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::has_data() const
{
    return advertising_router_reachable.is_set
	|| ase_origin.is_set
	|| demand_circuit.is_set
	|| dn_bit.is_set
	|| in_sync.is_set
	|| length.is_set
	|| lsa_flood_required_post_fail_over.is_set
	|| lsa_prefix_priority.is_set
	|| lsa_rate_limit_due_time.is_set
	|| lsadb_base_clock.is_set
	|| new_lsa_prefix_priority.is_set
	|| nssa_translation.is_set
	|| routing_bit.is_set
	|| sum_origin.is_set
	|| tos_capable.is_set
	|| (lsa_last_updated_time !=  nullptr && lsa_last_updated_time->has_data())
	|| (lsa_throttle_timer !=  nullptr && lsa_throttle_timer->has_data())
	|| (lsadb_base_time_stamp !=  nullptr && lsadb_base_time_stamp->has_data())
	|| (not_delete !=  nullptr && not_delete->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(advertising_router_reachable.yfilter)
	|| ydk::is_set(ase_origin.yfilter)
	|| ydk::is_set(demand_circuit.yfilter)
	|| ydk::is_set(dn_bit.yfilter)
	|| ydk::is_set(in_sync.yfilter)
	|| ydk::is_set(length.yfilter)
	|| ydk::is_set(lsa_flood_required_post_fail_over.yfilter)
	|| ydk::is_set(lsa_prefix_priority.yfilter)
	|| ydk::is_set(lsa_rate_limit_due_time.yfilter)
	|| ydk::is_set(lsadb_base_clock.yfilter)
	|| ydk::is_set(new_lsa_prefix_priority.yfilter)
	|| ydk::is_set(nssa_translation.yfilter)
	|| ydk::is_set(routing_bit.yfilter)
	|| ydk::is_set(sum_origin.yfilter)
	|| ydk::is_set(tos_capable.yfilter)
	|| (lsa_last_updated_time !=  nullptr && lsa_last_updated_time->has_operation())
	|| (lsa_throttle_timer !=  nullptr && lsa_throttle_timer->has_operation())
	|| (lsadb_base_time_stamp !=  nullptr && lsadb_base_time_stamp->has_operation())
	|| (not_delete !=  nullptr && not_delete->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-detail-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (advertising_router_reachable.is_set || is_set(advertising_router_reachable.yfilter)) leaf_name_data.push_back(advertising_router_reachable.get_name_leafdata());
    if (ase_origin.is_set || is_set(ase_origin.yfilter)) leaf_name_data.push_back(ase_origin.get_name_leafdata());
    if (demand_circuit.is_set || is_set(demand_circuit.yfilter)) leaf_name_data.push_back(demand_circuit.get_name_leafdata());
    if (dn_bit.is_set || is_set(dn_bit.yfilter)) leaf_name_data.push_back(dn_bit.get_name_leafdata());
    if (in_sync.is_set || is_set(in_sync.yfilter)) leaf_name_data.push_back(in_sync.get_name_leafdata());
    if (length.is_set || is_set(length.yfilter)) leaf_name_data.push_back(length.get_name_leafdata());
    if (lsa_flood_required_post_fail_over.is_set || is_set(lsa_flood_required_post_fail_over.yfilter)) leaf_name_data.push_back(lsa_flood_required_post_fail_over.get_name_leafdata());
    if (lsa_prefix_priority.is_set || is_set(lsa_prefix_priority.yfilter)) leaf_name_data.push_back(lsa_prefix_priority.get_name_leafdata());
    if (lsa_rate_limit_due_time.is_set || is_set(lsa_rate_limit_due_time.yfilter)) leaf_name_data.push_back(lsa_rate_limit_due_time.get_name_leafdata());
    if (lsadb_base_clock.is_set || is_set(lsadb_base_clock.yfilter)) leaf_name_data.push_back(lsadb_base_clock.get_name_leafdata());
    if (new_lsa_prefix_priority.is_set || is_set(new_lsa_prefix_priority.yfilter)) leaf_name_data.push_back(new_lsa_prefix_priority.get_name_leafdata());
    if (nssa_translation.is_set || is_set(nssa_translation.yfilter)) leaf_name_data.push_back(nssa_translation.get_name_leafdata());
    if (routing_bit.is_set || is_set(routing_bit.yfilter)) leaf_name_data.push_back(routing_bit.get_name_leafdata());
    if (sum_origin.is_set || is_set(sum_origin.yfilter)) leaf_name_data.push_back(sum_origin.get_name_leafdata());
    if (tos_capable.is_set || is_set(tos_capable.yfilter)) leaf_name_data.push_back(tos_capable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsa-last-updated-time")
    {
        if(lsa_last_updated_time == nullptr)
        {
            lsa_last_updated_time = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsaLastUpdatedTime>();
        }
        return lsa_last_updated_time;
    }

    if(child_yang_name == "lsa-throttle-timer")
    {
        if(lsa_throttle_timer == nullptr)
        {
            lsa_throttle_timer = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsaThrottleTimer>();
        }
        return lsa_throttle_timer;
    }

    if(child_yang_name == "lsadb-base-time-stamp")
    {
        if(lsadb_base_time_stamp == nullptr)
        {
            lsadb_base_time_stamp = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsadbBaseTimeStamp>();
        }
        return lsadb_base_time_stamp;
    }

    if(child_yang_name == "not-delete")
    {
        if(not_delete == nullptr)
        {
            not_delete = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::NotDelete>();
        }
        return not_delete;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(lsa_last_updated_time != nullptr)
    {
        children["lsa-last-updated-time"] = lsa_last_updated_time;
    }

    if(lsa_throttle_timer != nullptr)
    {
        children["lsa-throttle-timer"] = lsa_throttle_timer;
    }

    if(lsadb_base_time_stamp != nullptr)
    {
        children["lsadb-base-time-stamp"] = lsadb_base_time_stamp;
    }

    if(not_delete != nullptr)
    {
        children["not-delete"] = not_delete;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "advertising-router-reachable")
    {
        advertising_router_reachable = value;
        advertising_router_reachable.value_namespace = name_space;
        advertising_router_reachable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ase-origin")
    {
        ase_origin = value;
        ase_origin.value_namespace = name_space;
        ase_origin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "demand-circuit")
    {
        demand_circuit = value;
        demand_circuit.value_namespace = name_space;
        demand_circuit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dn-bit")
    {
        dn_bit = value;
        dn_bit.value_namespace = name_space;
        dn_bit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-sync")
    {
        in_sync = value;
        in_sync.value_namespace = name_space;
        in_sync.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "length")
    {
        length = value;
        length.value_namespace = name_space;
        length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-flood-required-post-fail-over")
    {
        lsa_flood_required_post_fail_over = value;
        lsa_flood_required_post_fail_over.value_namespace = name_space;
        lsa_flood_required_post_fail_over.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-prefix-priority")
    {
        lsa_prefix_priority = value;
        lsa_prefix_priority.value_namespace = name_space;
        lsa_prefix_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-rate-limit-due-time")
    {
        lsa_rate_limit_due_time = value;
        lsa_rate_limit_due_time.value_namespace = name_space;
        lsa_rate_limit_due_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsadb-base-clock")
    {
        lsadb_base_clock = value;
        lsadb_base_clock.value_namespace = name_space;
        lsadb_base_clock.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "new-lsa-prefix-priority")
    {
        new_lsa_prefix_priority = value;
        new_lsa_prefix_priority.value_namespace = name_space;
        new_lsa_prefix_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-translation")
    {
        nssa_translation = value;
        nssa_translation.value_namespace = name_space;
        nssa_translation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "routing-bit")
    {
        routing_bit = value;
        routing_bit.value_namespace = name_space;
        routing_bit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sum-origin")
    {
        sum_origin = value;
        sum_origin.value_namespace = name_space;
        sum_origin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tos-capable")
    {
        tos_capable = value;
        tos_capable.value_namespace = name_space;
        tos_capable.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "advertising-router-reachable")
    {
        advertising_router_reachable.yfilter = yfilter;
    }
    if(value_path == "ase-origin")
    {
        ase_origin.yfilter = yfilter;
    }
    if(value_path == "demand-circuit")
    {
        demand_circuit.yfilter = yfilter;
    }
    if(value_path == "dn-bit")
    {
        dn_bit.yfilter = yfilter;
    }
    if(value_path == "in-sync")
    {
        in_sync.yfilter = yfilter;
    }
    if(value_path == "length")
    {
        length.yfilter = yfilter;
    }
    if(value_path == "lsa-flood-required-post-fail-over")
    {
        lsa_flood_required_post_fail_over.yfilter = yfilter;
    }
    if(value_path == "lsa-prefix-priority")
    {
        lsa_prefix_priority.yfilter = yfilter;
    }
    if(value_path == "lsa-rate-limit-due-time")
    {
        lsa_rate_limit_due_time.yfilter = yfilter;
    }
    if(value_path == "lsadb-base-clock")
    {
        lsadb_base_clock.yfilter = yfilter;
    }
    if(value_path == "new-lsa-prefix-priority")
    {
        new_lsa_prefix_priority.yfilter = yfilter;
    }
    if(value_path == "nssa-translation")
    {
        nssa_translation.yfilter = yfilter;
    }
    if(value_path == "routing-bit")
    {
        routing_bit.yfilter = yfilter;
    }
    if(value_path == "sum-origin")
    {
        sum_origin.yfilter = yfilter;
    }
    if(value_path == "tos-capable")
    {
        tos_capable.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsa-last-updated-time" || name == "lsa-throttle-timer" || name == "lsadb-base-time-stamp" || name == "not-delete" || name == "advertising-router-reachable" || name == "ase-origin" || name == "demand-circuit" || name == "dn-bit" || name == "in-sync" || name == "length" || name == "lsa-flood-required-post-fail-over" || name == "lsa-prefix-priority" || name == "lsa-rate-limit-due-time" || name == "lsadb-base-clock" || name == "new-lsa-prefix-priority" || name == "nssa-translation" || name == "routing-bit" || name == "sum-origin" || name == "tos-capable")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsaLastUpdatedTime::LsaLastUpdatedTime()
    :
    nanosecond{YType::uint32, "nanosecond"},
    second{YType::uint32, "second"}
{

    yang_name = "lsa-last-updated-time"; yang_parent_name = "lsa-detail-data"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsaLastUpdatedTime::~LsaLastUpdatedTime()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsaLastUpdatedTime::has_data() const
{
    return nanosecond.is_set
	|| second.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsaLastUpdatedTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanosecond.yfilter)
	|| ydk::is_set(second.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsaLastUpdatedTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-last-updated-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsaLastUpdatedTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanosecond.is_set || is_set(nanosecond.yfilter)) leaf_name_data.push_back(nanosecond.get_name_leafdata());
    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsaLastUpdatedTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsaLastUpdatedTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsaLastUpdatedTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nanosecond")
    {
        nanosecond = value;
        nanosecond.value_namespace = name_space;
        nanosecond.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "second")
    {
        second = value;
        second.value_namespace = name_space;
        second.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsaLastUpdatedTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nanosecond")
    {
        nanosecond.yfilter = yfilter;
    }
    if(value_path == "second")
    {
        second.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsaLastUpdatedTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanosecond" || name == "second")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsaThrottleTimer::LsaThrottleTimer()
    :
    last_inst_minute_table_index{YType::uint8, "last-inst-minute-table-index"},
    last_inst_second_table_index{YType::uint8, "last-inst-second-table-index"},
    minute_table_index{YType::uint8, "minute-table-index"},
    second_table_index{YType::uint8, "second-table-index"},
    timer_location{YType::enumeration, "timer-location"},
    timer_type{YType::enumeration, "timer-type"}
{

    yang_name = "lsa-throttle-timer"; yang_parent_name = "lsa-detail-data"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsaThrottleTimer::~LsaThrottleTimer()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsaThrottleTimer::has_data() const
{
    return last_inst_minute_table_index.is_set
	|| last_inst_second_table_index.is_set
	|| minute_table_index.is_set
	|| second_table_index.is_set
	|| timer_location.is_set
	|| timer_type.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsaThrottleTimer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(last_inst_minute_table_index.yfilter)
	|| ydk::is_set(last_inst_second_table_index.yfilter)
	|| ydk::is_set(minute_table_index.yfilter)
	|| ydk::is_set(second_table_index.yfilter)
	|| ydk::is_set(timer_location.yfilter)
	|| ydk::is_set(timer_type.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsaThrottleTimer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-throttle-timer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsaThrottleTimer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (last_inst_minute_table_index.is_set || is_set(last_inst_minute_table_index.yfilter)) leaf_name_data.push_back(last_inst_minute_table_index.get_name_leafdata());
    if (last_inst_second_table_index.is_set || is_set(last_inst_second_table_index.yfilter)) leaf_name_data.push_back(last_inst_second_table_index.get_name_leafdata());
    if (minute_table_index.is_set || is_set(minute_table_index.yfilter)) leaf_name_data.push_back(minute_table_index.get_name_leafdata());
    if (second_table_index.is_set || is_set(second_table_index.yfilter)) leaf_name_data.push_back(second_table_index.get_name_leafdata());
    if (timer_location.is_set || is_set(timer_location.yfilter)) leaf_name_data.push_back(timer_location.get_name_leafdata());
    if (timer_type.is_set || is_set(timer_type.yfilter)) leaf_name_data.push_back(timer_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsaThrottleTimer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsaThrottleTimer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsaThrottleTimer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "last-inst-minute-table-index")
    {
        last_inst_minute_table_index = value;
        last_inst_minute_table_index.value_namespace = name_space;
        last_inst_minute_table_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-inst-second-table-index")
    {
        last_inst_second_table_index = value;
        last_inst_second_table_index.value_namespace = name_space;
        last_inst_second_table_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minute-table-index")
    {
        minute_table_index = value;
        minute_table_index.value_namespace = name_space;
        minute_table_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "second-table-index")
    {
        second_table_index = value;
        second_table_index.value_namespace = name_space;
        second_table_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timer-location")
    {
        timer_location = value;
        timer_location.value_namespace = name_space;
        timer_location.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timer-type")
    {
        timer_type = value;
        timer_type.value_namespace = name_space;
        timer_type.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsaThrottleTimer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "last-inst-minute-table-index")
    {
        last_inst_minute_table_index.yfilter = yfilter;
    }
    if(value_path == "last-inst-second-table-index")
    {
        last_inst_second_table_index.yfilter = yfilter;
    }
    if(value_path == "minute-table-index")
    {
        minute_table_index.yfilter = yfilter;
    }
    if(value_path == "second-table-index")
    {
        second_table_index.yfilter = yfilter;
    }
    if(value_path == "timer-location")
    {
        timer_location.yfilter = yfilter;
    }
    if(value_path == "timer-type")
    {
        timer_type.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsaThrottleTimer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "last-inst-minute-table-index" || name == "last-inst-second-table-index" || name == "minute-table-index" || name == "second-table-index" || name == "timer-location" || name == "timer-type")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsadbBaseTimeStamp::LsadbBaseTimeStamp()
    :
    nanosecond{YType::uint32, "nanosecond"},
    second{YType::uint32, "second"}
{

    yang_name = "lsadb-base-time-stamp"; yang_parent_name = "lsa-detail-data"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsadbBaseTimeStamp::~LsadbBaseTimeStamp()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsadbBaseTimeStamp::has_data() const
{
    return nanosecond.is_set
	|| second.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsadbBaseTimeStamp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanosecond.yfilter)
	|| ydk::is_set(second.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsadbBaseTimeStamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsadb-base-time-stamp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsadbBaseTimeStamp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanosecond.is_set || is_set(nanosecond.yfilter)) leaf_name_data.push_back(nanosecond.get_name_leafdata());
    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsadbBaseTimeStamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsadbBaseTimeStamp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsadbBaseTimeStamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nanosecond")
    {
        nanosecond = value;
        nanosecond.value_namespace = name_space;
        nanosecond.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "second")
    {
        second = value;
        second.value_namespace = name_space;
        second.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsadbBaseTimeStamp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nanosecond")
    {
        nanosecond.yfilter = yfilter;
    }
    if(value_path == "second")
    {
        second.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsadbBaseTimeStamp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanosecond" || name == "second")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::NotDelete::NotDelete()
    :
    acknowledgement{YType::boolean, "acknowledgement"},
    flood_pending{YType::boolean, "flood-pending"},
    free_time{YType::uint32, "free-time"},
    maximum_age{YType::boolean, "maximum-age"},
    neighbor_exchange{YType::boolean, "neighbor-exchange"},
    no_delete{YType::boolean, "no-delete"},
    nsr_ack_pending{YType::boolean, "nsr-ack-pending"},
    nsr_flood_required{YType::boolean, "nsr-flood-required"},
    partial_spf{YType::boolean, "partial-spf"},
    rate_limit{YType::boolean, "rate-limit"},
    routing_table{YType::boolean, "routing-table"},
    sum_orig_pending{YType::boolean, "sum-orig-pending"}
{

    yang_name = "not-delete"; yang_parent_name = "lsa-detail-data"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::NotDelete::~NotDelete()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::NotDelete::has_data() const
{
    return acknowledgement.is_set
	|| flood_pending.is_set
	|| free_time.is_set
	|| maximum_age.is_set
	|| neighbor_exchange.is_set
	|| no_delete.is_set
	|| nsr_ack_pending.is_set
	|| nsr_flood_required.is_set
	|| partial_spf.is_set
	|| rate_limit.is_set
	|| routing_table.is_set
	|| sum_orig_pending.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::NotDelete::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acknowledgement.yfilter)
	|| ydk::is_set(flood_pending.yfilter)
	|| ydk::is_set(free_time.yfilter)
	|| ydk::is_set(maximum_age.yfilter)
	|| ydk::is_set(neighbor_exchange.yfilter)
	|| ydk::is_set(no_delete.yfilter)
	|| ydk::is_set(nsr_ack_pending.yfilter)
	|| ydk::is_set(nsr_flood_required.yfilter)
	|| ydk::is_set(partial_spf.yfilter)
	|| ydk::is_set(rate_limit.yfilter)
	|| ydk::is_set(routing_table.yfilter)
	|| ydk::is_set(sum_orig_pending.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::NotDelete::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "not-delete";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::NotDelete::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acknowledgement.is_set || is_set(acknowledgement.yfilter)) leaf_name_data.push_back(acknowledgement.get_name_leafdata());
    if (flood_pending.is_set || is_set(flood_pending.yfilter)) leaf_name_data.push_back(flood_pending.get_name_leafdata());
    if (free_time.is_set || is_set(free_time.yfilter)) leaf_name_data.push_back(free_time.get_name_leafdata());
    if (maximum_age.is_set || is_set(maximum_age.yfilter)) leaf_name_data.push_back(maximum_age.get_name_leafdata());
    if (neighbor_exchange.is_set || is_set(neighbor_exchange.yfilter)) leaf_name_data.push_back(neighbor_exchange.get_name_leafdata());
    if (no_delete.is_set || is_set(no_delete.yfilter)) leaf_name_data.push_back(no_delete.get_name_leafdata());
    if (nsr_ack_pending.is_set || is_set(nsr_ack_pending.yfilter)) leaf_name_data.push_back(nsr_ack_pending.get_name_leafdata());
    if (nsr_flood_required.is_set || is_set(nsr_flood_required.yfilter)) leaf_name_data.push_back(nsr_flood_required.get_name_leafdata());
    if (partial_spf.is_set || is_set(partial_spf.yfilter)) leaf_name_data.push_back(partial_spf.get_name_leafdata());
    if (rate_limit.is_set || is_set(rate_limit.yfilter)) leaf_name_data.push_back(rate_limit.get_name_leafdata());
    if (routing_table.is_set || is_set(routing_table.yfilter)) leaf_name_data.push_back(routing_table.get_name_leafdata());
    if (sum_orig_pending.is_set || is_set(sum_orig_pending.yfilter)) leaf_name_data.push_back(sum_orig_pending.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::NotDelete::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::NotDelete::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::NotDelete::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acknowledgement")
    {
        acknowledgement = value;
        acknowledgement.value_namespace = name_space;
        acknowledgement.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flood-pending")
    {
        flood_pending = value;
        flood_pending.value_namespace = name_space;
        flood_pending.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "free-time")
    {
        free_time = value;
        free_time.value_namespace = name_space;
        free_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-age")
    {
        maximum_age = value;
        maximum_age.value_namespace = name_space;
        maximum_age.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-exchange")
    {
        neighbor_exchange = value;
        neighbor_exchange.value_namespace = name_space;
        neighbor_exchange.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-delete")
    {
        no_delete = value;
        no_delete.value_namespace = name_space;
        no_delete.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-ack-pending")
    {
        nsr_ack_pending = value;
        nsr_ack_pending.value_namespace = name_space;
        nsr_ack_pending.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-flood-required")
    {
        nsr_flood_required = value;
        nsr_flood_required.value_namespace = name_space;
        nsr_flood_required.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partial-spf")
    {
        partial_spf = value;
        partial_spf.value_namespace = name_space;
        partial_spf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rate-limit")
    {
        rate_limit = value;
        rate_limit.value_namespace = name_space;
        rate_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "routing-table")
    {
        routing_table = value;
        routing_table.value_namespace = name_space;
        routing_table.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sum-orig-pending")
    {
        sum_orig_pending = value;
        sum_orig_pending.value_namespace = name_space;
        sum_orig_pending.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::NotDelete::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acknowledgement")
    {
        acknowledgement.yfilter = yfilter;
    }
    if(value_path == "flood-pending")
    {
        flood_pending.yfilter = yfilter;
    }
    if(value_path == "free-time")
    {
        free_time.yfilter = yfilter;
    }
    if(value_path == "maximum-age")
    {
        maximum_age.yfilter = yfilter;
    }
    if(value_path == "neighbor-exchange")
    {
        neighbor_exchange.yfilter = yfilter;
    }
    if(value_path == "no-delete")
    {
        no_delete.yfilter = yfilter;
    }
    if(value_path == "nsr-ack-pending")
    {
        nsr_ack_pending.yfilter = yfilter;
    }
    if(value_path == "nsr-flood-required")
    {
        nsr_flood_required.yfilter = yfilter;
    }
    if(value_path == "partial-spf")
    {
        partial_spf.yfilter = yfilter;
    }
    if(value_path == "rate-limit")
    {
        rate_limit.yfilter = yfilter;
    }
    if(value_path == "routing-table")
    {
        routing_table.yfilter = yfilter;
    }
    if(value_path == "sum-orig-pending")
    {
        sum_orig_pending.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::NotDelete::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acknowledgement" || name == "flood-pending" || name == "free-time" || name == "maximum-age" || name == "neighbor-exchange" || name == "no-delete" || name == "nsr-ack-pending" || name == "nsr-flood-required" || name == "partial-spf" || name == "rate-limit" || name == "routing-table" || name == "sum-orig-pending")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaHeader::LsaHeader()
    :
    advertising_router{YType::str, "advertising-router"},
    checksum{YType::uint16, "checksum"},
    dn_age_lsa{YType::boolean, "dn-age-lsa"},
    ls_type{YType::enumeration, "ls-type"},
    lsa_age{YType::uint16, "lsa-age"},
    lsa_area_id{YType::str, "lsa-area-id"},
    lsid{YType::str, "lsid"},
    nsf{YType::boolean, "nsf"},
    sequence_number{YType::uint32, "sequence-number"}
{

    yang_name = "lsa-header"; yang_parent_name = "lsa"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaHeader::~LsaHeader()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaHeader::has_data() const
{
    return advertising_router.is_set
	|| checksum.is_set
	|| dn_age_lsa.is_set
	|| ls_type.is_set
	|| lsa_age.is_set
	|| lsa_area_id.is_set
	|| lsid.is_set
	|| nsf.is_set
	|| sequence_number.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaHeader::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(advertising_router.yfilter)
	|| ydk::is_set(checksum.yfilter)
	|| ydk::is_set(dn_age_lsa.yfilter)
	|| ydk::is_set(ls_type.yfilter)
	|| ydk::is_set(lsa_age.yfilter)
	|| ydk::is_set(lsa_area_id.yfilter)
	|| ydk::is_set(lsid.yfilter)
	|| ydk::is_set(nsf.yfilter)
	|| ydk::is_set(sequence_number.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaHeader::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-header";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaHeader::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (advertising_router.is_set || is_set(advertising_router.yfilter)) leaf_name_data.push_back(advertising_router.get_name_leafdata());
    if (checksum.is_set || is_set(checksum.yfilter)) leaf_name_data.push_back(checksum.get_name_leafdata());
    if (dn_age_lsa.is_set || is_set(dn_age_lsa.yfilter)) leaf_name_data.push_back(dn_age_lsa.get_name_leafdata());
    if (ls_type.is_set || is_set(ls_type.yfilter)) leaf_name_data.push_back(ls_type.get_name_leafdata());
    if (lsa_age.is_set || is_set(lsa_age.yfilter)) leaf_name_data.push_back(lsa_age.get_name_leafdata());
    if (lsa_area_id.is_set || is_set(lsa_area_id.yfilter)) leaf_name_data.push_back(lsa_area_id.get_name_leafdata());
    if (lsid.is_set || is_set(lsid.yfilter)) leaf_name_data.push_back(lsid.get_name_leafdata());
    if (nsf.is_set || is_set(nsf.yfilter)) leaf_name_data.push_back(nsf.get_name_leafdata());
    if (sequence_number.is_set || is_set(sequence_number.yfilter)) leaf_name_data.push_back(sequence_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaHeader::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaHeader::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaHeader::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "advertising-router")
    {
        advertising_router = value;
        advertising_router.value_namespace = name_space;
        advertising_router.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "checksum")
    {
        checksum = value;
        checksum.value_namespace = name_space;
        checksum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dn-age-lsa")
    {
        dn_age_lsa = value;
        dn_age_lsa.value_namespace = name_space;
        dn_age_lsa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ls-type")
    {
        ls_type = value;
        ls_type.value_namespace = name_space;
        ls_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-age")
    {
        lsa_age = value;
        lsa_age.value_namespace = name_space;
        lsa_age.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-area-id")
    {
        lsa_area_id = value;
        lsa_area_id.value_namespace = name_space;
        lsa_area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsid")
    {
        lsid = value;
        lsid.value_namespace = name_space;
        lsid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsf")
    {
        nsf = value;
        nsf.value_namespace = name_space;
        nsf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence-number")
    {
        sequence_number = value;
        sequence_number.value_namespace = name_space;
        sequence_number.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaHeader::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "advertising-router")
    {
        advertising_router.yfilter = yfilter;
    }
    if(value_path == "checksum")
    {
        checksum.yfilter = yfilter;
    }
    if(value_path == "dn-age-lsa")
    {
        dn_age_lsa.yfilter = yfilter;
    }
    if(value_path == "ls-type")
    {
        ls_type.yfilter = yfilter;
    }
    if(value_path == "lsa-age")
    {
        lsa_age.yfilter = yfilter;
    }
    if(value_path == "lsa-area-id")
    {
        lsa_area_id.yfilter = yfilter;
    }
    if(value_path == "lsid")
    {
        lsid.yfilter = yfilter;
    }
    if(value_path == "nsf")
    {
        nsf.yfilter = yfilter;
    }
    if(value_path == "sequence-number")
    {
        sequence_number.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaHeader::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "advertising-router" || name == "checksum" || name == "dn-age-lsa" || name == "ls-type" || name == "lsa-age" || name == "lsa-area-id" || name == "lsid" || name == "nsf" || name == "sequence-number")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::LsaInternalData()
    :
    internal_lsa_type{YType::enumeration, "internal-lsa-type"}
    	,
    external_lsa_type(std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::ExternalLsaType>())
	,network_lsa_type(std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::NetworkLsaType>())
	,opaque_el_lsa_type(std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType>())
	,opaque_ep_lsa_type(std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType>())
	,opaque_grace_lsa(std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueGraceLsa>())
	,opaque_link_lsa_type(std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueLinkLsaType>())
	,opaque_mpls_te_lsa_type(std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType>())
	,opaque_router_info_lsa_type(std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType>())
	,router_lsa_type(std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType>())
	,summary_lsa_type(std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::SummaryLsaType>())
{
    external_lsa_type->parent = this;
    network_lsa_type->parent = this;
    opaque_el_lsa_type->parent = this;
    opaque_ep_lsa_type->parent = this;
    opaque_grace_lsa->parent = this;
    opaque_link_lsa_type->parent = this;
    opaque_mpls_te_lsa_type->parent = this;
    opaque_router_info_lsa_type->parent = this;
    router_lsa_type->parent = this;
    summary_lsa_type->parent = this;

    yang_name = "lsa-internal-data"; yang_parent_name = "lsa"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::~LsaInternalData()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::has_data() const
{
    return internal_lsa_type.is_set
	|| (external_lsa_type !=  nullptr && external_lsa_type->has_data())
	|| (network_lsa_type !=  nullptr && network_lsa_type->has_data())
	|| (opaque_el_lsa_type !=  nullptr && opaque_el_lsa_type->has_data())
	|| (opaque_ep_lsa_type !=  nullptr && opaque_ep_lsa_type->has_data())
	|| (opaque_grace_lsa !=  nullptr && opaque_grace_lsa->has_data())
	|| (opaque_link_lsa_type !=  nullptr && opaque_link_lsa_type->has_data())
	|| (opaque_mpls_te_lsa_type !=  nullptr && opaque_mpls_te_lsa_type->has_data())
	|| (opaque_router_info_lsa_type !=  nullptr && opaque_router_info_lsa_type->has_data())
	|| (router_lsa_type !=  nullptr && router_lsa_type->has_data())
	|| (summary_lsa_type !=  nullptr && summary_lsa_type->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(internal_lsa_type.yfilter)
	|| (external_lsa_type !=  nullptr && external_lsa_type->has_operation())
	|| (network_lsa_type !=  nullptr && network_lsa_type->has_operation())
	|| (opaque_el_lsa_type !=  nullptr && opaque_el_lsa_type->has_operation())
	|| (opaque_ep_lsa_type !=  nullptr && opaque_ep_lsa_type->has_operation())
	|| (opaque_grace_lsa !=  nullptr && opaque_grace_lsa->has_operation())
	|| (opaque_link_lsa_type !=  nullptr && opaque_link_lsa_type->has_operation())
	|| (opaque_mpls_te_lsa_type !=  nullptr && opaque_mpls_te_lsa_type->has_operation())
	|| (opaque_router_info_lsa_type !=  nullptr && opaque_router_info_lsa_type->has_operation())
	|| (router_lsa_type !=  nullptr && router_lsa_type->has_operation())
	|| (summary_lsa_type !=  nullptr && summary_lsa_type->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-internal-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (internal_lsa_type.is_set || is_set(internal_lsa_type.yfilter)) leaf_name_data.push_back(internal_lsa_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "external-lsa-type")
    {
        if(external_lsa_type == nullptr)
        {
            external_lsa_type = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::ExternalLsaType>();
        }
        return external_lsa_type;
    }

    if(child_yang_name == "network-lsa-type")
    {
        if(network_lsa_type == nullptr)
        {
            network_lsa_type = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::NetworkLsaType>();
        }
        return network_lsa_type;
    }

    if(child_yang_name == "opaque-el-lsa-type")
    {
        if(opaque_el_lsa_type == nullptr)
        {
            opaque_el_lsa_type = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType>();
        }
        return opaque_el_lsa_type;
    }

    if(child_yang_name == "opaque-ep-lsa-type")
    {
        if(opaque_ep_lsa_type == nullptr)
        {
            opaque_ep_lsa_type = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType>();
        }
        return opaque_ep_lsa_type;
    }

    if(child_yang_name == "opaque-grace-lsa")
    {
        if(opaque_grace_lsa == nullptr)
        {
            opaque_grace_lsa = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueGraceLsa>();
        }
        return opaque_grace_lsa;
    }

    if(child_yang_name == "opaque-link-lsa-type")
    {
        if(opaque_link_lsa_type == nullptr)
        {
            opaque_link_lsa_type = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueLinkLsaType>();
        }
        return opaque_link_lsa_type;
    }

    if(child_yang_name == "opaque-mpls-te-lsa-type")
    {
        if(opaque_mpls_te_lsa_type == nullptr)
        {
            opaque_mpls_te_lsa_type = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType>();
        }
        return opaque_mpls_te_lsa_type;
    }

    if(child_yang_name == "opaque-router-info-lsa-type")
    {
        if(opaque_router_info_lsa_type == nullptr)
        {
            opaque_router_info_lsa_type = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType>();
        }
        return opaque_router_info_lsa_type;
    }

    if(child_yang_name == "router-lsa-type")
    {
        if(router_lsa_type == nullptr)
        {
            router_lsa_type = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType>();
        }
        return router_lsa_type;
    }

    if(child_yang_name == "summary-lsa-type")
    {
        if(summary_lsa_type == nullptr)
        {
            summary_lsa_type = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::SummaryLsaType>();
        }
        return summary_lsa_type;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(external_lsa_type != nullptr)
    {
        children["external-lsa-type"] = external_lsa_type;
    }

    if(network_lsa_type != nullptr)
    {
        children["network-lsa-type"] = network_lsa_type;
    }

    if(opaque_el_lsa_type != nullptr)
    {
        children["opaque-el-lsa-type"] = opaque_el_lsa_type;
    }

    if(opaque_ep_lsa_type != nullptr)
    {
        children["opaque-ep-lsa-type"] = opaque_ep_lsa_type;
    }

    if(opaque_grace_lsa != nullptr)
    {
        children["opaque-grace-lsa"] = opaque_grace_lsa;
    }

    if(opaque_link_lsa_type != nullptr)
    {
        children["opaque-link-lsa-type"] = opaque_link_lsa_type;
    }

    if(opaque_mpls_te_lsa_type != nullptr)
    {
        children["opaque-mpls-te-lsa-type"] = opaque_mpls_te_lsa_type;
    }

    if(opaque_router_info_lsa_type != nullptr)
    {
        children["opaque-router-info-lsa-type"] = opaque_router_info_lsa_type;
    }

    if(router_lsa_type != nullptr)
    {
        children["router-lsa-type"] = router_lsa_type;
    }

    if(summary_lsa_type != nullptr)
    {
        children["summary-lsa-type"] = summary_lsa_type;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "internal-lsa-type")
    {
        internal_lsa_type = value;
        internal_lsa_type.value_namespace = name_space;
        internal_lsa_type.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "internal-lsa-type")
    {
        internal_lsa_type.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "external-lsa-type" || name == "network-lsa-type" || name == "opaque-el-lsa-type" || name == "opaque-ep-lsa-type" || name == "opaque-grace-lsa" || name == "opaque-link-lsa-type" || name == "opaque-mpls-te-lsa-type" || name == "opaque-router-info-lsa-type" || name == "router-lsa-type" || name == "summary-lsa-type" || name == "internal-lsa-type")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::ExternalLsaType::ExternalLsaType()
    :
    external_prefix_length{YType::uint32, "external-prefix-length"},
    internal_external_lsa{YType::boolean, "internal-external-lsa"}
{

    yang_name = "external-lsa-type"; yang_parent_name = "lsa-internal-data"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::ExternalLsaType::~ExternalLsaType()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::ExternalLsaType::has_data() const
{
    for (std::size_t index=0; index<external_tos_metric.size(); index++)
    {
        if(external_tos_metric[index]->has_data())
            return true;
    }
    return external_prefix_length.is_set
	|| internal_external_lsa.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::ExternalLsaType::has_operation() const
{
    for (std::size_t index=0; index<external_tos_metric.size(); index++)
    {
        if(external_tos_metric[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(external_prefix_length.yfilter)
	|| ydk::is_set(internal_external_lsa.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::ExternalLsaType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "external-lsa-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::ExternalLsaType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (external_prefix_length.is_set || is_set(external_prefix_length.yfilter)) leaf_name_data.push_back(external_prefix_length.get_name_leafdata());
    if (internal_external_lsa.is_set || is_set(internal_external_lsa.yfilter)) leaf_name_data.push_back(internal_external_lsa.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::ExternalLsaType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "external-tos-metric")
    {
        for(auto const & c : external_tos_metric)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::ExternalLsaType::ExternalTosMetric>();
        c->parent = this;
        external_tos_metric.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::ExternalLsaType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : external_tos_metric)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::ExternalLsaType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "external-prefix-length")
    {
        external_prefix_length = value;
        external_prefix_length.value_namespace = name_space;
        external_prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internal-external-lsa")
    {
        internal_external_lsa = value;
        internal_external_lsa.value_namespace = name_space;
        internal_external_lsa.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::ExternalLsaType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "external-prefix-length")
    {
        external_prefix_length.yfilter = yfilter;
    }
    if(value_path == "internal-external-lsa")
    {
        internal_external_lsa.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::ExternalLsaType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "external-tos-metric" || name == "external-prefix-length" || name == "internal-external-lsa")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::ExternalLsaType::ExternalTosMetric::ExternalTosMetric()
    :
    external_metric{YType::uint32, "external-metric"},
    external_metric_type{YType::enumeration, "external-metric-type"},
    external_tag{YType::uint32, "external-tag"},
    external_tos{YType::uint32, "external-tos"},
    forwarding_address{YType::str, "forwarding-address"}
{

    yang_name = "external-tos-metric"; yang_parent_name = "external-lsa-type"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::ExternalLsaType::ExternalTosMetric::~ExternalTosMetric()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::ExternalLsaType::ExternalTosMetric::has_data() const
{
    return external_metric.is_set
	|| external_metric_type.is_set
	|| external_tag.is_set
	|| external_tos.is_set
	|| forwarding_address.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::ExternalLsaType::ExternalTosMetric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(external_metric.yfilter)
	|| ydk::is_set(external_metric_type.yfilter)
	|| ydk::is_set(external_tag.yfilter)
	|| ydk::is_set(external_tos.yfilter)
	|| ydk::is_set(forwarding_address.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::ExternalLsaType::ExternalTosMetric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "external-tos-metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::ExternalLsaType::ExternalTosMetric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (external_metric.is_set || is_set(external_metric.yfilter)) leaf_name_data.push_back(external_metric.get_name_leafdata());
    if (external_metric_type.is_set || is_set(external_metric_type.yfilter)) leaf_name_data.push_back(external_metric_type.get_name_leafdata());
    if (external_tag.is_set || is_set(external_tag.yfilter)) leaf_name_data.push_back(external_tag.get_name_leafdata());
    if (external_tos.is_set || is_set(external_tos.yfilter)) leaf_name_data.push_back(external_tos.get_name_leafdata());
    if (forwarding_address.is_set || is_set(forwarding_address.yfilter)) leaf_name_data.push_back(forwarding_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::ExternalLsaType::ExternalTosMetric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::ExternalLsaType::ExternalTosMetric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::ExternalLsaType::ExternalTosMetric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "external-metric")
    {
        external_metric = value;
        external_metric.value_namespace = name_space;
        external_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-metric-type")
    {
        external_metric_type = value;
        external_metric_type.value_namespace = name_space;
        external_metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-tag")
    {
        external_tag = value;
        external_tag.value_namespace = name_space;
        external_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-tos")
    {
        external_tos = value;
        external_tos.value_namespace = name_space;
        external_tos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forwarding-address")
    {
        forwarding_address = value;
        forwarding_address.value_namespace = name_space;
        forwarding_address.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::ExternalLsaType::ExternalTosMetric::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "external-metric")
    {
        external_metric.yfilter = yfilter;
    }
    if(value_path == "external-metric-type")
    {
        external_metric_type.yfilter = yfilter;
    }
    if(value_path == "external-tag")
    {
        external_tag.yfilter = yfilter;
    }
    if(value_path == "external-tos")
    {
        external_tos.yfilter = yfilter;
    }
    if(value_path == "forwarding-address")
    {
        forwarding_address.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::ExternalLsaType::ExternalTosMetric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "external-metric" || name == "external-metric-type" || name == "external-tag" || name == "external-tos" || name == "forwarding-address")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::NetworkLsaType::NetworkLsaType()
    :
    network_prefix_length{YType::uint32, "network-prefix-length"}
{

    yang_name = "network-lsa-type"; yang_parent_name = "lsa-internal-data"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::NetworkLsaType::~NetworkLsaType()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::NetworkLsaType::has_data() const
{
    for (std::size_t index=0; index<neighbor_router.size(); index++)
    {
        if(neighbor_router[index]->has_data())
            return true;
    }
    return network_prefix_length.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::NetworkLsaType::has_operation() const
{
    for (std::size_t index=0; index<neighbor_router.size(); index++)
    {
        if(neighbor_router[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(network_prefix_length.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::NetworkLsaType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network-lsa-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::NetworkLsaType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (network_prefix_length.is_set || is_set(network_prefix_length.yfilter)) leaf_name_data.push_back(network_prefix_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::NetworkLsaType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor-router")
    {
        for(auto const & c : neighbor_router)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::NetworkLsaType::NeighborRouter>();
        c->parent = this;
        neighbor_router.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::NetworkLsaType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : neighbor_router)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::NetworkLsaType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "network-prefix-length")
    {
        network_prefix_length = value;
        network_prefix_length.value_namespace = name_space;
        network_prefix_length.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::NetworkLsaType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "network-prefix-length")
    {
        network_prefix_length.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::NetworkLsaType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-router" || name == "network-prefix-length")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::NetworkLsaType::NeighborRouter::NeighborRouter()
    :
    entry{YType::str, "entry"}
{

    yang_name = "neighbor-router"; yang_parent_name = "network-lsa-type"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::NetworkLsaType::NeighborRouter::~NeighborRouter()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::NetworkLsaType::NeighborRouter::has_data() const
{
    return entry.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::NetworkLsaType::NeighborRouter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::NetworkLsaType::NeighborRouter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-router";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::NetworkLsaType::NeighborRouter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::NetworkLsaType::NeighborRouter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::NetworkLsaType::NeighborRouter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::NetworkLsaType::NeighborRouter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::NetworkLsaType::NeighborRouter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::NetworkLsaType::NeighborRouter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::OpaqueElLsaType()
{

    yang_name = "opaque-el-lsa-type"; yang_parent_name = "lsa-internal-data"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::~OpaqueElLsaType()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::has_data() const
{
    for (std::size_t index=0; index<tlv.size(); index++)
    {
        if(tlv[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::has_operation() const
{
    for (std::size_t index=0; index<tlv.size(); index++)
    {
        if(tlv[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "opaque-el-lsa-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tlv")
    {
        for(auto const & c : tlv)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv>();
        c->parent = this;
        tlv.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : tlv)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tlv")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::Tlv()
    :
    mpls_dste_link{YType::boolean, "mpls-dste-link"},
    mpls_router_id{YType::uint32, "mpls-router-id"},
    tlv_data{YType::str, "tlv-data"},
    tlv_length{YType::uint16, "tlv-length"},
    tlv_type{YType::uint16, "tlv-type"}
{

    yang_name = "tlv"; yang_parent_name = "opaque-el-lsa-type"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::~Tlv()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::has_data() const
{
    for (std::size_t index=0; index<te_link_sub_tlv.size(); index++)
    {
        if(te_link_sub_tlv[index]->has_data())
            return true;
    }
    return mpls_dste_link.is_set
	|| mpls_router_id.is_set
	|| tlv_data.is_set
	|| tlv_length.is_set
	|| tlv_type.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::has_operation() const
{
    for (std::size_t index=0; index<te_link_sub_tlv.size(); index++)
    {
        if(te_link_sub_tlv[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(mpls_dste_link.yfilter)
	|| ydk::is_set(mpls_router_id.yfilter)
	|| ydk::is_set(tlv_data.yfilter)
	|| ydk::is_set(tlv_length.yfilter)
	|| ydk::is_set(tlv_type.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tlv";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mpls_dste_link.is_set || is_set(mpls_dste_link.yfilter)) leaf_name_data.push_back(mpls_dste_link.get_name_leafdata());
    if (mpls_router_id.is_set || is_set(mpls_router_id.yfilter)) leaf_name_data.push_back(mpls_router_id.get_name_leafdata());
    if (tlv_data.is_set || is_set(tlv_data.yfilter)) leaf_name_data.push_back(tlv_data.get_name_leafdata());
    if (tlv_length.is_set || is_set(tlv_length.yfilter)) leaf_name_data.push_back(tlv_length.get_name_leafdata());
    if (tlv_type.is_set || is_set(tlv_type.yfilter)) leaf_name_data.push_back(tlv_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "te-link-sub-tlv")
    {
        for(auto const & c : te_link_sub_tlv)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::TeLinkSubTlv>();
        c->parent = this;
        te_link_sub_tlv.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : te_link_sub_tlv)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mpls-dste-link")
    {
        mpls_dste_link = value;
        mpls_dste_link.value_namespace = name_space;
        mpls_dste_link.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-router-id")
    {
        mpls_router_id = value;
        mpls_router_id.value_namespace = name_space;
        mpls_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tlv-data")
    {
        tlv_data = value;
        tlv_data.value_namespace = name_space;
        tlv_data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tlv-length")
    {
        tlv_length = value;
        tlv_length.value_namespace = name_space;
        tlv_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tlv-type")
    {
        tlv_type = value;
        tlv_type.value_namespace = name_space;
        tlv_type.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mpls-dste-link")
    {
        mpls_dste_link.yfilter = yfilter;
    }
    if(value_path == "mpls-router-id")
    {
        mpls_router_id.yfilter = yfilter;
    }
    if(value_path == "tlv-data")
    {
        tlv_data.yfilter = yfilter;
    }
    if(value_path == "tlv-length")
    {
        tlv_length.yfilter = yfilter;
    }
    if(value_path == "tlv-type")
    {
        tlv_type.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "te-link-sub-tlv" || name == "mpls-dste-link" || name == "mpls-router-id" || name == "tlv-data" || name == "tlv-length" || name == "tlv-type")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::TeLinkSubTlv::TeLinkSubTlv()
    :
    sub_tlv_length{YType::uint16, "sub-tlv-length"},
    sub_tlv_type{YType::enumeration, "sub-tlv-type"},
    sub_tlv_value{YType::str, "sub-tlv-value"}
{

    yang_name = "te-link-sub-tlv"; yang_parent_name = "tlv"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::TeLinkSubTlv::~TeLinkSubTlv()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::TeLinkSubTlv::has_data() const
{
    return sub_tlv_length.is_set
	|| sub_tlv_type.is_set
	|| sub_tlv_value.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::TeLinkSubTlv::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sub_tlv_length.yfilter)
	|| ydk::is_set(sub_tlv_type.yfilter)
	|| ydk::is_set(sub_tlv_value.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::TeLinkSubTlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-link-sub-tlv";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::TeLinkSubTlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sub_tlv_length.is_set || is_set(sub_tlv_length.yfilter)) leaf_name_data.push_back(sub_tlv_length.get_name_leafdata());
    if (sub_tlv_type.is_set || is_set(sub_tlv_type.yfilter)) leaf_name_data.push_back(sub_tlv_type.get_name_leafdata());
    if (sub_tlv_value.is_set || is_set(sub_tlv_value.yfilter)) leaf_name_data.push_back(sub_tlv_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::TeLinkSubTlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::TeLinkSubTlv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::TeLinkSubTlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sub-tlv-length")
    {
        sub_tlv_length = value;
        sub_tlv_length.value_namespace = name_space;
        sub_tlv_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-tlv-type")
    {
        sub_tlv_type = value;
        sub_tlv_type.value_namespace = name_space;
        sub_tlv_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-tlv-value")
    {
        sub_tlv_value = value;
        sub_tlv_value.value_namespace = name_space;
        sub_tlv_value.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::TeLinkSubTlv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sub-tlv-length")
    {
        sub_tlv_length.yfilter = yfilter;
    }
    if(value_path == "sub-tlv-type")
    {
        sub_tlv_type.yfilter = yfilter;
    }
    if(value_path == "sub-tlv-value")
    {
        sub_tlv_value.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::TeLinkSubTlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sub-tlv-length" || name == "sub-tlv-type" || name == "sub-tlv-value")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::OpaqueEpLsaType()
{

    yang_name = "opaque-ep-lsa-type"; yang_parent_name = "lsa-internal-data"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::~OpaqueEpLsaType()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::has_data() const
{
    for (std::size_t index=0; index<tlv.size(); index++)
    {
        if(tlv[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::has_operation() const
{
    for (std::size_t index=0; index<tlv.size(); index++)
    {
        if(tlv[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "opaque-ep-lsa-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tlv")
    {
        for(auto const & c : tlv)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv>();
        c->parent = this;
        tlv.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : tlv)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tlv")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::Tlv()
    :
    mpls_dste_link{YType::boolean, "mpls-dste-link"},
    mpls_router_id{YType::uint32, "mpls-router-id"},
    tlv_data{YType::str, "tlv-data"},
    tlv_length{YType::uint16, "tlv-length"},
    tlv_type{YType::uint16, "tlv-type"}
{

    yang_name = "tlv"; yang_parent_name = "opaque-ep-lsa-type"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::~Tlv()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::has_data() const
{
    for (std::size_t index=0; index<te_link_sub_tlv.size(); index++)
    {
        if(te_link_sub_tlv[index]->has_data())
            return true;
    }
    return mpls_dste_link.is_set
	|| mpls_router_id.is_set
	|| tlv_data.is_set
	|| tlv_length.is_set
	|| tlv_type.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::has_operation() const
{
    for (std::size_t index=0; index<te_link_sub_tlv.size(); index++)
    {
        if(te_link_sub_tlv[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(mpls_dste_link.yfilter)
	|| ydk::is_set(mpls_router_id.yfilter)
	|| ydk::is_set(tlv_data.yfilter)
	|| ydk::is_set(tlv_length.yfilter)
	|| ydk::is_set(tlv_type.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tlv";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mpls_dste_link.is_set || is_set(mpls_dste_link.yfilter)) leaf_name_data.push_back(mpls_dste_link.get_name_leafdata());
    if (mpls_router_id.is_set || is_set(mpls_router_id.yfilter)) leaf_name_data.push_back(mpls_router_id.get_name_leafdata());
    if (tlv_data.is_set || is_set(tlv_data.yfilter)) leaf_name_data.push_back(tlv_data.get_name_leafdata());
    if (tlv_length.is_set || is_set(tlv_length.yfilter)) leaf_name_data.push_back(tlv_length.get_name_leafdata());
    if (tlv_type.is_set || is_set(tlv_type.yfilter)) leaf_name_data.push_back(tlv_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "te-link-sub-tlv")
    {
        for(auto const & c : te_link_sub_tlv)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::TeLinkSubTlv>();
        c->parent = this;
        te_link_sub_tlv.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : te_link_sub_tlv)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mpls-dste-link")
    {
        mpls_dste_link = value;
        mpls_dste_link.value_namespace = name_space;
        mpls_dste_link.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-router-id")
    {
        mpls_router_id = value;
        mpls_router_id.value_namespace = name_space;
        mpls_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tlv-data")
    {
        tlv_data = value;
        tlv_data.value_namespace = name_space;
        tlv_data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tlv-length")
    {
        tlv_length = value;
        tlv_length.value_namespace = name_space;
        tlv_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tlv-type")
    {
        tlv_type = value;
        tlv_type.value_namespace = name_space;
        tlv_type.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mpls-dste-link")
    {
        mpls_dste_link.yfilter = yfilter;
    }
    if(value_path == "mpls-router-id")
    {
        mpls_router_id.yfilter = yfilter;
    }
    if(value_path == "tlv-data")
    {
        tlv_data.yfilter = yfilter;
    }
    if(value_path == "tlv-length")
    {
        tlv_length.yfilter = yfilter;
    }
    if(value_path == "tlv-type")
    {
        tlv_type.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "te-link-sub-tlv" || name == "mpls-dste-link" || name == "mpls-router-id" || name == "tlv-data" || name == "tlv-length" || name == "tlv-type")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::TeLinkSubTlv::TeLinkSubTlv()
    :
    sub_tlv_length{YType::uint16, "sub-tlv-length"},
    sub_tlv_type{YType::enumeration, "sub-tlv-type"},
    sub_tlv_value{YType::str, "sub-tlv-value"}
{

    yang_name = "te-link-sub-tlv"; yang_parent_name = "tlv"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::TeLinkSubTlv::~TeLinkSubTlv()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::TeLinkSubTlv::has_data() const
{
    return sub_tlv_length.is_set
	|| sub_tlv_type.is_set
	|| sub_tlv_value.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::TeLinkSubTlv::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sub_tlv_length.yfilter)
	|| ydk::is_set(sub_tlv_type.yfilter)
	|| ydk::is_set(sub_tlv_value.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::TeLinkSubTlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-link-sub-tlv";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::TeLinkSubTlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sub_tlv_length.is_set || is_set(sub_tlv_length.yfilter)) leaf_name_data.push_back(sub_tlv_length.get_name_leafdata());
    if (sub_tlv_type.is_set || is_set(sub_tlv_type.yfilter)) leaf_name_data.push_back(sub_tlv_type.get_name_leafdata());
    if (sub_tlv_value.is_set || is_set(sub_tlv_value.yfilter)) leaf_name_data.push_back(sub_tlv_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::TeLinkSubTlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::TeLinkSubTlv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::TeLinkSubTlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sub-tlv-length")
    {
        sub_tlv_length = value;
        sub_tlv_length.value_namespace = name_space;
        sub_tlv_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-tlv-type")
    {
        sub_tlv_type = value;
        sub_tlv_type.value_namespace = name_space;
        sub_tlv_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-tlv-value")
    {
        sub_tlv_value = value;
        sub_tlv_value.value_namespace = name_space;
        sub_tlv_value.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::TeLinkSubTlv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sub-tlv-length")
    {
        sub_tlv_length.yfilter = yfilter;
    }
    if(value_path == "sub-tlv-type")
    {
        sub_tlv_type.yfilter = yfilter;
    }
    if(value_path == "sub-tlv-value")
    {
        sub_tlv_value.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::TeLinkSubTlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sub-tlv-length" || name == "sub-tlv-type" || name == "sub-tlv-value")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueGraceLsa::OpaqueGraceLsa()
    :
    grace_period{YType::uint32, "grace-period"},
    grace_reason{YType::enumeration, "grace-reason"},
    ip_address{YType::str, "ip-address"}
{

    yang_name = "opaque-grace-lsa"; yang_parent_name = "lsa-internal-data"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueGraceLsa::~OpaqueGraceLsa()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueGraceLsa::has_data() const
{
    return grace_period.is_set
	|| grace_reason.is_set
	|| ip_address.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueGraceLsa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(grace_period.yfilter)
	|| ydk::is_set(grace_reason.yfilter)
	|| ydk::is_set(ip_address.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueGraceLsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "opaque-grace-lsa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueGraceLsa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (grace_period.is_set || is_set(grace_period.yfilter)) leaf_name_data.push_back(grace_period.get_name_leafdata());
    if (grace_reason.is_set || is_set(grace_reason.yfilter)) leaf_name_data.push_back(grace_reason.get_name_leafdata());
    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueGraceLsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueGraceLsa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueGraceLsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "grace-period")
    {
        grace_period = value;
        grace_period.value_namespace = name_space;
        grace_period.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grace-reason")
    {
        grace_reason = value;
        grace_reason.value_namespace = name_space;
        grace_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-address")
    {
        ip_address = value;
        ip_address.value_namespace = name_space;
        ip_address.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueGraceLsa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "grace-period")
    {
        grace_period.yfilter = yfilter;
    }
    if(value_path == "grace-reason")
    {
        grace_reason.yfilter = yfilter;
    }
    if(value_path == "ip-address")
    {
        ip_address.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueGraceLsa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "grace-period" || name == "grace-reason" || name == "ip-address")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueLinkLsaType::OpaqueLinkLsaType()
    :
    opaque_interface_name{YType::str, "opaque-interface-name"}
{

    yang_name = "opaque-link-lsa-type"; yang_parent_name = "lsa-internal-data"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueLinkLsaType::~OpaqueLinkLsaType()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueLinkLsaType::has_data() const
{
    return opaque_interface_name.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueLinkLsaType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(opaque_interface_name.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueLinkLsaType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "opaque-link-lsa-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueLinkLsaType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (opaque_interface_name.is_set || is_set(opaque_interface_name.yfilter)) leaf_name_data.push_back(opaque_interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueLinkLsaType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueLinkLsaType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueLinkLsaType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "opaque-interface-name")
    {
        opaque_interface_name = value;
        opaque_interface_name.value_namespace = name_space;
        opaque_interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueLinkLsaType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "opaque-interface-name")
    {
        opaque_interface_name.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueLinkLsaType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "opaque-interface-name")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::OpaqueMplsTeLsaType()
{

    yang_name = "opaque-mpls-te-lsa-type"; yang_parent_name = "lsa-internal-data"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::~OpaqueMplsTeLsaType()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::has_data() const
{
    for (std::size_t index=0; index<tlv.size(); index++)
    {
        if(tlv[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::has_operation() const
{
    for (std::size_t index=0; index<tlv.size(); index++)
    {
        if(tlv[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "opaque-mpls-te-lsa-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tlv")
    {
        for(auto const & c : tlv)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv>();
        c->parent = this;
        tlv.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : tlv)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tlv")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::Tlv()
    :
    mpls_dste_link{YType::boolean, "mpls-dste-link"},
    mpls_router_id{YType::uint32, "mpls-router-id"},
    tlv_data{YType::str, "tlv-data"},
    tlv_length{YType::uint16, "tlv-length"},
    tlv_type{YType::uint16, "tlv-type"}
{

    yang_name = "tlv"; yang_parent_name = "opaque-mpls-te-lsa-type"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::~Tlv()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::has_data() const
{
    for (std::size_t index=0; index<te_link_sub_tlv.size(); index++)
    {
        if(te_link_sub_tlv[index]->has_data())
            return true;
    }
    return mpls_dste_link.is_set
	|| mpls_router_id.is_set
	|| tlv_data.is_set
	|| tlv_length.is_set
	|| tlv_type.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::has_operation() const
{
    for (std::size_t index=0; index<te_link_sub_tlv.size(); index++)
    {
        if(te_link_sub_tlv[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(mpls_dste_link.yfilter)
	|| ydk::is_set(mpls_router_id.yfilter)
	|| ydk::is_set(tlv_data.yfilter)
	|| ydk::is_set(tlv_length.yfilter)
	|| ydk::is_set(tlv_type.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tlv";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mpls_dste_link.is_set || is_set(mpls_dste_link.yfilter)) leaf_name_data.push_back(mpls_dste_link.get_name_leafdata());
    if (mpls_router_id.is_set || is_set(mpls_router_id.yfilter)) leaf_name_data.push_back(mpls_router_id.get_name_leafdata());
    if (tlv_data.is_set || is_set(tlv_data.yfilter)) leaf_name_data.push_back(tlv_data.get_name_leafdata());
    if (tlv_length.is_set || is_set(tlv_length.yfilter)) leaf_name_data.push_back(tlv_length.get_name_leafdata());
    if (tlv_type.is_set || is_set(tlv_type.yfilter)) leaf_name_data.push_back(tlv_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "te-link-sub-tlv")
    {
        for(auto const & c : te_link_sub_tlv)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::TeLinkSubTlv>();
        c->parent = this;
        te_link_sub_tlv.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : te_link_sub_tlv)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mpls-dste-link")
    {
        mpls_dste_link = value;
        mpls_dste_link.value_namespace = name_space;
        mpls_dste_link.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-router-id")
    {
        mpls_router_id = value;
        mpls_router_id.value_namespace = name_space;
        mpls_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tlv-data")
    {
        tlv_data = value;
        tlv_data.value_namespace = name_space;
        tlv_data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tlv-length")
    {
        tlv_length = value;
        tlv_length.value_namespace = name_space;
        tlv_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tlv-type")
    {
        tlv_type = value;
        tlv_type.value_namespace = name_space;
        tlv_type.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mpls-dste-link")
    {
        mpls_dste_link.yfilter = yfilter;
    }
    if(value_path == "mpls-router-id")
    {
        mpls_router_id.yfilter = yfilter;
    }
    if(value_path == "tlv-data")
    {
        tlv_data.yfilter = yfilter;
    }
    if(value_path == "tlv-length")
    {
        tlv_length.yfilter = yfilter;
    }
    if(value_path == "tlv-type")
    {
        tlv_type.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "te-link-sub-tlv" || name == "mpls-dste-link" || name == "mpls-router-id" || name == "tlv-data" || name == "tlv-length" || name == "tlv-type")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::TeLinkSubTlv::TeLinkSubTlv()
    :
    sub_tlv_length{YType::uint16, "sub-tlv-length"},
    sub_tlv_type{YType::enumeration, "sub-tlv-type"},
    sub_tlv_value{YType::str, "sub-tlv-value"}
{

    yang_name = "te-link-sub-tlv"; yang_parent_name = "tlv"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::TeLinkSubTlv::~TeLinkSubTlv()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::TeLinkSubTlv::has_data() const
{
    return sub_tlv_length.is_set
	|| sub_tlv_type.is_set
	|| sub_tlv_value.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::TeLinkSubTlv::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sub_tlv_length.yfilter)
	|| ydk::is_set(sub_tlv_type.yfilter)
	|| ydk::is_set(sub_tlv_value.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::TeLinkSubTlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-link-sub-tlv";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::TeLinkSubTlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sub_tlv_length.is_set || is_set(sub_tlv_length.yfilter)) leaf_name_data.push_back(sub_tlv_length.get_name_leafdata());
    if (sub_tlv_type.is_set || is_set(sub_tlv_type.yfilter)) leaf_name_data.push_back(sub_tlv_type.get_name_leafdata());
    if (sub_tlv_value.is_set || is_set(sub_tlv_value.yfilter)) leaf_name_data.push_back(sub_tlv_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::TeLinkSubTlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::TeLinkSubTlv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::TeLinkSubTlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sub-tlv-length")
    {
        sub_tlv_length = value;
        sub_tlv_length.value_namespace = name_space;
        sub_tlv_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-tlv-type")
    {
        sub_tlv_type = value;
        sub_tlv_type.value_namespace = name_space;
        sub_tlv_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-tlv-value")
    {
        sub_tlv_value = value;
        sub_tlv_value.value_namespace = name_space;
        sub_tlv_value.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::TeLinkSubTlv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sub-tlv-length")
    {
        sub_tlv_length.yfilter = yfilter;
    }
    if(value_path == "sub-tlv-type")
    {
        sub_tlv_type.yfilter = yfilter;
    }
    if(value_path == "sub-tlv-value")
    {
        sub_tlv_value.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::TeLinkSubTlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sub-tlv-length" || name == "sub-tlv-type" || name == "sub-tlv-value")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRouterInfoLsaType()
    :
    opaque_ri_interface_name{YType::str, "opaque-ri-interface-name"},
    opaque_rilsa_scope{YType::enumeration, "opaque-rilsa-scope"}
{

    yang_name = "opaque-router-info-lsa-type"; yang_parent_name = "lsa-internal-data"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::~OpaqueRouterInfoLsaType()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::has_data() const
{
    for (std::size_t index=0; index<opaque_ritlv.size(); index++)
    {
        if(opaque_ritlv[index]->has_data())
            return true;
    }
    return opaque_ri_interface_name.is_set
	|| opaque_rilsa_scope.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::has_operation() const
{
    for (std::size_t index=0; index<opaque_ritlv.size(); index++)
    {
        if(opaque_ritlv[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(opaque_ri_interface_name.yfilter)
	|| ydk::is_set(opaque_rilsa_scope.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "opaque-router-info-lsa-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (opaque_ri_interface_name.is_set || is_set(opaque_ri_interface_name.yfilter)) leaf_name_data.push_back(opaque_ri_interface_name.get_name_leafdata());
    if (opaque_rilsa_scope.is_set || is_set(opaque_rilsa_scope.yfilter)) leaf_name_data.push_back(opaque_rilsa_scope.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "opaque-ritlv")
    {
        for(auto const & c : opaque_ritlv)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv>();
        c->parent = this;
        opaque_ritlv.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : opaque_ritlv)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "opaque-ri-interface-name")
    {
        opaque_ri_interface_name = value;
        opaque_ri_interface_name.value_namespace = name_space;
        opaque_ri_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "opaque-rilsa-scope")
    {
        opaque_rilsa_scope = value;
        opaque_rilsa_scope.value_namespace = name_space;
        opaque_rilsa_scope.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "opaque-ri-interface-name")
    {
        opaque_ri_interface_name.yfilter = yfilter;
    }
    if(value_path == "opaque-rilsa-scope")
    {
        opaque_rilsa_scope.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "opaque-ritlv" || name == "opaque-ri-interface-name" || name == "opaque-rilsa-scope")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::OpaqueRitlv()
    :
    ritlv_internal_type{YType::enumeration, "ritlv-internal-type"}
    	,
    node_msdtlv(std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv>())
	,pcedtlv(std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv>())
	,rtr_cap_tlv(std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::RtrCapTlv>())
	,sr_algo_tlv(std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrAlgoTlv>())
	,sr_range_tlv(std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv>())
	,unknown_tlv(std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::UnknownTlv>())
{
    node_msdtlv->parent = this;
    pcedtlv->parent = this;
    rtr_cap_tlv->parent = this;
    sr_algo_tlv->parent = this;
    sr_range_tlv->parent = this;
    unknown_tlv->parent = this;

    yang_name = "opaque-ritlv"; yang_parent_name = "opaque-router-info-lsa-type"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::~OpaqueRitlv()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::has_data() const
{
    return ritlv_internal_type.is_set
	|| (node_msdtlv !=  nullptr && node_msdtlv->has_data())
	|| (pcedtlv !=  nullptr && pcedtlv->has_data())
	|| (rtr_cap_tlv !=  nullptr && rtr_cap_tlv->has_data())
	|| (sr_algo_tlv !=  nullptr && sr_algo_tlv->has_data())
	|| (sr_range_tlv !=  nullptr && sr_range_tlv->has_data())
	|| (unknown_tlv !=  nullptr && unknown_tlv->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ritlv_internal_type.yfilter)
	|| (node_msdtlv !=  nullptr && node_msdtlv->has_operation())
	|| (pcedtlv !=  nullptr && pcedtlv->has_operation())
	|| (rtr_cap_tlv !=  nullptr && rtr_cap_tlv->has_operation())
	|| (sr_algo_tlv !=  nullptr && sr_algo_tlv->has_operation())
	|| (sr_range_tlv !=  nullptr && sr_range_tlv->has_operation())
	|| (unknown_tlv !=  nullptr && unknown_tlv->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "opaque-ritlv";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ritlv_internal_type.is_set || is_set(ritlv_internal_type.yfilter)) leaf_name_data.push_back(ritlv_internal_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node-msdtlv")
    {
        if(node_msdtlv == nullptr)
        {
            node_msdtlv = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv>();
        }
        return node_msdtlv;
    }

    if(child_yang_name == "pcedtlv")
    {
        if(pcedtlv == nullptr)
        {
            pcedtlv = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv>();
        }
        return pcedtlv;
    }

    if(child_yang_name == "rtr-cap-tlv")
    {
        if(rtr_cap_tlv == nullptr)
        {
            rtr_cap_tlv = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::RtrCapTlv>();
        }
        return rtr_cap_tlv;
    }

    if(child_yang_name == "sr-algo-tlv")
    {
        if(sr_algo_tlv == nullptr)
        {
            sr_algo_tlv = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrAlgoTlv>();
        }
        return sr_algo_tlv;
    }

    if(child_yang_name == "sr-range-tlv")
    {
        if(sr_range_tlv == nullptr)
        {
            sr_range_tlv = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv>();
        }
        return sr_range_tlv;
    }

    if(child_yang_name == "unknown-tlv")
    {
        if(unknown_tlv == nullptr)
        {
            unknown_tlv = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::UnknownTlv>();
        }
        return unknown_tlv;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(node_msdtlv != nullptr)
    {
        children["node-msdtlv"] = node_msdtlv;
    }

    if(pcedtlv != nullptr)
    {
        children["pcedtlv"] = pcedtlv;
    }

    if(rtr_cap_tlv != nullptr)
    {
        children["rtr-cap-tlv"] = rtr_cap_tlv;
    }

    if(sr_algo_tlv != nullptr)
    {
        children["sr-algo-tlv"] = sr_algo_tlv;
    }

    if(sr_range_tlv != nullptr)
    {
        children["sr-range-tlv"] = sr_range_tlv;
    }

    if(unknown_tlv != nullptr)
    {
        children["unknown-tlv"] = unknown_tlv;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ritlv-internal-type")
    {
        ritlv_internal_type = value;
        ritlv_internal_type.value_namespace = name_space;
        ritlv_internal_type.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ritlv-internal-type")
    {
        ritlv_internal_type.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node-msdtlv" || name == "pcedtlv" || name == "rtr-cap-tlv" || name == "sr-algo-tlv" || name == "sr-range-tlv" || name == "unknown-tlv" || name == "ritlv-internal-type")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv::NodeMsdtlv()
    :
    node_msdtlv_length{YType::uint16, "node-msdtlv-length"}
    	,
    node_msd_sub_types(std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv::NodeMsdSubTypes>())
{
    node_msd_sub_types->parent = this;

    yang_name = "node-msdtlv"; yang_parent_name = "opaque-ritlv"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv::~NodeMsdtlv()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv::has_data() const
{
    return node_msdtlv_length.is_set
	|| (node_msd_sub_types !=  nullptr && node_msd_sub_types->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_msdtlv_length.yfilter)
	|| (node_msd_sub_types !=  nullptr && node_msd_sub_types->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node-msdtlv";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_msdtlv_length.is_set || is_set(node_msdtlv_length.yfilter)) leaf_name_data.push_back(node_msdtlv_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node-msd-sub-types")
    {
        if(node_msd_sub_types == nullptr)
        {
            node_msd_sub_types = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv::NodeMsdSubTypes>();
        }
        return node_msd_sub_types;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(node_msd_sub_types != nullptr)
    {
        children["node-msd-sub-types"] = node_msd_sub_types;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-msdtlv-length")
    {
        node_msdtlv_length = value;
        node_msdtlv_length.value_namespace = name_space;
        node_msdtlv_length.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-msdtlv-length")
    {
        node_msdtlv_length.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node-msd-sub-types" || name == "node-msdtlv-length")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv::NodeMsdSubTypes::NodeMsdSubTypes()
    :
    msd_sub_type{YType::uint8, "msd-sub-type"},
    msd_value{YType::uint8, "msd-value"}
{

    yang_name = "node-msd-sub-types"; yang_parent_name = "node-msdtlv"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv::NodeMsdSubTypes::~NodeMsdSubTypes()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv::NodeMsdSubTypes::has_data() const
{
    return msd_sub_type.is_set
	|| msd_value.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv::NodeMsdSubTypes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(msd_sub_type.yfilter)
	|| ydk::is_set(msd_value.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv::NodeMsdSubTypes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node-msd-sub-types";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv::NodeMsdSubTypes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (msd_sub_type.is_set || is_set(msd_sub_type.yfilter)) leaf_name_data.push_back(msd_sub_type.get_name_leafdata());
    if (msd_value.is_set || is_set(msd_value.yfilter)) leaf_name_data.push_back(msd_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv::NodeMsdSubTypes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv::NodeMsdSubTypes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv::NodeMsdSubTypes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "msd-sub-type")
    {
        msd_sub_type = value;
        msd_sub_type.value_namespace = name_space;
        msd_sub_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msd-value")
    {
        msd_value = value;
        msd_value.value_namespace = name_space;
        msd_value.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv::NodeMsdSubTypes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "msd-sub-type")
    {
        msd_sub_type.yfilter = yfilter;
    }
    if(value_path == "msd-value")
    {
        msd_value.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv::NodeMsdSubTypes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "msd-sub-type" || name == "msd-value")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::Pcedtlv()
    :
    pcedtlv_length{YType::uint16, "pcedtlv-length"}
    	,
    pced_addr(std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr>())
	,pced_scope(std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedScope>())
{
    pced_addr->parent = this;
    pced_scope->parent = this;

    yang_name = "pcedtlv"; yang_parent_name = "opaque-ritlv"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::~Pcedtlv()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::has_data() const
{
    return pcedtlv_length.is_set
	|| (pced_addr !=  nullptr && pced_addr->has_data())
	|| (pced_scope !=  nullptr && pced_scope->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pcedtlv_length.yfilter)
	|| (pced_addr !=  nullptr && pced_addr->has_operation())
	|| (pced_scope !=  nullptr && pced_scope->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pcedtlv";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pcedtlv_length.is_set || is_set(pcedtlv_length.yfilter)) leaf_name_data.push_back(pcedtlv_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pced-addr")
    {
        if(pced_addr == nullptr)
        {
            pced_addr = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr>();
        }
        return pced_addr;
    }

    if(child_yang_name == "pced-scope")
    {
        if(pced_scope == nullptr)
        {
            pced_scope = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedScope>();
        }
        return pced_scope;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(pced_addr != nullptr)
    {
        children["pced-addr"] = pced_addr;
    }

    if(pced_scope != nullptr)
    {
        children["pced-scope"] = pced_scope;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pcedtlv-length")
    {
        pcedtlv_length = value;
        pcedtlv_length.value_namespace = name_space;
        pcedtlv_length.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pcedtlv-length")
    {
        pcedtlv_length.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pced-addr" || name == "pced-scope" || name == "pcedtlv-length")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::PcedAddr()
    :
    pce_addr_type{YType::enumeration, "pce-addr-type"}
    	,
    ipv4pce_addr(std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv4PceAddr>())
	,ipv6pce_addr(std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv6PceAddr>())
	,pce_addr_unknown_tlv(std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::PceAddrUnknownTlv>())
{
    ipv4pce_addr->parent = this;
    ipv6pce_addr->parent = this;
    pce_addr_unknown_tlv->parent = this;

    yang_name = "pced-addr"; yang_parent_name = "pcedtlv"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::~PcedAddr()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::has_data() const
{
    return pce_addr_type.is_set
	|| (ipv4pce_addr !=  nullptr && ipv4pce_addr->has_data())
	|| (ipv6pce_addr !=  nullptr && ipv6pce_addr->has_data())
	|| (pce_addr_unknown_tlv !=  nullptr && pce_addr_unknown_tlv->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pce_addr_type.yfilter)
	|| (ipv4pce_addr !=  nullptr && ipv4pce_addr->has_operation())
	|| (ipv6pce_addr !=  nullptr && ipv6pce_addr->has_operation())
	|| (pce_addr_unknown_tlv !=  nullptr && pce_addr_unknown_tlv->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pced-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pce_addr_type.is_set || is_set(pce_addr_type.yfilter)) leaf_name_data.push_back(pce_addr_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4pce-addr")
    {
        if(ipv4pce_addr == nullptr)
        {
            ipv4pce_addr = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv4PceAddr>();
        }
        return ipv4pce_addr;
    }

    if(child_yang_name == "ipv6pce-addr")
    {
        if(ipv6pce_addr == nullptr)
        {
            ipv6pce_addr = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv6PceAddr>();
        }
        return ipv6pce_addr;
    }

    if(child_yang_name == "pce-addr-unknown-tlv")
    {
        if(pce_addr_unknown_tlv == nullptr)
        {
            pce_addr_unknown_tlv = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::PceAddrUnknownTlv>();
        }
        return pce_addr_unknown_tlv;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4pce_addr != nullptr)
    {
        children["ipv4pce-addr"] = ipv4pce_addr;
    }

    if(ipv6pce_addr != nullptr)
    {
        children["ipv6pce-addr"] = ipv6pce_addr;
    }

    if(pce_addr_unknown_tlv != nullptr)
    {
        children["pce-addr-unknown-tlv"] = pce_addr_unknown_tlv;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pce-addr-type")
    {
        pce_addr_type = value;
        pce_addr_type.value_namespace = name_space;
        pce_addr_type.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pce-addr-type")
    {
        pce_addr_type.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4pce-addr" || name == "ipv6pce-addr" || name == "pce-addr-unknown-tlv" || name == "pce-addr-type")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv4PceAddr::Ipv4PceAddr()
    :
    pceipv4_addr{YType::str, "pceipv4-addr"}
{

    yang_name = "ipv4pce-addr"; yang_parent_name = "pced-addr"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv4PceAddr::~Ipv4PceAddr()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv4PceAddr::has_data() const
{
    return pceipv4_addr.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv4PceAddr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pceipv4_addr.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv4PceAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4pce-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv4PceAddr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pceipv4_addr.is_set || is_set(pceipv4_addr.yfilter)) leaf_name_data.push_back(pceipv4_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv4PceAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv4PceAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv4PceAddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pceipv4-addr")
    {
        pceipv4_addr = value;
        pceipv4_addr.value_namespace = name_space;
        pceipv4_addr.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv4PceAddr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pceipv4-addr")
    {
        pceipv4_addr.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv4PceAddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pceipv4-addr")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv6PceAddr::Ipv6PceAddr()
    :
    pceipv6_addr{YType::str, "pceipv6-addr"}
{

    yang_name = "ipv6pce-addr"; yang_parent_name = "pced-addr"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv6PceAddr::~Ipv6PceAddr()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv6PceAddr::has_data() const
{
    return pceipv6_addr.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv6PceAddr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pceipv6_addr.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv6PceAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6pce-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv6PceAddr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pceipv6_addr.is_set || is_set(pceipv6_addr.yfilter)) leaf_name_data.push_back(pceipv6_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv6PceAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv6PceAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv6PceAddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pceipv6-addr")
    {
        pceipv6_addr = value;
        pceipv6_addr.value_namespace = name_space;
        pceipv6_addr.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv6PceAddr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pceipv6-addr")
    {
        pceipv6_addr.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv6PceAddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pceipv6-addr")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::PceAddrUnknownTlv::PceAddrUnknownTlv()
    :
    ri_gen_tlv_length{YType::uint16, "ri-gen-tlv-length"},
    ri_gen_tlv_type{YType::uint16, "ri-gen-tlv-type"},
    ri_genvalue{YType::str, "ri-genvalue"}
{

    yang_name = "pce-addr-unknown-tlv"; yang_parent_name = "pced-addr"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::PceAddrUnknownTlv::~PceAddrUnknownTlv()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::PceAddrUnknownTlv::has_data() const
{
    return ri_gen_tlv_length.is_set
	|| ri_gen_tlv_type.is_set
	|| ri_genvalue.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::PceAddrUnknownTlv::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ri_gen_tlv_length.yfilter)
	|| ydk::is_set(ri_gen_tlv_type.yfilter)
	|| ydk::is_set(ri_genvalue.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::PceAddrUnknownTlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pce-addr-unknown-tlv";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::PceAddrUnknownTlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ri_gen_tlv_length.is_set || is_set(ri_gen_tlv_length.yfilter)) leaf_name_data.push_back(ri_gen_tlv_length.get_name_leafdata());
    if (ri_gen_tlv_type.is_set || is_set(ri_gen_tlv_type.yfilter)) leaf_name_data.push_back(ri_gen_tlv_type.get_name_leafdata());
    if (ri_genvalue.is_set || is_set(ri_genvalue.yfilter)) leaf_name_data.push_back(ri_genvalue.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::PceAddrUnknownTlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::PceAddrUnknownTlv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::PceAddrUnknownTlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ri-gen-tlv-length")
    {
        ri_gen_tlv_length = value;
        ri_gen_tlv_length.value_namespace = name_space;
        ri_gen_tlv_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ri-gen-tlv-type")
    {
        ri_gen_tlv_type = value;
        ri_gen_tlv_type.value_namespace = name_space;
        ri_gen_tlv_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ri-genvalue")
    {
        ri_genvalue = value;
        ri_genvalue.value_namespace = name_space;
        ri_genvalue.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::PceAddrUnknownTlv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ri-gen-tlv-length")
    {
        ri_gen_tlv_length.yfilter = yfilter;
    }
    if(value_path == "ri-gen-tlv-type")
    {
        ri_gen_tlv_type.yfilter = yfilter;
    }
    if(value_path == "ri-genvalue")
    {
        ri_genvalue.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::PceAddrUnknownTlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ri-gen-tlv-length" || name == "ri-gen-tlv-type" || name == "ri-genvalue")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedScope::PcedScope()
    :
    all_scope_info_bits{YType::uint32, "all-scope-info-bits"},
    lbit{YType::boolean, "lbit"},
    pref_l{YType::uint8, "pref-l"},
    pref_r{YType::uint8, "pref-r"},
    pref_s{YType::uint8, "pref-s"},
    pref_y{YType::uint8, "pref-y"},
    rbit{YType::boolean, "rbit"},
    rd_bit{YType::boolean, "rd-bit"},
    sbit{YType::boolean, "sbit"},
    sd_bit{YType::boolean, "sd-bit"},
    ybit{YType::boolean, "ybit"}
{

    yang_name = "pced-scope"; yang_parent_name = "pcedtlv"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedScope::~PcedScope()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedScope::has_data() const
{
    return all_scope_info_bits.is_set
	|| lbit.is_set
	|| pref_l.is_set
	|| pref_r.is_set
	|| pref_s.is_set
	|| pref_y.is_set
	|| rbit.is_set
	|| rd_bit.is_set
	|| sbit.is_set
	|| sd_bit.is_set
	|| ybit.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedScope::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all_scope_info_bits.yfilter)
	|| ydk::is_set(lbit.yfilter)
	|| ydk::is_set(pref_l.yfilter)
	|| ydk::is_set(pref_r.yfilter)
	|| ydk::is_set(pref_s.yfilter)
	|| ydk::is_set(pref_y.yfilter)
	|| ydk::is_set(rbit.yfilter)
	|| ydk::is_set(rd_bit.yfilter)
	|| ydk::is_set(sbit.yfilter)
	|| ydk::is_set(sd_bit.yfilter)
	|| ydk::is_set(ybit.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedScope::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pced-scope";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedScope::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all_scope_info_bits.is_set || is_set(all_scope_info_bits.yfilter)) leaf_name_data.push_back(all_scope_info_bits.get_name_leafdata());
    if (lbit.is_set || is_set(lbit.yfilter)) leaf_name_data.push_back(lbit.get_name_leafdata());
    if (pref_l.is_set || is_set(pref_l.yfilter)) leaf_name_data.push_back(pref_l.get_name_leafdata());
    if (pref_r.is_set || is_set(pref_r.yfilter)) leaf_name_data.push_back(pref_r.get_name_leafdata());
    if (pref_s.is_set || is_set(pref_s.yfilter)) leaf_name_data.push_back(pref_s.get_name_leafdata());
    if (pref_y.is_set || is_set(pref_y.yfilter)) leaf_name_data.push_back(pref_y.get_name_leafdata());
    if (rbit.is_set || is_set(rbit.yfilter)) leaf_name_data.push_back(rbit.get_name_leafdata());
    if (rd_bit.is_set || is_set(rd_bit.yfilter)) leaf_name_data.push_back(rd_bit.get_name_leafdata());
    if (sbit.is_set || is_set(sbit.yfilter)) leaf_name_data.push_back(sbit.get_name_leafdata());
    if (sd_bit.is_set || is_set(sd_bit.yfilter)) leaf_name_data.push_back(sd_bit.get_name_leafdata());
    if (ybit.is_set || is_set(ybit.yfilter)) leaf_name_data.push_back(ybit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedScope::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedScope::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedScope::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all-scope-info-bits")
    {
        all_scope_info_bits = value;
        all_scope_info_bits.value_namespace = name_space;
        all_scope_info_bits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lbit")
    {
        lbit = value;
        lbit.value_namespace = name_space;
        lbit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pref-l")
    {
        pref_l = value;
        pref_l.value_namespace = name_space;
        pref_l.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pref-r")
    {
        pref_r = value;
        pref_r.value_namespace = name_space;
        pref_r.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pref-s")
    {
        pref_s = value;
        pref_s.value_namespace = name_space;
        pref_s.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pref-y")
    {
        pref_y = value;
        pref_y.value_namespace = name_space;
        pref_y.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rbit")
    {
        rbit = value;
        rbit.value_namespace = name_space;
        rbit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rd-bit")
    {
        rd_bit = value;
        rd_bit.value_namespace = name_space;
        rd_bit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sbit")
    {
        sbit = value;
        sbit.value_namespace = name_space;
        sbit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sd-bit")
    {
        sd_bit = value;
        sd_bit.value_namespace = name_space;
        sd_bit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ybit")
    {
        ybit = value;
        ybit.value_namespace = name_space;
        ybit.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedScope::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all-scope-info-bits")
    {
        all_scope_info_bits.yfilter = yfilter;
    }
    if(value_path == "lbit")
    {
        lbit.yfilter = yfilter;
    }
    if(value_path == "pref-l")
    {
        pref_l.yfilter = yfilter;
    }
    if(value_path == "pref-r")
    {
        pref_r.yfilter = yfilter;
    }
    if(value_path == "pref-s")
    {
        pref_s.yfilter = yfilter;
    }
    if(value_path == "pref-y")
    {
        pref_y.yfilter = yfilter;
    }
    if(value_path == "rbit")
    {
        rbit.yfilter = yfilter;
    }
    if(value_path == "rd-bit")
    {
        rd_bit.yfilter = yfilter;
    }
    if(value_path == "sbit")
    {
        sbit.yfilter = yfilter;
    }
    if(value_path == "sd-bit")
    {
        sd_bit.yfilter = yfilter;
    }
    if(value_path == "ybit")
    {
        ybit.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedScope::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all-scope-info-bits" || name == "lbit" || name == "pref-l" || name == "pref-r" || name == "pref-s" || name == "pref-y" || name == "rbit" || name == "rd-bit" || name == "sbit" || name == "sd-bit" || name == "ybit")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::RtrCapTlv::RtrCapTlv()
    :
    rtr_cap_additional_info{YType::str, "rtr-cap-additional-info"},
    rtr_cap_all_bits{YType::uint32, "rtr-cap-all-bits"},
    rtr_cap_area_te{YType::boolean, "rtr-cap-area-te"},
    rtr_cap_graceful_restart{YType::boolean, "rtr-cap-graceful-restart"},
    rtr_cap_graceful_restart_helper{YType::boolean, "rtr-cap-graceful-restart-helper"},
    rtr_cap_p2plan{YType::boolean, "rtr-cap-p2plan"},
    rtr_cap_stub_rtr{YType::boolean, "rtr-cap-stub-rtr"},
    rtr_cap_te_exp{YType::boolean, "rtr-cap-te-exp"},
    rtr_cap_tlv_length{YType::uint16, "rtr-cap-tlv-length"}
{

    yang_name = "rtr-cap-tlv"; yang_parent_name = "opaque-ritlv"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::RtrCapTlv::~RtrCapTlv()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::RtrCapTlv::has_data() const
{
    return rtr_cap_additional_info.is_set
	|| rtr_cap_all_bits.is_set
	|| rtr_cap_area_te.is_set
	|| rtr_cap_graceful_restart.is_set
	|| rtr_cap_graceful_restart_helper.is_set
	|| rtr_cap_p2plan.is_set
	|| rtr_cap_stub_rtr.is_set
	|| rtr_cap_te_exp.is_set
	|| rtr_cap_tlv_length.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::RtrCapTlv::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rtr_cap_additional_info.yfilter)
	|| ydk::is_set(rtr_cap_all_bits.yfilter)
	|| ydk::is_set(rtr_cap_area_te.yfilter)
	|| ydk::is_set(rtr_cap_graceful_restart.yfilter)
	|| ydk::is_set(rtr_cap_graceful_restart_helper.yfilter)
	|| ydk::is_set(rtr_cap_p2plan.yfilter)
	|| ydk::is_set(rtr_cap_stub_rtr.yfilter)
	|| ydk::is_set(rtr_cap_te_exp.yfilter)
	|| ydk::is_set(rtr_cap_tlv_length.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::RtrCapTlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtr-cap-tlv";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::RtrCapTlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rtr_cap_additional_info.is_set || is_set(rtr_cap_additional_info.yfilter)) leaf_name_data.push_back(rtr_cap_additional_info.get_name_leafdata());
    if (rtr_cap_all_bits.is_set || is_set(rtr_cap_all_bits.yfilter)) leaf_name_data.push_back(rtr_cap_all_bits.get_name_leafdata());
    if (rtr_cap_area_te.is_set || is_set(rtr_cap_area_te.yfilter)) leaf_name_data.push_back(rtr_cap_area_te.get_name_leafdata());
    if (rtr_cap_graceful_restart.is_set || is_set(rtr_cap_graceful_restart.yfilter)) leaf_name_data.push_back(rtr_cap_graceful_restart.get_name_leafdata());
    if (rtr_cap_graceful_restart_helper.is_set || is_set(rtr_cap_graceful_restart_helper.yfilter)) leaf_name_data.push_back(rtr_cap_graceful_restart_helper.get_name_leafdata());
    if (rtr_cap_p2plan.is_set || is_set(rtr_cap_p2plan.yfilter)) leaf_name_data.push_back(rtr_cap_p2plan.get_name_leafdata());
    if (rtr_cap_stub_rtr.is_set || is_set(rtr_cap_stub_rtr.yfilter)) leaf_name_data.push_back(rtr_cap_stub_rtr.get_name_leafdata());
    if (rtr_cap_te_exp.is_set || is_set(rtr_cap_te_exp.yfilter)) leaf_name_data.push_back(rtr_cap_te_exp.get_name_leafdata());
    if (rtr_cap_tlv_length.is_set || is_set(rtr_cap_tlv_length.yfilter)) leaf_name_data.push_back(rtr_cap_tlv_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::RtrCapTlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::RtrCapTlv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::RtrCapTlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rtr-cap-additional-info")
    {
        rtr_cap_additional_info = value;
        rtr_cap_additional_info.value_namespace = name_space;
        rtr_cap_additional_info.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtr-cap-all-bits")
    {
        rtr_cap_all_bits = value;
        rtr_cap_all_bits.value_namespace = name_space;
        rtr_cap_all_bits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtr-cap-area-te")
    {
        rtr_cap_area_te = value;
        rtr_cap_area_te.value_namespace = name_space;
        rtr_cap_area_te.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtr-cap-graceful-restart")
    {
        rtr_cap_graceful_restart = value;
        rtr_cap_graceful_restart.value_namespace = name_space;
        rtr_cap_graceful_restart.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtr-cap-graceful-restart-helper")
    {
        rtr_cap_graceful_restart_helper = value;
        rtr_cap_graceful_restart_helper.value_namespace = name_space;
        rtr_cap_graceful_restart_helper.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtr-cap-p2plan")
    {
        rtr_cap_p2plan = value;
        rtr_cap_p2plan.value_namespace = name_space;
        rtr_cap_p2plan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtr-cap-stub-rtr")
    {
        rtr_cap_stub_rtr = value;
        rtr_cap_stub_rtr.value_namespace = name_space;
        rtr_cap_stub_rtr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtr-cap-te-exp")
    {
        rtr_cap_te_exp = value;
        rtr_cap_te_exp.value_namespace = name_space;
        rtr_cap_te_exp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtr-cap-tlv-length")
    {
        rtr_cap_tlv_length = value;
        rtr_cap_tlv_length.value_namespace = name_space;
        rtr_cap_tlv_length.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::RtrCapTlv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rtr-cap-additional-info")
    {
        rtr_cap_additional_info.yfilter = yfilter;
    }
    if(value_path == "rtr-cap-all-bits")
    {
        rtr_cap_all_bits.yfilter = yfilter;
    }
    if(value_path == "rtr-cap-area-te")
    {
        rtr_cap_area_te.yfilter = yfilter;
    }
    if(value_path == "rtr-cap-graceful-restart")
    {
        rtr_cap_graceful_restart.yfilter = yfilter;
    }
    if(value_path == "rtr-cap-graceful-restart-helper")
    {
        rtr_cap_graceful_restart_helper.yfilter = yfilter;
    }
    if(value_path == "rtr-cap-p2plan")
    {
        rtr_cap_p2plan.yfilter = yfilter;
    }
    if(value_path == "rtr-cap-stub-rtr")
    {
        rtr_cap_stub_rtr.yfilter = yfilter;
    }
    if(value_path == "rtr-cap-te-exp")
    {
        rtr_cap_te_exp.yfilter = yfilter;
    }
    if(value_path == "rtr-cap-tlv-length")
    {
        rtr_cap_tlv_length.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::RtrCapTlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rtr-cap-additional-info" || name == "rtr-cap-all-bits" || name == "rtr-cap-area-te" || name == "rtr-cap-graceful-restart" || name == "rtr-cap-graceful-restart-helper" || name == "rtr-cap-p2plan" || name == "rtr-cap-stub-rtr" || name == "rtr-cap-te-exp" || name == "rtr-cap-tlv-length")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrAlgoTlv::SrAlgoTlv()
    :
    sr_algo_length{YType::uint16, "sr-algo-length"},
    sr_algo_value{YType::str, "sr-algo-value"}
{

    yang_name = "sr-algo-tlv"; yang_parent_name = "opaque-ritlv"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrAlgoTlv::~SrAlgoTlv()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrAlgoTlv::has_data() const
{
    return sr_algo_length.is_set
	|| sr_algo_value.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrAlgoTlv::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sr_algo_length.yfilter)
	|| ydk::is_set(sr_algo_value.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrAlgoTlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-algo-tlv";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrAlgoTlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sr_algo_length.is_set || is_set(sr_algo_length.yfilter)) leaf_name_data.push_back(sr_algo_length.get_name_leafdata());
    if (sr_algo_value.is_set || is_set(sr_algo_value.yfilter)) leaf_name_data.push_back(sr_algo_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrAlgoTlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrAlgoTlv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrAlgoTlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sr-algo-length")
    {
        sr_algo_length = value;
        sr_algo_length.value_namespace = name_space;
        sr_algo_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sr-algo-value")
    {
        sr_algo_value = value;
        sr_algo_value.value_namespace = name_space;
        sr_algo_value.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrAlgoTlv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sr-algo-length")
    {
        sr_algo_length.yfilter = yfilter;
    }
    if(value_path == "sr-algo-value")
    {
        sr_algo_value.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrAlgoTlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sr-algo-length" || name == "sr-algo-value")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::SrRangeTlv()
    :
    sr_range_length{YType::uint16, "sr-range-length"},
    sr_range_size{YType::uint32, "sr-range-size"}
    	,
    sidtlv(std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::Sidtlv>())
{
    sidtlv->parent = this;

    yang_name = "sr-range-tlv"; yang_parent_name = "opaque-ritlv"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::~SrRangeTlv()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::has_data() const
{
    return sr_range_length.is_set
	|| sr_range_size.is_set
	|| (sidtlv !=  nullptr && sidtlv->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sr_range_length.yfilter)
	|| ydk::is_set(sr_range_size.yfilter)
	|| (sidtlv !=  nullptr && sidtlv->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-range-tlv";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sr_range_length.is_set || is_set(sr_range_length.yfilter)) leaf_name_data.push_back(sr_range_length.get_name_leafdata());
    if (sr_range_size.is_set || is_set(sr_range_size.yfilter)) leaf_name_data.push_back(sr_range_size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sidtlv")
    {
        if(sidtlv == nullptr)
        {
            sidtlv = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::Sidtlv>();
        }
        return sidtlv;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(sidtlv != nullptr)
    {
        children["sidtlv"] = sidtlv;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sr-range-length")
    {
        sr_range_length = value;
        sr_range_length.value_namespace = name_space;
        sr_range_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sr-range-size")
    {
        sr_range_size = value;
        sr_range_size.value_namespace = name_space;
        sr_range_size.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sr-range-length")
    {
        sr_range_length.yfilter = yfilter;
    }
    if(value_path == "sr-range-size")
    {
        sr_range_size.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sidtlv" || name == "sr-range-length" || name == "sr-range-size")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::Sidtlv::Sidtlv()
    :
    sr_sid_length{YType::uint16, "sr-sid-length"},
    sr_sid_value{YType::uint32, "sr-sid-value"}
{

    yang_name = "sidtlv"; yang_parent_name = "sr-range-tlv"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::Sidtlv::~Sidtlv()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::Sidtlv::has_data() const
{
    return sr_sid_length.is_set
	|| sr_sid_value.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::Sidtlv::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sr_sid_length.yfilter)
	|| ydk::is_set(sr_sid_value.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::Sidtlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sidtlv";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::Sidtlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sr_sid_length.is_set || is_set(sr_sid_length.yfilter)) leaf_name_data.push_back(sr_sid_length.get_name_leafdata());
    if (sr_sid_value.is_set || is_set(sr_sid_value.yfilter)) leaf_name_data.push_back(sr_sid_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::Sidtlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::Sidtlv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::Sidtlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sr-sid-length")
    {
        sr_sid_length = value;
        sr_sid_length.value_namespace = name_space;
        sr_sid_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sr-sid-value")
    {
        sr_sid_value = value;
        sr_sid_value.value_namespace = name_space;
        sr_sid_value.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::Sidtlv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sr-sid-length")
    {
        sr_sid_length.yfilter = yfilter;
    }
    if(value_path == "sr-sid-value")
    {
        sr_sid_value.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::Sidtlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sr-sid-length" || name == "sr-sid-value")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::UnknownTlv::UnknownTlv()
    :
    ri_gen_tlv_length{YType::uint16, "ri-gen-tlv-length"},
    ri_gen_tlv_type{YType::uint16, "ri-gen-tlv-type"},
    ri_genvalue{YType::str, "ri-genvalue"}
{

    yang_name = "unknown-tlv"; yang_parent_name = "opaque-ritlv"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::UnknownTlv::~UnknownTlv()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::UnknownTlv::has_data() const
{
    return ri_gen_tlv_length.is_set
	|| ri_gen_tlv_type.is_set
	|| ri_genvalue.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::UnknownTlv::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ri_gen_tlv_length.yfilter)
	|| ydk::is_set(ri_gen_tlv_type.yfilter)
	|| ydk::is_set(ri_genvalue.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::UnknownTlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unknown-tlv";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::UnknownTlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ri_gen_tlv_length.is_set || is_set(ri_gen_tlv_length.yfilter)) leaf_name_data.push_back(ri_gen_tlv_length.get_name_leafdata());
    if (ri_gen_tlv_type.is_set || is_set(ri_gen_tlv_type.yfilter)) leaf_name_data.push_back(ri_gen_tlv_type.get_name_leafdata());
    if (ri_genvalue.is_set || is_set(ri_genvalue.yfilter)) leaf_name_data.push_back(ri_genvalue.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::UnknownTlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::UnknownTlv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::UnknownTlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ri-gen-tlv-length")
    {
        ri_gen_tlv_length = value;
        ri_gen_tlv_length.value_namespace = name_space;
        ri_gen_tlv_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ri-gen-tlv-type")
    {
        ri_gen_tlv_type = value;
        ri_gen_tlv_type.value_namespace = name_space;
        ri_gen_tlv_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ri-genvalue")
    {
        ri_genvalue = value;
        ri_genvalue.value_namespace = name_space;
        ri_genvalue.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::UnknownTlv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ri-gen-tlv-length")
    {
        ri_gen_tlv_length.yfilter = yfilter;
    }
    if(value_path == "ri-gen-tlv-type")
    {
        ri_gen_tlv_type.yfilter = yfilter;
    }
    if(value_path == "ri-genvalue")
    {
        ri_genvalue.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::UnknownTlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ri-gen-tlv-length" || name == "ri-gen-tlv-type" || name == "ri-genvalue")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::RouterLsaType()
    :
    internal_lsa{YType::boolean, "internal-lsa"},
    router_abr{YType::boolean, "router-abr"},
    router_asbr{YType::boolean, "router-asbr"}
{

    yang_name = "router-lsa-type"; yang_parent_name = "lsa-internal-data"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::~RouterLsaType()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::has_data() const
{
    for (std::size_t index=0; index<internal_link.size(); index++)
    {
        if(internal_link[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<link.size(); index++)
    {
        if(link[index]->has_data())
            return true;
    }
    return internal_lsa.is_set
	|| router_abr.is_set
	|| router_asbr.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::has_operation() const
{
    for (std::size_t index=0; index<internal_link.size(); index++)
    {
        if(internal_link[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<link.size(); index++)
    {
        if(link[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(internal_lsa.yfilter)
	|| ydk::is_set(router_abr.yfilter)
	|| ydk::is_set(router_asbr.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "router-lsa-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (internal_lsa.is_set || is_set(internal_lsa.yfilter)) leaf_name_data.push_back(internal_lsa.get_name_leafdata());
    if (router_abr.is_set || is_set(router_abr.yfilter)) leaf_name_data.push_back(router_abr.get_name_leafdata());
    if (router_asbr.is_set || is_set(router_asbr.yfilter)) leaf_name_data.push_back(router_asbr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "internal-link")
    {
        for(auto const & c : internal_link)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink>();
        c->parent = this;
        internal_link.push_back(c);
        return c;
    }

    if(child_yang_name == "link")
    {
        for(auto const & c : link)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::Link>();
        c->parent = this;
        link.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : internal_link)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : link)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "internal-lsa")
    {
        internal_lsa = value;
        internal_lsa.value_namespace = name_space;
        internal_lsa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "router-abr")
    {
        router_abr = value;
        router_abr.value_namespace = name_space;
        router_abr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "router-asbr")
    {
        router_asbr = value;
        router_asbr.value_namespace = name_space;
        router_asbr.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "internal-lsa")
    {
        internal_lsa.yfilter = yfilter;
    }
    if(value_path == "router-abr")
    {
        router_abr.yfilter = yfilter;
    }
    if(value_path == "router-asbr")
    {
        router_asbr.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "internal-link" || name == "link" || name == "internal-lsa" || name == "router-abr" || name == "router-asbr")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::InternalLink()
    :
    link_data{YType::str, "link-data"},
    link_id{YType::str, "link-id"},
    link_metric{YType::uint16, "link-metric"},
    link_type{YType::enumeration, "link-type"}
{

    yang_name = "internal-link"; yang_parent_name = "router-lsa-type"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::~InternalLink()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::has_data() const
{
    for (std::size_t index=0; index<link_tos.size(); index++)
    {
        if(link_tos[index]->has_data())
            return true;
    }
    return link_data.is_set
	|| link_id.is_set
	|| link_metric.is_set
	|| link_type.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::has_operation() const
{
    for (std::size_t index=0; index<link_tos.size(); index++)
    {
        if(link_tos[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(link_data.yfilter)
	|| ydk::is_set(link_id.yfilter)
	|| ydk::is_set(link_metric.yfilter)
	|| ydk::is_set(link_type.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "internal-link";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_data.is_set || is_set(link_data.yfilter)) leaf_name_data.push_back(link_data.get_name_leafdata());
    if (link_id.is_set || is_set(link_id.yfilter)) leaf_name_data.push_back(link_id.get_name_leafdata());
    if (link_metric.is_set || is_set(link_metric.yfilter)) leaf_name_data.push_back(link_metric.get_name_leafdata());
    if (link_type.is_set || is_set(link_type.yfilter)) leaf_name_data.push_back(link_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "link-tos")
    {
        for(auto const & c : link_tos)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::LinkTos>();
        c->parent = this;
        link_tos.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : link_tos)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "link-data")
    {
        link_data = value;
        link_data.value_namespace = name_space;
        link_data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-id")
    {
        link_id = value;
        link_id.value_namespace = name_space;
        link_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-metric")
    {
        link_metric = value;
        link_metric.value_namespace = name_space;
        link_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-type")
    {
        link_type = value;
        link_type.value_namespace = name_space;
        link_type.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "link-data")
    {
        link_data.yfilter = yfilter;
    }
    if(value_path == "link-id")
    {
        link_id.yfilter = yfilter;
    }
    if(value_path == "link-metric")
    {
        link_metric.yfilter = yfilter;
    }
    if(value_path == "link-type")
    {
        link_type.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link-tos" || name == "link-data" || name == "link-id" || name == "link-metric" || name == "link-type")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::LinkTos::LinkTos()
    :
    router_tos{YType::uint16, "router-tos"},
    tos_cost{YType::uint16, "tos-cost"}
{

    yang_name = "link-tos"; yang_parent_name = "internal-link"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::LinkTos::~LinkTos()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::LinkTos::has_data() const
{
    return router_tos.is_set
	|| tos_cost.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::LinkTos::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(router_tos.yfilter)
	|| ydk::is_set(tos_cost.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::LinkTos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-tos";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::LinkTos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_tos.is_set || is_set(router_tos.yfilter)) leaf_name_data.push_back(router_tos.get_name_leafdata());
    if (tos_cost.is_set || is_set(tos_cost.yfilter)) leaf_name_data.push_back(tos_cost.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::LinkTos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::LinkTos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::LinkTos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "router-tos")
    {
        router_tos = value;
        router_tos.value_namespace = name_space;
        router_tos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tos-cost")
    {
        tos_cost = value;
        tos_cost.value_namespace = name_space;
        tos_cost.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::LinkTos::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "router-tos")
    {
        router_tos.yfilter = yfilter;
    }
    if(value_path == "tos-cost")
    {
        tos_cost.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::LinkTos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "router-tos" || name == "tos-cost")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::Link()
    :
    link_data{YType::str, "link-data"},
    link_id{YType::str, "link-id"},
    link_metric{YType::uint16, "link-metric"},
    link_type{YType::enumeration, "link-type"}
{

    yang_name = "link"; yang_parent_name = "router-lsa-type"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::~Link()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::has_data() const
{
    for (std::size_t index=0; index<link_tos.size(); index++)
    {
        if(link_tos[index]->has_data())
            return true;
    }
    return link_data.is_set
	|| link_id.is_set
	|| link_metric.is_set
	|| link_type.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::has_operation() const
{
    for (std::size_t index=0; index<link_tos.size(); index++)
    {
        if(link_tos[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(link_data.yfilter)
	|| ydk::is_set(link_id.yfilter)
	|| ydk::is_set(link_metric.yfilter)
	|| ydk::is_set(link_type.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_data.is_set || is_set(link_data.yfilter)) leaf_name_data.push_back(link_data.get_name_leafdata());
    if (link_id.is_set || is_set(link_id.yfilter)) leaf_name_data.push_back(link_id.get_name_leafdata());
    if (link_metric.is_set || is_set(link_metric.yfilter)) leaf_name_data.push_back(link_metric.get_name_leafdata());
    if (link_type.is_set || is_set(link_type.yfilter)) leaf_name_data.push_back(link_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "link-tos")
    {
        for(auto const & c : link_tos)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::LinkTos>();
        c->parent = this;
        link_tos.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : link_tos)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "link-data")
    {
        link_data = value;
        link_data.value_namespace = name_space;
        link_data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-id")
    {
        link_id = value;
        link_id.value_namespace = name_space;
        link_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-metric")
    {
        link_metric = value;
        link_metric.value_namespace = name_space;
        link_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-type")
    {
        link_type = value;
        link_type.value_namespace = name_space;
        link_type.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "link-data")
    {
        link_data.yfilter = yfilter;
    }
    if(value_path == "link-id")
    {
        link_id.yfilter = yfilter;
    }
    if(value_path == "link-metric")
    {
        link_metric.yfilter = yfilter;
    }
    if(value_path == "link-type")
    {
        link_type.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link-tos" || name == "link-data" || name == "link-id" || name == "link-metric" || name == "link-type")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::LinkTos::LinkTos()
    :
    router_tos{YType::uint16, "router-tos"},
    tos_cost{YType::uint16, "tos-cost"}
{

    yang_name = "link-tos"; yang_parent_name = "link"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::LinkTos::~LinkTos()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::LinkTos::has_data() const
{
    return router_tos.is_set
	|| tos_cost.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::LinkTos::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(router_tos.yfilter)
	|| ydk::is_set(tos_cost.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::LinkTos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-tos";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::LinkTos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_tos.is_set || is_set(router_tos.yfilter)) leaf_name_data.push_back(router_tos.get_name_leafdata());
    if (tos_cost.is_set || is_set(tos_cost.yfilter)) leaf_name_data.push_back(tos_cost.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::LinkTos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::LinkTos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::LinkTos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "router-tos")
    {
        router_tos = value;
        router_tos.value_namespace = name_space;
        router_tos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tos-cost")
    {
        tos_cost = value;
        tos_cost.value_namespace = name_space;
        tos_cost.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::LinkTos::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "router-tos")
    {
        router_tos.yfilter = yfilter;
    }
    if(value_path == "tos-cost")
    {
        tos_cost.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::LinkTos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "router-tos" || name == "tos-cost")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::SummaryLsaType::SummaryLsaType()
    :
    internal_sum_lsa{YType::boolean, "internal-sum-lsa"},
    summary_prefix_length{YType::uint32, "summary-prefix-length"}
{

    yang_name = "summary-lsa-type"; yang_parent_name = "lsa-internal-data"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::SummaryLsaType::~SummaryLsaType()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::SummaryLsaType::has_data() const
{
    for (std::size_t index=0; index<summary_lsa_metric.size(); index++)
    {
        if(summary_lsa_metric[index]->has_data())
            return true;
    }
    return internal_sum_lsa.is_set
	|| summary_prefix_length.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::SummaryLsaType::has_operation() const
{
    for (std::size_t index=0; index<summary_lsa_metric.size(); index++)
    {
        if(summary_lsa_metric[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(internal_sum_lsa.yfilter)
	|| ydk::is_set(summary_prefix_length.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::SummaryLsaType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary-lsa-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::SummaryLsaType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (internal_sum_lsa.is_set || is_set(internal_sum_lsa.yfilter)) leaf_name_data.push_back(internal_sum_lsa.get_name_leafdata());
    if (summary_prefix_length.is_set || is_set(summary_prefix_length.yfilter)) leaf_name_data.push_back(summary_prefix_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::SummaryLsaType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "summary-lsa-metric")
    {
        for(auto const & c : summary_lsa_metric)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::SummaryLsaType::SummaryLsaMetric>();
        c->parent = this;
        summary_lsa_metric.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::SummaryLsaType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : summary_lsa_metric)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::SummaryLsaType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "internal-sum-lsa")
    {
        internal_sum_lsa = value;
        internal_sum_lsa.value_namespace = name_space;
        internal_sum_lsa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "summary-prefix-length")
    {
        summary_prefix_length = value;
        summary_prefix_length.value_namespace = name_space;
        summary_prefix_length.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::SummaryLsaType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "internal-sum-lsa")
    {
        internal_sum_lsa.yfilter = yfilter;
    }
    if(value_path == "summary-prefix-length")
    {
        summary_prefix_length.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::SummaryLsaType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "summary-lsa-metric" || name == "internal-sum-lsa" || name == "summary-prefix-length")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::SummaryLsaType::SummaryLsaMetric::SummaryLsaMetric()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "summary-lsa-metric"; yang_parent_name = "summary-lsa-type"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::SummaryLsaType::SummaryLsaMetric::~SummaryLsaMetric()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::SummaryLsaType::SummaryLsaMetric::has_data() const
{
    return entry.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::SummaryLsaType::SummaryLsaMetric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::SummaryLsaType::SummaryLsaMetric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary-lsa-metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::SummaryLsaType::SummaryLsaMetric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::SummaryLsaType::SummaryLsaMetric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::SummaryLsaType::SummaryLsaMetric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::SummaryLsaType::SummaryLsaMetric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::SummaryLsaType::SummaryLsaMetric::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::SummaryLsaType::SummaryLsaMetric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseSummaries::DatabaseSummaries()
{

    yang_name = "database-summaries"; yang_parent_name = "database"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseSummaries::~DatabaseSummaries()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseSummaries::has_data() const
{
    for (std::size_t index=0; index<database_summary.size(); index++)
    {
        if(database_summary[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseSummaries::has_operation() const
{
    for (std::size_t index=0; index<database_summary.size(); index++)
    {
        if(database_summary[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Database::DatabaseSummaries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-summaries";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::DatabaseSummaries::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::DatabaseSummaries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "database-summary")
    {
        for(auto const & c : database_summary)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::DatabaseSummaries::DatabaseSummary>();
        c->parent = this;
        database_summary.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::DatabaseSummaries::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : database_summary)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseSummaries::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseSummaries::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseSummaries::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "database-summary")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseSummaries::DatabaseSummary::DatabaseSummary()
    :
    area_id{YType::int32, "area-id"},
    dbase_sum_area_id_string{YType::str, "dbase-sum-area-id-string"}
{

    yang_name = "database-summary"; yang_parent_name = "database-summaries"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseSummaries::DatabaseSummary::~DatabaseSummary()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseSummaries::DatabaseSummary::has_data() const
{
    for (std::size_t index=0; index<area_lsa_counter.size(); index++)
    {
        if(area_lsa_counter[index]->has_data())
            return true;
    }
    return area_id.is_set
	|| dbase_sum_area_id_string.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseSummaries::DatabaseSummary::has_operation() const
{
    for (std::size_t index=0; index<area_lsa_counter.size(); index++)
    {
        if(area_lsa_counter[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(area_id.yfilter)
	|| ydk::is_set(dbase_sum_area_id_string.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Database::DatabaseSummaries::DatabaseSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-summary" <<"[area-id='" <<area_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::DatabaseSummaries::DatabaseSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_id.is_set || is_set(area_id.yfilter)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (dbase_sum_area_id_string.is_set || is_set(dbase_sum_area_id_string.yfilter)) leaf_name_data.push_back(dbase_sum_area_id_string.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::DatabaseSummaries::DatabaseSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "area-lsa-counter")
    {
        for(auto const & c : area_lsa_counter)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::DatabaseSummaries::DatabaseSummary::AreaLsaCounter>();
        c->parent = this;
        area_lsa_counter.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::DatabaseSummaries::DatabaseSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : area_lsa_counter)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseSummaries::DatabaseSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "area-id")
    {
        area_id = value;
        area_id.value_namespace = name_space;
        area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dbase-sum-area-id-string")
    {
        dbase_sum_area_id_string = value;
        dbase_sum_area_id_string.value_namespace = name_space;
        dbase_sum_area_id_string.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseSummaries::DatabaseSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "area-id")
    {
        area_id.yfilter = yfilter;
    }
    if(value_path == "dbase-sum-area-id-string")
    {
        dbase_sum_area_id_string.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseSummaries::DatabaseSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "area-lsa-counter" || name == "area-id" || name == "dbase-sum-area-id-string")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseSummaries::DatabaseSummary::AreaLsaCounter::AreaLsaCounter()
    :
    lsa_count{YType::int32, "lsa-count"},
    lsa_delete_count{YType::int32, "lsa-delete-count"},
    lsa_maxage_count{YType::int32, "lsa-maxage-count"},
    lsa_self_count{YType::int32, "lsa-self-count"},
    lsa_type{YType::enumeration, "lsa-type"}
{

    yang_name = "area-lsa-counter"; yang_parent_name = "database-summary"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseSummaries::DatabaseSummary::AreaLsaCounter::~AreaLsaCounter()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseSummaries::DatabaseSummary::AreaLsaCounter::has_data() const
{
    return lsa_count.is_set
	|| lsa_delete_count.is_set
	|| lsa_maxage_count.is_set
	|| lsa_self_count.is_set
	|| lsa_type.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseSummaries::DatabaseSummary::AreaLsaCounter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsa_count.yfilter)
	|| ydk::is_set(lsa_delete_count.yfilter)
	|| ydk::is_set(lsa_maxage_count.yfilter)
	|| ydk::is_set(lsa_self_count.yfilter)
	|| ydk::is_set(lsa_type.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Database::DatabaseSummaries::DatabaseSummary::AreaLsaCounter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "area-lsa-counter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::DatabaseSummaries::DatabaseSummary::AreaLsaCounter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsa_count.is_set || is_set(lsa_count.yfilter)) leaf_name_data.push_back(lsa_count.get_name_leafdata());
    if (lsa_delete_count.is_set || is_set(lsa_delete_count.yfilter)) leaf_name_data.push_back(lsa_delete_count.get_name_leafdata());
    if (lsa_maxage_count.is_set || is_set(lsa_maxage_count.yfilter)) leaf_name_data.push_back(lsa_maxage_count.get_name_leafdata());
    if (lsa_self_count.is_set || is_set(lsa_self_count.yfilter)) leaf_name_data.push_back(lsa_self_count.get_name_leafdata());
    if (lsa_type.is_set || is_set(lsa_type.yfilter)) leaf_name_data.push_back(lsa_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::DatabaseSummaries::DatabaseSummary::AreaLsaCounter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::DatabaseSummaries::DatabaseSummary::AreaLsaCounter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseSummaries::DatabaseSummary::AreaLsaCounter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsa-count")
    {
        lsa_count = value;
        lsa_count.value_namespace = name_space;
        lsa_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-delete-count")
    {
        lsa_delete_count = value;
        lsa_delete_count.value_namespace = name_space;
        lsa_delete_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-maxage-count")
    {
        lsa_maxage_count = value;
        lsa_maxage_count.value_namespace = name_space;
        lsa_maxage_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-self-count")
    {
        lsa_self_count = value;
        lsa_self_count.value_namespace = name_space;
        lsa_self_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-type")
    {
        lsa_type = value;
        lsa_type.value_namespace = name_space;
        lsa_type.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseSummaries::DatabaseSummary::AreaLsaCounter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsa-count")
    {
        lsa_count.yfilter = yfilter;
    }
    if(value_path == "lsa-delete-count")
    {
        lsa_delete_count.yfilter = yfilter;
    }
    if(value_path == "lsa-maxage-count")
    {
        lsa_maxage_count.yfilter = yfilter;
    }
    if(value_path == "lsa-self-count")
    {
        lsa_self_count.yfilter = yfilter;
    }
    if(value_path == "lsa-type")
    {
        lsa_type.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseSummaries::DatabaseSummary::AreaLsaCounter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsa-count" || name == "lsa-delete-count" || name == "lsa-maxage-count" || name == "lsa-self-count" || name == "lsa-type")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseSummaryAs::DatabaseSummaryAs()
{

    yang_name = "database-summary-as"; yang_parent_name = "database"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseSummaryAs::~DatabaseSummaryAs()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseSummaryAs::has_data() const
{
    for (std::size_t index=0; index<as_lsa_counter.size(); index++)
    {
        if(as_lsa_counter[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseSummaryAs::has_operation() const
{
    for (std::size_t index=0; index<as_lsa_counter.size(); index++)
    {
        if(as_lsa_counter[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Database::DatabaseSummaryAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-summary-as";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::DatabaseSummaryAs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::DatabaseSummaryAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "as-lsa-counter")
    {
        for(auto const & c : as_lsa_counter)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::DatabaseSummaryAs::AsLsaCounter>();
        c->parent = this;
        as_lsa_counter.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::DatabaseSummaryAs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : as_lsa_counter)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseSummaryAs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseSummaryAs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseSummaryAs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as-lsa-counter")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseSummaryAs::AsLsaCounter::AsLsaCounter()
    :
    lsa_count{YType::int32, "lsa-count"},
    lsa_delete_count{YType::int32, "lsa-delete-count"},
    lsa_maxage_count{YType::int32, "lsa-maxage-count"},
    lsa_self_count{YType::int32, "lsa-self-count"},
    lsa_type{YType::enumeration, "lsa-type"}
{

    yang_name = "as-lsa-counter"; yang_parent_name = "database-summary-as"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::DatabaseSummaryAs::AsLsaCounter::~AsLsaCounter()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseSummaryAs::AsLsaCounter::has_data() const
{
    return lsa_count.is_set
	|| lsa_delete_count.is_set
	|| lsa_maxage_count.is_set
	|| lsa_self_count.is_set
	|| lsa_type.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseSummaryAs::AsLsaCounter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsa_count.yfilter)
	|| ydk::is_set(lsa_delete_count.yfilter)
	|| ydk::is_set(lsa_maxage_count.yfilter)
	|| ydk::is_set(lsa_self_count.yfilter)
	|| ydk::is_set(lsa_type.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Database::DatabaseSummaryAs::AsLsaCounter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "as-lsa-counter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::DatabaseSummaryAs::AsLsaCounter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsa_count.is_set || is_set(lsa_count.yfilter)) leaf_name_data.push_back(lsa_count.get_name_leafdata());
    if (lsa_delete_count.is_set || is_set(lsa_delete_count.yfilter)) leaf_name_data.push_back(lsa_delete_count.get_name_leafdata());
    if (lsa_maxage_count.is_set || is_set(lsa_maxage_count.yfilter)) leaf_name_data.push_back(lsa_maxage_count.get_name_leafdata());
    if (lsa_self_count.is_set || is_set(lsa_self_count.yfilter)) leaf_name_data.push_back(lsa_self_count.get_name_leafdata());
    if (lsa_type.is_set || is_set(lsa_type.yfilter)) leaf_name_data.push_back(lsa_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::DatabaseSummaryAs::AsLsaCounter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::DatabaseSummaryAs::AsLsaCounter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseSummaryAs::AsLsaCounter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsa-count")
    {
        lsa_count = value;
        lsa_count.value_namespace = name_space;
        lsa_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-delete-count")
    {
        lsa_delete_count = value;
        lsa_delete_count.value_namespace = name_space;
        lsa_delete_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-maxage-count")
    {
        lsa_maxage_count = value;
        lsa_maxage_count.value_namespace = name_space;
        lsa_maxage_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-self-count")
    {
        lsa_self_count = value;
        lsa_self_count.value_namespace = name_space;
        lsa_self_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-type")
    {
        lsa_type = value;
        lsa_type.value_namespace = name_space;
        lsa_type.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Database::DatabaseSummaryAs::AsLsaCounter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsa-count")
    {
        lsa_count.yfilter = yfilter;
    }
    if(value_path == "lsa-delete-count")
    {
        lsa_delete_count.yfilter = yfilter;
    }
    if(value_path == "lsa-maxage-count")
    {
        lsa_maxage_count.yfilter = yfilter;
    }
    if(value_path == "lsa-self-count")
    {
        lsa_self_count.yfilter = yfilter;
    }
    if(value_path == "lsa-type")
    {
        lsa_type.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Database::DatabaseSummaryAs::AsLsaCounter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsa-count" || name == "lsa-delete-count" || name == "lsa-maxage-count" || name == "lsa-self-count" || name == "lsa-type")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::LsaSummaries::LsaSummaries()
{

    yang_name = "lsa-summaries"; yang_parent_name = "database"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::LsaSummaries::~LsaSummaries()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::LsaSummaries::has_data() const
{
    for (std::size_t index=0; index<lsa_summary.size(); index++)
    {
        if(lsa_summary[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::DefaultVrf::Database::LsaSummaries::has_operation() const
{
    for (std::size_t index=0; index<lsa_summary.size(); index++)
    {
        if(lsa_summary[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Database::LsaSummaries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-summaries";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::LsaSummaries::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::LsaSummaries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsa-summary")
    {
        for(auto const & c : lsa_summary)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::LsaSummaries::LsaSummary>();
        c->parent = this;
        lsa_summary.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::LsaSummaries::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : lsa_summary)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::LsaSummaries::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::DefaultVrf::Database::LsaSummaries::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::LsaSummaries::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsa-summary")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::LsaSummaries::LsaSummary::LsaSummary()
    :
    advertising_router{YType::str, "advertising-router"},
    area_id{YType::int32, "area-id"},
    external_tag{YType::uint32, "external-tag"},
    interface_name{YType::str, "interface-name"},
    link_count{YType::uint16, "link-count"},
    ls_id{YType::str, "ls-id"},
    ls_type{YType::enumeration, "ls-type"}
    	,
    lsa_header(std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::LsaSummaries::LsaSummary::LsaHeader>())
{
    lsa_header->parent = this;

    yang_name = "lsa-summary"; yang_parent_name = "lsa-summaries"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::LsaSummaries::LsaSummary::~LsaSummary()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::LsaSummaries::LsaSummary::has_data() const
{
    return advertising_router.is_set
	|| area_id.is_set
	|| external_tag.is_set
	|| interface_name.is_set
	|| link_count.is_set
	|| ls_id.is_set
	|| ls_type.is_set
	|| (lsa_header !=  nullptr && lsa_header->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::Database::LsaSummaries::LsaSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(advertising_router.yfilter)
	|| ydk::is_set(area_id.yfilter)
	|| ydk::is_set(external_tag.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(link_count.yfilter)
	|| ydk::is_set(ls_id.yfilter)
	|| ydk::is_set(ls_type.yfilter)
	|| (lsa_header !=  nullptr && lsa_header->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::Database::LsaSummaries::LsaSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::LsaSummaries::LsaSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (advertising_router.is_set || is_set(advertising_router.yfilter)) leaf_name_data.push_back(advertising_router.get_name_leafdata());
    if (area_id.is_set || is_set(area_id.yfilter)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (external_tag.is_set || is_set(external_tag.yfilter)) leaf_name_data.push_back(external_tag.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (link_count.is_set || is_set(link_count.yfilter)) leaf_name_data.push_back(link_count.get_name_leafdata());
    if (ls_id.is_set || is_set(ls_id.yfilter)) leaf_name_data.push_back(ls_id.get_name_leafdata());
    if (ls_type.is_set || is_set(ls_type.yfilter)) leaf_name_data.push_back(ls_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::LsaSummaries::LsaSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsa-header")
    {
        if(lsa_header == nullptr)
        {
            lsa_header = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::LsaSummaries::LsaSummary::LsaHeader>();
        }
        return lsa_header;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::LsaSummaries::LsaSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(lsa_header != nullptr)
    {
        children["lsa-header"] = lsa_header;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::LsaSummaries::LsaSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "advertising-router")
    {
        advertising_router = value;
        advertising_router.value_namespace = name_space;
        advertising_router.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-id")
    {
        area_id = value;
        area_id.value_namespace = name_space;
        area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-tag")
    {
        external_tag = value;
        external_tag.value_namespace = name_space;
        external_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-count")
    {
        link_count = value;
        link_count.value_namespace = name_space;
        link_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ls-id")
    {
        ls_id = value;
        ls_id.value_namespace = name_space;
        ls_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ls-type")
    {
        ls_type = value;
        ls_type.value_namespace = name_space;
        ls_type.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Database::LsaSummaries::LsaSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "advertising-router")
    {
        advertising_router.yfilter = yfilter;
    }
    if(value_path == "area-id")
    {
        area_id.yfilter = yfilter;
    }
    if(value_path == "external-tag")
    {
        external_tag.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "link-count")
    {
        link_count.yfilter = yfilter;
    }
    if(value_path == "ls-id")
    {
        ls_id.yfilter = yfilter;
    }
    if(value_path == "ls-type")
    {
        ls_type.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Database::LsaSummaries::LsaSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsa-header" || name == "advertising-router" || name == "area-id" || name == "external-tag" || name == "interface-name" || name == "link-count" || name == "ls-id" || name == "ls-type")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::LsaSummaries::LsaSummary::LsaHeader::LsaHeader()
    :
    advertising_router{YType::str, "advertising-router"},
    checksum{YType::uint16, "checksum"},
    dn_age_lsa{YType::boolean, "dn-age-lsa"},
    ls_type{YType::enumeration, "ls-type"},
    lsa_age{YType::uint16, "lsa-age"},
    lsa_area_id{YType::str, "lsa-area-id"},
    lsid{YType::str, "lsid"},
    nsf{YType::boolean, "nsf"},
    sequence_number{YType::uint32, "sequence-number"}
{

    yang_name = "lsa-header"; yang_parent_name = "lsa-summary"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::LsaSummaries::LsaSummary::LsaHeader::~LsaHeader()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::LsaSummaries::LsaSummary::LsaHeader::has_data() const
{
    return advertising_router.is_set
	|| checksum.is_set
	|| dn_age_lsa.is_set
	|| ls_type.is_set
	|| lsa_age.is_set
	|| lsa_area_id.is_set
	|| lsid.is_set
	|| nsf.is_set
	|| sequence_number.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Database::LsaSummaries::LsaSummary::LsaHeader::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(advertising_router.yfilter)
	|| ydk::is_set(checksum.yfilter)
	|| ydk::is_set(dn_age_lsa.yfilter)
	|| ydk::is_set(ls_type.yfilter)
	|| ydk::is_set(lsa_age.yfilter)
	|| ydk::is_set(lsa_area_id.yfilter)
	|| ydk::is_set(lsid.yfilter)
	|| ydk::is_set(nsf.yfilter)
	|| ydk::is_set(sequence_number.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Database::LsaSummaries::LsaSummary::LsaHeader::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-header";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::LsaSummaries::LsaSummary::LsaHeader::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (advertising_router.is_set || is_set(advertising_router.yfilter)) leaf_name_data.push_back(advertising_router.get_name_leafdata());
    if (checksum.is_set || is_set(checksum.yfilter)) leaf_name_data.push_back(checksum.get_name_leafdata());
    if (dn_age_lsa.is_set || is_set(dn_age_lsa.yfilter)) leaf_name_data.push_back(dn_age_lsa.get_name_leafdata());
    if (ls_type.is_set || is_set(ls_type.yfilter)) leaf_name_data.push_back(ls_type.get_name_leafdata());
    if (lsa_age.is_set || is_set(lsa_age.yfilter)) leaf_name_data.push_back(lsa_age.get_name_leafdata());
    if (lsa_area_id.is_set || is_set(lsa_area_id.yfilter)) leaf_name_data.push_back(lsa_area_id.get_name_leafdata());
    if (lsid.is_set || is_set(lsid.yfilter)) leaf_name_data.push_back(lsid.get_name_leafdata());
    if (nsf.is_set || is_set(nsf.yfilter)) leaf_name_data.push_back(nsf.get_name_leafdata());
    if (sequence_number.is_set || is_set(sequence_number.yfilter)) leaf_name_data.push_back(sequence_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::LsaSummaries::LsaSummary::LsaHeader::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::LsaSummaries::LsaSummary::LsaHeader::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::LsaSummaries::LsaSummary::LsaHeader::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "advertising-router")
    {
        advertising_router = value;
        advertising_router.value_namespace = name_space;
        advertising_router.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "checksum")
    {
        checksum = value;
        checksum.value_namespace = name_space;
        checksum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dn-age-lsa")
    {
        dn_age_lsa = value;
        dn_age_lsa.value_namespace = name_space;
        dn_age_lsa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ls-type")
    {
        ls_type = value;
        ls_type.value_namespace = name_space;
        ls_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-age")
    {
        lsa_age = value;
        lsa_age.value_namespace = name_space;
        lsa_age.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-area-id")
    {
        lsa_area_id = value;
        lsa_area_id.value_namespace = name_space;
        lsa_area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsid")
    {
        lsid = value;
        lsid.value_namespace = name_space;
        lsid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsf")
    {
        nsf = value;
        nsf.value_namespace = name_space;
        nsf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence-number")
    {
        sequence_number = value;
        sequence_number.value_namespace = name_space;
        sequence_number.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Database::LsaSummaries::LsaSummary::LsaHeader::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "advertising-router")
    {
        advertising_router.yfilter = yfilter;
    }
    if(value_path == "checksum")
    {
        checksum.yfilter = yfilter;
    }
    if(value_path == "dn-age-lsa")
    {
        dn_age_lsa.yfilter = yfilter;
    }
    if(value_path == "ls-type")
    {
        ls_type.yfilter = yfilter;
    }
    if(value_path == "lsa-age")
    {
        lsa_age.yfilter = yfilter;
    }
    if(value_path == "lsa-area-id")
    {
        lsa_area_id.yfilter = yfilter;
    }
    if(value_path == "lsid")
    {
        lsid.yfilter = yfilter;
    }
    if(value_path == "nsf")
    {
        nsf.yfilter = yfilter;
    }
    if(value_path == "sequence-number")
    {
        sequence_number.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Database::LsaSummaries::LsaSummary::LsaHeader::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "advertising-router" || name == "checksum" || name == "dn-age-lsa" || name == "ls-type" || name == "lsa-age" || name == "lsa-area-id" || name == "lsid" || name == "nsf" || name == "sequence-number")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsas()
{

    yang_name = "lsas"; yang_parent_name = "database"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::Lsas::~Lsas()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::has_data() const
{
    for (std::size_t index=0; index<lsa.size(); index++)
    {
        if(lsa[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::has_operation() const
{
    for (std::size_t index=0; index<lsa.size(); index++)
    {
        if(lsa[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Database::Lsas::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsas";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::Lsas::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::Lsas::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsa")
    {
        for(auto const & c : lsa)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa>();
        c->parent = this;
        lsa.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::Lsas::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : lsa)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::Lsas::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::DefaultVrf::Database::Lsas::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsa")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::Lsa()
    :
    advertising_router{YType::str, "advertising-router"},
    area_id{YType::int32, "area-id"},
    interface_name{YType::str, "interface-name"},
    ls_id{YType::str, "ls-id"},
    ls_type{YType::enumeration, "ls-type"}
    	,
    lsa_detail_data(std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaDetailData>())
	,lsa_header(std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaHeader>())
	,lsa_internal_data(std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData>())
{
    lsa_detail_data->parent = this;
    lsa_header->parent = this;
    lsa_internal_data->parent = this;

    yang_name = "lsa"; yang_parent_name = "lsas"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::~Lsa()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::has_data() const
{
    return advertising_router.is_set
	|| area_id.is_set
	|| interface_name.is_set
	|| ls_id.is_set
	|| ls_type.is_set
	|| (lsa_detail_data !=  nullptr && lsa_detail_data->has_data())
	|| (lsa_header !=  nullptr && lsa_header->has_data())
	|| (lsa_internal_data !=  nullptr && lsa_internal_data->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(advertising_router.yfilter)
	|| ydk::is_set(area_id.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(ls_id.yfilter)
	|| ydk::is_set(ls_type.yfilter)
	|| (lsa_detail_data !=  nullptr && lsa_detail_data->has_operation())
	|| (lsa_header !=  nullptr && lsa_header->has_operation())
	|| (lsa_internal_data !=  nullptr && lsa_internal_data->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (advertising_router.is_set || is_set(advertising_router.yfilter)) leaf_name_data.push_back(advertising_router.get_name_leafdata());
    if (area_id.is_set || is_set(area_id.yfilter)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (ls_id.is_set || is_set(ls_id.yfilter)) leaf_name_data.push_back(ls_id.get_name_leafdata());
    if (ls_type.is_set || is_set(ls_type.yfilter)) leaf_name_data.push_back(ls_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsa-detail-data")
    {
        if(lsa_detail_data == nullptr)
        {
            lsa_detail_data = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaDetailData>();
        }
        return lsa_detail_data;
    }

    if(child_yang_name == "lsa-header")
    {
        if(lsa_header == nullptr)
        {
            lsa_header = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaHeader>();
        }
        return lsa_header;
    }

    if(child_yang_name == "lsa-internal-data")
    {
        if(lsa_internal_data == nullptr)
        {
            lsa_internal_data = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData>();
        }
        return lsa_internal_data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(lsa_detail_data != nullptr)
    {
        children["lsa-detail-data"] = lsa_detail_data;
    }

    if(lsa_header != nullptr)
    {
        children["lsa-header"] = lsa_header;
    }

    if(lsa_internal_data != nullptr)
    {
        children["lsa-internal-data"] = lsa_internal_data;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "advertising-router")
    {
        advertising_router = value;
        advertising_router.value_namespace = name_space;
        advertising_router.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-id")
    {
        area_id = value;
        area_id.value_namespace = name_space;
        area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ls-id")
    {
        ls_id = value;
        ls_id.value_namespace = name_space;
        ls_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ls-type")
    {
        ls_type = value;
        ls_type.value_namespace = name_space;
        ls_type.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "advertising-router")
    {
        advertising_router.yfilter = yfilter;
    }
    if(value_path == "area-id")
    {
        area_id.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "ls-id")
    {
        ls_id.yfilter = yfilter;
    }
    if(value_path == "ls-type")
    {
        ls_type.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsa-detail-data" || name == "lsa-header" || name == "lsa-internal-data" || name == "advertising-router" || name == "area-id" || name == "interface-name" || name == "ls-id" || name == "ls-type")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaDetailData::LsaDetailData()
    :
    advertising_router_reachable{YType::boolean, "advertising-router-reachable"},
    ase_origin{YType::uint16, "ase-origin"},
    demand_circuit{YType::boolean, "demand-circuit"},
    dn_bit{YType::boolean, "dn-bit"},
    in_sync{YType::uint8, "in-sync"},
    length{YType::uint16, "length"},
    lsa_flood_required_post_fail_over{YType::boolean, "lsa-flood-required-post-fail-over"},
    lsa_prefix_priority{YType::uint8, "lsa-prefix-priority"},
    lsa_rate_limit_due_time{YType::uint32, "lsa-rate-limit-due-time"},
    lsadb_base_clock{YType::uint64, "lsadb-base-clock"},
    new_lsa_prefix_priority{YType::uint8, "new-lsa-prefix-priority"},
    nssa_translation{YType::boolean, "nssa-translation"},
    routing_bit{YType::boolean, "routing-bit"},
    sum_origin{YType::uint16, "sum-origin"},
    tos_capable{YType::boolean, "tos-capable"}
    	,
    lsa_last_updated_time(std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaDetailData::LsaLastUpdatedTime>())
	,lsa_throttle_timer(std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaDetailData::LsaThrottleTimer>())
	,lsadb_base_time_stamp(std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaDetailData::LsadbBaseTimeStamp>())
	,not_delete(std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaDetailData::NotDelete>())
{
    lsa_last_updated_time->parent = this;
    lsa_throttle_timer->parent = this;
    lsadb_base_time_stamp->parent = this;
    not_delete->parent = this;

    yang_name = "lsa-detail-data"; yang_parent_name = "lsa"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaDetailData::~LsaDetailData()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaDetailData::has_data() const
{
    return advertising_router_reachable.is_set
	|| ase_origin.is_set
	|| demand_circuit.is_set
	|| dn_bit.is_set
	|| in_sync.is_set
	|| length.is_set
	|| lsa_flood_required_post_fail_over.is_set
	|| lsa_prefix_priority.is_set
	|| lsa_rate_limit_due_time.is_set
	|| lsadb_base_clock.is_set
	|| new_lsa_prefix_priority.is_set
	|| nssa_translation.is_set
	|| routing_bit.is_set
	|| sum_origin.is_set
	|| tos_capable.is_set
	|| (lsa_last_updated_time !=  nullptr && lsa_last_updated_time->has_data())
	|| (lsa_throttle_timer !=  nullptr && lsa_throttle_timer->has_data())
	|| (lsadb_base_time_stamp !=  nullptr && lsadb_base_time_stamp->has_data())
	|| (not_delete !=  nullptr && not_delete->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaDetailData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(advertising_router_reachable.yfilter)
	|| ydk::is_set(ase_origin.yfilter)
	|| ydk::is_set(demand_circuit.yfilter)
	|| ydk::is_set(dn_bit.yfilter)
	|| ydk::is_set(in_sync.yfilter)
	|| ydk::is_set(length.yfilter)
	|| ydk::is_set(lsa_flood_required_post_fail_over.yfilter)
	|| ydk::is_set(lsa_prefix_priority.yfilter)
	|| ydk::is_set(lsa_rate_limit_due_time.yfilter)
	|| ydk::is_set(lsadb_base_clock.yfilter)
	|| ydk::is_set(new_lsa_prefix_priority.yfilter)
	|| ydk::is_set(nssa_translation.yfilter)
	|| ydk::is_set(routing_bit.yfilter)
	|| ydk::is_set(sum_origin.yfilter)
	|| ydk::is_set(tos_capable.yfilter)
	|| (lsa_last_updated_time !=  nullptr && lsa_last_updated_time->has_operation())
	|| (lsa_throttle_timer !=  nullptr && lsa_throttle_timer->has_operation())
	|| (lsadb_base_time_stamp !=  nullptr && lsadb_base_time_stamp->has_operation())
	|| (not_delete !=  nullptr && not_delete->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaDetailData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-detail-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaDetailData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (advertising_router_reachable.is_set || is_set(advertising_router_reachable.yfilter)) leaf_name_data.push_back(advertising_router_reachable.get_name_leafdata());
    if (ase_origin.is_set || is_set(ase_origin.yfilter)) leaf_name_data.push_back(ase_origin.get_name_leafdata());
    if (demand_circuit.is_set || is_set(demand_circuit.yfilter)) leaf_name_data.push_back(demand_circuit.get_name_leafdata());
    if (dn_bit.is_set || is_set(dn_bit.yfilter)) leaf_name_data.push_back(dn_bit.get_name_leafdata());
    if (in_sync.is_set || is_set(in_sync.yfilter)) leaf_name_data.push_back(in_sync.get_name_leafdata());
    if (length.is_set || is_set(length.yfilter)) leaf_name_data.push_back(length.get_name_leafdata());
    if (lsa_flood_required_post_fail_over.is_set || is_set(lsa_flood_required_post_fail_over.yfilter)) leaf_name_data.push_back(lsa_flood_required_post_fail_over.get_name_leafdata());
    if (lsa_prefix_priority.is_set || is_set(lsa_prefix_priority.yfilter)) leaf_name_data.push_back(lsa_prefix_priority.get_name_leafdata());
    if (lsa_rate_limit_due_time.is_set || is_set(lsa_rate_limit_due_time.yfilter)) leaf_name_data.push_back(lsa_rate_limit_due_time.get_name_leafdata());
    if (lsadb_base_clock.is_set || is_set(lsadb_base_clock.yfilter)) leaf_name_data.push_back(lsadb_base_clock.get_name_leafdata());
    if (new_lsa_prefix_priority.is_set || is_set(new_lsa_prefix_priority.yfilter)) leaf_name_data.push_back(new_lsa_prefix_priority.get_name_leafdata());
    if (nssa_translation.is_set || is_set(nssa_translation.yfilter)) leaf_name_data.push_back(nssa_translation.get_name_leafdata());
    if (routing_bit.is_set || is_set(routing_bit.yfilter)) leaf_name_data.push_back(routing_bit.get_name_leafdata());
    if (sum_origin.is_set || is_set(sum_origin.yfilter)) leaf_name_data.push_back(sum_origin.get_name_leafdata());
    if (tos_capable.is_set || is_set(tos_capable.yfilter)) leaf_name_data.push_back(tos_capable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaDetailData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsa-last-updated-time")
    {
        if(lsa_last_updated_time == nullptr)
        {
            lsa_last_updated_time = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaDetailData::LsaLastUpdatedTime>();
        }
        return lsa_last_updated_time;
    }

    if(child_yang_name == "lsa-throttle-timer")
    {
        if(lsa_throttle_timer == nullptr)
        {
            lsa_throttle_timer = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaDetailData::LsaThrottleTimer>();
        }
        return lsa_throttle_timer;
    }

    if(child_yang_name == "lsadb-base-time-stamp")
    {
        if(lsadb_base_time_stamp == nullptr)
        {
            lsadb_base_time_stamp = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaDetailData::LsadbBaseTimeStamp>();
        }
        return lsadb_base_time_stamp;
    }

    if(child_yang_name == "not-delete")
    {
        if(not_delete == nullptr)
        {
            not_delete = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaDetailData::NotDelete>();
        }
        return not_delete;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaDetailData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(lsa_last_updated_time != nullptr)
    {
        children["lsa-last-updated-time"] = lsa_last_updated_time;
    }

    if(lsa_throttle_timer != nullptr)
    {
        children["lsa-throttle-timer"] = lsa_throttle_timer;
    }

    if(lsadb_base_time_stamp != nullptr)
    {
        children["lsadb-base-time-stamp"] = lsadb_base_time_stamp;
    }

    if(not_delete != nullptr)
    {
        children["not-delete"] = not_delete;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaDetailData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "advertising-router-reachable")
    {
        advertising_router_reachable = value;
        advertising_router_reachable.value_namespace = name_space;
        advertising_router_reachable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ase-origin")
    {
        ase_origin = value;
        ase_origin.value_namespace = name_space;
        ase_origin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "demand-circuit")
    {
        demand_circuit = value;
        demand_circuit.value_namespace = name_space;
        demand_circuit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dn-bit")
    {
        dn_bit = value;
        dn_bit.value_namespace = name_space;
        dn_bit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-sync")
    {
        in_sync = value;
        in_sync.value_namespace = name_space;
        in_sync.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "length")
    {
        length = value;
        length.value_namespace = name_space;
        length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-flood-required-post-fail-over")
    {
        lsa_flood_required_post_fail_over = value;
        lsa_flood_required_post_fail_over.value_namespace = name_space;
        lsa_flood_required_post_fail_over.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-prefix-priority")
    {
        lsa_prefix_priority = value;
        lsa_prefix_priority.value_namespace = name_space;
        lsa_prefix_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-rate-limit-due-time")
    {
        lsa_rate_limit_due_time = value;
        lsa_rate_limit_due_time.value_namespace = name_space;
        lsa_rate_limit_due_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsadb-base-clock")
    {
        lsadb_base_clock = value;
        lsadb_base_clock.value_namespace = name_space;
        lsadb_base_clock.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "new-lsa-prefix-priority")
    {
        new_lsa_prefix_priority = value;
        new_lsa_prefix_priority.value_namespace = name_space;
        new_lsa_prefix_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-translation")
    {
        nssa_translation = value;
        nssa_translation.value_namespace = name_space;
        nssa_translation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "routing-bit")
    {
        routing_bit = value;
        routing_bit.value_namespace = name_space;
        routing_bit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sum-origin")
    {
        sum_origin = value;
        sum_origin.value_namespace = name_space;
        sum_origin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tos-capable")
    {
        tos_capable = value;
        tos_capable.value_namespace = name_space;
        tos_capable.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaDetailData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "advertising-router-reachable")
    {
        advertising_router_reachable.yfilter = yfilter;
    }
    if(value_path == "ase-origin")
    {
        ase_origin.yfilter = yfilter;
    }
    if(value_path == "demand-circuit")
    {
        demand_circuit.yfilter = yfilter;
    }
    if(value_path == "dn-bit")
    {
        dn_bit.yfilter = yfilter;
    }
    if(value_path == "in-sync")
    {
        in_sync.yfilter = yfilter;
    }
    if(value_path == "length")
    {
        length.yfilter = yfilter;
    }
    if(value_path == "lsa-flood-required-post-fail-over")
    {
        lsa_flood_required_post_fail_over.yfilter = yfilter;
    }
    if(value_path == "lsa-prefix-priority")
    {
        lsa_prefix_priority.yfilter = yfilter;
    }
    if(value_path == "lsa-rate-limit-due-time")
    {
        lsa_rate_limit_due_time.yfilter = yfilter;
    }
    if(value_path == "lsadb-base-clock")
    {
        lsadb_base_clock.yfilter = yfilter;
    }
    if(value_path == "new-lsa-prefix-priority")
    {
        new_lsa_prefix_priority.yfilter = yfilter;
    }
    if(value_path == "nssa-translation")
    {
        nssa_translation.yfilter = yfilter;
    }
    if(value_path == "routing-bit")
    {
        routing_bit.yfilter = yfilter;
    }
    if(value_path == "sum-origin")
    {
        sum_origin.yfilter = yfilter;
    }
    if(value_path == "tos-capable")
    {
        tos_capable.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaDetailData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsa-last-updated-time" || name == "lsa-throttle-timer" || name == "lsadb-base-time-stamp" || name == "not-delete" || name == "advertising-router-reachable" || name == "ase-origin" || name == "demand-circuit" || name == "dn-bit" || name == "in-sync" || name == "length" || name == "lsa-flood-required-post-fail-over" || name == "lsa-prefix-priority" || name == "lsa-rate-limit-due-time" || name == "lsadb-base-clock" || name == "new-lsa-prefix-priority" || name == "nssa-translation" || name == "routing-bit" || name == "sum-origin" || name == "tos-capable")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaDetailData::LsaLastUpdatedTime::LsaLastUpdatedTime()
    :
    nanosecond{YType::uint32, "nanosecond"},
    second{YType::uint32, "second"}
{

    yang_name = "lsa-last-updated-time"; yang_parent_name = "lsa-detail-data"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaDetailData::LsaLastUpdatedTime::~LsaLastUpdatedTime()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaDetailData::LsaLastUpdatedTime::has_data() const
{
    return nanosecond.is_set
	|| second.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaDetailData::LsaLastUpdatedTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanosecond.yfilter)
	|| ydk::is_set(second.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaDetailData::LsaLastUpdatedTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-last-updated-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaDetailData::LsaLastUpdatedTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanosecond.is_set || is_set(nanosecond.yfilter)) leaf_name_data.push_back(nanosecond.get_name_leafdata());
    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaDetailData::LsaLastUpdatedTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaDetailData::LsaLastUpdatedTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaDetailData::LsaLastUpdatedTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nanosecond")
    {
        nanosecond = value;
        nanosecond.value_namespace = name_space;
        nanosecond.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "second")
    {
        second = value;
        second.value_namespace = name_space;
        second.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaDetailData::LsaLastUpdatedTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nanosecond")
    {
        nanosecond.yfilter = yfilter;
    }
    if(value_path == "second")
    {
        second.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaDetailData::LsaLastUpdatedTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanosecond" || name == "second")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaDetailData::LsaThrottleTimer::LsaThrottleTimer()
    :
    last_inst_minute_table_index{YType::uint8, "last-inst-minute-table-index"},
    last_inst_second_table_index{YType::uint8, "last-inst-second-table-index"},
    minute_table_index{YType::uint8, "minute-table-index"},
    second_table_index{YType::uint8, "second-table-index"},
    timer_location{YType::enumeration, "timer-location"},
    timer_type{YType::enumeration, "timer-type"}
{

    yang_name = "lsa-throttle-timer"; yang_parent_name = "lsa-detail-data"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaDetailData::LsaThrottleTimer::~LsaThrottleTimer()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaDetailData::LsaThrottleTimer::has_data() const
{
    return last_inst_minute_table_index.is_set
	|| last_inst_second_table_index.is_set
	|| minute_table_index.is_set
	|| second_table_index.is_set
	|| timer_location.is_set
	|| timer_type.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaDetailData::LsaThrottleTimer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(last_inst_minute_table_index.yfilter)
	|| ydk::is_set(last_inst_second_table_index.yfilter)
	|| ydk::is_set(minute_table_index.yfilter)
	|| ydk::is_set(second_table_index.yfilter)
	|| ydk::is_set(timer_location.yfilter)
	|| ydk::is_set(timer_type.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaDetailData::LsaThrottleTimer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-throttle-timer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaDetailData::LsaThrottleTimer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (last_inst_minute_table_index.is_set || is_set(last_inst_minute_table_index.yfilter)) leaf_name_data.push_back(last_inst_minute_table_index.get_name_leafdata());
    if (last_inst_second_table_index.is_set || is_set(last_inst_second_table_index.yfilter)) leaf_name_data.push_back(last_inst_second_table_index.get_name_leafdata());
    if (minute_table_index.is_set || is_set(minute_table_index.yfilter)) leaf_name_data.push_back(minute_table_index.get_name_leafdata());
    if (second_table_index.is_set || is_set(second_table_index.yfilter)) leaf_name_data.push_back(second_table_index.get_name_leafdata());
    if (timer_location.is_set || is_set(timer_location.yfilter)) leaf_name_data.push_back(timer_location.get_name_leafdata());
    if (timer_type.is_set || is_set(timer_type.yfilter)) leaf_name_data.push_back(timer_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaDetailData::LsaThrottleTimer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaDetailData::LsaThrottleTimer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaDetailData::LsaThrottleTimer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "last-inst-minute-table-index")
    {
        last_inst_minute_table_index = value;
        last_inst_minute_table_index.value_namespace = name_space;
        last_inst_minute_table_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-inst-second-table-index")
    {
        last_inst_second_table_index = value;
        last_inst_second_table_index.value_namespace = name_space;
        last_inst_second_table_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minute-table-index")
    {
        minute_table_index = value;
        minute_table_index.value_namespace = name_space;
        minute_table_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "second-table-index")
    {
        second_table_index = value;
        second_table_index.value_namespace = name_space;
        second_table_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timer-location")
    {
        timer_location = value;
        timer_location.value_namespace = name_space;
        timer_location.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timer-type")
    {
        timer_type = value;
        timer_type.value_namespace = name_space;
        timer_type.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaDetailData::LsaThrottleTimer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "last-inst-minute-table-index")
    {
        last_inst_minute_table_index.yfilter = yfilter;
    }
    if(value_path == "last-inst-second-table-index")
    {
        last_inst_second_table_index.yfilter = yfilter;
    }
    if(value_path == "minute-table-index")
    {
        minute_table_index.yfilter = yfilter;
    }
    if(value_path == "second-table-index")
    {
        second_table_index.yfilter = yfilter;
    }
    if(value_path == "timer-location")
    {
        timer_location.yfilter = yfilter;
    }
    if(value_path == "timer-type")
    {
        timer_type.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaDetailData::LsaThrottleTimer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "last-inst-minute-table-index" || name == "last-inst-second-table-index" || name == "minute-table-index" || name == "second-table-index" || name == "timer-location" || name == "timer-type")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaDetailData::LsadbBaseTimeStamp::LsadbBaseTimeStamp()
    :
    nanosecond{YType::uint32, "nanosecond"},
    second{YType::uint32, "second"}
{

    yang_name = "lsadb-base-time-stamp"; yang_parent_name = "lsa-detail-data"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaDetailData::LsadbBaseTimeStamp::~LsadbBaseTimeStamp()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaDetailData::LsadbBaseTimeStamp::has_data() const
{
    return nanosecond.is_set
	|| second.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaDetailData::LsadbBaseTimeStamp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanosecond.yfilter)
	|| ydk::is_set(second.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaDetailData::LsadbBaseTimeStamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsadb-base-time-stamp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaDetailData::LsadbBaseTimeStamp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanosecond.is_set || is_set(nanosecond.yfilter)) leaf_name_data.push_back(nanosecond.get_name_leafdata());
    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaDetailData::LsadbBaseTimeStamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaDetailData::LsadbBaseTimeStamp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaDetailData::LsadbBaseTimeStamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nanosecond")
    {
        nanosecond = value;
        nanosecond.value_namespace = name_space;
        nanosecond.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "second")
    {
        second = value;
        second.value_namespace = name_space;
        second.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaDetailData::LsadbBaseTimeStamp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nanosecond")
    {
        nanosecond.yfilter = yfilter;
    }
    if(value_path == "second")
    {
        second.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaDetailData::LsadbBaseTimeStamp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanosecond" || name == "second")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaDetailData::NotDelete::NotDelete()
    :
    acknowledgement{YType::boolean, "acknowledgement"},
    flood_pending{YType::boolean, "flood-pending"},
    free_time{YType::uint32, "free-time"},
    maximum_age{YType::boolean, "maximum-age"},
    neighbor_exchange{YType::boolean, "neighbor-exchange"},
    no_delete{YType::boolean, "no-delete"},
    nsr_ack_pending{YType::boolean, "nsr-ack-pending"},
    nsr_flood_required{YType::boolean, "nsr-flood-required"},
    partial_spf{YType::boolean, "partial-spf"},
    rate_limit{YType::boolean, "rate-limit"},
    routing_table{YType::boolean, "routing-table"},
    sum_orig_pending{YType::boolean, "sum-orig-pending"}
{

    yang_name = "not-delete"; yang_parent_name = "lsa-detail-data"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaDetailData::NotDelete::~NotDelete()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaDetailData::NotDelete::has_data() const
{
    return acknowledgement.is_set
	|| flood_pending.is_set
	|| free_time.is_set
	|| maximum_age.is_set
	|| neighbor_exchange.is_set
	|| no_delete.is_set
	|| nsr_ack_pending.is_set
	|| nsr_flood_required.is_set
	|| partial_spf.is_set
	|| rate_limit.is_set
	|| routing_table.is_set
	|| sum_orig_pending.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaDetailData::NotDelete::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acknowledgement.yfilter)
	|| ydk::is_set(flood_pending.yfilter)
	|| ydk::is_set(free_time.yfilter)
	|| ydk::is_set(maximum_age.yfilter)
	|| ydk::is_set(neighbor_exchange.yfilter)
	|| ydk::is_set(no_delete.yfilter)
	|| ydk::is_set(nsr_ack_pending.yfilter)
	|| ydk::is_set(nsr_flood_required.yfilter)
	|| ydk::is_set(partial_spf.yfilter)
	|| ydk::is_set(rate_limit.yfilter)
	|| ydk::is_set(routing_table.yfilter)
	|| ydk::is_set(sum_orig_pending.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaDetailData::NotDelete::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "not-delete";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaDetailData::NotDelete::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acknowledgement.is_set || is_set(acknowledgement.yfilter)) leaf_name_data.push_back(acknowledgement.get_name_leafdata());
    if (flood_pending.is_set || is_set(flood_pending.yfilter)) leaf_name_data.push_back(flood_pending.get_name_leafdata());
    if (free_time.is_set || is_set(free_time.yfilter)) leaf_name_data.push_back(free_time.get_name_leafdata());
    if (maximum_age.is_set || is_set(maximum_age.yfilter)) leaf_name_data.push_back(maximum_age.get_name_leafdata());
    if (neighbor_exchange.is_set || is_set(neighbor_exchange.yfilter)) leaf_name_data.push_back(neighbor_exchange.get_name_leafdata());
    if (no_delete.is_set || is_set(no_delete.yfilter)) leaf_name_data.push_back(no_delete.get_name_leafdata());
    if (nsr_ack_pending.is_set || is_set(nsr_ack_pending.yfilter)) leaf_name_data.push_back(nsr_ack_pending.get_name_leafdata());
    if (nsr_flood_required.is_set || is_set(nsr_flood_required.yfilter)) leaf_name_data.push_back(nsr_flood_required.get_name_leafdata());
    if (partial_spf.is_set || is_set(partial_spf.yfilter)) leaf_name_data.push_back(partial_spf.get_name_leafdata());
    if (rate_limit.is_set || is_set(rate_limit.yfilter)) leaf_name_data.push_back(rate_limit.get_name_leafdata());
    if (routing_table.is_set || is_set(routing_table.yfilter)) leaf_name_data.push_back(routing_table.get_name_leafdata());
    if (sum_orig_pending.is_set || is_set(sum_orig_pending.yfilter)) leaf_name_data.push_back(sum_orig_pending.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaDetailData::NotDelete::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaDetailData::NotDelete::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaDetailData::NotDelete::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acknowledgement")
    {
        acknowledgement = value;
        acknowledgement.value_namespace = name_space;
        acknowledgement.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flood-pending")
    {
        flood_pending = value;
        flood_pending.value_namespace = name_space;
        flood_pending.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "free-time")
    {
        free_time = value;
        free_time.value_namespace = name_space;
        free_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-age")
    {
        maximum_age = value;
        maximum_age.value_namespace = name_space;
        maximum_age.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-exchange")
    {
        neighbor_exchange = value;
        neighbor_exchange.value_namespace = name_space;
        neighbor_exchange.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-delete")
    {
        no_delete = value;
        no_delete.value_namespace = name_space;
        no_delete.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-ack-pending")
    {
        nsr_ack_pending = value;
        nsr_ack_pending.value_namespace = name_space;
        nsr_ack_pending.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-flood-required")
    {
        nsr_flood_required = value;
        nsr_flood_required.value_namespace = name_space;
        nsr_flood_required.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partial-spf")
    {
        partial_spf = value;
        partial_spf.value_namespace = name_space;
        partial_spf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rate-limit")
    {
        rate_limit = value;
        rate_limit.value_namespace = name_space;
        rate_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "routing-table")
    {
        routing_table = value;
        routing_table.value_namespace = name_space;
        routing_table.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sum-orig-pending")
    {
        sum_orig_pending = value;
        sum_orig_pending.value_namespace = name_space;
        sum_orig_pending.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaDetailData::NotDelete::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acknowledgement")
    {
        acknowledgement.yfilter = yfilter;
    }
    if(value_path == "flood-pending")
    {
        flood_pending.yfilter = yfilter;
    }
    if(value_path == "free-time")
    {
        free_time.yfilter = yfilter;
    }
    if(value_path == "maximum-age")
    {
        maximum_age.yfilter = yfilter;
    }
    if(value_path == "neighbor-exchange")
    {
        neighbor_exchange.yfilter = yfilter;
    }
    if(value_path == "no-delete")
    {
        no_delete.yfilter = yfilter;
    }
    if(value_path == "nsr-ack-pending")
    {
        nsr_ack_pending.yfilter = yfilter;
    }
    if(value_path == "nsr-flood-required")
    {
        nsr_flood_required.yfilter = yfilter;
    }
    if(value_path == "partial-spf")
    {
        partial_spf.yfilter = yfilter;
    }
    if(value_path == "rate-limit")
    {
        rate_limit.yfilter = yfilter;
    }
    if(value_path == "routing-table")
    {
        routing_table.yfilter = yfilter;
    }
    if(value_path == "sum-orig-pending")
    {
        sum_orig_pending.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaDetailData::NotDelete::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acknowledgement" || name == "flood-pending" || name == "free-time" || name == "maximum-age" || name == "neighbor-exchange" || name == "no-delete" || name == "nsr-ack-pending" || name == "nsr-flood-required" || name == "partial-spf" || name == "rate-limit" || name == "routing-table" || name == "sum-orig-pending")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaHeader::LsaHeader()
    :
    advertising_router{YType::str, "advertising-router"},
    checksum{YType::uint16, "checksum"},
    dn_age_lsa{YType::boolean, "dn-age-lsa"},
    ls_type{YType::enumeration, "ls-type"},
    lsa_age{YType::uint16, "lsa-age"},
    lsa_area_id{YType::str, "lsa-area-id"},
    lsid{YType::str, "lsid"},
    nsf{YType::boolean, "nsf"},
    sequence_number{YType::uint32, "sequence-number"}
{

    yang_name = "lsa-header"; yang_parent_name = "lsa"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaHeader::~LsaHeader()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaHeader::has_data() const
{
    return advertising_router.is_set
	|| checksum.is_set
	|| dn_age_lsa.is_set
	|| ls_type.is_set
	|| lsa_age.is_set
	|| lsa_area_id.is_set
	|| lsid.is_set
	|| nsf.is_set
	|| sequence_number.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaHeader::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(advertising_router.yfilter)
	|| ydk::is_set(checksum.yfilter)
	|| ydk::is_set(dn_age_lsa.yfilter)
	|| ydk::is_set(ls_type.yfilter)
	|| ydk::is_set(lsa_age.yfilter)
	|| ydk::is_set(lsa_area_id.yfilter)
	|| ydk::is_set(lsid.yfilter)
	|| ydk::is_set(nsf.yfilter)
	|| ydk::is_set(sequence_number.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaHeader::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-header";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaHeader::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (advertising_router.is_set || is_set(advertising_router.yfilter)) leaf_name_data.push_back(advertising_router.get_name_leafdata());
    if (checksum.is_set || is_set(checksum.yfilter)) leaf_name_data.push_back(checksum.get_name_leafdata());
    if (dn_age_lsa.is_set || is_set(dn_age_lsa.yfilter)) leaf_name_data.push_back(dn_age_lsa.get_name_leafdata());
    if (ls_type.is_set || is_set(ls_type.yfilter)) leaf_name_data.push_back(ls_type.get_name_leafdata());
    if (lsa_age.is_set || is_set(lsa_age.yfilter)) leaf_name_data.push_back(lsa_age.get_name_leafdata());
    if (lsa_area_id.is_set || is_set(lsa_area_id.yfilter)) leaf_name_data.push_back(lsa_area_id.get_name_leafdata());
    if (lsid.is_set || is_set(lsid.yfilter)) leaf_name_data.push_back(lsid.get_name_leafdata());
    if (nsf.is_set || is_set(nsf.yfilter)) leaf_name_data.push_back(nsf.get_name_leafdata());
    if (sequence_number.is_set || is_set(sequence_number.yfilter)) leaf_name_data.push_back(sequence_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaHeader::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaHeader::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaHeader::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "advertising-router")
    {
        advertising_router = value;
        advertising_router.value_namespace = name_space;
        advertising_router.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "checksum")
    {
        checksum = value;
        checksum.value_namespace = name_space;
        checksum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dn-age-lsa")
    {
        dn_age_lsa = value;
        dn_age_lsa.value_namespace = name_space;
        dn_age_lsa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ls-type")
    {
        ls_type = value;
        ls_type.value_namespace = name_space;
        ls_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-age")
    {
        lsa_age = value;
        lsa_age.value_namespace = name_space;
        lsa_age.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-area-id")
    {
        lsa_area_id = value;
        lsa_area_id.value_namespace = name_space;
        lsa_area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsid")
    {
        lsid = value;
        lsid.value_namespace = name_space;
        lsid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsf")
    {
        nsf = value;
        nsf.value_namespace = name_space;
        nsf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence-number")
    {
        sequence_number = value;
        sequence_number.value_namespace = name_space;
        sequence_number.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaHeader::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "advertising-router")
    {
        advertising_router.yfilter = yfilter;
    }
    if(value_path == "checksum")
    {
        checksum.yfilter = yfilter;
    }
    if(value_path == "dn-age-lsa")
    {
        dn_age_lsa.yfilter = yfilter;
    }
    if(value_path == "ls-type")
    {
        ls_type.yfilter = yfilter;
    }
    if(value_path == "lsa-age")
    {
        lsa_age.yfilter = yfilter;
    }
    if(value_path == "lsa-area-id")
    {
        lsa_area_id.yfilter = yfilter;
    }
    if(value_path == "lsid")
    {
        lsid.yfilter = yfilter;
    }
    if(value_path == "nsf")
    {
        nsf.yfilter = yfilter;
    }
    if(value_path == "sequence-number")
    {
        sequence_number.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaHeader::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "advertising-router" || name == "checksum" || name == "dn-age-lsa" || name == "ls-type" || name == "lsa-age" || name == "lsa-area-id" || name == "lsid" || name == "nsf" || name == "sequence-number")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::LsaInternalData()
    :
    internal_lsa_type{YType::enumeration, "internal-lsa-type"}
    	,
    external_lsa_type(std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::ExternalLsaType>())
	,network_lsa_type(std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::NetworkLsaType>())
	,opaque_el_lsa_type(std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType>())
	,opaque_ep_lsa_type(std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType>())
	,opaque_grace_lsa(std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueGraceLsa>())
	,opaque_link_lsa_type(std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueLinkLsaType>())
	,opaque_mpls_te_lsa_type(std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType>())
	,opaque_router_info_lsa_type(std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType>())
	,router_lsa_type(std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType>())
	,summary_lsa_type(std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::SummaryLsaType>())
{
    external_lsa_type->parent = this;
    network_lsa_type->parent = this;
    opaque_el_lsa_type->parent = this;
    opaque_ep_lsa_type->parent = this;
    opaque_grace_lsa->parent = this;
    opaque_link_lsa_type->parent = this;
    opaque_mpls_te_lsa_type->parent = this;
    opaque_router_info_lsa_type->parent = this;
    router_lsa_type->parent = this;
    summary_lsa_type->parent = this;

    yang_name = "lsa-internal-data"; yang_parent_name = "lsa"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::~LsaInternalData()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::has_data() const
{
    return internal_lsa_type.is_set
	|| (external_lsa_type !=  nullptr && external_lsa_type->has_data())
	|| (network_lsa_type !=  nullptr && network_lsa_type->has_data())
	|| (opaque_el_lsa_type !=  nullptr && opaque_el_lsa_type->has_data())
	|| (opaque_ep_lsa_type !=  nullptr && opaque_ep_lsa_type->has_data())
	|| (opaque_grace_lsa !=  nullptr && opaque_grace_lsa->has_data())
	|| (opaque_link_lsa_type !=  nullptr && opaque_link_lsa_type->has_data())
	|| (opaque_mpls_te_lsa_type !=  nullptr && opaque_mpls_te_lsa_type->has_data())
	|| (opaque_router_info_lsa_type !=  nullptr && opaque_router_info_lsa_type->has_data())
	|| (router_lsa_type !=  nullptr && router_lsa_type->has_data())
	|| (summary_lsa_type !=  nullptr && summary_lsa_type->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(internal_lsa_type.yfilter)
	|| (external_lsa_type !=  nullptr && external_lsa_type->has_operation())
	|| (network_lsa_type !=  nullptr && network_lsa_type->has_operation())
	|| (opaque_el_lsa_type !=  nullptr && opaque_el_lsa_type->has_operation())
	|| (opaque_ep_lsa_type !=  nullptr && opaque_ep_lsa_type->has_operation())
	|| (opaque_grace_lsa !=  nullptr && opaque_grace_lsa->has_operation())
	|| (opaque_link_lsa_type !=  nullptr && opaque_link_lsa_type->has_operation())
	|| (opaque_mpls_te_lsa_type !=  nullptr && opaque_mpls_te_lsa_type->has_operation())
	|| (opaque_router_info_lsa_type !=  nullptr && opaque_router_info_lsa_type->has_operation())
	|| (router_lsa_type !=  nullptr && router_lsa_type->has_operation())
	|| (summary_lsa_type !=  nullptr && summary_lsa_type->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-internal-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (internal_lsa_type.is_set || is_set(internal_lsa_type.yfilter)) leaf_name_data.push_back(internal_lsa_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "external-lsa-type")
    {
        if(external_lsa_type == nullptr)
        {
            external_lsa_type = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::ExternalLsaType>();
        }
        return external_lsa_type;
    }

    if(child_yang_name == "network-lsa-type")
    {
        if(network_lsa_type == nullptr)
        {
            network_lsa_type = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::NetworkLsaType>();
        }
        return network_lsa_type;
    }

    if(child_yang_name == "opaque-el-lsa-type")
    {
        if(opaque_el_lsa_type == nullptr)
        {
            opaque_el_lsa_type = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType>();
        }
        return opaque_el_lsa_type;
    }

    if(child_yang_name == "opaque-ep-lsa-type")
    {
        if(opaque_ep_lsa_type == nullptr)
        {
            opaque_ep_lsa_type = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType>();
        }
        return opaque_ep_lsa_type;
    }

    if(child_yang_name == "opaque-grace-lsa")
    {
        if(opaque_grace_lsa == nullptr)
        {
            opaque_grace_lsa = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueGraceLsa>();
        }
        return opaque_grace_lsa;
    }

    if(child_yang_name == "opaque-link-lsa-type")
    {
        if(opaque_link_lsa_type == nullptr)
        {
            opaque_link_lsa_type = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueLinkLsaType>();
        }
        return opaque_link_lsa_type;
    }

    if(child_yang_name == "opaque-mpls-te-lsa-type")
    {
        if(opaque_mpls_te_lsa_type == nullptr)
        {
            opaque_mpls_te_lsa_type = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType>();
        }
        return opaque_mpls_te_lsa_type;
    }

    if(child_yang_name == "opaque-router-info-lsa-type")
    {
        if(opaque_router_info_lsa_type == nullptr)
        {
            opaque_router_info_lsa_type = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType>();
        }
        return opaque_router_info_lsa_type;
    }

    if(child_yang_name == "router-lsa-type")
    {
        if(router_lsa_type == nullptr)
        {
            router_lsa_type = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType>();
        }
        return router_lsa_type;
    }

    if(child_yang_name == "summary-lsa-type")
    {
        if(summary_lsa_type == nullptr)
        {
            summary_lsa_type = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::SummaryLsaType>();
        }
        return summary_lsa_type;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(external_lsa_type != nullptr)
    {
        children["external-lsa-type"] = external_lsa_type;
    }

    if(network_lsa_type != nullptr)
    {
        children["network-lsa-type"] = network_lsa_type;
    }

    if(opaque_el_lsa_type != nullptr)
    {
        children["opaque-el-lsa-type"] = opaque_el_lsa_type;
    }

    if(opaque_ep_lsa_type != nullptr)
    {
        children["opaque-ep-lsa-type"] = opaque_ep_lsa_type;
    }

    if(opaque_grace_lsa != nullptr)
    {
        children["opaque-grace-lsa"] = opaque_grace_lsa;
    }

    if(opaque_link_lsa_type != nullptr)
    {
        children["opaque-link-lsa-type"] = opaque_link_lsa_type;
    }

    if(opaque_mpls_te_lsa_type != nullptr)
    {
        children["opaque-mpls-te-lsa-type"] = opaque_mpls_te_lsa_type;
    }

    if(opaque_router_info_lsa_type != nullptr)
    {
        children["opaque-router-info-lsa-type"] = opaque_router_info_lsa_type;
    }

    if(router_lsa_type != nullptr)
    {
        children["router-lsa-type"] = router_lsa_type;
    }

    if(summary_lsa_type != nullptr)
    {
        children["summary-lsa-type"] = summary_lsa_type;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "internal-lsa-type")
    {
        internal_lsa_type = value;
        internal_lsa_type.value_namespace = name_space;
        internal_lsa_type.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "internal-lsa-type")
    {
        internal_lsa_type.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "external-lsa-type" || name == "network-lsa-type" || name == "opaque-el-lsa-type" || name == "opaque-ep-lsa-type" || name == "opaque-grace-lsa" || name == "opaque-link-lsa-type" || name == "opaque-mpls-te-lsa-type" || name == "opaque-router-info-lsa-type" || name == "router-lsa-type" || name == "summary-lsa-type" || name == "internal-lsa-type")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::ExternalLsaType::ExternalLsaType()
    :
    external_prefix_length{YType::uint32, "external-prefix-length"},
    internal_external_lsa{YType::boolean, "internal-external-lsa"}
{

    yang_name = "external-lsa-type"; yang_parent_name = "lsa-internal-data"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::ExternalLsaType::~ExternalLsaType()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::ExternalLsaType::has_data() const
{
    for (std::size_t index=0; index<external_tos_metric.size(); index++)
    {
        if(external_tos_metric[index]->has_data())
            return true;
    }
    return external_prefix_length.is_set
	|| internal_external_lsa.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::ExternalLsaType::has_operation() const
{
    for (std::size_t index=0; index<external_tos_metric.size(); index++)
    {
        if(external_tos_metric[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(external_prefix_length.yfilter)
	|| ydk::is_set(internal_external_lsa.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::ExternalLsaType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "external-lsa-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::ExternalLsaType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (external_prefix_length.is_set || is_set(external_prefix_length.yfilter)) leaf_name_data.push_back(external_prefix_length.get_name_leafdata());
    if (internal_external_lsa.is_set || is_set(internal_external_lsa.yfilter)) leaf_name_data.push_back(internal_external_lsa.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::ExternalLsaType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "external-tos-metric")
    {
        for(auto const & c : external_tos_metric)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::ExternalLsaType::ExternalTosMetric>();
        c->parent = this;
        external_tos_metric.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::ExternalLsaType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : external_tos_metric)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::ExternalLsaType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "external-prefix-length")
    {
        external_prefix_length = value;
        external_prefix_length.value_namespace = name_space;
        external_prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internal-external-lsa")
    {
        internal_external_lsa = value;
        internal_external_lsa.value_namespace = name_space;
        internal_external_lsa.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::ExternalLsaType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "external-prefix-length")
    {
        external_prefix_length.yfilter = yfilter;
    }
    if(value_path == "internal-external-lsa")
    {
        internal_external_lsa.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::ExternalLsaType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "external-tos-metric" || name == "external-prefix-length" || name == "internal-external-lsa")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::ExternalLsaType::ExternalTosMetric::ExternalTosMetric()
    :
    external_metric{YType::uint32, "external-metric"},
    external_metric_type{YType::enumeration, "external-metric-type"},
    external_tag{YType::uint32, "external-tag"},
    external_tos{YType::uint32, "external-tos"},
    forwarding_address{YType::str, "forwarding-address"}
{

    yang_name = "external-tos-metric"; yang_parent_name = "external-lsa-type"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::ExternalLsaType::ExternalTosMetric::~ExternalTosMetric()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::ExternalLsaType::ExternalTosMetric::has_data() const
{
    return external_metric.is_set
	|| external_metric_type.is_set
	|| external_tag.is_set
	|| external_tos.is_set
	|| forwarding_address.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::ExternalLsaType::ExternalTosMetric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(external_metric.yfilter)
	|| ydk::is_set(external_metric_type.yfilter)
	|| ydk::is_set(external_tag.yfilter)
	|| ydk::is_set(external_tos.yfilter)
	|| ydk::is_set(forwarding_address.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::ExternalLsaType::ExternalTosMetric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "external-tos-metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::ExternalLsaType::ExternalTosMetric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (external_metric.is_set || is_set(external_metric.yfilter)) leaf_name_data.push_back(external_metric.get_name_leafdata());
    if (external_metric_type.is_set || is_set(external_metric_type.yfilter)) leaf_name_data.push_back(external_metric_type.get_name_leafdata());
    if (external_tag.is_set || is_set(external_tag.yfilter)) leaf_name_data.push_back(external_tag.get_name_leafdata());
    if (external_tos.is_set || is_set(external_tos.yfilter)) leaf_name_data.push_back(external_tos.get_name_leafdata());
    if (forwarding_address.is_set || is_set(forwarding_address.yfilter)) leaf_name_data.push_back(forwarding_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::ExternalLsaType::ExternalTosMetric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::ExternalLsaType::ExternalTosMetric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::ExternalLsaType::ExternalTosMetric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "external-metric")
    {
        external_metric = value;
        external_metric.value_namespace = name_space;
        external_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-metric-type")
    {
        external_metric_type = value;
        external_metric_type.value_namespace = name_space;
        external_metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-tag")
    {
        external_tag = value;
        external_tag.value_namespace = name_space;
        external_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-tos")
    {
        external_tos = value;
        external_tos.value_namespace = name_space;
        external_tos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forwarding-address")
    {
        forwarding_address = value;
        forwarding_address.value_namespace = name_space;
        forwarding_address.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::ExternalLsaType::ExternalTosMetric::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "external-metric")
    {
        external_metric.yfilter = yfilter;
    }
    if(value_path == "external-metric-type")
    {
        external_metric_type.yfilter = yfilter;
    }
    if(value_path == "external-tag")
    {
        external_tag.yfilter = yfilter;
    }
    if(value_path == "external-tos")
    {
        external_tos.yfilter = yfilter;
    }
    if(value_path == "forwarding-address")
    {
        forwarding_address.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::ExternalLsaType::ExternalTosMetric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "external-metric" || name == "external-metric-type" || name == "external-tag" || name == "external-tos" || name == "forwarding-address")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::NetworkLsaType::NetworkLsaType()
    :
    network_prefix_length{YType::uint32, "network-prefix-length"}
{

    yang_name = "network-lsa-type"; yang_parent_name = "lsa-internal-data"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::NetworkLsaType::~NetworkLsaType()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::NetworkLsaType::has_data() const
{
    for (std::size_t index=0; index<neighbor_router.size(); index++)
    {
        if(neighbor_router[index]->has_data())
            return true;
    }
    return network_prefix_length.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::NetworkLsaType::has_operation() const
{
    for (std::size_t index=0; index<neighbor_router.size(); index++)
    {
        if(neighbor_router[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(network_prefix_length.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::NetworkLsaType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network-lsa-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::NetworkLsaType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (network_prefix_length.is_set || is_set(network_prefix_length.yfilter)) leaf_name_data.push_back(network_prefix_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::NetworkLsaType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor-router")
    {
        for(auto const & c : neighbor_router)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::NetworkLsaType::NeighborRouter>();
        c->parent = this;
        neighbor_router.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::NetworkLsaType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : neighbor_router)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::NetworkLsaType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "network-prefix-length")
    {
        network_prefix_length = value;
        network_prefix_length.value_namespace = name_space;
        network_prefix_length.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::NetworkLsaType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "network-prefix-length")
    {
        network_prefix_length.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::NetworkLsaType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-router" || name == "network-prefix-length")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::NetworkLsaType::NeighborRouter::NeighborRouter()
    :
    entry{YType::str, "entry"}
{

    yang_name = "neighbor-router"; yang_parent_name = "network-lsa-type"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::NetworkLsaType::NeighborRouter::~NeighborRouter()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::NetworkLsaType::NeighborRouter::has_data() const
{
    return entry.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::NetworkLsaType::NeighborRouter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::NetworkLsaType::NeighborRouter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-router";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::NetworkLsaType::NeighborRouter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::NetworkLsaType::NeighborRouter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::NetworkLsaType::NeighborRouter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::NetworkLsaType::NeighborRouter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::NetworkLsaType::NeighborRouter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::NetworkLsaType::NeighborRouter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::OpaqueElLsaType()
{

    yang_name = "opaque-el-lsa-type"; yang_parent_name = "lsa-internal-data"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::~OpaqueElLsaType()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::has_data() const
{
    for (std::size_t index=0; index<tlv.size(); index++)
    {
        if(tlv[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::has_operation() const
{
    for (std::size_t index=0; index<tlv.size(); index++)
    {
        if(tlv[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "opaque-el-lsa-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tlv")
    {
        for(auto const & c : tlv)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv>();
        c->parent = this;
        tlv.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : tlv)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tlv")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::Tlv()
    :
    mpls_dste_link{YType::boolean, "mpls-dste-link"},
    mpls_router_id{YType::uint32, "mpls-router-id"},
    tlv_data{YType::str, "tlv-data"},
    tlv_length{YType::uint16, "tlv-length"},
    tlv_type{YType::uint16, "tlv-type"}
{

    yang_name = "tlv"; yang_parent_name = "opaque-el-lsa-type"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::~Tlv()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::has_data() const
{
    for (std::size_t index=0; index<te_link_sub_tlv.size(); index++)
    {
        if(te_link_sub_tlv[index]->has_data())
            return true;
    }
    return mpls_dste_link.is_set
	|| mpls_router_id.is_set
	|| tlv_data.is_set
	|| tlv_length.is_set
	|| tlv_type.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::has_operation() const
{
    for (std::size_t index=0; index<te_link_sub_tlv.size(); index++)
    {
        if(te_link_sub_tlv[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(mpls_dste_link.yfilter)
	|| ydk::is_set(mpls_router_id.yfilter)
	|| ydk::is_set(tlv_data.yfilter)
	|| ydk::is_set(tlv_length.yfilter)
	|| ydk::is_set(tlv_type.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tlv";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mpls_dste_link.is_set || is_set(mpls_dste_link.yfilter)) leaf_name_data.push_back(mpls_dste_link.get_name_leafdata());
    if (mpls_router_id.is_set || is_set(mpls_router_id.yfilter)) leaf_name_data.push_back(mpls_router_id.get_name_leafdata());
    if (tlv_data.is_set || is_set(tlv_data.yfilter)) leaf_name_data.push_back(tlv_data.get_name_leafdata());
    if (tlv_length.is_set || is_set(tlv_length.yfilter)) leaf_name_data.push_back(tlv_length.get_name_leafdata());
    if (tlv_type.is_set || is_set(tlv_type.yfilter)) leaf_name_data.push_back(tlv_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "te-link-sub-tlv")
    {
        for(auto const & c : te_link_sub_tlv)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::TeLinkSubTlv>();
        c->parent = this;
        te_link_sub_tlv.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : te_link_sub_tlv)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mpls-dste-link")
    {
        mpls_dste_link = value;
        mpls_dste_link.value_namespace = name_space;
        mpls_dste_link.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-router-id")
    {
        mpls_router_id = value;
        mpls_router_id.value_namespace = name_space;
        mpls_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tlv-data")
    {
        tlv_data = value;
        tlv_data.value_namespace = name_space;
        tlv_data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tlv-length")
    {
        tlv_length = value;
        tlv_length.value_namespace = name_space;
        tlv_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tlv-type")
    {
        tlv_type = value;
        tlv_type.value_namespace = name_space;
        tlv_type.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mpls-dste-link")
    {
        mpls_dste_link.yfilter = yfilter;
    }
    if(value_path == "mpls-router-id")
    {
        mpls_router_id.yfilter = yfilter;
    }
    if(value_path == "tlv-data")
    {
        tlv_data.yfilter = yfilter;
    }
    if(value_path == "tlv-length")
    {
        tlv_length.yfilter = yfilter;
    }
    if(value_path == "tlv-type")
    {
        tlv_type.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "te-link-sub-tlv" || name == "mpls-dste-link" || name == "mpls-router-id" || name == "tlv-data" || name == "tlv-length" || name == "tlv-type")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::TeLinkSubTlv::TeLinkSubTlv()
    :
    sub_tlv_length{YType::uint16, "sub-tlv-length"},
    sub_tlv_type{YType::enumeration, "sub-tlv-type"},
    sub_tlv_value{YType::str, "sub-tlv-value"}
{

    yang_name = "te-link-sub-tlv"; yang_parent_name = "tlv"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::TeLinkSubTlv::~TeLinkSubTlv()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::TeLinkSubTlv::has_data() const
{
    return sub_tlv_length.is_set
	|| sub_tlv_type.is_set
	|| sub_tlv_value.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::TeLinkSubTlv::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sub_tlv_length.yfilter)
	|| ydk::is_set(sub_tlv_type.yfilter)
	|| ydk::is_set(sub_tlv_value.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::TeLinkSubTlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-link-sub-tlv";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::TeLinkSubTlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sub_tlv_length.is_set || is_set(sub_tlv_length.yfilter)) leaf_name_data.push_back(sub_tlv_length.get_name_leafdata());
    if (sub_tlv_type.is_set || is_set(sub_tlv_type.yfilter)) leaf_name_data.push_back(sub_tlv_type.get_name_leafdata());
    if (sub_tlv_value.is_set || is_set(sub_tlv_value.yfilter)) leaf_name_data.push_back(sub_tlv_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::TeLinkSubTlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::TeLinkSubTlv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::TeLinkSubTlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sub-tlv-length")
    {
        sub_tlv_length = value;
        sub_tlv_length.value_namespace = name_space;
        sub_tlv_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-tlv-type")
    {
        sub_tlv_type = value;
        sub_tlv_type.value_namespace = name_space;
        sub_tlv_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-tlv-value")
    {
        sub_tlv_value = value;
        sub_tlv_value.value_namespace = name_space;
        sub_tlv_value.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::TeLinkSubTlv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sub-tlv-length")
    {
        sub_tlv_length.yfilter = yfilter;
    }
    if(value_path == "sub-tlv-type")
    {
        sub_tlv_type.yfilter = yfilter;
    }
    if(value_path == "sub-tlv-value")
    {
        sub_tlv_value.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::TeLinkSubTlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sub-tlv-length" || name == "sub-tlv-type" || name == "sub-tlv-value")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::OpaqueEpLsaType()
{

    yang_name = "opaque-ep-lsa-type"; yang_parent_name = "lsa-internal-data"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::~OpaqueEpLsaType()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::has_data() const
{
    for (std::size_t index=0; index<tlv.size(); index++)
    {
        if(tlv[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::has_operation() const
{
    for (std::size_t index=0; index<tlv.size(); index++)
    {
        if(tlv[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "opaque-ep-lsa-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tlv")
    {
        for(auto const & c : tlv)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv>();
        c->parent = this;
        tlv.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : tlv)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tlv")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::Tlv()
    :
    mpls_dste_link{YType::boolean, "mpls-dste-link"},
    mpls_router_id{YType::uint32, "mpls-router-id"},
    tlv_data{YType::str, "tlv-data"},
    tlv_length{YType::uint16, "tlv-length"},
    tlv_type{YType::uint16, "tlv-type"}
{

    yang_name = "tlv"; yang_parent_name = "opaque-ep-lsa-type"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::~Tlv()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::has_data() const
{
    for (std::size_t index=0; index<te_link_sub_tlv.size(); index++)
    {
        if(te_link_sub_tlv[index]->has_data())
            return true;
    }
    return mpls_dste_link.is_set
	|| mpls_router_id.is_set
	|| tlv_data.is_set
	|| tlv_length.is_set
	|| tlv_type.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::has_operation() const
{
    for (std::size_t index=0; index<te_link_sub_tlv.size(); index++)
    {
        if(te_link_sub_tlv[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(mpls_dste_link.yfilter)
	|| ydk::is_set(mpls_router_id.yfilter)
	|| ydk::is_set(tlv_data.yfilter)
	|| ydk::is_set(tlv_length.yfilter)
	|| ydk::is_set(tlv_type.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tlv";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mpls_dste_link.is_set || is_set(mpls_dste_link.yfilter)) leaf_name_data.push_back(mpls_dste_link.get_name_leafdata());
    if (mpls_router_id.is_set || is_set(mpls_router_id.yfilter)) leaf_name_data.push_back(mpls_router_id.get_name_leafdata());
    if (tlv_data.is_set || is_set(tlv_data.yfilter)) leaf_name_data.push_back(tlv_data.get_name_leafdata());
    if (tlv_length.is_set || is_set(tlv_length.yfilter)) leaf_name_data.push_back(tlv_length.get_name_leafdata());
    if (tlv_type.is_set || is_set(tlv_type.yfilter)) leaf_name_data.push_back(tlv_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "te-link-sub-tlv")
    {
        for(auto const & c : te_link_sub_tlv)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::TeLinkSubTlv>();
        c->parent = this;
        te_link_sub_tlv.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : te_link_sub_tlv)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mpls-dste-link")
    {
        mpls_dste_link = value;
        mpls_dste_link.value_namespace = name_space;
        mpls_dste_link.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-router-id")
    {
        mpls_router_id = value;
        mpls_router_id.value_namespace = name_space;
        mpls_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tlv-data")
    {
        tlv_data = value;
        tlv_data.value_namespace = name_space;
        tlv_data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tlv-length")
    {
        tlv_length = value;
        tlv_length.value_namespace = name_space;
        tlv_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tlv-type")
    {
        tlv_type = value;
        tlv_type.value_namespace = name_space;
        tlv_type.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mpls-dste-link")
    {
        mpls_dste_link.yfilter = yfilter;
    }
    if(value_path == "mpls-router-id")
    {
        mpls_router_id.yfilter = yfilter;
    }
    if(value_path == "tlv-data")
    {
        tlv_data.yfilter = yfilter;
    }
    if(value_path == "tlv-length")
    {
        tlv_length.yfilter = yfilter;
    }
    if(value_path == "tlv-type")
    {
        tlv_type.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "te-link-sub-tlv" || name == "mpls-dste-link" || name == "mpls-router-id" || name == "tlv-data" || name == "tlv-length" || name == "tlv-type")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::TeLinkSubTlv::TeLinkSubTlv()
    :
    sub_tlv_length{YType::uint16, "sub-tlv-length"},
    sub_tlv_type{YType::enumeration, "sub-tlv-type"},
    sub_tlv_value{YType::str, "sub-tlv-value"}
{

    yang_name = "te-link-sub-tlv"; yang_parent_name = "tlv"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::TeLinkSubTlv::~TeLinkSubTlv()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::TeLinkSubTlv::has_data() const
{
    return sub_tlv_length.is_set
	|| sub_tlv_type.is_set
	|| sub_tlv_value.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::TeLinkSubTlv::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sub_tlv_length.yfilter)
	|| ydk::is_set(sub_tlv_type.yfilter)
	|| ydk::is_set(sub_tlv_value.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::TeLinkSubTlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-link-sub-tlv";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::TeLinkSubTlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sub_tlv_length.is_set || is_set(sub_tlv_length.yfilter)) leaf_name_data.push_back(sub_tlv_length.get_name_leafdata());
    if (sub_tlv_type.is_set || is_set(sub_tlv_type.yfilter)) leaf_name_data.push_back(sub_tlv_type.get_name_leafdata());
    if (sub_tlv_value.is_set || is_set(sub_tlv_value.yfilter)) leaf_name_data.push_back(sub_tlv_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::TeLinkSubTlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::TeLinkSubTlv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::TeLinkSubTlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sub-tlv-length")
    {
        sub_tlv_length = value;
        sub_tlv_length.value_namespace = name_space;
        sub_tlv_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-tlv-type")
    {
        sub_tlv_type = value;
        sub_tlv_type.value_namespace = name_space;
        sub_tlv_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-tlv-value")
    {
        sub_tlv_value = value;
        sub_tlv_value.value_namespace = name_space;
        sub_tlv_value.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::TeLinkSubTlv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sub-tlv-length")
    {
        sub_tlv_length.yfilter = yfilter;
    }
    if(value_path == "sub-tlv-type")
    {
        sub_tlv_type.yfilter = yfilter;
    }
    if(value_path == "sub-tlv-value")
    {
        sub_tlv_value.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::TeLinkSubTlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sub-tlv-length" || name == "sub-tlv-type" || name == "sub-tlv-value")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueGraceLsa::OpaqueGraceLsa()
    :
    grace_period{YType::uint32, "grace-period"},
    grace_reason{YType::enumeration, "grace-reason"},
    ip_address{YType::str, "ip-address"}
{

    yang_name = "opaque-grace-lsa"; yang_parent_name = "lsa-internal-data"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueGraceLsa::~OpaqueGraceLsa()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueGraceLsa::has_data() const
{
    return grace_period.is_set
	|| grace_reason.is_set
	|| ip_address.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueGraceLsa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(grace_period.yfilter)
	|| ydk::is_set(grace_reason.yfilter)
	|| ydk::is_set(ip_address.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueGraceLsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "opaque-grace-lsa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueGraceLsa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (grace_period.is_set || is_set(grace_period.yfilter)) leaf_name_data.push_back(grace_period.get_name_leafdata());
    if (grace_reason.is_set || is_set(grace_reason.yfilter)) leaf_name_data.push_back(grace_reason.get_name_leafdata());
    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueGraceLsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueGraceLsa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueGraceLsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "grace-period")
    {
        grace_period = value;
        grace_period.value_namespace = name_space;
        grace_period.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grace-reason")
    {
        grace_reason = value;
        grace_reason.value_namespace = name_space;
        grace_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-address")
    {
        ip_address = value;
        ip_address.value_namespace = name_space;
        ip_address.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueGraceLsa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "grace-period")
    {
        grace_period.yfilter = yfilter;
    }
    if(value_path == "grace-reason")
    {
        grace_reason.yfilter = yfilter;
    }
    if(value_path == "ip-address")
    {
        ip_address.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueGraceLsa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "grace-period" || name == "grace-reason" || name == "ip-address")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueLinkLsaType::OpaqueLinkLsaType()
    :
    opaque_interface_name{YType::str, "opaque-interface-name"}
{

    yang_name = "opaque-link-lsa-type"; yang_parent_name = "lsa-internal-data"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueLinkLsaType::~OpaqueLinkLsaType()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueLinkLsaType::has_data() const
{
    return opaque_interface_name.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueLinkLsaType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(opaque_interface_name.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueLinkLsaType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "opaque-link-lsa-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueLinkLsaType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (opaque_interface_name.is_set || is_set(opaque_interface_name.yfilter)) leaf_name_data.push_back(opaque_interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueLinkLsaType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueLinkLsaType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueLinkLsaType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "opaque-interface-name")
    {
        opaque_interface_name = value;
        opaque_interface_name.value_namespace = name_space;
        opaque_interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueLinkLsaType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "opaque-interface-name")
    {
        opaque_interface_name.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueLinkLsaType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "opaque-interface-name")
        return true;
    return false;
}

const Enum::YLeaf GsState::mgmt_gs_init {0, "mgmt-gs-init"};
const Enum::YLeaf GsState::mgmt_gs_normal {1, "mgmt-gs-normal"};
const Enum::YLeaf GsState::mgmt_gs_delay {2, "mgmt-gs-delay"};
const Enum::YLeaf GsState::mgmt_gs_flush {3, "mgmt-gs-flush"};
const Enum::YLeaf GsState::mgmt_gs_hello {4, "mgmt-gs-hello"};
const Enum::YLeaf GsState::mgmt_gs_quiet {5, "mgmt-gs-quiet"};

const Enum::YLeaf OspfMaxMetricAbrOffReasons::ospf_max_metric_abr_off_reason_none {0, "ospf-max-metric-abr-off-reason-none"};
const Enum::YLeaf OspfMaxMetricAbrOffReasons::ospf_max_metric_abr_off_reason_no_nbr {1, "ospf-max-metric-abr-off-reason-no-nbr"};
const Enum::YLeaf OspfMaxMetricAbrOffReasons::ospf_max_metric_abr_off_reason_new_nbr {2, "ospf-max-metric-abr-off-reason-new-nbr"};
const Enum::YLeaf OspfMaxMetricAbrOffReasons::ospf_max_metric_abr_off_reason_nbr_full {4, "ospf-max-metric-abr-off-reason-nbr-full"};
const Enum::YLeaf OspfMaxMetricAbrOffReasons::ospf_max_metric_abr_off_reason_flush_p_end {8, "ospf-max-metric-abr-off-reason-flush-p-end"};

const Enum::YLeaf LinkSubnet::mgmt_igp_subnet_type_none {0, "mgmt-igp-subnet-type-none"};
const Enum::YLeaf LinkSubnet::mgmt_igp_subnet_type_p2p {1, "mgmt-igp-subnet-type-p2p"};
const Enum::YLeaf LinkSubnet::mgmt_igp_subnet_type_broadcast {2, "mgmt-igp-subnet-type-broadcast"};
const Enum::YLeaf LinkSubnet::mgmt_igp_subnet_type_nbma {3, "mgmt-igp-subnet-type-nbma"};
const Enum::YLeaf LinkSubnet::mgmt_igp_subnet_type_p2mp {4, "mgmt-igp-subnet-type-p2mp"};
const Enum::YLeaf LinkSubnet::mgmt_igp_subnet_type_loop_back {5, "mgmt-igp-subnet-type-loop-back"};
const Enum::YLeaf LinkSubnet::mgmt_igp_subnet_type_max {6, "mgmt-igp-subnet-type-max"};

const Enum::YLeaf NsfRtr::mgmt_nsf_rtr_none {0, "mgmt-nsf-rtr-none"};
const Enum::YLeaf NsfRtr::mgmt_nsf_rtr_requester {1, "mgmt-nsf-rtr-requester"};
const Enum::YLeaf NsfRtr::mgmt_nsf_rtr_receiver {2, "mgmt-nsf-rtr-receiver"};

const Enum::YLeaf Lsa::mgmt_lsa_type_rtr {1, "mgmt-lsa-type-rtr"};
const Enum::YLeaf Lsa::mgmt_lsa_type_net {2, "mgmt-lsa-type-net"};
const Enum::YLeaf Lsa::mgmt_lsa_type_sum_net {3, "mgmt-lsa-type-sum-net"};
const Enum::YLeaf Lsa::mgmt_lsa_type_sum_asb {4, "mgmt-lsa-type-sum-asb"};
const Enum::YLeaf Lsa::mgmt_lsa_type_ext {5, "mgmt-lsa-type-ext"};
const Enum::YLeaf Lsa::mgmt_lsa_type_mospf {6, "mgmt-lsa-type-mospf"};
const Enum::YLeaf Lsa::mgmt_lsa_type_7_ase {7, "mgmt-lsa-type-7-ase"};
const Enum::YLeaf Lsa::mgmt_lsa_type_8_ignore {8, "mgmt-lsa-type-8-ignore"};
const Enum::YLeaf Lsa::mgmt_lsa_type_opq_link {9, "mgmt-lsa-type-opq-link"};
const Enum::YLeaf Lsa::mgmt_lsa_type_opq_area {10, "mgmt-lsa-type-opq-area"};
const Enum::YLeaf Lsa::mgmt_lsa_type_opq_as {11, "mgmt-lsa-type-opq-as"};

const Enum::YLeaf Ipfrr::none {0, "none"};
const Enum::YLeaf Ipfrr::per_link {1, "per-link"};
const Enum::YLeaf Ipfrr::per_prefix {2, "per-prefix"};

const Enum::YLeaf MaxMetricUnsetReason::mgmt_max_metric_unset_none {0, "mgmt-max-metric-unset-none"};
const Enum::YLeaf MaxMetricUnsetReason::mgmt_max_metric_unset_bgp {1, "mgmt-max-metric-unset-bgp"};
const Enum::YLeaf MaxMetricUnsetReason::mgmt_max_metric_unset_timer {2, "mgmt-max-metric-unset-timer"};
const Enum::YLeaf MaxMetricUnsetReason::mgmt_max_metric_unset_cfg {3, "mgmt-max-metric-unset-cfg"};
const Enum::YLeaf MaxMetricUnsetReason::mgmt_max_metric_unset_process_cleared {4, "mgmt-max-metric-unset-process-cleared"};
const Enum::YLeaf MaxMetricUnsetReason::mgmt_max_metric_unset_over_write {5, "mgmt-max-metric-unset-over-write"};

const Enum::YLeaf Stlv::mgmt_rrr_link_type {1, "mgmt-rrr-link-type"};
const Enum::YLeaf Stlv::mgmt_rrr_link_id {2, "mgmt-rrr-link-id"};
const Enum::YLeaf Stlv::mgmt_rrr_link_local_if_addr {3, "mgmt-rrr-link-local-if-addr"};
const Enum::YLeaf Stlv::mgmt_rrr_link_remote_if_addr {4, "mgmt-rrr-link-remote-if-addr"};
const Enum::YLeaf Stlv::mgmt_rrr_link_metric {5, "mgmt-rrr-link-metric"};
const Enum::YLeaf Stlv::mgmt_rrr_link_max_bw {6, "mgmt-rrr-link-max-bw"};
const Enum::YLeaf Stlv::mgmt_rrr_link_max_reservable_bw {7, "mgmt-rrr-link-max-reservable-bw"};
const Enum::YLeaf Stlv::mgmt_rrr_link_unreserved_bw {8, "mgmt-rrr-link-unreserved-bw"};
const Enum::YLeaf Stlv::mgmt_rrr_link_re_source_class {9, "mgmt-rrr-link-re-source-class"};
const Enum::YLeaf Stlv::mgmt_rrr_link_in_out_if_id {11, "mgmt-rrr-link-in-out-if-id"};
const Enum::YLeaf Stlv::mgmt_rrr_link_if_switching_cap_desc {15, "mgmt-rrr-link-if-switching-cap-desc"};
const Enum::YLeaf Stlv::mgmt_ospf_rrr_link_srlg {16, "mgmt-ospf-rrr-link-srlg"};
const Enum::YLeaf Stlv::mgmt_rrr_link_bw_constraints_sub {17, "mgmt-rrr-link-bw-constraints-sub"};
const Enum::YLeaf Stlv::mgmt_ospf_rrr_link_uni_delay {27, "mgmt-ospf-rrr-link-uni-delay"};
const Enum::YLeaf Stlv::mgmt_ospf_rrr_link_max_reservable_bw_sub {32768, "mgmt-ospf-rrr-link-max-reservable-bw-sub"};
const Enum::YLeaf Stlv::mgmt_ospf_rrr_link_unreserved_bw_sub {32769, "mgmt-ospf-rrr-link-unreserved-bw-sub"};
const Enum::YLeaf Stlv::mgmt_rrr_link_igp_metric {32770, "mgmt-rrr-link-igp-metric"};
const Enum::YLeaf Stlv::mgmt_ospf_rrr_link_ext_admin_sub {32771, "mgmt-ospf-rrr-link-ext-admin-sub"};

const Enum::YLeaf Timer::mgmt_db_stop {0, "mgmt-db-stop"};
const Enum::YLeaf Timer::mgmt_db_refresh {1, "mgmt-db-refresh"};
const Enum::YLeaf Timer::mgmt_db_checksum {2, "mgmt-db-checksum"};
const Enum::YLeaf Timer::mgmt_db_max_age {3, "mgmt-db-max-age"};

const Enum::YLeaf OspfRoute::mgmt_r_type_none {0, "mgmt-r-type-none"};
const Enum::YLeaf OspfRoute::mgmt_r_type_other {1, "mgmt-r-type-other"};
const Enum::YLeaf OspfRoute::mgmt_r_type_intra {2, "mgmt-r-type-intra"};
const Enum::YLeaf OspfRoute::mgmt_r_type_inter {4, "mgmt-r-type-inter"};
const Enum::YLeaf OspfRoute::mgmt_r_type_extern1 {8, "mgmt-r-type-extern1"};
const Enum::YLeaf OspfRoute::mgmt_r_type_extern2 {16, "mgmt-r-type-extern2"};
const Enum::YLeaf OspfRoute::mgmt_r_type_isis_sum {32, "mgmt-r-type-isis-sum"};
const Enum::YLeaf OspfRoute::mgmt_r_type_isis_l1 {64, "mgmt-r-type-isis-l1"};
const Enum::YLeaf OspfRoute::mgmt_r_type_isis_l2 {128, "mgmt-r-type-isis-l2"};
const Enum::YLeaf OspfRoute::mgmt_r_type_isis_l1_ia {256, "mgmt-r-type-isis-l1-ia"};
const Enum::YLeaf OspfRoute::mgmt_r_type_bgp_int {512, "mgmt-r-type-bgp-int"};
const Enum::YLeaf OspfRoute::mgmt_r_type_bgp_ext {1024, "mgmt-r-type-bgp-ext"};
const Enum::YLeaf OspfRoute::mgmt_r_type_bgp_loc {2048, "mgmt-r-type-bgp-loc"};
const Enum::YLeaf OspfRoute::mgmt_r_type_nssa1 {4096, "mgmt-r-type-nssa1"};
const Enum::YLeaf OspfRoute::mgmt_r_type_nssa2 {8192, "mgmt-r-type-nssa2"};
const Enum::YLeaf OspfRoute::mgmt_r_type_i_grp2_int {16384, "mgmt-r-type-i-grp2-int"};
const Enum::YLeaf OspfRoute::mgmt_r_type_i_grp2_ext {32768, "mgmt-r-type-i-grp2-ext"};

const Enum::YLeaf DrBdrState::mgmt_dbdr_none {0, "mgmt-dbdr-none"};
const Enum::YLeaf DrBdrState::mgmt_dbdr_dr {1, "mgmt-dbdr-dr"};
const Enum::YLeaf DrBdrState::mgmt_dbdr_bdr {2, "mgmt-dbdr-bdr"};
const Enum::YLeaf DrBdrState::mgmt_dbdr_dr_other {3, "mgmt-dbdr-dr-other"};

const Enum::YLeaf MaxMetricSetReason::mgmt_max_metric_on_proc_migration {0, "mgmt-max-metric-on-proc-migration"};
const Enum::YLeaf MaxMetricSetReason::mgmt_max_metric_on_proc_restart {1, "mgmt-max-metric-on-proc-restart"};
const Enum::YLeaf MaxMetricSetReason::mgmt_max_metric_on_switchover {2, "mgmt-max-metric-on-switchover"};
const Enum::YLeaf MaxMetricSetReason::mgmt_max_metric_on_startup {3, "mgmt-max-metric-on-startup"};
const Enum::YLeaf MaxMetricSetReason::mgmt_max_metric_always {4, "mgmt-max-metric-always"};
const Enum::YLeaf MaxMetricSetReason::mgmt_max_metric_reason_none {5, "mgmt-max-metric-reason-none"};

const Enum::YLeaf OspfGrReason::mgmt_gr_reason_unknown {0, "mgmt-gr-reason-unknown"};
const Enum::YLeaf OspfGrReason::mgmt_gr_reason_sw_restart {1, "mgmt-gr-reason-sw-restart"};
const Enum::YLeaf OspfGrReason::mgmt_gr_reason_sw_upgrade {2, "mgmt-gr-reason-sw-upgrade"};
const Enum::YLeaf OspfGrReason::mgmt_gr_reason_switchover {3, "mgmt-gr-reason-switchover"};

const Enum::YLeaf Interface::mgmt_if_broadcast {1, "mgmt-if-broadcast"};
const Enum::YLeaf Interface::mgmt_if_nonbroadcast {2, "mgmt-if-nonbroadcast"};
const Enum::YLeaf Interface::mgmt_if_point_to_point {3, "mgmt-if-point-to-point"};
const Enum::YLeaf Interface::mgmt_if_point_to_m_point {4, "mgmt-if-point-to-m-point"};
const Enum::YLeaf Interface::mgmt_if_p2mp_non_bcast {5, "mgmt-if-p2mp-non-bcast"};
const Enum::YLeaf Interface::mgmt_if_virtual_link {6, "mgmt-if-virtual-link"};
const Enum::YLeaf Interface::mgmt_if_sham_link {7, "mgmt-if-sham-link"};
const Enum::YLeaf Interface::mgmt_if_loop_back {8, "mgmt-if-loop-back"};

const Enum::YLeaf IgpteLibBwModel::rdm {0, "rdm"};
const Enum::YLeaf IgpteLibBwModel::mam {1, "mam"};
const Enum::YLeaf IgpteLibBwModel::not_set {2, "not-set"};

const Enum::YLeaf RedistProtocol::mgmt_rib_protocol_all {0, "mgmt-rib-protocol-all"};
const Enum::YLeaf RedistProtocol::mgmt_rib_protocol_connected {1, "mgmt-rib-protocol-connected"};
const Enum::YLeaf RedistProtocol::mgmt_rib_protocol_local {2, "mgmt-rib-protocol-local"};
const Enum::YLeaf RedistProtocol::mgmt_rib_protocol_static {3, "mgmt-rib-protocol-static"};
const Enum::YLeaf RedistProtocol::mgmt_rib_protocol_bgp {4, "mgmt-rib-protocol-bgp"};
const Enum::YLeaf RedistProtocol::mgmt_rib_protocol_rip {5, "mgmt-rib-protocol-rip"};
const Enum::YLeaf RedistProtocol::mgmt_rib_protocol_isis {6, "mgmt-rib-protocol-isis"};
const Enum::YLeaf RedistProtocol::mgmt_rib_protocol_ospf {7, "mgmt-rib-protocol-ospf"};
const Enum::YLeaf RedistProtocol::mgmt_rib_protocol_eigrp {8, "mgmt-rib-protocol-eigrp"};
const Enum::YLeaf RedistProtocol::mgmt_rib_protocol_dagr {9, "mgmt-rib-protocol-dagr"};
const Enum::YLeaf RedistProtocol::mgmt_rib_protocol_subscriber {10, "mgmt-rib-protocol-subscriber"};
const Enum::YLeaf RedistProtocol::mgmt_rib_protocol_application {11, "mgmt-rib-protocol-application"};
const Enum::YLeaf RedistProtocol::mgmt_rib_protocol_mobile {12, "mgmt-rib-protocol-mobile"};

const Enum::YLeaf OspfSrgbStatus::not_allocated {0, "not-allocated"};
const Enum::YLeaf OspfSrgbStatus::pending {1, "pending"};
const Enum::YLeaf OspfSrgbStatus::allocated {2, "allocated"};

const Enum::YLeaf OspfShOpqRiTlvTypes::mgmt_ospf_opq_ri_tlv_type_unknown {0, "mgmt-ospf-opq-ri-tlv-type-unknown"};
const Enum::YLeaf OspfShOpqRiTlvTypes::mgmt_ospf_opq_ri_tlv_type_rtrcap {1, "mgmt-ospf-opq-ri-tlv-type-rtrcap"};
const Enum::YLeaf OspfShOpqRiTlvTypes::mgmt_ospf_opq_ri_tlv_type_pce_discovery {2, "mgmt-ospf-opq-ri-tlv-type-pce-discovery"};
const Enum::YLeaf OspfShOpqRiTlvTypes::mgmt_ospf_opq_ri_tlv_type_sr_algo {3, "mgmt-ospf-opq-ri-tlv-type-sr-algo"};
const Enum::YLeaf OspfShOpqRiTlvTypes::mgmt_ospf_opq_ri_tlv_type_sr_range {4, "mgmt-ospf-opq-ri-tlv-type-sr-range"};
const Enum::YLeaf OspfShOpqRiTlvTypes::mgmt_ospf_opq_ri_tlv_type_node_msd {5, "mgmt-ospf-opq-ri-tlv-type-node-msd"};

const Enum::YLeaf OspfInterfaceState::mgmt_ospf_ifs_down {0, "mgmt-ospf-ifs-down"};
const Enum::YLeaf OspfInterfaceState::mgmt_ospf_ifs_loop_back {1, "mgmt-ospf-ifs-loop-back"};
const Enum::YLeaf OspfInterfaceState::mgmt_ospf_ifs_waiting {2, "mgmt-ospf-ifs-waiting"};
const Enum::YLeaf OspfInterfaceState::mgmt_ospf_ifs_point_to_m_point {3, "mgmt-ospf-ifs-point-to-m-point"};
const Enum::YLeaf OspfInterfaceState::mgmt_ospf_ifs_point_to_point {4, "mgmt-ospf-ifs-point-to-point"};
const Enum::YLeaf OspfInterfaceState::mgmt_ospf_ifs_dr {5, "mgmt-ospf-ifs-dr"};
const Enum::YLeaf OspfInterfaceState::mgmt_ospf_ifs_backup {6, "mgmt-ospf-ifs-backup"};
const Enum::YLeaf OspfInterfaceState::mgmt_ospf_ifs_other {7, "mgmt-ospf-ifs-other"};

const Enum::YLeaf OspfShOpqRiPceAddrTypes::mgmt_ospf_opq_pce_addr_type_invalid {0, "mgmt-ospf-opq-pce-addr-type-invalid"};
const Enum::YLeaf OspfShOpqRiPceAddrTypes::mgmt_ospf_opq_pce_addr_type_ipv4 {1, "mgmt-ospf-opq-pce-addr-type-ipv4"};
const Enum::YLeaf OspfShOpqRiPceAddrTypes::mgmt_ospf_opq_pce_addr_type_ipv6 {2, "mgmt-ospf-opq-pce-addr-type-ipv6"};

const Enum::YLeaf IpfrrTbrkr::downstream {0, "downstream"};
const Enum::YLeaf IpfrrTbrkr::line_card_disjoint {1, "line-card-disjoint"};
const Enum::YLeaf IpfrrTbrkr::backup_metric {2, "backup-metric"};
const Enum::YLeaf IpfrrTbrkr::node_protect {3, "node-protect"};
const Enum::YLeaf IpfrrTbrkr::primary_path {4, "primary-path"};
const Enum::YLeaf IpfrrTbrkr::secondary_path {5, "secondary-path"};
const Enum::YLeaf IpfrrTbrkr::srlg_disjoint {6, "srlg-disjoint"};
const Enum::YLeaf IpfrrTbrkr::tunnel {7, "tunnel"};
const Enum::YLeaf IpfrrTbrkr::post_convergence {8, "post-convergence"};

const Enum::YLeaf UloopAvoidance::none {0, "none"};
const Enum::YLeaf UloopAvoidance::protected_prefixes {1, "protected-prefixes"};
const Enum::YLeaf UloopAvoidance::all_prefixes {2, "all-prefixes"};
const Enum::YLeaf UloopAvoidance::segment_routing_uloop {3, "segment-routing-uloop"};

const Enum::YLeaf OspfLsaOpqRiScope::mgmt_lsa_opq_ri_scope_link {9, "mgmt-lsa-opq-ri-scope-link"};
const Enum::YLeaf OspfLsaOpqRiScope::mgmt_lsa_opq_ri_scope_area {10, "mgmt-lsa-opq-ri-scope-area"};
const Enum::YLeaf OspfLsaOpqRiScope::mgmt_lsa_opq_ri_scope_as {11, "mgmt-lsa-opq-ri-scope-as"};

const Enum::YLeaf NeighborState::mgmt_nbr_down {0, "mgmt-nbr-down"};
const Enum::YLeaf NeighborState::mgmt_nbr_attempt {1, "mgmt-nbr-attempt"};
const Enum::YLeaf NeighborState::mgmt_nbr_init {2, "mgmt-nbr-init"};
const Enum::YLeaf NeighborState::mgmt_nbr_2way {3, "mgmt-nbr-2way"};
const Enum::YLeaf NeighborState::mgmt_nbr_ex_start {4, "mgmt-nbr-ex-start"};
const Enum::YLeaf NeighborState::mgmt_nbr_ex_change {5, "mgmt-nbr-ex-change"};
const Enum::YLeaf NeighborState::mgmt_nbr_load_ing {6, "mgmt-nbr-load-ing"};
const Enum::YLeaf NeighborState::mgmt_nbr_full {7, "mgmt-nbr-full"};
const Enum::YLeaf NeighborState::mgmt_nbr_sc_virtual {8, "mgmt-nbr-sc-virtual"};

const Enum::YLeaf SrmsMiAfEB::none {0, "none"};
const Enum::YLeaf SrmsMiAfEB::ipv4 {1, "ipv4"};
const Enum::YLeaf SrmsMiAfEB::ipv6 {2, "ipv6"};

const Enum::YLeaf OspfLinkTypes::mgmt_rtr_link {1, "mgmt-rtr-link"};
const Enum::YLeaf OspfLinkTypes::mgmt_trans_link {2, "mgmt-trans-link"};
const Enum::YLeaf OspfLinkTypes::mgmt_stub_net {3, "mgmt-stub-net"};
const Enum::YLeaf OspfLinkTypes::mgmt_vitural_link {4, "mgmt-vitural-link"};

const Enum::YLeaf Authentication::mgmt_ospf_auth_none {0, "mgmt-ospf-auth-none"};
const Enum::YLeaf Authentication::mgmt_ospf_auth_ct {1, "mgmt-ospf-auth-ct"};
const Enum::YLeaf Authentication::mgmt_ospf_auth_md {2, "mgmt-ospf-auth-md"};
const Enum::YLeaf Authentication::mgmt_ospf_auth_kc {3, "mgmt-ospf-auth-kc"};

const Enum::YLeaf InterfaceState::mgmt_ifs_unknown {0, "mgmt-ifs-unknown"};
const Enum::YLeaf InterfaceState::mgmt_ifs_admin_down {1, "mgmt-ifs-admin-down"};
const Enum::YLeaf InterfaceState::mgmt_ifs_down {2, "mgmt-ifs-down"};
const Enum::YLeaf InterfaceState::mgmt_ifs_up {3, "mgmt-ifs-up"};
const Enum::YLeaf InterfaceState::mgmt_ifs_shutdown {4, "mgmt-ifs-shutdown"};

const Enum::YLeaf OspfInternalLsaTypes::mgmt_rtr_type {1, "mgmt-rtr-type"};
const Enum::YLeaf OspfInternalLsaTypes::mgmt_ntwk_type {2, "mgmt-ntwk-type"};
const Enum::YLeaf OspfInternalLsaTypes::mgmt_sum_type {3, "mgmt-sum-type"};
const Enum::YLeaf OspfInternalLsaTypes::mgmt_ext_type {4, "mgmt-ext-type"};
const Enum::YLeaf OspfInternalLsaTypes::mgmt_opq_type {5, "mgmt-opq-type"};
const Enum::YLeaf OspfInternalLsaTypes::mgmt_opq_link_type {6, "mgmt-opq-link-type"};
const Enum::YLeaf OspfInternalLsaTypes::mgmt_opq_rrr_type {7, "mgmt-opq-rrr-type"};
const Enum::YLeaf OspfInternalLsaTypes::mgmt_opq_gr_type {8, "mgmt-opq-gr-type"};
const Enum::YLeaf OspfInternalLsaTypes::mgmt_opq_ri_type {9, "mgmt-opq-ri-type"};
const Enum::YLeaf OspfInternalLsaTypes::mgmt_opq_epl_type {10, "mgmt-opq-epl-type"};
const Enum::YLeaf OspfInternalLsaTypes::mgmt_opq_ell_type {11, "mgmt-opq-ell-type"};

const Enum::YLeaf ExMetric::mgmt_ex_metric_type_none {0, "mgmt-ex-metric-type-none"};
const Enum::YLeaf ExMetric::mgmt_ex_metric_type_1 {1, "mgmt-ex-metric-type-1"};
const Enum::YLeaf ExMetric::mgmt_ex_metric_type_2 {2, "mgmt-ex-metric-type-2"};

const Enum::YLeaf MplsTeOptTlv::mpls_te_opt_tlv_type_none {0, "mpls-te-opt-tlv-type-none"};
const Enum::YLeaf MplsTeOptTlv::mpls_te_opt_tlv_type_srlg {1, "mpls-te-opt-tlv-type-srlg"};
const Enum::YLeaf MplsTeOptTlv::mpls_te_opt_tlv_type_bc {2, "mpls-te-opt-tlv-type-bc"};
const Enum::YLeaf MplsTeOptTlv::mpls_te_opt_tlv_type_ixcd {3, "mpls-te-opt-tlv-type-ixcd"};
const Enum::YLeaf MplsTeOptTlv::mpls_te_opt_tlv_type_uni_delay {4, "mpls-te-opt-tlv-type-uni-delay"};

const Enum::YLeaf SrUloopEvent::none {0, "none"};
const Enum::YLeaf SrUloopEvent::link_down {1, "link-down"};
const Enum::YLeaf SrUloopEvent::link_up {2, "link-up"};

const Enum::YLeaf OspfBr::mgmt_d_type_abr_asbr {0, "mgmt-d-type-abr-asbr"};
const Enum::YLeaf OspfBr::mgmt_d_type_asbr {1, "mgmt-d-type-asbr"};
const Enum::YLeaf OspfBr::mgmt_d_type_abr {2, "mgmt-d-type-abr"};

const Enum::YLeaf OspfLs::router {1, "router"};
const Enum::YLeaf OspfLs::network {2, "network"};
const Enum::YLeaf OspfLs::summary {3, "summary"};
const Enum::YLeaf OspfLs::asbr_summary {4, "asbr-summary"};
const Enum::YLeaf OspfLs::external {5, "external"};
const Enum::YLeaf OspfLs::nssa_external {7, "nssa-external"};
const Enum::YLeaf OspfLs::opaque_link {9, "opaque-link"};
const Enum::YLeaf OspfLs::opaque_area {10, "opaque-area"};
const Enum::YLeaf OspfLs::opaque_as {11, "opaque-as"};

const Enum::YLeaf TimerTable::mgmt_db_no_table {0, "mgmt-db-no-table"};
const Enum::YLeaf TimerTable::mgmt_db_sec_table {1, "mgmt-db-sec-table"};
const Enum::YLeaf TimerTable::mgmt_db_buffer_table {2, "mgmt-db-buffer-table"};
const Enum::YLeaf TimerTable::mgmt_db_min_table {3, "mgmt-db-min-table"};

const Enum::YLeaf SrmsMiSrcEB::none {0, "none"};
const Enum::YLeaf SrmsMiSrcEB::local {1, "local"};
const Enum::YLeaf SrmsMiSrcEB::remote {2, "remote"};

const Enum::YLeaf SrmsMiFlagEB::false_ {0, "false"};
const Enum::YLeaf SrmsMiFlagEB::true_ {1, "true"};


}
}

