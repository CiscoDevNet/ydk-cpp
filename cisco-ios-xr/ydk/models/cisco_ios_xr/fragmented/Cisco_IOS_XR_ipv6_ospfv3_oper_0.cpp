
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ipv6_ospfv3_oper_0.hpp"
#include "Cisco_IOS_XR_ipv6_ospfv3_oper_1.hpp"
#include "Cisco_IOS_XR_ipv6_ospfv3_oper_2.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ipv6_ospfv3_oper {

Ospfv3::Ospfv3()
    :
    processes(std::make_shared<Ospfv3::Processes>())
{
    processes->parent = this;
    children["processes"] = processes;

    yang_name = "ospfv3"; yang_parent_name = "Cisco-IOS-XR-ipv6-ospfv3-oper";
}

Ospfv3::~Ospfv3()
{
}

bool Ospfv3::has_data() const
{
    return (processes !=  nullptr && processes->has_data());
}

bool Ospfv3::has_operation() const
{
    return is_set(operation)
	|| (processes !=  nullptr && processes->has_operation());
}

std::string Ospfv3::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv6-ospfv3-oper:ospfv3";

    return path_buffer.str();

}

EntityPath Ospfv3::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Ospfv3::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "processes")
    {
        if(processes != nullptr)
        {
            children["processes"] = processes;
        }
        else
        {
            processes = std::make_shared<Ospfv3::Processes>();
            processes->parent = this;
            children["processes"] = processes;
        }
        return children.at("processes");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::get_children()
{
    if(children.find("processes") == children.end())
    {
        if(processes != nullptr)
        {
            children["processes"] = processes;
        }
    }

    return children;
}

void Ospfv3::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> Ospfv3::clone_ptr() const
{
    return std::make_shared<Ospfv3>();
}

std::string Ospfv3::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Ospfv3::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Ospfv3::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

Ospfv3::Processes::Processes()
{
    yang_name = "processes"; yang_parent_name = "ospfv3";
}

Ospfv3::Processes::~Processes()
{
}

bool Ospfv3::Processes::has_data() const
{
    for (std::size_t index=0; index<process.size(); index++)
    {
        if(process[index]->has_data())
            return true;
    }
    return false;
}

bool Ospfv3::Processes::has_operation() const
{
    for (std::size_t index=0; index<process.size(); index++)
    {
        if(process[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospfv3::Processes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "processes";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv6-ospfv3-oper:ospfv3/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "process")
    {
        for(auto const & c : process)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospfv3::Processes::Process>();
        c->parent = this;
        process.push_back(std::move(c));
        children[segment_path] = process.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::get_children()
{
    for (auto const & c : process)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospfv3::Processes::set_value(const std::string & value_path, std::string value)
{
}

Ospfv3::Processes::Process::Process()
    :
    process_name{YType::str, "process-name"}
    	,
    default_vrf(std::make_shared<Ospfv3::Processes::Process::DefaultVrf>())
	,statistics(std::make_shared<Ospfv3::Processes::Process::Statistics>())
	,vrfs(std::make_shared<Ospfv3::Processes::Process::Vrfs>())
{
    default_vrf->parent = this;
    children["default-vrf"] = default_vrf;

    statistics->parent = this;
    children["statistics"] = statistics;

    vrfs->parent = this;
    children["vrfs"] = vrfs;

    yang_name = "process"; yang_parent_name = "processes";
}

Ospfv3::Processes::Process::~Process()
{
}

bool Ospfv3::Processes::Process::has_data() const
{
    return process_name.is_set
	|| (default_vrf !=  nullptr && default_vrf->has_data())
	|| (statistics !=  nullptr && statistics->has_data())
	|| (vrfs !=  nullptr && vrfs->has_data());
}

bool Ospfv3::Processes::Process::has_operation() const
{
    return is_set(operation)
	|| is_set(process_name.operation)
	|| (default_vrf !=  nullptr && default_vrf->has_operation())
	|| (statistics !=  nullptr && statistics->has_operation())
	|| (vrfs !=  nullptr && vrfs->has_operation());
}

std::string Ospfv3::Processes::Process::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "process" <<"[process-name='" <<process_name <<"']";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv6-ospfv3-oper:ospfv3/processes/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (process_name.is_set || is_set(process_name.operation)) leaf_name_data.push_back(process_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "default-vrf")
    {
        if(default_vrf != nullptr)
        {
            children["default-vrf"] = default_vrf;
        }
        else
        {
            default_vrf = std::make_shared<Ospfv3::Processes::Process::DefaultVrf>();
            default_vrf->parent = this;
            children["default-vrf"] = default_vrf;
        }
        return children.at("default-vrf");
    }

    if(child_yang_name == "statistics")
    {
        if(statistics != nullptr)
        {
            children["statistics"] = statistics;
        }
        else
        {
            statistics = std::make_shared<Ospfv3::Processes::Process::Statistics>();
            statistics->parent = this;
            children["statistics"] = statistics;
        }
        return children.at("statistics");
    }

    if(child_yang_name == "vrfs")
    {
        if(vrfs != nullptr)
        {
            children["vrfs"] = vrfs;
        }
        else
        {
            vrfs = std::make_shared<Ospfv3::Processes::Process::Vrfs>();
            vrfs->parent = this;
            children["vrfs"] = vrfs;
        }
        return children.at("vrfs");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::get_children()
{
    if(children.find("default-vrf") == children.end())
    {
        if(default_vrf != nullptr)
        {
            children["default-vrf"] = default_vrf;
        }
    }

    if(children.find("statistics") == children.end())
    {
        if(statistics != nullptr)
        {
            children["statistics"] = statistics;
        }
    }

    if(children.find("vrfs") == children.end())
    {
        if(vrfs != nullptr)
        {
            children["vrfs"] = vrfs;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "process-name")
    {
        process_name = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrfs()
{
    yang_name = "vrfs"; yang_parent_name = "process";
}

Ospfv3::Processes::Process::Vrfs::~Vrfs()
{
}

bool Ospfv3::Processes::Process::Vrfs::has_data() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return false;
}

bool Ospfv3::Processes::Process::Vrfs::has_operation() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospfv3::Processes::Process::Vrfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrfs";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vrfs' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "vrf")
    {
        for(auto const & c : vrf)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf>();
        c->parent = this;
        vrf.push_back(std::move(c));
        children[segment_path] = vrf.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::get_children()
{
    for (auto const & c : vrf)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::set_value(const std::string & value_path, std::string value)
{
}

Ospfv3::Processes::Process::Vrfs::Vrf::Vrf()
    :
    vrf_name{YType::str, "vrf-name"}
    	,
    area_informations(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaInformations>())
	,areas(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas>())
	,bad_checksums(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::BadChecksums>())
	,border_routers(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::BorderRouters>())
	,connected_routes(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::ConnectedRoutes>())
	,database_summary_table(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseSummaryTable>())
	,database_table(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable>())
	,external_routes(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::ExternalRoutes>())
	,fast_reroutes(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::FastReroutes>())
	,flood_list_process_table(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::FloodListProcessTable>())
	,interface_brief_process_table(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::InterfaceBriefProcessTable>())
	,interface_process_table(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::InterfaceProcessTable>())
	,internal_routes(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::InternalRoutes>())
	,neighbor_detail_process_table(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::NeighborDetailProcessTable>())
	,neighbor_process_table(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::NeighborProcessTable>())
	,protocol_areas(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::ProtocolAreas>())
	,redistributions(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Redistributions>())
	,request_list_process_table(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::RequestListProcessTable>())
	,retransmission_list_process_table(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::RetransmissionListProcessTable>())
	,route_summary(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::RouteSummary>())
	,sham_link_table(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::ShamLinkTable>())
	,summary(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Summary>())
	,summary_prefixes(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::SummaryPrefixes>())
	,virtual_link(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::VirtualLink>())
	,vrf_statistics(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics>())
{
    area_informations->parent = this;
    children["area-informations"] = area_informations;

    areas->parent = this;
    children["areas"] = areas;

    bad_checksums->parent = this;
    children["bad-checksums"] = bad_checksums;

    border_routers->parent = this;
    children["border-routers"] = border_routers;

    connected_routes->parent = this;
    children["connected-routes"] = connected_routes;

    database_summary_table->parent = this;
    children["database-summary-table"] = database_summary_table;

    database_table->parent = this;
    children["database-table"] = database_table;

    external_routes->parent = this;
    children["external-routes"] = external_routes;

    fast_reroutes->parent = this;
    children["fast-reroutes"] = fast_reroutes;

    flood_list_process_table->parent = this;
    children["flood-list-process-table"] = flood_list_process_table;

    interface_brief_process_table->parent = this;
    children["interface-brief-process-table"] = interface_brief_process_table;

    interface_process_table->parent = this;
    children["interface-process-table"] = interface_process_table;

    internal_routes->parent = this;
    children["internal-routes"] = internal_routes;

    neighbor_detail_process_table->parent = this;
    children["neighbor-detail-process-table"] = neighbor_detail_process_table;

    neighbor_process_table->parent = this;
    children["neighbor-process-table"] = neighbor_process_table;

    protocol_areas->parent = this;
    children["protocol-areas"] = protocol_areas;

    redistributions->parent = this;
    children["redistributions"] = redistributions;

    request_list_process_table->parent = this;
    children["request-list-process-table"] = request_list_process_table;

    retransmission_list_process_table->parent = this;
    children["retransmission-list-process-table"] = retransmission_list_process_table;

    route_summary->parent = this;
    children["route-summary"] = route_summary;

    sham_link_table->parent = this;
    children["sham-link-table"] = sham_link_table;

    summary->parent = this;
    children["summary"] = summary;

    summary_prefixes->parent = this;
    children["summary-prefixes"] = summary_prefixes;

    virtual_link->parent = this;
    children["virtual-link"] = virtual_link;

    vrf_statistics->parent = this;
    children["vrf-statistics"] = vrf_statistics;

    yang_name = "vrf"; yang_parent_name = "vrfs";
}

Ospfv3::Processes::Process::Vrfs::Vrf::~Vrf()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::has_data() const
{
    return vrf_name.is_set
	|| (area_informations !=  nullptr && area_informations->has_data())
	|| (areas !=  nullptr && areas->has_data())
	|| (bad_checksums !=  nullptr && bad_checksums->has_data())
	|| (border_routers !=  nullptr && border_routers->has_data())
	|| (connected_routes !=  nullptr && connected_routes->has_data())
	|| (database_summary_table !=  nullptr && database_summary_table->has_data())
	|| (database_table !=  nullptr && database_table->has_data())
	|| (external_routes !=  nullptr && external_routes->has_data())
	|| (fast_reroutes !=  nullptr && fast_reroutes->has_data())
	|| (flood_list_process_table !=  nullptr && flood_list_process_table->has_data())
	|| (interface_brief_process_table !=  nullptr && interface_brief_process_table->has_data())
	|| (interface_process_table !=  nullptr && interface_process_table->has_data())
	|| (internal_routes !=  nullptr && internal_routes->has_data())
	|| (neighbor_detail_process_table !=  nullptr && neighbor_detail_process_table->has_data())
	|| (neighbor_process_table !=  nullptr && neighbor_process_table->has_data())
	|| (protocol_areas !=  nullptr && protocol_areas->has_data())
	|| (redistributions !=  nullptr && redistributions->has_data())
	|| (request_list_process_table !=  nullptr && request_list_process_table->has_data())
	|| (retransmission_list_process_table !=  nullptr && retransmission_list_process_table->has_data())
	|| (route_summary !=  nullptr && route_summary->has_data())
	|| (sham_link_table !=  nullptr && sham_link_table->has_data())
	|| (summary !=  nullptr && summary->has_data())
	|| (summary_prefixes !=  nullptr && summary_prefixes->has_data())
	|| (virtual_link !=  nullptr && virtual_link->has_data())
	|| (vrf_statistics !=  nullptr && vrf_statistics->has_data());
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::has_operation() const
{
    return is_set(operation)
	|| is_set(vrf_name.operation)
	|| (area_informations !=  nullptr && area_informations->has_operation())
	|| (areas !=  nullptr && areas->has_operation())
	|| (bad_checksums !=  nullptr && bad_checksums->has_operation())
	|| (border_routers !=  nullptr && border_routers->has_operation())
	|| (connected_routes !=  nullptr && connected_routes->has_operation())
	|| (database_summary_table !=  nullptr && database_summary_table->has_operation())
	|| (database_table !=  nullptr && database_table->has_operation())
	|| (external_routes !=  nullptr && external_routes->has_operation())
	|| (fast_reroutes !=  nullptr && fast_reroutes->has_operation())
	|| (flood_list_process_table !=  nullptr && flood_list_process_table->has_operation())
	|| (interface_brief_process_table !=  nullptr && interface_brief_process_table->has_operation())
	|| (interface_process_table !=  nullptr && interface_process_table->has_operation())
	|| (internal_routes !=  nullptr && internal_routes->has_operation())
	|| (neighbor_detail_process_table !=  nullptr && neighbor_detail_process_table->has_operation())
	|| (neighbor_process_table !=  nullptr && neighbor_process_table->has_operation())
	|| (protocol_areas !=  nullptr && protocol_areas->has_operation())
	|| (redistributions !=  nullptr && redistributions->has_operation())
	|| (request_list_process_table !=  nullptr && request_list_process_table->has_operation())
	|| (retransmission_list_process_table !=  nullptr && retransmission_list_process_table->has_operation())
	|| (route_summary !=  nullptr && route_summary->has_operation())
	|| (sham_link_table !=  nullptr && sham_link_table->has_operation())
	|| (summary !=  nullptr && summary->has_operation())
	|| (summary_prefixes !=  nullptr && summary_prefixes->has_operation())
	|| (virtual_link !=  nullptr && virtual_link->has_operation())
	|| (vrf_statistics !=  nullptr && vrf_statistics->has_operation());
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf" <<"[vrf-name='" <<vrf_name <<"']";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vrf' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "area-informations")
    {
        if(area_informations != nullptr)
        {
            children["area-informations"] = area_informations;
        }
        else
        {
            area_informations = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaInformations>();
            area_informations->parent = this;
            children["area-informations"] = area_informations;
        }
        return children.at("area-informations");
    }

    if(child_yang_name == "areas")
    {
        if(areas != nullptr)
        {
            children["areas"] = areas;
        }
        else
        {
            areas = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas>();
            areas->parent = this;
            children["areas"] = areas;
        }
        return children.at("areas");
    }

    if(child_yang_name == "bad-checksums")
    {
        if(bad_checksums != nullptr)
        {
            children["bad-checksums"] = bad_checksums;
        }
        else
        {
            bad_checksums = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::BadChecksums>();
            bad_checksums->parent = this;
            children["bad-checksums"] = bad_checksums;
        }
        return children.at("bad-checksums");
    }

    if(child_yang_name == "border-routers")
    {
        if(border_routers != nullptr)
        {
            children["border-routers"] = border_routers;
        }
        else
        {
            border_routers = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::BorderRouters>();
            border_routers->parent = this;
            children["border-routers"] = border_routers;
        }
        return children.at("border-routers");
    }

    if(child_yang_name == "connected-routes")
    {
        if(connected_routes != nullptr)
        {
            children["connected-routes"] = connected_routes;
        }
        else
        {
            connected_routes = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::ConnectedRoutes>();
            connected_routes->parent = this;
            children["connected-routes"] = connected_routes;
        }
        return children.at("connected-routes");
    }

    if(child_yang_name == "database-summary-table")
    {
        if(database_summary_table != nullptr)
        {
            children["database-summary-table"] = database_summary_table;
        }
        else
        {
            database_summary_table = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseSummaryTable>();
            database_summary_table->parent = this;
            children["database-summary-table"] = database_summary_table;
        }
        return children.at("database-summary-table");
    }

    if(child_yang_name == "database-table")
    {
        if(database_table != nullptr)
        {
            children["database-table"] = database_table;
        }
        else
        {
            database_table = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable>();
            database_table->parent = this;
            children["database-table"] = database_table;
        }
        return children.at("database-table");
    }

    if(child_yang_name == "external-routes")
    {
        if(external_routes != nullptr)
        {
            children["external-routes"] = external_routes;
        }
        else
        {
            external_routes = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::ExternalRoutes>();
            external_routes->parent = this;
            children["external-routes"] = external_routes;
        }
        return children.at("external-routes");
    }

    if(child_yang_name == "fast-reroutes")
    {
        if(fast_reroutes != nullptr)
        {
            children["fast-reroutes"] = fast_reroutes;
        }
        else
        {
            fast_reroutes = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::FastReroutes>();
            fast_reroutes->parent = this;
            children["fast-reroutes"] = fast_reroutes;
        }
        return children.at("fast-reroutes");
    }

    if(child_yang_name == "flood-list-process-table")
    {
        if(flood_list_process_table != nullptr)
        {
            children["flood-list-process-table"] = flood_list_process_table;
        }
        else
        {
            flood_list_process_table = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::FloodListProcessTable>();
            flood_list_process_table->parent = this;
            children["flood-list-process-table"] = flood_list_process_table;
        }
        return children.at("flood-list-process-table");
    }

    if(child_yang_name == "interface-brief-process-table")
    {
        if(interface_brief_process_table != nullptr)
        {
            children["interface-brief-process-table"] = interface_brief_process_table;
        }
        else
        {
            interface_brief_process_table = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::InterfaceBriefProcessTable>();
            interface_brief_process_table->parent = this;
            children["interface-brief-process-table"] = interface_brief_process_table;
        }
        return children.at("interface-brief-process-table");
    }

    if(child_yang_name == "interface-process-table")
    {
        if(interface_process_table != nullptr)
        {
            children["interface-process-table"] = interface_process_table;
        }
        else
        {
            interface_process_table = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::InterfaceProcessTable>();
            interface_process_table->parent = this;
            children["interface-process-table"] = interface_process_table;
        }
        return children.at("interface-process-table");
    }

    if(child_yang_name == "internal-routes")
    {
        if(internal_routes != nullptr)
        {
            children["internal-routes"] = internal_routes;
        }
        else
        {
            internal_routes = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::InternalRoutes>();
            internal_routes->parent = this;
            children["internal-routes"] = internal_routes;
        }
        return children.at("internal-routes");
    }

    if(child_yang_name == "neighbor-detail-process-table")
    {
        if(neighbor_detail_process_table != nullptr)
        {
            children["neighbor-detail-process-table"] = neighbor_detail_process_table;
        }
        else
        {
            neighbor_detail_process_table = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::NeighborDetailProcessTable>();
            neighbor_detail_process_table->parent = this;
            children["neighbor-detail-process-table"] = neighbor_detail_process_table;
        }
        return children.at("neighbor-detail-process-table");
    }

    if(child_yang_name == "neighbor-process-table")
    {
        if(neighbor_process_table != nullptr)
        {
            children["neighbor-process-table"] = neighbor_process_table;
        }
        else
        {
            neighbor_process_table = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::NeighborProcessTable>();
            neighbor_process_table->parent = this;
            children["neighbor-process-table"] = neighbor_process_table;
        }
        return children.at("neighbor-process-table");
    }

    if(child_yang_name == "protocol-areas")
    {
        if(protocol_areas != nullptr)
        {
            children["protocol-areas"] = protocol_areas;
        }
        else
        {
            protocol_areas = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::ProtocolAreas>();
            protocol_areas->parent = this;
            children["protocol-areas"] = protocol_areas;
        }
        return children.at("protocol-areas");
    }

    if(child_yang_name == "redistributions")
    {
        if(redistributions != nullptr)
        {
            children["redistributions"] = redistributions;
        }
        else
        {
            redistributions = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Redistributions>();
            redistributions->parent = this;
            children["redistributions"] = redistributions;
        }
        return children.at("redistributions");
    }

    if(child_yang_name == "request-list-process-table")
    {
        if(request_list_process_table != nullptr)
        {
            children["request-list-process-table"] = request_list_process_table;
        }
        else
        {
            request_list_process_table = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::RequestListProcessTable>();
            request_list_process_table->parent = this;
            children["request-list-process-table"] = request_list_process_table;
        }
        return children.at("request-list-process-table");
    }

    if(child_yang_name == "retransmission-list-process-table")
    {
        if(retransmission_list_process_table != nullptr)
        {
            children["retransmission-list-process-table"] = retransmission_list_process_table;
        }
        else
        {
            retransmission_list_process_table = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::RetransmissionListProcessTable>();
            retransmission_list_process_table->parent = this;
            children["retransmission-list-process-table"] = retransmission_list_process_table;
        }
        return children.at("retransmission-list-process-table");
    }

    if(child_yang_name == "route-summary")
    {
        if(route_summary != nullptr)
        {
            children["route-summary"] = route_summary;
        }
        else
        {
            route_summary = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::RouteSummary>();
            route_summary->parent = this;
            children["route-summary"] = route_summary;
        }
        return children.at("route-summary");
    }

    if(child_yang_name == "sham-link-table")
    {
        if(sham_link_table != nullptr)
        {
            children["sham-link-table"] = sham_link_table;
        }
        else
        {
            sham_link_table = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::ShamLinkTable>();
            sham_link_table->parent = this;
            children["sham-link-table"] = sham_link_table;
        }
        return children.at("sham-link-table");
    }

    if(child_yang_name == "summary")
    {
        if(summary != nullptr)
        {
            children["summary"] = summary;
        }
        else
        {
            summary = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Summary>();
            summary->parent = this;
            children["summary"] = summary;
        }
        return children.at("summary");
    }

    if(child_yang_name == "summary-prefixes")
    {
        if(summary_prefixes != nullptr)
        {
            children["summary-prefixes"] = summary_prefixes;
        }
        else
        {
            summary_prefixes = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::SummaryPrefixes>();
            summary_prefixes->parent = this;
            children["summary-prefixes"] = summary_prefixes;
        }
        return children.at("summary-prefixes");
    }

    if(child_yang_name == "virtual-link")
    {
        if(virtual_link != nullptr)
        {
            children["virtual-link"] = virtual_link;
        }
        else
        {
            virtual_link = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::VirtualLink>();
            virtual_link->parent = this;
            children["virtual-link"] = virtual_link;
        }
        return children.at("virtual-link");
    }

    if(child_yang_name == "vrf-statistics")
    {
        if(vrf_statistics != nullptr)
        {
            children["vrf-statistics"] = vrf_statistics;
        }
        else
        {
            vrf_statistics = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics>();
            vrf_statistics->parent = this;
            children["vrf-statistics"] = vrf_statistics;
        }
        return children.at("vrf-statistics");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::get_children()
{
    if(children.find("area-informations") == children.end())
    {
        if(area_informations != nullptr)
        {
            children["area-informations"] = area_informations;
        }
    }

    if(children.find("areas") == children.end())
    {
        if(areas != nullptr)
        {
            children["areas"] = areas;
        }
    }

    if(children.find("bad-checksums") == children.end())
    {
        if(bad_checksums != nullptr)
        {
            children["bad-checksums"] = bad_checksums;
        }
    }

    if(children.find("border-routers") == children.end())
    {
        if(border_routers != nullptr)
        {
            children["border-routers"] = border_routers;
        }
    }

    if(children.find("connected-routes") == children.end())
    {
        if(connected_routes != nullptr)
        {
            children["connected-routes"] = connected_routes;
        }
    }

    if(children.find("database-summary-table") == children.end())
    {
        if(database_summary_table != nullptr)
        {
            children["database-summary-table"] = database_summary_table;
        }
    }

    if(children.find("database-table") == children.end())
    {
        if(database_table != nullptr)
        {
            children["database-table"] = database_table;
        }
    }

    if(children.find("external-routes") == children.end())
    {
        if(external_routes != nullptr)
        {
            children["external-routes"] = external_routes;
        }
    }

    if(children.find("fast-reroutes") == children.end())
    {
        if(fast_reroutes != nullptr)
        {
            children["fast-reroutes"] = fast_reroutes;
        }
    }

    if(children.find("flood-list-process-table") == children.end())
    {
        if(flood_list_process_table != nullptr)
        {
            children["flood-list-process-table"] = flood_list_process_table;
        }
    }

    if(children.find("interface-brief-process-table") == children.end())
    {
        if(interface_brief_process_table != nullptr)
        {
            children["interface-brief-process-table"] = interface_brief_process_table;
        }
    }

    if(children.find("interface-process-table") == children.end())
    {
        if(interface_process_table != nullptr)
        {
            children["interface-process-table"] = interface_process_table;
        }
    }

    if(children.find("internal-routes") == children.end())
    {
        if(internal_routes != nullptr)
        {
            children["internal-routes"] = internal_routes;
        }
    }

    if(children.find("neighbor-detail-process-table") == children.end())
    {
        if(neighbor_detail_process_table != nullptr)
        {
            children["neighbor-detail-process-table"] = neighbor_detail_process_table;
        }
    }

    if(children.find("neighbor-process-table") == children.end())
    {
        if(neighbor_process_table != nullptr)
        {
            children["neighbor-process-table"] = neighbor_process_table;
        }
    }

    if(children.find("protocol-areas") == children.end())
    {
        if(protocol_areas != nullptr)
        {
            children["protocol-areas"] = protocol_areas;
        }
    }

    if(children.find("redistributions") == children.end())
    {
        if(redistributions != nullptr)
        {
            children["redistributions"] = redistributions;
        }
    }

    if(children.find("request-list-process-table") == children.end())
    {
        if(request_list_process_table != nullptr)
        {
            children["request-list-process-table"] = request_list_process_table;
        }
    }

    if(children.find("retransmission-list-process-table") == children.end())
    {
        if(retransmission_list_process_table != nullptr)
        {
            children["retransmission-list-process-table"] = retransmission_list_process_table;
        }
    }

    if(children.find("route-summary") == children.end())
    {
        if(route_summary != nullptr)
        {
            children["route-summary"] = route_summary;
        }
    }

    if(children.find("sham-link-table") == children.end())
    {
        if(sham_link_table != nullptr)
        {
            children["sham-link-table"] = sham_link_table;
        }
    }

    if(children.find("summary") == children.end())
    {
        if(summary != nullptr)
        {
            children["summary"] = summary;
        }
    }

    if(children.find("summary-prefixes") == children.end())
    {
        if(summary_prefixes != nullptr)
        {
            children["summary-prefixes"] = summary_prefixes;
        }
    }

    if(children.find("virtual-link") == children.end())
    {
        if(virtual_link != nullptr)
        {
            children["virtual-link"] = virtual_link;
        }
    }

    if(children.find("vrf-statistics") == children.end())
    {
        if(vrf_statistics != nullptr)
        {
            children["vrf-statistics"] = vrf_statistics;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::SummaryPrefixes::SummaryPrefixes()
{
    yang_name = "summary-prefixes"; yang_parent_name = "vrf";
}

Ospfv3::Processes::Process::Vrfs::Vrf::SummaryPrefixes::~SummaryPrefixes()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::SummaryPrefixes::has_data() const
{
    for (std::size_t index=0; index<summary_prefix.size(); index++)
    {
        if(summary_prefix[index]->has_data())
            return true;
    }
    return false;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::SummaryPrefixes::has_operation() const
{
    for (std::size_t index=0; index<summary_prefix.size(); index++)
    {
        if(summary_prefix[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::SummaryPrefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary-prefixes";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::SummaryPrefixes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SummaryPrefixes' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::SummaryPrefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "summary-prefix")
    {
        for(auto const & c : summary_prefix)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::SummaryPrefixes::SummaryPrefix>();
        c->parent = this;
        summary_prefix.push_back(std::move(c));
        children[segment_path] = summary_prefix.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::SummaryPrefixes::get_children()
{
    for (auto const & c : summary_prefix)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::SummaryPrefixes::set_value(const std::string & value_path, std::string value)
{
}

Ospfv3::Processes::Process::Vrfs::Vrf::SummaryPrefixes::SummaryPrefix::SummaryPrefix()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint8, "prefix-length"},
    prefix_metric{YType::uint32, "prefix-metric"},
    prefix_metric_type{YType::enumeration, "prefix-metric-type"},
    tag{YType::uint32, "tag"}
{
    yang_name = "summary-prefix"; yang_parent_name = "summary-prefixes";
}

Ospfv3::Processes::Process::Vrfs::Vrf::SummaryPrefixes::SummaryPrefix::~SummaryPrefix()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::SummaryPrefixes::SummaryPrefix::has_data() const
{
    return prefix.is_set
	|| prefix_length.is_set
	|| prefix_metric.is_set
	|| prefix_metric_type.is_set
	|| tag.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::SummaryPrefixes::SummaryPrefix::has_operation() const
{
    return is_set(operation)
	|| is_set(prefix.operation)
	|| is_set(prefix_length.operation)
	|| is_set(prefix_metric.operation)
	|| is_set(prefix_metric_type.operation)
	|| is_set(tag.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::SummaryPrefixes::SummaryPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary-prefix";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::SummaryPrefixes::SummaryPrefix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SummaryPrefix' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (prefix_metric.is_set || is_set(prefix_metric.operation)) leaf_name_data.push_back(prefix_metric.get_name_leafdata());
    if (prefix_metric_type.is_set || is_set(prefix_metric_type.operation)) leaf_name_data.push_back(prefix_metric_type.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::SummaryPrefixes::SummaryPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::SummaryPrefixes::SummaryPrefix::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::SummaryPrefixes::SummaryPrefix::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "prefix-metric")
    {
        prefix_metric = value;
    }
    if(value_path == "prefix-metric-type")
    {
        prefix_metric_type = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::BorderRouters::BorderRouters()
{
    yang_name = "border-routers"; yang_parent_name = "vrf";
}

Ospfv3::Processes::Process::Vrfs::Vrf::BorderRouters::~BorderRouters()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::BorderRouters::has_data() const
{
    for (std::size_t index=0; index<border_router.size(); index++)
    {
        if(border_router[index]->has_data())
            return true;
    }
    return false;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::BorderRouters::has_operation() const
{
    for (std::size_t index=0; index<border_router.size(); index++)
    {
        if(border_router[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::BorderRouters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "border-routers";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::BorderRouters::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BorderRouters' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::BorderRouters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "border-router")
    {
        for(auto const & c : border_router)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::BorderRouters::BorderRouter>();
        c->parent = this;
        border_router.push_back(std::move(c));
        children[segment_path] = border_router.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::BorderRouters::get_children()
{
    for (auto const & c : border_router)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::BorderRouters::set_value(const std::string & value_path, std::string value)
{
}

Ospfv3::Processes::Process::Vrfs::Vrf::BorderRouters::BorderRouter::BorderRouter()
    :
    border_router_id{YType::str, "border-router-id"}
{
    yang_name = "border-router"; yang_parent_name = "border-routers";
}

Ospfv3::Processes::Process::Vrfs::Vrf::BorderRouters::BorderRouter::~BorderRouter()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::BorderRouters::BorderRouter::has_data() const
{
    for (std::size_t index=0; index<border_router_path.size(); index++)
    {
        if(border_router_path[index]->has_data())
            return true;
    }
    return border_router_id.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::BorderRouters::BorderRouter::has_operation() const
{
    for (std::size_t index=0; index<border_router_path.size(); index++)
    {
        if(border_router_path[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(border_router_id.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::BorderRouters::BorderRouter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "border-router" <<"[border-router-id='" <<border_router_id <<"']";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::BorderRouters::BorderRouter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BorderRouter' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (border_router_id.is_set || is_set(border_router_id.operation)) leaf_name_data.push_back(border_router_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::BorderRouters::BorderRouter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "border-router-path")
    {
        for(auto const & c : border_router_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::BorderRouters::BorderRouter::BorderRouterPath>();
        c->parent = this;
        border_router_path.push_back(std::move(c));
        children[segment_path] = border_router_path.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::BorderRouters::BorderRouter::get_children()
{
    for (auto const & c : border_router_path)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::BorderRouters::BorderRouter::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "border-router-id")
    {
        border_router_id = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::BorderRouters::BorderRouter::BorderRouterPath::BorderRouterPath()
    :
    border_router_area_id{YType::str, "border-router-area-id"},
    border_router_next_hop{YType::str, "border-router-next-hop"},
    border_router_route_metric{YType::uint32, "border-router-route-metric"},
    border_router_type{YType::enumeration, "border-router-type"},
    interface_name{YType::str, "interface-name"},
    is_intra_area_router{YType::boolean, "is-intra-area-router"},
    spf_version{YType::uint32, "spf-version"}
{
    yang_name = "border-router-path"; yang_parent_name = "border-router";
}

Ospfv3::Processes::Process::Vrfs::Vrf::BorderRouters::BorderRouter::BorderRouterPath::~BorderRouterPath()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::BorderRouters::BorderRouter::BorderRouterPath::has_data() const
{
    return border_router_area_id.is_set
	|| border_router_next_hop.is_set
	|| border_router_route_metric.is_set
	|| border_router_type.is_set
	|| interface_name.is_set
	|| is_intra_area_router.is_set
	|| spf_version.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::BorderRouters::BorderRouter::BorderRouterPath::has_operation() const
{
    return is_set(operation)
	|| is_set(border_router_area_id.operation)
	|| is_set(border_router_next_hop.operation)
	|| is_set(border_router_route_metric.operation)
	|| is_set(border_router_type.operation)
	|| is_set(interface_name.operation)
	|| is_set(is_intra_area_router.operation)
	|| is_set(spf_version.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::BorderRouters::BorderRouter::BorderRouterPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "border-router-path";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::BorderRouters::BorderRouter::BorderRouterPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BorderRouterPath' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (border_router_area_id.is_set || is_set(border_router_area_id.operation)) leaf_name_data.push_back(border_router_area_id.get_name_leafdata());
    if (border_router_next_hop.is_set || is_set(border_router_next_hop.operation)) leaf_name_data.push_back(border_router_next_hop.get_name_leafdata());
    if (border_router_route_metric.is_set || is_set(border_router_route_metric.operation)) leaf_name_data.push_back(border_router_route_metric.get_name_leafdata());
    if (border_router_type.is_set || is_set(border_router_type.operation)) leaf_name_data.push_back(border_router_type.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (is_intra_area_router.is_set || is_set(is_intra_area_router.operation)) leaf_name_data.push_back(is_intra_area_router.get_name_leafdata());
    if (spf_version.is_set || is_set(spf_version.operation)) leaf_name_data.push_back(spf_version.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::BorderRouters::BorderRouter::BorderRouterPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::BorderRouters::BorderRouter::BorderRouterPath::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::BorderRouters::BorderRouter::BorderRouterPath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "border-router-area-id")
    {
        border_router_area_id = value;
    }
    if(value_path == "border-router-next-hop")
    {
        border_router_next_hop = value;
    }
    if(value_path == "border-router-route-metric")
    {
        border_router_route_metric = value;
    }
    if(value_path == "border-router-type")
    {
        border_router_type = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "is-intra-area-router")
    {
        is_intra_area_router = value;
    }
    if(value_path == "spf-version")
    {
        spf_version = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::ShamLinkTable::ShamLinkTable()
    :
    is_sham_link_authentication_enabled{YType::boolean, "is-sham-link-authentication-enabled"},
    is_sham_link_encryption_enabled{YType::boolean, "is-sham-link-encryption-enabled"},
    is_sham_link_ip_security_active{YType::boolean, "is-sham-link-ip-security-active"},
    is_sham_link_ip_security_required{YType::boolean, "is-sham-link-ip-security-required"},
    sham_link_area{YType::str, "sham-link-area"},
    sham_link_authentication_transmit{YType::uint32, "sham-link-authentication-transmit"},
    sham_link_cost{YType::uint16, "sham-link-cost"},
    sham_link_dc_bitless_lsa{YType::uint32, "sham-link-dc-bitless-lsa"},
    sham_link_dead_interval{YType::uint32, "sham-link-dead-interval"},
    sham_link_demand_circuit{YType::boolean, "sham-link-demand-circuit"},
    sham_link_dest_address{YType::str, "sham-link-dest-address"},
    sham_link_encrypted_authentication_transmitted{YType::uint32, "sham-link-encrypted-authentication-transmitted"},
    sham_link_encryption_spi{YType::uint32, "sham-link-encryption-spi"},
    sham_link_encryption_transmitted{YType::uint32, "sham-link-encryption-transmitted"},
    sham_link_gr{YType::boolean, "sham-link-gr"},
    sham_link_gr_enabled{YType::boolean, "sham-link-gr-enabled"},
    sham_link_hello_interval{YType::uint32, "sham-link-hello-interval"},
    sham_link_ifindex{YType::uint32, "sham-link-ifindex"},
    sham_link_last_gr{YType::uint32, "sham-link-last-gr"},
    sham_link_neighbor_id{YType::str, "sham-link-neighbor-id"},
    sham_link_next_hello{YType::uint32, "sham-link-next-hello"},
    sham_link_passive{YType::boolean, "sham-link-passive"},
    sham_link_retransmission_interval{YType::uint32, "sham-link-retransmission-interval"},
    sham_link_source_address{YType::str, "sham-link-source-address"},
    sham_link_state{YType::enumeration, "sham-link-state"},
    sham_link_transmission_delay{YType::uint16, "sham-link-transmission-delay"},
    sham_link_wait_interval{YType::uint32, "sham-link-wait-interval"},
    virtual_link_authentication_spi{YType::uint32, "virtual-link-authentication-spi"}
    	,
    sham_link_neighbor(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::ShamLinkTable::ShamLinkNeighbor>())
{
    sham_link_neighbor->parent = this;
    children["sham-link-neighbor"] = sham_link_neighbor;

    yang_name = "sham-link-table"; yang_parent_name = "vrf";
}

Ospfv3::Processes::Process::Vrfs::Vrf::ShamLinkTable::~ShamLinkTable()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::ShamLinkTable::has_data() const
{
    return is_sham_link_authentication_enabled.is_set
	|| is_sham_link_encryption_enabled.is_set
	|| is_sham_link_ip_security_active.is_set
	|| is_sham_link_ip_security_required.is_set
	|| sham_link_area.is_set
	|| sham_link_authentication_transmit.is_set
	|| sham_link_cost.is_set
	|| sham_link_dc_bitless_lsa.is_set
	|| sham_link_dead_interval.is_set
	|| sham_link_demand_circuit.is_set
	|| sham_link_dest_address.is_set
	|| sham_link_encrypted_authentication_transmitted.is_set
	|| sham_link_encryption_spi.is_set
	|| sham_link_encryption_transmitted.is_set
	|| sham_link_gr.is_set
	|| sham_link_gr_enabled.is_set
	|| sham_link_hello_interval.is_set
	|| sham_link_ifindex.is_set
	|| sham_link_last_gr.is_set
	|| sham_link_neighbor_id.is_set
	|| sham_link_next_hello.is_set
	|| sham_link_passive.is_set
	|| sham_link_retransmission_interval.is_set
	|| sham_link_source_address.is_set
	|| sham_link_state.is_set
	|| sham_link_transmission_delay.is_set
	|| sham_link_wait_interval.is_set
	|| virtual_link_authentication_spi.is_set
	|| (sham_link_neighbor !=  nullptr && sham_link_neighbor->has_data());
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::ShamLinkTable::has_operation() const
{
    return is_set(operation)
	|| is_set(is_sham_link_authentication_enabled.operation)
	|| is_set(is_sham_link_encryption_enabled.operation)
	|| is_set(is_sham_link_ip_security_active.operation)
	|| is_set(is_sham_link_ip_security_required.operation)
	|| is_set(sham_link_area.operation)
	|| is_set(sham_link_authentication_transmit.operation)
	|| is_set(sham_link_cost.operation)
	|| is_set(sham_link_dc_bitless_lsa.operation)
	|| is_set(sham_link_dead_interval.operation)
	|| is_set(sham_link_demand_circuit.operation)
	|| is_set(sham_link_dest_address.operation)
	|| is_set(sham_link_encrypted_authentication_transmitted.operation)
	|| is_set(sham_link_encryption_spi.operation)
	|| is_set(sham_link_encryption_transmitted.operation)
	|| is_set(sham_link_gr.operation)
	|| is_set(sham_link_gr_enabled.operation)
	|| is_set(sham_link_hello_interval.operation)
	|| is_set(sham_link_ifindex.operation)
	|| is_set(sham_link_last_gr.operation)
	|| is_set(sham_link_neighbor_id.operation)
	|| is_set(sham_link_next_hello.operation)
	|| is_set(sham_link_passive.operation)
	|| is_set(sham_link_retransmission_interval.operation)
	|| is_set(sham_link_source_address.operation)
	|| is_set(sham_link_state.operation)
	|| is_set(sham_link_transmission_delay.operation)
	|| is_set(sham_link_wait_interval.operation)
	|| is_set(virtual_link_authentication_spi.operation)
	|| (sham_link_neighbor !=  nullptr && sham_link_neighbor->has_operation());
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::ShamLinkTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sham-link-table";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::ShamLinkTable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ShamLinkTable' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_sham_link_authentication_enabled.is_set || is_set(is_sham_link_authentication_enabled.operation)) leaf_name_data.push_back(is_sham_link_authentication_enabled.get_name_leafdata());
    if (is_sham_link_encryption_enabled.is_set || is_set(is_sham_link_encryption_enabled.operation)) leaf_name_data.push_back(is_sham_link_encryption_enabled.get_name_leafdata());
    if (is_sham_link_ip_security_active.is_set || is_set(is_sham_link_ip_security_active.operation)) leaf_name_data.push_back(is_sham_link_ip_security_active.get_name_leafdata());
    if (is_sham_link_ip_security_required.is_set || is_set(is_sham_link_ip_security_required.operation)) leaf_name_data.push_back(is_sham_link_ip_security_required.get_name_leafdata());
    if (sham_link_area.is_set || is_set(sham_link_area.operation)) leaf_name_data.push_back(sham_link_area.get_name_leafdata());
    if (sham_link_authentication_transmit.is_set || is_set(sham_link_authentication_transmit.operation)) leaf_name_data.push_back(sham_link_authentication_transmit.get_name_leafdata());
    if (sham_link_cost.is_set || is_set(sham_link_cost.operation)) leaf_name_data.push_back(sham_link_cost.get_name_leafdata());
    if (sham_link_dc_bitless_lsa.is_set || is_set(sham_link_dc_bitless_lsa.operation)) leaf_name_data.push_back(sham_link_dc_bitless_lsa.get_name_leafdata());
    if (sham_link_dead_interval.is_set || is_set(sham_link_dead_interval.operation)) leaf_name_data.push_back(sham_link_dead_interval.get_name_leafdata());
    if (sham_link_demand_circuit.is_set || is_set(sham_link_demand_circuit.operation)) leaf_name_data.push_back(sham_link_demand_circuit.get_name_leafdata());
    if (sham_link_dest_address.is_set || is_set(sham_link_dest_address.operation)) leaf_name_data.push_back(sham_link_dest_address.get_name_leafdata());
    if (sham_link_encrypted_authentication_transmitted.is_set || is_set(sham_link_encrypted_authentication_transmitted.operation)) leaf_name_data.push_back(sham_link_encrypted_authentication_transmitted.get_name_leafdata());
    if (sham_link_encryption_spi.is_set || is_set(sham_link_encryption_spi.operation)) leaf_name_data.push_back(sham_link_encryption_spi.get_name_leafdata());
    if (sham_link_encryption_transmitted.is_set || is_set(sham_link_encryption_transmitted.operation)) leaf_name_data.push_back(sham_link_encryption_transmitted.get_name_leafdata());
    if (sham_link_gr.is_set || is_set(sham_link_gr.operation)) leaf_name_data.push_back(sham_link_gr.get_name_leafdata());
    if (sham_link_gr_enabled.is_set || is_set(sham_link_gr_enabled.operation)) leaf_name_data.push_back(sham_link_gr_enabled.get_name_leafdata());
    if (sham_link_hello_interval.is_set || is_set(sham_link_hello_interval.operation)) leaf_name_data.push_back(sham_link_hello_interval.get_name_leafdata());
    if (sham_link_ifindex.is_set || is_set(sham_link_ifindex.operation)) leaf_name_data.push_back(sham_link_ifindex.get_name_leafdata());
    if (sham_link_last_gr.is_set || is_set(sham_link_last_gr.operation)) leaf_name_data.push_back(sham_link_last_gr.get_name_leafdata());
    if (sham_link_neighbor_id.is_set || is_set(sham_link_neighbor_id.operation)) leaf_name_data.push_back(sham_link_neighbor_id.get_name_leafdata());
    if (sham_link_next_hello.is_set || is_set(sham_link_next_hello.operation)) leaf_name_data.push_back(sham_link_next_hello.get_name_leafdata());
    if (sham_link_passive.is_set || is_set(sham_link_passive.operation)) leaf_name_data.push_back(sham_link_passive.get_name_leafdata());
    if (sham_link_retransmission_interval.is_set || is_set(sham_link_retransmission_interval.operation)) leaf_name_data.push_back(sham_link_retransmission_interval.get_name_leafdata());
    if (sham_link_source_address.is_set || is_set(sham_link_source_address.operation)) leaf_name_data.push_back(sham_link_source_address.get_name_leafdata());
    if (sham_link_state.is_set || is_set(sham_link_state.operation)) leaf_name_data.push_back(sham_link_state.get_name_leafdata());
    if (sham_link_transmission_delay.is_set || is_set(sham_link_transmission_delay.operation)) leaf_name_data.push_back(sham_link_transmission_delay.get_name_leafdata());
    if (sham_link_wait_interval.is_set || is_set(sham_link_wait_interval.operation)) leaf_name_data.push_back(sham_link_wait_interval.get_name_leafdata());
    if (virtual_link_authentication_spi.is_set || is_set(virtual_link_authentication_spi.operation)) leaf_name_data.push_back(virtual_link_authentication_spi.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::ShamLinkTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "sham-link-neighbor")
    {
        if(sham_link_neighbor != nullptr)
        {
            children["sham-link-neighbor"] = sham_link_neighbor;
        }
        else
        {
            sham_link_neighbor = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::ShamLinkTable::ShamLinkNeighbor>();
            sham_link_neighbor->parent = this;
            children["sham-link-neighbor"] = sham_link_neighbor;
        }
        return children.at("sham-link-neighbor");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::ShamLinkTable::get_children()
{
    if(children.find("sham-link-neighbor") == children.end())
    {
        if(sham_link_neighbor != nullptr)
        {
            children["sham-link-neighbor"] = sham_link_neighbor;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::ShamLinkTable::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-sham-link-authentication-enabled")
    {
        is_sham_link_authentication_enabled = value;
    }
    if(value_path == "is-sham-link-encryption-enabled")
    {
        is_sham_link_encryption_enabled = value;
    }
    if(value_path == "is-sham-link-ip-security-active")
    {
        is_sham_link_ip_security_active = value;
    }
    if(value_path == "is-sham-link-ip-security-required")
    {
        is_sham_link_ip_security_required = value;
    }
    if(value_path == "sham-link-area")
    {
        sham_link_area = value;
    }
    if(value_path == "sham-link-authentication-transmit")
    {
        sham_link_authentication_transmit = value;
    }
    if(value_path == "sham-link-cost")
    {
        sham_link_cost = value;
    }
    if(value_path == "sham-link-dc-bitless-lsa")
    {
        sham_link_dc_bitless_lsa = value;
    }
    if(value_path == "sham-link-dead-interval")
    {
        sham_link_dead_interval = value;
    }
    if(value_path == "sham-link-demand-circuit")
    {
        sham_link_demand_circuit = value;
    }
    if(value_path == "sham-link-dest-address")
    {
        sham_link_dest_address = value;
    }
    if(value_path == "sham-link-encrypted-authentication-transmitted")
    {
        sham_link_encrypted_authentication_transmitted = value;
    }
    if(value_path == "sham-link-encryption-spi")
    {
        sham_link_encryption_spi = value;
    }
    if(value_path == "sham-link-encryption-transmitted")
    {
        sham_link_encryption_transmitted = value;
    }
    if(value_path == "sham-link-gr")
    {
        sham_link_gr = value;
    }
    if(value_path == "sham-link-gr-enabled")
    {
        sham_link_gr_enabled = value;
    }
    if(value_path == "sham-link-hello-interval")
    {
        sham_link_hello_interval = value;
    }
    if(value_path == "sham-link-ifindex")
    {
        sham_link_ifindex = value;
    }
    if(value_path == "sham-link-last-gr")
    {
        sham_link_last_gr = value;
    }
    if(value_path == "sham-link-neighbor-id")
    {
        sham_link_neighbor_id = value;
    }
    if(value_path == "sham-link-next-hello")
    {
        sham_link_next_hello = value;
    }
    if(value_path == "sham-link-passive")
    {
        sham_link_passive = value;
    }
    if(value_path == "sham-link-retransmission-interval")
    {
        sham_link_retransmission_interval = value;
    }
    if(value_path == "sham-link-source-address")
    {
        sham_link_source_address = value;
    }
    if(value_path == "sham-link-state")
    {
        sham_link_state = value;
    }
    if(value_path == "sham-link-transmission-delay")
    {
        sham_link_transmission_delay = value;
    }
    if(value_path == "sham-link-wait-interval")
    {
        sham_link_wait_interval = value;
    }
    if(value_path == "virtual-link-authentication-spi")
    {
        virtual_link_authentication_spi = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::ShamLinkTable::ShamLinkNeighbor::ShamLinkNeighbor()
    :
    sham_link_state{YType::enumeration, "sham-link-state"},
    sham_link_suppress_hello{YType::boolean, "sham-link-suppress-hello"}
    	,
    sham_link_retransmission(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::ShamLinkTable::ShamLinkNeighbor::ShamLinkRetransmission>())
{
    sham_link_retransmission->parent = this;
    children["sham-link-retransmission"] = sham_link_retransmission;

    yang_name = "sham-link-neighbor"; yang_parent_name = "sham-link-table";
}

Ospfv3::Processes::Process::Vrfs::Vrf::ShamLinkTable::ShamLinkNeighbor::~ShamLinkNeighbor()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::ShamLinkTable::ShamLinkNeighbor::has_data() const
{
    return sham_link_state.is_set
	|| sham_link_suppress_hello.is_set
	|| (sham_link_retransmission !=  nullptr && sham_link_retransmission->has_data());
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::ShamLinkTable::ShamLinkNeighbor::has_operation() const
{
    return is_set(operation)
	|| is_set(sham_link_state.operation)
	|| is_set(sham_link_suppress_hello.operation)
	|| (sham_link_retransmission !=  nullptr && sham_link_retransmission->has_operation());
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::ShamLinkTable::ShamLinkNeighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sham-link-neighbor";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::ShamLinkTable::ShamLinkNeighbor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ShamLinkNeighbor' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sham_link_state.is_set || is_set(sham_link_state.operation)) leaf_name_data.push_back(sham_link_state.get_name_leafdata());
    if (sham_link_suppress_hello.is_set || is_set(sham_link_suppress_hello.operation)) leaf_name_data.push_back(sham_link_suppress_hello.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::ShamLinkTable::ShamLinkNeighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "sham-link-retransmission")
    {
        if(sham_link_retransmission != nullptr)
        {
            children["sham-link-retransmission"] = sham_link_retransmission;
        }
        else
        {
            sham_link_retransmission = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::ShamLinkTable::ShamLinkNeighbor::ShamLinkRetransmission>();
            sham_link_retransmission->parent = this;
            children["sham-link-retransmission"] = sham_link_retransmission;
        }
        return children.at("sham-link-retransmission");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::ShamLinkTable::ShamLinkNeighbor::get_children()
{
    if(children.find("sham-link-retransmission") == children.end())
    {
        if(sham_link_retransmission != nullptr)
        {
            children["sham-link-retransmission"] = sham_link_retransmission;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::ShamLinkTable::ShamLinkNeighbor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "sham-link-state")
    {
        sham_link_state = value;
    }
    if(value_path == "sham-link-suppress-hello")
    {
        sham_link_suppress_hello = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::ShamLinkTable::ShamLinkNeighbor::ShamLinkRetransmission::ShamLinkRetransmission()
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
    yang_name = "sham-link-retransmission"; yang_parent_name = "sham-link-neighbor";
}

Ospfv3::Processes::Process::Vrfs::Vrf::ShamLinkTable::ShamLinkNeighbor::ShamLinkRetransmission::~ShamLinkRetransmission()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::ShamLinkTable::ShamLinkNeighbor::ShamLinkRetransmission::has_data() const
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

bool Ospfv3::Processes::Process::Vrfs::Vrf::ShamLinkTable::ShamLinkNeighbor::ShamLinkRetransmission::has_operation() const
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

std::string Ospfv3::Processes::Process::Vrfs::Vrf::ShamLinkTable::ShamLinkNeighbor::ShamLinkRetransmission::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sham-link-retransmission";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::ShamLinkTable::ShamLinkNeighbor::ShamLinkRetransmission::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ShamLinkRetransmission' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::ShamLinkTable::ShamLinkNeighbor::ShamLinkRetransmission::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::ShamLinkTable::ShamLinkNeighbor::ShamLinkRetransmission::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::ShamLinkTable::ShamLinkNeighbor::ShamLinkRetransmission::set_value(const std::string & value_path, std::string value)
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

Ospfv3::Processes::Process::Vrfs::Vrf::AreaInformations::AreaInformations()
{
    yang_name = "area-informations"; yang_parent_name = "vrf";
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaInformations::~AreaInformations()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaInformations::has_data() const
{
    for (std::size_t index=0; index<area_information.size(); index++)
    {
        if(area_information[index]->has_data())
            return true;
    }
    return false;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaInformations::has_operation() const
{
    for (std::size_t index=0; index<area_information.size(); index++)
    {
        if(area_information[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaInformations::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "area-informations";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::AreaInformations::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AreaInformations' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaInformations::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "area-information")
    {
        for(auto const & c : area_information)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaInformations::AreaInformation>();
        c->parent = this;
        area_information.push_back(std::move(c));
        children[segment_path] = area_information.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::AreaInformations::get_children()
{
    for (auto const & c : area_information)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaInformations::set_value(const std::string & value_path, std::string value)
{
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaInformations::AreaInformation::AreaInformation()
    :
    area_id{YType::int32, "area-id"},
    area_dc_bitless_ls_as{YType::uint32, "area-dc-bitless-ls-as"},
    area_interfaces{YType::uint16, "area-interfaces"},
    area_lfa_interface_count{YType::uint32, "area-lfa-interface-count"},
    area_lfa_revision{YType::uint32, "area-lfa-revision"},
    area_opaque_lsa_checksum{YType::uint32, "area-opaque-lsa-checksum"},
    area_opaque_lsas{YType::uint32, "area-opaque-lsas"},
    area_per_prefix_lfa_interface_count{YType::uint32, "area-per-prefix-lfa-interface-count"},
    do_not_age_ls_as{YType::uint32, "do-not-age-ls-as"},
    flood_list_length{YType::uint32, "flood-list-length"},
    indication_ls_as{YType::uint32, "indication-ls-as"},
    is_area_nssa{YType::boolean, "is-area-nssa"},
    is_area_stubbed{YType::boolean, "is-area-stubbed"},
    is_area_total_stubbed{YType::boolean, "is-area-total-stubbed"},
    is_backbone_area_active{YType::boolean, "is-backbone-area-active"},
    is_nssa_default{YType::boolean, "is-nssa-default"},
    is_nssa_translated{YType::boolean, "is-nssa-translated"},
    is_rrr_enabled{YType::boolean, "is-rrr-enabled"},
    nssa_no_redistribution{YType::boolean, "nssa-no-redistribution"},
    sp_fs{YType::uint32, "sp-fs"},
    stub_default_cost{YType::uint16, "stub-default-cost"}
{
    yang_name = "area-information"; yang_parent_name = "area-informations";
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaInformations::AreaInformation::~AreaInformation()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaInformations::AreaInformation::has_data() const
{
    for (std::size_t index=0; index<area_range.size(); index++)
    {
        if(area_range[index]->has_data())
            return true;
    }
    return area_id.is_set
	|| area_dc_bitless_ls_as.is_set
	|| area_interfaces.is_set
	|| area_lfa_interface_count.is_set
	|| area_lfa_revision.is_set
	|| area_opaque_lsa_checksum.is_set
	|| area_opaque_lsas.is_set
	|| area_per_prefix_lfa_interface_count.is_set
	|| do_not_age_ls_as.is_set
	|| flood_list_length.is_set
	|| indication_ls_as.is_set
	|| is_area_nssa.is_set
	|| is_area_stubbed.is_set
	|| is_area_total_stubbed.is_set
	|| is_backbone_area_active.is_set
	|| is_nssa_default.is_set
	|| is_nssa_translated.is_set
	|| is_rrr_enabled.is_set
	|| nssa_no_redistribution.is_set
	|| sp_fs.is_set
	|| stub_default_cost.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaInformations::AreaInformation::has_operation() const
{
    for (std::size_t index=0; index<area_range.size(); index++)
    {
        if(area_range[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(area_id.operation)
	|| is_set(area_dc_bitless_ls_as.operation)
	|| is_set(area_interfaces.operation)
	|| is_set(area_lfa_interface_count.operation)
	|| is_set(area_lfa_revision.operation)
	|| is_set(area_opaque_lsa_checksum.operation)
	|| is_set(area_opaque_lsas.operation)
	|| is_set(area_per_prefix_lfa_interface_count.operation)
	|| is_set(do_not_age_ls_as.operation)
	|| is_set(flood_list_length.operation)
	|| is_set(indication_ls_as.operation)
	|| is_set(is_area_nssa.operation)
	|| is_set(is_area_stubbed.operation)
	|| is_set(is_area_total_stubbed.operation)
	|| is_set(is_backbone_area_active.operation)
	|| is_set(is_nssa_default.operation)
	|| is_set(is_nssa_translated.operation)
	|| is_set(is_rrr_enabled.operation)
	|| is_set(nssa_no_redistribution.operation)
	|| is_set(sp_fs.operation)
	|| is_set(stub_default_cost.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaInformations::AreaInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "area-information" <<"[area-id='" <<area_id <<"']";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::AreaInformations::AreaInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AreaInformation' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_id.is_set || is_set(area_id.operation)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (area_dc_bitless_ls_as.is_set || is_set(area_dc_bitless_ls_as.operation)) leaf_name_data.push_back(area_dc_bitless_ls_as.get_name_leafdata());
    if (area_interfaces.is_set || is_set(area_interfaces.operation)) leaf_name_data.push_back(area_interfaces.get_name_leafdata());
    if (area_lfa_interface_count.is_set || is_set(area_lfa_interface_count.operation)) leaf_name_data.push_back(area_lfa_interface_count.get_name_leafdata());
    if (area_lfa_revision.is_set || is_set(area_lfa_revision.operation)) leaf_name_data.push_back(area_lfa_revision.get_name_leafdata());
    if (area_opaque_lsa_checksum.is_set || is_set(area_opaque_lsa_checksum.operation)) leaf_name_data.push_back(area_opaque_lsa_checksum.get_name_leafdata());
    if (area_opaque_lsas.is_set || is_set(area_opaque_lsas.operation)) leaf_name_data.push_back(area_opaque_lsas.get_name_leafdata());
    if (area_per_prefix_lfa_interface_count.is_set || is_set(area_per_prefix_lfa_interface_count.operation)) leaf_name_data.push_back(area_per_prefix_lfa_interface_count.get_name_leafdata());
    if (do_not_age_ls_as.is_set || is_set(do_not_age_ls_as.operation)) leaf_name_data.push_back(do_not_age_ls_as.get_name_leafdata());
    if (flood_list_length.is_set || is_set(flood_list_length.operation)) leaf_name_data.push_back(flood_list_length.get_name_leafdata());
    if (indication_ls_as.is_set || is_set(indication_ls_as.operation)) leaf_name_data.push_back(indication_ls_as.get_name_leafdata());
    if (is_area_nssa.is_set || is_set(is_area_nssa.operation)) leaf_name_data.push_back(is_area_nssa.get_name_leafdata());
    if (is_area_stubbed.is_set || is_set(is_area_stubbed.operation)) leaf_name_data.push_back(is_area_stubbed.get_name_leafdata());
    if (is_area_total_stubbed.is_set || is_set(is_area_total_stubbed.operation)) leaf_name_data.push_back(is_area_total_stubbed.get_name_leafdata());
    if (is_backbone_area_active.is_set || is_set(is_backbone_area_active.operation)) leaf_name_data.push_back(is_backbone_area_active.get_name_leafdata());
    if (is_nssa_default.is_set || is_set(is_nssa_default.operation)) leaf_name_data.push_back(is_nssa_default.get_name_leafdata());
    if (is_nssa_translated.is_set || is_set(is_nssa_translated.operation)) leaf_name_data.push_back(is_nssa_translated.get_name_leafdata());
    if (is_rrr_enabled.is_set || is_set(is_rrr_enabled.operation)) leaf_name_data.push_back(is_rrr_enabled.get_name_leafdata());
    if (nssa_no_redistribution.is_set || is_set(nssa_no_redistribution.operation)) leaf_name_data.push_back(nssa_no_redistribution.get_name_leafdata());
    if (sp_fs.is_set || is_set(sp_fs.operation)) leaf_name_data.push_back(sp_fs.get_name_leafdata());
    if (stub_default_cost.is_set || is_set(stub_default_cost.operation)) leaf_name_data.push_back(stub_default_cost.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaInformations::AreaInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "area-range")
    {
        for(auto const & c : area_range)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaInformations::AreaInformation::AreaRange>();
        c->parent = this;
        area_range.push_back(std::move(c));
        children[segment_path] = area_range.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::AreaInformations::AreaInformation::get_children()
{
    for (auto const & c : area_range)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaInformations::AreaInformation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "area-id")
    {
        area_id = value;
    }
    if(value_path == "area-dc-bitless-ls-as")
    {
        area_dc_bitless_ls_as = value;
    }
    if(value_path == "area-interfaces")
    {
        area_interfaces = value;
    }
    if(value_path == "area-lfa-interface-count")
    {
        area_lfa_interface_count = value;
    }
    if(value_path == "area-lfa-revision")
    {
        area_lfa_revision = value;
    }
    if(value_path == "area-opaque-lsa-checksum")
    {
        area_opaque_lsa_checksum = value;
    }
    if(value_path == "area-opaque-lsas")
    {
        area_opaque_lsas = value;
    }
    if(value_path == "area-per-prefix-lfa-interface-count")
    {
        area_per_prefix_lfa_interface_count = value;
    }
    if(value_path == "do-not-age-ls-as")
    {
        do_not_age_ls_as = value;
    }
    if(value_path == "flood-list-length")
    {
        flood_list_length = value;
    }
    if(value_path == "indication-ls-as")
    {
        indication_ls_as = value;
    }
    if(value_path == "is-area-nssa")
    {
        is_area_nssa = value;
    }
    if(value_path == "is-area-stubbed")
    {
        is_area_stubbed = value;
    }
    if(value_path == "is-area-total-stubbed")
    {
        is_area_total_stubbed = value;
    }
    if(value_path == "is-backbone-area-active")
    {
        is_backbone_area_active = value;
    }
    if(value_path == "is-nssa-default")
    {
        is_nssa_default = value;
    }
    if(value_path == "is-nssa-translated")
    {
        is_nssa_translated = value;
    }
    if(value_path == "is-rrr-enabled")
    {
        is_rrr_enabled = value;
    }
    if(value_path == "nssa-no-redistribution")
    {
        nssa_no_redistribution = value;
    }
    if(value_path == "sp-fs")
    {
        sp_fs = value;
    }
    if(value_path == "stub-default-cost")
    {
        stub_default_cost = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaInformations::AreaInformation::AreaRange::AreaRange()
    :
    is_cost_configured{YType::boolean, "is-cost-configured"},
    net_cost{YType::uint32, "net-cost"},
    range_prefix{YType::str, "range-prefix"},
    range_prefix_length{YType::uint32, "range-prefix-length"},
    status{YType::enumeration, "status"}
{
    yang_name = "area-range"; yang_parent_name = "area-information";
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaInformations::AreaInformation::AreaRange::~AreaRange()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaInformations::AreaInformation::AreaRange::has_data() const
{
    return is_cost_configured.is_set
	|| net_cost.is_set
	|| range_prefix.is_set
	|| range_prefix_length.is_set
	|| status.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaInformations::AreaInformation::AreaRange::has_operation() const
{
    return is_set(operation)
	|| is_set(is_cost_configured.operation)
	|| is_set(net_cost.operation)
	|| is_set(range_prefix.operation)
	|| is_set(range_prefix_length.operation)
	|| is_set(status.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaInformations::AreaInformation::AreaRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "area-range";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::AreaInformations::AreaInformation::AreaRange::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AreaRange' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_cost_configured.is_set || is_set(is_cost_configured.operation)) leaf_name_data.push_back(is_cost_configured.get_name_leafdata());
    if (net_cost.is_set || is_set(net_cost.operation)) leaf_name_data.push_back(net_cost.get_name_leafdata());
    if (range_prefix.is_set || is_set(range_prefix.operation)) leaf_name_data.push_back(range_prefix.get_name_leafdata());
    if (range_prefix_length.is_set || is_set(range_prefix_length.operation)) leaf_name_data.push_back(range_prefix_length.get_name_leafdata());
    if (status.is_set || is_set(status.operation)) leaf_name_data.push_back(status.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaInformations::AreaInformation::AreaRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::AreaInformations::AreaInformation::AreaRange::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaInformations::AreaInformation::AreaRange::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-cost-configured")
    {
        is_cost_configured = value;
    }
    if(value_path == "net-cost")
    {
        net_cost = value;
    }
    if(value_path == "range-prefix")
    {
        range_prefix = value;
    }
    if(value_path == "range-prefix-length")
    {
        range_prefix_length = value;
    }
    if(value_path == "status")
    {
        status = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::DatabaseTable()
    :
    lsa_internal_table(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable>())
	,lsa_table(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable>())
{
    lsa_internal_table->parent = this;
    children["lsa-internal-table"] = lsa_internal_table;

    lsa_table->parent = this;
    children["lsa-table"] = lsa_table;

    yang_name = "database-table"; yang_parent_name = "vrf";
}

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::~DatabaseTable()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::has_data() const
{
    return (lsa_internal_table !=  nullptr && lsa_internal_table->has_data())
	|| (lsa_table !=  nullptr && lsa_table->has_data());
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::has_operation() const
{
    return is_set(operation)
	|| (lsa_internal_table !=  nullptr && lsa_internal_table->has_operation())
	|| (lsa_table !=  nullptr && lsa_table->has_operation());
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-table";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            lsa_internal_table = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable>();
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
            lsa_table = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable>();
            lsa_table->parent = this;
            children["lsa-table"] = lsa_table;
        }
        return children.at("lsa-table");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::get_children()
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

void Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::set_value(const std::string & value_path, std::string value)
{
}

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::LsaTable()
{
    yang_name = "lsa-table"; yang_parent_name = "database-table";
}

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::~LsaTable()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::has_data() const
{
    for (std::size_t index=0; index<lsa.size(); index++)
    {
        if(lsa[index]->has_data())
            return true;
    }
    return false;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::has_operation() const
{
    for (std::size_t index=0; index<lsa.size(); index++)
    {
        if(lsa[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-table";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa>();
        c->parent = this;
        lsa.push_back(std::move(c));
        children[segment_path] = lsa.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::get_children()
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

void Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::set_value(const std::string & value_path, std::string value)
{
}

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::Lsa()
    :
    advertising_router{YType::str, "advertising-router"},
    area_id{YType::int32, "area-id"},
    interface_name{YType::str, "interface-name"},
    ls_id{YType::int32, "ls-id"},
    ls_type{YType::enumeration, "ls-type"}
    	,
    lsa_info(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo>())
{
    lsa_info->parent = this;
    children["lsa-info"] = lsa_info;

    yang_name = "lsa"; yang_parent_name = "lsa-table";
}

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::~Lsa()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::has_data() const
{
    return advertising_router.is_set
	|| area_id.is_set
	|| interface_name.is_set
	|| ls_id.is_set
	|| ls_type.is_set
	|| (lsa_info !=  nullptr && lsa_info->has_data());
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::has_operation() const
{
    return is_set(operation)
	|| is_set(advertising_router.operation)
	|| is_set(area_id.operation)
	|| is_set(interface_name.operation)
	|| is_set(ls_id.operation)
	|| is_set(ls_type.operation)
	|| (lsa_info !=  nullptr && lsa_info->has_operation());
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            lsa_info = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo>();
            lsa_info->parent = this;
            children["lsa-info"] = lsa_info;
        }
        return children.at("lsa-info");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::get_children()
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

void Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::set_value(const std::string & value_path, std::string value)
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

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LsaInfo()
    :
    lsa_info_type{YType::enumeration, "lsa-info-type"}
    	,
    external_lsa_type(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::ExternalLsaType>())
	,grace_lsa(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::GraceLsa>())
	,inter_area_prefix_lsa_type(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaPrefixLsaType>())
	,inter_area_router_lsa_type(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaRouterLsaType>())
	,intra_area_prefix_lsa_type(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType>())
	,link_lsa_type(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType>())
	,lsa_summary_info(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LsaSummaryInfo>())
	,network_lsa_type(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NetworkLsaType>())
	,nssalsa_type(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NssalsaType>())
	,router_lsa_type(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType>())
	,unknown_area_lsa_type(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAreaLsaType>())
	,unknown_aslsa_type(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAslsaType>())
	,unknown_link_lsa_type(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLinkLsaType>())
	,unknown_lsa_type(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLsaType>())
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

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::~LsaInfo()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::has_data() const
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

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::has_operation() const
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

std::string Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-info";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            external_lsa_type = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::ExternalLsaType>();
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
            grace_lsa = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::GraceLsa>();
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
            inter_area_prefix_lsa_type = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaPrefixLsaType>();
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
            inter_area_router_lsa_type = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaRouterLsaType>();
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
            intra_area_prefix_lsa_type = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType>();
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
            link_lsa_type = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType>();
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
            lsa_summary_info = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LsaSummaryInfo>();
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
            network_lsa_type = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NetworkLsaType>();
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
            nssalsa_type = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NssalsaType>();
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
            router_lsa_type = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType>();
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
            unknown_area_lsa_type = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAreaLsaType>();
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
            unknown_aslsa_type = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAslsaType>();
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
            unknown_link_lsa_type = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLinkLsaType>();
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
            unknown_lsa_type = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLsaType>();
            unknown_lsa_type->parent = this;
            children["unknown-lsa-type"] = unknown_lsa_type;
        }
        return children.at("unknown-lsa-type");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::get_children()
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

void Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "lsa-info-type")
    {
        lsa_info_type = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LsaSummaryInfo::LsaSummaryInfo()
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
    lsa_detail(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LsaSummaryInfo::LsaDetail>())
	,lsa_header(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LsaSummaryInfo::LsaHeader>())
{
    lsa_detail->parent = this;
    children["lsa-detail"] = lsa_detail;

    lsa_header->parent = this;
    children["lsa-header"] = lsa_header;

    yang_name = "lsa-summary-info"; yang_parent_name = "lsa-info";
}

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LsaSummaryInfo::~LsaSummaryInfo()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LsaSummaryInfo::has_data() const
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

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LsaSummaryInfo::has_operation() const
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

std::string Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LsaSummaryInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-summary-info";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LsaSummaryInfo::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LsaSummaryInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            lsa_detail = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LsaSummaryInfo::LsaDetail>();
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
            lsa_header = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LsaSummaryInfo::LsaHeader>();
            lsa_header->parent = this;
            children["lsa-header"] = lsa_header;
        }
        return children.at("lsa-header");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LsaSummaryInfo::get_children()
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

void Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LsaSummaryInfo::set_value(const std::string & value_path, std::string value)
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

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LsaSummaryInfo::LsaHeader::LsaHeader()
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

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LsaSummaryInfo::LsaHeader::~LsaHeader()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LsaSummaryInfo::LsaHeader::has_data() const
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

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LsaSummaryInfo::LsaHeader::has_operation() const
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

std::string Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LsaSummaryInfo::LsaHeader::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-header";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LsaSummaryInfo::LsaHeader::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LsaSummaryInfo::LsaHeader::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LsaSummaryInfo::LsaHeader::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LsaSummaryInfo::LsaHeader::set_value(const std::string & value_path, std::string value)
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

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LsaSummaryInfo::LsaDetail::LsaDetail()
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

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LsaSummaryInfo::LsaDetail::~LsaDetail()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LsaSummaryInfo::LsaDetail::has_data() const
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

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LsaSummaryInfo::LsaDetail::has_operation() const
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

std::string Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LsaSummaryInfo::LsaDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-detail";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LsaSummaryInfo::LsaDetail::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LsaSummaryInfo::LsaDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LsaSummaryInfo::LsaDetail::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LsaSummaryInfo::LsaDetail::set_value(const std::string & value_path, std::string value)
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

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::RouterLsaType()
    :
    router_la_bits{YType::uint8, "router-la-bits"}
    	,
    lsa_detail(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::LsaDetail>())
	,lsa_header(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::LsaHeader>())
	,rpf_path(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::RpfPath>())
{
    lsa_detail->parent = this;
    children["lsa-detail"] = lsa_detail;

    lsa_header->parent = this;
    children["lsa-header"] = lsa_header;

    rpf_path->parent = this;
    children["rpf-path"] = rpf_path;

    yang_name = "router-lsa-type"; yang_parent_name = "lsa-info";
}

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::~RouterLsaType()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::has_data() const
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

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::has_operation() const
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

std::string Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "router-lsa-type";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::Link>();
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
            lsa_detail = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::LsaDetail>();
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
            lsa_header = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::LsaHeader>();
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
            rpf_path = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::RpfPath>();
            rpf_path->parent = this;
            children["rpf-path"] = rpf_path;
        }
        return children.at("rpf-path");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::get_children()
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

void Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "router-la-bits")
    {
        router_la_bits = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::LsaHeader::LsaHeader()
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

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::LsaHeader::~LsaHeader()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::LsaHeader::has_data() const
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

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::LsaHeader::has_operation() const
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

std::string Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::LsaHeader::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-header";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::LsaHeader::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::LsaHeader::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::LsaHeader::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::LsaHeader::set_value(const std::string & value_path, std::string value)
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

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::LsaDetail::LsaDetail()
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

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::LsaDetail::~LsaDetail()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::LsaDetail::has_data() const
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

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::LsaDetail::has_operation() const
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

std::string Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::LsaDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-detail";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::LsaDetail::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::LsaDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::LsaDetail::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::LsaDetail::set_value(const std::string & value_path, std::string value)
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

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::RpfPath::RpfPath()
    :
    interface_name{YType::str, "interface-name"},
    rpf_multicast_next_hop{YType::uint32, "rpf-multicast-next-hop"}
{
    yang_name = "rpf-path"; yang_parent_name = "router-lsa-type";
}

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::RpfPath::~RpfPath()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::RpfPath::has_data() const
{
    return interface_name.is_set
	|| rpf_multicast_next_hop.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::RpfPath::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(rpf_multicast_next_hop.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::RpfPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpf-path";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::RpfPath::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::RpfPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::RpfPath::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::RpfPath::set_value(const std::string & value_path, std::string value)
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

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::Link::Link()
    :
    link_interface_id{YType::uint32, "link-interface-id"},
    link_metric{YType::uint16, "link-metric"},
    link_neighbor_interface_id{YType::uint32, "link-neighbor-interface-id"},
    link_neighbor_router_id{YType::uint32, "link-neighbor-router-id"},
    link_type{YType::enumeration, "link-type"}
{
    yang_name = "link"; yang_parent_name = "router-lsa-type";
}

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::Link::~Link()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::Link::has_data() const
{
    return link_interface_id.is_set
	|| link_metric.is_set
	|| link_neighbor_interface_id.is_set
	|| link_neighbor_router_id.is_set
	|| link_type.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::Link::has_operation() const
{
    return is_set(operation)
	|| is_set(link_interface_id.operation)
	|| is_set(link_metric.operation)
	|| is_set(link_neighbor_interface_id.operation)
	|| is_set(link_neighbor_router_id.operation)
	|| is_set(link_type.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::Link::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::Link::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::Link::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::Link::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::Link::set_value(const std::string & value_path, std::string value)
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

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NetworkLsaType::NetworkLsaType()
    :
    neighbor_router{YType::str, "neighbor-router"}
    	,
    lsa_detail(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NetworkLsaType::LsaDetail>())
	,lsa_header(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NetworkLsaType::LsaHeader>())
{
    lsa_detail->parent = this;
    children["lsa-detail"] = lsa_detail;

    lsa_header->parent = this;
    children["lsa-header"] = lsa_header;

    yang_name = "network-lsa-type"; yang_parent_name = "lsa-info";
}

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NetworkLsaType::~NetworkLsaType()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NetworkLsaType::has_data() const
{
    for (auto const & leaf : neighbor_router.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return (lsa_detail !=  nullptr && lsa_detail->has_data())
	|| (lsa_header !=  nullptr && lsa_header->has_data());
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NetworkLsaType::has_operation() const
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

std::string Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NetworkLsaType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network-lsa-type";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NetworkLsaType::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NetworkLsaType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            lsa_detail = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NetworkLsaType::LsaDetail>();
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
            lsa_header = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NetworkLsaType::LsaHeader>();
            lsa_header->parent = this;
            children["lsa-header"] = lsa_header;
        }
        return children.at("lsa-header");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NetworkLsaType::get_children()
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

void Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NetworkLsaType::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "neighbor-router")
    {
        neighbor_router.append(value);
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NetworkLsaType::LsaHeader::LsaHeader()
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

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NetworkLsaType::LsaHeader::~LsaHeader()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NetworkLsaType::LsaHeader::has_data() const
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

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NetworkLsaType::LsaHeader::has_operation() const
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

std::string Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NetworkLsaType::LsaHeader::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-header";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NetworkLsaType::LsaHeader::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NetworkLsaType::LsaHeader::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NetworkLsaType::LsaHeader::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NetworkLsaType::LsaHeader::set_value(const std::string & value_path, std::string value)
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

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NetworkLsaType::LsaDetail::LsaDetail()
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

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NetworkLsaType::LsaDetail::~LsaDetail()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NetworkLsaType::LsaDetail::has_data() const
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

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NetworkLsaType::LsaDetail::has_operation() const
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

std::string Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NetworkLsaType::LsaDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-detail";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NetworkLsaType::LsaDetail::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NetworkLsaType::LsaDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NetworkLsaType::LsaDetail::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NetworkLsaType::LsaDetail::set_value(const std::string & value_path, std::string value)
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

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaPrefixLsaType::InterAreaPrefixLsaType()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint8, "prefix-length"},
    priority{YType::enumeration, "priority"}
    	,
    lsa_detail(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaDetail>())
	,lsa_header(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaHeader>())
{
    lsa_detail->parent = this;
    children["lsa-detail"] = lsa_detail;

    lsa_header->parent = this;
    children["lsa-header"] = lsa_header;

    yang_name = "inter-area-prefix-lsa-type"; yang_parent_name = "lsa-info";
}

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaPrefixLsaType::~InterAreaPrefixLsaType()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaPrefixLsaType::has_data() const
{
    return prefix.is_set
	|| prefix_length.is_set
	|| priority.is_set
	|| (lsa_detail !=  nullptr && lsa_detail->has_data())
	|| (lsa_header !=  nullptr && lsa_header->has_data());
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaPrefixLsaType::has_operation() const
{
    return is_set(operation)
	|| is_set(prefix.operation)
	|| is_set(prefix_length.operation)
	|| is_set(priority.operation)
	|| (lsa_detail !=  nullptr && lsa_detail->has_operation())
	|| (lsa_header !=  nullptr && lsa_header->has_operation());
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaPrefixLsaType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inter-area-prefix-lsa-type";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaPrefixLsaType::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaPrefixLsaType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            lsa_detail = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaDetail>();
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
            lsa_header = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaHeader>();
            lsa_header->parent = this;
            children["lsa-header"] = lsa_header;
        }
        return children.at("lsa-header");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaPrefixLsaType::get_children()
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

void Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaPrefixLsaType::set_value(const std::string & value_path, std::string value)
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

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaHeader::LsaHeader()
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

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaHeader::~LsaHeader()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaHeader::has_data() const
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

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaHeader::has_operation() const
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

std::string Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaHeader::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-header";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaHeader::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaHeader::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaHeader::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaHeader::set_value(const std::string & value_path, std::string value)
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

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaDetail::LsaDetail()
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

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaDetail::~LsaDetail()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaDetail::has_data() const
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

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaDetail::has_operation() const
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

std::string Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-detail";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaDetail::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaDetail::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaDetail::set_value(const std::string & value_path, std::string value)
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

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaRouterLsaType::InterAreaRouterLsaType()
    :
    lsa_router_id{YType::uint32, "lsa-router-id"}
    	,
    lsa_detail(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaDetail>())
	,lsa_header(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaHeader>())
{
    lsa_detail->parent = this;
    children["lsa-detail"] = lsa_detail;

    lsa_header->parent = this;
    children["lsa-header"] = lsa_header;

    yang_name = "inter-area-router-lsa-type"; yang_parent_name = "lsa-info";
}

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaRouterLsaType::~InterAreaRouterLsaType()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaRouterLsaType::has_data() const
{
    return lsa_router_id.is_set
	|| (lsa_detail !=  nullptr && lsa_detail->has_data())
	|| (lsa_header !=  nullptr && lsa_header->has_data());
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaRouterLsaType::has_operation() const
{
    return is_set(operation)
	|| is_set(lsa_router_id.operation)
	|| (lsa_detail !=  nullptr && lsa_detail->has_operation())
	|| (lsa_header !=  nullptr && lsa_header->has_operation());
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaRouterLsaType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inter-area-router-lsa-type";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaRouterLsaType::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaRouterLsaType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            lsa_detail = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaDetail>();
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
            lsa_header = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaHeader>();
            lsa_header->parent = this;
            children["lsa-header"] = lsa_header;
        }
        return children.at("lsa-header");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaRouterLsaType::get_children()
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

void Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaRouterLsaType::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "lsa-router-id")
    {
        lsa_router_id = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaHeader::LsaHeader()
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

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaHeader::~LsaHeader()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaHeader::has_data() const
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

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaHeader::has_operation() const
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

std::string Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaHeader::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-header";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaHeader::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaHeader::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaHeader::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaHeader::set_value(const std::string & value_path, std::string value)
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

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaDetail::LsaDetail()
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

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaDetail::~LsaDetail()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaDetail::has_data() const
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

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaDetail::has_operation() const
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

std::string Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-detail";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaDetail::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaDetail::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaDetail::set_value(const std::string & value_path, std::string value)
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

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::ExternalLsaType::ExternalLsaType()
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
    lsa_detail(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::ExternalLsaType::LsaDetail>())
	,lsa_header(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::ExternalLsaType::LsaHeader>())
{
    lsa_detail->parent = this;
    children["lsa-detail"] = lsa_detail;

    lsa_header->parent = this;
    children["lsa-header"] = lsa_header;

    yang_name = "external-lsa-type"; yang_parent_name = "lsa-info";
}

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::ExternalLsaType::~ExternalLsaType()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::ExternalLsaType::has_data() const
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

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::ExternalLsaType::has_operation() const
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

std::string Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::ExternalLsaType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "external-lsa-type";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::ExternalLsaType::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::ExternalLsaType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            lsa_detail = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::ExternalLsaType::LsaDetail>();
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
            lsa_header = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::ExternalLsaType::LsaHeader>();
            lsa_header->parent = this;
            children["lsa-header"] = lsa_header;
        }
        return children.at("lsa-header");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::ExternalLsaType::get_children()
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

void Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::ExternalLsaType::set_value(const std::string & value_path, std::string value)
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

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::ExternalLsaType::LsaHeader::LsaHeader()
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

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::ExternalLsaType::LsaHeader::~LsaHeader()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::ExternalLsaType::LsaHeader::has_data() const
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

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::ExternalLsaType::LsaHeader::has_operation() const
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

std::string Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::ExternalLsaType::LsaHeader::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-header";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::ExternalLsaType::LsaHeader::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::ExternalLsaType::LsaHeader::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::ExternalLsaType::LsaHeader::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::ExternalLsaType::LsaHeader::set_value(const std::string & value_path, std::string value)
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

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::ExternalLsaType::LsaDetail::LsaDetail()
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

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::ExternalLsaType::LsaDetail::~LsaDetail()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::ExternalLsaType::LsaDetail::has_data() const
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

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::ExternalLsaType::LsaDetail::has_operation() const
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

std::string Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::ExternalLsaType::LsaDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-detail";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::ExternalLsaType::LsaDetail::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::ExternalLsaType::LsaDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::ExternalLsaType::LsaDetail::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::ExternalLsaType::LsaDetail::set_value(const std::string & value_path, std::string value)
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

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NssalsaType::NssalsaType()
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
    lsa_detail(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NssalsaType::LsaDetail>())
	,lsa_header(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NssalsaType::LsaHeader>())
{
    lsa_detail->parent = this;
    children["lsa-detail"] = lsa_detail;

    lsa_header->parent = this;
    children["lsa-header"] = lsa_header;

    yang_name = "nssalsa-type"; yang_parent_name = "lsa-info";
}

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NssalsaType::~NssalsaType()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NssalsaType::has_data() const
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

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NssalsaType::has_operation() const
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

std::string Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NssalsaType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nssalsa-type";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NssalsaType::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NssalsaType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            lsa_detail = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NssalsaType::LsaDetail>();
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
            lsa_header = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NssalsaType::LsaHeader>();
            lsa_header->parent = this;
            children["lsa-header"] = lsa_header;
        }
        return children.at("lsa-header");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NssalsaType::get_children()
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

void Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NssalsaType::set_value(const std::string & value_path, std::string value)
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

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NssalsaType::LsaHeader::LsaHeader()
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

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NssalsaType::LsaHeader::~LsaHeader()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NssalsaType::LsaHeader::has_data() const
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

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NssalsaType::LsaHeader::has_operation() const
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

std::string Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NssalsaType::LsaHeader::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-header";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NssalsaType::LsaHeader::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NssalsaType::LsaHeader::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NssalsaType::LsaHeader::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NssalsaType::LsaHeader::set_value(const std::string & value_path, std::string value)
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

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NssalsaType::LsaDetail::LsaDetail()
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

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NssalsaType::LsaDetail::~LsaDetail()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NssalsaType::LsaDetail::has_data() const
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

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NssalsaType::LsaDetail::has_operation() const
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

std::string Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NssalsaType::LsaDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-detail";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NssalsaType::LsaDetail::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NssalsaType::LsaDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NssalsaType::LsaDetail::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::NssalsaType::LsaDetail::set_value(const std::string & value_path, std::string value)
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

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::LinkLsaType()
    :
    interface_name{YType::str, "interface-name"},
    is_sham_link{YType::boolean, "is-sham-link"},
    is_virtual_link{YType::boolean, "is-virtual-link"},
    lsa_link_local{YType::str, "lsa-link-local"},
    router_priority{YType::uint8, "router-priority"},
    sham_link_id{YType::uint32, "sham-link-id"},
    virtual_link_id{YType::uint32, "virtual-link-id"}
    	,
    lsa_detail(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::LsaDetail>())
	,lsa_header(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::LsaHeader>())
{
    lsa_detail->parent = this;
    children["lsa-detail"] = lsa_detail;

    lsa_header->parent = this;
    children["lsa-header"] = lsa_header;

    yang_name = "link-lsa-type"; yang_parent_name = "lsa-info";
}

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::~LinkLsaType()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::has_data() const
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

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::has_operation() const
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

std::string Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-lsa-type";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            lsa_detail = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::LsaDetail>();
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
            lsa_header = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::LsaHeader>();
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
        auto c = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::Prefix>();
        c->parent = this;
        prefix.push_back(std::move(c));
        children[segment_path] = prefix.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::get_children()
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

void Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::set_value(const std::string & value_path, std::string value)
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

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::LsaHeader::LsaHeader()
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

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::LsaHeader::~LsaHeader()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::LsaHeader::has_data() const
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

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::LsaHeader::has_operation() const
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

std::string Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::LsaHeader::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-header";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::LsaHeader::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::LsaHeader::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::LsaHeader::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::LsaHeader::set_value(const std::string & value_path, std::string value)
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

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::LsaDetail::LsaDetail()
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

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::LsaDetail::~LsaDetail()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::LsaDetail::has_data() const
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

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::LsaDetail::has_operation() const
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

std::string Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::LsaDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-detail";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::LsaDetail::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::LsaDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::LsaDetail::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::LsaDetail::set_value(const std::string & value_path, std::string value)
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

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::Prefix::Prefix()
    :
    ospfv3_prefix_length{YType::uint8, "ospfv3-prefix-length"},
    ospfv3_prefix_metric{YType::uint16, "ospfv3-prefix-metric"},
    ospfv3_prefix_options{YType::uint8, "ospfv3-prefix-options"},
    prefix{YType::str, "prefix"},
    priority{YType::enumeration, "priority"}
{
    yang_name = "prefix"; yang_parent_name = "link-lsa-type";
}

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::Prefix::~Prefix()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::Prefix::has_data() const
{
    return ospfv3_prefix_length.is_set
	|| ospfv3_prefix_metric.is_set
	|| ospfv3_prefix_options.is_set
	|| prefix.is_set
	|| priority.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::Prefix::has_operation() const
{
    return is_set(operation)
	|| is_set(ospfv3_prefix_length.operation)
	|| is_set(ospfv3_prefix_metric.operation)
	|| is_set(ospfv3_prefix_options.operation)
	|| is_set(prefix.operation)
	|| is_set(priority.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::Prefix::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::Prefix::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::Prefix::set_value(const std::string & value_path, std::string value)
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

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::IntraAreaPrefixLsaType()
    :
    reference_advertised_router{YType::str, "reference-advertised-router"},
    reference_lsa_id{YType::uint32, "reference-lsa-id"},
    reference_type{YType::enumeration, "reference-type"}
    	,
    lsa_detail(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaDetail>())
	,lsa_header(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaHeader>())
{
    lsa_detail->parent = this;
    children["lsa-detail"] = lsa_detail;

    lsa_header->parent = this;
    children["lsa-header"] = lsa_header;

    yang_name = "intra-area-prefix-lsa-type"; yang_parent_name = "lsa-info";
}

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::~IntraAreaPrefixLsaType()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::has_data() const
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

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::has_operation() const
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

std::string Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "intra-area-prefix-lsa-type";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            lsa_detail = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaDetail>();
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
            lsa_header = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaHeader>();
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
        auto c = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::Prefix>();
        c->parent = this;
        prefix.push_back(std::move(c));
        children[segment_path] = prefix.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::get_children()
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

void Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::set_value(const std::string & value_path, std::string value)
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

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaHeader::LsaHeader()
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

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaHeader::~LsaHeader()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaHeader::has_data() const
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

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaHeader::has_operation() const
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

std::string Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaHeader::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-header";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaHeader::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaHeader::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaHeader::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaHeader::set_value(const std::string & value_path, std::string value)
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

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaDetail::LsaDetail()
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

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaDetail::~LsaDetail()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaDetail::has_data() const
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

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaDetail::has_operation() const
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

std::string Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-detail";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaDetail::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaDetail::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaDetail::set_value(const std::string & value_path, std::string value)
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

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::Prefix::Prefix()
    :
    ospfv3_prefix_length{YType::uint8, "ospfv3-prefix-length"},
    ospfv3_prefix_metric{YType::uint16, "ospfv3-prefix-metric"},
    ospfv3_prefix_options{YType::uint8, "ospfv3-prefix-options"},
    prefix{YType::str, "prefix"},
    priority{YType::enumeration, "priority"}
{
    yang_name = "prefix"; yang_parent_name = "intra-area-prefix-lsa-type";
}

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::Prefix::~Prefix()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::Prefix::has_data() const
{
    return ospfv3_prefix_length.is_set
	|| ospfv3_prefix_metric.is_set
	|| ospfv3_prefix_options.is_set
	|| prefix.is_set
	|| priority.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::Prefix::has_operation() const
{
    return is_set(operation)
	|| is_set(ospfv3_prefix_length.operation)
	|| is_set(ospfv3_prefix_metric.operation)
	|| is_set(ospfv3_prefix_options.operation)
	|| is_set(prefix.operation)
	|| is_set(priority.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::Prefix::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::Prefix::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::Prefix::set_value(const std::string & value_path, std::string value)
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

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::GraceLsa::GraceLsa()
    :
    grace_period{YType::uint32, "grace-period"},
    grace_reason{YType::enumeration, "grace-reason"}
    	,
    lsa_detail(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::GraceLsa::LsaDetail>())
	,lsa_header(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::GraceLsa::LsaHeader>())
{
    lsa_detail->parent = this;
    children["lsa-detail"] = lsa_detail;

    lsa_header->parent = this;
    children["lsa-header"] = lsa_header;

    yang_name = "grace-lsa"; yang_parent_name = "lsa-info";
}

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::GraceLsa::~GraceLsa()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::GraceLsa::has_data() const
{
    return grace_period.is_set
	|| grace_reason.is_set
	|| (lsa_detail !=  nullptr && lsa_detail->has_data())
	|| (lsa_header !=  nullptr && lsa_header->has_data());
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::GraceLsa::has_operation() const
{
    return is_set(operation)
	|| is_set(grace_period.operation)
	|| is_set(grace_reason.operation)
	|| (lsa_detail !=  nullptr && lsa_detail->has_operation())
	|| (lsa_header !=  nullptr && lsa_header->has_operation());
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::GraceLsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "grace-lsa";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::GraceLsa::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::GraceLsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            lsa_detail = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::GraceLsa::LsaDetail>();
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
            lsa_header = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::GraceLsa::LsaHeader>();
            lsa_header->parent = this;
            children["lsa-header"] = lsa_header;
        }
        return children.at("lsa-header");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::GraceLsa::get_children()
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

void Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::GraceLsa::set_value(const std::string & value_path, std::string value)
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

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::GraceLsa::LsaHeader::LsaHeader()
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

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::GraceLsa::LsaHeader::~LsaHeader()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::GraceLsa::LsaHeader::has_data() const
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

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::GraceLsa::LsaHeader::has_operation() const
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

std::string Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::GraceLsa::LsaHeader::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-header";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::GraceLsa::LsaHeader::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::GraceLsa::LsaHeader::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::GraceLsa::LsaHeader::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::GraceLsa::LsaHeader::set_value(const std::string & value_path, std::string value)
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

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::GraceLsa::LsaDetail::LsaDetail()
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

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::GraceLsa::LsaDetail::~LsaDetail()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::GraceLsa::LsaDetail::has_data() const
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

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::GraceLsa::LsaDetail::has_operation() const
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

std::string Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::GraceLsa::LsaDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-detail";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::GraceLsa::LsaDetail::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::GraceLsa::LsaDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::GraceLsa::LsaDetail::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::GraceLsa::LsaDetail::set_value(const std::string & value_path, std::string value)
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

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLinkLsaType::UnknownLinkLsaType()
    :
    interface_name{YType::str, "interface-name"},
    is_sham_link{YType::boolean, "is-sham-link"},
    is_virtual_link{YType::boolean, "is-virtual-link"},
    sham_link_id{YType::uint32, "sham-link-id"},
    virtual_link_id{YType::uint32, "virtual-link-id"}
    	,
    lsa_detail(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaDetail>())
	,lsa_header(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaHeader>())
{
    lsa_detail->parent = this;
    children["lsa-detail"] = lsa_detail;

    lsa_header->parent = this;
    children["lsa-header"] = lsa_header;

    yang_name = "unknown-link-lsa-type"; yang_parent_name = "lsa-info";
}

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLinkLsaType::~UnknownLinkLsaType()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLinkLsaType::has_data() const
{
    return interface_name.is_set
	|| is_sham_link.is_set
	|| is_virtual_link.is_set
	|| sham_link_id.is_set
	|| virtual_link_id.is_set
	|| (lsa_detail !=  nullptr && lsa_detail->has_data())
	|| (lsa_header !=  nullptr && lsa_header->has_data());
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLinkLsaType::has_operation() const
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

std::string Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLinkLsaType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unknown-link-lsa-type";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLinkLsaType::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLinkLsaType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            lsa_detail = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaDetail>();
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
            lsa_header = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaHeader>();
            lsa_header->parent = this;
            children["lsa-header"] = lsa_header;
        }
        return children.at("lsa-header");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLinkLsaType::get_children()
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

void Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLinkLsaType::set_value(const std::string & value_path, std::string value)
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

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaHeader::LsaHeader()
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

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaHeader::~LsaHeader()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaHeader::has_data() const
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

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaHeader::has_operation() const
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

std::string Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaHeader::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-header";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaHeader::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaHeader::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaHeader::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaHeader::set_value(const std::string & value_path, std::string value)
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

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaDetail::LsaDetail()
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

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaDetail::~LsaDetail()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaDetail::has_data() const
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

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaDetail::has_operation() const
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

std::string Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-detail";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaDetail::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaDetail::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaDetail::set_value(const std::string & value_path, std::string value)
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

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAreaLsaType::UnknownAreaLsaType()
    :
    interface_name{YType::str, "interface-name"},
    is_sham_link{YType::boolean, "is-sham-link"},
    is_virtual_link{YType::boolean, "is-virtual-link"},
    sham_link_id{YType::uint32, "sham-link-id"},
    virtual_link_id{YType::uint32, "virtual-link-id"}
    	,
    lsa_detail(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaDetail>())
	,lsa_header(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaHeader>())
{
    lsa_detail->parent = this;
    children["lsa-detail"] = lsa_detail;

    lsa_header->parent = this;
    children["lsa-header"] = lsa_header;

    yang_name = "unknown-area-lsa-type"; yang_parent_name = "lsa-info";
}

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAreaLsaType::~UnknownAreaLsaType()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAreaLsaType::has_data() const
{
    return interface_name.is_set
	|| is_sham_link.is_set
	|| is_virtual_link.is_set
	|| sham_link_id.is_set
	|| virtual_link_id.is_set
	|| (lsa_detail !=  nullptr && lsa_detail->has_data())
	|| (lsa_header !=  nullptr && lsa_header->has_data());
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAreaLsaType::has_operation() const
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

std::string Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAreaLsaType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unknown-area-lsa-type";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAreaLsaType::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAreaLsaType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            lsa_detail = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaDetail>();
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
            lsa_header = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaHeader>();
            lsa_header->parent = this;
            children["lsa-header"] = lsa_header;
        }
        return children.at("lsa-header");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAreaLsaType::get_children()
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

void Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAreaLsaType::set_value(const std::string & value_path, std::string value)
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

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaHeader::LsaHeader()
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

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaHeader::~LsaHeader()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaHeader::has_data() const
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

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaHeader::has_operation() const
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

std::string Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaHeader::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-header";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaHeader::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaHeader::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaHeader::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaHeader::set_value(const std::string & value_path, std::string value)
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

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaDetail::LsaDetail()
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

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaDetail::~LsaDetail()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaDetail::has_data() const
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

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaDetail::has_operation() const
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

std::string Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-detail";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaDetail::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaDetail::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaDetail::set_value(const std::string & value_path, std::string value)
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

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAslsaType::UnknownAslsaType()
    :
    interface_name{YType::str, "interface-name"},
    is_sham_link{YType::boolean, "is-sham-link"},
    is_virtual_link{YType::boolean, "is-virtual-link"},
    sham_link_id{YType::uint32, "sham-link-id"},
    virtual_link_id{YType::uint32, "virtual-link-id"}
    	,
    lsa_detail(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAslsaType::LsaDetail>())
	,lsa_header(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAslsaType::LsaHeader>())
{
    lsa_detail->parent = this;
    children["lsa-detail"] = lsa_detail;

    lsa_header->parent = this;
    children["lsa-header"] = lsa_header;

    yang_name = "unknown-aslsa-type"; yang_parent_name = "lsa-info";
}

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAslsaType::~UnknownAslsaType()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAslsaType::has_data() const
{
    return interface_name.is_set
	|| is_sham_link.is_set
	|| is_virtual_link.is_set
	|| sham_link_id.is_set
	|| virtual_link_id.is_set
	|| (lsa_detail !=  nullptr && lsa_detail->has_data())
	|| (lsa_header !=  nullptr && lsa_header->has_data());
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAslsaType::has_operation() const
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

std::string Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAslsaType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unknown-aslsa-type";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAslsaType::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAslsaType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            lsa_detail = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAslsaType::LsaDetail>();
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
            lsa_header = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAslsaType::LsaHeader>();
            lsa_header->parent = this;
            children["lsa-header"] = lsa_header;
        }
        return children.at("lsa-header");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAslsaType::get_children()
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

void Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAslsaType::set_value(const std::string & value_path, std::string value)
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

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAslsaType::LsaHeader::LsaHeader()
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

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAslsaType::LsaHeader::~LsaHeader()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAslsaType::LsaHeader::has_data() const
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

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAslsaType::LsaHeader::has_operation() const
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

std::string Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAslsaType::LsaHeader::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-header";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAslsaType::LsaHeader::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAslsaType::LsaHeader::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAslsaType::LsaHeader::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAslsaType::LsaHeader::set_value(const std::string & value_path, std::string value)
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

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAslsaType::LsaDetail::LsaDetail()
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

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAslsaType::LsaDetail::~LsaDetail()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAslsaType::LsaDetail::has_data() const
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

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAslsaType::LsaDetail::has_operation() const
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

std::string Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAslsaType::LsaDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-detail";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAslsaType::LsaDetail::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAslsaType::LsaDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAslsaType::LsaDetail::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAslsaType::LsaDetail::set_value(const std::string & value_path, std::string value)
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

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLsaType::UnknownLsaType()
    :
    interface_name{YType::str, "interface-name"},
    is_sham_link{YType::boolean, "is-sham-link"},
    is_virtual_link{YType::boolean, "is-virtual-link"},
    sham_link_id{YType::uint32, "sham-link-id"},
    virtual_link_id{YType::uint32, "virtual-link-id"}
    	,
    lsa_detail(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLsaType::LsaDetail>())
	,lsa_header(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLsaType::LsaHeader>())
{
    lsa_detail->parent = this;
    children["lsa-detail"] = lsa_detail;

    lsa_header->parent = this;
    children["lsa-header"] = lsa_header;

    yang_name = "unknown-lsa-type"; yang_parent_name = "lsa-info";
}

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLsaType::~UnknownLsaType()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLsaType::has_data() const
{
    return interface_name.is_set
	|| is_sham_link.is_set
	|| is_virtual_link.is_set
	|| sham_link_id.is_set
	|| virtual_link_id.is_set
	|| (lsa_detail !=  nullptr && lsa_detail->has_data())
	|| (lsa_header !=  nullptr && lsa_header->has_data());
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLsaType::has_operation() const
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

std::string Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLsaType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unknown-lsa-type";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLsaType::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLsaType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            lsa_detail = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLsaType::LsaDetail>();
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
            lsa_header = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLsaType::LsaHeader>();
            lsa_header->parent = this;
            children["lsa-header"] = lsa_header;
        }
        return children.at("lsa-header");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLsaType::get_children()
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

void Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLsaType::set_value(const std::string & value_path, std::string value)
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

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLsaType::LsaHeader::LsaHeader()
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

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLsaType::LsaHeader::~LsaHeader()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLsaType::LsaHeader::has_data() const
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

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLsaType::LsaHeader::has_operation() const
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

std::string Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLsaType::LsaHeader::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-header";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLsaType::LsaHeader::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLsaType::LsaHeader::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLsaType::LsaHeader::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLsaType::LsaHeader::set_value(const std::string & value_path, std::string value)
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

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLsaType::LsaDetail::LsaDetail()
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

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLsaType::LsaDetail::~LsaDetail()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLsaType::LsaDetail::has_data() const
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

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLsaType::LsaDetail::has_operation() const
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

std::string Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLsaType::LsaDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-detail";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLsaType::LsaDetail::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLsaType::LsaDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLsaType::LsaDetail::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLsaType::LsaDetail::set_value(const std::string & value_path, std::string value)
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

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::LsaInternalTable()
{
    yang_name = "lsa-internal-table"; yang_parent_name = "database-table";
}

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::~LsaInternalTable()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::has_data() const
{
    for (std::size_t index=0; index<lsa.size(); index++)
    {
        if(lsa[index]->has_data())
            return true;
    }
    return false;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::has_operation() const
{
    for (std::size_t index=0; index<lsa.size(); index++)
    {
        if(lsa[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-internal-table";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa>();
        c->parent = this;
        lsa.push_back(std::move(c));
        children[segment_path] = lsa.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::get_children()
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

void Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::set_value(const std::string & value_path, std::string value)
{
}

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::Lsa()
    :
    advertising_router{YType::str, "advertising-router"},
    area_id{YType::int32, "area-id"},
    interface_name{YType::str, "interface-name"},
    ls_id{YType::int32, "ls-id"},
    ls_type{YType::enumeration, "ls-type"}
    	,
    lsa_info(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo>())
{
    lsa_info->parent = this;
    children["lsa-info"] = lsa_info;

    yang_name = "lsa"; yang_parent_name = "lsa-internal-table";
}

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::~Lsa()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::has_data() const
{
    return advertising_router.is_set
	|| area_id.is_set
	|| interface_name.is_set
	|| ls_id.is_set
	|| ls_type.is_set
	|| (lsa_info !=  nullptr && lsa_info->has_data());
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::has_operation() const
{
    return is_set(operation)
	|| is_set(advertising_router.operation)
	|| is_set(area_id.operation)
	|| is_set(interface_name.operation)
	|| is_set(ls_id.operation)
	|| is_set(ls_type.operation)
	|| (lsa_info !=  nullptr && lsa_info->has_operation());
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            lsa_info = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo>();
            lsa_info->parent = this;
            children["lsa-info"] = lsa_info;
        }
        return children.at("lsa-info");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::get_children()
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

void Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::set_value(const std::string & value_path, std::string value)
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

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaInfo()
    :
    lsa_info_type{YType::enumeration, "lsa-info-type"}
    	,
    external_lsa_type(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::ExternalLsaType>())
	,grace_lsa(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::GraceLsa>())
	,inter_area_prefix_lsa_type(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaPrefixLsaType>())
	,inter_area_router_lsa_type(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaRouterLsaType>())
	,intra_area_prefix_lsa_type(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType>())
	,link_lsa_type(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType>())
	,lsa_summary_info(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo>())
	,network_lsa_type(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NetworkLsaType>())
	,nssalsa_type(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NssalsaType>())
	,router_lsa_type(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType>())
	,unknown_area_lsa_type(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAreaLsaType>())
	,unknown_aslsa_type(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAslsaType>())
	,unknown_link_lsa_type(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLinkLsaType>())
	,unknown_lsa_type(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLsaType>())
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

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::~LsaInfo()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::has_data() const
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

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::has_operation() const
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

std::string Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-info";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            external_lsa_type = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::ExternalLsaType>();
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
            grace_lsa = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::GraceLsa>();
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
            inter_area_prefix_lsa_type = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaPrefixLsaType>();
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
            inter_area_router_lsa_type = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaRouterLsaType>();
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
            intra_area_prefix_lsa_type = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType>();
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
            link_lsa_type = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType>();
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
            lsa_summary_info = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo>();
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
            network_lsa_type = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NetworkLsaType>();
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
            nssalsa_type = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NssalsaType>();
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
            router_lsa_type = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType>();
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
            unknown_area_lsa_type = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAreaLsaType>();
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
            unknown_aslsa_type = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAslsaType>();
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
            unknown_link_lsa_type = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLinkLsaType>();
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
            unknown_lsa_type = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLsaType>();
            unknown_lsa_type->parent = this;
            children["unknown-lsa-type"] = unknown_lsa_type;
        }
        return children.at("unknown-lsa-type");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::get_children()
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

void Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "lsa-info-type")
    {
        lsa_info_type = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo::LsaSummaryInfo()
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
    lsa_detail(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo::LsaDetail>())
	,lsa_header(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo::LsaHeader>())
{
    lsa_detail->parent = this;
    children["lsa-detail"] = lsa_detail;

    lsa_header->parent = this;
    children["lsa-header"] = lsa_header;

    yang_name = "lsa-summary-info"; yang_parent_name = "lsa-info";
}

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo::~LsaSummaryInfo()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo::has_data() const
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

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo::has_operation() const
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

std::string Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-summary-info";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            lsa_detail = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo::LsaDetail>();
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
            lsa_header = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo::LsaHeader>();
            lsa_header->parent = this;
            children["lsa-header"] = lsa_header;
        }
        return children.at("lsa-header");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo::get_children()
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

void Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo::set_value(const std::string & value_path, std::string value)
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

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo::LsaHeader::LsaHeader()
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

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo::LsaHeader::~LsaHeader()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo::LsaHeader::has_data() const
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

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo::LsaHeader::has_operation() const
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

std::string Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo::LsaHeader::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-header";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo::LsaHeader::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo::LsaHeader::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo::LsaHeader::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo::LsaHeader::set_value(const std::string & value_path, std::string value)
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

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo::LsaDetail::LsaDetail()
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

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo::LsaDetail::~LsaDetail()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo::LsaDetail::has_data() const
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

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo::LsaDetail::has_operation() const
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

std::string Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo::LsaDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-detail";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo::LsaDetail::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo::LsaDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo::LsaDetail::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo::LsaDetail::set_value(const std::string & value_path, std::string value)
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

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::RouterLsaType()
    :
    router_la_bits{YType::uint8, "router-la-bits"}
    	,
    lsa_detail(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::LsaDetail>())
	,lsa_header(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::LsaHeader>())
	,rpf_path(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::RpfPath>())
{
    lsa_detail->parent = this;
    children["lsa-detail"] = lsa_detail;

    lsa_header->parent = this;
    children["lsa-header"] = lsa_header;

    rpf_path->parent = this;
    children["rpf-path"] = rpf_path;

    yang_name = "router-lsa-type"; yang_parent_name = "lsa-info";
}

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::~RouterLsaType()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::has_data() const
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

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::has_operation() const
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

std::string Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "router-lsa-type";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::Link>();
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
            lsa_detail = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::LsaDetail>();
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
            lsa_header = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::LsaHeader>();
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
            rpf_path = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::RpfPath>();
            rpf_path->parent = this;
            children["rpf-path"] = rpf_path;
        }
        return children.at("rpf-path");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::get_children()
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

void Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "router-la-bits")
    {
        router_la_bits = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::LsaHeader::LsaHeader()
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

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::LsaHeader::~LsaHeader()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::LsaHeader::has_data() const
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

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::LsaHeader::has_operation() const
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

std::string Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::LsaHeader::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-header";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::LsaHeader::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::LsaHeader::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::LsaHeader::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::LsaHeader::set_value(const std::string & value_path, std::string value)
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

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::LsaDetail::LsaDetail()
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

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::LsaDetail::~LsaDetail()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::LsaDetail::has_data() const
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

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::LsaDetail::has_operation() const
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

std::string Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::LsaDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-detail";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::LsaDetail::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::LsaDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::LsaDetail::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::LsaDetail::set_value(const std::string & value_path, std::string value)
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

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::RpfPath::RpfPath()
    :
    interface_name{YType::str, "interface-name"},
    rpf_multicast_next_hop{YType::uint32, "rpf-multicast-next-hop"}
{
    yang_name = "rpf-path"; yang_parent_name = "router-lsa-type";
}

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::RpfPath::~RpfPath()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::RpfPath::has_data() const
{
    return interface_name.is_set
	|| rpf_multicast_next_hop.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::RpfPath::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(rpf_multicast_next_hop.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::RpfPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpf-path";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::RpfPath::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::RpfPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::RpfPath::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::RpfPath::set_value(const std::string & value_path, std::string value)
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

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::Link::Link()
    :
    link_interface_id{YType::uint32, "link-interface-id"},
    link_metric{YType::uint16, "link-metric"},
    link_neighbor_interface_id{YType::uint32, "link-neighbor-interface-id"},
    link_neighbor_router_id{YType::uint32, "link-neighbor-router-id"},
    link_type{YType::enumeration, "link-type"}
{
    yang_name = "link"; yang_parent_name = "router-lsa-type";
}

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::Link::~Link()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::Link::has_data() const
{
    return link_interface_id.is_set
	|| link_metric.is_set
	|| link_neighbor_interface_id.is_set
	|| link_neighbor_router_id.is_set
	|| link_type.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::Link::has_operation() const
{
    return is_set(operation)
	|| is_set(link_interface_id.operation)
	|| is_set(link_metric.operation)
	|| is_set(link_neighbor_interface_id.operation)
	|| is_set(link_neighbor_router_id.operation)
	|| is_set(link_type.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::Link::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::Link::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::Link::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::Link::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::Link::set_value(const std::string & value_path, std::string value)
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

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NetworkLsaType::NetworkLsaType()
    :
    neighbor_router{YType::str, "neighbor-router"}
    	,
    lsa_detail(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NetworkLsaType::LsaDetail>())
	,lsa_header(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NetworkLsaType::LsaHeader>())
{
    lsa_detail->parent = this;
    children["lsa-detail"] = lsa_detail;

    lsa_header->parent = this;
    children["lsa-header"] = lsa_header;

    yang_name = "network-lsa-type"; yang_parent_name = "lsa-info";
}

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NetworkLsaType::~NetworkLsaType()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NetworkLsaType::has_data() const
{
    for (auto const & leaf : neighbor_router.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return (lsa_detail !=  nullptr && lsa_detail->has_data())
	|| (lsa_header !=  nullptr && lsa_header->has_data());
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NetworkLsaType::has_operation() const
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

std::string Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NetworkLsaType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network-lsa-type";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NetworkLsaType::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NetworkLsaType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            lsa_detail = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NetworkLsaType::LsaDetail>();
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
            lsa_header = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NetworkLsaType::LsaHeader>();
            lsa_header->parent = this;
            children["lsa-header"] = lsa_header;
        }
        return children.at("lsa-header");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NetworkLsaType::get_children()
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

void Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NetworkLsaType::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "neighbor-router")
    {
        neighbor_router.append(value);
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NetworkLsaType::LsaHeader::LsaHeader()
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

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NetworkLsaType::LsaHeader::~LsaHeader()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NetworkLsaType::LsaHeader::has_data() const
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

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NetworkLsaType::LsaHeader::has_operation() const
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

std::string Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NetworkLsaType::LsaHeader::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-header";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NetworkLsaType::LsaHeader::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NetworkLsaType::LsaHeader::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NetworkLsaType::LsaHeader::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NetworkLsaType::LsaHeader::set_value(const std::string & value_path, std::string value)
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

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NetworkLsaType::LsaDetail::LsaDetail()
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

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NetworkLsaType::LsaDetail::~LsaDetail()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NetworkLsaType::LsaDetail::has_data() const
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

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NetworkLsaType::LsaDetail::has_operation() const
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

std::string Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NetworkLsaType::LsaDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-detail";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NetworkLsaType::LsaDetail::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NetworkLsaType::LsaDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NetworkLsaType::LsaDetail::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NetworkLsaType::LsaDetail::set_value(const std::string & value_path, std::string value)
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

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaPrefixLsaType::InterAreaPrefixLsaType()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint8, "prefix-length"},
    priority{YType::enumeration, "priority"}
    	,
    lsa_detail(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaDetail>())
	,lsa_header(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaHeader>())
{
    lsa_detail->parent = this;
    children["lsa-detail"] = lsa_detail;

    lsa_header->parent = this;
    children["lsa-header"] = lsa_header;

    yang_name = "inter-area-prefix-lsa-type"; yang_parent_name = "lsa-info";
}

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaPrefixLsaType::~InterAreaPrefixLsaType()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaPrefixLsaType::has_data() const
{
    return prefix.is_set
	|| prefix_length.is_set
	|| priority.is_set
	|| (lsa_detail !=  nullptr && lsa_detail->has_data())
	|| (lsa_header !=  nullptr && lsa_header->has_data());
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaPrefixLsaType::has_operation() const
{
    return is_set(operation)
	|| is_set(prefix.operation)
	|| is_set(prefix_length.operation)
	|| is_set(priority.operation)
	|| (lsa_detail !=  nullptr && lsa_detail->has_operation())
	|| (lsa_header !=  nullptr && lsa_header->has_operation());
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaPrefixLsaType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inter-area-prefix-lsa-type";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaPrefixLsaType::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaPrefixLsaType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            lsa_detail = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaDetail>();
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
            lsa_header = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaHeader>();
            lsa_header->parent = this;
            children["lsa-header"] = lsa_header;
        }
        return children.at("lsa-header");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaPrefixLsaType::get_children()
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

void Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaPrefixLsaType::set_value(const std::string & value_path, std::string value)
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

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaHeader::LsaHeader()
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

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaHeader::~LsaHeader()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaHeader::has_data() const
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

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaHeader::has_operation() const
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

std::string Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaHeader::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-header";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaHeader::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaHeader::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaHeader::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaHeader::set_value(const std::string & value_path, std::string value)
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

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaDetail::LsaDetail()
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

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaDetail::~LsaDetail()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaDetail::has_data() const
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

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaDetail::has_operation() const
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

std::string Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-detail";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaDetail::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaDetail::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaDetail::set_value(const std::string & value_path, std::string value)
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

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaRouterLsaType::InterAreaRouterLsaType()
    :
    lsa_router_id{YType::uint32, "lsa-router-id"}
    	,
    lsa_detail(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaDetail>())
	,lsa_header(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaHeader>())
{
    lsa_detail->parent = this;
    children["lsa-detail"] = lsa_detail;

    lsa_header->parent = this;
    children["lsa-header"] = lsa_header;

    yang_name = "inter-area-router-lsa-type"; yang_parent_name = "lsa-info";
}

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaRouterLsaType::~InterAreaRouterLsaType()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaRouterLsaType::has_data() const
{
    return lsa_router_id.is_set
	|| (lsa_detail !=  nullptr && lsa_detail->has_data())
	|| (lsa_header !=  nullptr && lsa_header->has_data());
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaRouterLsaType::has_operation() const
{
    return is_set(operation)
	|| is_set(lsa_router_id.operation)
	|| (lsa_detail !=  nullptr && lsa_detail->has_operation())
	|| (lsa_header !=  nullptr && lsa_header->has_operation());
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaRouterLsaType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inter-area-router-lsa-type";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaRouterLsaType::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaRouterLsaType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            lsa_detail = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaDetail>();
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
            lsa_header = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaHeader>();
            lsa_header->parent = this;
            children["lsa-header"] = lsa_header;
        }
        return children.at("lsa-header");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaRouterLsaType::get_children()
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

void Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaRouterLsaType::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "lsa-router-id")
    {
        lsa_router_id = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaHeader::LsaHeader()
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

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaHeader::~LsaHeader()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaHeader::has_data() const
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

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaHeader::has_operation() const
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

std::string Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaHeader::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-header";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaHeader::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaHeader::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaHeader::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaHeader::set_value(const std::string & value_path, std::string value)
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

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaDetail::LsaDetail()
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

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaDetail::~LsaDetail()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaDetail::has_data() const
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

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaDetail::has_operation() const
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

std::string Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-detail";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaDetail::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaDetail::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaDetail::set_value(const std::string & value_path, std::string value)
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

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::ExternalLsaType::ExternalLsaType()
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
    lsa_detail(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::ExternalLsaType::LsaDetail>())
	,lsa_header(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::ExternalLsaType::LsaHeader>())
{
    lsa_detail->parent = this;
    children["lsa-detail"] = lsa_detail;

    lsa_header->parent = this;
    children["lsa-header"] = lsa_header;

    yang_name = "external-lsa-type"; yang_parent_name = "lsa-info";
}

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::ExternalLsaType::~ExternalLsaType()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::ExternalLsaType::has_data() const
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

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::ExternalLsaType::has_operation() const
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

std::string Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::ExternalLsaType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "external-lsa-type";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::ExternalLsaType::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::ExternalLsaType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            lsa_detail = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::ExternalLsaType::LsaDetail>();
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
            lsa_header = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::ExternalLsaType::LsaHeader>();
            lsa_header->parent = this;
            children["lsa-header"] = lsa_header;
        }
        return children.at("lsa-header");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::ExternalLsaType::get_children()
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

void Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::ExternalLsaType::set_value(const std::string & value_path, std::string value)
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

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::ExternalLsaType::LsaHeader::LsaHeader()
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

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::ExternalLsaType::LsaHeader::~LsaHeader()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::ExternalLsaType::LsaHeader::has_data() const
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

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::ExternalLsaType::LsaHeader::has_operation() const
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

std::string Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::ExternalLsaType::LsaHeader::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-header";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::ExternalLsaType::LsaHeader::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::ExternalLsaType::LsaHeader::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::ExternalLsaType::LsaHeader::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::ExternalLsaType::LsaHeader::set_value(const std::string & value_path, std::string value)
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

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::ExternalLsaType::LsaDetail::LsaDetail()
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

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::ExternalLsaType::LsaDetail::~LsaDetail()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::ExternalLsaType::LsaDetail::has_data() const
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

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::ExternalLsaType::LsaDetail::has_operation() const
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

std::string Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::ExternalLsaType::LsaDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-detail";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::ExternalLsaType::LsaDetail::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::ExternalLsaType::LsaDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::ExternalLsaType::LsaDetail::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::ExternalLsaType::LsaDetail::set_value(const std::string & value_path, std::string value)
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

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NssalsaType::NssalsaType()
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
    lsa_detail(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NssalsaType::LsaDetail>())
	,lsa_header(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NssalsaType::LsaHeader>())
{
    lsa_detail->parent = this;
    children["lsa-detail"] = lsa_detail;

    lsa_header->parent = this;
    children["lsa-header"] = lsa_header;

    yang_name = "nssalsa-type"; yang_parent_name = "lsa-info";
}

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NssalsaType::~NssalsaType()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NssalsaType::has_data() const
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

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NssalsaType::has_operation() const
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

std::string Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NssalsaType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nssalsa-type";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NssalsaType::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NssalsaType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            lsa_detail = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NssalsaType::LsaDetail>();
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
            lsa_header = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NssalsaType::LsaHeader>();
            lsa_header->parent = this;
            children["lsa-header"] = lsa_header;
        }
        return children.at("lsa-header");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NssalsaType::get_children()
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

void Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NssalsaType::set_value(const std::string & value_path, std::string value)
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

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NssalsaType::LsaHeader::LsaHeader()
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

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NssalsaType::LsaHeader::~LsaHeader()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NssalsaType::LsaHeader::has_data() const
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

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NssalsaType::LsaHeader::has_operation() const
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

std::string Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NssalsaType::LsaHeader::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-header";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NssalsaType::LsaHeader::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NssalsaType::LsaHeader::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NssalsaType::LsaHeader::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NssalsaType::LsaHeader::set_value(const std::string & value_path, std::string value)
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

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NssalsaType::LsaDetail::LsaDetail()
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

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NssalsaType::LsaDetail::~LsaDetail()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NssalsaType::LsaDetail::has_data() const
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

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NssalsaType::LsaDetail::has_operation() const
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

std::string Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NssalsaType::LsaDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-detail";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NssalsaType::LsaDetail::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NssalsaType::LsaDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NssalsaType::LsaDetail::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NssalsaType::LsaDetail::set_value(const std::string & value_path, std::string value)
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

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::LinkLsaType()
    :
    interface_name{YType::str, "interface-name"},
    is_sham_link{YType::boolean, "is-sham-link"},
    is_virtual_link{YType::boolean, "is-virtual-link"},
    lsa_link_local{YType::str, "lsa-link-local"},
    router_priority{YType::uint8, "router-priority"},
    sham_link_id{YType::uint32, "sham-link-id"},
    virtual_link_id{YType::uint32, "virtual-link-id"}
    	,
    lsa_detail(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::LsaDetail>())
	,lsa_header(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::LsaHeader>())
{
    lsa_detail->parent = this;
    children["lsa-detail"] = lsa_detail;

    lsa_header->parent = this;
    children["lsa-header"] = lsa_header;

    yang_name = "link-lsa-type"; yang_parent_name = "lsa-info";
}

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::~LinkLsaType()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::has_data() const
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

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::has_operation() const
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

std::string Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-lsa-type";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            lsa_detail = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::LsaDetail>();
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
            lsa_header = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::LsaHeader>();
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
        auto c = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::Prefix>();
        c->parent = this;
        prefix.push_back(std::move(c));
        children[segment_path] = prefix.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::get_children()
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

void Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::set_value(const std::string & value_path, std::string value)
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

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::LsaHeader::LsaHeader()
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

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::LsaHeader::~LsaHeader()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::LsaHeader::has_data() const
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

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::LsaHeader::has_operation() const
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

std::string Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::LsaHeader::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-header";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::LsaHeader::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::LsaHeader::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::LsaHeader::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::LsaHeader::set_value(const std::string & value_path, std::string value)
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

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::LsaDetail::LsaDetail()
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

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::LsaDetail::~LsaDetail()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::LsaDetail::has_data() const
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

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::LsaDetail::has_operation() const
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

std::string Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::LsaDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-detail";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::LsaDetail::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::LsaDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::LsaDetail::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::LsaDetail::set_value(const std::string & value_path, std::string value)
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

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::Prefix::Prefix()
    :
    ospfv3_prefix_length{YType::uint8, "ospfv3-prefix-length"},
    ospfv3_prefix_metric{YType::uint16, "ospfv3-prefix-metric"},
    ospfv3_prefix_options{YType::uint8, "ospfv3-prefix-options"},
    prefix{YType::str, "prefix"},
    priority{YType::enumeration, "priority"}
{
    yang_name = "prefix"; yang_parent_name = "link-lsa-type";
}

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::Prefix::~Prefix()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::Prefix::has_data() const
{
    return ospfv3_prefix_length.is_set
	|| ospfv3_prefix_metric.is_set
	|| ospfv3_prefix_options.is_set
	|| prefix.is_set
	|| priority.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::Prefix::has_operation() const
{
    return is_set(operation)
	|| is_set(ospfv3_prefix_length.operation)
	|| is_set(ospfv3_prefix_metric.operation)
	|| is_set(ospfv3_prefix_options.operation)
	|| is_set(prefix.operation)
	|| is_set(priority.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::Prefix::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::Prefix::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::Prefix::set_value(const std::string & value_path, std::string value)
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

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::IntraAreaPrefixLsaType()
    :
    reference_advertised_router{YType::str, "reference-advertised-router"},
    reference_lsa_id{YType::uint32, "reference-lsa-id"},
    reference_type{YType::enumeration, "reference-type"}
    	,
    lsa_detail(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaDetail>())
	,lsa_header(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaHeader>())
{
    lsa_detail->parent = this;
    children["lsa-detail"] = lsa_detail;

    lsa_header->parent = this;
    children["lsa-header"] = lsa_header;

    yang_name = "intra-area-prefix-lsa-type"; yang_parent_name = "lsa-info";
}

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::~IntraAreaPrefixLsaType()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::has_data() const
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

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::has_operation() const
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

std::string Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "intra-area-prefix-lsa-type";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            lsa_detail = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaDetail>();
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
            lsa_header = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaHeader>();
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
        auto c = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::Prefix>();
        c->parent = this;
        prefix.push_back(std::move(c));
        children[segment_path] = prefix.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::get_children()
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

void Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::set_value(const std::string & value_path, std::string value)
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

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaHeader::LsaHeader()
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

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaHeader::~LsaHeader()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaHeader::has_data() const
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

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaHeader::has_operation() const
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

std::string Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaHeader::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-header";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaHeader::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaHeader::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaHeader::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaHeader::set_value(const std::string & value_path, std::string value)
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

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaDetail::LsaDetail()
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

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaDetail::~LsaDetail()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaDetail::has_data() const
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

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaDetail::has_operation() const
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

std::string Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-detail";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaDetail::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaDetail::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaDetail::set_value(const std::string & value_path, std::string value)
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

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::Prefix::Prefix()
    :
    ospfv3_prefix_length{YType::uint8, "ospfv3-prefix-length"},
    ospfv3_prefix_metric{YType::uint16, "ospfv3-prefix-metric"},
    ospfv3_prefix_options{YType::uint8, "ospfv3-prefix-options"},
    prefix{YType::str, "prefix"},
    priority{YType::enumeration, "priority"}
{
    yang_name = "prefix"; yang_parent_name = "intra-area-prefix-lsa-type";
}

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::Prefix::~Prefix()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::Prefix::has_data() const
{
    return ospfv3_prefix_length.is_set
	|| ospfv3_prefix_metric.is_set
	|| ospfv3_prefix_options.is_set
	|| prefix.is_set
	|| priority.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::Prefix::has_operation() const
{
    return is_set(operation)
	|| is_set(ospfv3_prefix_length.operation)
	|| is_set(ospfv3_prefix_metric.operation)
	|| is_set(ospfv3_prefix_options.operation)
	|| is_set(prefix.operation)
	|| is_set(priority.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::Prefix::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::Prefix::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::Prefix::set_value(const std::string & value_path, std::string value)
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

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::GraceLsa::GraceLsa()
    :
    grace_period{YType::uint32, "grace-period"},
    grace_reason{YType::enumeration, "grace-reason"}
    	,
    lsa_detail(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::GraceLsa::LsaDetail>())
	,lsa_header(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::GraceLsa::LsaHeader>())
{
    lsa_detail->parent = this;
    children["lsa-detail"] = lsa_detail;

    lsa_header->parent = this;
    children["lsa-header"] = lsa_header;

    yang_name = "grace-lsa"; yang_parent_name = "lsa-info";
}

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::GraceLsa::~GraceLsa()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::GraceLsa::has_data() const
{
    return grace_period.is_set
	|| grace_reason.is_set
	|| (lsa_detail !=  nullptr && lsa_detail->has_data())
	|| (lsa_header !=  nullptr && lsa_header->has_data());
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::GraceLsa::has_operation() const
{
    return is_set(operation)
	|| is_set(grace_period.operation)
	|| is_set(grace_reason.operation)
	|| (lsa_detail !=  nullptr && lsa_detail->has_operation())
	|| (lsa_header !=  nullptr && lsa_header->has_operation());
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::GraceLsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "grace-lsa";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::GraceLsa::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::GraceLsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            lsa_detail = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::GraceLsa::LsaDetail>();
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
            lsa_header = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::GraceLsa::LsaHeader>();
            lsa_header->parent = this;
            children["lsa-header"] = lsa_header;
        }
        return children.at("lsa-header");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::GraceLsa::get_children()
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

void Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::GraceLsa::set_value(const std::string & value_path, std::string value)
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

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::GraceLsa::LsaHeader::LsaHeader()
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

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::GraceLsa::LsaHeader::~LsaHeader()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::GraceLsa::LsaHeader::has_data() const
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

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::GraceLsa::LsaHeader::has_operation() const
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

std::string Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::GraceLsa::LsaHeader::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-header";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::GraceLsa::LsaHeader::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::GraceLsa::LsaHeader::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::GraceLsa::LsaHeader::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::GraceLsa::LsaHeader::set_value(const std::string & value_path, std::string value)
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

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::GraceLsa::LsaDetail::LsaDetail()
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

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::GraceLsa::LsaDetail::~LsaDetail()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::GraceLsa::LsaDetail::has_data() const
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

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::GraceLsa::LsaDetail::has_operation() const
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

std::string Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::GraceLsa::LsaDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-detail";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::GraceLsa::LsaDetail::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::GraceLsa::LsaDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::GraceLsa::LsaDetail::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::GraceLsa::LsaDetail::set_value(const std::string & value_path, std::string value)
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

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLinkLsaType::UnknownLinkLsaType()
    :
    interface_name{YType::str, "interface-name"},
    is_sham_link{YType::boolean, "is-sham-link"},
    is_virtual_link{YType::boolean, "is-virtual-link"},
    sham_link_id{YType::uint32, "sham-link-id"},
    virtual_link_id{YType::uint32, "virtual-link-id"}
    	,
    lsa_detail(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaDetail>())
	,lsa_header(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaHeader>())
{
    lsa_detail->parent = this;
    children["lsa-detail"] = lsa_detail;

    lsa_header->parent = this;
    children["lsa-header"] = lsa_header;

    yang_name = "unknown-link-lsa-type"; yang_parent_name = "lsa-info";
}

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLinkLsaType::~UnknownLinkLsaType()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLinkLsaType::has_data() const
{
    return interface_name.is_set
	|| is_sham_link.is_set
	|| is_virtual_link.is_set
	|| sham_link_id.is_set
	|| virtual_link_id.is_set
	|| (lsa_detail !=  nullptr && lsa_detail->has_data())
	|| (lsa_header !=  nullptr && lsa_header->has_data());
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLinkLsaType::has_operation() const
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

std::string Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLinkLsaType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unknown-link-lsa-type";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLinkLsaType::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLinkLsaType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            lsa_detail = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaDetail>();
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
            lsa_header = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaHeader>();
            lsa_header->parent = this;
            children["lsa-header"] = lsa_header;
        }
        return children.at("lsa-header");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLinkLsaType::get_children()
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

void Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLinkLsaType::set_value(const std::string & value_path, std::string value)
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

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaHeader::LsaHeader()
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

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaHeader::~LsaHeader()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaHeader::has_data() const
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

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaHeader::has_operation() const
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

std::string Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaHeader::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-header";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaHeader::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaHeader::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaHeader::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaHeader::set_value(const std::string & value_path, std::string value)
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

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaDetail::LsaDetail()
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

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaDetail::~LsaDetail()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaDetail::has_data() const
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

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaDetail::has_operation() const
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

std::string Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-detail";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaDetail::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaDetail::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaDetail::set_value(const std::string & value_path, std::string value)
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

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAreaLsaType::UnknownAreaLsaType()
    :
    interface_name{YType::str, "interface-name"},
    is_sham_link{YType::boolean, "is-sham-link"},
    is_virtual_link{YType::boolean, "is-virtual-link"},
    sham_link_id{YType::uint32, "sham-link-id"},
    virtual_link_id{YType::uint32, "virtual-link-id"}
    	,
    lsa_detail(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaDetail>())
	,lsa_header(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaHeader>())
{
    lsa_detail->parent = this;
    children["lsa-detail"] = lsa_detail;

    lsa_header->parent = this;
    children["lsa-header"] = lsa_header;

    yang_name = "unknown-area-lsa-type"; yang_parent_name = "lsa-info";
}

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAreaLsaType::~UnknownAreaLsaType()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAreaLsaType::has_data() const
{
    return interface_name.is_set
	|| is_sham_link.is_set
	|| is_virtual_link.is_set
	|| sham_link_id.is_set
	|| virtual_link_id.is_set
	|| (lsa_detail !=  nullptr && lsa_detail->has_data())
	|| (lsa_header !=  nullptr && lsa_header->has_data());
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAreaLsaType::has_operation() const
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

std::string Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAreaLsaType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unknown-area-lsa-type";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAreaLsaType::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAreaLsaType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            lsa_detail = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaDetail>();
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
            lsa_header = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaHeader>();
            lsa_header->parent = this;
            children["lsa-header"] = lsa_header;
        }
        return children.at("lsa-header");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAreaLsaType::get_children()
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

void Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAreaLsaType::set_value(const std::string & value_path, std::string value)
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

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaHeader::LsaHeader()
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

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaHeader::~LsaHeader()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaHeader::has_data() const
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

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaHeader::has_operation() const
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

std::string Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaHeader::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-header";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaHeader::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaHeader::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaHeader::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaHeader::set_value(const std::string & value_path, std::string value)
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

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaDetail::LsaDetail()
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

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaDetail::~LsaDetail()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaDetail::has_data() const
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

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaDetail::has_operation() const
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

std::string Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-detail";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaDetail::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaDetail::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaDetail::set_value(const std::string & value_path, std::string value)
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

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAslsaType::UnknownAslsaType()
    :
    interface_name{YType::str, "interface-name"},
    is_sham_link{YType::boolean, "is-sham-link"},
    is_virtual_link{YType::boolean, "is-virtual-link"},
    sham_link_id{YType::uint32, "sham-link-id"},
    virtual_link_id{YType::uint32, "virtual-link-id"}
    	,
    lsa_detail(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAslsaType::LsaDetail>())
	,lsa_header(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAslsaType::LsaHeader>())
{
    lsa_detail->parent = this;
    children["lsa-detail"] = lsa_detail;

    lsa_header->parent = this;
    children["lsa-header"] = lsa_header;

    yang_name = "unknown-aslsa-type"; yang_parent_name = "lsa-info";
}

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAslsaType::~UnknownAslsaType()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAslsaType::has_data() const
{
    return interface_name.is_set
	|| is_sham_link.is_set
	|| is_virtual_link.is_set
	|| sham_link_id.is_set
	|| virtual_link_id.is_set
	|| (lsa_detail !=  nullptr && lsa_detail->has_data())
	|| (lsa_header !=  nullptr && lsa_header->has_data());
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAslsaType::has_operation() const
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

std::string Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAslsaType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unknown-aslsa-type";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAslsaType::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAslsaType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            lsa_detail = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAslsaType::LsaDetail>();
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
            lsa_header = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAslsaType::LsaHeader>();
            lsa_header->parent = this;
            children["lsa-header"] = lsa_header;
        }
        return children.at("lsa-header");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAslsaType::get_children()
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

void Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAslsaType::set_value(const std::string & value_path, std::string value)
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

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAslsaType::LsaHeader::LsaHeader()
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

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAslsaType::LsaHeader::~LsaHeader()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAslsaType::LsaHeader::has_data() const
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

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAslsaType::LsaHeader::has_operation() const
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

std::string Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAslsaType::LsaHeader::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-header";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAslsaType::LsaHeader::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAslsaType::LsaHeader::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAslsaType::LsaHeader::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAslsaType::LsaHeader::set_value(const std::string & value_path, std::string value)
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

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAslsaType::LsaDetail::LsaDetail()
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

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAslsaType::LsaDetail::~LsaDetail()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAslsaType::LsaDetail::has_data() const
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

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAslsaType::LsaDetail::has_operation() const
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

std::string Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAslsaType::LsaDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-detail";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAslsaType::LsaDetail::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAslsaType::LsaDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAslsaType::LsaDetail::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAslsaType::LsaDetail::set_value(const std::string & value_path, std::string value)
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

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLsaType::UnknownLsaType()
    :
    interface_name{YType::str, "interface-name"},
    is_sham_link{YType::boolean, "is-sham-link"},
    is_virtual_link{YType::boolean, "is-virtual-link"},
    sham_link_id{YType::uint32, "sham-link-id"},
    virtual_link_id{YType::uint32, "virtual-link-id"}
    	,
    lsa_detail(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLsaType::LsaDetail>())
	,lsa_header(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLsaType::LsaHeader>())
{
    lsa_detail->parent = this;
    children["lsa-detail"] = lsa_detail;

    lsa_header->parent = this;
    children["lsa-header"] = lsa_header;

    yang_name = "unknown-lsa-type"; yang_parent_name = "lsa-info";
}

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLsaType::~UnknownLsaType()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLsaType::has_data() const
{
    return interface_name.is_set
	|| is_sham_link.is_set
	|| is_virtual_link.is_set
	|| sham_link_id.is_set
	|| virtual_link_id.is_set
	|| (lsa_detail !=  nullptr && lsa_detail->has_data())
	|| (lsa_header !=  nullptr && lsa_header->has_data());
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLsaType::has_operation() const
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

std::string Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLsaType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unknown-lsa-type";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLsaType::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLsaType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            lsa_detail = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLsaType::LsaDetail>();
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
            lsa_header = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLsaType::LsaHeader>();
            lsa_header->parent = this;
            children["lsa-header"] = lsa_header;
        }
        return children.at("lsa-header");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLsaType::get_children()
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

void Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLsaType::set_value(const std::string & value_path, std::string value)
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

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLsaType::LsaHeader::LsaHeader()
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

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLsaType::LsaHeader::~LsaHeader()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLsaType::LsaHeader::has_data() const
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

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLsaType::LsaHeader::has_operation() const
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

std::string Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLsaType::LsaHeader::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-header";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLsaType::LsaHeader::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLsaType::LsaHeader::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLsaType::LsaHeader::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLsaType::LsaHeader::set_value(const std::string & value_path, std::string value)
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

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLsaType::LsaDetail::LsaDetail()
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

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLsaType::LsaDetail::~LsaDetail()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLsaType::LsaDetail::has_data() const
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

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLsaType::LsaDetail::has_operation() const
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

std::string Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLsaType::LsaDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-detail";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLsaType::LsaDetail::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLsaType::LsaDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLsaType::LsaDetail::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLsaType::LsaDetail::set_value(const std::string & value_path, std::string value)
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

Ospfv3::Processes::Process::Vrfs::Vrf::InterfaceProcessTable::InterfaceProcessTable()
{
    yang_name = "interface-process-table"; yang_parent_name = "vrf";
}

Ospfv3::Processes::Process::Vrfs::Vrf::InterfaceProcessTable::~InterfaceProcessTable()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::InterfaceProcessTable::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::InterfaceProcessTable::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::InterfaceProcessTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-process-table";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::InterfaceProcessTable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfaceProcessTable' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::InterfaceProcessTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::InterfaceProcessTable::Interface>();
        c->parent = this;
        interface.push_back(std::move(c));
        children[segment_path] = interface.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::InterfaceProcessTable::get_children()
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

void Ospfv3::Processes::Process::Vrfs::Vrf::InterfaceProcessTable::set_value(const std::string & value_path, std::string value)
{
}

Ospfv3::Processes::Process::Vrfs::Vrf::InterfaceProcessTable::Interface::Interface()
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
    active_interface(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::InterfaceProcessTable::Interface::ActiveInterface>())
	,interface_bfd(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::InterfaceProcessTable::Interface::InterfaceBfd>())
{
    active_interface->parent = this;
    children["active-interface"] = active_interface;

    interface_bfd->parent = this;
    children["interface-bfd"] = interface_bfd;

    yang_name = "interface"; yang_parent_name = "interface-process-table";
}

Ospfv3::Processes::Process::Vrfs::Vrf::InterfaceProcessTable::Interface::~Interface()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::InterfaceProcessTable::Interface::has_data() const
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

bool Ospfv3::Processes::Process::Vrfs::Vrf::InterfaceProcessTable::Interface::has_operation() const
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

std::string Ospfv3::Processes::Process::Vrfs::Vrf::InterfaceProcessTable::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::InterfaceProcessTable::Interface::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::InterfaceProcessTable::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            active_interface = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::InterfaceProcessTable::Interface::ActiveInterface>();
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
            interface_bfd = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::InterfaceProcessTable::Interface::InterfaceBfd>();
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
        auto c = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::InterfaceProcessTable::Interface::InterfaceNeighbor>();
        c->parent = this;
        interface_neighbor.push_back(std::move(c));
        children[segment_path] = interface_neighbor.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::InterfaceProcessTable::Interface::get_children()
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

void Ospfv3::Processes::Process::Vrfs::Vrf::InterfaceProcessTable::Interface::set_value(const std::string & value_path, std::string value)
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

Ospfv3::Processes::Process::Vrfs::Vrf::InterfaceProcessTable::Interface::ActiveInterface::ActiveInterface()
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

Ospfv3::Processes::Process::Vrfs::Vrf::InterfaceProcessTable::Interface::ActiveInterface::~ActiveInterface()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::InterfaceProcessTable::Interface::ActiveInterface::has_data() const
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

bool Ospfv3::Processes::Process::Vrfs::Vrf::InterfaceProcessTable::Interface::ActiveInterface::has_operation() const
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

std::string Ospfv3::Processes::Process::Vrfs::Vrf::InterfaceProcessTable::Interface::ActiveInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "active-interface";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::InterfaceProcessTable::Interface::ActiveInterface::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::InterfaceProcessTable::Interface::ActiveInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::InterfaceProcessTable::Interface::ActiveInterface::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::InterfaceProcessTable::Interface::ActiveInterface::set_value(const std::string & value_path, std::string value)
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

Ospfv3::Processes::Process::Vrfs::Vrf::InterfaceProcessTable::Interface::InterfaceBfd::InterfaceBfd()
    :
    bfd_detection_multiplier{YType::uint32, "bfd-detection-multiplier"},
    bfd_interval{YType::uint32, "bfd-interval"},
    bfd_intf_enable_mode{YType::uint32, "bfd-intf-enable-mode"}
{
    yang_name = "interface-bfd"; yang_parent_name = "interface";
}

Ospfv3::Processes::Process::Vrfs::Vrf::InterfaceProcessTable::Interface::InterfaceBfd::~InterfaceBfd()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::InterfaceProcessTable::Interface::InterfaceBfd::has_data() const
{
    return bfd_detection_multiplier.is_set
	|| bfd_interval.is_set
	|| bfd_intf_enable_mode.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::InterfaceProcessTable::Interface::InterfaceBfd::has_operation() const
{
    return is_set(operation)
	|| is_set(bfd_detection_multiplier.operation)
	|| is_set(bfd_interval.operation)
	|| is_set(bfd_intf_enable_mode.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::InterfaceProcessTable::Interface::InterfaceBfd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-bfd";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::InterfaceProcessTable::Interface::InterfaceBfd::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::InterfaceProcessTable::Interface::InterfaceBfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::InterfaceProcessTable::Interface::InterfaceBfd::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::InterfaceProcessTable::Interface::InterfaceBfd::set_value(const std::string & value_path, std::string value)
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

Ospfv3::Processes::Process::Vrfs::Vrf::InterfaceProcessTable::Interface::InterfaceNeighbor::InterfaceNeighbor()
    :
    interface_neighbor_cost{YType::uint32, "interface-neighbor-cost"},
    interface_neighbor_id{YType::str, "interface-neighbor-id"},
    is_hello_suppressed{YType::boolean, "is-hello-suppressed"},
    is_neighbor_bdr{YType::boolean, "is-neighbor-bdr"},
    is_neighbor_dr{YType::boolean, "is-neighbor-dr"}
{
    yang_name = "interface-neighbor"; yang_parent_name = "interface";
}

Ospfv3::Processes::Process::Vrfs::Vrf::InterfaceProcessTable::Interface::InterfaceNeighbor::~InterfaceNeighbor()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::InterfaceProcessTable::Interface::InterfaceNeighbor::has_data() const
{
    return interface_neighbor_cost.is_set
	|| interface_neighbor_id.is_set
	|| is_hello_suppressed.is_set
	|| is_neighbor_bdr.is_set
	|| is_neighbor_dr.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::InterfaceProcessTable::Interface::InterfaceNeighbor::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_neighbor_cost.operation)
	|| is_set(interface_neighbor_id.operation)
	|| is_set(is_hello_suppressed.operation)
	|| is_set(is_neighbor_bdr.operation)
	|| is_set(is_neighbor_dr.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::InterfaceProcessTable::Interface::InterfaceNeighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-neighbor";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::InterfaceProcessTable::Interface::InterfaceNeighbor::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::InterfaceProcessTable::Interface::InterfaceNeighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::InterfaceProcessTable::Interface::InterfaceNeighbor::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::InterfaceProcessTable::Interface::InterfaceNeighbor::set_value(const std::string & value_path, std::string value)
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

Ospfv3::Processes::Process::Vrfs::Vrf::Redistributions::Redistributions()
{
    yang_name = "redistributions"; yang_parent_name = "vrf";
}

Ospfv3::Processes::Process::Vrfs::Vrf::Redistributions::~Redistributions()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Redistributions::has_data() const
{
    for (std::size_t index=0; index<redistribution.size(); index++)
    {
        if(redistribution[index]->has_data())
            return true;
    }
    return false;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Redistributions::has_operation() const
{
    for (std::size_t index=0; index<redistribution.size(); index++)
    {
        if(redistribution[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Redistributions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redistributions";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::Redistributions::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Redistributions' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Redistributions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "redistribution")
    {
        for(auto const & c : redistribution)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Redistributions::Redistribution>();
        c->parent = this;
        redistribution.push_back(std::move(c));
        children[segment_path] = redistribution.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::Redistributions::get_children()
{
    for (auto const & c : redistribution)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Redistributions::set_value(const std::string & value_path, std::string value)
{
}

Ospfv3::Processes::Process::Vrfs::Vrf::Redistributions::Redistribution::Redistribution()
    :
    policy_name{YType::str, "policy-name"},
    process_id{YType::str, "process-id"},
    process_name{YType::str, "process-name"},
    protocol_name{YType::str, "protocol-name"},
    protocol_name_xr{YType::str, "protocol-name-xr"},
    red_metric{YType::uint32, "red-metric"},
    red_metric_flag{YType::boolean, "red-metric-flag"},
    red_metric_type{YType::uint8, "red-metric-type"},
    red_mtype_flag{YType::boolean, "red-mtype-flag"},
    red_tag{YType::uint32, "red-tag"}
{
    yang_name = "redistribution"; yang_parent_name = "redistributions";
}

Ospfv3::Processes::Process::Vrfs::Vrf::Redistributions::Redistribution::~Redistribution()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Redistributions::Redistribution::has_data() const
{
    return policy_name.is_set
	|| process_id.is_set
	|| process_name.is_set
	|| protocol_name.is_set
	|| protocol_name_xr.is_set
	|| red_metric.is_set
	|| red_metric_flag.is_set
	|| red_metric_type.is_set
	|| red_mtype_flag.is_set
	|| red_tag.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Redistributions::Redistribution::has_operation() const
{
    return is_set(operation)
	|| is_set(policy_name.operation)
	|| is_set(process_id.operation)
	|| is_set(process_name.operation)
	|| is_set(protocol_name.operation)
	|| is_set(protocol_name_xr.operation)
	|| is_set(red_metric.operation)
	|| is_set(red_metric_flag.operation)
	|| is_set(red_metric_type.operation)
	|| is_set(red_mtype_flag.operation)
	|| is_set(red_tag.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Redistributions::Redistribution::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redistribution";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::Redistributions::Redistribution::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Redistribution' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_name.is_set || is_set(policy_name.operation)) leaf_name_data.push_back(policy_name.get_name_leafdata());
    if (process_id.is_set || is_set(process_id.operation)) leaf_name_data.push_back(process_id.get_name_leafdata());
    if (process_name.is_set || is_set(process_name.operation)) leaf_name_data.push_back(process_name.get_name_leafdata());
    if (protocol_name.is_set || is_set(protocol_name.operation)) leaf_name_data.push_back(protocol_name.get_name_leafdata());
    if (protocol_name_xr.is_set || is_set(protocol_name_xr.operation)) leaf_name_data.push_back(protocol_name_xr.get_name_leafdata());
    if (red_metric.is_set || is_set(red_metric.operation)) leaf_name_data.push_back(red_metric.get_name_leafdata());
    if (red_metric_flag.is_set || is_set(red_metric_flag.operation)) leaf_name_data.push_back(red_metric_flag.get_name_leafdata());
    if (red_metric_type.is_set || is_set(red_metric_type.operation)) leaf_name_data.push_back(red_metric_type.get_name_leafdata());
    if (red_mtype_flag.is_set || is_set(red_mtype_flag.operation)) leaf_name_data.push_back(red_mtype_flag.get_name_leafdata());
    if (red_tag.is_set || is_set(red_tag.operation)) leaf_name_data.push_back(red_tag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Redistributions::Redistribution::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::Redistributions::Redistribution::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Redistributions::Redistribution::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "policy-name")
    {
        policy_name = value;
    }
    if(value_path == "process-id")
    {
        process_id = value;
    }
    if(value_path == "process-name")
    {
        process_name = value;
    }
    if(value_path == "protocol-name")
    {
        protocol_name = value;
    }
    if(value_path == "protocol-name-xr")
    {
        protocol_name_xr = value;
    }
    if(value_path == "red-metric")
    {
        red_metric = value;
    }
    if(value_path == "red-metric-flag")
    {
        red_metric_flag = value;
    }
    if(value_path == "red-metric-type")
    {
        red_metric_type = value;
    }
    if(value_path == "red-mtype-flag")
    {
        red_mtype_flag = value;
    }
    if(value_path == "red-tag")
    {
        red_tag = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::ExternalRoutes::ExternalRoutes()
{
    yang_name = "external-routes"; yang_parent_name = "vrf";
}

Ospfv3::Processes::Process::Vrfs::Vrf::ExternalRoutes::~ExternalRoutes()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::ExternalRoutes::has_data() const
{
    for (std::size_t index=0; index<external_route.size(); index++)
    {
        if(external_route[index]->has_data())
            return true;
    }
    return false;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::ExternalRoutes::has_operation() const
{
    for (std::size_t index=0; index<external_route.size(); index++)
    {
        if(external_route[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::ExternalRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "external-routes";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::ExternalRoutes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExternalRoutes' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::ExternalRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "external-route")
    {
        for(auto const & c : external_route)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::ExternalRoutes::ExternalRoute>();
        c->parent = this;
        external_route.push_back(std::move(c));
        children[segment_path] = external_route.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::ExternalRoutes::get_children()
{
    for (auto const & c : external_route)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::ExternalRoutes::set_value(const std::string & value_path, std::string value)
{
}

Ospfv3::Processes::Process::Vrfs::Vrf::ExternalRoutes::ExternalRoute::ExternalRoute()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint8, "prefix-length"}
    	,
    route_extended_community(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::ExternalRoutes::ExternalRoute::RouteExtendedCommunity>())
	,route_topology(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::ExternalRoutes::ExternalRoute::RouteTopology>())
{
    route_extended_community->parent = this;
    children["route-extended-community"] = route_extended_community;

    route_topology->parent = this;
    children["route-topology"] = route_topology;

    yang_name = "external-route"; yang_parent_name = "external-routes";
}

Ospfv3::Processes::Process::Vrfs::Vrf::ExternalRoutes::ExternalRoute::~ExternalRoute()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::ExternalRoutes::ExternalRoute::has_data() const
{
    for (std::size_t index=0; index<route_path.size(); index++)
    {
        if(route_path[index]->has_data())
            return true;
    }
    return prefix.is_set
	|| prefix_length.is_set
	|| (route_extended_community !=  nullptr && route_extended_community->has_data())
	|| (route_topology !=  nullptr && route_topology->has_data());
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::ExternalRoutes::ExternalRoute::has_operation() const
{
    for (std::size_t index=0; index<route_path.size(); index++)
    {
        if(route_path[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(prefix.operation)
	|| is_set(prefix_length.operation)
	|| (route_extended_community !=  nullptr && route_extended_community->has_operation())
	|| (route_topology !=  nullptr && route_topology->has_operation());
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::ExternalRoutes::ExternalRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "external-route";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::ExternalRoutes::ExternalRoute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExternalRoute' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::ExternalRoutes::ExternalRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "route-extended-community")
    {
        if(route_extended_community != nullptr)
        {
            children["route-extended-community"] = route_extended_community;
        }
        else
        {
            route_extended_community = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::ExternalRoutes::ExternalRoute::RouteExtendedCommunity>();
            route_extended_community->parent = this;
            children["route-extended-community"] = route_extended_community;
        }
        return children.at("route-extended-community");
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
        auto c = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::ExternalRoutes::ExternalRoute::RoutePath>();
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
            route_topology = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::ExternalRoutes::ExternalRoute::RouteTopology>();
            route_topology->parent = this;
            children["route-topology"] = route_topology;
        }
        return children.at("route-topology");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::ExternalRoutes::ExternalRoute::get_children()
{
    if(children.find("route-extended-community") == children.end())
    {
        if(route_extended_community != nullptr)
        {
            children["route-extended-community"] = route_extended_community;
        }
    }

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

void Ospfv3::Processes::Process::Vrfs::Vrf::ExternalRoutes::ExternalRoute::set_value(const std::string & value_path, std::string value)
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

Ospfv3::Processes::Process::Vrfs::Vrf::ExternalRoutes::ExternalRoute::RouteTopology::RouteTopology()
    :
    route_cost{YType::uint32, "route-cost"},
    route_distance{YType::uint32, "route-distance"},
    route_id{YType::str, "route-id"},
    route_type{YType::uint32, "route-type"}
{
    yang_name = "route-topology"; yang_parent_name = "external-route";
}

Ospfv3::Processes::Process::Vrfs::Vrf::ExternalRoutes::ExternalRoute::RouteTopology::~RouteTopology()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::ExternalRoutes::ExternalRoute::RouteTopology::has_data() const
{
    return route_cost.is_set
	|| route_distance.is_set
	|| route_id.is_set
	|| route_type.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::ExternalRoutes::ExternalRoute::RouteTopology::has_operation() const
{
    return is_set(operation)
	|| is_set(route_cost.operation)
	|| is_set(route_distance.operation)
	|| is_set(route_id.operation)
	|| is_set(route_type.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::ExternalRoutes::ExternalRoute::RouteTopology::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-topology";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::ExternalRoutes::ExternalRoute::RouteTopology::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::ExternalRoutes::ExternalRoute::RouteTopology::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::ExternalRoutes::ExternalRoute::RouteTopology::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::ExternalRoutes::ExternalRoute::RouteTopology::set_value(const std::string & value_path, std::string value)
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

Ospfv3::Processes::Process::Vrfs::Vrf::ExternalRoutes::ExternalRoute::RouteExtendedCommunity::RouteExtendedCommunity()
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

Ospfv3::Processes::Process::Vrfs::Vrf::ExternalRoutes::ExternalRoute::RouteExtendedCommunity::~RouteExtendedCommunity()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::ExternalRoutes::ExternalRoute::RouteExtendedCommunity::has_data() const
{
    return extended_community_area_id.is_set
	|| extended_community_domain_id_value.is_set
	|| extended_community_options.is_set
	|| extended_community_route_type.is_set
	|| extended_community_router_id.is_set
	|| extended_communityl_domain_id_type.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::ExternalRoutes::ExternalRoute::RouteExtendedCommunity::has_operation() const
{
    return is_set(operation)
	|| is_set(extended_community_area_id.operation)
	|| is_set(extended_community_domain_id_value.operation)
	|| is_set(extended_community_options.operation)
	|| is_set(extended_community_route_type.operation)
	|| is_set(extended_community_router_id.operation)
	|| is_set(extended_communityl_domain_id_type.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::ExternalRoutes::ExternalRoute::RouteExtendedCommunity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-extended-community";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::ExternalRoutes::ExternalRoute::RouteExtendedCommunity::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouteExtendedCommunity' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::ExternalRoutes::ExternalRoute::RouteExtendedCommunity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::ExternalRoutes::ExternalRoute::RouteExtendedCommunity::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::ExternalRoutes::ExternalRoute::RouteExtendedCommunity::set_value(const std::string & value_path, std::string value)
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

Ospfv3::Processes::Process::Vrfs::Vrf::ExternalRoutes::ExternalRoute::RoutePath::RoutePath()
    :
    interface_name{YType::str, "interface-name"},
    route_path_id{YType::uint16, "route-path-id"},
    route_path_next_hop{YType::str, "route-path-next-hop"}
    	,
    route_backup_path(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::ExternalRoutes::ExternalRoute::RoutePath::RouteBackupPath>())
{
    route_backup_path->parent = this;
    children["route-backup-path"] = route_backup_path;

    yang_name = "route-path"; yang_parent_name = "external-route";
}

Ospfv3::Processes::Process::Vrfs::Vrf::ExternalRoutes::ExternalRoute::RoutePath::~RoutePath()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::ExternalRoutes::ExternalRoute::RoutePath::has_data() const
{
    return interface_name.is_set
	|| route_path_id.is_set
	|| route_path_next_hop.is_set
	|| (route_backup_path !=  nullptr && route_backup_path->has_data());
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::ExternalRoutes::ExternalRoute::RoutePath::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(route_path_id.operation)
	|| is_set(route_path_next_hop.operation)
	|| (route_backup_path !=  nullptr && route_backup_path->has_operation());
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::ExternalRoutes::ExternalRoute::RoutePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-path";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::ExternalRoutes::ExternalRoute::RoutePath::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::ExternalRoutes::ExternalRoute::RoutePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            route_backup_path = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::ExternalRoutes::ExternalRoute::RoutePath::RouteBackupPath>();
            route_backup_path->parent = this;
            children["route-backup-path"] = route_backup_path;
        }
        return children.at("route-backup-path");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::ExternalRoutes::ExternalRoute::RoutePath::get_children()
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

void Ospfv3::Processes::Process::Vrfs::Vrf::ExternalRoutes::ExternalRoute::RoutePath::set_value(const std::string & value_path, std::string value)
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

Ospfv3::Processes::Process::Vrfs::Vrf::ExternalRoutes::ExternalRoute::RoutePath::RouteBackupPath::RouteBackupPath()
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

Ospfv3::Processes::Process::Vrfs::Vrf::ExternalRoutes::ExternalRoute::RoutePath::RouteBackupPath::~RouteBackupPath()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::ExternalRoutes::ExternalRoute::RoutePath::RouteBackupPath::has_data() const
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

bool Ospfv3::Processes::Process::Vrfs::Vrf::ExternalRoutes::ExternalRoute::RoutePath::RouteBackupPath::has_operation() const
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

std::string Ospfv3::Processes::Process::Vrfs::Vrf::ExternalRoutes::ExternalRoute::RoutePath::RouteBackupPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-backup-path";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::ExternalRoutes::ExternalRoute::RoutePath::RouteBackupPath::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::ExternalRoutes::ExternalRoute::RoutePath::RouteBackupPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::ExternalRoutes::ExternalRoute::RoutePath::RouteBackupPath::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::ExternalRoutes::ExternalRoute::RoutePath::RouteBackupPath::set_value(const std::string & value_path, std::string value)
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

Ospfv3::Processes::Process::Vrfs::Vrf::RequestListProcessTable::RequestListProcessTable()
{
    yang_name = "request-list-process-table"; yang_parent_name = "vrf";
}

Ospfv3::Processes::Process::Vrfs::Vrf::RequestListProcessTable::~RequestListProcessTable()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::RequestListProcessTable::has_data() const
{
    for (std::size_t index=0; index<request.size(); index++)
    {
        if(request[index]->has_data())
            return true;
    }
    return false;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::RequestListProcessTable::has_operation() const
{
    for (std::size_t index=0; index<request.size(); index++)
    {
        if(request[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::RequestListProcessTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "request-list-process-table";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::RequestListProcessTable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RequestListProcessTable' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::RequestListProcessTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::RequestListProcessTable::Request>();
        c->parent = this;
        request.push_back(std::move(c));
        children[segment_path] = request.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::RequestListProcessTable::get_children()
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

void Ospfv3::Processes::Process::Vrfs::Vrf::RequestListProcessTable::set_value(const std::string & value_path, std::string value)
{
}

Ospfv3::Processes::Process::Vrfs::Vrf::RequestListProcessTable::Request::Request()
    :
    interface_name{YType::str, "interface-name"},
    is_request_sham_link{YType::boolean, "is-request-sham-link"},
    is_request_virtual_link{YType::boolean, "is-request-virtual-link"},
    neighbor_address{YType::str, "neighbor-address"},
    request_neighbor_address{YType::str, "request-neighbor-address"},
    request_sham_link_id{YType::uint32, "request-sham-link-id"},
    request_virtual_link_id{YType::uint32, "request-virtual-link-id"}
{
    yang_name = "request"; yang_parent_name = "request-list-process-table";
}

Ospfv3::Processes::Process::Vrfs::Vrf::RequestListProcessTable::Request::~Request()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::RequestListProcessTable::Request::has_data() const
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

bool Ospfv3::Processes::Process::Vrfs::Vrf::RequestListProcessTable::Request::has_operation() const
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

std::string Ospfv3::Processes::Process::Vrfs::Vrf::RequestListProcessTable::Request::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "request";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::RequestListProcessTable::Request::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::RequestListProcessTable::Request::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::RequestListProcessTable::Request::Request_>();
        c->parent = this;
        request.push_back(std::move(c));
        children[segment_path] = request.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::RequestListProcessTable::Request::get_children()
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

void Ospfv3::Processes::Process::Vrfs::Vrf::RequestListProcessTable::Request::set_value(const std::string & value_path, std::string value)
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

Ospfv3::Processes::Process::Vrfs::Vrf::RequestListProcessTable::Request::Request_::Request_()
    :
    header_advertising_router{YType::str, "header-advertising-router"},
    header_lsa_age{YType::uint16, "header-lsa-age"},
    header_lsa_id{YType::str, "header-lsa-id"},
    header_lsa_type{YType::enumeration, "header-lsa-type"},
    header_sequence_number{YType::int32, "header-sequence-number"}
{
    yang_name = "request"; yang_parent_name = "request";
}

Ospfv3::Processes::Process::Vrfs::Vrf::RequestListProcessTable::Request::Request_::~Request_()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::RequestListProcessTable::Request::Request_::has_data() const
{
    return header_advertising_router.is_set
	|| header_lsa_age.is_set
	|| header_lsa_id.is_set
	|| header_lsa_type.is_set
	|| header_sequence_number.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::RequestListProcessTable::Request::Request_::has_operation() const
{
    return is_set(operation)
	|| is_set(header_advertising_router.operation)
	|| is_set(header_lsa_age.operation)
	|| is_set(header_lsa_id.operation)
	|| is_set(header_lsa_type.operation)
	|| is_set(header_sequence_number.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::RequestListProcessTable::Request::Request_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "request";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::RequestListProcessTable::Request::Request_::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::RequestListProcessTable::Request::Request_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::RequestListProcessTable::Request::Request_::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::RequestListProcessTable::Request::Request_::set_value(const std::string & value_path, std::string value)
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

Ospfv3::Processes::Process::Vrfs::Vrf::VirtualLink::VirtualLink()
    :
    interface_name{YType::str, "interface-name"},
    is_virtual_link_authentication_enabled{YType::boolean, "is-virtual-link-authentication-enabled"},
    is_virtual_link_demand_circuit{YType::boolean, "is-virtual-link-demand-circuit"},
    is_virtual_link_encryption_enabled{YType::boolean, "is-virtual-link-encryption-enabled"},
    is_virtual_link_ip_security_active{YType::boolean, "is-virtual-link-ip-security-active"},
    is_virtual_link_ip_security_required{YType::boolean, "is-virtual-link-ip-security-required"},
    is_virtual_link_passive{YType::boolean, "is-virtual-link-passive"},
    transit_area_id{YType::str, "transit-area-id"},
    virtual_link_authentication_spi{YType::uint32, "virtual-link-authentication-spi"},
    virtual_link_authentication_transmit{YType::uint32, "virtual-link-authentication-transmit"},
    virtual_link_cost{YType::uint16, "virtual-link-cost"},
    virtual_link_dc_bitless_lsa{YType::uint32, "virtual-link-dc-bitless-lsa"},
    virtual_link_dead_interval{YType::uint32, "virtual-link-dead-interval"},
    virtual_link_encrypted_authentication_transmitted{YType::uint32, "virtual-link-encrypted-authentication-transmitted"},
    virtual_link_encryption_spi{YType::uint32, "virtual-link-encryption-spi"},
    virtual_link_encryption_transmitted{YType::uint32, "virtual-link-encryption-transmitted"},
    virtual_link_hello_interval{YType::uint32, "virtual-link-hello-interval"},
    virtual_link_interface_number{YType::uint32, "virtual-link-interface-number"},
    virtual_link_neighbor_address{YType::str, "virtual-link-neighbor-address"},
    virtual_link_neighbor_id{YType::str, "virtual-link-neighbor-id"},
    virtual_link_next_hello{YType::uint32, "virtual-link-next-hello"},
    virtual_link_retransmission_interval{YType::uint32, "virtual-link-retransmission-interval"},
    virtual_link_state{YType::enumeration, "virtual-link-state"},
    virtual_link_wait_interval{YType::uint32, "virtual-link-wait-interval"},
    virual_link_transmission_delay{YType::uint16, "virual-link-transmission-delay"}
    	,
    virtual_link_neighbor(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::VirtualLink::VirtualLinkNeighbor>())
{
    virtual_link_neighbor->parent = this;
    children["virtual-link-neighbor"] = virtual_link_neighbor;

    yang_name = "virtual-link"; yang_parent_name = "vrf";
}

Ospfv3::Processes::Process::Vrfs::Vrf::VirtualLink::~VirtualLink()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::VirtualLink::has_data() const
{
    return interface_name.is_set
	|| is_virtual_link_authentication_enabled.is_set
	|| is_virtual_link_demand_circuit.is_set
	|| is_virtual_link_encryption_enabled.is_set
	|| is_virtual_link_ip_security_active.is_set
	|| is_virtual_link_ip_security_required.is_set
	|| is_virtual_link_passive.is_set
	|| transit_area_id.is_set
	|| virtual_link_authentication_spi.is_set
	|| virtual_link_authentication_transmit.is_set
	|| virtual_link_cost.is_set
	|| virtual_link_dc_bitless_lsa.is_set
	|| virtual_link_dead_interval.is_set
	|| virtual_link_encrypted_authentication_transmitted.is_set
	|| virtual_link_encryption_spi.is_set
	|| virtual_link_encryption_transmitted.is_set
	|| virtual_link_hello_interval.is_set
	|| virtual_link_interface_number.is_set
	|| virtual_link_neighbor_address.is_set
	|| virtual_link_neighbor_id.is_set
	|| virtual_link_next_hello.is_set
	|| virtual_link_retransmission_interval.is_set
	|| virtual_link_state.is_set
	|| virtual_link_wait_interval.is_set
	|| virual_link_transmission_delay.is_set
	|| (virtual_link_neighbor !=  nullptr && virtual_link_neighbor->has_data());
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::VirtualLink::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(is_virtual_link_authentication_enabled.operation)
	|| is_set(is_virtual_link_demand_circuit.operation)
	|| is_set(is_virtual_link_encryption_enabled.operation)
	|| is_set(is_virtual_link_ip_security_active.operation)
	|| is_set(is_virtual_link_ip_security_required.operation)
	|| is_set(is_virtual_link_passive.operation)
	|| is_set(transit_area_id.operation)
	|| is_set(virtual_link_authentication_spi.operation)
	|| is_set(virtual_link_authentication_transmit.operation)
	|| is_set(virtual_link_cost.operation)
	|| is_set(virtual_link_dc_bitless_lsa.operation)
	|| is_set(virtual_link_dead_interval.operation)
	|| is_set(virtual_link_encrypted_authentication_transmitted.operation)
	|| is_set(virtual_link_encryption_spi.operation)
	|| is_set(virtual_link_encryption_transmitted.operation)
	|| is_set(virtual_link_hello_interval.operation)
	|| is_set(virtual_link_interface_number.operation)
	|| is_set(virtual_link_neighbor_address.operation)
	|| is_set(virtual_link_neighbor_id.operation)
	|| is_set(virtual_link_next_hello.operation)
	|| is_set(virtual_link_retransmission_interval.operation)
	|| is_set(virtual_link_state.operation)
	|| is_set(virtual_link_wait_interval.operation)
	|| is_set(virual_link_transmission_delay.operation)
	|| (virtual_link_neighbor !=  nullptr && virtual_link_neighbor->has_operation());
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::VirtualLink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "virtual-link";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::VirtualLink::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VirtualLink' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (is_virtual_link_authentication_enabled.is_set || is_set(is_virtual_link_authentication_enabled.operation)) leaf_name_data.push_back(is_virtual_link_authentication_enabled.get_name_leafdata());
    if (is_virtual_link_demand_circuit.is_set || is_set(is_virtual_link_demand_circuit.operation)) leaf_name_data.push_back(is_virtual_link_demand_circuit.get_name_leafdata());
    if (is_virtual_link_encryption_enabled.is_set || is_set(is_virtual_link_encryption_enabled.operation)) leaf_name_data.push_back(is_virtual_link_encryption_enabled.get_name_leafdata());
    if (is_virtual_link_ip_security_active.is_set || is_set(is_virtual_link_ip_security_active.operation)) leaf_name_data.push_back(is_virtual_link_ip_security_active.get_name_leafdata());
    if (is_virtual_link_ip_security_required.is_set || is_set(is_virtual_link_ip_security_required.operation)) leaf_name_data.push_back(is_virtual_link_ip_security_required.get_name_leafdata());
    if (is_virtual_link_passive.is_set || is_set(is_virtual_link_passive.operation)) leaf_name_data.push_back(is_virtual_link_passive.get_name_leafdata());
    if (transit_area_id.is_set || is_set(transit_area_id.operation)) leaf_name_data.push_back(transit_area_id.get_name_leafdata());
    if (virtual_link_authentication_spi.is_set || is_set(virtual_link_authentication_spi.operation)) leaf_name_data.push_back(virtual_link_authentication_spi.get_name_leafdata());
    if (virtual_link_authentication_transmit.is_set || is_set(virtual_link_authentication_transmit.operation)) leaf_name_data.push_back(virtual_link_authentication_transmit.get_name_leafdata());
    if (virtual_link_cost.is_set || is_set(virtual_link_cost.operation)) leaf_name_data.push_back(virtual_link_cost.get_name_leafdata());
    if (virtual_link_dc_bitless_lsa.is_set || is_set(virtual_link_dc_bitless_lsa.operation)) leaf_name_data.push_back(virtual_link_dc_bitless_lsa.get_name_leafdata());
    if (virtual_link_dead_interval.is_set || is_set(virtual_link_dead_interval.operation)) leaf_name_data.push_back(virtual_link_dead_interval.get_name_leafdata());
    if (virtual_link_encrypted_authentication_transmitted.is_set || is_set(virtual_link_encrypted_authentication_transmitted.operation)) leaf_name_data.push_back(virtual_link_encrypted_authentication_transmitted.get_name_leafdata());
    if (virtual_link_encryption_spi.is_set || is_set(virtual_link_encryption_spi.operation)) leaf_name_data.push_back(virtual_link_encryption_spi.get_name_leafdata());
    if (virtual_link_encryption_transmitted.is_set || is_set(virtual_link_encryption_transmitted.operation)) leaf_name_data.push_back(virtual_link_encryption_transmitted.get_name_leafdata());
    if (virtual_link_hello_interval.is_set || is_set(virtual_link_hello_interval.operation)) leaf_name_data.push_back(virtual_link_hello_interval.get_name_leafdata());
    if (virtual_link_interface_number.is_set || is_set(virtual_link_interface_number.operation)) leaf_name_data.push_back(virtual_link_interface_number.get_name_leafdata());
    if (virtual_link_neighbor_address.is_set || is_set(virtual_link_neighbor_address.operation)) leaf_name_data.push_back(virtual_link_neighbor_address.get_name_leafdata());
    if (virtual_link_neighbor_id.is_set || is_set(virtual_link_neighbor_id.operation)) leaf_name_data.push_back(virtual_link_neighbor_id.get_name_leafdata());
    if (virtual_link_next_hello.is_set || is_set(virtual_link_next_hello.operation)) leaf_name_data.push_back(virtual_link_next_hello.get_name_leafdata());
    if (virtual_link_retransmission_interval.is_set || is_set(virtual_link_retransmission_interval.operation)) leaf_name_data.push_back(virtual_link_retransmission_interval.get_name_leafdata());
    if (virtual_link_state.is_set || is_set(virtual_link_state.operation)) leaf_name_data.push_back(virtual_link_state.get_name_leafdata());
    if (virtual_link_wait_interval.is_set || is_set(virtual_link_wait_interval.operation)) leaf_name_data.push_back(virtual_link_wait_interval.get_name_leafdata());
    if (virual_link_transmission_delay.is_set || is_set(virual_link_transmission_delay.operation)) leaf_name_data.push_back(virual_link_transmission_delay.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::VirtualLink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "virtual-link-neighbor")
    {
        if(virtual_link_neighbor != nullptr)
        {
            children["virtual-link-neighbor"] = virtual_link_neighbor;
        }
        else
        {
            virtual_link_neighbor = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::VirtualLink::VirtualLinkNeighbor>();
            virtual_link_neighbor->parent = this;
            children["virtual-link-neighbor"] = virtual_link_neighbor;
        }
        return children.at("virtual-link-neighbor");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::VirtualLink::get_children()
{
    if(children.find("virtual-link-neighbor") == children.end())
    {
        if(virtual_link_neighbor != nullptr)
        {
            children["virtual-link-neighbor"] = virtual_link_neighbor;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::VirtualLink::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "is-virtual-link-authentication-enabled")
    {
        is_virtual_link_authentication_enabled = value;
    }
    if(value_path == "is-virtual-link-demand-circuit")
    {
        is_virtual_link_demand_circuit = value;
    }
    if(value_path == "is-virtual-link-encryption-enabled")
    {
        is_virtual_link_encryption_enabled = value;
    }
    if(value_path == "is-virtual-link-ip-security-active")
    {
        is_virtual_link_ip_security_active = value;
    }
    if(value_path == "is-virtual-link-ip-security-required")
    {
        is_virtual_link_ip_security_required = value;
    }
    if(value_path == "is-virtual-link-passive")
    {
        is_virtual_link_passive = value;
    }
    if(value_path == "transit-area-id")
    {
        transit_area_id = value;
    }
    if(value_path == "virtual-link-authentication-spi")
    {
        virtual_link_authentication_spi = value;
    }
    if(value_path == "virtual-link-authentication-transmit")
    {
        virtual_link_authentication_transmit = value;
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
    if(value_path == "virtual-link-encrypted-authentication-transmitted")
    {
        virtual_link_encrypted_authentication_transmitted = value;
    }
    if(value_path == "virtual-link-encryption-spi")
    {
        virtual_link_encryption_spi = value;
    }
    if(value_path == "virtual-link-encryption-transmitted")
    {
        virtual_link_encryption_transmitted = value;
    }
    if(value_path == "virtual-link-hello-interval")
    {
        virtual_link_hello_interval = value;
    }
    if(value_path == "virtual-link-interface-number")
    {
        virtual_link_interface_number = value;
    }
    if(value_path == "virtual-link-neighbor-address")
    {
        virtual_link_neighbor_address = value;
    }
    if(value_path == "virtual-link-neighbor-id")
    {
        virtual_link_neighbor_id = value;
    }
    if(value_path == "virtual-link-next-hello")
    {
        virtual_link_next_hello = value;
    }
    if(value_path == "virtual-link-retransmission-interval")
    {
        virtual_link_retransmission_interval = value;
    }
    if(value_path == "virtual-link-state")
    {
        virtual_link_state = value;
    }
    if(value_path == "virtual-link-wait-interval")
    {
        virtual_link_wait_interval = value;
    }
    if(value_path == "virual-link-transmission-delay")
    {
        virual_link_transmission_delay = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::VirtualLink::VirtualLinkNeighbor::VirtualLinkNeighbor()
    :
    is_virtual_link_hello_suppressed{YType::boolean, "is-virtual-link-hello-suppressed"},
    virtual_link_state{YType::enumeration, "virtual-link-state"}
    	,
    virtual_link_retransmission(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::VirtualLink::VirtualLinkNeighbor::VirtualLinkRetransmission>())
{
    virtual_link_retransmission->parent = this;
    children["virtual-link-retransmission"] = virtual_link_retransmission;

    yang_name = "virtual-link-neighbor"; yang_parent_name = "virtual-link";
}

Ospfv3::Processes::Process::Vrfs::Vrf::VirtualLink::VirtualLinkNeighbor::~VirtualLinkNeighbor()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::VirtualLink::VirtualLinkNeighbor::has_data() const
{
    return is_virtual_link_hello_suppressed.is_set
	|| virtual_link_state.is_set
	|| (virtual_link_retransmission !=  nullptr && virtual_link_retransmission->has_data());
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::VirtualLink::VirtualLinkNeighbor::has_operation() const
{
    return is_set(operation)
	|| is_set(is_virtual_link_hello_suppressed.operation)
	|| is_set(virtual_link_state.operation)
	|| (virtual_link_retransmission !=  nullptr && virtual_link_retransmission->has_operation());
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::VirtualLink::VirtualLinkNeighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "virtual-link-neighbor";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::VirtualLink::VirtualLinkNeighbor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VirtualLinkNeighbor' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_virtual_link_hello_suppressed.is_set || is_set(is_virtual_link_hello_suppressed.operation)) leaf_name_data.push_back(is_virtual_link_hello_suppressed.get_name_leafdata());
    if (virtual_link_state.is_set || is_set(virtual_link_state.operation)) leaf_name_data.push_back(virtual_link_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::VirtualLink::VirtualLinkNeighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "virtual-link-retransmission")
    {
        if(virtual_link_retransmission != nullptr)
        {
            children["virtual-link-retransmission"] = virtual_link_retransmission;
        }
        else
        {
            virtual_link_retransmission = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::VirtualLink::VirtualLinkNeighbor::VirtualLinkRetransmission>();
            virtual_link_retransmission->parent = this;
            children["virtual-link-retransmission"] = virtual_link_retransmission;
        }
        return children.at("virtual-link-retransmission");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::VirtualLink::VirtualLinkNeighbor::get_children()
{
    if(children.find("virtual-link-retransmission") == children.end())
    {
        if(virtual_link_retransmission != nullptr)
        {
            children["virtual-link-retransmission"] = virtual_link_retransmission;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::VirtualLink::VirtualLinkNeighbor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-virtual-link-hello-suppressed")
    {
        is_virtual_link_hello_suppressed = value;
    }
    if(value_path == "virtual-link-state")
    {
        virtual_link_state = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::VirtualLink::VirtualLinkNeighbor::VirtualLinkRetransmission::VirtualLinkRetransmission()
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
    yang_name = "virtual-link-retransmission"; yang_parent_name = "virtual-link-neighbor";
}

Ospfv3::Processes::Process::Vrfs::Vrf::VirtualLink::VirtualLinkNeighbor::VirtualLinkRetransmission::~VirtualLinkRetransmission()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::VirtualLink::VirtualLinkNeighbor::VirtualLinkRetransmission::has_data() const
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

bool Ospfv3::Processes::Process::Vrfs::Vrf::VirtualLink::VirtualLinkNeighbor::VirtualLinkRetransmission::has_operation() const
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

std::string Ospfv3::Processes::Process::Vrfs::Vrf::VirtualLink::VirtualLinkNeighbor::VirtualLinkRetransmission::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "virtual-link-retransmission";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::VirtualLink::VirtualLinkNeighbor::VirtualLinkRetransmission::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VirtualLinkRetransmission' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::VirtualLink::VirtualLinkNeighbor::VirtualLinkRetransmission::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::VirtualLink::VirtualLinkNeighbor::VirtualLinkRetransmission::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::VirtualLink::VirtualLinkNeighbor::VirtualLinkRetransmission::set_value(const std::string & value_path, std::string value)
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

Ospfv3::Processes::Process::Vrfs::Vrf::FloodListProcessTable::FloodListProcessTable()
{
    yang_name = "flood-list-process-table"; yang_parent_name = "vrf";
}

Ospfv3::Processes::Process::Vrfs::Vrf::FloodListProcessTable::~FloodListProcessTable()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::FloodListProcessTable::has_data() const
{
    for (std::size_t index=0; index<flood.size(); index++)
    {
        if(flood[index]->has_data())
            return true;
    }
    return false;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::FloodListProcessTable::has_operation() const
{
    for (std::size_t index=0; index<flood.size(); index++)
    {
        if(flood[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::FloodListProcessTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flood-list-process-table";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::FloodListProcessTable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FloodListProcessTable' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::FloodListProcessTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::FloodListProcessTable::Flood>();
        c->parent = this;
        flood.push_back(std::move(c));
        children[segment_path] = flood.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::FloodListProcessTable::get_children()
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

void Ospfv3::Processes::Process::Vrfs::Vrf::FloodListProcessTable::set_value(const std::string & value_path, std::string value)
{
}

Ospfv3::Processes::Process::Vrfs::Vrf::FloodListProcessTable::Flood::Flood()
    :
    interface_name{YType::str, "interface-name"},
    ls_transmission_timer{YType::uint32, "ls-transmission-timer"},
    queue_length{YType::uint32, "queue-length"}
{
    yang_name = "flood"; yang_parent_name = "flood-list-process-table";
}

Ospfv3::Processes::Process::Vrfs::Vrf::FloodListProcessTable::Flood::~Flood()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::FloodListProcessTable::Flood::has_data() const
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

bool Ospfv3::Processes::Process::Vrfs::Vrf::FloodListProcessTable::Flood::has_operation() const
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

std::string Ospfv3::Processes::Process::Vrfs::Vrf::FloodListProcessTable::Flood::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flood" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::FloodListProcessTable::Flood::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::FloodListProcessTable::Flood::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::FloodListProcessTable::Flood::AreaFlood>();
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
        auto c = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::FloodListProcessTable::Flood::AsFlood>();
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
        auto c = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::FloodListProcessTable::Flood::LinkFlood>();
        c->parent = this;
        link_flood.push_back(std::move(c));
        children[segment_path] = link_flood.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::FloodListProcessTable::Flood::get_children()
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

void Ospfv3::Processes::Process::Vrfs::Vrf::FloodListProcessTable::Flood::set_value(const std::string & value_path, std::string value)
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

Ospfv3::Processes::Process::Vrfs::Vrf::FloodListProcessTable::Flood::LinkFlood::LinkFlood()
    :
    header_advertising_router{YType::str, "header-advertising-router"},
    header_lsa_age{YType::uint16, "header-lsa-age"},
    header_lsa_id{YType::str, "header-lsa-id"},
    header_lsa_type{YType::enumeration, "header-lsa-type"},
    header_sequence_number{YType::int32, "header-sequence-number"}
{
    yang_name = "link-flood"; yang_parent_name = "flood";
}

Ospfv3::Processes::Process::Vrfs::Vrf::FloodListProcessTable::Flood::LinkFlood::~LinkFlood()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::FloodListProcessTable::Flood::LinkFlood::has_data() const
{
    return header_advertising_router.is_set
	|| header_lsa_age.is_set
	|| header_lsa_id.is_set
	|| header_lsa_type.is_set
	|| header_sequence_number.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::FloodListProcessTable::Flood::LinkFlood::has_operation() const
{
    return is_set(operation)
	|| is_set(header_advertising_router.operation)
	|| is_set(header_lsa_age.operation)
	|| is_set(header_lsa_id.operation)
	|| is_set(header_lsa_type.operation)
	|| is_set(header_sequence_number.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::FloodListProcessTable::Flood::LinkFlood::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-flood";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::FloodListProcessTable::Flood::LinkFlood::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::FloodListProcessTable::Flood::LinkFlood::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::FloodListProcessTable::Flood::LinkFlood::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::FloodListProcessTable::Flood::LinkFlood::set_value(const std::string & value_path, std::string value)
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

Ospfv3::Processes::Process::Vrfs::Vrf::FloodListProcessTable::Flood::AreaFlood::AreaFlood()
    :
    header_advertising_router{YType::str, "header-advertising-router"},
    header_lsa_age{YType::uint16, "header-lsa-age"},
    header_lsa_id{YType::str, "header-lsa-id"},
    header_lsa_type{YType::enumeration, "header-lsa-type"},
    header_sequence_number{YType::int32, "header-sequence-number"}
{
    yang_name = "area-flood"; yang_parent_name = "flood";
}

Ospfv3::Processes::Process::Vrfs::Vrf::FloodListProcessTable::Flood::AreaFlood::~AreaFlood()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::FloodListProcessTable::Flood::AreaFlood::has_data() const
{
    return header_advertising_router.is_set
	|| header_lsa_age.is_set
	|| header_lsa_id.is_set
	|| header_lsa_type.is_set
	|| header_sequence_number.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::FloodListProcessTable::Flood::AreaFlood::has_operation() const
{
    return is_set(operation)
	|| is_set(header_advertising_router.operation)
	|| is_set(header_lsa_age.operation)
	|| is_set(header_lsa_id.operation)
	|| is_set(header_lsa_type.operation)
	|| is_set(header_sequence_number.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::FloodListProcessTable::Flood::AreaFlood::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "area-flood";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::FloodListProcessTable::Flood::AreaFlood::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::FloodListProcessTable::Flood::AreaFlood::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::FloodListProcessTable::Flood::AreaFlood::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::FloodListProcessTable::Flood::AreaFlood::set_value(const std::string & value_path, std::string value)
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

Ospfv3::Processes::Process::Vrfs::Vrf::FloodListProcessTable::Flood::AsFlood::AsFlood()
    :
    header_advertising_router{YType::str, "header-advertising-router"},
    header_lsa_age{YType::uint16, "header-lsa-age"},
    header_lsa_id{YType::str, "header-lsa-id"},
    header_lsa_type{YType::enumeration, "header-lsa-type"},
    header_sequence_number{YType::int32, "header-sequence-number"}
{
    yang_name = "as-flood"; yang_parent_name = "flood";
}

Ospfv3::Processes::Process::Vrfs::Vrf::FloodListProcessTable::Flood::AsFlood::~AsFlood()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::FloodListProcessTable::Flood::AsFlood::has_data() const
{
    return header_advertising_router.is_set
	|| header_lsa_age.is_set
	|| header_lsa_id.is_set
	|| header_lsa_type.is_set
	|| header_sequence_number.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::FloodListProcessTable::Flood::AsFlood::has_operation() const
{
    return is_set(operation)
	|| is_set(header_advertising_router.operation)
	|| is_set(header_lsa_age.operation)
	|| is_set(header_lsa_id.operation)
	|| is_set(header_lsa_type.operation)
	|| is_set(header_sequence_number.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::FloodListProcessTable::Flood::AsFlood::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "as-flood";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::FloodListProcessTable::Flood::AsFlood::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::FloodListProcessTable::Flood::AsFlood::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::FloodListProcessTable::Flood::AsFlood::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::FloodListProcessTable::Flood::AsFlood::set_value(const std::string & value_path, std::string value)
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

Ospfv3::Processes::Process::Vrfs::Vrf::RouteSummary::RouteSummary()
    :
    extern_one_route{YType::uint32, "extern-one-route"},
    extern_two_route{YType::uint32, "extern-two-route"},
    inter_area_route{YType::uint32, "inter-area-route"},
    intra_area_route{YType::uint32, "intra-area-route"},
    nssa_one_route{YType::uint32, "nssa-one-route"},
    nssa_two_route{YType::uint32, "nssa-two-route"},
    redistribution_route{YType::uint32, "redistribution-route"},
    route_connected{YType::uint32, "route-connected"},
    route_id{YType::str, "route-id"},
    total_received_route{YType::uint32, "total-received-route"},
    total_sent_route{YType::uint32, "total-sent-route"}
{
    yang_name = "route-summary"; yang_parent_name = "vrf";
}

Ospfv3::Processes::Process::Vrfs::Vrf::RouteSummary::~RouteSummary()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::RouteSummary::has_data() const
{
    return extern_one_route.is_set
	|| extern_two_route.is_set
	|| inter_area_route.is_set
	|| intra_area_route.is_set
	|| nssa_one_route.is_set
	|| nssa_two_route.is_set
	|| redistribution_route.is_set
	|| route_connected.is_set
	|| route_id.is_set
	|| total_received_route.is_set
	|| total_sent_route.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::RouteSummary::has_operation() const
{
    return is_set(operation)
	|| is_set(extern_one_route.operation)
	|| is_set(extern_two_route.operation)
	|| is_set(inter_area_route.operation)
	|| is_set(intra_area_route.operation)
	|| is_set(nssa_one_route.operation)
	|| is_set(nssa_two_route.operation)
	|| is_set(redistribution_route.operation)
	|| is_set(route_connected.operation)
	|| is_set(route_id.operation)
	|| is_set(total_received_route.operation)
	|| is_set(total_sent_route.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::RouteSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-summary";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::RouteSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouteSummary' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (extern_one_route.is_set || is_set(extern_one_route.operation)) leaf_name_data.push_back(extern_one_route.get_name_leafdata());
    if (extern_two_route.is_set || is_set(extern_two_route.operation)) leaf_name_data.push_back(extern_two_route.get_name_leafdata());
    if (inter_area_route.is_set || is_set(inter_area_route.operation)) leaf_name_data.push_back(inter_area_route.get_name_leafdata());
    if (intra_area_route.is_set || is_set(intra_area_route.operation)) leaf_name_data.push_back(intra_area_route.get_name_leafdata());
    if (nssa_one_route.is_set || is_set(nssa_one_route.operation)) leaf_name_data.push_back(nssa_one_route.get_name_leafdata());
    if (nssa_two_route.is_set || is_set(nssa_two_route.operation)) leaf_name_data.push_back(nssa_two_route.get_name_leafdata());
    if (redistribution_route.is_set || is_set(redistribution_route.operation)) leaf_name_data.push_back(redistribution_route.get_name_leafdata());
    if (route_connected.is_set || is_set(route_connected.operation)) leaf_name_data.push_back(route_connected.get_name_leafdata());
    if (route_id.is_set || is_set(route_id.operation)) leaf_name_data.push_back(route_id.get_name_leafdata());
    if (total_received_route.is_set || is_set(total_received_route.operation)) leaf_name_data.push_back(total_received_route.get_name_leafdata());
    if (total_sent_route.is_set || is_set(total_sent_route.operation)) leaf_name_data.push_back(total_sent_route.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::RouteSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::RouteSummary::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::RouteSummary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "extern-one-route")
    {
        extern_one_route = value;
    }
    if(value_path == "extern-two-route")
    {
        extern_two_route = value;
    }
    if(value_path == "inter-area-route")
    {
        inter_area_route = value;
    }
    if(value_path == "intra-area-route")
    {
        intra_area_route = value;
    }
    if(value_path == "nssa-one-route")
    {
        nssa_one_route = value;
    }
    if(value_path == "nssa-two-route")
    {
        nssa_two_route = value;
    }
    if(value_path == "redistribution-route")
    {
        redistribution_route = value;
    }
    if(value_path == "route-connected")
    {
        route_connected = value;
    }
    if(value_path == "route-id")
    {
        route_id = value;
    }
    if(value_path == "total-received-route")
    {
        total_received_route = value;
    }
    if(value_path == "total-sent-route")
    {
        total_sent_route = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Areas()
{
    yang_name = "areas"; yang_parent_name = "vrf";
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::~Areas()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::has_data() const
{
    for (std::size_t index=0; index<area.size(); index++)
    {
        if(area[index]->has_data())
            return true;
    }
    return false;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::has_operation() const
{
    for (std::size_t index=0; index<area.size(); index++)
    {
        if(area[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Areas::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "areas";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::Areas::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Areas' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Areas::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "area")
    {
        for(auto const & c : area)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area>();
        c->parent = this;
        area.push_back(std::move(c));
        children[segment_path] = area.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::Areas::get_children()
{
    for (auto const & c : area)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Areas::set_value(const std::string & value_path, std::string value)
{
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::Area()
    :
    area_id{YType::int32, "area-id"}
    	,
    database_summary_table(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseSummaryTable>())
	,database_table(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable>())
	,flood_list_table(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListTable>())
	,interface_brief_table(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceBriefTable>())
	,interface_table(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceTable>())
	,neighbor_detail_table(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetailTable>())
	,neighbor_table(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborTable>())
	,request_list_table(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::RequestListTable>())
	,retransmission_list_table(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::RetransmissionListTable>())
{
    database_summary_table->parent = this;
    children["database-summary-table"] = database_summary_table;

    database_table->parent = this;
    children["database-table"] = database_table;

    flood_list_table->parent = this;
    children["flood-list-table"] = flood_list_table;

    interface_brief_table->parent = this;
    children["interface-brief-table"] = interface_brief_table;

    interface_table->parent = this;
    children["interface-table"] = interface_table;

    neighbor_detail_table->parent = this;
    children["neighbor-detail-table"] = neighbor_detail_table;

    neighbor_table->parent = this;
    children["neighbor-table"] = neighbor_table;

    request_list_table->parent = this;
    children["request-list-table"] = request_list_table;

    retransmission_list_table->parent = this;
    children["retransmission-list-table"] = retransmission_list_table;

    yang_name = "area"; yang_parent_name = "areas";
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::~Area()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::has_data() const
{
    return area_id.is_set
	|| (database_summary_table !=  nullptr && database_summary_table->has_data())
	|| (database_table !=  nullptr && database_table->has_data())
	|| (flood_list_table !=  nullptr && flood_list_table->has_data())
	|| (interface_brief_table !=  nullptr && interface_brief_table->has_data())
	|| (interface_table !=  nullptr && interface_table->has_data())
	|| (neighbor_detail_table !=  nullptr && neighbor_detail_table->has_data())
	|| (neighbor_table !=  nullptr && neighbor_table->has_data())
	|| (request_list_table !=  nullptr && request_list_table->has_data())
	|| (retransmission_list_table !=  nullptr && retransmission_list_table->has_data());
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::has_operation() const
{
    return is_set(operation)
	|| is_set(area_id.operation)
	|| (database_summary_table !=  nullptr && database_summary_table->has_operation())
	|| (database_table !=  nullptr && database_table->has_operation())
	|| (flood_list_table !=  nullptr && flood_list_table->has_operation())
	|| (interface_brief_table !=  nullptr && interface_brief_table->has_operation())
	|| (interface_table !=  nullptr && interface_table->has_operation())
	|| (neighbor_detail_table !=  nullptr && neighbor_detail_table->has_operation())
	|| (neighbor_table !=  nullptr && neighbor_table->has_operation())
	|| (request_list_table !=  nullptr && request_list_table->has_operation())
	|| (retransmission_list_table !=  nullptr && retransmission_list_table->has_operation());
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "area" <<"[area-id='" <<area_id <<"']";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Area' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "database-summary-table")
    {
        if(database_summary_table != nullptr)
        {
            children["database-summary-table"] = database_summary_table;
        }
        else
        {
            database_summary_table = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseSummaryTable>();
            database_summary_table->parent = this;
            children["database-summary-table"] = database_summary_table;
        }
        return children.at("database-summary-table");
    }

    if(child_yang_name == "database-table")
    {
        if(database_table != nullptr)
        {
            children["database-table"] = database_table;
        }
        else
        {
            database_table = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable>();
            database_table->parent = this;
            children["database-table"] = database_table;
        }
        return children.at("database-table");
    }

    if(child_yang_name == "flood-list-table")
    {
        if(flood_list_table != nullptr)
        {
            children["flood-list-table"] = flood_list_table;
        }
        else
        {
            flood_list_table = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListTable>();
            flood_list_table->parent = this;
            children["flood-list-table"] = flood_list_table;
        }
        return children.at("flood-list-table");
    }

    if(child_yang_name == "interface-brief-table")
    {
        if(interface_brief_table != nullptr)
        {
            children["interface-brief-table"] = interface_brief_table;
        }
        else
        {
            interface_brief_table = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceBriefTable>();
            interface_brief_table->parent = this;
            children["interface-brief-table"] = interface_brief_table;
        }
        return children.at("interface-brief-table");
    }

    if(child_yang_name == "interface-table")
    {
        if(interface_table != nullptr)
        {
            children["interface-table"] = interface_table;
        }
        else
        {
            interface_table = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceTable>();
            interface_table->parent = this;
            children["interface-table"] = interface_table;
        }
        return children.at("interface-table");
    }

    if(child_yang_name == "neighbor-detail-table")
    {
        if(neighbor_detail_table != nullptr)
        {
            children["neighbor-detail-table"] = neighbor_detail_table;
        }
        else
        {
            neighbor_detail_table = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetailTable>();
            neighbor_detail_table->parent = this;
            children["neighbor-detail-table"] = neighbor_detail_table;
        }
        return children.at("neighbor-detail-table");
    }

    if(child_yang_name == "neighbor-table")
    {
        if(neighbor_table != nullptr)
        {
            children["neighbor-table"] = neighbor_table;
        }
        else
        {
            neighbor_table = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborTable>();
            neighbor_table->parent = this;
            children["neighbor-table"] = neighbor_table;
        }
        return children.at("neighbor-table");
    }

    if(child_yang_name == "request-list-table")
    {
        if(request_list_table != nullptr)
        {
            children["request-list-table"] = request_list_table;
        }
        else
        {
            request_list_table = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::RequestListTable>();
            request_list_table->parent = this;
            children["request-list-table"] = request_list_table;
        }
        return children.at("request-list-table");
    }

    if(child_yang_name == "retransmission-list-table")
    {
        if(retransmission_list_table != nullptr)
        {
            children["retransmission-list-table"] = retransmission_list_table;
        }
        else
        {
            retransmission_list_table = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::RetransmissionListTable>();
            retransmission_list_table->parent = this;
            children["retransmission-list-table"] = retransmission_list_table;
        }
        return children.at("retransmission-list-table");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::get_children()
{
    if(children.find("database-summary-table") == children.end())
    {
        if(database_summary_table != nullptr)
        {
            children["database-summary-table"] = database_summary_table;
        }
    }

    if(children.find("database-table") == children.end())
    {
        if(database_table != nullptr)
        {
            children["database-table"] = database_table;
        }
    }

    if(children.find("flood-list-table") == children.end())
    {
        if(flood_list_table != nullptr)
        {
            children["flood-list-table"] = flood_list_table;
        }
    }

    if(children.find("interface-brief-table") == children.end())
    {
        if(interface_brief_table != nullptr)
        {
            children["interface-brief-table"] = interface_brief_table;
        }
    }

    if(children.find("interface-table") == children.end())
    {
        if(interface_table != nullptr)
        {
            children["interface-table"] = interface_table;
        }
    }

    if(children.find("neighbor-detail-table") == children.end())
    {
        if(neighbor_detail_table != nullptr)
        {
            children["neighbor-detail-table"] = neighbor_detail_table;
        }
    }

    if(children.find("neighbor-table") == children.end())
    {
        if(neighbor_table != nullptr)
        {
            children["neighbor-table"] = neighbor_table;
        }
    }

    if(children.find("request-list-table") == children.end())
    {
        if(request_list_table != nullptr)
        {
            children["request-list-table"] = request_list_table;
        }
    }

    if(children.find("retransmission-list-table") == children.end())
    {
        if(retransmission_list_table != nullptr)
        {
            children["retransmission-list-table"] = retransmission_list_table;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "area-id")
    {
        area_id = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetailTable::NeighborDetailTable()
{
    yang_name = "neighbor-detail-table"; yang_parent_name = "area";
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetailTable::~NeighborDetailTable()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetailTable::has_data() const
{
    for (std::size_t index=0; index<neighbor_detail.size(); index++)
    {
        if(neighbor_detail[index]->has_data())
            return true;
    }
    return false;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetailTable::has_operation() const
{
    for (std::size_t index=0; index<neighbor_detail.size(); index++)
    {
        if(neighbor_detail[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetailTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-detail-table";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetailTable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NeighborDetailTable' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetailTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "neighbor-detail")
    {
        for(auto const & c : neighbor_detail)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetailTable::NeighborDetail>();
        c->parent = this;
        neighbor_detail.push_back(std::move(c));
        children[segment_path] = neighbor_detail.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetailTable::get_children()
{
    for (auto const & c : neighbor_detail)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetailTable::set_value(const std::string & value_path, std::string value)
{
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetailTable::NeighborDetail::NeighborDetail()
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
    neighbor_bfd_info(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetailTable::NeighborDetail::NeighborBfdInfo>())
	,neighbor_detail(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetailTable::NeighborDetail::NeighborDetail_>())
{
    neighbor_bfd_info->parent = this;
    children["neighbor-bfd-info"] = neighbor_bfd_info;

    neighbor_detail->parent = this;
    children["neighbor-detail"] = neighbor_detail;

    yang_name = "neighbor-detail"; yang_parent_name = "neighbor-detail-table";
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetailTable::NeighborDetail::~NeighborDetail()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetailTable::NeighborDetail::has_data() const
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

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetailTable::NeighborDetail::has_operation() const
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

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetailTable::NeighborDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-detail";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetailTable::NeighborDetail::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetailTable::NeighborDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            neighbor_bfd_info = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetailTable::NeighborDetail::NeighborBfdInfo>();
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
            neighbor_detail = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetailTable::NeighborDetail::NeighborDetail_>();
            neighbor_detail->parent = this;
            children["neighbor-detail"] = neighbor_detail;
        }
        return children.at("neighbor-detail");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetailTable::NeighborDetail::get_children()
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

void Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetailTable::NeighborDetail::set_value(const std::string & value_path, std::string value)
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

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetailTable::NeighborDetail::NeighborDetail_::NeighborDetail_()
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
    neighbor_retransmission(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetailTable::NeighborDetail::NeighborDetail_::NeighborRetransmission>())
{
    neighbor_retransmission->parent = this;
    children["neighbor-retransmission"] = neighbor_retransmission;

    yang_name = "neighbor-detail"; yang_parent_name = "neighbor-detail";
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetailTable::NeighborDetail::NeighborDetail_::~NeighborDetail_()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetailTable::NeighborDetail::NeighborDetail_::has_data() const
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

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetailTable::NeighborDetail::NeighborDetail_::has_operation() const
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

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetailTable::NeighborDetail::NeighborDetail_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-detail";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetailTable::NeighborDetail::NeighborDetail_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NeighborDetail_' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetailTable::NeighborDetail::NeighborDetail_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            neighbor_retransmission = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetailTable::NeighborDetail::NeighborDetail_::NeighborRetransmission>();
            neighbor_retransmission->parent = this;
            children["neighbor-retransmission"] = neighbor_retransmission;
        }
        return children.at("neighbor-retransmission");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetailTable::NeighborDetail::NeighborDetail_::get_children()
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

void Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetailTable::NeighborDetail::NeighborDetail_::set_value(const std::string & value_path, std::string value)
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

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetailTable::NeighborDetail::NeighborDetail_::NeighborRetransmission::NeighborRetransmission()
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

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetailTable::NeighborDetail::NeighborDetail_::NeighborRetransmission::~NeighborRetransmission()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetailTable::NeighborDetail::NeighborDetail_::NeighborRetransmission::has_data() const
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

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetailTable::NeighborDetail::NeighborDetail_::NeighborRetransmission::has_operation() const
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

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetailTable::NeighborDetail::NeighborDetail_::NeighborRetransmission::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-retransmission";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetailTable::NeighborDetail::NeighborDetail_::NeighborRetransmission::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetailTable::NeighborDetail::NeighborDetail_::NeighborRetransmission::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetailTable::NeighborDetail::NeighborDetail_::NeighborRetransmission::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetailTable::NeighborDetail::NeighborDetail_::NeighborRetransmission::set_value(const std::string & value_path, std::string value)
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

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetailTable::NeighborDetail::NeighborBfdInfo::NeighborBfdInfo()
    :
    bfd_intf_enable_mode{YType::uint32, "bfd-intf-enable-mode"},
    bfd_status_flag{YType::uint8, "bfd-status-flag"}
{
    yang_name = "neighbor-bfd-info"; yang_parent_name = "neighbor-detail";
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetailTable::NeighborDetail::NeighborBfdInfo::~NeighborBfdInfo()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetailTable::NeighborDetail::NeighborBfdInfo::has_data() const
{
    return bfd_intf_enable_mode.is_set
	|| bfd_status_flag.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetailTable::NeighborDetail::NeighborBfdInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(bfd_intf_enable_mode.operation)
	|| is_set(bfd_status_flag.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetailTable::NeighborDetail::NeighborBfdInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-bfd-info";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetailTable::NeighborDetail::NeighborBfdInfo::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetailTable::NeighborDetail::NeighborBfdInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetailTable::NeighborDetail::NeighborBfdInfo::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetailTable::NeighborDetail::NeighborBfdInfo::set_value(const std::string & value_path, std::string value)
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

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceBriefTable::InterfaceBriefTable()
{
    yang_name = "interface-brief-table"; yang_parent_name = "area";
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceBriefTable::~InterfaceBriefTable()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceBriefTable::has_data() const
{
    for (std::size_t index=0; index<interface_brief.size(); index++)
    {
        if(interface_brief[index]->has_data())
            return true;
    }
    return false;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceBriefTable::has_operation() const
{
    for (std::size_t index=0; index<interface_brief.size(); index++)
    {
        if(interface_brief[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceBriefTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-brief-table";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceBriefTable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfaceBriefTable' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceBriefTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "interface-brief")
    {
        for(auto const & c : interface_brief)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceBriefTable::InterfaceBrief>();
        c->parent = this;
        interface_brief.push_back(std::move(c));
        children[segment_path] = interface_brief.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceBriefTable::get_children()
{
    for (auto const & c : interface_brief)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceBriefTable::set_value(const std::string & value_path, std::string value)
{
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceBriefTable::InterfaceBrief::InterfaceBrief()
    :
    interface_name{YType::str, "interface-name"},
    interface_address{YType::str, "interface-address"},
    interface_adjacent_neighbors{YType::uint16, "interface-adjacent-neighbors"},
    interface_link_cost{YType::uint16, "interface-link-cost"},
    interface_neighbors{YType::uint16, "interface-neighbors"},
    network_type{YType::enumeration, "network-type"},
    ospf_interface_state{YType::enumeration, "ospf-interface-state"}
{
    yang_name = "interface-brief"; yang_parent_name = "interface-brief-table";
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceBriefTable::InterfaceBrief::~InterfaceBrief()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceBriefTable::InterfaceBrief::has_data() const
{
    return interface_name.is_set
	|| interface_address.is_set
	|| interface_adjacent_neighbors.is_set
	|| interface_link_cost.is_set
	|| interface_neighbors.is_set
	|| network_type.is_set
	|| ospf_interface_state.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceBriefTable::InterfaceBrief::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(interface_address.operation)
	|| is_set(interface_adjacent_neighbors.operation)
	|| is_set(interface_link_cost.operation)
	|| is_set(interface_neighbors.operation)
	|| is_set(network_type.operation)
	|| is_set(ospf_interface_state.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceBriefTable::InterfaceBrief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-brief" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceBriefTable::InterfaceBrief::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfaceBrief' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (interface_address.is_set || is_set(interface_address.operation)) leaf_name_data.push_back(interface_address.get_name_leafdata());
    if (interface_adjacent_neighbors.is_set || is_set(interface_adjacent_neighbors.operation)) leaf_name_data.push_back(interface_adjacent_neighbors.get_name_leafdata());
    if (interface_link_cost.is_set || is_set(interface_link_cost.operation)) leaf_name_data.push_back(interface_link_cost.get_name_leafdata());
    if (interface_neighbors.is_set || is_set(interface_neighbors.operation)) leaf_name_data.push_back(interface_neighbors.get_name_leafdata());
    if (network_type.is_set || is_set(network_type.operation)) leaf_name_data.push_back(network_type.get_name_leafdata());
    if (ospf_interface_state.is_set || is_set(ospf_interface_state.operation)) leaf_name_data.push_back(ospf_interface_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceBriefTable::InterfaceBrief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceBriefTable::InterfaceBrief::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceBriefTable::InterfaceBrief::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "interface-address")
    {
        interface_address = value;
    }
    if(value_path == "interface-adjacent-neighbors")
    {
        interface_adjacent_neighbors = value;
    }
    if(value_path == "interface-link-cost")
    {
        interface_link_cost = value;
    }
    if(value_path == "interface-neighbors")
    {
        interface_neighbors = value;
    }
    if(value_path == "network-type")
    {
        network_type = value;
    }
    if(value_path == "ospf-interface-state")
    {
        ospf_interface_state = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::RequestListTable::RequestListTable()
{
    yang_name = "request-list-table"; yang_parent_name = "area";
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::RequestListTable::~RequestListTable()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::RequestListTable::has_data() const
{
    for (std::size_t index=0; index<request.size(); index++)
    {
        if(request[index]->has_data())
            return true;
    }
    return false;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::RequestListTable::has_operation() const
{
    for (std::size_t index=0; index<request.size(); index++)
    {
        if(request[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::RequestListTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "request-list-table";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::RequestListTable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RequestListTable' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::RequestListTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::RequestListTable::Request>();
        c->parent = this;
        request.push_back(std::move(c));
        children[segment_path] = request.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::RequestListTable::get_children()
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

void Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::RequestListTable::set_value(const std::string & value_path, std::string value)
{
}

const Enum::YLeaf Ospfv3LsaEnum::link_lsa {8, "link-lsa"};
const Enum::YLeaf Ospfv3LsaEnum::grace_lsa {11, "grace-lsa"};
const Enum::YLeaf Ospfv3LsaEnum::router {8193, "router"};
const Enum::YLeaf Ospfv3LsaEnum::network {8194, "network"};
const Enum::YLeaf Ospfv3LsaEnum::inter_area_prefix {8195, "inter-area-prefix"};
const Enum::YLeaf Ospfv3LsaEnum::inter_area_router {8196, "inter-area-router"};
const Enum::YLeaf Ospfv3LsaEnum::nssa_external {8199, "nssa-external"};
const Enum::YLeaf Ospfv3LsaEnum::intra_area_prefix {8201, "intra-area-prefix"};
const Enum::YLeaf Ospfv3LsaEnum::external {16389, "external"};
const Enum::YLeaf Ospfv3LsaEnum::opaque_link {32768, "opaque-link"};
const Enum::YLeaf Ospfv3LsaEnum::opaque_area {40960, "opaque-area"};
const Enum::YLeaf Ospfv3LsaEnum::opaque_as {49152, "opaque-as"};
const Enum::YLeaf Ospfv3LsaEnum::unknown {57344, "unknown"};

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

const Enum::YLeaf Ospfv3GracefulShutdownStateEnum::init {0, "init"};
const Enum::YLeaf Ospfv3GracefulShutdownStateEnum::normal {1, "normal"};
const Enum::YLeaf Ospfv3GracefulShutdownStateEnum::flushing {2, "flushing"};
const Enum::YLeaf Ospfv3GracefulShutdownStateEnum::empty_hellos {3, "empty-hellos"};
const Enum::YLeaf Ospfv3GracefulShutdownStateEnum::quiet {4, "quiet"};

const Enum::YLeaf Ospfv3GracefulRestartReasonEnum::grace_reason_unknown {0, "grace-reason-unknown"};
const Enum::YLeaf Ospfv3GracefulRestartReasonEnum::grace_reason_software_restart {1, "grace-reason-software-restart"};
const Enum::YLeaf Ospfv3GracefulRestartReasonEnum::grace_reason_software_upgrade {2, "grace-reason-software-upgrade"};
const Enum::YLeaf Ospfv3GracefulRestartReasonEnum::grace_reason_switchover {3, "grace-reason-switchover"};

const Enum::YLeaf IpfrrTbrkrEnum::downstream {0, "downstream"};
const Enum::YLeaf IpfrrTbrkrEnum::line_card_disjoint {1, "line-card-disjoint"};
const Enum::YLeaf IpfrrTbrkrEnum::backup_metric {2, "backup-metric"};
const Enum::YLeaf IpfrrTbrkrEnum::node_protect {3, "node-protect"};
const Enum::YLeaf IpfrrTbrkrEnum::primary_path {4, "primary-path"};
const Enum::YLeaf IpfrrTbrkrEnum::secondary_path {5, "secondary-path"};
const Enum::YLeaf IpfrrTbrkrEnum::srlg_disjoint {6, "srlg-disjoint"};
const Enum::YLeaf IpfrrTbrkrEnum::tunnel {7, "tunnel"};

const Enum::YLeaf OspfNsrSchedPriEnum::ospf_nsr_stats_sched_pri_hi {0, "ospf-nsr-stats-sched-pri-hi"};
const Enum::YLeaf OspfNsrSchedPriEnum::ospf_nsr_stats_sched_pri_med {1, "ospf-nsr-stats-sched-pri-med"};
const Enum::YLeaf OspfNsrSchedPriEnum::ospf_nsr_stats_sched_pri_low {2, "ospf-nsr-stats-sched-pri-low"};
const Enum::YLeaf OspfNsrSchedPriEnum::ospf_nsr_stats_sched_pri_max {3, "ospf-nsr-stats-sched-pri-max"};

const Enum::YLeaf StubRouterModeEnum::rbit {0, "rbit"};
const Enum::YLeaf StubRouterModeEnum::v6bit {1, "v6bit"};
const Enum::YLeaf StubRouterModeEnum::max_metric {2, "max-metric"};
const Enum::YLeaf StubRouterModeEnum::none {3, "none"};

const Enum::YLeaf Ospfv3InterfaceEnum::none {0, "none"};
const Enum::YLeaf Ospfv3InterfaceEnum::broadcast {1, "broadcast"};
const Enum::YLeaf Ospfv3InterfaceEnum::non_broadcast {2, "non-broadcast"};
const Enum::YLeaf Ospfv3InterfaceEnum::point_to_point {3, "point-to-point"};
const Enum::YLeaf Ospfv3InterfaceEnum::point_to_multipoint {4, "point-to-multipoint"};
const Enum::YLeaf Ospfv3InterfaceEnum::point_to_multipoint_non_broadcast {5, "point-to-multipoint-non-broadcast"};
const Enum::YLeaf Ospfv3InterfaceEnum::virtual_link {6, "virtual-link"};
const Enum::YLeaf Ospfv3InterfaceEnum::loopback_interface {7, "loopback-interface"};
const Enum::YLeaf Ospfv3InterfaceEnum::mpls_traffic_engineering {8, "mpls-traffic-engineering"};
const Enum::YLeaf Ospfv3InterfaceEnum::sham_link {9, "sham-link"};

const Enum::YLeaf StubRouterTriggerEnum::on_proc_migration {0, "on-proc-migration"};
const Enum::YLeaf StubRouterTriggerEnum::on_proc_restart {1, "on-proc-restart"};
const Enum::YLeaf StubRouterTriggerEnum::on_switchover {2, "on-switchover"};
const Enum::YLeaf StubRouterTriggerEnum::on_startup {3, "on-startup"};
const Enum::YLeaf StubRouterTriggerEnum::always {4, "always"};
const Enum::YLeaf StubRouterTriggerEnum::none {5, "none"};

const Enum::YLeaf OspfLsaSyncStateEnum::none {0, "none"};
const Enum::YLeaf OspfLsaSyncStateEnum::out_of_sync {1, "out-of-sync"};
const Enum::YLeaf OspfLsaSyncStateEnum::in_sync {2, "in-sync"};
const Enum::YLeaf OspfLsaSyncStateEnum::nsr_ack_pending {3, "nsr-ack-pending"};

const Enum::YLeaf Ospfv3DefaultMetricEnum::type_none {0, "type-none"};
const Enum::YLeaf Ospfv3DefaultMetricEnum::type1 {1, "type1"};
const Enum::YLeaf Ospfv3DefaultMetricEnum::type2 {2, "type2"};

const Enum::YLeaf Ospfv3NeighborStateEnum::neigbhor_down {0, "neigbhor-down"};
const Enum::YLeaf Ospfv3NeighborStateEnum::attempt {1, "attempt"};
const Enum::YLeaf Ospfv3NeighborStateEnum::init {2, "init"};
const Enum::YLeaf Ospfv3NeighborStateEnum::two_way {3, "two-way"};
const Enum::YLeaf Ospfv3NeighborStateEnum::exstart {4, "exstart"};
const Enum::YLeaf Ospfv3NeighborStateEnum::exchange {5, "exchange"};
const Enum::YLeaf Ospfv3NeighborStateEnum::loading {6, "loading"};
const Enum::YLeaf Ospfv3NeighborStateEnum::full {7, "full"};
const Enum::YLeaf Ospfv3NeighborStateEnum::sc_virtual {8, "sc-virtual"};

const Enum::YLeaf PrefixPriorityEnum::critical {0, "critical"};
const Enum::YLeaf PrefixPriorityEnum::high {1, "high"};
const Enum::YLeaf PrefixPriorityEnum::medium {2, "medium"};
const Enum::YLeaf PrefixPriorityEnum::low {3, "low"};

const Enum::YLeaf StubRouterExitReasonEnum::none {0, "none"};
const Enum::YLeaf StubRouterExitReasonEnum::bgp {1, "bgp"};
const Enum::YLeaf StubRouterExitReasonEnum::timer {2, "timer"};
const Enum::YLeaf StubRouterExitReasonEnum::configuration {3, "configuration"};
const Enum::YLeaf StubRouterExitReasonEnum::cleared {4, "cleared"};
const Enum::YLeaf StubRouterExitReasonEnum::override {5, "override"};

const Enum::YLeaf Ospfv3Lsa1Enum::link {8, "link"};
const Enum::YLeaf Ospfv3Lsa1Enum::grace {11, "grace"};
const Enum::YLeaf Ospfv3Lsa1Enum::router {8193, "router"};
const Enum::YLeaf Ospfv3Lsa1Enum::network {8194, "network"};
const Enum::YLeaf Ospfv3Lsa1Enum::inter_area_prefix {8195, "inter-area-prefix"};
const Enum::YLeaf Ospfv3Lsa1Enum::inter_area_router {8196, "inter-area-router"};
const Enum::YLeaf Ospfv3Lsa1Enum::mospf {8198, "mospf"};
const Enum::YLeaf Ospfv3Lsa1Enum::type7_external {8199, "type7-external"};
const Enum::YLeaf Ospfv3Lsa1Enum::lsa_prefix {8201, "lsa-prefix"};
const Enum::YLeaf Ospfv3Lsa1Enum::as_external {16389, "as-external"};
const Enum::YLeaf Ospfv3Lsa1Enum::unknown_link {32768, "unknown-link"};
const Enum::YLeaf Ospfv3Lsa1Enum::unknown_area {40960, "unknown-area"};
const Enum::YLeaf Ospfv3Lsa1Enum::unknown_as {49152, "unknown-as"};
const Enum::YLeaf Ospfv3Lsa1Enum::unknown_type {57344, "unknown-type"};

const Enum::YLeaf Ospfv3LsaInfoTypesEnum::mgmt_lsa_lsasum_type {0, "mgmt-lsa-lsasum-type"};
const Enum::YLeaf Ospfv3LsaInfoTypesEnum::mgmt_lsa_link_type {8, "mgmt-lsa-link-type"};
const Enum::YLeaf Ospfv3LsaInfoTypesEnum::mgmt_lsa_gr_type {11, "mgmt-lsa-gr-type"};
const Enum::YLeaf Ospfv3LsaInfoTypesEnum::mgmt_lsa_rtr_type {8193, "mgmt-lsa-rtr-type"};
const Enum::YLeaf Ospfv3LsaInfoTypesEnum::mgmt_lsa_net_type {8194, "mgmt-lsa-net-type"};
const Enum::YLeaf Ospfv3LsaInfoTypesEnum::mgmt_lsa_iapfx_type {8195, "mgmt-lsa-iapfx-type"};
const Enum::YLeaf Ospfv3LsaInfoTypesEnum::mgmt_lsa_iartr_type {8196, "mgmt-lsa-iartr-type"};
const Enum::YLeaf Ospfv3LsaInfoTypesEnum::mgmt_lsa_nssaext_type {8199, "mgmt-lsa-nssaext-type"};
const Enum::YLeaf Ospfv3LsaInfoTypesEnum::mgmt_lsa_prefix_type {8201, "mgmt-lsa-prefix-type"};
const Enum::YLeaf Ospfv3LsaInfoTypesEnum::mgmt_lsa_ext_type {16389, "mgmt-lsa-ext-type"};
const Enum::YLeaf Ospfv3LsaInfoTypesEnum::mgmt_lsa_unk_link_type {32768, "mgmt-lsa-unk-link-type"};
const Enum::YLeaf Ospfv3LsaInfoTypesEnum::mgmt_lsa_unk_area_type {40960, "mgmt-lsa-unk-area-type"};
const Enum::YLeaf Ospfv3LsaInfoTypesEnum::mgmt_lsa_unk_as_type {49152, "mgmt-lsa-unk-as-type"};
const Enum::YLeaf Ospfv3LsaInfoTypesEnum::mgmt_lsa_unk_type {57344, "mgmt-lsa-unk-type"};

const Enum::YLeaf StubRouterAbrOffReasonEnum::init_delay {2, "init-delay"};
const Enum::YLeaf StubRouterAbrOffReasonEnum::no_neighbor {3, "no-neighbor"};
const Enum::YLeaf StubRouterAbrOffReasonEnum::no_full_neighbor {4, "no-full-neighbor"};
const Enum::YLeaf StubRouterAbrOffReasonEnum::new_neighbor {5, "new-neighbor"};
const Enum::YLeaf StubRouterAbrOffReasonEnum::full_neighbor {6, "full-neighbor"};

const Enum::YLeaf Ospfv3AreaRangeStatusEnum::advertise {1, "advertise"};
const Enum::YLeaf Ospfv3AreaRangeStatusEnum::do_not_advertise {2, "do-not-advertise"};

const Enum::YLeaf Ospfv3InterfaceStateEnum::down {0, "down"};
const Enum::YLeaf Ospfv3InterfaceStateEnum::loopback {1, "loopback"};
const Enum::YLeaf Ospfv3InterfaceStateEnum::waiting {2, "waiting"};
const Enum::YLeaf Ospfv3InterfaceStateEnum::point_to_multipoint {3, "point-to-multipoint"};
const Enum::YLeaf Ospfv3InterfaceStateEnum::point_to_point {4, "point-to-point"};
const Enum::YLeaf Ospfv3InterfaceStateEnum::designated_router {5, "designated-router"};
const Enum::YLeaf Ospfv3InterfaceStateEnum::backup_designated_router {6, "backup-designated-router"};
const Enum::YLeaf Ospfv3InterfaceStateEnum::other_designated_router {7, "other-designated-router"};

const Enum::YLeaf Ospfv3LinkEnum::link_router {1, "link-router"};
const Enum::YLeaf Ospfv3LinkEnum::link_trans_net {2, "link-trans-net"};
const Enum::YLeaf Ospfv3LinkEnum::link_virtual_link {4, "link-virtual-link"};

const Enum::YLeaf Ospfv3BorderRouteEnum::abr {1, "abr"};
const Enum::YLeaf Ospfv3BorderRouteEnum::asbr {2, "asbr"};
const Enum::YLeaf Ospfv3BorderRouteEnum::abr_asbr {3, "abr-asbr"};


}
}

