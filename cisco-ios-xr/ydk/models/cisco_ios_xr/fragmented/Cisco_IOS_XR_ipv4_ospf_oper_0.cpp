
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ipv4_ospf_oper_0.hpp"
#include "Cisco_IOS_XR_ipv4_ospf_oper_3.hpp"
#include "Cisco_IOS_XR_ipv4_ospf_oper_1.hpp"
#include "Cisco_IOS_XR_ipv4_ospf_oper_2.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ipv4_ospf_oper {

Ospf::Ospf()
    :
    processes(std::make_shared<Ospf::Processes>())
{
    processes->parent = this;
    children["processes"] = processes;

    yang_name = "ospf"; yang_parent_name = "Cisco-IOS-XR-ipv4-ospf-oper";
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
    return is_set(operation)
	|| (processes !=  nullptr && processes->has_operation());
}

std::string Ospf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-ospf-oper:ospf";

    return path_buffer.str();

}

EntityPath Ospf::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Ospf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            processes = std::make_shared<Ospf::Processes>();
            processes->parent = this;
            children["processes"] = processes;
        }
        return children.at("processes");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::get_children()
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

void Ospf::set_value(const std::string & value_path, std::string value)
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

Ospf::Processes::Processes()
{
    yang_name = "processes"; yang_parent_name = "ospf";
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
    return is_set(operation);
}

std::string Ospf::Processes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "processes";

    return path_buffer.str();

}

EntityPath Ospf::Processes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-ospf-oper:ospf/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Ospf::Processes::Process>();
        c->parent = this;
        process.push_back(std::move(c));
        children[segment_path] = process.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::get_children()
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

void Ospf::Processes::set_value(const std::string & value_path, std::string value)
{
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
    children["default-vrf"] = default_vrf;

    srms->parent = this;
    children["srms"] = srms;

    vrfs->parent = this;
    children["vrfs"] = vrfs;

    yang_name = "process"; yang_parent_name = "processes";
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
    return is_set(operation)
	|| is_set(process_name.operation)
	|| (default_vrf !=  nullptr && default_vrf->has_operation())
	|| (srms !=  nullptr && srms->has_operation())
	|| (vrfs !=  nullptr && vrfs->has_operation());
}

std::string Ospf::Processes::Process::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "process" <<"[process-name='" <<process_name <<"']";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-ospf-oper:ospf/processes/" << get_segment_path();
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

std::shared_ptr<Entity> Ospf::Processes::Process::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            default_vrf = std::make_shared<Ospf::Processes::Process::DefaultVrf>();
            default_vrf->parent = this;
            children["default-vrf"] = default_vrf;
        }
        return children.at("default-vrf");
    }

    if(child_yang_name == "srms")
    {
        if(srms != nullptr)
        {
            children["srms"] = srms;
        }
        else
        {
            srms = std::make_shared<Ospf::Processes::Process::Srms>();
            srms->parent = this;
            children["srms"] = srms;
        }
        return children.at("srms");
    }

    if(child_yang_name == "vrfs")
    {
        if(vrfs != nullptr)
        {
            children["vrfs"] = vrfs;
        }
        else
        {
            vrfs = std::make_shared<Ospf::Processes::Process::Vrfs>();
            vrfs->parent = this;
            children["vrfs"] = vrfs;
        }
        return children.at("vrfs");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::get_children()
{
    if(children.find("default-vrf") == children.end())
    {
        if(default_vrf != nullptr)
        {
            children["default-vrf"] = default_vrf;
        }
    }

    if(children.find("srms") == children.end())
    {
        if(srms != nullptr)
        {
            children["srms"] = srms;
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

void Ospf::Processes::Process::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "process-name")
    {
        process_name = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrfs()
{
    yang_name = "vrfs"; yang_parent_name = "process";
}

Ospf::Processes::Process::Vrfs::~Vrfs()
{
}

bool Ospf::Processes::Process::Vrfs::has_data() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::has_operation() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospf::Processes::Process::Vrfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrfs";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vrfs' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf>();
        c->parent = this;
        vrf.push_back(std::move(c));
        children[segment_path] = vrf.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::get_children()
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

void Ospf::Processes::Process::Vrfs::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::Vrfs::Vrf::Vrf()
    :
    vrf_name{YType::str, "vrf-name"}
    	,
    adjacency_information(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation>())
	,area_statistics(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics>())
	,areas(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Areas>())
	,border_routers(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::BorderRouters>())
	,database(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database>())
	,fast_reroute(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::FastReroute>())
	,flood_list_table(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::FloodListTable>())
	,interface_information(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation>())
	,interface_vrf_information(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::InterfaceVrfInformation>())
	,mpls_te(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::MplsTe>())
	,ospf_summary(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::OspfSummary>())
	,process_information(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation>())
	,route_information(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation>())
	,statistics(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics>())
	,summary_prefixes(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes>())
{
    adjacency_information->parent = this;
    children["adjacency-information"] = adjacency_information;

    area_statistics->parent = this;
    children["area-statistics"] = area_statistics;

    areas->parent = this;
    children["areas"] = areas;

    border_routers->parent = this;
    children["border-routers"] = border_routers;

    database->parent = this;
    children["database"] = database;

    fast_reroute->parent = this;
    children["fast-reroute"] = fast_reroute;

    flood_list_table->parent = this;
    children["flood-list-table"] = flood_list_table;

    interface_information->parent = this;
    children["interface-information"] = interface_information;

    interface_vrf_information->parent = this;
    children["interface-vrf-information"] = interface_vrf_information;

    mpls_te->parent = this;
    children["mpls-te"] = mpls_te;

    ospf_summary->parent = this;
    children["ospf-summary"] = ospf_summary;

    process_information->parent = this;
    children["process-information"] = process_information;

    route_information->parent = this;
    children["route-information"] = route_information;

    statistics->parent = this;
    children["statistics"] = statistics;

    summary_prefixes->parent = this;
    children["summary-prefixes"] = summary_prefixes;

    yang_name = "vrf"; yang_parent_name = "vrfs";
}

Ospf::Processes::Process::Vrfs::Vrf::~Vrf()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::has_data() const
{
    return vrf_name.is_set
	|| (adjacency_information !=  nullptr && adjacency_information->has_data())
	|| (area_statistics !=  nullptr && area_statistics->has_data())
	|| (areas !=  nullptr && areas->has_data())
	|| (border_routers !=  nullptr && border_routers->has_data())
	|| (database !=  nullptr && database->has_data())
	|| (fast_reroute !=  nullptr && fast_reroute->has_data())
	|| (flood_list_table !=  nullptr && flood_list_table->has_data())
	|| (interface_information !=  nullptr && interface_information->has_data())
	|| (interface_vrf_information !=  nullptr && interface_vrf_information->has_data())
	|| (mpls_te !=  nullptr && mpls_te->has_data())
	|| (ospf_summary !=  nullptr && ospf_summary->has_data())
	|| (process_information !=  nullptr && process_information->has_data())
	|| (route_information !=  nullptr && route_information->has_data())
	|| (statistics !=  nullptr && statistics->has_data())
	|| (summary_prefixes !=  nullptr && summary_prefixes->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::has_operation() const
{
    return is_set(operation)
	|| is_set(vrf_name.operation)
	|| (adjacency_information !=  nullptr && adjacency_information->has_operation())
	|| (area_statistics !=  nullptr && area_statistics->has_operation())
	|| (areas !=  nullptr && areas->has_operation())
	|| (border_routers !=  nullptr && border_routers->has_operation())
	|| (database !=  nullptr && database->has_operation())
	|| (fast_reroute !=  nullptr && fast_reroute->has_operation())
	|| (flood_list_table !=  nullptr && flood_list_table->has_operation())
	|| (interface_information !=  nullptr && interface_information->has_operation())
	|| (interface_vrf_information !=  nullptr && interface_vrf_information->has_operation())
	|| (mpls_te !=  nullptr && mpls_te->has_operation())
	|| (ospf_summary !=  nullptr && ospf_summary->has_operation())
	|| (process_information !=  nullptr && process_information->has_operation())
	|| (route_information !=  nullptr && route_information->has_operation())
	|| (statistics !=  nullptr && statistics->has_operation())
	|| (summary_prefixes !=  nullptr && summary_prefixes->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf" <<"[vrf-name='" <<vrf_name <<"']";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vrf' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "adjacency-information")
    {
        if(adjacency_information != nullptr)
        {
            children["adjacency-information"] = adjacency_information;
        }
        else
        {
            adjacency_information = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation>();
            adjacency_information->parent = this;
            children["adjacency-information"] = adjacency_information;
        }
        return children.at("adjacency-information");
    }

    if(child_yang_name == "area-statistics")
    {
        if(area_statistics != nullptr)
        {
            children["area-statistics"] = area_statistics;
        }
        else
        {
            area_statistics = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics>();
            area_statistics->parent = this;
            children["area-statistics"] = area_statistics;
        }
        return children.at("area-statistics");
    }

    if(child_yang_name == "areas")
    {
        if(areas != nullptr)
        {
            children["areas"] = areas;
        }
        else
        {
            areas = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Areas>();
            areas->parent = this;
            children["areas"] = areas;
        }
        return children.at("areas");
    }

    if(child_yang_name == "border-routers")
    {
        if(border_routers != nullptr)
        {
            children["border-routers"] = border_routers;
        }
        else
        {
            border_routers = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::BorderRouters>();
            border_routers->parent = this;
            children["border-routers"] = border_routers;
        }
        return children.at("border-routers");
    }

    if(child_yang_name == "database")
    {
        if(database != nullptr)
        {
            children["database"] = database;
        }
        else
        {
            database = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database>();
            database->parent = this;
            children["database"] = database;
        }
        return children.at("database");
    }

    if(child_yang_name == "fast-reroute")
    {
        if(fast_reroute != nullptr)
        {
            children["fast-reroute"] = fast_reroute;
        }
        else
        {
            fast_reroute = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::FastReroute>();
            fast_reroute->parent = this;
            children["fast-reroute"] = fast_reroute;
        }
        return children.at("fast-reroute");
    }

    if(child_yang_name == "flood-list-table")
    {
        if(flood_list_table != nullptr)
        {
            children["flood-list-table"] = flood_list_table;
        }
        else
        {
            flood_list_table = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::FloodListTable>();
            flood_list_table->parent = this;
            children["flood-list-table"] = flood_list_table;
        }
        return children.at("flood-list-table");
    }

    if(child_yang_name == "interface-information")
    {
        if(interface_information != nullptr)
        {
            children["interface-information"] = interface_information;
        }
        else
        {
            interface_information = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation>();
            interface_information->parent = this;
            children["interface-information"] = interface_information;
        }
        return children.at("interface-information");
    }

    if(child_yang_name == "interface-vrf-information")
    {
        if(interface_vrf_information != nullptr)
        {
            children["interface-vrf-information"] = interface_vrf_information;
        }
        else
        {
            interface_vrf_information = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::InterfaceVrfInformation>();
            interface_vrf_information->parent = this;
            children["interface-vrf-information"] = interface_vrf_information;
        }
        return children.at("interface-vrf-information");
    }

    if(child_yang_name == "mpls-te")
    {
        if(mpls_te != nullptr)
        {
            children["mpls-te"] = mpls_te;
        }
        else
        {
            mpls_te = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::MplsTe>();
            mpls_te->parent = this;
            children["mpls-te"] = mpls_te;
        }
        return children.at("mpls-te");
    }

    if(child_yang_name == "ospf-summary")
    {
        if(ospf_summary != nullptr)
        {
            children["ospf-summary"] = ospf_summary;
        }
        else
        {
            ospf_summary = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::OspfSummary>();
            ospf_summary->parent = this;
            children["ospf-summary"] = ospf_summary;
        }
        return children.at("ospf-summary");
    }

    if(child_yang_name == "process-information")
    {
        if(process_information != nullptr)
        {
            children["process-information"] = process_information;
        }
        else
        {
            process_information = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation>();
            process_information->parent = this;
            children["process-information"] = process_information;
        }
        return children.at("process-information");
    }

    if(child_yang_name == "route-information")
    {
        if(route_information != nullptr)
        {
            children["route-information"] = route_information;
        }
        else
        {
            route_information = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation>();
            route_information->parent = this;
            children["route-information"] = route_information;
        }
        return children.at("route-information");
    }

    if(child_yang_name == "statistics")
    {
        if(statistics != nullptr)
        {
            children["statistics"] = statistics;
        }
        else
        {
            statistics = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics>();
            statistics->parent = this;
            children["statistics"] = statistics;
        }
        return children.at("statistics");
    }

    if(child_yang_name == "summary-prefixes")
    {
        if(summary_prefixes != nullptr)
        {
            children["summary-prefixes"] = summary_prefixes;
        }
        else
        {
            summary_prefixes = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes>();
            summary_prefixes->parent = this;
            children["summary-prefixes"] = summary_prefixes;
        }
        return children.at("summary-prefixes");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::get_children()
{
    if(children.find("adjacency-information") == children.end())
    {
        if(adjacency_information != nullptr)
        {
            children["adjacency-information"] = adjacency_information;
        }
    }

    if(children.find("area-statistics") == children.end())
    {
        if(area_statistics != nullptr)
        {
            children["area-statistics"] = area_statistics;
        }
    }

    if(children.find("areas") == children.end())
    {
        if(areas != nullptr)
        {
            children["areas"] = areas;
        }
    }

    if(children.find("border-routers") == children.end())
    {
        if(border_routers != nullptr)
        {
            children["border-routers"] = border_routers;
        }
    }

    if(children.find("database") == children.end())
    {
        if(database != nullptr)
        {
            children["database"] = database;
        }
    }

    if(children.find("fast-reroute") == children.end())
    {
        if(fast_reroute != nullptr)
        {
            children["fast-reroute"] = fast_reroute;
        }
    }

    if(children.find("flood-list-table") == children.end())
    {
        if(flood_list_table != nullptr)
        {
            children["flood-list-table"] = flood_list_table;
        }
    }

    if(children.find("interface-information") == children.end())
    {
        if(interface_information != nullptr)
        {
            children["interface-information"] = interface_information;
        }
    }

    if(children.find("interface-vrf-information") == children.end())
    {
        if(interface_vrf_information != nullptr)
        {
            children["interface-vrf-information"] = interface_vrf_information;
        }
    }

    if(children.find("mpls-te") == children.end())
    {
        if(mpls_te != nullptr)
        {
            children["mpls-te"] = mpls_te;
        }
    }

    if(children.find("ospf-summary") == children.end())
    {
        if(ospf_summary != nullptr)
        {
            children["ospf-summary"] = ospf_summary;
        }
    }

    if(children.find("process-information") == children.end())
    {
        if(process_information != nullptr)
        {
            children["process-information"] = process_information;
        }
    }

    if(children.find("route-information") == children.end())
    {
        if(route_information != nullptr)
        {
            children["route-information"] = route_information;
        }
    }

    if(children.find("statistics") == children.end())
    {
        if(statistics != nullptr)
        {
            children["statistics"] = statistics;
        }
    }

    if(children.find("summary-prefixes") == children.end())
    {
        if(summary_prefixes != nullptr)
        {
            children["summary-prefixes"] = summary_prefixes;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::InterfaceVrfInformation::InterfaceVrfInformation()
    :
    sham_links(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::InterfaceVrfInformation::ShamLinks>())
{
    sham_links->parent = this;
    children["sham-links"] = sham_links;

    yang_name = "interface-vrf-information"; yang_parent_name = "vrf";
}

Ospf::Processes::Process::Vrfs::Vrf::InterfaceVrfInformation::~InterfaceVrfInformation()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::InterfaceVrfInformation::has_data() const
{
    return (sham_links !=  nullptr && sham_links->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::InterfaceVrfInformation::has_operation() const
{
    return is_set(operation)
	|| (sham_links !=  nullptr && sham_links->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::InterfaceVrfInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-vrf-information";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::InterfaceVrfInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfaceVrfInformation' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::InterfaceVrfInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "sham-links")
    {
        if(sham_links != nullptr)
        {
            children["sham-links"] = sham_links;
        }
        else
        {
            sham_links = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::InterfaceVrfInformation::ShamLinks>();
            sham_links->parent = this;
            children["sham-links"] = sham_links;
        }
        return children.at("sham-links");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::InterfaceVrfInformation::get_children()
{
    if(children.find("sham-links") == children.end())
    {
        if(sham_links != nullptr)
        {
            children["sham-links"] = sham_links;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::InterfaceVrfInformation::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::Vrfs::Vrf::InterfaceVrfInformation::ShamLinks::ShamLinks()
{
    yang_name = "sham-links"; yang_parent_name = "interface-vrf-information";
}

Ospf::Processes::Process::Vrfs::Vrf::InterfaceVrfInformation::ShamLinks::~ShamLinks()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::InterfaceVrfInformation::ShamLinks::has_data() const
{
    for (std::size_t index=0; index<sham_link.size(); index++)
    {
        if(sham_link[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::InterfaceVrfInformation::ShamLinks::has_operation() const
{
    for (std::size_t index=0; index<sham_link.size(); index++)
    {
        if(sham_link[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::InterfaceVrfInformation::ShamLinks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sham-links";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::InterfaceVrfInformation::ShamLinks::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ShamLinks' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::InterfaceVrfInformation::ShamLinks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "sham-link")
    {
        for(auto const & c : sham_link)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::InterfaceVrfInformation::ShamLinks::ShamLink>();
        c->parent = this;
        sham_link.push_back(std::move(c));
        children[segment_path] = sham_link.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::InterfaceVrfInformation::ShamLinks::get_children()
{
    for (auto const & c : sham_link)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::InterfaceVrfInformation::ShamLinks::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::Vrfs::Vrf::InterfaceVrfInformation::ShamLinks::ShamLink::ShamLink()
    :
    sham_link_name{YType::str, "sham-link-name"},
    sham_link_area{YType::str, "sham-link-area"},
    sham_link_authentication_type{YType::enumeration, "sham-link-authentication-type"},
    sham_link_cost{YType::uint16, "sham-link-cost"},
    sham_link_dc_bitless_lsa{YType::uint32, "sham-link-dc-bitless-lsa"},
    sham_link_dead_interval{YType::uint32, "sham-link-dead-interval"},
    sham_link_demand_circuit{YType::boolean, "sham-link-demand-circuit"},
    sham_link_dest_address{YType::str, "sham-link-dest-address"},
    sham_link_hello_interval{YType::uint32, "sham-link-hello-interval"},
    sham_link_hello_interval_ms{YType::uint32, "sham-link-hello-interval-ms"},
    sham_link_ifindex{YType::uint32, "sham-link-ifindex"},
    sham_link_keychain_id{YType::uint64, "sham-link-keychain-id"},
    sham_link_last_nsf{YType::uint32, "sham-link-last-nsf"},
    sham_link_md_key{YType::uint16, "sham-link-md-key"},
    sham_link_name_xr{YType::str, "sham-link-name-xr"},
    sham_link_neighbor_id{YType::str, "sham-link-neighbor-id"},
    sham_link_next_hello{YType::uint32, "sham-link-next-hello"},
    sham_link_next_hello_ms{YType::uint32, "sham-link-next-hello-ms"},
    sham_link_nsf{YType::boolean, "sham-link-nsf"},
    sham_link_nsf_enabled{YType::boolean, "sham-link-nsf-enabled"},
    sham_link_old_md_key_count{YType::uint32, "sham-link-old-md-key-count"},
    sham_link_passive{YType::boolean, "sham-link-passive"},
    sham_link_retransmission_interval{YType::uint32, "sham-link-retransmission-interval"},
    sham_link_source_address{YType::str, "sham-link-source-address"},
    sham_link_state{YType::enumeration, "sham-link-state"},
    sham_link_transmission_delay{YType::uint16, "sham-link-transmission-delay"},
    sham_link_wait_interval{YType::uint32, "sham-link-wait-interval"},
    sham_link_youngest_md_key{YType::boolean, "sham-link-youngest-md-key"},
    sham_link_youngest_md_key_id{YType::uint16, "sham-link-youngest-md-key-id"}
    	,
    sham_link_neighbor(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::InterfaceVrfInformation::ShamLinks::ShamLink::ShamLinkNeighbor>())
{
    sham_link_neighbor->parent = this;
    children["sham-link-neighbor"] = sham_link_neighbor;

    yang_name = "sham-link"; yang_parent_name = "sham-links";
}

Ospf::Processes::Process::Vrfs::Vrf::InterfaceVrfInformation::ShamLinks::ShamLink::~ShamLink()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::InterfaceVrfInformation::ShamLinks::ShamLink::has_data() const
{
    for (auto const & leaf : sham_link_md_key.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return sham_link_name.is_set
	|| sham_link_area.is_set
	|| sham_link_authentication_type.is_set
	|| sham_link_cost.is_set
	|| sham_link_dc_bitless_lsa.is_set
	|| sham_link_dead_interval.is_set
	|| sham_link_demand_circuit.is_set
	|| sham_link_dest_address.is_set
	|| sham_link_hello_interval.is_set
	|| sham_link_hello_interval_ms.is_set
	|| sham_link_ifindex.is_set
	|| sham_link_keychain_id.is_set
	|| sham_link_last_nsf.is_set
	|| sham_link_name_xr.is_set
	|| sham_link_neighbor_id.is_set
	|| sham_link_next_hello.is_set
	|| sham_link_next_hello_ms.is_set
	|| sham_link_nsf.is_set
	|| sham_link_nsf_enabled.is_set
	|| sham_link_old_md_key_count.is_set
	|| sham_link_passive.is_set
	|| sham_link_retransmission_interval.is_set
	|| sham_link_source_address.is_set
	|| sham_link_state.is_set
	|| sham_link_transmission_delay.is_set
	|| sham_link_wait_interval.is_set
	|| sham_link_youngest_md_key.is_set
	|| sham_link_youngest_md_key_id.is_set
	|| (sham_link_neighbor !=  nullptr && sham_link_neighbor->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::InterfaceVrfInformation::ShamLinks::ShamLink::has_operation() const
{
    for (auto const & leaf : sham_link_md_key.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(sham_link_name.operation)
	|| is_set(sham_link_area.operation)
	|| is_set(sham_link_authentication_type.operation)
	|| is_set(sham_link_cost.operation)
	|| is_set(sham_link_dc_bitless_lsa.operation)
	|| is_set(sham_link_dead_interval.operation)
	|| is_set(sham_link_demand_circuit.operation)
	|| is_set(sham_link_dest_address.operation)
	|| is_set(sham_link_hello_interval.operation)
	|| is_set(sham_link_hello_interval_ms.operation)
	|| is_set(sham_link_ifindex.operation)
	|| is_set(sham_link_keychain_id.operation)
	|| is_set(sham_link_last_nsf.operation)
	|| is_set(sham_link_md_key.operation)
	|| is_set(sham_link_name_xr.operation)
	|| is_set(sham_link_neighbor_id.operation)
	|| is_set(sham_link_next_hello.operation)
	|| is_set(sham_link_next_hello_ms.operation)
	|| is_set(sham_link_nsf.operation)
	|| is_set(sham_link_nsf_enabled.operation)
	|| is_set(sham_link_old_md_key_count.operation)
	|| is_set(sham_link_passive.operation)
	|| is_set(sham_link_retransmission_interval.operation)
	|| is_set(sham_link_source_address.operation)
	|| is_set(sham_link_state.operation)
	|| is_set(sham_link_transmission_delay.operation)
	|| is_set(sham_link_wait_interval.operation)
	|| is_set(sham_link_youngest_md_key.operation)
	|| is_set(sham_link_youngest_md_key_id.operation)
	|| (sham_link_neighbor !=  nullptr && sham_link_neighbor->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::InterfaceVrfInformation::ShamLinks::ShamLink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sham-link" <<"[sham-link-name='" <<sham_link_name <<"']";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::InterfaceVrfInformation::ShamLinks::ShamLink::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ShamLink' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sham_link_name.is_set || is_set(sham_link_name.operation)) leaf_name_data.push_back(sham_link_name.get_name_leafdata());
    if (sham_link_area.is_set || is_set(sham_link_area.operation)) leaf_name_data.push_back(sham_link_area.get_name_leafdata());
    if (sham_link_authentication_type.is_set || is_set(sham_link_authentication_type.operation)) leaf_name_data.push_back(sham_link_authentication_type.get_name_leafdata());
    if (sham_link_cost.is_set || is_set(sham_link_cost.operation)) leaf_name_data.push_back(sham_link_cost.get_name_leafdata());
    if (sham_link_dc_bitless_lsa.is_set || is_set(sham_link_dc_bitless_lsa.operation)) leaf_name_data.push_back(sham_link_dc_bitless_lsa.get_name_leafdata());
    if (sham_link_dead_interval.is_set || is_set(sham_link_dead_interval.operation)) leaf_name_data.push_back(sham_link_dead_interval.get_name_leafdata());
    if (sham_link_demand_circuit.is_set || is_set(sham_link_demand_circuit.operation)) leaf_name_data.push_back(sham_link_demand_circuit.get_name_leafdata());
    if (sham_link_dest_address.is_set || is_set(sham_link_dest_address.operation)) leaf_name_data.push_back(sham_link_dest_address.get_name_leafdata());
    if (sham_link_hello_interval.is_set || is_set(sham_link_hello_interval.operation)) leaf_name_data.push_back(sham_link_hello_interval.get_name_leafdata());
    if (sham_link_hello_interval_ms.is_set || is_set(sham_link_hello_interval_ms.operation)) leaf_name_data.push_back(sham_link_hello_interval_ms.get_name_leafdata());
    if (sham_link_ifindex.is_set || is_set(sham_link_ifindex.operation)) leaf_name_data.push_back(sham_link_ifindex.get_name_leafdata());
    if (sham_link_keychain_id.is_set || is_set(sham_link_keychain_id.operation)) leaf_name_data.push_back(sham_link_keychain_id.get_name_leafdata());
    if (sham_link_last_nsf.is_set || is_set(sham_link_last_nsf.operation)) leaf_name_data.push_back(sham_link_last_nsf.get_name_leafdata());
    if (sham_link_name_xr.is_set || is_set(sham_link_name_xr.operation)) leaf_name_data.push_back(sham_link_name_xr.get_name_leafdata());
    if (sham_link_neighbor_id.is_set || is_set(sham_link_neighbor_id.operation)) leaf_name_data.push_back(sham_link_neighbor_id.get_name_leafdata());
    if (sham_link_next_hello.is_set || is_set(sham_link_next_hello.operation)) leaf_name_data.push_back(sham_link_next_hello.get_name_leafdata());
    if (sham_link_next_hello_ms.is_set || is_set(sham_link_next_hello_ms.operation)) leaf_name_data.push_back(sham_link_next_hello_ms.get_name_leafdata());
    if (sham_link_nsf.is_set || is_set(sham_link_nsf.operation)) leaf_name_data.push_back(sham_link_nsf.get_name_leafdata());
    if (sham_link_nsf_enabled.is_set || is_set(sham_link_nsf_enabled.operation)) leaf_name_data.push_back(sham_link_nsf_enabled.get_name_leafdata());
    if (sham_link_old_md_key_count.is_set || is_set(sham_link_old_md_key_count.operation)) leaf_name_data.push_back(sham_link_old_md_key_count.get_name_leafdata());
    if (sham_link_passive.is_set || is_set(sham_link_passive.operation)) leaf_name_data.push_back(sham_link_passive.get_name_leafdata());
    if (sham_link_retransmission_interval.is_set || is_set(sham_link_retransmission_interval.operation)) leaf_name_data.push_back(sham_link_retransmission_interval.get_name_leafdata());
    if (sham_link_source_address.is_set || is_set(sham_link_source_address.operation)) leaf_name_data.push_back(sham_link_source_address.get_name_leafdata());
    if (sham_link_state.is_set || is_set(sham_link_state.operation)) leaf_name_data.push_back(sham_link_state.get_name_leafdata());
    if (sham_link_transmission_delay.is_set || is_set(sham_link_transmission_delay.operation)) leaf_name_data.push_back(sham_link_transmission_delay.get_name_leafdata());
    if (sham_link_wait_interval.is_set || is_set(sham_link_wait_interval.operation)) leaf_name_data.push_back(sham_link_wait_interval.get_name_leafdata());
    if (sham_link_youngest_md_key.is_set || is_set(sham_link_youngest_md_key.operation)) leaf_name_data.push_back(sham_link_youngest_md_key.get_name_leafdata());
    if (sham_link_youngest_md_key_id.is_set || is_set(sham_link_youngest_md_key_id.operation)) leaf_name_data.push_back(sham_link_youngest_md_key_id.get_name_leafdata());

    auto sham_link_md_key_name_datas = sham_link_md_key.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), sham_link_md_key_name_datas.begin(), sham_link_md_key_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::InterfaceVrfInformation::ShamLinks::ShamLink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            sham_link_neighbor = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::InterfaceVrfInformation::ShamLinks::ShamLink::ShamLinkNeighbor>();
            sham_link_neighbor->parent = this;
            children["sham-link-neighbor"] = sham_link_neighbor;
        }
        return children.at("sham-link-neighbor");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::InterfaceVrfInformation::ShamLinks::ShamLink::get_children()
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

void Ospf::Processes::Process::Vrfs::Vrf::InterfaceVrfInformation::ShamLinks::ShamLink::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "sham-link-name")
    {
        sham_link_name = value;
    }
    if(value_path == "sham-link-area")
    {
        sham_link_area = value;
    }
    if(value_path == "sham-link-authentication-type")
    {
        sham_link_authentication_type = value;
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
    if(value_path == "sham-link-hello-interval")
    {
        sham_link_hello_interval = value;
    }
    if(value_path == "sham-link-hello-interval-ms")
    {
        sham_link_hello_interval_ms = value;
    }
    if(value_path == "sham-link-ifindex")
    {
        sham_link_ifindex = value;
    }
    if(value_path == "sham-link-keychain-id")
    {
        sham_link_keychain_id = value;
    }
    if(value_path == "sham-link-last-nsf")
    {
        sham_link_last_nsf = value;
    }
    if(value_path == "sham-link-md-key")
    {
        sham_link_md_key.append(value);
    }
    if(value_path == "sham-link-name-xr")
    {
        sham_link_name_xr = value;
    }
    if(value_path == "sham-link-neighbor-id")
    {
        sham_link_neighbor_id = value;
    }
    if(value_path == "sham-link-next-hello")
    {
        sham_link_next_hello = value;
    }
    if(value_path == "sham-link-next-hello-ms")
    {
        sham_link_next_hello_ms = value;
    }
    if(value_path == "sham-link-nsf")
    {
        sham_link_nsf = value;
    }
    if(value_path == "sham-link-nsf-enabled")
    {
        sham_link_nsf_enabled = value;
    }
    if(value_path == "sham-link-old-md-key-count")
    {
        sham_link_old_md_key_count = value;
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
    if(value_path == "sham-link-youngest-md-key")
    {
        sham_link_youngest_md_key = value;
    }
    if(value_path == "sham-link-youngest-md-key-id")
    {
        sham_link_youngest_md_key_id = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::InterfaceVrfInformation::ShamLinks::ShamLink::ShamLinkNeighbor::ShamLinkNeighbor()
    :
    sham_link_state{YType::enumeration, "sham-link-state"},
    sham_link_suppress_hello{YType::boolean, "sham-link-suppress-hello"}
    	,
    sham_link_retransmissoin(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::InterfaceVrfInformation::ShamLinks::ShamLink::ShamLinkNeighbor::ShamLinkRetransmissoin>())
{
    sham_link_retransmissoin->parent = this;
    children["sham-link-retransmissoin"] = sham_link_retransmissoin;

    yang_name = "sham-link-neighbor"; yang_parent_name = "sham-link";
}

Ospf::Processes::Process::Vrfs::Vrf::InterfaceVrfInformation::ShamLinks::ShamLink::ShamLinkNeighbor::~ShamLinkNeighbor()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::InterfaceVrfInformation::ShamLinks::ShamLink::ShamLinkNeighbor::has_data() const
{
    return sham_link_state.is_set
	|| sham_link_suppress_hello.is_set
	|| (sham_link_retransmissoin !=  nullptr && sham_link_retransmissoin->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::InterfaceVrfInformation::ShamLinks::ShamLink::ShamLinkNeighbor::has_operation() const
{
    return is_set(operation)
	|| is_set(sham_link_state.operation)
	|| is_set(sham_link_suppress_hello.operation)
	|| (sham_link_retransmissoin !=  nullptr && sham_link_retransmissoin->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::InterfaceVrfInformation::ShamLinks::ShamLink::ShamLinkNeighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sham-link-neighbor";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::InterfaceVrfInformation::ShamLinks::ShamLink::ShamLinkNeighbor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ShamLinkNeighbor' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::InterfaceVrfInformation::ShamLinks::ShamLink::ShamLinkNeighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "sham-link-retransmissoin")
    {
        if(sham_link_retransmissoin != nullptr)
        {
            children["sham-link-retransmissoin"] = sham_link_retransmissoin;
        }
        else
        {
            sham_link_retransmissoin = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::InterfaceVrfInformation::ShamLinks::ShamLink::ShamLinkNeighbor::ShamLinkRetransmissoin>();
            sham_link_retransmissoin->parent = this;
            children["sham-link-retransmissoin"] = sham_link_retransmissoin;
        }
        return children.at("sham-link-retransmissoin");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::InterfaceVrfInformation::ShamLinks::ShamLink::ShamLinkNeighbor::get_children()
{
    if(children.find("sham-link-retransmissoin") == children.end())
    {
        if(sham_link_retransmissoin != nullptr)
        {
            children["sham-link-retransmissoin"] = sham_link_retransmissoin;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::InterfaceVrfInformation::ShamLinks::ShamLink::ShamLinkNeighbor::set_value(const std::string & value_path, std::string value)
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

Ospf::Processes::Process::Vrfs::Vrf::InterfaceVrfInformation::ShamLinks::ShamLink::ShamLinkNeighbor::ShamLinkRetransmissoin::ShamLinkRetransmissoin()
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
    yang_name = "sham-link-retransmissoin"; yang_parent_name = "sham-link-neighbor";
}

Ospf::Processes::Process::Vrfs::Vrf::InterfaceVrfInformation::ShamLinks::ShamLink::ShamLinkNeighbor::ShamLinkRetransmissoin::~ShamLinkRetransmissoin()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::InterfaceVrfInformation::ShamLinks::ShamLink::ShamLinkNeighbor::ShamLinkRetransmissoin::has_data() const
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

bool Ospf::Processes::Process::Vrfs::Vrf::InterfaceVrfInformation::ShamLinks::ShamLink::ShamLinkNeighbor::ShamLinkRetransmissoin::has_operation() const
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

std::string Ospf::Processes::Process::Vrfs::Vrf::InterfaceVrfInformation::ShamLinks::ShamLink::ShamLinkNeighbor::ShamLinkRetransmissoin::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sham-link-retransmissoin";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::InterfaceVrfInformation::ShamLinks::ShamLink::ShamLinkNeighbor::ShamLinkRetransmissoin::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ShamLinkRetransmissoin' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::InterfaceVrfInformation::ShamLinks::ShamLink::ShamLinkNeighbor::ShamLinkRetransmissoin::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::InterfaceVrfInformation::ShamLinks::ShamLink::ShamLinkNeighbor::ShamLinkRetransmissoin::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::InterfaceVrfInformation::ShamLinks::ShamLink::ShamLinkNeighbor::ShamLinkRetransmissoin::set_value(const std::string & value_path, std::string value)
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

Ospf::Processes::Process::Vrfs::Vrf::FloodListTable::FloodListTable()
{
    yang_name = "flood-list-table"; yang_parent_name = "vrf";
}

Ospf::Processes::Process::Vrfs::Vrf::FloodListTable::~FloodListTable()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::FloodListTable::has_data() const
{
    for (std::size_t index=0; index<flood.size(); index++)
    {
        if(flood[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::FloodListTable::has_operation() const
{
    for (std::size_t index=0; index<flood.size(); index++)
    {
        if(flood[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::FloodListTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flood-list-table";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::FloodListTable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FloodListTable' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::FloodListTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::FloodListTable::Flood>();
        c->parent = this;
        flood.push_back(std::move(c));
        children[segment_path] = flood.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::FloodListTable::get_children()
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

void Ospf::Processes::Process::Vrfs::Vrf::FloodListTable::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::Vrfs::Vrf::FloodListTable::Flood::Flood()
    :
    interface_name{YType::str, "interface-name"},
    flood_interface_name{YType::str, "flood-interface-name"},
    flood_lsa_count{YType::uint32, "flood-lsa-count"},
    flood_pacing_timer{YType::uint32, "flood-pacing-timer"}
{
    yang_name = "flood"; yang_parent_name = "flood-list-table";
}

Ospf::Processes::Process::Vrfs::Vrf::FloodListTable::Flood::~Flood()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::FloodListTable::Flood::has_data() const
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

bool Ospf::Processes::Process::Vrfs::Vrf::FloodListTable::Flood::has_operation() const
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
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(flood_interface_name.operation)
	|| is_set(flood_lsa_count.operation)
	|| is_set(flood_pacing_timer.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::FloodListTable::Flood::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flood" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::FloodListTable::Flood::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Flood' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (flood_interface_name.is_set || is_set(flood_interface_name.operation)) leaf_name_data.push_back(flood_interface_name.get_name_leafdata());
    if (flood_lsa_count.is_set || is_set(flood_lsa_count.operation)) leaf_name_data.push_back(flood_lsa_count.get_name_leafdata());
    if (flood_pacing_timer.is_set || is_set(flood_pacing_timer.operation)) leaf_name_data.push_back(flood_pacing_timer.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::FloodListTable::Flood::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::FloodListTable::Flood::AreaFlood>();
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
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::FloodListTable::Flood::AsFlood>();
        c->parent = this;
        as_flood.push_back(std::move(c));
        children[segment_path] = as_flood.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::FloodListTable::Flood::get_children()
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

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::FloodListTable::Flood::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "flood-interface-name")
    {
        flood_interface_name = value;
    }
    if(value_path == "flood-lsa-count")
    {
        flood_lsa_count = value;
    }
    if(value_path == "flood-pacing-timer")
    {
        flood_pacing_timer = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::FloodListTable::Flood::AreaFlood::AreaFlood()
    :
    header_advertising_router{YType::str, "header-advertising-router"},
    header_ls_id{YType::str, "header-ls-id"},
    header_lsa_age{YType::uint16, "header-lsa-age"},
    header_lsa_checksum{YType::uint16, "header-lsa-checksum"},
    header_lsa_type{YType::enumeration, "header-lsa-type"},
    header_sequence_number{YType::uint32, "header-sequence-number"}
{
    yang_name = "area-flood"; yang_parent_name = "flood";
}

Ospf::Processes::Process::Vrfs::Vrf::FloodListTable::Flood::AreaFlood::~AreaFlood()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::FloodListTable::Flood::AreaFlood::has_data() const
{
    return header_advertising_router.is_set
	|| header_ls_id.is_set
	|| header_lsa_age.is_set
	|| header_lsa_checksum.is_set
	|| header_lsa_type.is_set
	|| header_sequence_number.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::FloodListTable::Flood::AreaFlood::has_operation() const
{
    return is_set(operation)
	|| is_set(header_advertising_router.operation)
	|| is_set(header_ls_id.operation)
	|| is_set(header_lsa_age.operation)
	|| is_set(header_lsa_checksum.operation)
	|| is_set(header_lsa_type.operation)
	|| is_set(header_sequence_number.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::FloodListTable::Flood::AreaFlood::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "area-flood";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::FloodListTable::Flood::AreaFlood::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AreaFlood' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::FloodListTable::Flood::AreaFlood::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::FloodListTable::Flood::AreaFlood::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::FloodListTable::Flood::AreaFlood::set_value(const std::string & value_path, std::string value)
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

Ospf::Processes::Process::Vrfs::Vrf::FloodListTable::Flood::AsFlood::AsFlood()
    :
    header_advertising_router{YType::str, "header-advertising-router"},
    header_ls_id{YType::str, "header-ls-id"},
    header_lsa_age{YType::uint16, "header-lsa-age"},
    header_lsa_checksum{YType::uint16, "header-lsa-checksum"},
    header_lsa_type{YType::enumeration, "header-lsa-type"},
    header_sequence_number{YType::uint32, "header-sequence-number"}
{
    yang_name = "as-flood"; yang_parent_name = "flood";
}

Ospf::Processes::Process::Vrfs::Vrf::FloodListTable::Flood::AsFlood::~AsFlood()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::FloodListTable::Flood::AsFlood::has_data() const
{
    return header_advertising_router.is_set
	|| header_ls_id.is_set
	|| header_lsa_age.is_set
	|| header_lsa_checksum.is_set
	|| header_lsa_type.is_set
	|| header_sequence_number.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::FloodListTable::Flood::AsFlood::has_operation() const
{
    return is_set(operation)
	|| is_set(header_advertising_router.operation)
	|| is_set(header_ls_id.operation)
	|| is_set(header_lsa_age.operation)
	|| is_set(header_lsa_checksum.operation)
	|| is_set(header_lsa_type.operation)
	|| is_set(header_sequence_number.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::FloodListTable::Flood::AsFlood::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "as-flood";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::FloodListTable::Flood::AsFlood::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AsFlood' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::FloodListTable::Flood::AsFlood::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::FloodListTable::Flood::AsFlood::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::FloodListTable::Flood::AsFlood::set_value(const std::string & value_path, std::string value)
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

Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTe()
    :
    mpls_te_fragments(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments>())
	,mpls_te_links(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks>())
{
    mpls_te_fragments->parent = this;
    children["mpls-te-fragments"] = mpls_te_fragments;

    mpls_te_links->parent = this;
    children["mpls-te-links"] = mpls_te_links;

    yang_name = "mpls-te"; yang_parent_name = "vrf";
}

Ospf::Processes::Process::Vrfs::Vrf::MplsTe::~MplsTe()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::MplsTe::has_data() const
{
    return (mpls_te_fragments !=  nullptr && mpls_te_fragments->has_data())
	|| (mpls_te_links !=  nullptr && mpls_te_links->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::MplsTe::has_operation() const
{
    return is_set(operation)
	|| (mpls_te_fragments !=  nullptr && mpls_te_fragments->has_operation())
	|| (mpls_te_links !=  nullptr && mpls_te_links->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::MplsTe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-te";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::MplsTe::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MplsTe' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::MplsTe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "mpls-te-fragments")
    {
        if(mpls_te_fragments != nullptr)
        {
            children["mpls-te-fragments"] = mpls_te_fragments;
        }
        else
        {
            mpls_te_fragments = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments>();
            mpls_te_fragments->parent = this;
            children["mpls-te-fragments"] = mpls_te_fragments;
        }
        return children.at("mpls-te-fragments");
    }

    if(child_yang_name == "mpls-te-links")
    {
        if(mpls_te_links != nullptr)
        {
            children["mpls-te-links"] = mpls_te_links;
        }
        else
        {
            mpls_te_links = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks>();
            mpls_te_links->parent = this;
            children["mpls-te-links"] = mpls_te_links;
        }
        return children.at("mpls-te-links");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::MplsTe::get_children()
{
    if(children.find("mpls-te-fragments") == children.end())
    {
        if(mpls_te_fragments != nullptr)
        {
            children["mpls-te-fragments"] = mpls_te_fragments;
        }
    }

    if(children.find("mpls-te-links") == children.end())
    {
        if(mpls_te_links != nullptr)
        {
            children["mpls-te-links"] = mpls_te_links;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::MplsTe::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLinks()
{
    yang_name = "mpls-te-links"; yang_parent_name = "mpls-te";
}

Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::~MplsTeLinks()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::has_data() const
{
    for (std::size_t index=0; index<mpls_te_link.size(); index++)
    {
        if(mpls_te_link[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::has_operation() const
{
    for (std::size_t index=0; index<mpls_te_link.size(); index++)
    {
        if(mpls_te_link[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-te-links";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MplsTeLinks' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "mpls-te-link")
    {
        for(auto const & c : mpls_te_link)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink>();
        c->parent = this;
        mpls_te_link.push_back(std::move(c));
        children[segment_path] = mpls_te_link.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::get_children()
{
    for (auto const & c : mpls_te_link)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink()
    :
    area_id{YType::int32, "area-id"},
    mpls_te_area_id{YType::str, "mpls-te-area-id"},
    mpls_te_area_instance{YType::uint32, "mpls-te-area-instance"},
    mpls_te_enabled{YType::boolean, "mpls-te-enabled"},
    mpls_te_initialized{YType::boolean, "mpls-te-initialized"},
    mpls_te_next_fragment_id{YType::uint32, "mpls-te-next-fragment-id"},
    mpls_te_router_address{YType::str, "mpls-te-router-address"},
    mpls_te_router_id{YType::str, "mpls-te-router-id"},
    spacious_fragment{YType::boolean, "spacious-fragment"}
{
    yang_name = "mpls-te-link"; yang_parent_name = "mpls-te-links";
}

Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::~MplsTeLink()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::has_data() const
{
    for (std::size_t index=0; index<mpls_te_fragment.size(); index++)
    {
        if(mpls_te_fragment[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<mpls_te_link.size(); index++)
    {
        if(mpls_te_link[index]->has_data())
            return true;
    }
    return area_id.is_set
	|| mpls_te_area_id.is_set
	|| mpls_te_area_instance.is_set
	|| mpls_te_enabled.is_set
	|| mpls_te_initialized.is_set
	|| mpls_te_next_fragment_id.is_set
	|| mpls_te_router_address.is_set
	|| mpls_te_router_id.is_set
	|| spacious_fragment.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::has_operation() const
{
    for (std::size_t index=0; index<mpls_te_fragment.size(); index++)
    {
        if(mpls_te_fragment[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<mpls_te_link.size(); index++)
    {
        if(mpls_te_link[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(area_id.operation)
	|| is_set(mpls_te_area_id.operation)
	|| is_set(mpls_te_area_instance.operation)
	|| is_set(mpls_te_enabled.operation)
	|| is_set(mpls_te_initialized.operation)
	|| is_set(mpls_te_next_fragment_id.operation)
	|| is_set(mpls_te_router_address.operation)
	|| is_set(mpls_te_router_id.operation)
	|| is_set(spacious_fragment.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-te-link" <<"[area-id='" <<area_id <<"']";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MplsTeLink' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_id.is_set || is_set(area_id.operation)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (mpls_te_area_id.is_set || is_set(mpls_te_area_id.operation)) leaf_name_data.push_back(mpls_te_area_id.get_name_leafdata());
    if (mpls_te_area_instance.is_set || is_set(mpls_te_area_instance.operation)) leaf_name_data.push_back(mpls_te_area_instance.get_name_leafdata());
    if (mpls_te_enabled.is_set || is_set(mpls_te_enabled.operation)) leaf_name_data.push_back(mpls_te_enabled.get_name_leafdata());
    if (mpls_te_initialized.is_set || is_set(mpls_te_initialized.operation)) leaf_name_data.push_back(mpls_te_initialized.get_name_leafdata());
    if (mpls_te_next_fragment_id.is_set || is_set(mpls_te_next_fragment_id.operation)) leaf_name_data.push_back(mpls_te_next_fragment_id.get_name_leafdata());
    if (mpls_te_router_address.is_set || is_set(mpls_te_router_address.operation)) leaf_name_data.push_back(mpls_te_router_address.get_name_leafdata());
    if (mpls_te_router_id.is_set || is_set(mpls_te_router_id.operation)) leaf_name_data.push_back(mpls_te_router_id.get_name_leafdata());
    if (spacious_fragment.is_set || is_set(spacious_fragment.operation)) leaf_name_data.push_back(spacious_fragment.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "mpls-te-fragment")
    {
        for(auto const & c : mpls_te_fragment)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment>();
        c->parent = this;
        mpls_te_fragment.push_back(std::move(c));
        children[segment_path] = mpls_te_fragment.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "mpls-te-link")
    {
        for(auto const & c : mpls_te_link)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_>();
        c->parent = this;
        mpls_te_link.push_back(std::move(c));
        children[segment_path] = mpls_te_link.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::get_children()
{
    for (auto const & c : mpls_te_fragment)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : mpls_te_link)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "area-id")
    {
        area_id = value;
    }
    if(value_path == "mpls-te-area-id")
    {
        mpls_te_area_id = value;
    }
    if(value_path == "mpls-te-area-instance")
    {
        mpls_te_area_instance = value;
    }
    if(value_path == "mpls-te-enabled")
    {
        mpls_te_enabled = value;
    }
    if(value_path == "mpls-te-initialized")
    {
        mpls_te_initialized = value;
    }
    if(value_path == "mpls-te-next-fragment-id")
    {
        mpls_te_next_fragment_id = value;
    }
    if(value_path == "mpls-te-router-address")
    {
        mpls_te_router_address = value;
    }
    if(value_path == "mpls-te-router-id")
    {
        mpls_te_router_id = value;
    }
    if(value_path == "spacious-fragment")
    {
        spacious_fragment = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsTeLink_()
    :
    affinity{YType::uint32, "affinity"},
    dste_allocation_model_id{YType::enumeration, "dste-allocation-model-id"},
    dste_in_use{YType::boolean, "dste-in-use"},
    fragment_id{YType::uint32, "fragment-id"},
    igp_metric{YType::uint32, "igp-metric"},
    input_interface_id{YType::uint32, "input-interface-id"},
    link_address{YType::str, "link-address"},
    maximum_link_bw{YType::uint32, "maximum-link-bw"},
    maximum_link_reservable_bw{YType::uint32, "maximum-link-reservable-bw"},
    maximum_link_sub_reservable_bw{YType::uint32, "maximum-link-sub-reservable-bw"},
    mpls_link_instance{YType::uint32, "mpls-link-instance"},
    mpls_link_type{YType::enumeration, "mpls-link-type"},
    neighbor_ip_address{YType::str, "neighbor-ip-address"},
    neighbor_system_id{YType::str, "neighbor-system-id"},
    new_link{YType::boolean, "new-link"},
    number_of_optional_tl_vs{YType::uint8, "number-of-optional-tl-vs"},
    output_interface_id{YType::uint32, "output-interface-id"},
    priority_count{YType::int32, "priority-count"},
    te_metric{YType::uint32, "te-metric"}
    	,
    extended_admin_group_list(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::ExtendedAdminGroupList>())
	,global_unreserve_bw_per_priority(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::GlobalUnreserveBwPerPriority>())
	,link_protocol_priority_capability(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::LinkProtocolPriorityCapability>())
	,link_sw_capability(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::LinkSwCapability>())
	,sub_pool_unreserve_bw_per_priority(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::SubPoolUnreserveBwPerPriority>())
{
    extended_admin_group_list->parent = this;
    children["extended-admin-group-list"] = extended_admin_group_list;

    global_unreserve_bw_per_priority->parent = this;
    children["global-unreserve-bw-per-priority"] = global_unreserve_bw_per_priority;

    link_protocol_priority_capability->parent = this;
    children["link-protocol-priority-capability"] = link_protocol_priority_capability;

    link_sw_capability->parent = this;
    children["link-sw-capability"] = link_sw_capability;

    sub_pool_unreserve_bw_per_priority->parent = this;
    children["sub-pool-unreserve-bw-per-priority"] = sub_pool_unreserve_bw_per_priority;

    yang_name = "mpls-te-link"; yang_parent_name = "mpls-te-link";
}

Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::~MplsTeLink_()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::has_data() const
{
    for (std::size_t index=0; index<mplste_link_opt_tlv.size(); index++)
    {
        if(mplste_link_opt_tlv[index]->has_data())
            return true;
    }
    return affinity.is_set
	|| dste_allocation_model_id.is_set
	|| dste_in_use.is_set
	|| fragment_id.is_set
	|| igp_metric.is_set
	|| input_interface_id.is_set
	|| link_address.is_set
	|| maximum_link_bw.is_set
	|| maximum_link_reservable_bw.is_set
	|| maximum_link_sub_reservable_bw.is_set
	|| mpls_link_instance.is_set
	|| mpls_link_type.is_set
	|| neighbor_ip_address.is_set
	|| neighbor_system_id.is_set
	|| new_link.is_set
	|| number_of_optional_tl_vs.is_set
	|| output_interface_id.is_set
	|| priority_count.is_set
	|| te_metric.is_set
	|| (extended_admin_group_list !=  nullptr && extended_admin_group_list->has_data())
	|| (global_unreserve_bw_per_priority !=  nullptr && global_unreserve_bw_per_priority->has_data())
	|| (link_protocol_priority_capability !=  nullptr && link_protocol_priority_capability->has_data())
	|| (link_sw_capability !=  nullptr && link_sw_capability->has_data())
	|| (sub_pool_unreserve_bw_per_priority !=  nullptr && sub_pool_unreserve_bw_per_priority->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::has_operation() const
{
    for (std::size_t index=0; index<mplste_link_opt_tlv.size(); index++)
    {
        if(mplste_link_opt_tlv[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(affinity.operation)
	|| is_set(dste_allocation_model_id.operation)
	|| is_set(dste_in_use.operation)
	|| is_set(fragment_id.operation)
	|| is_set(igp_metric.operation)
	|| is_set(input_interface_id.operation)
	|| is_set(link_address.operation)
	|| is_set(maximum_link_bw.operation)
	|| is_set(maximum_link_reservable_bw.operation)
	|| is_set(maximum_link_sub_reservable_bw.operation)
	|| is_set(mpls_link_instance.operation)
	|| is_set(mpls_link_type.operation)
	|| is_set(neighbor_ip_address.operation)
	|| is_set(neighbor_system_id.operation)
	|| is_set(new_link.operation)
	|| is_set(number_of_optional_tl_vs.operation)
	|| is_set(output_interface_id.operation)
	|| is_set(priority_count.operation)
	|| is_set(te_metric.operation)
	|| (extended_admin_group_list !=  nullptr && extended_admin_group_list->has_operation())
	|| (global_unreserve_bw_per_priority !=  nullptr && global_unreserve_bw_per_priority->has_operation())
	|| (link_protocol_priority_capability !=  nullptr && link_protocol_priority_capability->has_operation())
	|| (link_sw_capability !=  nullptr && link_sw_capability->has_operation())
	|| (sub_pool_unreserve_bw_per_priority !=  nullptr && sub_pool_unreserve_bw_per_priority->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-te-link";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MplsTeLink_' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity.is_set || is_set(affinity.operation)) leaf_name_data.push_back(affinity.get_name_leafdata());
    if (dste_allocation_model_id.is_set || is_set(dste_allocation_model_id.operation)) leaf_name_data.push_back(dste_allocation_model_id.get_name_leafdata());
    if (dste_in_use.is_set || is_set(dste_in_use.operation)) leaf_name_data.push_back(dste_in_use.get_name_leafdata());
    if (fragment_id.is_set || is_set(fragment_id.operation)) leaf_name_data.push_back(fragment_id.get_name_leafdata());
    if (igp_metric.is_set || is_set(igp_metric.operation)) leaf_name_data.push_back(igp_metric.get_name_leafdata());
    if (input_interface_id.is_set || is_set(input_interface_id.operation)) leaf_name_data.push_back(input_interface_id.get_name_leafdata());
    if (link_address.is_set || is_set(link_address.operation)) leaf_name_data.push_back(link_address.get_name_leafdata());
    if (maximum_link_bw.is_set || is_set(maximum_link_bw.operation)) leaf_name_data.push_back(maximum_link_bw.get_name_leafdata());
    if (maximum_link_reservable_bw.is_set || is_set(maximum_link_reservable_bw.operation)) leaf_name_data.push_back(maximum_link_reservable_bw.get_name_leafdata());
    if (maximum_link_sub_reservable_bw.is_set || is_set(maximum_link_sub_reservable_bw.operation)) leaf_name_data.push_back(maximum_link_sub_reservable_bw.get_name_leafdata());
    if (mpls_link_instance.is_set || is_set(mpls_link_instance.operation)) leaf_name_data.push_back(mpls_link_instance.get_name_leafdata());
    if (mpls_link_type.is_set || is_set(mpls_link_type.operation)) leaf_name_data.push_back(mpls_link_type.get_name_leafdata());
    if (neighbor_ip_address.is_set || is_set(neighbor_ip_address.operation)) leaf_name_data.push_back(neighbor_ip_address.get_name_leafdata());
    if (neighbor_system_id.is_set || is_set(neighbor_system_id.operation)) leaf_name_data.push_back(neighbor_system_id.get_name_leafdata());
    if (new_link.is_set || is_set(new_link.operation)) leaf_name_data.push_back(new_link.get_name_leafdata());
    if (number_of_optional_tl_vs.is_set || is_set(number_of_optional_tl_vs.operation)) leaf_name_data.push_back(number_of_optional_tl_vs.get_name_leafdata());
    if (output_interface_id.is_set || is_set(output_interface_id.operation)) leaf_name_data.push_back(output_interface_id.get_name_leafdata());
    if (priority_count.is_set || is_set(priority_count.operation)) leaf_name_data.push_back(priority_count.get_name_leafdata());
    if (te_metric.is_set || is_set(te_metric.operation)) leaf_name_data.push_back(te_metric.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "extended-admin-group-list")
    {
        if(extended_admin_group_list != nullptr)
        {
            children["extended-admin-group-list"] = extended_admin_group_list;
        }
        else
        {
            extended_admin_group_list = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::ExtendedAdminGroupList>();
            extended_admin_group_list->parent = this;
            children["extended-admin-group-list"] = extended_admin_group_list;
        }
        return children.at("extended-admin-group-list");
    }

    if(child_yang_name == "global-unreserve-bw-per-priority")
    {
        if(global_unreserve_bw_per_priority != nullptr)
        {
            children["global-unreserve-bw-per-priority"] = global_unreserve_bw_per_priority;
        }
        else
        {
            global_unreserve_bw_per_priority = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::GlobalUnreserveBwPerPriority>();
            global_unreserve_bw_per_priority->parent = this;
            children["global-unreserve-bw-per-priority"] = global_unreserve_bw_per_priority;
        }
        return children.at("global-unreserve-bw-per-priority");
    }

    if(child_yang_name == "link-protocol-priority-capability")
    {
        if(link_protocol_priority_capability != nullptr)
        {
            children["link-protocol-priority-capability"] = link_protocol_priority_capability;
        }
        else
        {
            link_protocol_priority_capability = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::LinkProtocolPriorityCapability>();
            link_protocol_priority_capability->parent = this;
            children["link-protocol-priority-capability"] = link_protocol_priority_capability;
        }
        return children.at("link-protocol-priority-capability");
    }

    if(child_yang_name == "link-sw-capability")
    {
        if(link_sw_capability != nullptr)
        {
            children["link-sw-capability"] = link_sw_capability;
        }
        else
        {
            link_sw_capability = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::LinkSwCapability>();
            link_sw_capability->parent = this;
            children["link-sw-capability"] = link_sw_capability;
        }
        return children.at("link-sw-capability");
    }

    if(child_yang_name == "mplste-link-opt-tlv")
    {
        for(auto const & c : mplste_link_opt_tlv)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv>();
        c->parent = this;
        mplste_link_opt_tlv.push_back(std::move(c));
        children[segment_path] = mplste_link_opt_tlv.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "sub-pool-unreserve-bw-per-priority")
    {
        if(sub_pool_unreserve_bw_per_priority != nullptr)
        {
            children["sub-pool-unreserve-bw-per-priority"] = sub_pool_unreserve_bw_per_priority;
        }
        else
        {
            sub_pool_unreserve_bw_per_priority = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::SubPoolUnreserveBwPerPriority>();
            sub_pool_unreserve_bw_per_priority->parent = this;
            children["sub-pool-unreserve-bw-per-priority"] = sub_pool_unreserve_bw_per_priority;
        }
        return children.at("sub-pool-unreserve-bw-per-priority");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::get_children()
{
    if(children.find("extended-admin-group-list") == children.end())
    {
        if(extended_admin_group_list != nullptr)
        {
            children["extended-admin-group-list"] = extended_admin_group_list;
        }
    }

    if(children.find("global-unreserve-bw-per-priority") == children.end())
    {
        if(global_unreserve_bw_per_priority != nullptr)
        {
            children["global-unreserve-bw-per-priority"] = global_unreserve_bw_per_priority;
        }
    }

    if(children.find("link-protocol-priority-capability") == children.end())
    {
        if(link_protocol_priority_capability != nullptr)
        {
            children["link-protocol-priority-capability"] = link_protocol_priority_capability;
        }
    }

    if(children.find("link-sw-capability") == children.end())
    {
        if(link_sw_capability != nullptr)
        {
            children["link-sw-capability"] = link_sw_capability;
        }
    }

    for (auto const & c : mplste_link_opt_tlv)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("sub-pool-unreserve-bw-per-priority") == children.end())
    {
        if(sub_pool_unreserve_bw_per_priority != nullptr)
        {
            children["sub-pool-unreserve-bw-per-priority"] = sub_pool_unreserve_bw_per_priority;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "affinity")
    {
        affinity = value;
    }
    if(value_path == "dste-allocation-model-id")
    {
        dste_allocation_model_id = value;
    }
    if(value_path == "dste-in-use")
    {
        dste_in_use = value;
    }
    if(value_path == "fragment-id")
    {
        fragment_id = value;
    }
    if(value_path == "igp-metric")
    {
        igp_metric = value;
    }
    if(value_path == "input-interface-id")
    {
        input_interface_id = value;
    }
    if(value_path == "link-address")
    {
        link_address = value;
    }
    if(value_path == "maximum-link-bw")
    {
        maximum_link_bw = value;
    }
    if(value_path == "maximum-link-reservable-bw")
    {
        maximum_link_reservable_bw = value;
    }
    if(value_path == "maximum-link-sub-reservable-bw")
    {
        maximum_link_sub_reservable_bw = value;
    }
    if(value_path == "mpls-link-instance")
    {
        mpls_link_instance = value;
    }
    if(value_path == "mpls-link-type")
    {
        mpls_link_type = value;
    }
    if(value_path == "neighbor-ip-address")
    {
        neighbor_ip_address = value;
    }
    if(value_path == "neighbor-system-id")
    {
        neighbor_system_id = value;
    }
    if(value_path == "new-link")
    {
        new_link = value;
    }
    if(value_path == "number-of-optional-tl-vs")
    {
        number_of_optional_tl_vs = value;
    }
    if(value_path == "output-interface-id")
    {
        output_interface_id = value;
    }
    if(value_path == "priority-count")
    {
        priority_count = value;
    }
    if(value_path == "te-metric")
    {
        te_metric = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::GlobalUnreserveBwPerPriority::GlobalUnreserveBwPerPriority()
    :
    bw_per_priority{YType::uint64, "bw-per-priority"}
{
    yang_name = "global-unreserve-bw-per-priority"; yang_parent_name = "mpls-te-link";
}

Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::GlobalUnreserveBwPerPriority::~GlobalUnreserveBwPerPriority()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::GlobalUnreserveBwPerPriority::has_data() const
{
    for (auto const & leaf : bw_per_priority.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::GlobalUnreserveBwPerPriority::has_operation() const
{
    for (auto const & leaf : bw_per_priority.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(bw_per_priority.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::GlobalUnreserveBwPerPriority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-unreserve-bw-per-priority";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::GlobalUnreserveBwPerPriority::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GlobalUnreserveBwPerPriority' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto bw_per_priority_name_datas = bw_per_priority.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), bw_per_priority_name_datas.begin(), bw_per_priority_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::GlobalUnreserveBwPerPriority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::GlobalUnreserveBwPerPriority::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::GlobalUnreserveBwPerPriority::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bw-per-priority")
    {
        bw_per_priority.append(value);
    }
}

Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::SubPoolUnreserveBwPerPriority::SubPoolUnreserveBwPerPriority()
    :
    bw_per_priority{YType::uint64, "bw-per-priority"}
{
    yang_name = "sub-pool-unreserve-bw-per-priority"; yang_parent_name = "mpls-te-link";
}

Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::SubPoolUnreserveBwPerPriority::~SubPoolUnreserveBwPerPriority()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::SubPoolUnreserveBwPerPriority::has_data() const
{
    for (auto const & leaf : bw_per_priority.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::SubPoolUnreserveBwPerPriority::has_operation() const
{
    for (auto const & leaf : bw_per_priority.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(bw_per_priority.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::SubPoolUnreserveBwPerPriority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sub-pool-unreserve-bw-per-priority";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::SubPoolUnreserveBwPerPriority::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SubPoolUnreserveBwPerPriority' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto bw_per_priority_name_datas = bw_per_priority.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), bw_per_priority_name_datas.begin(), bw_per_priority_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::SubPoolUnreserveBwPerPriority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::SubPoolUnreserveBwPerPriority::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::SubPoolUnreserveBwPerPriority::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bw-per-priority")
    {
        bw_per_priority.append(value);
    }
}

Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::LinkProtocolPriorityCapability::LinkProtocolPriorityCapability()
    :
    link_protocol_capability{YType::uint8, "link-protocol-capability"},
    link_protocol_priority{YType::uint8, "link-protocol-priority"}
{
    yang_name = "link-protocol-priority-capability"; yang_parent_name = "mpls-te-link";
}

Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::LinkProtocolPriorityCapability::~LinkProtocolPriorityCapability()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::LinkProtocolPriorityCapability::has_data() const
{
    return link_protocol_capability.is_set
	|| link_protocol_priority.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::LinkProtocolPriorityCapability::has_operation() const
{
    return is_set(operation)
	|| is_set(link_protocol_capability.operation)
	|| is_set(link_protocol_priority.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::LinkProtocolPriorityCapability::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-protocol-priority-capability";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::LinkProtocolPriorityCapability::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LinkProtocolPriorityCapability' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_protocol_capability.is_set || is_set(link_protocol_capability.operation)) leaf_name_data.push_back(link_protocol_capability.get_name_leafdata());
    if (link_protocol_priority.is_set || is_set(link_protocol_priority.operation)) leaf_name_data.push_back(link_protocol_priority.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::LinkProtocolPriorityCapability::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::LinkProtocolPriorityCapability::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::LinkProtocolPriorityCapability::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "link-protocol-capability")
    {
        link_protocol_capability = value;
    }
    if(value_path == "link-protocol-priority")
    {
        link_protocol_priority = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::LinkSwCapability::LinkSwCapability()
    :
    link_encoding{YType::uint8, "link-encoding"},
    link_mtu{YType::uint16, "link-mtu"},
    link_switching_capability{YType::uint8, "link-switching-capability"},
    maximum_lsp_bw_per_priority{YType::uint64, "maximum-lsp-bw-per-priority"},
    minimum_lsp_bw{YType::uint64, "minimum-lsp-bw"}
{
    yang_name = "link-sw-capability"; yang_parent_name = "mpls-te-link";
}

Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::LinkSwCapability::~LinkSwCapability()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::LinkSwCapability::has_data() const
{
    for (auto const & leaf : maximum_lsp_bw_per_priority.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return link_encoding.is_set
	|| link_mtu.is_set
	|| link_switching_capability.is_set
	|| minimum_lsp_bw.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::LinkSwCapability::has_operation() const
{
    for (auto const & leaf : maximum_lsp_bw_per_priority.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(link_encoding.operation)
	|| is_set(link_mtu.operation)
	|| is_set(link_switching_capability.operation)
	|| is_set(maximum_lsp_bw_per_priority.operation)
	|| is_set(minimum_lsp_bw.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::LinkSwCapability::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-sw-capability";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::LinkSwCapability::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LinkSwCapability' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_encoding.is_set || is_set(link_encoding.operation)) leaf_name_data.push_back(link_encoding.get_name_leafdata());
    if (link_mtu.is_set || is_set(link_mtu.operation)) leaf_name_data.push_back(link_mtu.get_name_leafdata());
    if (link_switching_capability.is_set || is_set(link_switching_capability.operation)) leaf_name_data.push_back(link_switching_capability.get_name_leafdata());
    if (minimum_lsp_bw.is_set || is_set(minimum_lsp_bw.operation)) leaf_name_data.push_back(minimum_lsp_bw.get_name_leafdata());

    auto maximum_lsp_bw_per_priority_name_datas = maximum_lsp_bw_per_priority.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), maximum_lsp_bw_per_priority_name_datas.begin(), maximum_lsp_bw_per_priority_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::LinkSwCapability::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::LinkSwCapability::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::LinkSwCapability::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "link-encoding")
    {
        link_encoding = value;
    }
    if(value_path == "link-mtu")
    {
        link_mtu = value;
    }
    if(value_path == "link-switching-capability")
    {
        link_switching_capability = value;
    }
    if(value_path == "maximum-lsp-bw-per-priority")
    {
        maximum_lsp_bw_per_priority.append(value);
    }
    if(value_path == "minimum-lsp-bw")
    {
        minimum_lsp_bw = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::ExtendedAdminGroupList::ExtendedAdminGroupList()
    :
    ext_admin_data{YType::uint32, "ext-admin-data"},
    extended_admin_size{YType::uint32, "extended-admin-size"}
{
    yang_name = "extended-admin-group-list"; yang_parent_name = "mpls-te-link";
}

Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::ExtendedAdminGroupList::~ExtendedAdminGroupList()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::ExtendedAdminGroupList::has_data() const
{
    for (auto const & leaf : ext_admin_data.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return extended_admin_size.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::ExtendedAdminGroupList::has_operation() const
{
    for (auto const & leaf : ext_admin_data.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(ext_admin_data.operation)
	|| is_set(extended_admin_size.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::ExtendedAdminGroupList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-admin-group-list";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::ExtendedAdminGroupList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExtendedAdminGroupList' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (extended_admin_size.is_set || is_set(extended_admin_size.operation)) leaf_name_data.push_back(extended_admin_size.get_name_leafdata());

    auto ext_admin_data_name_datas = ext_admin_data.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), ext_admin_data_name_datas.begin(), ext_admin_data_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::ExtendedAdminGroupList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::ExtendedAdminGroupList::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::ExtendedAdminGroupList::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ext-admin-data")
    {
        ext_admin_data.append(value);
    }
    if(value_path == "extended-admin-size")
    {
        extended_admin_size = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlv()
    :
    mplste_link_opt_tlv_len{YType::uint16, "mplste-link-opt-tlv-len"},
    mplste_link_opt_tlv_type{YType::enumeration, "mplste-link-opt-tlv-type"}
{
    yang_name = "mplste-link-opt-tlv"; yang_parent_name = "mpls-te-link";
}

Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::~MplsteLinkOptTlv()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::has_data() const
{
    for (std::size_t index=0; index<mplste_link_opt_tlv_value.size(); index++)
    {
        if(mplste_link_opt_tlv_value[index]->has_data())
            return true;
    }
    return mplste_link_opt_tlv_len.is_set
	|| mplste_link_opt_tlv_type.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::has_operation() const
{
    for (std::size_t index=0; index<mplste_link_opt_tlv_value.size(); index++)
    {
        if(mplste_link_opt_tlv_value[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(mplste_link_opt_tlv_len.operation)
	|| is_set(mplste_link_opt_tlv_type.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplste-link-opt-tlv";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MplsteLinkOptTlv' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mplste_link_opt_tlv_len.is_set || is_set(mplste_link_opt_tlv_len.operation)) leaf_name_data.push_back(mplste_link_opt_tlv_len.get_name_leafdata());
    if (mplste_link_opt_tlv_type.is_set || is_set(mplste_link_opt_tlv_type.operation)) leaf_name_data.push_back(mplste_link_opt_tlv_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "mplste-link-opt-tlv-value")
    {
        for(auto const & c : mplste_link_opt_tlv_value)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue>();
        c->parent = this;
        mplste_link_opt_tlv_value.push_back(std::move(c));
        children[segment_path] = mplste_link_opt_tlv_value.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::get_children()
{
    for (auto const & c : mplste_link_opt_tlv_value)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mplste-link-opt-tlv-len")
    {
        mplste_link_opt_tlv_len = value;
    }
    if(value_path == "mplste-link-opt-tlv-type")
    {
        mplste_link_opt_tlv_type = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::MplsteLinkOptTlvValue()
    :
    opaque_tlv_type{YType::enumeration, "opaque-tlv-type"}
    	,
    bctlv_value(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue>())
	,ixcdtlv_value(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue>())
	,srlgtlv_value(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue>())
	,unidtlv_value(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue>())
{
    bctlv_value->parent = this;
    children["bctlv-value"] = bctlv_value;

    ixcdtlv_value->parent = this;
    children["ixcdtlv-value"] = ixcdtlv_value;

    srlgtlv_value->parent = this;
    children["srlgtlv-value"] = srlgtlv_value;

    unidtlv_value->parent = this;
    children["unidtlv-value"] = unidtlv_value;

    yang_name = "mplste-link-opt-tlv-value"; yang_parent_name = "mplste-link-opt-tlv";
}

Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::~MplsteLinkOptTlvValue()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::has_data() const
{
    return opaque_tlv_type.is_set
	|| (bctlv_value !=  nullptr && bctlv_value->has_data())
	|| (ixcdtlv_value !=  nullptr && ixcdtlv_value->has_data())
	|| (srlgtlv_value !=  nullptr && srlgtlv_value->has_data())
	|| (unidtlv_value !=  nullptr && unidtlv_value->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::has_operation() const
{
    return is_set(operation)
	|| is_set(opaque_tlv_type.operation)
	|| (bctlv_value !=  nullptr && bctlv_value->has_operation())
	|| (ixcdtlv_value !=  nullptr && ixcdtlv_value->has_operation())
	|| (srlgtlv_value !=  nullptr && srlgtlv_value->has_operation())
	|| (unidtlv_value !=  nullptr && unidtlv_value->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplste-link-opt-tlv-value";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MplsteLinkOptTlvValue' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (opaque_tlv_type.is_set || is_set(opaque_tlv_type.operation)) leaf_name_data.push_back(opaque_tlv_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bctlv-value")
    {
        if(bctlv_value != nullptr)
        {
            children["bctlv-value"] = bctlv_value;
        }
        else
        {
            bctlv_value = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue>();
            bctlv_value->parent = this;
            children["bctlv-value"] = bctlv_value;
        }
        return children.at("bctlv-value");
    }

    if(child_yang_name == "ixcdtlv-value")
    {
        if(ixcdtlv_value != nullptr)
        {
            children["ixcdtlv-value"] = ixcdtlv_value;
        }
        else
        {
            ixcdtlv_value = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue>();
            ixcdtlv_value->parent = this;
            children["ixcdtlv-value"] = ixcdtlv_value;
        }
        return children.at("ixcdtlv-value");
    }

    if(child_yang_name == "srlgtlv-value")
    {
        if(srlgtlv_value != nullptr)
        {
            children["srlgtlv-value"] = srlgtlv_value;
        }
        else
        {
            srlgtlv_value = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue>();
            srlgtlv_value->parent = this;
            children["srlgtlv-value"] = srlgtlv_value;
        }
        return children.at("srlgtlv-value");
    }

    if(child_yang_name == "unidtlv-value")
    {
        if(unidtlv_value != nullptr)
        {
            children["unidtlv-value"] = unidtlv_value;
        }
        else
        {
            unidtlv_value = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue>();
            unidtlv_value->parent = this;
            children["unidtlv-value"] = unidtlv_value;
        }
        return children.at("unidtlv-value");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::get_children()
{
    if(children.find("bctlv-value") == children.end())
    {
        if(bctlv_value != nullptr)
        {
            children["bctlv-value"] = bctlv_value;
        }
    }

    if(children.find("ixcdtlv-value") == children.end())
    {
        if(ixcdtlv_value != nullptr)
        {
            children["ixcdtlv-value"] = ixcdtlv_value;
        }
    }

    if(children.find("srlgtlv-value") == children.end())
    {
        if(srlgtlv_value != nullptr)
        {
            children["srlgtlv-value"] = srlgtlv_value;
        }
    }

    if(children.find("unidtlv-value") == children.end())
    {
        if(unidtlv_value != nullptr)
        {
            children["unidtlv-value"] = unidtlv_value;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "opaque-tlv-type")
    {
        opaque_tlv_type = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::BctlvValue()
    :
    model_id{YType::uint8, "model-id"},
    mplste_link_bc_bandwidth{YType::uint64, "mplste-link-bc-bandwidth"},
    num_b_cs{YType::uint32, "num-b-cs"}
{
    yang_name = "bctlv-value"; yang_parent_name = "mplste-link-opt-tlv-value";
}

Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::~BctlvValue()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::has_data() const
{
    for (auto const & leaf : mplste_link_bc_bandwidth.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return model_id.is_set
	|| num_b_cs.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::has_operation() const
{
    for (auto const & leaf : mplste_link_bc_bandwidth.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(model_id.operation)
	|| is_set(mplste_link_bc_bandwidth.operation)
	|| is_set(num_b_cs.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bctlv-value";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BctlvValue' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (model_id.is_set || is_set(model_id.operation)) leaf_name_data.push_back(model_id.get_name_leafdata());
    if (num_b_cs.is_set || is_set(num_b_cs.operation)) leaf_name_data.push_back(num_b_cs.get_name_leafdata());

    auto mplste_link_bc_bandwidth_name_datas = mplste_link_bc_bandwidth.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), mplste_link_bc_bandwidth_name_datas.begin(), mplste_link_bc_bandwidth_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "model-id")
    {
        model_id = value;
    }
    if(value_path == "mplste-link-bc-bandwidth")
    {
        mplste_link_bc_bandwidth.append(value);
    }
    if(value_path == "num-b-cs")
    {
        num_b_cs = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::SrlgtlvValue()
    :
    mplste_link_srlg_data{YType::uint32, "mplste-link-srlg-data"},
    num_srl_gs{YType::uint32, "num-srl-gs"},
    srlg_len{YType::uint32, "srlg-len"}
{
    yang_name = "srlgtlv-value"; yang_parent_name = "mplste-link-opt-tlv-value";
}

Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::~SrlgtlvValue()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::has_data() const
{
    for (auto const & leaf : mplste_link_srlg_data.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return num_srl_gs.is_set
	|| srlg_len.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::has_operation() const
{
    for (auto const & leaf : mplste_link_srlg_data.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(mplste_link_srlg_data.operation)
	|| is_set(num_srl_gs.operation)
	|| is_set(srlg_len.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srlgtlv-value";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SrlgtlvValue' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_srl_gs.is_set || is_set(num_srl_gs.operation)) leaf_name_data.push_back(num_srl_gs.get_name_leafdata());
    if (srlg_len.is_set || is_set(srlg_len.operation)) leaf_name_data.push_back(srlg_len.get_name_leafdata());

    auto mplste_link_srlg_data_name_datas = mplste_link_srlg_data.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), mplste_link_srlg_data_name_datas.begin(), mplste_link_srlg_data_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mplste-link-srlg-data")
    {
        mplste_link_srlg_data.append(value);
    }
    if(value_path == "num-srl-gs")
    {
        num_srl_gs = value;
    }
    if(value_path == "srlg-len")
    {
        srlg_len = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdtlvValue()
    :
    fixed_scsi_count{YType::uint32, "fixed-scsi-count"},
    flex_scsi_count{YType::uint32, "flex-scsi-count"},
    max_lspbw{YType::int64, "max-lspbw"},
    rile_len_code{YType::uint8, "rile-len-code"},
    switching_cap{YType::uint8, "switching-cap"}
    	,
    ixcd_switching_cap_type(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType>())
{
    ixcd_switching_cap_type->parent = this;
    children["ixcd-switching-cap-type"] = ixcd_switching_cap_type;

    yang_name = "ixcdtlv-value"; yang_parent_name = "mplste-link-opt-tlv-value";
}

Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::~IxcdtlvValue()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::has_data() const
{
    for (auto const & leaf : max_lspbw.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return fixed_scsi_count.is_set
	|| flex_scsi_count.is_set
	|| rile_len_code.is_set
	|| switching_cap.is_set
	|| (ixcd_switching_cap_type !=  nullptr && ixcd_switching_cap_type->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::has_operation() const
{
    for (auto const & leaf : max_lspbw.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(fixed_scsi_count.operation)
	|| is_set(flex_scsi_count.operation)
	|| is_set(max_lspbw.operation)
	|| is_set(rile_len_code.operation)
	|| is_set(switching_cap.operation)
	|| (ixcd_switching_cap_type !=  nullptr && ixcd_switching_cap_type->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ixcdtlv-value";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IxcdtlvValue' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fixed_scsi_count.is_set || is_set(fixed_scsi_count.operation)) leaf_name_data.push_back(fixed_scsi_count.get_name_leafdata());
    if (flex_scsi_count.is_set || is_set(flex_scsi_count.operation)) leaf_name_data.push_back(flex_scsi_count.get_name_leafdata());
    if (rile_len_code.is_set || is_set(rile_len_code.operation)) leaf_name_data.push_back(rile_len_code.get_name_leafdata());
    if (switching_cap.is_set || is_set(switching_cap.operation)) leaf_name_data.push_back(switching_cap.get_name_leafdata());

    auto max_lspbw_name_datas = max_lspbw.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), max_lspbw_name_datas.begin(), max_lspbw_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ixcd-switching-cap-type")
    {
        if(ixcd_switching_cap_type != nullptr)
        {
            children["ixcd-switching-cap-type"] = ixcd_switching_cap_type;
        }
        else
        {
            ixcd_switching_cap_type = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType>();
            ixcd_switching_cap_type->parent = this;
            children["ixcd-switching-cap-type"] = ixcd_switching_cap_type;
        }
        return children.at("ixcd-switching-cap-type");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::get_children()
{
    if(children.find("ixcd-switching-cap-type") == children.end())
    {
        if(ixcd_switching_cap_type != nullptr)
        {
            children["ixcd-switching-cap-type"] = ixcd_switching_cap_type;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "fixed-scsi-count")
    {
        fixed_scsi_count = value;
    }
    if(value_path == "flex-scsi-count")
    {
        flex_scsi_count = value;
    }
    if(value_path == "max-lspbw")
    {
        max_lspbw.append(value);
    }
    if(value_path == "rile-len-code")
    {
        rile_len_code = value;
    }
    if(value_path == "switching-cap")
    {
        switching_cap = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdSwitchingCapType()
    :
    switching_cap_type{YType::uint8, "switching-cap-type"}
    	,
    ixcdbw_sub_tlv(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv>())
	,ixcdpsc_info(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo>())
{
    ixcdbw_sub_tlv->parent = this;
    children["ixcdbw-sub-tlv"] = ixcdbw_sub_tlv;

    ixcdpsc_info->parent = this;
    children["ixcdpsc-info"] = ixcdpsc_info;

    yang_name = "ixcd-switching-cap-type"; yang_parent_name = "ixcdtlv-value";
}

Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::~IxcdSwitchingCapType()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::has_data() const
{
    return switching_cap_type.is_set
	|| (ixcdbw_sub_tlv !=  nullptr && ixcdbw_sub_tlv->has_data())
	|| (ixcdpsc_info !=  nullptr && ixcdpsc_info->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::has_operation() const
{
    return is_set(operation)
	|| is_set(switching_cap_type.operation)
	|| (ixcdbw_sub_tlv !=  nullptr && ixcdbw_sub_tlv->has_operation())
	|| (ixcdpsc_info !=  nullptr && ixcdpsc_info->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ixcd-switching-cap-type";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IxcdSwitchingCapType' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (switching_cap_type.is_set || is_set(switching_cap_type.operation)) leaf_name_data.push_back(switching_cap_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ixcdbw-sub-tlv")
    {
        if(ixcdbw_sub_tlv != nullptr)
        {
            children["ixcdbw-sub-tlv"] = ixcdbw_sub_tlv;
        }
        else
        {
            ixcdbw_sub_tlv = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv>();
            ixcdbw_sub_tlv->parent = this;
            children["ixcdbw-sub-tlv"] = ixcdbw_sub_tlv;
        }
        return children.at("ixcdbw-sub-tlv");
    }

    if(child_yang_name == "ixcdpsc-info")
    {
        if(ixcdpsc_info != nullptr)
        {
            children["ixcdpsc-info"] = ixcdpsc_info;
        }
        else
        {
            ixcdpsc_info = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo>();
            ixcdpsc_info->parent = this;
            children["ixcdpsc-info"] = ixcdpsc_info;
        }
        return children.at("ixcdpsc-info");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::get_children()
{
    if(children.find("ixcdbw-sub-tlv") == children.end())
    {
        if(ixcdbw_sub_tlv != nullptr)
        {
            children["ixcdbw-sub-tlv"] = ixcdbw_sub_tlv;
        }
    }

    if(children.find("ixcdpsc-info") == children.end())
    {
        if(ixcdpsc_info != nullptr)
        {
            children["ixcdpsc-info"] = ixcdpsc_info;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "switching-cap-type")
    {
        switching_cap_type = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo::IxcdpscInfo()
    :
    min_lsp_bandwidth{YType::uint64, "min-lsp-bandwidth"},
    psc_interface_mtu{YType::uint16, "psc-interface-mtu"}
{
    yang_name = "ixcdpsc-info"; yang_parent_name = "ixcd-switching-cap-type";
}

Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo::~IxcdpscInfo()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo::has_data() const
{
    return min_lsp_bandwidth.is_set
	|| psc_interface_mtu.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(min_lsp_bandwidth.operation)
	|| is_set(psc_interface_mtu.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ixcdpsc-info";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IxcdpscInfo' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (min_lsp_bandwidth.is_set || is_set(min_lsp_bandwidth.operation)) leaf_name_data.push_back(min_lsp_bandwidth.get_name_leafdata());
    if (psc_interface_mtu.is_set || is_set(psc_interface_mtu.operation)) leaf_name_data.push_back(psc_interface_mtu.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "min-lsp-bandwidth")
    {
        min_lsp_bandwidth = value;
    }
    if(value_path == "psc-interface-mtu")
    {
        psc_interface_mtu = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::IxcdbwSubTlv()
{
    yang_name = "ixcdbw-sub-tlv"; yang_parent_name = "ixcd-switching-cap-type";
}

Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::~IxcdbwSubTlv()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::has_data() const
{
    for (std::size_t index=0; index<arr_bw_sub_tlv.size(); index++)
    {
        if(arr_bw_sub_tlv[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::has_operation() const
{
    for (std::size_t index=0; index<arr_bw_sub_tlv.size(); index++)
    {
        if(arr_bw_sub_tlv[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ixcdbw-sub-tlv";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IxcdbwSubTlv' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "arr-bw-sub-tlv")
    {
        for(auto const & c : arr_bw_sub_tlv)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv>();
        c->parent = this;
        arr_bw_sub_tlv.push_back(std::move(c));
        children[segment_path] = arr_bw_sub_tlv.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::get_children()
{
    for (auto const & c : arr_bw_sub_tlv)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::ArrBwSubTlv()
    :
    bw_sub_tlv_length{YType::uint16, "bw-sub-tlv-length"},
    bw_sub_tlv_type{YType::uint16, "bw-sub-tlv-type"}
    	,
    bw_sub_tlv_value(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue>())
{
    bw_sub_tlv_value->parent = this;
    children["bw-sub-tlv-value"] = bw_sub_tlv_value;

    yang_name = "arr-bw-sub-tlv"; yang_parent_name = "ixcdbw-sub-tlv";
}

Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::~ArrBwSubTlv()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::has_data() const
{
    return bw_sub_tlv_length.is_set
	|| bw_sub_tlv_type.is_set
	|| (bw_sub_tlv_value !=  nullptr && bw_sub_tlv_value->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::has_operation() const
{
    return is_set(operation)
	|| is_set(bw_sub_tlv_length.operation)
	|| is_set(bw_sub_tlv_type.operation)
	|| (bw_sub_tlv_value !=  nullptr && bw_sub_tlv_value->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "arr-bw-sub-tlv";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ArrBwSubTlv' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bw_sub_tlv_length.is_set || is_set(bw_sub_tlv_length.operation)) leaf_name_data.push_back(bw_sub_tlv_length.get_name_leafdata());
    if (bw_sub_tlv_type.is_set || is_set(bw_sub_tlv_type.operation)) leaf_name_data.push_back(bw_sub_tlv_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bw-sub-tlv-value")
    {
        if(bw_sub_tlv_value != nullptr)
        {
            children["bw-sub-tlv-value"] = bw_sub_tlv_value;
        }
        else
        {
            bw_sub_tlv_value = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue>();
            bw_sub_tlv_value->parent = this;
            children["bw-sub-tlv-value"] = bw_sub_tlv_value;
        }
        return children.at("bw-sub-tlv-value");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::get_children()
{
    if(children.find("bw-sub-tlv-value") == children.end())
    {
        if(bw_sub_tlv_value != nullptr)
        {
            children["bw-sub-tlv-value"] = bw_sub_tlv_value;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bw-sub-tlv-length")
    {
        bw_sub_tlv_length = value;
    }
    if(value_path == "bw-sub-tlv-type")
    {
        bw_sub_tlv_type = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::BwSubTlvValue()
    :
    ixcdbw_sub_tlv_type{YType::uint16, "ixcdbw-sub-tlv-type"}
    	,
    fixed_bw_sub_tlv_value(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue>())
	,flex_bw_sub_tlv_value(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue>())
{
    fixed_bw_sub_tlv_value->parent = this;
    children["fixed-bw-sub-tlv-value"] = fixed_bw_sub_tlv_value;

    flex_bw_sub_tlv_value->parent = this;
    children["flex-bw-sub-tlv-value"] = flex_bw_sub_tlv_value;

    yang_name = "bw-sub-tlv-value"; yang_parent_name = "arr-bw-sub-tlv";
}

Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::~BwSubTlvValue()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::has_data() const
{
    return ixcdbw_sub_tlv_type.is_set
	|| (fixed_bw_sub_tlv_value !=  nullptr && fixed_bw_sub_tlv_value->has_data())
	|| (flex_bw_sub_tlv_value !=  nullptr && flex_bw_sub_tlv_value->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::has_operation() const
{
    return is_set(operation)
	|| is_set(ixcdbw_sub_tlv_type.operation)
	|| (fixed_bw_sub_tlv_value !=  nullptr && fixed_bw_sub_tlv_value->has_operation())
	|| (flex_bw_sub_tlv_value !=  nullptr && flex_bw_sub_tlv_value->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bw-sub-tlv-value";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BwSubTlvValue' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ixcdbw_sub_tlv_type.is_set || is_set(ixcdbw_sub_tlv_type.operation)) leaf_name_data.push_back(ixcdbw_sub_tlv_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "fixed-bw-sub-tlv-value")
    {
        if(fixed_bw_sub_tlv_value != nullptr)
        {
            children["fixed-bw-sub-tlv-value"] = fixed_bw_sub_tlv_value;
        }
        else
        {
            fixed_bw_sub_tlv_value = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue>();
            fixed_bw_sub_tlv_value->parent = this;
            children["fixed-bw-sub-tlv-value"] = fixed_bw_sub_tlv_value;
        }
        return children.at("fixed-bw-sub-tlv-value");
    }

    if(child_yang_name == "flex-bw-sub-tlv-value")
    {
        if(flex_bw_sub_tlv_value != nullptr)
        {
            children["flex-bw-sub-tlv-value"] = flex_bw_sub_tlv_value;
        }
        else
        {
            flex_bw_sub_tlv_value = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue>();
            flex_bw_sub_tlv_value->parent = this;
            children["flex-bw-sub-tlv-value"] = flex_bw_sub_tlv_value;
        }
        return children.at("flex-bw-sub-tlv-value");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::get_children()
{
    if(children.find("fixed-bw-sub-tlv-value") == children.end())
    {
        if(fixed_bw_sub_tlv_value != nullptr)
        {
            children["fixed-bw-sub-tlv-value"] = fixed_bw_sub_tlv_value;
        }
    }

    if(children.find("flex-bw-sub-tlv-value") == children.end())
    {
        if(flex_bw_sub_tlv_value != nullptr)
        {
            children["flex-bw-sub-tlv-value"] = flex_bw_sub_tlv_value;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ixcdbw-sub-tlv-type")
    {
        ixcdbw_sub_tlv_type = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedBwSubTlvValue()
    :
    unres_oduj_prio{YType::uint32, "unres-oduj-prio"}
    	,
    fixed_sub_tlv_value(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue>())
{
    fixed_sub_tlv_value->parent = this;
    children["fixed-sub-tlv-value"] = fixed_sub_tlv_value;

    yang_name = "fixed-bw-sub-tlv-value"; yang_parent_name = "bw-sub-tlv-value";
}

Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::~FixedBwSubTlvValue()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::has_data() const
{
    for (auto const & leaf : unres_oduj_prio.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return (fixed_sub_tlv_value !=  nullptr && fixed_sub_tlv_value->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::has_operation() const
{
    for (auto const & leaf : unres_oduj_prio.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(unres_oduj_prio.operation)
	|| (fixed_sub_tlv_value !=  nullptr && fixed_sub_tlv_value->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fixed-bw-sub-tlv-value";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FixedBwSubTlvValue' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto unres_oduj_prio_name_datas = unres_oduj_prio.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), unres_oduj_prio_name_datas.begin(), unres_oduj_prio_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "fixed-sub-tlv-value")
    {
        if(fixed_sub_tlv_value != nullptr)
        {
            children["fixed-sub-tlv-value"] = fixed_sub_tlv_value;
        }
        else
        {
            fixed_sub_tlv_value = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue>();
            fixed_sub_tlv_value->parent = this;
            children["fixed-sub-tlv-value"] = fixed_sub_tlv_value;
        }
        return children.at("fixed-sub-tlv-value");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::get_children()
{
    if(children.find("fixed-sub-tlv-value") == children.end())
    {
        if(fixed_sub_tlv_value != nullptr)
        {
            children["fixed-sub-tlv-value"] = fixed_sub_tlv_value;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unres-oduj-prio")
    {
        unres_oduj_prio.append(value);
    }
}

Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue::FixedSubTlvValue()
    :
    num_stages{YType::uint8, "num-stages"},
    priority_bit0{YType::uint8, "priority-bit0"},
    priority_bit1{YType::uint8, "priority-bit1"},
    priority_bit2{YType::uint8, "priority-bit2"},
    priority_bit3{YType::uint8, "priority-bit3"},
    priority_bit4{YType::uint8, "priority-bit4"},
    priority_bit5{YType::uint8, "priority-bit5"},
    priority_bit6{YType::uint8, "priority-bit6"},
    priority_bit7{YType::uint8, "priority-bit7"},
    res{YType::uint8, "res"},
    sbit{YType::uint8, "sbit"},
    signal_type{YType::uint8, "signal-type"},
    stage{YType::str, "stage"},
    tbit{YType::uint8, "tbit"},
    tsg{YType::uint8, "tsg"}
{
    yang_name = "fixed-sub-tlv-value"; yang_parent_name = "fixed-bw-sub-tlv-value";
}

Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue::~FixedSubTlvValue()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue::has_data() const
{
    return num_stages.is_set
	|| priority_bit0.is_set
	|| priority_bit1.is_set
	|| priority_bit2.is_set
	|| priority_bit3.is_set
	|| priority_bit4.is_set
	|| priority_bit5.is_set
	|| priority_bit6.is_set
	|| priority_bit7.is_set
	|| res.is_set
	|| sbit.is_set
	|| signal_type.is_set
	|| stage.is_set
	|| tbit.is_set
	|| tsg.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue::has_operation() const
{
    return is_set(operation)
	|| is_set(num_stages.operation)
	|| is_set(priority_bit0.operation)
	|| is_set(priority_bit1.operation)
	|| is_set(priority_bit2.operation)
	|| is_set(priority_bit3.operation)
	|| is_set(priority_bit4.operation)
	|| is_set(priority_bit5.operation)
	|| is_set(priority_bit6.operation)
	|| is_set(priority_bit7.operation)
	|| is_set(res.operation)
	|| is_set(sbit.operation)
	|| is_set(signal_type.operation)
	|| is_set(stage.operation)
	|| is_set(tbit.operation)
	|| is_set(tsg.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fixed-sub-tlv-value";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FixedSubTlvValue' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_stages.is_set || is_set(num_stages.operation)) leaf_name_data.push_back(num_stages.get_name_leafdata());
    if (priority_bit0.is_set || is_set(priority_bit0.operation)) leaf_name_data.push_back(priority_bit0.get_name_leafdata());
    if (priority_bit1.is_set || is_set(priority_bit1.operation)) leaf_name_data.push_back(priority_bit1.get_name_leafdata());
    if (priority_bit2.is_set || is_set(priority_bit2.operation)) leaf_name_data.push_back(priority_bit2.get_name_leafdata());
    if (priority_bit3.is_set || is_set(priority_bit3.operation)) leaf_name_data.push_back(priority_bit3.get_name_leafdata());
    if (priority_bit4.is_set || is_set(priority_bit4.operation)) leaf_name_data.push_back(priority_bit4.get_name_leafdata());
    if (priority_bit5.is_set || is_set(priority_bit5.operation)) leaf_name_data.push_back(priority_bit5.get_name_leafdata());
    if (priority_bit6.is_set || is_set(priority_bit6.operation)) leaf_name_data.push_back(priority_bit6.get_name_leafdata());
    if (priority_bit7.is_set || is_set(priority_bit7.operation)) leaf_name_data.push_back(priority_bit7.get_name_leafdata());
    if (res.is_set || is_set(res.operation)) leaf_name_data.push_back(res.get_name_leafdata());
    if (sbit.is_set || is_set(sbit.operation)) leaf_name_data.push_back(sbit.get_name_leafdata());
    if (signal_type.is_set || is_set(signal_type.operation)) leaf_name_data.push_back(signal_type.get_name_leafdata());
    if (stage.is_set || is_set(stage.operation)) leaf_name_data.push_back(stage.get_name_leafdata());
    if (tbit.is_set || is_set(tbit.operation)) leaf_name_data.push_back(tbit.get_name_leafdata());
    if (tsg.is_set || is_set(tsg.operation)) leaf_name_data.push_back(tsg.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "num-stages")
    {
        num_stages = value;
    }
    if(value_path == "priority-bit0")
    {
        priority_bit0 = value;
    }
    if(value_path == "priority-bit1")
    {
        priority_bit1 = value;
    }
    if(value_path == "priority-bit2")
    {
        priority_bit2 = value;
    }
    if(value_path == "priority-bit3")
    {
        priority_bit3 = value;
    }
    if(value_path == "priority-bit4")
    {
        priority_bit4 = value;
    }
    if(value_path == "priority-bit5")
    {
        priority_bit5 = value;
    }
    if(value_path == "priority-bit6")
    {
        priority_bit6 = value;
    }
    if(value_path == "priority-bit7")
    {
        priority_bit7 = value;
    }
    if(value_path == "res")
    {
        res = value;
    }
    if(value_path == "sbit")
    {
        sbit = value;
    }
    if(value_path == "signal-type")
    {
        signal_type = value;
    }
    if(value_path == "stage")
    {
        stage = value;
    }
    if(value_path == "tbit")
    {
        tbit = value;
    }
    if(value_path == "tsg")
    {
        tsg = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexBwSubTlvValue()
    :
    max_lspbw{YType::uint64, "max-lspbw"},
    unres_lspbw{YType::uint64, "unres-lspbw"}
    	,
    flex_sub_tlv_value_common(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon>())
{
    flex_sub_tlv_value_common->parent = this;
    children["flex-sub-tlv-value-common"] = flex_sub_tlv_value_common;

    yang_name = "flex-bw-sub-tlv-value"; yang_parent_name = "bw-sub-tlv-value";
}

Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::~FlexBwSubTlvValue()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::has_data() const
{
    for (auto const & leaf : max_lspbw.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : unres_lspbw.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return (flex_sub_tlv_value_common !=  nullptr && flex_sub_tlv_value_common->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::has_operation() const
{
    for (auto const & leaf : max_lspbw.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : unres_lspbw.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(max_lspbw.operation)
	|| is_set(unres_lspbw.operation)
	|| (flex_sub_tlv_value_common !=  nullptr && flex_sub_tlv_value_common->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flex-bw-sub-tlv-value";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FlexBwSubTlvValue' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto max_lspbw_name_datas = max_lspbw.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), max_lspbw_name_datas.begin(), max_lspbw_name_datas.end());
    auto unres_lspbw_name_datas = unres_lspbw.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), unres_lspbw_name_datas.begin(), unres_lspbw_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "flex-sub-tlv-value-common")
    {
        if(flex_sub_tlv_value_common != nullptr)
        {
            children["flex-sub-tlv-value-common"] = flex_sub_tlv_value_common;
        }
        else
        {
            flex_sub_tlv_value_common = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon>();
            flex_sub_tlv_value_common->parent = this;
            children["flex-sub-tlv-value-common"] = flex_sub_tlv_value_common;
        }
        return children.at("flex-sub-tlv-value-common");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::get_children()
{
    if(children.find("flex-sub-tlv-value-common") == children.end())
    {
        if(flex_sub_tlv_value_common != nullptr)
        {
            children["flex-sub-tlv-value-common"] = flex_sub_tlv_value_common;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max-lspbw")
    {
        max_lspbw.append(value);
    }
    if(value_path == "unres-lspbw")
    {
        unres_lspbw.append(value);
    }
}

Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon::FlexSubTlvValueCommon()
    :
    num_stages{YType::uint8, "num-stages"},
    priority_bit0{YType::uint8, "priority-bit0"},
    priority_bit1{YType::uint8, "priority-bit1"},
    priority_bit2{YType::uint8, "priority-bit2"},
    priority_bit3{YType::uint8, "priority-bit3"},
    priority_bit4{YType::uint8, "priority-bit4"},
    priority_bit5{YType::uint8, "priority-bit5"},
    priority_bit6{YType::uint8, "priority-bit6"},
    priority_bit7{YType::uint8, "priority-bit7"},
    res{YType::uint8, "res"},
    sbit{YType::uint8, "sbit"},
    signal_type{YType::uint8, "signal-type"},
    stage{YType::str, "stage"},
    tbit{YType::uint8, "tbit"},
    tsg{YType::uint8, "tsg"}
{
    yang_name = "flex-sub-tlv-value-common"; yang_parent_name = "flex-bw-sub-tlv-value";
}

Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon::~FlexSubTlvValueCommon()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon::has_data() const
{
    return num_stages.is_set
	|| priority_bit0.is_set
	|| priority_bit1.is_set
	|| priority_bit2.is_set
	|| priority_bit3.is_set
	|| priority_bit4.is_set
	|| priority_bit5.is_set
	|| priority_bit6.is_set
	|| priority_bit7.is_set
	|| res.is_set
	|| sbit.is_set
	|| signal_type.is_set
	|| stage.is_set
	|| tbit.is_set
	|| tsg.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon::has_operation() const
{
    return is_set(operation)
	|| is_set(num_stages.operation)
	|| is_set(priority_bit0.operation)
	|| is_set(priority_bit1.operation)
	|| is_set(priority_bit2.operation)
	|| is_set(priority_bit3.operation)
	|| is_set(priority_bit4.operation)
	|| is_set(priority_bit5.operation)
	|| is_set(priority_bit6.operation)
	|| is_set(priority_bit7.operation)
	|| is_set(res.operation)
	|| is_set(sbit.operation)
	|| is_set(signal_type.operation)
	|| is_set(stage.operation)
	|| is_set(tbit.operation)
	|| is_set(tsg.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flex-sub-tlv-value-common";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FlexSubTlvValueCommon' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_stages.is_set || is_set(num_stages.operation)) leaf_name_data.push_back(num_stages.get_name_leafdata());
    if (priority_bit0.is_set || is_set(priority_bit0.operation)) leaf_name_data.push_back(priority_bit0.get_name_leafdata());
    if (priority_bit1.is_set || is_set(priority_bit1.operation)) leaf_name_data.push_back(priority_bit1.get_name_leafdata());
    if (priority_bit2.is_set || is_set(priority_bit2.operation)) leaf_name_data.push_back(priority_bit2.get_name_leafdata());
    if (priority_bit3.is_set || is_set(priority_bit3.operation)) leaf_name_data.push_back(priority_bit3.get_name_leafdata());
    if (priority_bit4.is_set || is_set(priority_bit4.operation)) leaf_name_data.push_back(priority_bit4.get_name_leafdata());
    if (priority_bit5.is_set || is_set(priority_bit5.operation)) leaf_name_data.push_back(priority_bit5.get_name_leafdata());
    if (priority_bit6.is_set || is_set(priority_bit6.operation)) leaf_name_data.push_back(priority_bit6.get_name_leafdata());
    if (priority_bit7.is_set || is_set(priority_bit7.operation)) leaf_name_data.push_back(priority_bit7.get_name_leafdata());
    if (res.is_set || is_set(res.operation)) leaf_name_data.push_back(res.get_name_leafdata());
    if (sbit.is_set || is_set(sbit.operation)) leaf_name_data.push_back(sbit.get_name_leafdata());
    if (signal_type.is_set || is_set(signal_type.operation)) leaf_name_data.push_back(signal_type.get_name_leafdata());
    if (stage.is_set || is_set(stage.operation)) leaf_name_data.push_back(stage.get_name_leafdata());
    if (tbit.is_set || is_set(tbit.operation)) leaf_name_data.push_back(tbit.get_name_leafdata());
    if (tsg.is_set || is_set(tsg.operation)) leaf_name_data.push_back(tsg.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "num-stages")
    {
        num_stages = value;
    }
    if(value_path == "priority-bit0")
    {
        priority_bit0 = value;
    }
    if(value_path == "priority-bit1")
    {
        priority_bit1 = value;
    }
    if(value_path == "priority-bit2")
    {
        priority_bit2 = value;
    }
    if(value_path == "priority-bit3")
    {
        priority_bit3 = value;
    }
    if(value_path == "priority-bit4")
    {
        priority_bit4 = value;
    }
    if(value_path == "priority-bit5")
    {
        priority_bit5 = value;
    }
    if(value_path == "priority-bit6")
    {
        priority_bit6 = value;
    }
    if(value_path == "priority-bit7")
    {
        priority_bit7 = value;
    }
    if(value_path == "res")
    {
        res = value;
    }
    if(value_path == "sbit")
    {
        sbit = value;
    }
    if(value_path == "signal-type")
    {
        signal_type = value;
    }
    if(value_path == "stage")
    {
        stage = value;
    }
    if(value_path == "tbit")
    {
        tbit = value;
    }
    if(value_path == "tsg")
    {
        tsg = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue::UnidtlvValue()
    :
    uni_dir_delay{YType::uint32, "uni-dir-delay"}
{
    yang_name = "unidtlv-value"; yang_parent_name = "mplste-link-opt-tlv-value";
}

Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue::~UnidtlvValue()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue::has_data() const
{
    return uni_dir_delay.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue::has_operation() const
{
    return is_set(operation)
	|| is_set(uni_dir_delay.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unidtlv-value";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UnidtlvValue' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (uni_dir_delay.is_set || is_set(uni_dir_delay.operation)) leaf_name_data.push_back(uni_dir_delay.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "uni-dir-delay")
    {
        uni_dir_delay = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeFragment()
    :
    dste_model_id{YType::uint8, "dste-model-id"},
    fragment_id{YType::uint32, "fragment-id"},
    fragment_instance{YType::uint32, "fragment-instance"},
    same_fragment_count{YType::uint8, "same-fragment-count"}
{
    yang_name = "mpls-te-fragment"; yang_parent_name = "mpls-te-link";
}

Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::~MplsTeFragment()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::has_data() const
{
    for (std::size_t index=0; index<mpls_te_link.size(); index++)
    {
        if(mpls_te_link[index]->has_data())
            return true;
    }
    return dste_model_id.is_set
	|| fragment_id.is_set
	|| fragment_instance.is_set
	|| same_fragment_count.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::has_operation() const
{
    for (std::size_t index=0; index<mpls_te_link.size(); index++)
    {
        if(mpls_te_link[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(dste_model_id.operation)
	|| is_set(fragment_id.operation)
	|| is_set(fragment_instance.operation)
	|| is_set(same_fragment_count.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-te-fragment";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MplsTeFragment' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dste_model_id.is_set || is_set(dste_model_id.operation)) leaf_name_data.push_back(dste_model_id.get_name_leafdata());
    if (fragment_id.is_set || is_set(fragment_id.operation)) leaf_name_data.push_back(fragment_id.get_name_leafdata());
    if (fragment_instance.is_set || is_set(fragment_instance.operation)) leaf_name_data.push_back(fragment_instance.get_name_leafdata());
    if (same_fragment_count.is_set || is_set(same_fragment_count.operation)) leaf_name_data.push_back(same_fragment_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "mpls-te-link")
    {
        for(auto const & c : mpls_te_link)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_>();
        c->parent = this;
        mpls_te_link.push_back(std::move(c));
        children[segment_path] = mpls_te_link.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::get_children()
{
    for (auto const & c : mpls_te_link)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dste-model-id")
    {
        dste_model_id = value;
    }
    if(value_path == "fragment-id")
    {
        fragment_id = value;
    }
    if(value_path == "fragment-instance")
    {
        fragment_instance = value;
    }
    if(value_path == "same-fragment-count")
    {
        same_fragment_count = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsTeLink_()
    :
    affinity{YType::uint32, "affinity"},
    dste_allocation_model_id{YType::enumeration, "dste-allocation-model-id"},
    dste_in_use{YType::boolean, "dste-in-use"},
    fragment_id{YType::uint32, "fragment-id"},
    igp_metric{YType::uint32, "igp-metric"},
    input_interface_id{YType::uint32, "input-interface-id"},
    link_address{YType::str, "link-address"},
    maximum_link_bw{YType::uint32, "maximum-link-bw"},
    maximum_link_reservable_bw{YType::uint32, "maximum-link-reservable-bw"},
    maximum_link_sub_reservable_bw{YType::uint32, "maximum-link-sub-reservable-bw"},
    mpls_link_instance{YType::uint32, "mpls-link-instance"},
    mpls_link_type{YType::enumeration, "mpls-link-type"},
    neighbor_ip_address{YType::str, "neighbor-ip-address"},
    neighbor_system_id{YType::str, "neighbor-system-id"},
    new_link{YType::boolean, "new-link"},
    number_of_optional_tl_vs{YType::uint8, "number-of-optional-tl-vs"},
    output_interface_id{YType::uint32, "output-interface-id"},
    priority_count{YType::int32, "priority-count"},
    te_metric{YType::uint32, "te-metric"}
    	,
    extended_admin_group_list(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::ExtendedAdminGroupList>())
	,global_unreserve_bw_per_priority(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::GlobalUnreserveBwPerPriority>())
	,link_protocol_priority_capability(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::LinkProtocolPriorityCapability>())
	,link_sw_capability(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::LinkSwCapability>())
	,sub_pool_unreserve_bw_per_priority(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::SubPoolUnreserveBwPerPriority>())
{
    extended_admin_group_list->parent = this;
    children["extended-admin-group-list"] = extended_admin_group_list;

    global_unreserve_bw_per_priority->parent = this;
    children["global-unreserve-bw-per-priority"] = global_unreserve_bw_per_priority;

    link_protocol_priority_capability->parent = this;
    children["link-protocol-priority-capability"] = link_protocol_priority_capability;

    link_sw_capability->parent = this;
    children["link-sw-capability"] = link_sw_capability;

    sub_pool_unreserve_bw_per_priority->parent = this;
    children["sub-pool-unreserve-bw-per-priority"] = sub_pool_unreserve_bw_per_priority;

    yang_name = "mpls-te-link"; yang_parent_name = "mpls-te-fragment";
}

Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::~MplsTeLink_()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::has_data() const
{
    for (std::size_t index=0; index<mplste_link_opt_tlv.size(); index++)
    {
        if(mplste_link_opt_tlv[index]->has_data())
            return true;
    }
    return affinity.is_set
	|| dste_allocation_model_id.is_set
	|| dste_in_use.is_set
	|| fragment_id.is_set
	|| igp_metric.is_set
	|| input_interface_id.is_set
	|| link_address.is_set
	|| maximum_link_bw.is_set
	|| maximum_link_reservable_bw.is_set
	|| maximum_link_sub_reservable_bw.is_set
	|| mpls_link_instance.is_set
	|| mpls_link_type.is_set
	|| neighbor_ip_address.is_set
	|| neighbor_system_id.is_set
	|| new_link.is_set
	|| number_of_optional_tl_vs.is_set
	|| output_interface_id.is_set
	|| priority_count.is_set
	|| te_metric.is_set
	|| (extended_admin_group_list !=  nullptr && extended_admin_group_list->has_data())
	|| (global_unreserve_bw_per_priority !=  nullptr && global_unreserve_bw_per_priority->has_data())
	|| (link_protocol_priority_capability !=  nullptr && link_protocol_priority_capability->has_data())
	|| (link_sw_capability !=  nullptr && link_sw_capability->has_data())
	|| (sub_pool_unreserve_bw_per_priority !=  nullptr && sub_pool_unreserve_bw_per_priority->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::has_operation() const
{
    for (std::size_t index=0; index<mplste_link_opt_tlv.size(); index++)
    {
        if(mplste_link_opt_tlv[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(affinity.operation)
	|| is_set(dste_allocation_model_id.operation)
	|| is_set(dste_in_use.operation)
	|| is_set(fragment_id.operation)
	|| is_set(igp_metric.operation)
	|| is_set(input_interface_id.operation)
	|| is_set(link_address.operation)
	|| is_set(maximum_link_bw.operation)
	|| is_set(maximum_link_reservable_bw.operation)
	|| is_set(maximum_link_sub_reservable_bw.operation)
	|| is_set(mpls_link_instance.operation)
	|| is_set(mpls_link_type.operation)
	|| is_set(neighbor_ip_address.operation)
	|| is_set(neighbor_system_id.operation)
	|| is_set(new_link.operation)
	|| is_set(number_of_optional_tl_vs.operation)
	|| is_set(output_interface_id.operation)
	|| is_set(priority_count.operation)
	|| is_set(te_metric.operation)
	|| (extended_admin_group_list !=  nullptr && extended_admin_group_list->has_operation())
	|| (global_unreserve_bw_per_priority !=  nullptr && global_unreserve_bw_per_priority->has_operation())
	|| (link_protocol_priority_capability !=  nullptr && link_protocol_priority_capability->has_operation())
	|| (link_sw_capability !=  nullptr && link_sw_capability->has_operation())
	|| (sub_pool_unreserve_bw_per_priority !=  nullptr && sub_pool_unreserve_bw_per_priority->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-te-link";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MplsTeLink_' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity.is_set || is_set(affinity.operation)) leaf_name_data.push_back(affinity.get_name_leafdata());
    if (dste_allocation_model_id.is_set || is_set(dste_allocation_model_id.operation)) leaf_name_data.push_back(dste_allocation_model_id.get_name_leafdata());
    if (dste_in_use.is_set || is_set(dste_in_use.operation)) leaf_name_data.push_back(dste_in_use.get_name_leafdata());
    if (fragment_id.is_set || is_set(fragment_id.operation)) leaf_name_data.push_back(fragment_id.get_name_leafdata());
    if (igp_metric.is_set || is_set(igp_metric.operation)) leaf_name_data.push_back(igp_metric.get_name_leafdata());
    if (input_interface_id.is_set || is_set(input_interface_id.operation)) leaf_name_data.push_back(input_interface_id.get_name_leafdata());
    if (link_address.is_set || is_set(link_address.operation)) leaf_name_data.push_back(link_address.get_name_leafdata());
    if (maximum_link_bw.is_set || is_set(maximum_link_bw.operation)) leaf_name_data.push_back(maximum_link_bw.get_name_leafdata());
    if (maximum_link_reservable_bw.is_set || is_set(maximum_link_reservable_bw.operation)) leaf_name_data.push_back(maximum_link_reservable_bw.get_name_leafdata());
    if (maximum_link_sub_reservable_bw.is_set || is_set(maximum_link_sub_reservable_bw.operation)) leaf_name_data.push_back(maximum_link_sub_reservable_bw.get_name_leafdata());
    if (mpls_link_instance.is_set || is_set(mpls_link_instance.operation)) leaf_name_data.push_back(mpls_link_instance.get_name_leafdata());
    if (mpls_link_type.is_set || is_set(mpls_link_type.operation)) leaf_name_data.push_back(mpls_link_type.get_name_leafdata());
    if (neighbor_ip_address.is_set || is_set(neighbor_ip_address.operation)) leaf_name_data.push_back(neighbor_ip_address.get_name_leafdata());
    if (neighbor_system_id.is_set || is_set(neighbor_system_id.operation)) leaf_name_data.push_back(neighbor_system_id.get_name_leafdata());
    if (new_link.is_set || is_set(new_link.operation)) leaf_name_data.push_back(new_link.get_name_leafdata());
    if (number_of_optional_tl_vs.is_set || is_set(number_of_optional_tl_vs.operation)) leaf_name_data.push_back(number_of_optional_tl_vs.get_name_leafdata());
    if (output_interface_id.is_set || is_set(output_interface_id.operation)) leaf_name_data.push_back(output_interface_id.get_name_leafdata());
    if (priority_count.is_set || is_set(priority_count.operation)) leaf_name_data.push_back(priority_count.get_name_leafdata());
    if (te_metric.is_set || is_set(te_metric.operation)) leaf_name_data.push_back(te_metric.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "extended-admin-group-list")
    {
        if(extended_admin_group_list != nullptr)
        {
            children["extended-admin-group-list"] = extended_admin_group_list;
        }
        else
        {
            extended_admin_group_list = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::ExtendedAdminGroupList>();
            extended_admin_group_list->parent = this;
            children["extended-admin-group-list"] = extended_admin_group_list;
        }
        return children.at("extended-admin-group-list");
    }

    if(child_yang_name == "global-unreserve-bw-per-priority")
    {
        if(global_unreserve_bw_per_priority != nullptr)
        {
            children["global-unreserve-bw-per-priority"] = global_unreserve_bw_per_priority;
        }
        else
        {
            global_unreserve_bw_per_priority = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::GlobalUnreserveBwPerPriority>();
            global_unreserve_bw_per_priority->parent = this;
            children["global-unreserve-bw-per-priority"] = global_unreserve_bw_per_priority;
        }
        return children.at("global-unreserve-bw-per-priority");
    }

    if(child_yang_name == "link-protocol-priority-capability")
    {
        if(link_protocol_priority_capability != nullptr)
        {
            children["link-protocol-priority-capability"] = link_protocol_priority_capability;
        }
        else
        {
            link_protocol_priority_capability = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::LinkProtocolPriorityCapability>();
            link_protocol_priority_capability->parent = this;
            children["link-protocol-priority-capability"] = link_protocol_priority_capability;
        }
        return children.at("link-protocol-priority-capability");
    }

    if(child_yang_name == "link-sw-capability")
    {
        if(link_sw_capability != nullptr)
        {
            children["link-sw-capability"] = link_sw_capability;
        }
        else
        {
            link_sw_capability = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::LinkSwCapability>();
            link_sw_capability->parent = this;
            children["link-sw-capability"] = link_sw_capability;
        }
        return children.at("link-sw-capability");
    }

    if(child_yang_name == "mplste-link-opt-tlv")
    {
        for(auto const & c : mplste_link_opt_tlv)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv>();
        c->parent = this;
        mplste_link_opt_tlv.push_back(std::move(c));
        children[segment_path] = mplste_link_opt_tlv.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "sub-pool-unreserve-bw-per-priority")
    {
        if(sub_pool_unreserve_bw_per_priority != nullptr)
        {
            children["sub-pool-unreserve-bw-per-priority"] = sub_pool_unreserve_bw_per_priority;
        }
        else
        {
            sub_pool_unreserve_bw_per_priority = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::SubPoolUnreserveBwPerPriority>();
            sub_pool_unreserve_bw_per_priority->parent = this;
            children["sub-pool-unreserve-bw-per-priority"] = sub_pool_unreserve_bw_per_priority;
        }
        return children.at("sub-pool-unreserve-bw-per-priority");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::get_children()
{
    if(children.find("extended-admin-group-list") == children.end())
    {
        if(extended_admin_group_list != nullptr)
        {
            children["extended-admin-group-list"] = extended_admin_group_list;
        }
    }

    if(children.find("global-unreserve-bw-per-priority") == children.end())
    {
        if(global_unreserve_bw_per_priority != nullptr)
        {
            children["global-unreserve-bw-per-priority"] = global_unreserve_bw_per_priority;
        }
    }

    if(children.find("link-protocol-priority-capability") == children.end())
    {
        if(link_protocol_priority_capability != nullptr)
        {
            children["link-protocol-priority-capability"] = link_protocol_priority_capability;
        }
    }

    if(children.find("link-sw-capability") == children.end())
    {
        if(link_sw_capability != nullptr)
        {
            children["link-sw-capability"] = link_sw_capability;
        }
    }

    for (auto const & c : mplste_link_opt_tlv)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("sub-pool-unreserve-bw-per-priority") == children.end())
    {
        if(sub_pool_unreserve_bw_per_priority != nullptr)
        {
            children["sub-pool-unreserve-bw-per-priority"] = sub_pool_unreserve_bw_per_priority;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "affinity")
    {
        affinity = value;
    }
    if(value_path == "dste-allocation-model-id")
    {
        dste_allocation_model_id = value;
    }
    if(value_path == "dste-in-use")
    {
        dste_in_use = value;
    }
    if(value_path == "fragment-id")
    {
        fragment_id = value;
    }
    if(value_path == "igp-metric")
    {
        igp_metric = value;
    }
    if(value_path == "input-interface-id")
    {
        input_interface_id = value;
    }
    if(value_path == "link-address")
    {
        link_address = value;
    }
    if(value_path == "maximum-link-bw")
    {
        maximum_link_bw = value;
    }
    if(value_path == "maximum-link-reservable-bw")
    {
        maximum_link_reservable_bw = value;
    }
    if(value_path == "maximum-link-sub-reservable-bw")
    {
        maximum_link_sub_reservable_bw = value;
    }
    if(value_path == "mpls-link-instance")
    {
        mpls_link_instance = value;
    }
    if(value_path == "mpls-link-type")
    {
        mpls_link_type = value;
    }
    if(value_path == "neighbor-ip-address")
    {
        neighbor_ip_address = value;
    }
    if(value_path == "neighbor-system-id")
    {
        neighbor_system_id = value;
    }
    if(value_path == "new-link")
    {
        new_link = value;
    }
    if(value_path == "number-of-optional-tl-vs")
    {
        number_of_optional_tl_vs = value;
    }
    if(value_path == "output-interface-id")
    {
        output_interface_id = value;
    }
    if(value_path == "priority-count")
    {
        priority_count = value;
    }
    if(value_path == "te-metric")
    {
        te_metric = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::GlobalUnreserveBwPerPriority::GlobalUnreserveBwPerPriority()
    :
    bw_per_priority{YType::uint64, "bw-per-priority"}
{
    yang_name = "global-unreserve-bw-per-priority"; yang_parent_name = "mpls-te-link";
}

Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::GlobalUnreserveBwPerPriority::~GlobalUnreserveBwPerPriority()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::GlobalUnreserveBwPerPriority::has_data() const
{
    for (auto const & leaf : bw_per_priority.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::GlobalUnreserveBwPerPriority::has_operation() const
{
    for (auto const & leaf : bw_per_priority.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(bw_per_priority.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::GlobalUnreserveBwPerPriority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-unreserve-bw-per-priority";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::GlobalUnreserveBwPerPriority::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GlobalUnreserveBwPerPriority' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto bw_per_priority_name_datas = bw_per_priority.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), bw_per_priority_name_datas.begin(), bw_per_priority_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::GlobalUnreserveBwPerPriority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::GlobalUnreserveBwPerPriority::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::GlobalUnreserveBwPerPriority::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bw-per-priority")
    {
        bw_per_priority.append(value);
    }
}

Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::SubPoolUnreserveBwPerPriority::SubPoolUnreserveBwPerPriority()
    :
    bw_per_priority{YType::uint64, "bw-per-priority"}
{
    yang_name = "sub-pool-unreserve-bw-per-priority"; yang_parent_name = "mpls-te-link";
}

Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::SubPoolUnreserveBwPerPriority::~SubPoolUnreserveBwPerPriority()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::SubPoolUnreserveBwPerPriority::has_data() const
{
    for (auto const & leaf : bw_per_priority.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::SubPoolUnreserveBwPerPriority::has_operation() const
{
    for (auto const & leaf : bw_per_priority.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(bw_per_priority.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::SubPoolUnreserveBwPerPriority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sub-pool-unreserve-bw-per-priority";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::SubPoolUnreserveBwPerPriority::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SubPoolUnreserveBwPerPriority' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto bw_per_priority_name_datas = bw_per_priority.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), bw_per_priority_name_datas.begin(), bw_per_priority_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::SubPoolUnreserveBwPerPriority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::SubPoolUnreserveBwPerPriority::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::SubPoolUnreserveBwPerPriority::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bw-per-priority")
    {
        bw_per_priority.append(value);
    }
}

Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::LinkProtocolPriorityCapability::LinkProtocolPriorityCapability()
    :
    link_protocol_capability{YType::uint8, "link-protocol-capability"},
    link_protocol_priority{YType::uint8, "link-protocol-priority"}
{
    yang_name = "link-protocol-priority-capability"; yang_parent_name = "mpls-te-link";
}

Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::LinkProtocolPriorityCapability::~LinkProtocolPriorityCapability()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::LinkProtocolPriorityCapability::has_data() const
{
    return link_protocol_capability.is_set
	|| link_protocol_priority.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::LinkProtocolPriorityCapability::has_operation() const
{
    return is_set(operation)
	|| is_set(link_protocol_capability.operation)
	|| is_set(link_protocol_priority.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::LinkProtocolPriorityCapability::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-protocol-priority-capability";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::LinkProtocolPriorityCapability::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LinkProtocolPriorityCapability' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_protocol_capability.is_set || is_set(link_protocol_capability.operation)) leaf_name_data.push_back(link_protocol_capability.get_name_leafdata());
    if (link_protocol_priority.is_set || is_set(link_protocol_priority.operation)) leaf_name_data.push_back(link_protocol_priority.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::LinkProtocolPriorityCapability::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::LinkProtocolPriorityCapability::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::LinkProtocolPriorityCapability::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "link-protocol-capability")
    {
        link_protocol_capability = value;
    }
    if(value_path == "link-protocol-priority")
    {
        link_protocol_priority = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::LinkSwCapability::LinkSwCapability()
    :
    link_encoding{YType::uint8, "link-encoding"},
    link_mtu{YType::uint16, "link-mtu"},
    link_switching_capability{YType::uint8, "link-switching-capability"},
    maximum_lsp_bw_per_priority{YType::uint64, "maximum-lsp-bw-per-priority"},
    minimum_lsp_bw{YType::uint64, "minimum-lsp-bw"}
{
    yang_name = "link-sw-capability"; yang_parent_name = "mpls-te-link";
}

Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::LinkSwCapability::~LinkSwCapability()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::LinkSwCapability::has_data() const
{
    for (auto const & leaf : maximum_lsp_bw_per_priority.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return link_encoding.is_set
	|| link_mtu.is_set
	|| link_switching_capability.is_set
	|| minimum_lsp_bw.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::LinkSwCapability::has_operation() const
{
    for (auto const & leaf : maximum_lsp_bw_per_priority.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(link_encoding.operation)
	|| is_set(link_mtu.operation)
	|| is_set(link_switching_capability.operation)
	|| is_set(maximum_lsp_bw_per_priority.operation)
	|| is_set(minimum_lsp_bw.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::LinkSwCapability::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-sw-capability";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::LinkSwCapability::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LinkSwCapability' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_encoding.is_set || is_set(link_encoding.operation)) leaf_name_data.push_back(link_encoding.get_name_leafdata());
    if (link_mtu.is_set || is_set(link_mtu.operation)) leaf_name_data.push_back(link_mtu.get_name_leafdata());
    if (link_switching_capability.is_set || is_set(link_switching_capability.operation)) leaf_name_data.push_back(link_switching_capability.get_name_leafdata());
    if (minimum_lsp_bw.is_set || is_set(minimum_lsp_bw.operation)) leaf_name_data.push_back(minimum_lsp_bw.get_name_leafdata());

    auto maximum_lsp_bw_per_priority_name_datas = maximum_lsp_bw_per_priority.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), maximum_lsp_bw_per_priority_name_datas.begin(), maximum_lsp_bw_per_priority_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::LinkSwCapability::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::LinkSwCapability::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::LinkSwCapability::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "link-encoding")
    {
        link_encoding = value;
    }
    if(value_path == "link-mtu")
    {
        link_mtu = value;
    }
    if(value_path == "link-switching-capability")
    {
        link_switching_capability = value;
    }
    if(value_path == "maximum-lsp-bw-per-priority")
    {
        maximum_lsp_bw_per_priority.append(value);
    }
    if(value_path == "minimum-lsp-bw")
    {
        minimum_lsp_bw = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::ExtendedAdminGroupList::ExtendedAdminGroupList()
    :
    ext_admin_data{YType::uint32, "ext-admin-data"},
    extended_admin_size{YType::uint32, "extended-admin-size"}
{
    yang_name = "extended-admin-group-list"; yang_parent_name = "mpls-te-link";
}

Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::ExtendedAdminGroupList::~ExtendedAdminGroupList()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::ExtendedAdminGroupList::has_data() const
{
    for (auto const & leaf : ext_admin_data.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return extended_admin_size.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::ExtendedAdminGroupList::has_operation() const
{
    for (auto const & leaf : ext_admin_data.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(ext_admin_data.operation)
	|| is_set(extended_admin_size.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::ExtendedAdminGroupList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-admin-group-list";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::ExtendedAdminGroupList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExtendedAdminGroupList' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (extended_admin_size.is_set || is_set(extended_admin_size.operation)) leaf_name_data.push_back(extended_admin_size.get_name_leafdata());

    auto ext_admin_data_name_datas = ext_admin_data.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), ext_admin_data_name_datas.begin(), ext_admin_data_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::ExtendedAdminGroupList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::ExtendedAdminGroupList::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::ExtendedAdminGroupList::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ext-admin-data")
    {
        ext_admin_data.append(value);
    }
    if(value_path == "extended-admin-size")
    {
        extended_admin_size = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlv()
    :
    mplste_link_opt_tlv_len{YType::uint16, "mplste-link-opt-tlv-len"},
    mplste_link_opt_tlv_type{YType::enumeration, "mplste-link-opt-tlv-type"}
{
    yang_name = "mplste-link-opt-tlv"; yang_parent_name = "mpls-te-link";
}

Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::~MplsteLinkOptTlv()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::has_data() const
{
    for (std::size_t index=0; index<mplste_link_opt_tlv_value.size(); index++)
    {
        if(mplste_link_opt_tlv_value[index]->has_data())
            return true;
    }
    return mplste_link_opt_tlv_len.is_set
	|| mplste_link_opt_tlv_type.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::has_operation() const
{
    for (std::size_t index=0; index<mplste_link_opt_tlv_value.size(); index++)
    {
        if(mplste_link_opt_tlv_value[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(mplste_link_opt_tlv_len.operation)
	|| is_set(mplste_link_opt_tlv_type.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplste-link-opt-tlv";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MplsteLinkOptTlv' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mplste_link_opt_tlv_len.is_set || is_set(mplste_link_opt_tlv_len.operation)) leaf_name_data.push_back(mplste_link_opt_tlv_len.get_name_leafdata());
    if (mplste_link_opt_tlv_type.is_set || is_set(mplste_link_opt_tlv_type.operation)) leaf_name_data.push_back(mplste_link_opt_tlv_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "mplste-link-opt-tlv-value")
    {
        for(auto const & c : mplste_link_opt_tlv_value)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue>();
        c->parent = this;
        mplste_link_opt_tlv_value.push_back(std::move(c));
        children[segment_path] = mplste_link_opt_tlv_value.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::get_children()
{
    for (auto const & c : mplste_link_opt_tlv_value)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mplste-link-opt-tlv-len")
    {
        mplste_link_opt_tlv_len = value;
    }
    if(value_path == "mplste-link-opt-tlv-type")
    {
        mplste_link_opt_tlv_type = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::MplsteLinkOptTlvValue()
    :
    opaque_tlv_type{YType::enumeration, "opaque-tlv-type"}
    	,
    bctlv_value(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue>())
	,ixcdtlv_value(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue>())
	,srlgtlv_value(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue>())
	,unidtlv_value(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue>())
{
    bctlv_value->parent = this;
    children["bctlv-value"] = bctlv_value;

    ixcdtlv_value->parent = this;
    children["ixcdtlv-value"] = ixcdtlv_value;

    srlgtlv_value->parent = this;
    children["srlgtlv-value"] = srlgtlv_value;

    unidtlv_value->parent = this;
    children["unidtlv-value"] = unidtlv_value;

    yang_name = "mplste-link-opt-tlv-value"; yang_parent_name = "mplste-link-opt-tlv";
}

Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::~MplsteLinkOptTlvValue()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::has_data() const
{
    return opaque_tlv_type.is_set
	|| (bctlv_value !=  nullptr && bctlv_value->has_data())
	|| (ixcdtlv_value !=  nullptr && ixcdtlv_value->has_data())
	|| (srlgtlv_value !=  nullptr && srlgtlv_value->has_data())
	|| (unidtlv_value !=  nullptr && unidtlv_value->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::has_operation() const
{
    return is_set(operation)
	|| is_set(opaque_tlv_type.operation)
	|| (bctlv_value !=  nullptr && bctlv_value->has_operation())
	|| (ixcdtlv_value !=  nullptr && ixcdtlv_value->has_operation())
	|| (srlgtlv_value !=  nullptr && srlgtlv_value->has_operation())
	|| (unidtlv_value !=  nullptr && unidtlv_value->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplste-link-opt-tlv-value";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MplsteLinkOptTlvValue' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (opaque_tlv_type.is_set || is_set(opaque_tlv_type.operation)) leaf_name_data.push_back(opaque_tlv_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bctlv-value")
    {
        if(bctlv_value != nullptr)
        {
            children["bctlv-value"] = bctlv_value;
        }
        else
        {
            bctlv_value = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue>();
            bctlv_value->parent = this;
            children["bctlv-value"] = bctlv_value;
        }
        return children.at("bctlv-value");
    }

    if(child_yang_name == "ixcdtlv-value")
    {
        if(ixcdtlv_value != nullptr)
        {
            children["ixcdtlv-value"] = ixcdtlv_value;
        }
        else
        {
            ixcdtlv_value = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue>();
            ixcdtlv_value->parent = this;
            children["ixcdtlv-value"] = ixcdtlv_value;
        }
        return children.at("ixcdtlv-value");
    }

    if(child_yang_name == "srlgtlv-value")
    {
        if(srlgtlv_value != nullptr)
        {
            children["srlgtlv-value"] = srlgtlv_value;
        }
        else
        {
            srlgtlv_value = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue>();
            srlgtlv_value->parent = this;
            children["srlgtlv-value"] = srlgtlv_value;
        }
        return children.at("srlgtlv-value");
    }

    if(child_yang_name == "unidtlv-value")
    {
        if(unidtlv_value != nullptr)
        {
            children["unidtlv-value"] = unidtlv_value;
        }
        else
        {
            unidtlv_value = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue>();
            unidtlv_value->parent = this;
            children["unidtlv-value"] = unidtlv_value;
        }
        return children.at("unidtlv-value");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::get_children()
{
    if(children.find("bctlv-value") == children.end())
    {
        if(bctlv_value != nullptr)
        {
            children["bctlv-value"] = bctlv_value;
        }
    }

    if(children.find("ixcdtlv-value") == children.end())
    {
        if(ixcdtlv_value != nullptr)
        {
            children["ixcdtlv-value"] = ixcdtlv_value;
        }
    }

    if(children.find("srlgtlv-value") == children.end())
    {
        if(srlgtlv_value != nullptr)
        {
            children["srlgtlv-value"] = srlgtlv_value;
        }
    }

    if(children.find("unidtlv-value") == children.end())
    {
        if(unidtlv_value != nullptr)
        {
            children["unidtlv-value"] = unidtlv_value;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "opaque-tlv-type")
    {
        opaque_tlv_type = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::BctlvValue()
    :
    model_id{YType::uint8, "model-id"},
    mplste_link_bc_bandwidth{YType::uint64, "mplste-link-bc-bandwidth"},
    num_b_cs{YType::uint32, "num-b-cs"}
{
    yang_name = "bctlv-value"; yang_parent_name = "mplste-link-opt-tlv-value";
}

Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::~BctlvValue()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::has_data() const
{
    for (auto const & leaf : mplste_link_bc_bandwidth.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return model_id.is_set
	|| num_b_cs.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::has_operation() const
{
    for (auto const & leaf : mplste_link_bc_bandwidth.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(model_id.operation)
	|| is_set(mplste_link_bc_bandwidth.operation)
	|| is_set(num_b_cs.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bctlv-value";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BctlvValue' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (model_id.is_set || is_set(model_id.operation)) leaf_name_data.push_back(model_id.get_name_leafdata());
    if (num_b_cs.is_set || is_set(num_b_cs.operation)) leaf_name_data.push_back(num_b_cs.get_name_leafdata());

    auto mplste_link_bc_bandwidth_name_datas = mplste_link_bc_bandwidth.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), mplste_link_bc_bandwidth_name_datas.begin(), mplste_link_bc_bandwidth_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "model-id")
    {
        model_id = value;
    }
    if(value_path == "mplste-link-bc-bandwidth")
    {
        mplste_link_bc_bandwidth.append(value);
    }
    if(value_path == "num-b-cs")
    {
        num_b_cs = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::SrlgtlvValue()
    :
    mplste_link_srlg_data{YType::uint32, "mplste-link-srlg-data"},
    num_srl_gs{YType::uint32, "num-srl-gs"},
    srlg_len{YType::uint32, "srlg-len"}
{
    yang_name = "srlgtlv-value"; yang_parent_name = "mplste-link-opt-tlv-value";
}

Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::~SrlgtlvValue()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::has_data() const
{
    for (auto const & leaf : mplste_link_srlg_data.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return num_srl_gs.is_set
	|| srlg_len.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::has_operation() const
{
    for (auto const & leaf : mplste_link_srlg_data.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(mplste_link_srlg_data.operation)
	|| is_set(num_srl_gs.operation)
	|| is_set(srlg_len.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srlgtlv-value";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SrlgtlvValue' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_srl_gs.is_set || is_set(num_srl_gs.operation)) leaf_name_data.push_back(num_srl_gs.get_name_leafdata());
    if (srlg_len.is_set || is_set(srlg_len.operation)) leaf_name_data.push_back(srlg_len.get_name_leafdata());

    auto mplste_link_srlg_data_name_datas = mplste_link_srlg_data.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), mplste_link_srlg_data_name_datas.begin(), mplste_link_srlg_data_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mplste-link-srlg-data")
    {
        mplste_link_srlg_data.append(value);
    }
    if(value_path == "num-srl-gs")
    {
        num_srl_gs = value;
    }
    if(value_path == "srlg-len")
    {
        srlg_len = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdtlvValue()
    :
    fixed_scsi_count{YType::uint32, "fixed-scsi-count"},
    flex_scsi_count{YType::uint32, "flex-scsi-count"},
    max_lspbw{YType::int64, "max-lspbw"},
    rile_len_code{YType::uint8, "rile-len-code"},
    switching_cap{YType::uint8, "switching-cap"}
    	,
    ixcd_switching_cap_type(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType>())
{
    ixcd_switching_cap_type->parent = this;
    children["ixcd-switching-cap-type"] = ixcd_switching_cap_type;

    yang_name = "ixcdtlv-value"; yang_parent_name = "mplste-link-opt-tlv-value";
}

Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::~IxcdtlvValue()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::has_data() const
{
    for (auto const & leaf : max_lspbw.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return fixed_scsi_count.is_set
	|| flex_scsi_count.is_set
	|| rile_len_code.is_set
	|| switching_cap.is_set
	|| (ixcd_switching_cap_type !=  nullptr && ixcd_switching_cap_type->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::has_operation() const
{
    for (auto const & leaf : max_lspbw.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(fixed_scsi_count.operation)
	|| is_set(flex_scsi_count.operation)
	|| is_set(max_lspbw.operation)
	|| is_set(rile_len_code.operation)
	|| is_set(switching_cap.operation)
	|| (ixcd_switching_cap_type !=  nullptr && ixcd_switching_cap_type->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ixcdtlv-value";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IxcdtlvValue' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fixed_scsi_count.is_set || is_set(fixed_scsi_count.operation)) leaf_name_data.push_back(fixed_scsi_count.get_name_leafdata());
    if (flex_scsi_count.is_set || is_set(flex_scsi_count.operation)) leaf_name_data.push_back(flex_scsi_count.get_name_leafdata());
    if (rile_len_code.is_set || is_set(rile_len_code.operation)) leaf_name_data.push_back(rile_len_code.get_name_leafdata());
    if (switching_cap.is_set || is_set(switching_cap.operation)) leaf_name_data.push_back(switching_cap.get_name_leafdata());

    auto max_lspbw_name_datas = max_lspbw.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), max_lspbw_name_datas.begin(), max_lspbw_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ixcd-switching-cap-type")
    {
        if(ixcd_switching_cap_type != nullptr)
        {
            children["ixcd-switching-cap-type"] = ixcd_switching_cap_type;
        }
        else
        {
            ixcd_switching_cap_type = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType>();
            ixcd_switching_cap_type->parent = this;
            children["ixcd-switching-cap-type"] = ixcd_switching_cap_type;
        }
        return children.at("ixcd-switching-cap-type");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::get_children()
{
    if(children.find("ixcd-switching-cap-type") == children.end())
    {
        if(ixcd_switching_cap_type != nullptr)
        {
            children["ixcd-switching-cap-type"] = ixcd_switching_cap_type;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "fixed-scsi-count")
    {
        fixed_scsi_count = value;
    }
    if(value_path == "flex-scsi-count")
    {
        flex_scsi_count = value;
    }
    if(value_path == "max-lspbw")
    {
        max_lspbw.append(value);
    }
    if(value_path == "rile-len-code")
    {
        rile_len_code = value;
    }
    if(value_path == "switching-cap")
    {
        switching_cap = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdSwitchingCapType()
    :
    switching_cap_type{YType::uint8, "switching-cap-type"}
    	,
    ixcdbw_sub_tlv(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv>())
	,ixcdpsc_info(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo>())
{
    ixcdbw_sub_tlv->parent = this;
    children["ixcdbw-sub-tlv"] = ixcdbw_sub_tlv;

    ixcdpsc_info->parent = this;
    children["ixcdpsc-info"] = ixcdpsc_info;

    yang_name = "ixcd-switching-cap-type"; yang_parent_name = "ixcdtlv-value";
}

Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::~IxcdSwitchingCapType()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::has_data() const
{
    return switching_cap_type.is_set
	|| (ixcdbw_sub_tlv !=  nullptr && ixcdbw_sub_tlv->has_data())
	|| (ixcdpsc_info !=  nullptr && ixcdpsc_info->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::has_operation() const
{
    return is_set(operation)
	|| is_set(switching_cap_type.operation)
	|| (ixcdbw_sub_tlv !=  nullptr && ixcdbw_sub_tlv->has_operation())
	|| (ixcdpsc_info !=  nullptr && ixcdpsc_info->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ixcd-switching-cap-type";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IxcdSwitchingCapType' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (switching_cap_type.is_set || is_set(switching_cap_type.operation)) leaf_name_data.push_back(switching_cap_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ixcdbw-sub-tlv")
    {
        if(ixcdbw_sub_tlv != nullptr)
        {
            children["ixcdbw-sub-tlv"] = ixcdbw_sub_tlv;
        }
        else
        {
            ixcdbw_sub_tlv = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv>();
            ixcdbw_sub_tlv->parent = this;
            children["ixcdbw-sub-tlv"] = ixcdbw_sub_tlv;
        }
        return children.at("ixcdbw-sub-tlv");
    }

    if(child_yang_name == "ixcdpsc-info")
    {
        if(ixcdpsc_info != nullptr)
        {
            children["ixcdpsc-info"] = ixcdpsc_info;
        }
        else
        {
            ixcdpsc_info = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo>();
            ixcdpsc_info->parent = this;
            children["ixcdpsc-info"] = ixcdpsc_info;
        }
        return children.at("ixcdpsc-info");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::get_children()
{
    if(children.find("ixcdbw-sub-tlv") == children.end())
    {
        if(ixcdbw_sub_tlv != nullptr)
        {
            children["ixcdbw-sub-tlv"] = ixcdbw_sub_tlv;
        }
    }

    if(children.find("ixcdpsc-info") == children.end())
    {
        if(ixcdpsc_info != nullptr)
        {
            children["ixcdpsc-info"] = ixcdpsc_info;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "switching-cap-type")
    {
        switching_cap_type = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo::IxcdpscInfo()
    :
    min_lsp_bandwidth{YType::uint64, "min-lsp-bandwidth"},
    psc_interface_mtu{YType::uint16, "psc-interface-mtu"}
{
    yang_name = "ixcdpsc-info"; yang_parent_name = "ixcd-switching-cap-type";
}

Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo::~IxcdpscInfo()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo::has_data() const
{
    return min_lsp_bandwidth.is_set
	|| psc_interface_mtu.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(min_lsp_bandwidth.operation)
	|| is_set(psc_interface_mtu.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ixcdpsc-info";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IxcdpscInfo' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (min_lsp_bandwidth.is_set || is_set(min_lsp_bandwidth.operation)) leaf_name_data.push_back(min_lsp_bandwidth.get_name_leafdata());
    if (psc_interface_mtu.is_set || is_set(psc_interface_mtu.operation)) leaf_name_data.push_back(psc_interface_mtu.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "min-lsp-bandwidth")
    {
        min_lsp_bandwidth = value;
    }
    if(value_path == "psc-interface-mtu")
    {
        psc_interface_mtu = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::IxcdbwSubTlv()
{
    yang_name = "ixcdbw-sub-tlv"; yang_parent_name = "ixcd-switching-cap-type";
}

Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::~IxcdbwSubTlv()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::has_data() const
{
    for (std::size_t index=0; index<arr_bw_sub_tlv.size(); index++)
    {
        if(arr_bw_sub_tlv[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::has_operation() const
{
    for (std::size_t index=0; index<arr_bw_sub_tlv.size(); index++)
    {
        if(arr_bw_sub_tlv[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ixcdbw-sub-tlv";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IxcdbwSubTlv' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "arr-bw-sub-tlv")
    {
        for(auto const & c : arr_bw_sub_tlv)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv>();
        c->parent = this;
        arr_bw_sub_tlv.push_back(std::move(c));
        children[segment_path] = arr_bw_sub_tlv.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::get_children()
{
    for (auto const & c : arr_bw_sub_tlv)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::ArrBwSubTlv()
    :
    bw_sub_tlv_length{YType::uint16, "bw-sub-tlv-length"},
    bw_sub_tlv_type{YType::uint16, "bw-sub-tlv-type"}
    	,
    bw_sub_tlv_value(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue>())
{
    bw_sub_tlv_value->parent = this;
    children["bw-sub-tlv-value"] = bw_sub_tlv_value;

    yang_name = "arr-bw-sub-tlv"; yang_parent_name = "ixcdbw-sub-tlv";
}

Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::~ArrBwSubTlv()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::has_data() const
{
    return bw_sub_tlv_length.is_set
	|| bw_sub_tlv_type.is_set
	|| (bw_sub_tlv_value !=  nullptr && bw_sub_tlv_value->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::has_operation() const
{
    return is_set(operation)
	|| is_set(bw_sub_tlv_length.operation)
	|| is_set(bw_sub_tlv_type.operation)
	|| (bw_sub_tlv_value !=  nullptr && bw_sub_tlv_value->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "arr-bw-sub-tlv";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ArrBwSubTlv' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bw_sub_tlv_length.is_set || is_set(bw_sub_tlv_length.operation)) leaf_name_data.push_back(bw_sub_tlv_length.get_name_leafdata());
    if (bw_sub_tlv_type.is_set || is_set(bw_sub_tlv_type.operation)) leaf_name_data.push_back(bw_sub_tlv_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bw-sub-tlv-value")
    {
        if(bw_sub_tlv_value != nullptr)
        {
            children["bw-sub-tlv-value"] = bw_sub_tlv_value;
        }
        else
        {
            bw_sub_tlv_value = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue>();
            bw_sub_tlv_value->parent = this;
            children["bw-sub-tlv-value"] = bw_sub_tlv_value;
        }
        return children.at("bw-sub-tlv-value");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::get_children()
{
    if(children.find("bw-sub-tlv-value") == children.end())
    {
        if(bw_sub_tlv_value != nullptr)
        {
            children["bw-sub-tlv-value"] = bw_sub_tlv_value;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bw-sub-tlv-length")
    {
        bw_sub_tlv_length = value;
    }
    if(value_path == "bw-sub-tlv-type")
    {
        bw_sub_tlv_type = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::BwSubTlvValue()
    :
    ixcdbw_sub_tlv_type{YType::uint16, "ixcdbw-sub-tlv-type"}
    	,
    fixed_bw_sub_tlv_value(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue>())
	,flex_bw_sub_tlv_value(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue>())
{
    fixed_bw_sub_tlv_value->parent = this;
    children["fixed-bw-sub-tlv-value"] = fixed_bw_sub_tlv_value;

    flex_bw_sub_tlv_value->parent = this;
    children["flex-bw-sub-tlv-value"] = flex_bw_sub_tlv_value;

    yang_name = "bw-sub-tlv-value"; yang_parent_name = "arr-bw-sub-tlv";
}

Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::~BwSubTlvValue()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::has_data() const
{
    return ixcdbw_sub_tlv_type.is_set
	|| (fixed_bw_sub_tlv_value !=  nullptr && fixed_bw_sub_tlv_value->has_data())
	|| (flex_bw_sub_tlv_value !=  nullptr && flex_bw_sub_tlv_value->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::has_operation() const
{
    return is_set(operation)
	|| is_set(ixcdbw_sub_tlv_type.operation)
	|| (fixed_bw_sub_tlv_value !=  nullptr && fixed_bw_sub_tlv_value->has_operation())
	|| (flex_bw_sub_tlv_value !=  nullptr && flex_bw_sub_tlv_value->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bw-sub-tlv-value";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BwSubTlvValue' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ixcdbw_sub_tlv_type.is_set || is_set(ixcdbw_sub_tlv_type.operation)) leaf_name_data.push_back(ixcdbw_sub_tlv_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "fixed-bw-sub-tlv-value")
    {
        if(fixed_bw_sub_tlv_value != nullptr)
        {
            children["fixed-bw-sub-tlv-value"] = fixed_bw_sub_tlv_value;
        }
        else
        {
            fixed_bw_sub_tlv_value = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue>();
            fixed_bw_sub_tlv_value->parent = this;
            children["fixed-bw-sub-tlv-value"] = fixed_bw_sub_tlv_value;
        }
        return children.at("fixed-bw-sub-tlv-value");
    }

    if(child_yang_name == "flex-bw-sub-tlv-value")
    {
        if(flex_bw_sub_tlv_value != nullptr)
        {
            children["flex-bw-sub-tlv-value"] = flex_bw_sub_tlv_value;
        }
        else
        {
            flex_bw_sub_tlv_value = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue>();
            flex_bw_sub_tlv_value->parent = this;
            children["flex-bw-sub-tlv-value"] = flex_bw_sub_tlv_value;
        }
        return children.at("flex-bw-sub-tlv-value");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::get_children()
{
    if(children.find("fixed-bw-sub-tlv-value") == children.end())
    {
        if(fixed_bw_sub_tlv_value != nullptr)
        {
            children["fixed-bw-sub-tlv-value"] = fixed_bw_sub_tlv_value;
        }
    }

    if(children.find("flex-bw-sub-tlv-value") == children.end())
    {
        if(flex_bw_sub_tlv_value != nullptr)
        {
            children["flex-bw-sub-tlv-value"] = flex_bw_sub_tlv_value;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ixcdbw-sub-tlv-type")
    {
        ixcdbw_sub_tlv_type = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedBwSubTlvValue()
    :
    unres_oduj_prio{YType::uint32, "unres-oduj-prio"}
    	,
    fixed_sub_tlv_value(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue>())
{
    fixed_sub_tlv_value->parent = this;
    children["fixed-sub-tlv-value"] = fixed_sub_tlv_value;

    yang_name = "fixed-bw-sub-tlv-value"; yang_parent_name = "bw-sub-tlv-value";
}

Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::~FixedBwSubTlvValue()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::has_data() const
{
    for (auto const & leaf : unres_oduj_prio.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return (fixed_sub_tlv_value !=  nullptr && fixed_sub_tlv_value->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::has_operation() const
{
    for (auto const & leaf : unres_oduj_prio.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(unres_oduj_prio.operation)
	|| (fixed_sub_tlv_value !=  nullptr && fixed_sub_tlv_value->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fixed-bw-sub-tlv-value";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FixedBwSubTlvValue' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto unres_oduj_prio_name_datas = unres_oduj_prio.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), unres_oduj_prio_name_datas.begin(), unres_oduj_prio_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "fixed-sub-tlv-value")
    {
        if(fixed_sub_tlv_value != nullptr)
        {
            children["fixed-sub-tlv-value"] = fixed_sub_tlv_value;
        }
        else
        {
            fixed_sub_tlv_value = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue>();
            fixed_sub_tlv_value->parent = this;
            children["fixed-sub-tlv-value"] = fixed_sub_tlv_value;
        }
        return children.at("fixed-sub-tlv-value");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::get_children()
{
    if(children.find("fixed-sub-tlv-value") == children.end())
    {
        if(fixed_sub_tlv_value != nullptr)
        {
            children["fixed-sub-tlv-value"] = fixed_sub_tlv_value;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unres-oduj-prio")
    {
        unres_oduj_prio.append(value);
    }
}

Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue::FixedSubTlvValue()
    :
    num_stages{YType::uint8, "num-stages"},
    priority_bit0{YType::uint8, "priority-bit0"},
    priority_bit1{YType::uint8, "priority-bit1"},
    priority_bit2{YType::uint8, "priority-bit2"},
    priority_bit3{YType::uint8, "priority-bit3"},
    priority_bit4{YType::uint8, "priority-bit4"},
    priority_bit5{YType::uint8, "priority-bit5"},
    priority_bit6{YType::uint8, "priority-bit6"},
    priority_bit7{YType::uint8, "priority-bit7"},
    res{YType::uint8, "res"},
    sbit{YType::uint8, "sbit"},
    signal_type{YType::uint8, "signal-type"},
    stage{YType::str, "stage"},
    tbit{YType::uint8, "tbit"},
    tsg{YType::uint8, "tsg"}
{
    yang_name = "fixed-sub-tlv-value"; yang_parent_name = "fixed-bw-sub-tlv-value";
}

Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue::~FixedSubTlvValue()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue::has_data() const
{
    return num_stages.is_set
	|| priority_bit0.is_set
	|| priority_bit1.is_set
	|| priority_bit2.is_set
	|| priority_bit3.is_set
	|| priority_bit4.is_set
	|| priority_bit5.is_set
	|| priority_bit6.is_set
	|| priority_bit7.is_set
	|| res.is_set
	|| sbit.is_set
	|| signal_type.is_set
	|| stage.is_set
	|| tbit.is_set
	|| tsg.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue::has_operation() const
{
    return is_set(operation)
	|| is_set(num_stages.operation)
	|| is_set(priority_bit0.operation)
	|| is_set(priority_bit1.operation)
	|| is_set(priority_bit2.operation)
	|| is_set(priority_bit3.operation)
	|| is_set(priority_bit4.operation)
	|| is_set(priority_bit5.operation)
	|| is_set(priority_bit6.operation)
	|| is_set(priority_bit7.operation)
	|| is_set(res.operation)
	|| is_set(sbit.operation)
	|| is_set(signal_type.operation)
	|| is_set(stage.operation)
	|| is_set(tbit.operation)
	|| is_set(tsg.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fixed-sub-tlv-value";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FixedSubTlvValue' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_stages.is_set || is_set(num_stages.operation)) leaf_name_data.push_back(num_stages.get_name_leafdata());
    if (priority_bit0.is_set || is_set(priority_bit0.operation)) leaf_name_data.push_back(priority_bit0.get_name_leafdata());
    if (priority_bit1.is_set || is_set(priority_bit1.operation)) leaf_name_data.push_back(priority_bit1.get_name_leafdata());
    if (priority_bit2.is_set || is_set(priority_bit2.operation)) leaf_name_data.push_back(priority_bit2.get_name_leafdata());
    if (priority_bit3.is_set || is_set(priority_bit3.operation)) leaf_name_data.push_back(priority_bit3.get_name_leafdata());
    if (priority_bit4.is_set || is_set(priority_bit4.operation)) leaf_name_data.push_back(priority_bit4.get_name_leafdata());
    if (priority_bit5.is_set || is_set(priority_bit5.operation)) leaf_name_data.push_back(priority_bit5.get_name_leafdata());
    if (priority_bit6.is_set || is_set(priority_bit6.operation)) leaf_name_data.push_back(priority_bit6.get_name_leafdata());
    if (priority_bit7.is_set || is_set(priority_bit7.operation)) leaf_name_data.push_back(priority_bit7.get_name_leafdata());
    if (res.is_set || is_set(res.operation)) leaf_name_data.push_back(res.get_name_leafdata());
    if (sbit.is_set || is_set(sbit.operation)) leaf_name_data.push_back(sbit.get_name_leafdata());
    if (signal_type.is_set || is_set(signal_type.operation)) leaf_name_data.push_back(signal_type.get_name_leafdata());
    if (stage.is_set || is_set(stage.operation)) leaf_name_data.push_back(stage.get_name_leafdata());
    if (tbit.is_set || is_set(tbit.operation)) leaf_name_data.push_back(tbit.get_name_leafdata());
    if (tsg.is_set || is_set(tsg.operation)) leaf_name_data.push_back(tsg.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "num-stages")
    {
        num_stages = value;
    }
    if(value_path == "priority-bit0")
    {
        priority_bit0 = value;
    }
    if(value_path == "priority-bit1")
    {
        priority_bit1 = value;
    }
    if(value_path == "priority-bit2")
    {
        priority_bit2 = value;
    }
    if(value_path == "priority-bit3")
    {
        priority_bit3 = value;
    }
    if(value_path == "priority-bit4")
    {
        priority_bit4 = value;
    }
    if(value_path == "priority-bit5")
    {
        priority_bit5 = value;
    }
    if(value_path == "priority-bit6")
    {
        priority_bit6 = value;
    }
    if(value_path == "priority-bit7")
    {
        priority_bit7 = value;
    }
    if(value_path == "res")
    {
        res = value;
    }
    if(value_path == "sbit")
    {
        sbit = value;
    }
    if(value_path == "signal-type")
    {
        signal_type = value;
    }
    if(value_path == "stage")
    {
        stage = value;
    }
    if(value_path == "tbit")
    {
        tbit = value;
    }
    if(value_path == "tsg")
    {
        tsg = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexBwSubTlvValue()
    :
    max_lspbw{YType::uint64, "max-lspbw"},
    unres_lspbw{YType::uint64, "unres-lspbw"}
    	,
    flex_sub_tlv_value_common(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon>())
{
    flex_sub_tlv_value_common->parent = this;
    children["flex-sub-tlv-value-common"] = flex_sub_tlv_value_common;

    yang_name = "flex-bw-sub-tlv-value"; yang_parent_name = "bw-sub-tlv-value";
}

Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::~FlexBwSubTlvValue()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::has_data() const
{
    for (auto const & leaf : max_lspbw.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : unres_lspbw.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return (flex_sub_tlv_value_common !=  nullptr && flex_sub_tlv_value_common->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::has_operation() const
{
    for (auto const & leaf : max_lspbw.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : unres_lspbw.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(max_lspbw.operation)
	|| is_set(unres_lspbw.operation)
	|| (flex_sub_tlv_value_common !=  nullptr && flex_sub_tlv_value_common->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flex-bw-sub-tlv-value";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FlexBwSubTlvValue' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto max_lspbw_name_datas = max_lspbw.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), max_lspbw_name_datas.begin(), max_lspbw_name_datas.end());
    auto unres_lspbw_name_datas = unres_lspbw.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), unres_lspbw_name_datas.begin(), unres_lspbw_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "flex-sub-tlv-value-common")
    {
        if(flex_sub_tlv_value_common != nullptr)
        {
            children["flex-sub-tlv-value-common"] = flex_sub_tlv_value_common;
        }
        else
        {
            flex_sub_tlv_value_common = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon>();
            flex_sub_tlv_value_common->parent = this;
            children["flex-sub-tlv-value-common"] = flex_sub_tlv_value_common;
        }
        return children.at("flex-sub-tlv-value-common");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::get_children()
{
    if(children.find("flex-sub-tlv-value-common") == children.end())
    {
        if(flex_sub_tlv_value_common != nullptr)
        {
            children["flex-sub-tlv-value-common"] = flex_sub_tlv_value_common;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max-lspbw")
    {
        max_lspbw.append(value);
    }
    if(value_path == "unres-lspbw")
    {
        unres_lspbw.append(value);
    }
}

Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon::FlexSubTlvValueCommon()
    :
    num_stages{YType::uint8, "num-stages"},
    priority_bit0{YType::uint8, "priority-bit0"},
    priority_bit1{YType::uint8, "priority-bit1"},
    priority_bit2{YType::uint8, "priority-bit2"},
    priority_bit3{YType::uint8, "priority-bit3"},
    priority_bit4{YType::uint8, "priority-bit4"},
    priority_bit5{YType::uint8, "priority-bit5"},
    priority_bit6{YType::uint8, "priority-bit6"},
    priority_bit7{YType::uint8, "priority-bit7"},
    res{YType::uint8, "res"},
    sbit{YType::uint8, "sbit"},
    signal_type{YType::uint8, "signal-type"},
    stage{YType::str, "stage"},
    tbit{YType::uint8, "tbit"},
    tsg{YType::uint8, "tsg"}
{
    yang_name = "flex-sub-tlv-value-common"; yang_parent_name = "flex-bw-sub-tlv-value";
}

Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon::~FlexSubTlvValueCommon()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon::has_data() const
{
    return num_stages.is_set
	|| priority_bit0.is_set
	|| priority_bit1.is_set
	|| priority_bit2.is_set
	|| priority_bit3.is_set
	|| priority_bit4.is_set
	|| priority_bit5.is_set
	|| priority_bit6.is_set
	|| priority_bit7.is_set
	|| res.is_set
	|| sbit.is_set
	|| signal_type.is_set
	|| stage.is_set
	|| tbit.is_set
	|| tsg.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon::has_operation() const
{
    return is_set(operation)
	|| is_set(num_stages.operation)
	|| is_set(priority_bit0.operation)
	|| is_set(priority_bit1.operation)
	|| is_set(priority_bit2.operation)
	|| is_set(priority_bit3.operation)
	|| is_set(priority_bit4.operation)
	|| is_set(priority_bit5.operation)
	|| is_set(priority_bit6.operation)
	|| is_set(priority_bit7.operation)
	|| is_set(res.operation)
	|| is_set(sbit.operation)
	|| is_set(signal_type.operation)
	|| is_set(stage.operation)
	|| is_set(tbit.operation)
	|| is_set(tsg.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flex-sub-tlv-value-common";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FlexSubTlvValueCommon' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_stages.is_set || is_set(num_stages.operation)) leaf_name_data.push_back(num_stages.get_name_leafdata());
    if (priority_bit0.is_set || is_set(priority_bit0.operation)) leaf_name_data.push_back(priority_bit0.get_name_leafdata());
    if (priority_bit1.is_set || is_set(priority_bit1.operation)) leaf_name_data.push_back(priority_bit1.get_name_leafdata());
    if (priority_bit2.is_set || is_set(priority_bit2.operation)) leaf_name_data.push_back(priority_bit2.get_name_leafdata());
    if (priority_bit3.is_set || is_set(priority_bit3.operation)) leaf_name_data.push_back(priority_bit3.get_name_leafdata());
    if (priority_bit4.is_set || is_set(priority_bit4.operation)) leaf_name_data.push_back(priority_bit4.get_name_leafdata());
    if (priority_bit5.is_set || is_set(priority_bit5.operation)) leaf_name_data.push_back(priority_bit5.get_name_leafdata());
    if (priority_bit6.is_set || is_set(priority_bit6.operation)) leaf_name_data.push_back(priority_bit6.get_name_leafdata());
    if (priority_bit7.is_set || is_set(priority_bit7.operation)) leaf_name_data.push_back(priority_bit7.get_name_leafdata());
    if (res.is_set || is_set(res.operation)) leaf_name_data.push_back(res.get_name_leafdata());
    if (sbit.is_set || is_set(sbit.operation)) leaf_name_data.push_back(sbit.get_name_leafdata());
    if (signal_type.is_set || is_set(signal_type.operation)) leaf_name_data.push_back(signal_type.get_name_leafdata());
    if (stage.is_set || is_set(stage.operation)) leaf_name_data.push_back(stage.get_name_leafdata());
    if (tbit.is_set || is_set(tbit.operation)) leaf_name_data.push_back(tbit.get_name_leafdata());
    if (tsg.is_set || is_set(tsg.operation)) leaf_name_data.push_back(tsg.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "num-stages")
    {
        num_stages = value;
    }
    if(value_path == "priority-bit0")
    {
        priority_bit0 = value;
    }
    if(value_path == "priority-bit1")
    {
        priority_bit1 = value;
    }
    if(value_path == "priority-bit2")
    {
        priority_bit2 = value;
    }
    if(value_path == "priority-bit3")
    {
        priority_bit3 = value;
    }
    if(value_path == "priority-bit4")
    {
        priority_bit4 = value;
    }
    if(value_path == "priority-bit5")
    {
        priority_bit5 = value;
    }
    if(value_path == "priority-bit6")
    {
        priority_bit6 = value;
    }
    if(value_path == "priority-bit7")
    {
        priority_bit7 = value;
    }
    if(value_path == "res")
    {
        res = value;
    }
    if(value_path == "sbit")
    {
        sbit = value;
    }
    if(value_path == "signal-type")
    {
        signal_type = value;
    }
    if(value_path == "stage")
    {
        stage = value;
    }
    if(value_path == "tbit")
    {
        tbit = value;
    }
    if(value_path == "tsg")
    {
        tsg = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue::UnidtlvValue()
    :
    uni_dir_delay{YType::uint32, "uni-dir-delay"}
{
    yang_name = "unidtlv-value"; yang_parent_name = "mplste-link-opt-tlv-value";
}

Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue::~UnidtlvValue()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue::has_data() const
{
    return uni_dir_delay.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue::has_operation() const
{
    return is_set(operation)
	|| is_set(uni_dir_delay.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unidtlv-value";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UnidtlvValue' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (uni_dir_delay.is_set || is_set(uni_dir_delay.operation)) leaf_name_data.push_back(uni_dir_delay.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "uni-dir-delay")
    {
        uni_dir_delay = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragments()
{
    yang_name = "mpls-te-fragments"; yang_parent_name = "mpls-te";
}

Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::~MplsTeFragments()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::has_data() const
{
    for (std::size_t index=0; index<mpls_te_fragment.size(); index++)
    {
        if(mpls_te_fragment[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::has_operation() const
{
    for (std::size_t index=0; index<mpls_te_fragment.size(); index++)
    {
        if(mpls_te_fragment[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-te-fragments";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MplsTeFragments' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "mpls-te-fragment")
    {
        for(auto const & c : mpls_te_fragment)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment>();
        c->parent = this;
        mpls_te_fragment.push_back(std::move(c));
        children[segment_path] = mpls_te_fragment.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::get_children()
{
    for (auto const & c : mpls_te_fragment)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment()
    :
    area_id{YType::int32, "area-id"},
    mpls_te_area_id{YType::str, "mpls-te-area-id"},
    mpls_te_area_instance{YType::uint32, "mpls-te-area-instance"},
    mpls_te_enabled{YType::boolean, "mpls-te-enabled"},
    mpls_te_initialized{YType::boolean, "mpls-te-initialized"},
    mpls_te_next_fragment_id{YType::uint32, "mpls-te-next-fragment-id"},
    mpls_te_router_address{YType::str, "mpls-te-router-address"},
    mpls_te_router_id{YType::str, "mpls-te-router-id"},
    spacious_fragment{YType::boolean, "spacious-fragment"}
{
    yang_name = "mpls-te-fragment"; yang_parent_name = "mpls-te-fragments";
}

Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::~MplsTeFragment()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::has_data() const
{
    for (std::size_t index=0; index<mpls_te_fragment.size(); index++)
    {
        if(mpls_te_fragment[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<mpls_te_link.size(); index++)
    {
        if(mpls_te_link[index]->has_data())
            return true;
    }
    return area_id.is_set
	|| mpls_te_area_id.is_set
	|| mpls_te_area_instance.is_set
	|| mpls_te_enabled.is_set
	|| mpls_te_initialized.is_set
	|| mpls_te_next_fragment_id.is_set
	|| mpls_te_router_address.is_set
	|| mpls_te_router_id.is_set
	|| spacious_fragment.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::has_operation() const
{
    for (std::size_t index=0; index<mpls_te_fragment.size(); index++)
    {
        if(mpls_te_fragment[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<mpls_te_link.size(); index++)
    {
        if(mpls_te_link[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(area_id.operation)
	|| is_set(mpls_te_area_id.operation)
	|| is_set(mpls_te_area_instance.operation)
	|| is_set(mpls_te_enabled.operation)
	|| is_set(mpls_te_initialized.operation)
	|| is_set(mpls_te_next_fragment_id.operation)
	|| is_set(mpls_te_router_address.operation)
	|| is_set(mpls_te_router_id.operation)
	|| is_set(spacious_fragment.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-te-fragment" <<"[area-id='" <<area_id <<"']";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MplsTeFragment' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_id.is_set || is_set(area_id.operation)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (mpls_te_area_id.is_set || is_set(mpls_te_area_id.operation)) leaf_name_data.push_back(mpls_te_area_id.get_name_leafdata());
    if (mpls_te_area_instance.is_set || is_set(mpls_te_area_instance.operation)) leaf_name_data.push_back(mpls_te_area_instance.get_name_leafdata());
    if (mpls_te_enabled.is_set || is_set(mpls_te_enabled.operation)) leaf_name_data.push_back(mpls_te_enabled.get_name_leafdata());
    if (mpls_te_initialized.is_set || is_set(mpls_te_initialized.operation)) leaf_name_data.push_back(mpls_te_initialized.get_name_leafdata());
    if (mpls_te_next_fragment_id.is_set || is_set(mpls_te_next_fragment_id.operation)) leaf_name_data.push_back(mpls_te_next_fragment_id.get_name_leafdata());
    if (mpls_te_router_address.is_set || is_set(mpls_te_router_address.operation)) leaf_name_data.push_back(mpls_te_router_address.get_name_leafdata());
    if (mpls_te_router_id.is_set || is_set(mpls_te_router_id.operation)) leaf_name_data.push_back(mpls_te_router_id.get_name_leafdata());
    if (spacious_fragment.is_set || is_set(spacious_fragment.operation)) leaf_name_data.push_back(spacious_fragment.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "mpls-te-fragment")
    {
        for(auto const & c : mpls_te_fragment)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_>();
        c->parent = this;
        mpls_te_fragment.push_back(std::move(c));
        children[segment_path] = mpls_te_fragment.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "mpls-te-link")
    {
        for(auto const & c : mpls_te_link)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink>();
        c->parent = this;
        mpls_te_link.push_back(std::move(c));
        children[segment_path] = mpls_te_link.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::get_children()
{
    for (auto const & c : mpls_te_fragment)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : mpls_te_link)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "area-id")
    {
        area_id = value;
    }
    if(value_path == "mpls-te-area-id")
    {
        mpls_te_area_id = value;
    }
    if(value_path == "mpls-te-area-instance")
    {
        mpls_te_area_instance = value;
    }
    if(value_path == "mpls-te-enabled")
    {
        mpls_te_enabled = value;
    }
    if(value_path == "mpls-te-initialized")
    {
        mpls_te_initialized = value;
    }
    if(value_path == "mpls-te-next-fragment-id")
    {
        mpls_te_next_fragment_id = value;
    }
    if(value_path == "mpls-te-router-address")
    {
        mpls_te_router_address = value;
    }
    if(value_path == "mpls-te-router-id")
    {
        mpls_te_router_id = value;
    }
    if(value_path == "spacious-fragment")
    {
        spacious_fragment = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsTeLink()
    :
    affinity{YType::uint32, "affinity"},
    dste_allocation_model_id{YType::enumeration, "dste-allocation-model-id"},
    dste_in_use{YType::boolean, "dste-in-use"},
    fragment_id{YType::uint32, "fragment-id"},
    igp_metric{YType::uint32, "igp-metric"},
    input_interface_id{YType::uint32, "input-interface-id"},
    link_address{YType::str, "link-address"},
    maximum_link_bw{YType::uint32, "maximum-link-bw"},
    maximum_link_reservable_bw{YType::uint32, "maximum-link-reservable-bw"},
    maximum_link_sub_reservable_bw{YType::uint32, "maximum-link-sub-reservable-bw"},
    mpls_link_instance{YType::uint32, "mpls-link-instance"},
    mpls_link_type{YType::enumeration, "mpls-link-type"},
    neighbor_ip_address{YType::str, "neighbor-ip-address"},
    neighbor_system_id{YType::str, "neighbor-system-id"},
    new_link{YType::boolean, "new-link"},
    number_of_optional_tl_vs{YType::uint8, "number-of-optional-tl-vs"},
    output_interface_id{YType::uint32, "output-interface-id"},
    priority_count{YType::int32, "priority-count"},
    te_metric{YType::uint32, "te-metric"}
    	,
    extended_admin_group_list(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::ExtendedAdminGroupList>())
	,global_unreserve_bw_per_priority(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::GlobalUnreserveBwPerPriority>())
	,link_protocol_priority_capability(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::LinkProtocolPriorityCapability>())
	,link_sw_capability(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::LinkSwCapability>())
	,sub_pool_unreserve_bw_per_priority(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::SubPoolUnreserveBwPerPriority>())
{
    extended_admin_group_list->parent = this;
    children["extended-admin-group-list"] = extended_admin_group_list;

    global_unreserve_bw_per_priority->parent = this;
    children["global-unreserve-bw-per-priority"] = global_unreserve_bw_per_priority;

    link_protocol_priority_capability->parent = this;
    children["link-protocol-priority-capability"] = link_protocol_priority_capability;

    link_sw_capability->parent = this;
    children["link-sw-capability"] = link_sw_capability;

    sub_pool_unreserve_bw_per_priority->parent = this;
    children["sub-pool-unreserve-bw-per-priority"] = sub_pool_unreserve_bw_per_priority;

    yang_name = "mpls-te-link"; yang_parent_name = "mpls-te-fragment";
}

Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::~MplsTeLink()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::has_data() const
{
    for (std::size_t index=0; index<mplste_link_opt_tlv.size(); index++)
    {
        if(mplste_link_opt_tlv[index]->has_data())
            return true;
    }
    return affinity.is_set
	|| dste_allocation_model_id.is_set
	|| dste_in_use.is_set
	|| fragment_id.is_set
	|| igp_metric.is_set
	|| input_interface_id.is_set
	|| link_address.is_set
	|| maximum_link_bw.is_set
	|| maximum_link_reservable_bw.is_set
	|| maximum_link_sub_reservable_bw.is_set
	|| mpls_link_instance.is_set
	|| mpls_link_type.is_set
	|| neighbor_ip_address.is_set
	|| neighbor_system_id.is_set
	|| new_link.is_set
	|| number_of_optional_tl_vs.is_set
	|| output_interface_id.is_set
	|| priority_count.is_set
	|| te_metric.is_set
	|| (extended_admin_group_list !=  nullptr && extended_admin_group_list->has_data())
	|| (global_unreserve_bw_per_priority !=  nullptr && global_unreserve_bw_per_priority->has_data())
	|| (link_protocol_priority_capability !=  nullptr && link_protocol_priority_capability->has_data())
	|| (link_sw_capability !=  nullptr && link_sw_capability->has_data())
	|| (sub_pool_unreserve_bw_per_priority !=  nullptr && sub_pool_unreserve_bw_per_priority->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::has_operation() const
{
    for (std::size_t index=0; index<mplste_link_opt_tlv.size(); index++)
    {
        if(mplste_link_opt_tlv[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(affinity.operation)
	|| is_set(dste_allocation_model_id.operation)
	|| is_set(dste_in_use.operation)
	|| is_set(fragment_id.operation)
	|| is_set(igp_metric.operation)
	|| is_set(input_interface_id.operation)
	|| is_set(link_address.operation)
	|| is_set(maximum_link_bw.operation)
	|| is_set(maximum_link_reservable_bw.operation)
	|| is_set(maximum_link_sub_reservable_bw.operation)
	|| is_set(mpls_link_instance.operation)
	|| is_set(mpls_link_type.operation)
	|| is_set(neighbor_ip_address.operation)
	|| is_set(neighbor_system_id.operation)
	|| is_set(new_link.operation)
	|| is_set(number_of_optional_tl_vs.operation)
	|| is_set(output_interface_id.operation)
	|| is_set(priority_count.operation)
	|| is_set(te_metric.operation)
	|| (extended_admin_group_list !=  nullptr && extended_admin_group_list->has_operation())
	|| (global_unreserve_bw_per_priority !=  nullptr && global_unreserve_bw_per_priority->has_operation())
	|| (link_protocol_priority_capability !=  nullptr && link_protocol_priority_capability->has_operation())
	|| (link_sw_capability !=  nullptr && link_sw_capability->has_operation())
	|| (sub_pool_unreserve_bw_per_priority !=  nullptr && sub_pool_unreserve_bw_per_priority->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-te-link";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MplsTeLink' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity.is_set || is_set(affinity.operation)) leaf_name_data.push_back(affinity.get_name_leafdata());
    if (dste_allocation_model_id.is_set || is_set(dste_allocation_model_id.operation)) leaf_name_data.push_back(dste_allocation_model_id.get_name_leafdata());
    if (dste_in_use.is_set || is_set(dste_in_use.operation)) leaf_name_data.push_back(dste_in_use.get_name_leafdata());
    if (fragment_id.is_set || is_set(fragment_id.operation)) leaf_name_data.push_back(fragment_id.get_name_leafdata());
    if (igp_metric.is_set || is_set(igp_metric.operation)) leaf_name_data.push_back(igp_metric.get_name_leafdata());
    if (input_interface_id.is_set || is_set(input_interface_id.operation)) leaf_name_data.push_back(input_interface_id.get_name_leafdata());
    if (link_address.is_set || is_set(link_address.operation)) leaf_name_data.push_back(link_address.get_name_leafdata());
    if (maximum_link_bw.is_set || is_set(maximum_link_bw.operation)) leaf_name_data.push_back(maximum_link_bw.get_name_leafdata());
    if (maximum_link_reservable_bw.is_set || is_set(maximum_link_reservable_bw.operation)) leaf_name_data.push_back(maximum_link_reservable_bw.get_name_leafdata());
    if (maximum_link_sub_reservable_bw.is_set || is_set(maximum_link_sub_reservable_bw.operation)) leaf_name_data.push_back(maximum_link_sub_reservable_bw.get_name_leafdata());
    if (mpls_link_instance.is_set || is_set(mpls_link_instance.operation)) leaf_name_data.push_back(mpls_link_instance.get_name_leafdata());
    if (mpls_link_type.is_set || is_set(mpls_link_type.operation)) leaf_name_data.push_back(mpls_link_type.get_name_leafdata());
    if (neighbor_ip_address.is_set || is_set(neighbor_ip_address.operation)) leaf_name_data.push_back(neighbor_ip_address.get_name_leafdata());
    if (neighbor_system_id.is_set || is_set(neighbor_system_id.operation)) leaf_name_data.push_back(neighbor_system_id.get_name_leafdata());
    if (new_link.is_set || is_set(new_link.operation)) leaf_name_data.push_back(new_link.get_name_leafdata());
    if (number_of_optional_tl_vs.is_set || is_set(number_of_optional_tl_vs.operation)) leaf_name_data.push_back(number_of_optional_tl_vs.get_name_leafdata());
    if (output_interface_id.is_set || is_set(output_interface_id.operation)) leaf_name_data.push_back(output_interface_id.get_name_leafdata());
    if (priority_count.is_set || is_set(priority_count.operation)) leaf_name_data.push_back(priority_count.get_name_leafdata());
    if (te_metric.is_set || is_set(te_metric.operation)) leaf_name_data.push_back(te_metric.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "extended-admin-group-list")
    {
        if(extended_admin_group_list != nullptr)
        {
            children["extended-admin-group-list"] = extended_admin_group_list;
        }
        else
        {
            extended_admin_group_list = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::ExtendedAdminGroupList>();
            extended_admin_group_list->parent = this;
            children["extended-admin-group-list"] = extended_admin_group_list;
        }
        return children.at("extended-admin-group-list");
    }

    if(child_yang_name == "global-unreserve-bw-per-priority")
    {
        if(global_unreserve_bw_per_priority != nullptr)
        {
            children["global-unreserve-bw-per-priority"] = global_unreserve_bw_per_priority;
        }
        else
        {
            global_unreserve_bw_per_priority = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::GlobalUnreserveBwPerPriority>();
            global_unreserve_bw_per_priority->parent = this;
            children["global-unreserve-bw-per-priority"] = global_unreserve_bw_per_priority;
        }
        return children.at("global-unreserve-bw-per-priority");
    }

    if(child_yang_name == "link-protocol-priority-capability")
    {
        if(link_protocol_priority_capability != nullptr)
        {
            children["link-protocol-priority-capability"] = link_protocol_priority_capability;
        }
        else
        {
            link_protocol_priority_capability = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::LinkProtocolPriorityCapability>();
            link_protocol_priority_capability->parent = this;
            children["link-protocol-priority-capability"] = link_protocol_priority_capability;
        }
        return children.at("link-protocol-priority-capability");
    }

    if(child_yang_name == "link-sw-capability")
    {
        if(link_sw_capability != nullptr)
        {
            children["link-sw-capability"] = link_sw_capability;
        }
        else
        {
            link_sw_capability = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::LinkSwCapability>();
            link_sw_capability->parent = this;
            children["link-sw-capability"] = link_sw_capability;
        }
        return children.at("link-sw-capability");
    }

    if(child_yang_name == "mplste-link-opt-tlv")
    {
        for(auto const & c : mplste_link_opt_tlv)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv>();
        c->parent = this;
        mplste_link_opt_tlv.push_back(std::move(c));
        children[segment_path] = mplste_link_opt_tlv.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "sub-pool-unreserve-bw-per-priority")
    {
        if(sub_pool_unreserve_bw_per_priority != nullptr)
        {
            children["sub-pool-unreserve-bw-per-priority"] = sub_pool_unreserve_bw_per_priority;
        }
        else
        {
            sub_pool_unreserve_bw_per_priority = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::SubPoolUnreserveBwPerPriority>();
            sub_pool_unreserve_bw_per_priority->parent = this;
            children["sub-pool-unreserve-bw-per-priority"] = sub_pool_unreserve_bw_per_priority;
        }
        return children.at("sub-pool-unreserve-bw-per-priority");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::get_children()
{
    if(children.find("extended-admin-group-list") == children.end())
    {
        if(extended_admin_group_list != nullptr)
        {
            children["extended-admin-group-list"] = extended_admin_group_list;
        }
    }

    if(children.find("global-unreserve-bw-per-priority") == children.end())
    {
        if(global_unreserve_bw_per_priority != nullptr)
        {
            children["global-unreserve-bw-per-priority"] = global_unreserve_bw_per_priority;
        }
    }

    if(children.find("link-protocol-priority-capability") == children.end())
    {
        if(link_protocol_priority_capability != nullptr)
        {
            children["link-protocol-priority-capability"] = link_protocol_priority_capability;
        }
    }

    if(children.find("link-sw-capability") == children.end())
    {
        if(link_sw_capability != nullptr)
        {
            children["link-sw-capability"] = link_sw_capability;
        }
    }

    for (auto const & c : mplste_link_opt_tlv)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("sub-pool-unreserve-bw-per-priority") == children.end())
    {
        if(sub_pool_unreserve_bw_per_priority != nullptr)
        {
            children["sub-pool-unreserve-bw-per-priority"] = sub_pool_unreserve_bw_per_priority;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "affinity")
    {
        affinity = value;
    }
    if(value_path == "dste-allocation-model-id")
    {
        dste_allocation_model_id = value;
    }
    if(value_path == "dste-in-use")
    {
        dste_in_use = value;
    }
    if(value_path == "fragment-id")
    {
        fragment_id = value;
    }
    if(value_path == "igp-metric")
    {
        igp_metric = value;
    }
    if(value_path == "input-interface-id")
    {
        input_interface_id = value;
    }
    if(value_path == "link-address")
    {
        link_address = value;
    }
    if(value_path == "maximum-link-bw")
    {
        maximum_link_bw = value;
    }
    if(value_path == "maximum-link-reservable-bw")
    {
        maximum_link_reservable_bw = value;
    }
    if(value_path == "maximum-link-sub-reservable-bw")
    {
        maximum_link_sub_reservable_bw = value;
    }
    if(value_path == "mpls-link-instance")
    {
        mpls_link_instance = value;
    }
    if(value_path == "mpls-link-type")
    {
        mpls_link_type = value;
    }
    if(value_path == "neighbor-ip-address")
    {
        neighbor_ip_address = value;
    }
    if(value_path == "neighbor-system-id")
    {
        neighbor_system_id = value;
    }
    if(value_path == "new-link")
    {
        new_link = value;
    }
    if(value_path == "number-of-optional-tl-vs")
    {
        number_of_optional_tl_vs = value;
    }
    if(value_path == "output-interface-id")
    {
        output_interface_id = value;
    }
    if(value_path == "priority-count")
    {
        priority_count = value;
    }
    if(value_path == "te-metric")
    {
        te_metric = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::GlobalUnreserveBwPerPriority::GlobalUnreserveBwPerPriority()
    :
    bw_per_priority{YType::uint64, "bw-per-priority"}
{
    yang_name = "global-unreserve-bw-per-priority"; yang_parent_name = "mpls-te-link";
}

Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::GlobalUnreserveBwPerPriority::~GlobalUnreserveBwPerPriority()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::GlobalUnreserveBwPerPriority::has_data() const
{
    for (auto const & leaf : bw_per_priority.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::GlobalUnreserveBwPerPriority::has_operation() const
{
    for (auto const & leaf : bw_per_priority.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(bw_per_priority.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::GlobalUnreserveBwPerPriority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-unreserve-bw-per-priority";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::GlobalUnreserveBwPerPriority::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GlobalUnreserveBwPerPriority' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto bw_per_priority_name_datas = bw_per_priority.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), bw_per_priority_name_datas.begin(), bw_per_priority_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::GlobalUnreserveBwPerPriority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::GlobalUnreserveBwPerPriority::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::GlobalUnreserveBwPerPriority::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bw-per-priority")
    {
        bw_per_priority.append(value);
    }
}

Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::SubPoolUnreserveBwPerPriority::SubPoolUnreserveBwPerPriority()
    :
    bw_per_priority{YType::uint64, "bw-per-priority"}
{
    yang_name = "sub-pool-unreserve-bw-per-priority"; yang_parent_name = "mpls-te-link";
}

Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::SubPoolUnreserveBwPerPriority::~SubPoolUnreserveBwPerPriority()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::SubPoolUnreserveBwPerPriority::has_data() const
{
    for (auto const & leaf : bw_per_priority.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::SubPoolUnreserveBwPerPriority::has_operation() const
{
    for (auto const & leaf : bw_per_priority.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(bw_per_priority.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::SubPoolUnreserveBwPerPriority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sub-pool-unreserve-bw-per-priority";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::SubPoolUnreserveBwPerPriority::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SubPoolUnreserveBwPerPriority' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto bw_per_priority_name_datas = bw_per_priority.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), bw_per_priority_name_datas.begin(), bw_per_priority_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::SubPoolUnreserveBwPerPriority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::SubPoolUnreserveBwPerPriority::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::SubPoolUnreserveBwPerPriority::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bw-per-priority")
    {
        bw_per_priority.append(value);
    }
}

Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::LinkProtocolPriorityCapability::LinkProtocolPriorityCapability()
    :
    link_protocol_capability{YType::uint8, "link-protocol-capability"},
    link_protocol_priority{YType::uint8, "link-protocol-priority"}
{
    yang_name = "link-protocol-priority-capability"; yang_parent_name = "mpls-te-link";
}

Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::LinkProtocolPriorityCapability::~LinkProtocolPriorityCapability()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::LinkProtocolPriorityCapability::has_data() const
{
    return link_protocol_capability.is_set
	|| link_protocol_priority.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::LinkProtocolPriorityCapability::has_operation() const
{
    return is_set(operation)
	|| is_set(link_protocol_capability.operation)
	|| is_set(link_protocol_priority.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::LinkProtocolPriorityCapability::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-protocol-priority-capability";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::LinkProtocolPriorityCapability::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LinkProtocolPriorityCapability' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_protocol_capability.is_set || is_set(link_protocol_capability.operation)) leaf_name_data.push_back(link_protocol_capability.get_name_leafdata());
    if (link_protocol_priority.is_set || is_set(link_protocol_priority.operation)) leaf_name_data.push_back(link_protocol_priority.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::LinkProtocolPriorityCapability::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::LinkProtocolPriorityCapability::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::LinkProtocolPriorityCapability::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "link-protocol-capability")
    {
        link_protocol_capability = value;
    }
    if(value_path == "link-protocol-priority")
    {
        link_protocol_priority = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::LinkSwCapability::LinkSwCapability()
    :
    link_encoding{YType::uint8, "link-encoding"},
    link_mtu{YType::uint16, "link-mtu"},
    link_switching_capability{YType::uint8, "link-switching-capability"},
    maximum_lsp_bw_per_priority{YType::uint64, "maximum-lsp-bw-per-priority"},
    minimum_lsp_bw{YType::uint64, "minimum-lsp-bw"}
{
    yang_name = "link-sw-capability"; yang_parent_name = "mpls-te-link";
}

Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::LinkSwCapability::~LinkSwCapability()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::LinkSwCapability::has_data() const
{
    for (auto const & leaf : maximum_lsp_bw_per_priority.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return link_encoding.is_set
	|| link_mtu.is_set
	|| link_switching_capability.is_set
	|| minimum_lsp_bw.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::LinkSwCapability::has_operation() const
{
    for (auto const & leaf : maximum_lsp_bw_per_priority.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(link_encoding.operation)
	|| is_set(link_mtu.operation)
	|| is_set(link_switching_capability.operation)
	|| is_set(maximum_lsp_bw_per_priority.operation)
	|| is_set(minimum_lsp_bw.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::LinkSwCapability::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-sw-capability";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::LinkSwCapability::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LinkSwCapability' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_encoding.is_set || is_set(link_encoding.operation)) leaf_name_data.push_back(link_encoding.get_name_leafdata());
    if (link_mtu.is_set || is_set(link_mtu.operation)) leaf_name_data.push_back(link_mtu.get_name_leafdata());
    if (link_switching_capability.is_set || is_set(link_switching_capability.operation)) leaf_name_data.push_back(link_switching_capability.get_name_leafdata());
    if (minimum_lsp_bw.is_set || is_set(minimum_lsp_bw.operation)) leaf_name_data.push_back(minimum_lsp_bw.get_name_leafdata());

    auto maximum_lsp_bw_per_priority_name_datas = maximum_lsp_bw_per_priority.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), maximum_lsp_bw_per_priority_name_datas.begin(), maximum_lsp_bw_per_priority_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::LinkSwCapability::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::LinkSwCapability::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::LinkSwCapability::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "link-encoding")
    {
        link_encoding = value;
    }
    if(value_path == "link-mtu")
    {
        link_mtu = value;
    }
    if(value_path == "link-switching-capability")
    {
        link_switching_capability = value;
    }
    if(value_path == "maximum-lsp-bw-per-priority")
    {
        maximum_lsp_bw_per_priority.append(value);
    }
    if(value_path == "minimum-lsp-bw")
    {
        minimum_lsp_bw = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::ExtendedAdminGroupList::ExtendedAdminGroupList()
    :
    ext_admin_data{YType::uint32, "ext-admin-data"},
    extended_admin_size{YType::uint32, "extended-admin-size"}
{
    yang_name = "extended-admin-group-list"; yang_parent_name = "mpls-te-link";
}

Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::ExtendedAdminGroupList::~ExtendedAdminGroupList()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::ExtendedAdminGroupList::has_data() const
{
    for (auto const & leaf : ext_admin_data.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return extended_admin_size.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::ExtendedAdminGroupList::has_operation() const
{
    for (auto const & leaf : ext_admin_data.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(ext_admin_data.operation)
	|| is_set(extended_admin_size.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::ExtendedAdminGroupList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-admin-group-list";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::ExtendedAdminGroupList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExtendedAdminGroupList' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (extended_admin_size.is_set || is_set(extended_admin_size.operation)) leaf_name_data.push_back(extended_admin_size.get_name_leafdata());

    auto ext_admin_data_name_datas = ext_admin_data.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), ext_admin_data_name_datas.begin(), ext_admin_data_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::ExtendedAdminGroupList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::ExtendedAdminGroupList::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::ExtendedAdminGroupList::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ext-admin-data")
    {
        ext_admin_data.append(value);
    }
    if(value_path == "extended-admin-size")
    {
        extended_admin_size = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlv()
    :
    mplste_link_opt_tlv_len{YType::uint16, "mplste-link-opt-tlv-len"},
    mplste_link_opt_tlv_type{YType::enumeration, "mplste-link-opt-tlv-type"}
{
    yang_name = "mplste-link-opt-tlv"; yang_parent_name = "mpls-te-link";
}

Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::~MplsteLinkOptTlv()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::has_data() const
{
    for (std::size_t index=0; index<mplste_link_opt_tlv_value.size(); index++)
    {
        if(mplste_link_opt_tlv_value[index]->has_data())
            return true;
    }
    return mplste_link_opt_tlv_len.is_set
	|| mplste_link_opt_tlv_type.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::has_operation() const
{
    for (std::size_t index=0; index<mplste_link_opt_tlv_value.size(); index++)
    {
        if(mplste_link_opt_tlv_value[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(mplste_link_opt_tlv_len.operation)
	|| is_set(mplste_link_opt_tlv_type.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplste-link-opt-tlv";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MplsteLinkOptTlv' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mplste_link_opt_tlv_len.is_set || is_set(mplste_link_opt_tlv_len.operation)) leaf_name_data.push_back(mplste_link_opt_tlv_len.get_name_leafdata());
    if (mplste_link_opt_tlv_type.is_set || is_set(mplste_link_opt_tlv_type.operation)) leaf_name_data.push_back(mplste_link_opt_tlv_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "mplste-link-opt-tlv-value")
    {
        for(auto const & c : mplste_link_opt_tlv_value)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue>();
        c->parent = this;
        mplste_link_opt_tlv_value.push_back(std::move(c));
        children[segment_path] = mplste_link_opt_tlv_value.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::get_children()
{
    for (auto const & c : mplste_link_opt_tlv_value)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mplste-link-opt-tlv-len")
    {
        mplste_link_opt_tlv_len = value;
    }
    if(value_path == "mplste-link-opt-tlv-type")
    {
        mplste_link_opt_tlv_type = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::MplsteLinkOptTlvValue()
    :
    opaque_tlv_type{YType::enumeration, "opaque-tlv-type"}
    	,
    bctlv_value(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue>())
	,ixcdtlv_value(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue>())
	,srlgtlv_value(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue>())
	,unidtlv_value(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue>())
{
    bctlv_value->parent = this;
    children["bctlv-value"] = bctlv_value;

    ixcdtlv_value->parent = this;
    children["ixcdtlv-value"] = ixcdtlv_value;

    srlgtlv_value->parent = this;
    children["srlgtlv-value"] = srlgtlv_value;

    unidtlv_value->parent = this;
    children["unidtlv-value"] = unidtlv_value;

    yang_name = "mplste-link-opt-tlv-value"; yang_parent_name = "mplste-link-opt-tlv";
}

Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::~MplsteLinkOptTlvValue()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::has_data() const
{
    return opaque_tlv_type.is_set
	|| (bctlv_value !=  nullptr && bctlv_value->has_data())
	|| (ixcdtlv_value !=  nullptr && ixcdtlv_value->has_data())
	|| (srlgtlv_value !=  nullptr && srlgtlv_value->has_data())
	|| (unidtlv_value !=  nullptr && unidtlv_value->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::has_operation() const
{
    return is_set(operation)
	|| is_set(opaque_tlv_type.operation)
	|| (bctlv_value !=  nullptr && bctlv_value->has_operation())
	|| (ixcdtlv_value !=  nullptr && ixcdtlv_value->has_operation())
	|| (srlgtlv_value !=  nullptr && srlgtlv_value->has_operation())
	|| (unidtlv_value !=  nullptr && unidtlv_value->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplste-link-opt-tlv-value";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MplsteLinkOptTlvValue' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (opaque_tlv_type.is_set || is_set(opaque_tlv_type.operation)) leaf_name_data.push_back(opaque_tlv_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bctlv-value")
    {
        if(bctlv_value != nullptr)
        {
            children["bctlv-value"] = bctlv_value;
        }
        else
        {
            bctlv_value = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue>();
            bctlv_value->parent = this;
            children["bctlv-value"] = bctlv_value;
        }
        return children.at("bctlv-value");
    }

    if(child_yang_name == "ixcdtlv-value")
    {
        if(ixcdtlv_value != nullptr)
        {
            children["ixcdtlv-value"] = ixcdtlv_value;
        }
        else
        {
            ixcdtlv_value = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue>();
            ixcdtlv_value->parent = this;
            children["ixcdtlv-value"] = ixcdtlv_value;
        }
        return children.at("ixcdtlv-value");
    }

    if(child_yang_name == "srlgtlv-value")
    {
        if(srlgtlv_value != nullptr)
        {
            children["srlgtlv-value"] = srlgtlv_value;
        }
        else
        {
            srlgtlv_value = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue>();
            srlgtlv_value->parent = this;
            children["srlgtlv-value"] = srlgtlv_value;
        }
        return children.at("srlgtlv-value");
    }

    if(child_yang_name == "unidtlv-value")
    {
        if(unidtlv_value != nullptr)
        {
            children["unidtlv-value"] = unidtlv_value;
        }
        else
        {
            unidtlv_value = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue>();
            unidtlv_value->parent = this;
            children["unidtlv-value"] = unidtlv_value;
        }
        return children.at("unidtlv-value");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::get_children()
{
    if(children.find("bctlv-value") == children.end())
    {
        if(bctlv_value != nullptr)
        {
            children["bctlv-value"] = bctlv_value;
        }
    }

    if(children.find("ixcdtlv-value") == children.end())
    {
        if(ixcdtlv_value != nullptr)
        {
            children["ixcdtlv-value"] = ixcdtlv_value;
        }
    }

    if(children.find("srlgtlv-value") == children.end())
    {
        if(srlgtlv_value != nullptr)
        {
            children["srlgtlv-value"] = srlgtlv_value;
        }
    }

    if(children.find("unidtlv-value") == children.end())
    {
        if(unidtlv_value != nullptr)
        {
            children["unidtlv-value"] = unidtlv_value;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "opaque-tlv-type")
    {
        opaque_tlv_type = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::BctlvValue()
    :
    model_id{YType::uint8, "model-id"},
    mplste_link_bc_bandwidth{YType::uint64, "mplste-link-bc-bandwidth"},
    num_b_cs{YType::uint32, "num-b-cs"}
{
    yang_name = "bctlv-value"; yang_parent_name = "mplste-link-opt-tlv-value";
}

Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::~BctlvValue()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::has_data() const
{
    for (auto const & leaf : mplste_link_bc_bandwidth.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return model_id.is_set
	|| num_b_cs.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::has_operation() const
{
    for (auto const & leaf : mplste_link_bc_bandwidth.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(model_id.operation)
	|| is_set(mplste_link_bc_bandwidth.operation)
	|| is_set(num_b_cs.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bctlv-value";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BctlvValue' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (model_id.is_set || is_set(model_id.operation)) leaf_name_data.push_back(model_id.get_name_leafdata());
    if (num_b_cs.is_set || is_set(num_b_cs.operation)) leaf_name_data.push_back(num_b_cs.get_name_leafdata());

    auto mplste_link_bc_bandwidth_name_datas = mplste_link_bc_bandwidth.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), mplste_link_bc_bandwidth_name_datas.begin(), mplste_link_bc_bandwidth_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "model-id")
    {
        model_id = value;
    }
    if(value_path == "mplste-link-bc-bandwidth")
    {
        mplste_link_bc_bandwidth.append(value);
    }
    if(value_path == "num-b-cs")
    {
        num_b_cs = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::SrlgtlvValue()
    :
    mplste_link_srlg_data{YType::uint32, "mplste-link-srlg-data"},
    num_srl_gs{YType::uint32, "num-srl-gs"},
    srlg_len{YType::uint32, "srlg-len"}
{
    yang_name = "srlgtlv-value"; yang_parent_name = "mplste-link-opt-tlv-value";
}

Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::~SrlgtlvValue()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::has_data() const
{
    for (auto const & leaf : mplste_link_srlg_data.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return num_srl_gs.is_set
	|| srlg_len.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::has_operation() const
{
    for (auto const & leaf : mplste_link_srlg_data.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(mplste_link_srlg_data.operation)
	|| is_set(num_srl_gs.operation)
	|| is_set(srlg_len.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srlgtlv-value";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SrlgtlvValue' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_srl_gs.is_set || is_set(num_srl_gs.operation)) leaf_name_data.push_back(num_srl_gs.get_name_leafdata());
    if (srlg_len.is_set || is_set(srlg_len.operation)) leaf_name_data.push_back(srlg_len.get_name_leafdata());

    auto mplste_link_srlg_data_name_datas = mplste_link_srlg_data.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), mplste_link_srlg_data_name_datas.begin(), mplste_link_srlg_data_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mplste-link-srlg-data")
    {
        mplste_link_srlg_data.append(value);
    }
    if(value_path == "num-srl-gs")
    {
        num_srl_gs = value;
    }
    if(value_path == "srlg-len")
    {
        srlg_len = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdtlvValue()
    :
    fixed_scsi_count{YType::uint32, "fixed-scsi-count"},
    flex_scsi_count{YType::uint32, "flex-scsi-count"},
    max_lspbw{YType::int64, "max-lspbw"},
    rile_len_code{YType::uint8, "rile-len-code"},
    switching_cap{YType::uint8, "switching-cap"}
    	,
    ixcd_switching_cap_type(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType>())
{
    ixcd_switching_cap_type->parent = this;
    children["ixcd-switching-cap-type"] = ixcd_switching_cap_type;

    yang_name = "ixcdtlv-value"; yang_parent_name = "mplste-link-opt-tlv-value";
}

Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::~IxcdtlvValue()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::has_data() const
{
    for (auto const & leaf : max_lspbw.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return fixed_scsi_count.is_set
	|| flex_scsi_count.is_set
	|| rile_len_code.is_set
	|| switching_cap.is_set
	|| (ixcd_switching_cap_type !=  nullptr && ixcd_switching_cap_type->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::has_operation() const
{
    for (auto const & leaf : max_lspbw.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(fixed_scsi_count.operation)
	|| is_set(flex_scsi_count.operation)
	|| is_set(max_lspbw.operation)
	|| is_set(rile_len_code.operation)
	|| is_set(switching_cap.operation)
	|| (ixcd_switching_cap_type !=  nullptr && ixcd_switching_cap_type->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ixcdtlv-value";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IxcdtlvValue' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fixed_scsi_count.is_set || is_set(fixed_scsi_count.operation)) leaf_name_data.push_back(fixed_scsi_count.get_name_leafdata());
    if (flex_scsi_count.is_set || is_set(flex_scsi_count.operation)) leaf_name_data.push_back(flex_scsi_count.get_name_leafdata());
    if (rile_len_code.is_set || is_set(rile_len_code.operation)) leaf_name_data.push_back(rile_len_code.get_name_leafdata());
    if (switching_cap.is_set || is_set(switching_cap.operation)) leaf_name_data.push_back(switching_cap.get_name_leafdata());

    auto max_lspbw_name_datas = max_lspbw.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), max_lspbw_name_datas.begin(), max_lspbw_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ixcd-switching-cap-type")
    {
        if(ixcd_switching_cap_type != nullptr)
        {
            children["ixcd-switching-cap-type"] = ixcd_switching_cap_type;
        }
        else
        {
            ixcd_switching_cap_type = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType>();
            ixcd_switching_cap_type->parent = this;
            children["ixcd-switching-cap-type"] = ixcd_switching_cap_type;
        }
        return children.at("ixcd-switching-cap-type");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::get_children()
{
    if(children.find("ixcd-switching-cap-type") == children.end())
    {
        if(ixcd_switching_cap_type != nullptr)
        {
            children["ixcd-switching-cap-type"] = ixcd_switching_cap_type;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "fixed-scsi-count")
    {
        fixed_scsi_count = value;
    }
    if(value_path == "flex-scsi-count")
    {
        flex_scsi_count = value;
    }
    if(value_path == "max-lspbw")
    {
        max_lspbw.append(value);
    }
    if(value_path == "rile-len-code")
    {
        rile_len_code = value;
    }
    if(value_path == "switching-cap")
    {
        switching_cap = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdSwitchingCapType()
    :
    switching_cap_type{YType::uint8, "switching-cap-type"}
    	,
    ixcdbw_sub_tlv(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv>())
	,ixcdpsc_info(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo>())
{
    ixcdbw_sub_tlv->parent = this;
    children["ixcdbw-sub-tlv"] = ixcdbw_sub_tlv;

    ixcdpsc_info->parent = this;
    children["ixcdpsc-info"] = ixcdpsc_info;

    yang_name = "ixcd-switching-cap-type"; yang_parent_name = "ixcdtlv-value";
}

Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::~IxcdSwitchingCapType()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::has_data() const
{
    return switching_cap_type.is_set
	|| (ixcdbw_sub_tlv !=  nullptr && ixcdbw_sub_tlv->has_data())
	|| (ixcdpsc_info !=  nullptr && ixcdpsc_info->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::has_operation() const
{
    return is_set(operation)
	|| is_set(switching_cap_type.operation)
	|| (ixcdbw_sub_tlv !=  nullptr && ixcdbw_sub_tlv->has_operation())
	|| (ixcdpsc_info !=  nullptr && ixcdpsc_info->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ixcd-switching-cap-type";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IxcdSwitchingCapType' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (switching_cap_type.is_set || is_set(switching_cap_type.operation)) leaf_name_data.push_back(switching_cap_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ixcdbw-sub-tlv")
    {
        if(ixcdbw_sub_tlv != nullptr)
        {
            children["ixcdbw-sub-tlv"] = ixcdbw_sub_tlv;
        }
        else
        {
            ixcdbw_sub_tlv = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv>();
            ixcdbw_sub_tlv->parent = this;
            children["ixcdbw-sub-tlv"] = ixcdbw_sub_tlv;
        }
        return children.at("ixcdbw-sub-tlv");
    }

    if(child_yang_name == "ixcdpsc-info")
    {
        if(ixcdpsc_info != nullptr)
        {
            children["ixcdpsc-info"] = ixcdpsc_info;
        }
        else
        {
            ixcdpsc_info = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo>();
            ixcdpsc_info->parent = this;
            children["ixcdpsc-info"] = ixcdpsc_info;
        }
        return children.at("ixcdpsc-info");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::get_children()
{
    if(children.find("ixcdbw-sub-tlv") == children.end())
    {
        if(ixcdbw_sub_tlv != nullptr)
        {
            children["ixcdbw-sub-tlv"] = ixcdbw_sub_tlv;
        }
    }

    if(children.find("ixcdpsc-info") == children.end())
    {
        if(ixcdpsc_info != nullptr)
        {
            children["ixcdpsc-info"] = ixcdpsc_info;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "switching-cap-type")
    {
        switching_cap_type = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo::IxcdpscInfo()
    :
    min_lsp_bandwidth{YType::uint64, "min-lsp-bandwidth"},
    psc_interface_mtu{YType::uint16, "psc-interface-mtu"}
{
    yang_name = "ixcdpsc-info"; yang_parent_name = "ixcd-switching-cap-type";
}

Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo::~IxcdpscInfo()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo::has_data() const
{
    return min_lsp_bandwidth.is_set
	|| psc_interface_mtu.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(min_lsp_bandwidth.operation)
	|| is_set(psc_interface_mtu.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ixcdpsc-info";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IxcdpscInfo' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (min_lsp_bandwidth.is_set || is_set(min_lsp_bandwidth.operation)) leaf_name_data.push_back(min_lsp_bandwidth.get_name_leafdata());
    if (psc_interface_mtu.is_set || is_set(psc_interface_mtu.operation)) leaf_name_data.push_back(psc_interface_mtu.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "min-lsp-bandwidth")
    {
        min_lsp_bandwidth = value;
    }
    if(value_path == "psc-interface-mtu")
    {
        psc_interface_mtu = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::IxcdbwSubTlv()
{
    yang_name = "ixcdbw-sub-tlv"; yang_parent_name = "ixcd-switching-cap-type";
}

Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::~IxcdbwSubTlv()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::has_data() const
{
    for (std::size_t index=0; index<arr_bw_sub_tlv.size(); index++)
    {
        if(arr_bw_sub_tlv[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::has_operation() const
{
    for (std::size_t index=0; index<arr_bw_sub_tlv.size(); index++)
    {
        if(arr_bw_sub_tlv[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ixcdbw-sub-tlv";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IxcdbwSubTlv' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "arr-bw-sub-tlv")
    {
        for(auto const & c : arr_bw_sub_tlv)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv>();
        c->parent = this;
        arr_bw_sub_tlv.push_back(std::move(c));
        children[segment_path] = arr_bw_sub_tlv.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::get_children()
{
    for (auto const & c : arr_bw_sub_tlv)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::ArrBwSubTlv()
    :
    bw_sub_tlv_length{YType::uint16, "bw-sub-tlv-length"},
    bw_sub_tlv_type{YType::uint16, "bw-sub-tlv-type"}
    	,
    bw_sub_tlv_value(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue>())
{
    bw_sub_tlv_value->parent = this;
    children["bw-sub-tlv-value"] = bw_sub_tlv_value;

    yang_name = "arr-bw-sub-tlv"; yang_parent_name = "ixcdbw-sub-tlv";
}

Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::~ArrBwSubTlv()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::has_data() const
{
    return bw_sub_tlv_length.is_set
	|| bw_sub_tlv_type.is_set
	|| (bw_sub_tlv_value !=  nullptr && bw_sub_tlv_value->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::has_operation() const
{
    return is_set(operation)
	|| is_set(bw_sub_tlv_length.operation)
	|| is_set(bw_sub_tlv_type.operation)
	|| (bw_sub_tlv_value !=  nullptr && bw_sub_tlv_value->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "arr-bw-sub-tlv";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ArrBwSubTlv' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bw_sub_tlv_length.is_set || is_set(bw_sub_tlv_length.operation)) leaf_name_data.push_back(bw_sub_tlv_length.get_name_leafdata());
    if (bw_sub_tlv_type.is_set || is_set(bw_sub_tlv_type.operation)) leaf_name_data.push_back(bw_sub_tlv_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bw-sub-tlv-value")
    {
        if(bw_sub_tlv_value != nullptr)
        {
            children["bw-sub-tlv-value"] = bw_sub_tlv_value;
        }
        else
        {
            bw_sub_tlv_value = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue>();
            bw_sub_tlv_value->parent = this;
            children["bw-sub-tlv-value"] = bw_sub_tlv_value;
        }
        return children.at("bw-sub-tlv-value");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::get_children()
{
    if(children.find("bw-sub-tlv-value") == children.end())
    {
        if(bw_sub_tlv_value != nullptr)
        {
            children["bw-sub-tlv-value"] = bw_sub_tlv_value;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bw-sub-tlv-length")
    {
        bw_sub_tlv_length = value;
    }
    if(value_path == "bw-sub-tlv-type")
    {
        bw_sub_tlv_type = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::BwSubTlvValue()
    :
    ixcdbw_sub_tlv_type{YType::uint16, "ixcdbw-sub-tlv-type"}
    	,
    fixed_bw_sub_tlv_value(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue>())
	,flex_bw_sub_tlv_value(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue>())
{
    fixed_bw_sub_tlv_value->parent = this;
    children["fixed-bw-sub-tlv-value"] = fixed_bw_sub_tlv_value;

    flex_bw_sub_tlv_value->parent = this;
    children["flex-bw-sub-tlv-value"] = flex_bw_sub_tlv_value;

    yang_name = "bw-sub-tlv-value"; yang_parent_name = "arr-bw-sub-tlv";
}

Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::~BwSubTlvValue()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::has_data() const
{
    return ixcdbw_sub_tlv_type.is_set
	|| (fixed_bw_sub_tlv_value !=  nullptr && fixed_bw_sub_tlv_value->has_data())
	|| (flex_bw_sub_tlv_value !=  nullptr && flex_bw_sub_tlv_value->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::has_operation() const
{
    return is_set(operation)
	|| is_set(ixcdbw_sub_tlv_type.operation)
	|| (fixed_bw_sub_tlv_value !=  nullptr && fixed_bw_sub_tlv_value->has_operation())
	|| (flex_bw_sub_tlv_value !=  nullptr && flex_bw_sub_tlv_value->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bw-sub-tlv-value";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BwSubTlvValue' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ixcdbw_sub_tlv_type.is_set || is_set(ixcdbw_sub_tlv_type.operation)) leaf_name_data.push_back(ixcdbw_sub_tlv_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "fixed-bw-sub-tlv-value")
    {
        if(fixed_bw_sub_tlv_value != nullptr)
        {
            children["fixed-bw-sub-tlv-value"] = fixed_bw_sub_tlv_value;
        }
        else
        {
            fixed_bw_sub_tlv_value = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue>();
            fixed_bw_sub_tlv_value->parent = this;
            children["fixed-bw-sub-tlv-value"] = fixed_bw_sub_tlv_value;
        }
        return children.at("fixed-bw-sub-tlv-value");
    }

    if(child_yang_name == "flex-bw-sub-tlv-value")
    {
        if(flex_bw_sub_tlv_value != nullptr)
        {
            children["flex-bw-sub-tlv-value"] = flex_bw_sub_tlv_value;
        }
        else
        {
            flex_bw_sub_tlv_value = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue>();
            flex_bw_sub_tlv_value->parent = this;
            children["flex-bw-sub-tlv-value"] = flex_bw_sub_tlv_value;
        }
        return children.at("flex-bw-sub-tlv-value");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::get_children()
{
    if(children.find("fixed-bw-sub-tlv-value") == children.end())
    {
        if(fixed_bw_sub_tlv_value != nullptr)
        {
            children["fixed-bw-sub-tlv-value"] = fixed_bw_sub_tlv_value;
        }
    }

    if(children.find("flex-bw-sub-tlv-value") == children.end())
    {
        if(flex_bw_sub_tlv_value != nullptr)
        {
            children["flex-bw-sub-tlv-value"] = flex_bw_sub_tlv_value;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ixcdbw-sub-tlv-type")
    {
        ixcdbw_sub_tlv_type = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedBwSubTlvValue()
    :
    unres_oduj_prio{YType::uint32, "unres-oduj-prio"}
    	,
    fixed_sub_tlv_value(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue>())
{
    fixed_sub_tlv_value->parent = this;
    children["fixed-sub-tlv-value"] = fixed_sub_tlv_value;

    yang_name = "fixed-bw-sub-tlv-value"; yang_parent_name = "bw-sub-tlv-value";
}

Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::~FixedBwSubTlvValue()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::has_data() const
{
    for (auto const & leaf : unres_oduj_prio.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return (fixed_sub_tlv_value !=  nullptr && fixed_sub_tlv_value->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::has_operation() const
{
    for (auto const & leaf : unres_oduj_prio.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(unres_oduj_prio.operation)
	|| (fixed_sub_tlv_value !=  nullptr && fixed_sub_tlv_value->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fixed-bw-sub-tlv-value";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FixedBwSubTlvValue' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto unres_oduj_prio_name_datas = unres_oduj_prio.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), unres_oduj_prio_name_datas.begin(), unres_oduj_prio_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "fixed-sub-tlv-value")
    {
        if(fixed_sub_tlv_value != nullptr)
        {
            children["fixed-sub-tlv-value"] = fixed_sub_tlv_value;
        }
        else
        {
            fixed_sub_tlv_value = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue>();
            fixed_sub_tlv_value->parent = this;
            children["fixed-sub-tlv-value"] = fixed_sub_tlv_value;
        }
        return children.at("fixed-sub-tlv-value");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::get_children()
{
    if(children.find("fixed-sub-tlv-value") == children.end())
    {
        if(fixed_sub_tlv_value != nullptr)
        {
            children["fixed-sub-tlv-value"] = fixed_sub_tlv_value;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unres-oduj-prio")
    {
        unres_oduj_prio.append(value);
    }
}

Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue::FixedSubTlvValue()
    :
    num_stages{YType::uint8, "num-stages"},
    priority_bit0{YType::uint8, "priority-bit0"},
    priority_bit1{YType::uint8, "priority-bit1"},
    priority_bit2{YType::uint8, "priority-bit2"},
    priority_bit3{YType::uint8, "priority-bit3"},
    priority_bit4{YType::uint8, "priority-bit4"},
    priority_bit5{YType::uint8, "priority-bit5"},
    priority_bit6{YType::uint8, "priority-bit6"},
    priority_bit7{YType::uint8, "priority-bit7"},
    res{YType::uint8, "res"},
    sbit{YType::uint8, "sbit"},
    signal_type{YType::uint8, "signal-type"},
    stage{YType::str, "stage"},
    tbit{YType::uint8, "tbit"},
    tsg{YType::uint8, "tsg"}
{
    yang_name = "fixed-sub-tlv-value"; yang_parent_name = "fixed-bw-sub-tlv-value";
}

Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue::~FixedSubTlvValue()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue::has_data() const
{
    return num_stages.is_set
	|| priority_bit0.is_set
	|| priority_bit1.is_set
	|| priority_bit2.is_set
	|| priority_bit3.is_set
	|| priority_bit4.is_set
	|| priority_bit5.is_set
	|| priority_bit6.is_set
	|| priority_bit7.is_set
	|| res.is_set
	|| sbit.is_set
	|| signal_type.is_set
	|| stage.is_set
	|| tbit.is_set
	|| tsg.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue::has_operation() const
{
    return is_set(operation)
	|| is_set(num_stages.operation)
	|| is_set(priority_bit0.operation)
	|| is_set(priority_bit1.operation)
	|| is_set(priority_bit2.operation)
	|| is_set(priority_bit3.operation)
	|| is_set(priority_bit4.operation)
	|| is_set(priority_bit5.operation)
	|| is_set(priority_bit6.operation)
	|| is_set(priority_bit7.operation)
	|| is_set(res.operation)
	|| is_set(sbit.operation)
	|| is_set(signal_type.operation)
	|| is_set(stage.operation)
	|| is_set(tbit.operation)
	|| is_set(tsg.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fixed-sub-tlv-value";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FixedSubTlvValue' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_stages.is_set || is_set(num_stages.operation)) leaf_name_data.push_back(num_stages.get_name_leafdata());
    if (priority_bit0.is_set || is_set(priority_bit0.operation)) leaf_name_data.push_back(priority_bit0.get_name_leafdata());
    if (priority_bit1.is_set || is_set(priority_bit1.operation)) leaf_name_data.push_back(priority_bit1.get_name_leafdata());
    if (priority_bit2.is_set || is_set(priority_bit2.operation)) leaf_name_data.push_back(priority_bit2.get_name_leafdata());
    if (priority_bit3.is_set || is_set(priority_bit3.operation)) leaf_name_data.push_back(priority_bit3.get_name_leafdata());
    if (priority_bit4.is_set || is_set(priority_bit4.operation)) leaf_name_data.push_back(priority_bit4.get_name_leafdata());
    if (priority_bit5.is_set || is_set(priority_bit5.operation)) leaf_name_data.push_back(priority_bit5.get_name_leafdata());
    if (priority_bit6.is_set || is_set(priority_bit6.operation)) leaf_name_data.push_back(priority_bit6.get_name_leafdata());
    if (priority_bit7.is_set || is_set(priority_bit7.operation)) leaf_name_data.push_back(priority_bit7.get_name_leafdata());
    if (res.is_set || is_set(res.operation)) leaf_name_data.push_back(res.get_name_leafdata());
    if (sbit.is_set || is_set(sbit.operation)) leaf_name_data.push_back(sbit.get_name_leafdata());
    if (signal_type.is_set || is_set(signal_type.operation)) leaf_name_data.push_back(signal_type.get_name_leafdata());
    if (stage.is_set || is_set(stage.operation)) leaf_name_data.push_back(stage.get_name_leafdata());
    if (tbit.is_set || is_set(tbit.operation)) leaf_name_data.push_back(tbit.get_name_leafdata());
    if (tsg.is_set || is_set(tsg.operation)) leaf_name_data.push_back(tsg.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "num-stages")
    {
        num_stages = value;
    }
    if(value_path == "priority-bit0")
    {
        priority_bit0 = value;
    }
    if(value_path == "priority-bit1")
    {
        priority_bit1 = value;
    }
    if(value_path == "priority-bit2")
    {
        priority_bit2 = value;
    }
    if(value_path == "priority-bit3")
    {
        priority_bit3 = value;
    }
    if(value_path == "priority-bit4")
    {
        priority_bit4 = value;
    }
    if(value_path == "priority-bit5")
    {
        priority_bit5 = value;
    }
    if(value_path == "priority-bit6")
    {
        priority_bit6 = value;
    }
    if(value_path == "priority-bit7")
    {
        priority_bit7 = value;
    }
    if(value_path == "res")
    {
        res = value;
    }
    if(value_path == "sbit")
    {
        sbit = value;
    }
    if(value_path == "signal-type")
    {
        signal_type = value;
    }
    if(value_path == "stage")
    {
        stage = value;
    }
    if(value_path == "tbit")
    {
        tbit = value;
    }
    if(value_path == "tsg")
    {
        tsg = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexBwSubTlvValue()
    :
    max_lspbw{YType::uint64, "max-lspbw"},
    unres_lspbw{YType::uint64, "unres-lspbw"}
    	,
    flex_sub_tlv_value_common(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon>())
{
    flex_sub_tlv_value_common->parent = this;
    children["flex-sub-tlv-value-common"] = flex_sub_tlv_value_common;

    yang_name = "flex-bw-sub-tlv-value"; yang_parent_name = "bw-sub-tlv-value";
}

Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::~FlexBwSubTlvValue()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::has_data() const
{
    for (auto const & leaf : max_lspbw.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : unres_lspbw.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return (flex_sub_tlv_value_common !=  nullptr && flex_sub_tlv_value_common->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::has_operation() const
{
    for (auto const & leaf : max_lspbw.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : unres_lspbw.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(max_lspbw.operation)
	|| is_set(unres_lspbw.operation)
	|| (flex_sub_tlv_value_common !=  nullptr && flex_sub_tlv_value_common->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flex-bw-sub-tlv-value";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FlexBwSubTlvValue' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto max_lspbw_name_datas = max_lspbw.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), max_lspbw_name_datas.begin(), max_lspbw_name_datas.end());
    auto unres_lspbw_name_datas = unres_lspbw.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), unres_lspbw_name_datas.begin(), unres_lspbw_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "flex-sub-tlv-value-common")
    {
        if(flex_sub_tlv_value_common != nullptr)
        {
            children["flex-sub-tlv-value-common"] = flex_sub_tlv_value_common;
        }
        else
        {
            flex_sub_tlv_value_common = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon>();
            flex_sub_tlv_value_common->parent = this;
            children["flex-sub-tlv-value-common"] = flex_sub_tlv_value_common;
        }
        return children.at("flex-sub-tlv-value-common");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::get_children()
{
    if(children.find("flex-sub-tlv-value-common") == children.end())
    {
        if(flex_sub_tlv_value_common != nullptr)
        {
            children["flex-sub-tlv-value-common"] = flex_sub_tlv_value_common;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max-lspbw")
    {
        max_lspbw.append(value);
    }
    if(value_path == "unres-lspbw")
    {
        unres_lspbw.append(value);
    }
}

Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon::FlexSubTlvValueCommon()
    :
    num_stages{YType::uint8, "num-stages"},
    priority_bit0{YType::uint8, "priority-bit0"},
    priority_bit1{YType::uint8, "priority-bit1"},
    priority_bit2{YType::uint8, "priority-bit2"},
    priority_bit3{YType::uint8, "priority-bit3"},
    priority_bit4{YType::uint8, "priority-bit4"},
    priority_bit5{YType::uint8, "priority-bit5"},
    priority_bit6{YType::uint8, "priority-bit6"},
    priority_bit7{YType::uint8, "priority-bit7"},
    res{YType::uint8, "res"},
    sbit{YType::uint8, "sbit"},
    signal_type{YType::uint8, "signal-type"},
    stage{YType::str, "stage"},
    tbit{YType::uint8, "tbit"},
    tsg{YType::uint8, "tsg"}
{
    yang_name = "flex-sub-tlv-value-common"; yang_parent_name = "flex-bw-sub-tlv-value";
}

Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon::~FlexSubTlvValueCommon()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon::has_data() const
{
    return num_stages.is_set
	|| priority_bit0.is_set
	|| priority_bit1.is_set
	|| priority_bit2.is_set
	|| priority_bit3.is_set
	|| priority_bit4.is_set
	|| priority_bit5.is_set
	|| priority_bit6.is_set
	|| priority_bit7.is_set
	|| res.is_set
	|| sbit.is_set
	|| signal_type.is_set
	|| stage.is_set
	|| tbit.is_set
	|| tsg.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon::has_operation() const
{
    return is_set(operation)
	|| is_set(num_stages.operation)
	|| is_set(priority_bit0.operation)
	|| is_set(priority_bit1.operation)
	|| is_set(priority_bit2.operation)
	|| is_set(priority_bit3.operation)
	|| is_set(priority_bit4.operation)
	|| is_set(priority_bit5.operation)
	|| is_set(priority_bit6.operation)
	|| is_set(priority_bit7.operation)
	|| is_set(res.operation)
	|| is_set(sbit.operation)
	|| is_set(signal_type.operation)
	|| is_set(stage.operation)
	|| is_set(tbit.operation)
	|| is_set(tsg.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flex-sub-tlv-value-common";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FlexSubTlvValueCommon' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_stages.is_set || is_set(num_stages.operation)) leaf_name_data.push_back(num_stages.get_name_leafdata());
    if (priority_bit0.is_set || is_set(priority_bit0.operation)) leaf_name_data.push_back(priority_bit0.get_name_leafdata());
    if (priority_bit1.is_set || is_set(priority_bit1.operation)) leaf_name_data.push_back(priority_bit1.get_name_leafdata());
    if (priority_bit2.is_set || is_set(priority_bit2.operation)) leaf_name_data.push_back(priority_bit2.get_name_leafdata());
    if (priority_bit3.is_set || is_set(priority_bit3.operation)) leaf_name_data.push_back(priority_bit3.get_name_leafdata());
    if (priority_bit4.is_set || is_set(priority_bit4.operation)) leaf_name_data.push_back(priority_bit4.get_name_leafdata());
    if (priority_bit5.is_set || is_set(priority_bit5.operation)) leaf_name_data.push_back(priority_bit5.get_name_leafdata());
    if (priority_bit6.is_set || is_set(priority_bit6.operation)) leaf_name_data.push_back(priority_bit6.get_name_leafdata());
    if (priority_bit7.is_set || is_set(priority_bit7.operation)) leaf_name_data.push_back(priority_bit7.get_name_leafdata());
    if (res.is_set || is_set(res.operation)) leaf_name_data.push_back(res.get_name_leafdata());
    if (sbit.is_set || is_set(sbit.operation)) leaf_name_data.push_back(sbit.get_name_leafdata());
    if (signal_type.is_set || is_set(signal_type.operation)) leaf_name_data.push_back(signal_type.get_name_leafdata());
    if (stage.is_set || is_set(stage.operation)) leaf_name_data.push_back(stage.get_name_leafdata());
    if (tbit.is_set || is_set(tbit.operation)) leaf_name_data.push_back(tbit.get_name_leafdata());
    if (tsg.is_set || is_set(tsg.operation)) leaf_name_data.push_back(tsg.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "num-stages")
    {
        num_stages = value;
    }
    if(value_path == "priority-bit0")
    {
        priority_bit0 = value;
    }
    if(value_path == "priority-bit1")
    {
        priority_bit1 = value;
    }
    if(value_path == "priority-bit2")
    {
        priority_bit2 = value;
    }
    if(value_path == "priority-bit3")
    {
        priority_bit3 = value;
    }
    if(value_path == "priority-bit4")
    {
        priority_bit4 = value;
    }
    if(value_path == "priority-bit5")
    {
        priority_bit5 = value;
    }
    if(value_path == "priority-bit6")
    {
        priority_bit6 = value;
    }
    if(value_path == "priority-bit7")
    {
        priority_bit7 = value;
    }
    if(value_path == "res")
    {
        res = value;
    }
    if(value_path == "sbit")
    {
        sbit = value;
    }
    if(value_path == "signal-type")
    {
        signal_type = value;
    }
    if(value_path == "stage")
    {
        stage = value;
    }
    if(value_path == "tbit")
    {
        tbit = value;
    }
    if(value_path == "tsg")
    {
        tsg = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue::UnidtlvValue()
    :
    uni_dir_delay{YType::uint32, "uni-dir-delay"}
{
    yang_name = "unidtlv-value"; yang_parent_name = "mplste-link-opt-tlv-value";
}

Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue::~UnidtlvValue()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue::has_data() const
{
    return uni_dir_delay.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue::has_operation() const
{
    return is_set(operation)
	|| is_set(uni_dir_delay.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unidtlv-value";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UnidtlvValue' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (uni_dir_delay.is_set || is_set(uni_dir_delay.operation)) leaf_name_data.push_back(uni_dir_delay.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "uni-dir-delay")
    {
        uni_dir_delay = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeFragment_()
    :
    dste_model_id{YType::uint8, "dste-model-id"},
    fragment_id{YType::uint32, "fragment-id"},
    fragment_instance{YType::uint32, "fragment-instance"},
    same_fragment_count{YType::uint8, "same-fragment-count"}
{
    yang_name = "mpls-te-fragment"; yang_parent_name = "mpls-te-fragment";
}

Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::~MplsTeFragment_()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::has_data() const
{
    for (std::size_t index=0; index<mpls_te_link.size(); index++)
    {
        if(mpls_te_link[index]->has_data())
            return true;
    }
    return dste_model_id.is_set
	|| fragment_id.is_set
	|| fragment_instance.is_set
	|| same_fragment_count.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::has_operation() const
{
    for (std::size_t index=0; index<mpls_te_link.size(); index++)
    {
        if(mpls_te_link[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(dste_model_id.operation)
	|| is_set(fragment_id.operation)
	|| is_set(fragment_instance.operation)
	|| is_set(same_fragment_count.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-te-fragment";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MplsTeFragment_' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dste_model_id.is_set || is_set(dste_model_id.operation)) leaf_name_data.push_back(dste_model_id.get_name_leafdata());
    if (fragment_id.is_set || is_set(fragment_id.operation)) leaf_name_data.push_back(fragment_id.get_name_leafdata());
    if (fragment_instance.is_set || is_set(fragment_instance.operation)) leaf_name_data.push_back(fragment_instance.get_name_leafdata());
    if (same_fragment_count.is_set || is_set(same_fragment_count.operation)) leaf_name_data.push_back(same_fragment_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "mpls-te-link")
    {
        for(auto const & c : mpls_te_link)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink>();
        c->parent = this;
        mpls_te_link.push_back(std::move(c));
        children[segment_path] = mpls_te_link.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::get_children()
{
    for (auto const & c : mpls_te_link)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dste-model-id")
    {
        dste_model_id = value;
    }
    if(value_path == "fragment-id")
    {
        fragment_id = value;
    }
    if(value_path == "fragment-instance")
    {
        fragment_instance = value;
    }
    if(value_path == "same-fragment-count")
    {
        same_fragment_count = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsTeLink()
    :
    affinity{YType::uint32, "affinity"},
    dste_allocation_model_id{YType::enumeration, "dste-allocation-model-id"},
    dste_in_use{YType::boolean, "dste-in-use"},
    fragment_id{YType::uint32, "fragment-id"},
    igp_metric{YType::uint32, "igp-metric"},
    input_interface_id{YType::uint32, "input-interface-id"},
    link_address{YType::str, "link-address"},
    maximum_link_bw{YType::uint32, "maximum-link-bw"},
    maximum_link_reservable_bw{YType::uint32, "maximum-link-reservable-bw"},
    maximum_link_sub_reservable_bw{YType::uint32, "maximum-link-sub-reservable-bw"},
    mpls_link_instance{YType::uint32, "mpls-link-instance"},
    mpls_link_type{YType::enumeration, "mpls-link-type"},
    neighbor_ip_address{YType::str, "neighbor-ip-address"},
    neighbor_system_id{YType::str, "neighbor-system-id"},
    new_link{YType::boolean, "new-link"},
    number_of_optional_tl_vs{YType::uint8, "number-of-optional-tl-vs"},
    output_interface_id{YType::uint32, "output-interface-id"},
    priority_count{YType::int32, "priority-count"},
    te_metric{YType::uint32, "te-metric"}
    	,
    extended_admin_group_list(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::ExtendedAdminGroupList>())
	,global_unreserve_bw_per_priority(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::GlobalUnreserveBwPerPriority>())
	,link_protocol_priority_capability(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::LinkProtocolPriorityCapability>())
	,link_sw_capability(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::LinkSwCapability>())
	,sub_pool_unreserve_bw_per_priority(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::SubPoolUnreserveBwPerPriority>())
{
    extended_admin_group_list->parent = this;
    children["extended-admin-group-list"] = extended_admin_group_list;

    global_unreserve_bw_per_priority->parent = this;
    children["global-unreserve-bw-per-priority"] = global_unreserve_bw_per_priority;

    link_protocol_priority_capability->parent = this;
    children["link-protocol-priority-capability"] = link_protocol_priority_capability;

    link_sw_capability->parent = this;
    children["link-sw-capability"] = link_sw_capability;

    sub_pool_unreserve_bw_per_priority->parent = this;
    children["sub-pool-unreserve-bw-per-priority"] = sub_pool_unreserve_bw_per_priority;

    yang_name = "mpls-te-link"; yang_parent_name = "mpls-te-fragment";
}

Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::~MplsTeLink()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::has_data() const
{
    for (std::size_t index=0; index<mplste_link_opt_tlv.size(); index++)
    {
        if(mplste_link_opt_tlv[index]->has_data())
            return true;
    }
    return affinity.is_set
	|| dste_allocation_model_id.is_set
	|| dste_in_use.is_set
	|| fragment_id.is_set
	|| igp_metric.is_set
	|| input_interface_id.is_set
	|| link_address.is_set
	|| maximum_link_bw.is_set
	|| maximum_link_reservable_bw.is_set
	|| maximum_link_sub_reservable_bw.is_set
	|| mpls_link_instance.is_set
	|| mpls_link_type.is_set
	|| neighbor_ip_address.is_set
	|| neighbor_system_id.is_set
	|| new_link.is_set
	|| number_of_optional_tl_vs.is_set
	|| output_interface_id.is_set
	|| priority_count.is_set
	|| te_metric.is_set
	|| (extended_admin_group_list !=  nullptr && extended_admin_group_list->has_data())
	|| (global_unreserve_bw_per_priority !=  nullptr && global_unreserve_bw_per_priority->has_data())
	|| (link_protocol_priority_capability !=  nullptr && link_protocol_priority_capability->has_data())
	|| (link_sw_capability !=  nullptr && link_sw_capability->has_data())
	|| (sub_pool_unreserve_bw_per_priority !=  nullptr && sub_pool_unreserve_bw_per_priority->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::has_operation() const
{
    for (std::size_t index=0; index<mplste_link_opt_tlv.size(); index++)
    {
        if(mplste_link_opt_tlv[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(affinity.operation)
	|| is_set(dste_allocation_model_id.operation)
	|| is_set(dste_in_use.operation)
	|| is_set(fragment_id.operation)
	|| is_set(igp_metric.operation)
	|| is_set(input_interface_id.operation)
	|| is_set(link_address.operation)
	|| is_set(maximum_link_bw.operation)
	|| is_set(maximum_link_reservable_bw.operation)
	|| is_set(maximum_link_sub_reservable_bw.operation)
	|| is_set(mpls_link_instance.operation)
	|| is_set(mpls_link_type.operation)
	|| is_set(neighbor_ip_address.operation)
	|| is_set(neighbor_system_id.operation)
	|| is_set(new_link.operation)
	|| is_set(number_of_optional_tl_vs.operation)
	|| is_set(output_interface_id.operation)
	|| is_set(priority_count.operation)
	|| is_set(te_metric.operation)
	|| (extended_admin_group_list !=  nullptr && extended_admin_group_list->has_operation())
	|| (global_unreserve_bw_per_priority !=  nullptr && global_unreserve_bw_per_priority->has_operation())
	|| (link_protocol_priority_capability !=  nullptr && link_protocol_priority_capability->has_operation())
	|| (link_sw_capability !=  nullptr && link_sw_capability->has_operation())
	|| (sub_pool_unreserve_bw_per_priority !=  nullptr && sub_pool_unreserve_bw_per_priority->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-te-link";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MplsTeLink' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity.is_set || is_set(affinity.operation)) leaf_name_data.push_back(affinity.get_name_leafdata());
    if (dste_allocation_model_id.is_set || is_set(dste_allocation_model_id.operation)) leaf_name_data.push_back(dste_allocation_model_id.get_name_leafdata());
    if (dste_in_use.is_set || is_set(dste_in_use.operation)) leaf_name_data.push_back(dste_in_use.get_name_leafdata());
    if (fragment_id.is_set || is_set(fragment_id.operation)) leaf_name_data.push_back(fragment_id.get_name_leafdata());
    if (igp_metric.is_set || is_set(igp_metric.operation)) leaf_name_data.push_back(igp_metric.get_name_leafdata());
    if (input_interface_id.is_set || is_set(input_interface_id.operation)) leaf_name_data.push_back(input_interface_id.get_name_leafdata());
    if (link_address.is_set || is_set(link_address.operation)) leaf_name_data.push_back(link_address.get_name_leafdata());
    if (maximum_link_bw.is_set || is_set(maximum_link_bw.operation)) leaf_name_data.push_back(maximum_link_bw.get_name_leafdata());
    if (maximum_link_reservable_bw.is_set || is_set(maximum_link_reservable_bw.operation)) leaf_name_data.push_back(maximum_link_reservable_bw.get_name_leafdata());
    if (maximum_link_sub_reservable_bw.is_set || is_set(maximum_link_sub_reservable_bw.operation)) leaf_name_data.push_back(maximum_link_sub_reservable_bw.get_name_leafdata());
    if (mpls_link_instance.is_set || is_set(mpls_link_instance.operation)) leaf_name_data.push_back(mpls_link_instance.get_name_leafdata());
    if (mpls_link_type.is_set || is_set(mpls_link_type.operation)) leaf_name_data.push_back(mpls_link_type.get_name_leafdata());
    if (neighbor_ip_address.is_set || is_set(neighbor_ip_address.operation)) leaf_name_data.push_back(neighbor_ip_address.get_name_leafdata());
    if (neighbor_system_id.is_set || is_set(neighbor_system_id.operation)) leaf_name_data.push_back(neighbor_system_id.get_name_leafdata());
    if (new_link.is_set || is_set(new_link.operation)) leaf_name_data.push_back(new_link.get_name_leafdata());
    if (number_of_optional_tl_vs.is_set || is_set(number_of_optional_tl_vs.operation)) leaf_name_data.push_back(number_of_optional_tl_vs.get_name_leafdata());
    if (output_interface_id.is_set || is_set(output_interface_id.operation)) leaf_name_data.push_back(output_interface_id.get_name_leafdata());
    if (priority_count.is_set || is_set(priority_count.operation)) leaf_name_data.push_back(priority_count.get_name_leafdata());
    if (te_metric.is_set || is_set(te_metric.operation)) leaf_name_data.push_back(te_metric.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "extended-admin-group-list")
    {
        if(extended_admin_group_list != nullptr)
        {
            children["extended-admin-group-list"] = extended_admin_group_list;
        }
        else
        {
            extended_admin_group_list = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::ExtendedAdminGroupList>();
            extended_admin_group_list->parent = this;
            children["extended-admin-group-list"] = extended_admin_group_list;
        }
        return children.at("extended-admin-group-list");
    }

    if(child_yang_name == "global-unreserve-bw-per-priority")
    {
        if(global_unreserve_bw_per_priority != nullptr)
        {
            children["global-unreserve-bw-per-priority"] = global_unreserve_bw_per_priority;
        }
        else
        {
            global_unreserve_bw_per_priority = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::GlobalUnreserveBwPerPriority>();
            global_unreserve_bw_per_priority->parent = this;
            children["global-unreserve-bw-per-priority"] = global_unreserve_bw_per_priority;
        }
        return children.at("global-unreserve-bw-per-priority");
    }

    if(child_yang_name == "link-protocol-priority-capability")
    {
        if(link_protocol_priority_capability != nullptr)
        {
            children["link-protocol-priority-capability"] = link_protocol_priority_capability;
        }
        else
        {
            link_protocol_priority_capability = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::LinkProtocolPriorityCapability>();
            link_protocol_priority_capability->parent = this;
            children["link-protocol-priority-capability"] = link_protocol_priority_capability;
        }
        return children.at("link-protocol-priority-capability");
    }

    if(child_yang_name == "link-sw-capability")
    {
        if(link_sw_capability != nullptr)
        {
            children["link-sw-capability"] = link_sw_capability;
        }
        else
        {
            link_sw_capability = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::LinkSwCapability>();
            link_sw_capability->parent = this;
            children["link-sw-capability"] = link_sw_capability;
        }
        return children.at("link-sw-capability");
    }

    if(child_yang_name == "mplste-link-opt-tlv")
    {
        for(auto const & c : mplste_link_opt_tlv)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv>();
        c->parent = this;
        mplste_link_opt_tlv.push_back(std::move(c));
        children[segment_path] = mplste_link_opt_tlv.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "sub-pool-unreserve-bw-per-priority")
    {
        if(sub_pool_unreserve_bw_per_priority != nullptr)
        {
            children["sub-pool-unreserve-bw-per-priority"] = sub_pool_unreserve_bw_per_priority;
        }
        else
        {
            sub_pool_unreserve_bw_per_priority = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::SubPoolUnreserveBwPerPriority>();
            sub_pool_unreserve_bw_per_priority->parent = this;
            children["sub-pool-unreserve-bw-per-priority"] = sub_pool_unreserve_bw_per_priority;
        }
        return children.at("sub-pool-unreserve-bw-per-priority");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::get_children()
{
    if(children.find("extended-admin-group-list") == children.end())
    {
        if(extended_admin_group_list != nullptr)
        {
            children["extended-admin-group-list"] = extended_admin_group_list;
        }
    }

    if(children.find("global-unreserve-bw-per-priority") == children.end())
    {
        if(global_unreserve_bw_per_priority != nullptr)
        {
            children["global-unreserve-bw-per-priority"] = global_unreserve_bw_per_priority;
        }
    }

    if(children.find("link-protocol-priority-capability") == children.end())
    {
        if(link_protocol_priority_capability != nullptr)
        {
            children["link-protocol-priority-capability"] = link_protocol_priority_capability;
        }
    }

    if(children.find("link-sw-capability") == children.end())
    {
        if(link_sw_capability != nullptr)
        {
            children["link-sw-capability"] = link_sw_capability;
        }
    }

    for (auto const & c : mplste_link_opt_tlv)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("sub-pool-unreserve-bw-per-priority") == children.end())
    {
        if(sub_pool_unreserve_bw_per_priority != nullptr)
        {
            children["sub-pool-unreserve-bw-per-priority"] = sub_pool_unreserve_bw_per_priority;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "affinity")
    {
        affinity = value;
    }
    if(value_path == "dste-allocation-model-id")
    {
        dste_allocation_model_id = value;
    }
    if(value_path == "dste-in-use")
    {
        dste_in_use = value;
    }
    if(value_path == "fragment-id")
    {
        fragment_id = value;
    }
    if(value_path == "igp-metric")
    {
        igp_metric = value;
    }
    if(value_path == "input-interface-id")
    {
        input_interface_id = value;
    }
    if(value_path == "link-address")
    {
        link_address = value;
    }
    if(value_path == "maximum-link-bw")
    {
        maximum_link_bw = value;
    }
    if(value_path == "maximum-link-reservable-bw")
    {
        maximum_link_reservable_bw = value;
    }
    if(value_path == "maximum-link-sub-reservable-bw")
    {
        maximum_link_sub_reservable_bw = value;
    }
    if(value_path == "mpls-link-instance")
    {
        mpls_link_instance = value;
    }
    if(value_path == "mpls-link-type")
    {
        mpls_link_type = value;
    }
    if(value_path == "neighbor-ip-address")
    {
        neighbor_ip_address = value;
    }
    if(value_path == "neighbor-system-id")
    {
        neighbor_system_id = value;
    }
    if(value_path == "new-link")
    {
        new_link = value;
    }
    if(value_path == "number-of-optional-tl-vs")
    {
        number_of_optional_tl_vs = value;
    }
    if(value_path == "output-interface-id")
    {
        output_interface_id = value;
    }
    if(value_path == "priority-count")
    {
        priority_count = value;
    }
    if(value_path == "te-metric")
    {
        te_metric = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::GlobalUnreserveBwPerPriority::GlobalUnreserveBwPerPriority()
    :
    bw_per_priority{YType::uint64, "bw-per-priority"}
{
    yang_name = "global-unreserve-bw-per-priority"; yang_parent_name = "mpls-te-link";
}

Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::GlobalUnreserveBwPerPriority::~GlobalUnreserveBwPerPriority()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::GlobalUnreserveBwPerPriority::has_data() const
{
    for (auto const & leaf : bw_per_priority.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::GlobalUnreserveBwPerPriority::has_operation() const
{
    for (auto const & leaf : bw_per_priority.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(bw_per_priority.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::GlobalUnreserveBwPerPriority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-unreserve-bw-per-priority";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::GlobalUnreserveBwPerPriority::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GlobalUnreserveBwPerPriority' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto bw_per_priority_name_datas = bw_per_priority.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), bw_per_priority_name_datas.begin(), bw_per_priority_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::GlobalUnreserveBwPerPriority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::GlobalUnreserveBwPerPriority::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::GlobalUnreserveBwPerPriority::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bw-per-priority")
    {
        bw_per_priority.append(value);
    }
}

Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::SubPoolUnreserveBwPerPriority::SubPoolUnreserveBwPerPriority()
    :
    bw_per_priority{YType::uint64, "bw-per-priority"}
{
    yang_name = "sub-pool-unreserve-bw-per-priority"; yang_parent_name = "mpls-te-link";
}

Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::SubPoolUnreserveBwPerPriority::~SubPoolUnreserveBwPerPriority()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::SubPoolUnreserveBwPerPriority::has_data() const
{
    for (auto const & leaf : bw_per_priority.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::SubPoolUnreserveBwPerPriority::has_operation() const
{
    for (auto const & leaf : bw_per_priority.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(bw_per_priority.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::SubPoolUnreserveBwPerPriority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sub-pool-unreserve-bw-per-priority";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::SubPoolUnreserveBwPerPriority::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SubPoolUnreserveBwPerPriority' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto bw_per_priority_name_datas = bw_per_priority.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), bw_per_priority_name_datas.begin(), bw_per_priority_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::SubPoolUnreserveBwPerPriority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::SubPoolUnreserveBwPerPriority::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::SubPoolUnreserveBwPerPriority::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bw-per-priority")
    {
        bw_per_priority.append(value);
    }
}

Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::LinkProtocolPriorityCapability::LinkProtocolPriorityCapability()
    :
    link_protocol_capability{YType::uint8, "link-protocol-capability"},
    link_protocol_priority{YType::uint8, "link-protocol-priority"}
{
    yang_name = "link-protocol-priority-capability"; yang_parent_name = "mpls-te-link";
}

Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::LinkProtocolPriorityCapability::~LinkProtocolPriorityCapability()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::LinkProtocolPriorityCapability::has_data() const
{
    return link_protocol_capability.is_set
	|| link_protocol_priority.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::LinkProtocolPriorityCapability::has_operation() const
{
    return is_set(operation)
	|| is_set(link_protocol_capability.operation)
	|| is_set(link_protocol_priority.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::LinkProtocolPriorityCapability::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-protocol-priority-capability";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::LinkProtocolPriorityCapability::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LinkProtocolPriorityCapability' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_protocol_capability.is_set || is_set(link_protocol_capability.operation)) leaf_name_data.push_back(link_protocol_capability.get_name_leafdata());
    if (link_protocol_priority.is_set || is_set(link_protocol_priority.operation)) leaf_name_data.push_back(link_protocol_priority.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::LinkProtocolPriorityCapability::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::LinkProtocolPriorityCapability::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::LinkProtocolPriorityCapability::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "link-protocol-capability")
    {
        link_protocol_capability = value;
    }
    if(value_path == "link-protocol-priority")
    {
        link_protocol_priority = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::LinkSwCapability::LinkSwCapability()
    :
    link_encoding{YType::uint8, "link-encoding"},
    link_mtu{YType::uint16, "link-mtu"},
    link_switching_capability{YType::uint8, "link-switching-capability"},
    maximum_lsp_bw_per_priority{YType::uint64, "maximum-lsp-bw-per-priority"},
    minimum_lsp_bw{YType::uint64, "minimum-lsp-bw"}
{
    yang_name = "link-sw-capability"; yang_parent_name = "mpls-te-link";
}

Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::LinkSwCapability::~LinkSwCapability()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::LinkSwCapability::has_data() const
{
    for (auto const & leaf : maximum_lsp_bw_per_priority.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return link_encoding.is_set
	|| link_mtu.is_set
	|| link_switching_capability.is_set
	|| minimum_lsp_bw.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::LinkSwCapability::has_operation() const
{
    for (auto const & leaf : maximum_lsp_bw_per_priority.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(link_encoding.operation)
	|| is_set(link_mtu.operation)
	|| is_set(link_switching_capability.operation)
	|| is_set(maximum_lsp_bw_per_priority.operation)
	|| is_set(minimum_lsp_bw.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::LinkSwCapability::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-sw-capability";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::LinkSwCapability::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LinkSwCapability' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_encoding.is_set || is_set(link_encoding.operation)) leaf_name_data.push_back(link_encoding.get_name_leafdata());
    if (link_mtu.is_set || is_set(link_mtu.operation)) leaf_name_data.push_back(link_mtu.get_name_leafdata());
    if (link_switching_capability.is_set || is_set(link_switching_capability.operation)) leaf_name_data.push_back(link_switching_capability.get_name_leafdata());
    if (minimum_lsp_bw.is_set || is_set(minimum_lsp_bw.operation)) leaf_name_data.push_back(minimum_lsp_bw.get_name_leafdata());

    auto maximum_lsp_bw_per_priority_name_datas = maximum_lsp_bw_per_priority.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), maximum_lsp_bw_per_priority_name_datas.begin(), maximum_lsp_bw_per_priority_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::LinkSwCapability::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::LinkSwCapability::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::LinkSwCapability::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "link-encoding")
    {
        link_encoding = value;
    }
    if(value_path == "link-mtu")
    {
        link_mtu = value;
    }
    if(value_path == "link-switching-capability")
    {
        link_switching_capability = value;
    }
    if(value_path == "maximum-lsp-bw-per-priority")
    {
        maximum_lsp_bw_per_priority.append(value);
    }
    if(value_path == "minimum-lsp-bw")
    {
        minimum_lsp_bw = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::ExtendedAdminGroupList::ExtendedAdminGroupList()
    :
    ext_admin_data{YType::uint32, "ext-admin-data"},
    extended_admin_size{YType::uint32, "extended-admin-size"}
{
    yang_name = "extended-admin-group-list"; yang_parent_name = "mpls-te-link";
}

Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::ExtendedAdminGroupList::~ExtendedAdminGroupList()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::ExtendedAdminGroupList::has_data() const
{
    for (auto const & leaf : ext_admin_data.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return extended_admin_size.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::ExtendedAdminGroupList::has_operation() const
{
    for (auto const & leaf : ext_admin_data.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(ext_admin_data.operation)
	|| is_set(extended_admin_size.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::ExtendedAdminGroupList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-admin-group-list";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::ExtendedAdminGroupList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExtendedAdminGroupList' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (extended_admin_size.is_set || is_set(extended_admin_size.operation)) leaf_name_data.push_back(extended_admin_size.get_name_leafdata());

    auto ext_admin_data_name_datas = ext_admin_data.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), ext_admin_data_name_datas.begin(), ext_admin_data_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::ExtendedAdminGroupList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::ExtendedAdminGroupList::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::ExtendedAdminGroupList::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ext-admin-data")
    {
        ext_admin_data.append(value);
    }
    if(value_path == "extended-admin-size")
    {
        extended_admin_size = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlv()
    :
    mplste_link_opt_tlv_len{YType::uint16, "mplste-link-opt-tlv-len"},
    mplste_link_opt_tlv_type{YType::enumeration, "mplste-link-opt-tlv-type"}
{
    yang_name = "mplste-link-opt-tlv"; yang_parent_name = "mpls-te-link";
}

Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::~MplsteLinkOptTlv()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::has_data() const
{
    for (std::size_t index=0; index<mplste_link_opt_tlv_value.size(); index++)
    {
        if(mplste_link_opt_tlv_value[index]->has_data())
            return true;
    }
    return mplste_link_opt_tlv_len.is_set
	|| mplste_link_opt_tlv_type.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::has_operation() const
{
    for (std::size_t index=0; index<mplste_link_opt_tlv_value.size(); index++)
    {
        if(mplste_link_opt_tlv_value[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(mplste_link_opt_tlv_len.operation)
	|| is_set(mplste_link_opt_tlv_type.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplste-link-opt-tlv";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MplsteLinkOptTlv' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mplste_link_opt_tlv_len.is_set || is_set(mplste_link_opt_tlv_len.operation)) leaf_name_data.push_back(mplste_link_opt_tlv_len.get_name_leafdata());
    if (mplste_link_opt_tlv_type.is_set || is_set(mplste_link_opt_tlv_type.operation)) leaf_name_data.push_back(mplste_link_opt_tlv_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "mplste-link-opt-tlv-value")
    {
        for(auto const & c : mplste_link_opt_tlv_value)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue>();
        c->parent = this;
        mplste_link_opt_tlv_value.push_back(std::move(c));
        children[segment_path] = mplste_link_opt_tlv_value.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::get_children()
{
    for (auto const & c : mplste_link_opt_tlv_value)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mplste-link-opt-tlv-len")
    {
        mplste_link_opt_tlv_len = value;
    }
    if(value_path == "mplste-link-opt-tlv-type")
    {
        mplste_link_opt_tlv_type = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::MplsteLinkOptTlvValue()
    :
    opaque_tlv_type{YType::enumeration, "opaque-tlv-type"}
    	,
    bctlv_value(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue>())
	,ixcdtlv_value(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue>())
	,srlgtlv_value(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue>())
	,unidtlv_value(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue>())
{
    bctlv_value->parent = this;
    children["bctlv-value"] = bctlv_value;

    ixcdtlv_value->parent = this;
    children["ixcdtlv-value"] = ixcdtlv_value;

    srlgtlv_value->parent = this;
    children["srlgtlv-value"] = srlgtlv_value;

    unidtlv_value->parent = this;
    children["unidtlv-value"] = unidtlv_value;

    yang_name = "mplste-link-opt-tlv-value"; yang_parent_name = "mplste-link-opt-tlv";
}

Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::~MplsteLinkOptTlvValue()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::has_data() const
{
    return opaque_tlv_type.is_set
	|| (bctlv_value !=  nullptr && bctlv_value->has_data())
	|| (ixcdtlv_value !=  nullptr && ixcdtlv_value->has_data())
	|| (srlgtlv_value !=  nullptr && srlgtlv_value->has_data())
	|| (unidtlv_value !=  nullptr && unidtlv_value->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::has_operation() const
{
    return is_set(operation)
	|| is_set(opaque_tlv_type.operation)
	|| (bctlv_value !=  nullptr && bctlv_value->has_operation())
	|| (ixcdtlv_value !=  nullptr && ixcdtlv_value->has_operation())
	|| (srlgtlv_value !=  nullptr && srlgtlv_value->has_operation())
	|| (unidtlv_value !=  nullptr && unidtlv_value->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplste-link-opt-tlv-value";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MplsteLinkOptTlvValue' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (opaque_tlv_type.is_set || is_set(opaque_tlv_type.operation)) leaf_name_data.push_back(opaque_tlv_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bctlv-value")
    {
        if(bctlv_value != nullptr)
        {
            children["bctlv-value"] = bctlv_value;
        }
        else
        {
            bctlv_value = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue>();
            bctlv_value->parent = this;
            children["bctlv-value"] = bctlv_value;
        }
        return children.at("bctlv-value");
    }

    if(child_yang_name == "ixcdtlv-value")
    {
        if(ixcdtlv_value != nullptr)
        {
            children["ixcdtlv-value"] = ixcdtlv_value;
        }
        else
        {
            ixcdtlv_value = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue>();
            ixcdtlv_value->parent = this;
            children["ixcdtlv-value"] = ixcdtlv_value;
        }
        return children.at("ixcdtlv-value");
    }

    if(child_yang_name == "srlgtlv-value")
    {
        if(srlgtlv_value != nullptr)
        {
            children["srlgtlv-value"] = srlgtlv_value;
        }
        else
        {
            srlgtlv_value = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue>();
            srlgtlv_value->parent = this;
            children["srlgtlv-value"] = srlgtlv_value;
        }
        return children.at("srlgtlv-value");
    }

    if(child_yang_name == "unidtlv-value")
    {
        if(unidtlv_value != nullptr)
        {
            children["unidtlv-value"] = unidtlv_value;
        }
        else
        {
            unidtlv_value = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue>();
            unidtlv_value->parent = this;
            children["unidtlv-value"] = unidtlv_value;
        }
        return children.at("unidtlv-value");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::get_children()
{
    if(children.find("bctlv-value") == children.end())
    {
        if(bctlv_value != nullptr)
        {
            children["bctlv-value"] = bctlv_value;
        }
    }

    if(children.find("ixcdtlv-value") == children.end())
    {
        if(ixcdtlv_value != nullptr)
        {
            children["ixcdtlv-value"] = ixcdtlv_value;
        }
    }

    if(children.find("srlgtlv-value") == children.end())
    {
        if(srlgtlv_value != nullptr)
        {
            children["srlgtlv-value"] = srlgtlv_value;
        }
    }

    if(children.find("unidtlv-value") == children.end())
    {
        if(unidtlv_value != nullptr)
        {
            children["unidtlv-value"] = unidtlv_value;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "opaque-tlv-type")
    {
        opaque_tlv_type = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::BctlvValue()
    :
    model_id{YType::uint8, "model-id"},
    mplste_link_bc_bandwidth{YType::uint64, "mplste-link-bc-bandwidth"},
    num_b_cs{YType::uint32, "num-b-cs"}
{
    yang_name = "bctlv-value"; yang_parent_name = "mplste-link-opt-tlv-value";
}

Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::~BctlvValue()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::has_data() const
{
    for (auto const & leaf : mplste_link_bc_bandwidth.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return model_id.is_set
	|| num_b_cs.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::has_operation() const
{
    for (auto const & leaf : mplste_link_bc_bandwidth.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(model_id.operation)
	|| is_set(mplste_link_bc_bandwidth.operation)
	|| is_set(num_b_cs.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bctlv-value";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BctlvValue' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (model_id.is_set || is_set(model_id.operation)) leaf_name_data.push_back(model_id.get_name_leafdata());
    if (num_b_cs.is_set || is_set(num_b_cs.operation)) leaf_name_data.push_back(num_b_cs.get_name_leafdata());

    auto mplste_link_bc_bandwidth_name_datas = mplste_link_bc_bandwidth.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), mplste_link_bc_bandwidth_name_datas.begin(), mplste_link_bc_bandwidth_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "model-id")
    {
        model_id = value;
    }
    if(value_path == "mplste-link-bc-bandwidth")
    {
        mplste_link_bc_bandwidth.append(value);
    }
    if(value_path == "num-b-cs")
    {
        num_b_cs = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::SrlgtlvValue()
    :
    mplste_link_srlg_data{YType::uint32, "mplste-link-srlg-data"},
    num_srl_gs{YType::uint32, "num-srl-gs"},
    srlg_len{YType::uint32, "srlg-len"}
{
    yang_name = "srlgtlv-value"; yang_parent_name = "mplste-link-opt-tlv-value";
}

Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::~SrlgtlvValue()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::has_data() const
{
    for (auto const & leaf : mplste_link_srlg_data.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return num_srl_gs.is_set
	|| srlg_len.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::has_operation() const
{
    for (auto const & leaf : mplste_link_srlg_data.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(mplste_link_srlg_data.operation)
	|| is_set(num_srl_gs.operation)
	|| is_set(srlg_len.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srlgtlv-value";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SrlgtlvValue' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_srl_gs.is_set || is_set(num_srl_gs.operation)) leaf_name_data.push_back(num_srl_gs.get_name_leafdata());
    if (srlg_len.is_set || is_set(srlg_len.operation)) leaf_name_data.push_back(srlg_len.get_name_leafdata());

    auto mplste_link_srlg_data_name_datas = mplste_link_srlg_data.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), mplste_link_srlg_data_name_datas.begin(), mplste_link_srlg_data_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mplste-link-srlg-data")
    {
        mplste_link_srlg_data.append(value);
    }
    if(value_path == "num-srl-gs")
    {
        num_srl_gs = value;
    }
    if(value_path == "srlg-len")
    {
        srlg_len = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdtlvValue()
    :
    fixed_scsi_count{YType::uint32, "fixed-scsi-count"},
    flex_scsi_count{YType::uint32, "flex-scsi-count"},
    max_lspbw{YType::int64, "max-lspbw"},
    rile_len_code{YType::uint8, "rile-len-code"},
    switching_cap{YType::uint8, "switching-cap"}
    	,
    ixcd_switching_cap_type(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType>())
{
    ixcd_switching_cap_type->parent = this;
    children["ixcd-switching-cap-type"] = ixcd_switching_cap_type;

    yang_name = "ixcdtlv-value"; yang_parent_name = "mplste-link-opt-tlv-value";
}

Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::~IxcdtlvValue()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::has_data() const
{
    for (auto const & leaf : max_lspbw.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return fixed_scsi_count.is_set
	|| flex_scsi_count.is_set
	|| rile_len_code.is_set
	|| switching_cap.is_set
	|| (ixcd_switching_cap_type !=  nullptr && ixcd_switching_cap_type->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::has_operation() const
{
    for (auto const & leaf : max_lspbw.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(fixed_scsi_count.operation)
	|| is_set(flex_scsi_count.operation)
	|| is_set(max_lspbw.operation)
	|| is_set(rile_len_code.operation)
	|| is_set(switching_cap.operation)
	|| (ixcd_switching_cap_type !=  nullptr && ixcd_switching_cap_type->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ixcdtlv-value";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IxcdtlvValue' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fixed_scsi_count.is_set || is_set(fixed_scsi_count.operation)) leaf_name_data.push_back(fixed_scsi_count.get_name_leafdata());
    if (flex_scsi_count.is_set || is_set(flex_scsi_count.operation)) leaf_name_data.push_back(flex_scsi_count.get_name_leafdata());
    if (rile_len_code.is_set || is_set(rile_len_code.operation)) leaf_name_data.push_back(rile_len_code.get_name_leafdata());
    if (switching_cap.is_set || is_set(switching_cap.operation)) leaf_name_data.push_back(switching_cap.get_name_leafdata());

    auto max_lspbw_name_datas = max_lspbw.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), max_lspbw_name_datas.begin(), max_lspbw_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ixcd-switching-cap-type")
    {
        if(ixcd_switching_cap_type != nullptr)
        {
            children["ixcd-switching-cap-type"] = ixcd_switching_cap_type;
        }
        else
        {
            ixcd_switching_cap_type = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType>();
            ixcd_switching_cap_type->parent = this;
            children["ixcd-switching-cap-type"] = ixcd_switching_cap_type;
        }
        return children.at("ixcd-switching-cap-type");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::get_children()
{
    if(children.find("ixcd-switching-cap-type") == children.end())
    {
        if(ixcd_switching_cap_type != nullptr)
        {
            children["ixcd-switching-cap-type"] = ixcd_switching_cap_type;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "fixed-scsi-count")
    {
        fixed_scsi_count = value;
    }
    if(value_path == "flex-scsi-count")
    {
        flex_scsi_count = value;
    }
    if(value_path == "max-lspbw")
    {
        max_lspbw.append(value);
    }
    if(value_path == "rile-len-code")
    {
        rile_len_code = value;
    }
    if(value_path == "switching-cap")
    {
        switching_cap = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdSwitchingCapType()
    :
    switching_cap_type{YType::uint8, "switching-cap-type"}
    	,
    ixcdbw_sub_tlv(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv>())
	,ixcdpsc_info(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo>())
{
    ixcdbw_sub_tlv->parent = this;
    children["ixcdbw-sub-tlv"] = ixcdbw_sub_tlv;

    ixcdpsc_info->parent = this;
    children["ixcdpsc-info"] = ixcdpsc_info;

    yang_name = "ixcd-switching-cap-type"; yang_parent_name = "ixcdtlv-value";
}

Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::~IxcdSwitchingCapType()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::has_data() const
{
    return switching_cap_type.is_set
	|| (ixcdbw_sub_tlv !=  nullptr && ixcdbw_sub_tlv->has_data())
	|| (ixcdpsc_info !=  nullptr && ixcdpsc_info->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::has_operation() const
{
    return is_set(operation)
	|| is_set(switching_cap_type.operation)
	|| (ixcdbw_sub_tlv !=  nullptr && ixcdbw_sub_tlv->has_operation())
	|| (ixcdpsc_info !=  nullptr && ixcdpsc_info->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ixcd-switching-cap-type";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IxcdSwitchingCapType' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (switching_cap_type.is_set || is_set(switching_cap_type.operation)) leaf_name_data.push_back(switching_cap_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ixcdbw-sub-tlv")
    {
        if(ixcdbw_sub_tlv != nullptr)
        {
            children["ixcdbw-sub-tlv"] = ixcdbw_sub_tlv;
        }
        else
        {
            ixcdbw_sub_tlv = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv>();
            ixcdbw_sub_tlv->parent = this;
            children["ixcdbw-sub-tlv"] = ixcdbw_sub_tlv;
        }
        return children.at("ixcdbw-sub-tlv");
    }

    if(child_yang_name == "ixcdpsc-info")
    {
        if(ixcdpsc_info != nullptr)
        {
            children["ixcdpsc-info"] = ixcdpsc_info;
        }
        else
        {
            ixcdpsc_info = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo>();
            ixcdpsc_info->parent = this;
            children["ixcdpsc-info"] = ixcdpsc_info;
        }
        return children.at("ixcdpsc-info");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::get_children()
{
    if(children.find("ixcdbw-sub-tlv") == children.end())
    {
        if(ixcdbw_sub_tlv != nullptr)
        {
            children["ixcdbw-sub-tlv"] = ixcdbw_sub_tlv;
        }
    }

    if(children.find("ixcdpsc-info") == children.end())
    {
        if(ixcdpsc_info != nullptr)
        {
            children["ixcdpsc-info"] = ixcdpsc_info;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "switching-cap-type")
    {
        switching_cap_type = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo::IxcdpscInfo()
    :
    min_lsp_bandwidth{YType::uint64, "min-lsp-bandwidth"},
    psc_interface_mtu{YType::uint16, "psc-interface-mtu"}
{
    yang_name = "ixcdpsc-info"; yang_parent_name = "ixcd-switching-cap-type";
}

Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo::~IxcdpscInfo()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo::has_data() const
{
    return min_lsp_bandwidth.is_set
	|| psc_interface_mtu.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(min_lsp_bandwidth.operation)
	|| is_set(psc_interface_mtu.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ixcdpsc-info";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IxcdpscInfo' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (min_lsp_bandwidth.is_set || is_set(min_lsp_bandwidth.operation)) leaf_name_data.push_back(min_lsp_bandwidth.get_name_leafdata());
    if (psc_interface_mtu.is_set || is_set(psc_interface_mtu.operation)) leaf_name_data.push_back(psc_interface_mtu.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "min-lsp-bandwidth")
    {
        min_lsp_bandwidth = value;
    }
    if(value_path == "psc-interface-mtu")
    {
        psc_interface_mtu = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::IxcdbwSubTlv()
{
    yang_name = "ixcdbw-sub-tlv"; yang_parent_name = "ixcd-switching-cap-type";
}

Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::~IxcdbwSubTlv()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::has_data() const
{
    for (std::size_t index=0; index<arr_bw_sub_tlv.size(); index++)
    {
        if(arr_bw_sub_tlv[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::has_operation() const
{
    for (std::size_t index=0; index<arr_bw_sub_tlv.size(); index++)
    {
        if(arr_bw_sub_tlv[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ixcdbw-sub-tlv";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IxcdbwSubTlv' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "arr-bw-sub-tlv")
    {
        for(auto const & c : arr_bw_sub_tlv)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv>();
        c->parent = this;
        arr_bw_sub_tlv.push_back(std::move(c));
        children[segment_path] = arr_bw_sub_tlv.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::get_children()
{
    for (auto const & c : arr_bw_sub_tlv)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::ArrBwSubTlv()
    :
    bw_sub_tlv_length{YType::uint16, "bw-sub-tlv-length"},
    bw_sub_tlv_type{YType::uint16, "bw-sub-tlv-type"}
    	,
    bw_sub_tlv_value(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue>())
{
    bw_sub_tlv_value->parent = this;
    children["bw-sub-tlv-value"] = bw_sub_tlv_value;

    yang_name = "arr-bw-sub-tlv"; yang_parent_name = "ixcdbw-sub-tlv";
}

Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::~ArrBwSubTlv()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::has_data() const
{
    return bw_sub_tlv_length.is_set
	|| bw_sub_tlv_type.is_set
	|| (bw_sub_tlv_value !=  nullptr && bw_sub_tlv_value->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::has_operation() const
{
    return is_set(operation)
	|| is_set(bw_sub_tlv_length.operation)
	|| is_set(bw_sub_tlv_type.operation)
	|| (bw_sub_tlv_value !=  nullptr && bw_sub_tlv_value->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "arr-bw-sub-tlv";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ArrBwSubTlv' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bw_sub_tlv_length.is_set || is_set(bw_sub_tlv_length.operation)) leaf_name_data.push_back(bw_sub_tlv_length.get_name_leafdata());
    if (bw_sub_tlv_type.is_set || is_set(bw_sub_tlv_type.operation)) leaf_name_data.push_back(bw_sub_tlv_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bw-sub-tlv-value")
    {
        if(bw_sub_tlv_value != nullptr)
        {
            children["bw-sub-tlv-value"] = bw_sub_tlv_value;
        }
        else
        {
            bw_sub_tlv_value = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue>();
            bw_sub_tlv_value->parent = this;
            children["bw-sub-tlv-value"] = bw_sub_tlv_value;
        }
        return children.at("bw-sub-tlv-value");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::get_children()
{
    if(children.find("bw-sub-tlv-value") == children.end())
    {
        if(bw_sub_tlv_value != nullptr)
        {
            children["bw-sub-tlv-value"] = bw_sub_tlv_value;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bw-sub-tlv-length")
    {
        bw_sub_tlv_length = value;
    }
    if(value_path == "bw-sub-tlv-type")
    {
        bw_sub_tlv_type = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::BwSubTlvValue()
    :
    ixcdbw_sub_tlv_type{YType::uint16, "ixcdbw-sub-tlv-type"}
    	,
    fixed_bw_sub_tlv_value(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue>())
	,flex_bw_sub_tlv_value(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue>())
{
    fixed_bw_sub_tlv_value->parent = this;
    children["fixed-bw-sub-tlv-value"] = fixed_bw_sub_tlv_value;

    flex_bw_sub_tlv_value->parent = this;
    children["flex-bw-sub-tlv-value"] = flex_bw_sub_tlv_value;

    yang_name = "bw-sub-tlv-value"; yang_parent_name = "arr-bw-sub-tlv";
}

Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::~BwSubTlvValue()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::has_data() const
{
    return ixcdbw_sub_tlv_type.is_set
	|| (fixed_bw_sub_tlv_value !=  nullptr && fixed_bw_sub_tlv_value->has_data())
	|| (flex_bw_sub_tlv_value !=  nullptr && flex_bw_sub_tlv_value->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::has_operation() const
{
    return is_set(operation)
	|| is_set(ixcdbw_sub_tlv_type.operation)
	|| (fixed_bw_sub_tlv_value !=  nullptr && fixed_bw_sub_tlv_value->has_operation())
	|| (flex_bw_sub_tlv_value !=  nullptr && flex_bw_sub_tlv_value->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bw-sub-tlv-value";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BwSubTlvValue' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ixcdbw_sub_tlv_type.is_set || is_set(ixcdbw_sub_tlv_type.operation)) leaf_name_data.push_back(ixcdbw_sub_tlv_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "fixed-bw-sub-tlv-value")
    {
        if(fixed_bw_sub_tlv_value != nullptr)
        {
            children["fixed-bw-sub-tlv-value"] = fixed_bw_sub_tlv_value;
        }
        else
        {
            fixed_bw_sub_tlv_value = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue>();
            fixed_bw_sub_tlv_value->parent = this;
            children["fixed-bw-sub-tlv-value"] = fixed_bw_sub_tlv_value;
        }
        return children.at("fixed-bw-sub-tlv-value");
    }

    if(child_yang_name == "flex-bw-sub-tlv-value")
    {
        if(flex_bw_sub_tlv_value != nullptr)
        {
            children["flex-bw-sub-tlv-value"] = flex_bw_sub_tlv_value;
        }
        else
        {
            flex_bw_sub_tlv_value = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue>();
            flex_bw_sub_tlv_value->parent = this;
            children["flex-bw-sub-tlv-value"] = flex_bw_sub_tlv_value;
        }
        return children.at("flex-bw-sub-tlv-value");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::get_children()
{
    if(children.find("fixed-bw-sub-tlv-value") == children.end())
    {
        if(fixed_bw_sub_tlv_value != nullptr)
        {
            children["fixed-bw-sub-tlv-value"] = fixed_bw_sub_tlv_value;
        }
    }

    if(children.find("flex-bw-sub-tlv-value") == children.end())
    {
        if(flex_bw_sub_tlv_value != nullptr)
        {
            children["flex-bw-sub-tlv-value"] = flex_bw_sub_tlv_value;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ixcdbw-sub-tlv-type")
    {
        ixcdbw_sub_tlv_type = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedBwSubTlvValue()
    :
    unres_oduj_prio{YType::uint32, "unres-oduj-prio"}
    	,
    fixed_sub_tlv_value(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue>())
{
    fixed_sub_tlv_value->parent = this;
    children["fixed-sub-tlv-value"] = fixed_sub_tlv_value;

    yang_name = "fixed-bw-sub-tlv-value"; yang_parent_name = "bw-sub-tlv-value";
}

Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::~FixedBwSubTlvValue()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::has_data() const
{
    for (auto const & leaf : unres_oduj_prio.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return (fixed_sub_tlv_value !=  nullptr && fixed_sub_tlv_value->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::has_operation() const
{
    for (auto const & leaf : unres_oduj_prio.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(unres_oduj_prio.operation)
	|| (fixed_sub_tlv_value !=  nullptr && fixed_sub_tlv_value->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fixed-bw-sub-tlv-value";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FixedBwSubTlvValue' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto unres_oduj_prio_name_datas = unres_oduj_prio.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), unres_oduj_prio_name_datas.begin(), unres_oduj_prio_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "fixed-sub-tlv-value")
    {
        if(fixed_sub_tlv_value != nullptr)
        {
            children["fixed-sub-tlv-value"] = fixed_sub_tlv_value;
        }
        else
        {
            fixed_sub_tlv_value = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue>();
            fixed_sub_tlv_value->parent = this;
            children["fixed-sub-tlv-value"] = fixed_sub_tlv_value;
        }
        return children.at("fixed-sub-tlv-value");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::get_children()
{
    if(children.find("fixed-sub-tlv-value") == children.end())
    {
        if(fixed_sub_tlv_value != nullptr)
        {
            children["fixed-sub-tlv-value"] = fixed_sub_tlv_value;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unres-oduj-prio")
    {
        unres_oduj_prio.append(value);
    }
}

Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue::FixedSubTlvValue()
    :
    num_stages{YType::uint8, "num-stages"},
    priority_bit0{YType::uint8, "priority-bit0"},
    priority_bit1{YType::uint8, "priority-bit1"},
    priority_bit2{YType::uint8, "priority-bit2"},
    priority_bit3{YType::uint8, "priority-bit3"},
    priority_bit4{YType::uint8, "priority-bit4"},
    priority_bit5{YType::uint8, "priority-bit5"},
    priority_bit6{YType::uint8, "priority-bit6"},
    priority_bit7{YType::uint8, "priority-bit7"},
    res{YType::uint8, "res"},
    sbit{YType::uint8, "sbit"},
    signal_type{YType::uint8, "signal-type"},
    stage{YType::str, "stage"},
    tbit{YType::uint8, "tbit"},
    tsg{YType::uint8, "tsg"}
{
    yang_name = "fixed-sub-tlv-value"; yang_parent_name = "fixed-bw-sub-tlv-value";
}

Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue::~FixedSubTlvValue()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue::has_data() const
{
    return num_stages.is_set
	|| priority_bit0.is_set
	|| priority_bit1.is_set
	|| priority_bit2.is_set
	|| priority_bit3.is_set
	|| priority_bit4.is_set
	|| priority_bit5.is_set
	|| priority_bit6.is_set
	|| priority_bit7.is_set
	|| res.is_set
	|| sbit.is_set
	|| signal_type.is_set
	|| stage.is_set
	|| tbit.is_set
	|| tsg.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue::has_operation() const
{
    return is_set(operation)
	|| is_set(num_stages.operation)
	|| is_set(priority_bit0.operation)
	|| is_set(priority_bit1.operation)
	|| is_set(priority_bit2.operation)
	|| is_set(priority_bit3.operation)
	|| is_set(priority_bit4.operation)
	|| is_set(priority_bit5.operation)
	|| is_set(priority_bit6.operation)
	|| is_set(priority_bit7.operation)
	|| is_set(res.operation)
	|| is_set(sbit.operation)
	|| is_set(signal_type.operation)
	|| is_set(stage.operation)
	|| is_set(tbit.operation)
	|| is_set(tsg.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fixed-sub-tlv-value";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FixedSubTlvValue' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_stages.is_set || is_set(num_stages.operation)) leaf_name_data.push_back(num_stages.get_name_leafdata());
    if (priority_bit0.is_set || is_set(priority_bit0.operation)) leaf_name_data.push_back(priority_bit0.get_name_leafdata());
    if (priority_bit1.is_set || is_set(priority_bit1.operation)) leaf_name_data.push_back(priority_bit1.get_name_leafdata());
    if (priority_bit2.is_set || is_set(priority_bit2.operation)) leaf_name_data.push_back(priority_bit2.get_name_leafdata());
    if (priority_bit3.is_set || is_set(priority_bit3.operation)) leaf_name_data.push_back(priority_bit3.get_name_leafdata());
    if (priority_bit4.is_set || is_set(priority_bit4.operation)) leaf_name_data.push_back(priority_bit4.get_name_leafdata());
    if (priority_bit5.is_set || is_set(priority_bit5.operation)) leaf_name_data.push_back(priority_bit5.get_name_leafdata());
    if (priority_bit6.is_set || is_set(priority_bit6.operation)) leaf_name_data.push_back(priority_bit6.get_name_leafdata());
    if (priority_bit7.is_set || is_set(priority_bit7.operation)) leaf_name_data.push_back(priority_bit7.get_name_leafdata());
    if (res.is_set || is_set(res.operation)) leaf_name_data.push_back(res.get_name_leafdata());
    if (sbit.is_set || is_set(sbit.operation)) leaf_name_data.push_back(sbit.get_name_leafdata());
    if (signal_type.is_set || is_set(signal_type.operation)) leaf_name_data.push_back(signal_type.get_name_leafdata());
    if (stage.is_set || is_set(stage.operation)) leaf_name_data.push_back(stage.get_name_leafdata());
    if (tbit.is_set || is_set(tbit.operation)) leaf_name_data.push_back(tbit.get_name_leafdata());
    if (tsg.is_set || is_set(tsg.operation)) leaf_name_data.push_back(tsg.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "num-stages")
    {
        num_stages = value;
    }
    if(value_path == "priority-bit0")
    {
        priority_bit0 = value;
    }
    if(value_path == "priority-bit1")
    {
        priority_bit1 = value;
    }
    if(value_path == "priority-bit2")
    {
        priority_bit2 = value;
    }
    if(value_path == "priority-bit3")
    {
        priority_bit3 = value;
    }
    if(value_path == "priority-bit4")
    {
        priority_bit4 = value;
    }
    if(value_path == "priority-bit5")
    {
        priority_bit5 = value;
    }
    if(value_path == "priority-bit6")
    {
        priority_bit6 = value;
    }
    if(value_path == "priority-bit7")
    {
        priority_bit7 = value;
    }
    if(value_path == "res")
    {
        res = value;
    }
    if(value_path == "sbit")
    {
        sbit = value;
    }
    if(value_path == "signal-type")
    {
        signal_type = value;
    }
    if(value_path == "stage")
    {
        stage = value;
    }
    if(value_path == "tbit")
    {
        tbit = value;
    }
    if(value_path == "tsg")
    {
        tsg = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexBwSubTlvValue()
    :
    max_lspbw{YType::uint64, "max-lspbw"},
    unres_lspbw{YType::uint64, "unres-lspbw"}
    	,
    flex_sub_tlv_value_common(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon>())
{
    flex_sub_tlv_value_common->parent = this;
    children["flex-sub-tlv-value-common"] = flex_sub_tlv_value_common;

    yang_name = "flex-bw-sub-tlv-value"; yang_parent_name = "bw-sub-tlv-value";
}

Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::~FlexBwSubTlvValue()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::has_data() const
{
    for (auto const & leaf : max_lspbw.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : unres_lspbw.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return (flex_sub_tlv_value_common !=  nullptr && flex_sub_tlv_value_common->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::has_operation() const
{
    for (auto const & leaf : max_lspbw.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : unres_lspbw.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(max_lspbw.operation)
	|| is_set(unres_lspbw.operation)
	|| (flex_sub_tlv_value_common !=  nullptr && flex_sub_tlv_value_common->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flex-bw-sub-tlv-value";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FlexBwSubTlvValue' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto max_lspbw_name_datas = max_lspbw.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), max_lspbw_name_datas.begin(), max_lspbw_name_datas.end());
    auto unres_lspbw_name_datas = unres_lspbw.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), unres_lspbw_name_datas.begin(), unres_lspbw_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "flex-sub-tlv-value-common")
    {
        if(flex_sub_tlv_value_common != nullptr)
        {
            children["flex-sub-tlv-value-common"] = flex_sub_tlv_value_common;
        }
        else
        {
            flex_sub_tlv_value_common = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon>();
            flex_sub_tlv_value_common->parent = this;
            children["flex-sub-tlv-value-common"] = flex_sub_tlv_value_common;
        }
        return children.at("flex-sub-tlv-value-common");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::get_children()
{
    if(children.find("flex-sub-tlv-value-common") == children.end())
    {
        if(flex_sub_tlv_value_common != nullptr)
        {
            children["flex-sub-tlv-value-common"] = flex_sub_tlv_value_common;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max-lspbw")
    {
        max_lspbw.append(value);
    }
    if(value_path == "unres-lspbw")
    {
        unres_lspbw.append(value);
    }
}

Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon::FlexSubTlvValueCommon()
    :
    num_stages{YType::uint8, "num-stages"},
    priority_bit0{YType::uint8, "priority-bit0"},
    priority_bit1{YType::uint8, "priority-bit1"},
    priority_bit2{YType::uint8, "priority-bit2"},
    priority_bit3{YType::uint8, "priority-bit3"},
    priority_bit4{YType::uint8, "priority-bit4"},
    priority_bit5{YType::uint8, "priority-bit5"},
    priority_bit6{YType::uint8, "priority-bit6"},
    priority_bit7{YType::uint8, "priority-bit7"},
    res{YType::uint8, "res"},
    sbit{YType::uint8, "sbit"},
    signal_type{YType::uint8, "signal-type"},
    stage{YType::str, "stage"},
    tbit{YType::uint8, "tbit"},
    tsg{YType::uint8, "tsg"}
{
    yang_name = "flex-sub-tlv-value-common"; yang_parent_name = "flex-bw-sub-tlv-value";
}

Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon::~FlexSubTlvValueCommon()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon::has_data() const
{
    return num_stages.is_set
	|| priority_bit0.is_set
	|| priority_bit1.is_set
	|| priority_bit2.is_set
	|| priority_bit3.is_set
	|| priority_bit4.is_set
	|| priority_bit5.is_set
	|| priority_bit6.is_set
	|| priority_bit7.is_set
	|| res.is_set
	|| sbit.is_set
	|| signal_type.is_set
	|| stage.is_set
	|| tbit.is_set
	|| tsg.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon::has_operation() const
{
    return is_set(operation)
	|| is_set(num_stages.operation)
	|| is_set(priority_bit0.operation)
	|| is_set(priority_bit1.operation)
	|| is_set(priority_bit2.operation)
	|| is_set(priority_bit3.operation)
	|| is_set(priority_bit4.operation)
	|| is_set(priority_bit5.operation)
	|| is_set(priority_bit6.operation)
	|| is_set(priority_bit7.operation)
	|| is_set(res.operation)
	|| is_set(sbit.operation)
	|| is_set(signal_type.operation)
	|| is_set(stage.operation)
	|| is_set(tbit.operation)
	|| is_set(tsg.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flex-sub-tlv-value-common";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FlexSubTlvValueCommon' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_stages.is_set || is_set(num_stages.operation)) leaf_name_data.push_back(num_stages.get_name_leafdata());
    if (priority_bit0.is_set || is_set(priority_bit0.operation)) leaf_name_data.push_back(priority_bit0.get_name_leafdata());
    if (priority_bit1.is_set || is_set(priority_bit1.operation)) leaf_name_data.push_back(priority_bit1.get_name_leafdata());
    if (priority_bit2.is_set || is_set(priority_bit2.operation)) leaf_name_data.push_back(priority_bit2.get_name_leafdata());
    if (priority_bit3.is_set || is_set(priority_bit3.operation)) leaf_name_data.push_back(priority_bit3.get_name_leafdata());
    if (priority_bit4.is_set || is_set(priority_bit4.operation)) leaf_name_data.push_back(priority_bit4.get_name_leafdata());
    if (priority_bit5.is_set || is_set(priority_bit5.operation)) leaf_name_data.push_back(priority_bit5.get_name_leafdata());
    if (priority_bit6.is_set || is_set(priority_bit6.operation)) leaf_name_data.push_back(priority_bit6.get_name_leafdata());
    if (priority_bit7.is_set || is_set(priority_bit7.operation)) leaf_name_data.push_back(priority_bit7.get_name_leafdata());
    if (res.is_set || is_set(res.operation)) leaf_name_data.push_back(res.get_name_leafdata());
    if (sbit.is_set || is_set(sbit.operation)) leaf_name_data.push_back(sbit.get_name_leafdata());
    if (signal_type.is_set || is_set(signal_type.operation)) leaf_name_data.push_back(signal_type.get_name_leafdata());
    if (stage.is_set || is_set(stage.operation)) leaf_name_data.push_back(stage.get_name_leafdata());
    if (tbit.is_set || is_set(tbit.operation)) leaf_name_data.push_back(tbit.get_name_leafdata());
    if (tsg.is_set || is_set(tsg.operation)) leaf_name_data.push_back(tsg.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "num-stages")
    {
        num_stages = value;
    }
    if(value_path == "priority-bit0")
    {
        priority_bit0 = value;
    }
    if(value_path == "priority-bit1")
    {
        priority_bit1 = value;
    }
    if(value_path == "priority-bit2")
    {
        priority_bit2 = value;
    }
    if(value_path == "priority-bit3")
    {
        priority_bit3 = value;
    }
    if(value_path == "priority-bit4")
    {
        priority_bit4 = value;
    }
    if(value_path == "priority-bit5")
    {
        priority_bit5 = value;
    }
    if(value_path == "priority-bit6")
    {
        priority_bit6 = value;
    }
    if(value_path == "priority-bit7")
    {
        priority_bit7 = value;
    }
    if(value_path == "res")
    {
        res = value;
    }
    if(value_path == "sbit")
    {
        sbit = value;
    }
    if(value_path == "signal-type")
    {
        signal_type = value;
    }
    if(value_path == "stage")
    {
        stage = value;
    }
    if(value_path == "tbit")
    {
        tbit = value;
    }
    if(value_path == "tsg")
    {
        tsg = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue::UnidtlvValue()
    :
    uni_dir_delay{YType::uint32, "uni-dir-delay"}
{
    yang_name = "unidtlv-value"; yang_parent_name = "mplste-link-opt-tlv-value";
}

Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue::~UnidtlvValue()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue::has_data() const
{
    return uni_dir_delay.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue::has_operation() const
{
    return is_set(operation)
	|| is_set(uni_dir_delay.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unidtlv-value";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UnidtlvValue' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (uni_dir_delay.is_set || is_set(uni_dir_delay.operation)) leaf_name_data.push_back(uni_dir_delay.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "uni-dir-delay")
    {
        uni_dir_delay = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::Statistics()
    :
    frr_stats(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::FrrStats>())
	,interface_stats_entries(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::InterfaceStatsEntries>())
	,issu_stats(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats>())
	,nsr_pl_stats(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats>())
	,nsr_stats(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats>())
	,protocol_stats(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::ProtocolStats>())
	,raw_io_stats(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::RawIoStats>())
	,rib_batch_stats(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibBatchStats>())
	,rib_thread_stats(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats>())
	,spf_stats(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats>())
	,te_stats(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::TeStats>())
{
    frr_stats->parent = this;
    children["frr-stats"] = frr_stats;

    interface_stats_entries->parent = this;
    children["interface-stats-entries"] = interface_stats_entries;

    issu_stats->parent = this;
    children["issu-stats"] = issu_stats;

    nsr_pl_stats->parent = this;
    children["nsr-pl-stats"] = nsr_pl_stats;

    nsr_stats->parent = this;
    children["nsr-stats"] = nsr_stats;

    protocol_stats->parent = this;
    children["protocol-stats"] = protocol_stats;

    raw_io_stats->parent = this;
    children["raw-io-stats"] = raw_io_stats;

    rib_batch_stats->parent = this;
    children["rib-batch-stats"] = rib_batch_stats;

    rib_thread_stats->parent = this;
    children["rib-thread-stats"] = rib_thread_stats;

    spf_stats->parent = this;
    children["spf-stats"] = spf_stats;

    te_stats->parent = this;
    children["te-stats"] = te_stats;

    yang_name = "statistics"; yang_parent_name = "vrf";
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::~Statistics()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::has_data() const
{
    return (frr_stats !=  nullptr && frr_stats->has_data())
	|| (interface_stats_entries !=  nullptr && interface_stats_entries->has_data())
	|| (issu_stats !=  nullptr && issu_stats->has_data())
	|| (nsr_pl_stats !=  nullptr && nsr_pl_stats->has_data())
	|| (nsr_stats !=  nullptr && nsr_stats->has_data())
	|| (protocol_stats !=  nullptr && protocol_stats->has_data())
	|| (raw_io_stats !=  nullptr && raw_io_stats->has_data())
	|| (rib_batch_stats !=  nullptr && rib_batch_stats->has_data())
	|| (rib_thread_stats !=  nullptr && rib_thread_stats->has_data())
	|| (spf_stats !=  nullptr && spf_stats->has_data())
	|| (te_stats !=  nullptr && te_stats->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::has_operation() const
{
    return is_set(operation)
	|| (frr_stats !=  nullptr && frr_stats->has_operation())
	|| (interface_stats_entries !=  nullptr && interface_stats_entries->has_operation())
	|| (issu_stats !=  nullptr && issu_stats->has_operation())
	|| (nsr_pl_stats !=  nullptr && nsr_pl_stats->has_operation())
	|| (nsr_stats !=  nullptr && nsr_stats->has_operation())
	|| (protocol_stats !=  nullptr && protocol_stats->has_operation())
	|| (raw_io_stats !=  nullptr && raw_io_stats->has_operation())
	|| (rib_batch_stats !=  nullptr && rib_batch_stats->has_operation())
	|| (rib_thread_stats !=  nullptr && rib_thread_stats->has_operation())
	|| (spf_stats !=  nullptr && spf_stats->has_operation())
	|| (te_stats !=  nullptr && te_stats->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::Statistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Statistics' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "frr-stats")
    {
        if(frr_stats != nullptr)
        {
            children["frr-stats"] = frr_stats;
        }
        else
        {
            frr_stats = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::FrrStats>();
            frr_stats->parent = this;
            children["frr-stats"] = frr_stats;
        }
        return children.at("frr-stats");
    }

    if(child_yang_name == "interface-stats-entries")
    {
        if(interface_stats_entries != nullptr)
        {
            children["interface-stats-entries"] = interface_stats_entries;
        }
        else
        {
            interface_stats_entries = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::InterfaceStatsEntries>();
            interface_stats_entries->parent = this;
            children["interface-stats-entries"] = interface_stats_entries;
        }
        return children.at("interface-stats-entries");
    }

    if(child_yang_name == "issu-stats")
    {
        if(issu_stats != nullptr)
        {
            children["issu-stats"] = issu_stats;
        }
        else
        {
            issu_stats = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats>();
            issu_stats->parent = this;
            children["issu-stats"] = issu_stats;
        }
        return children.at("issu-stats");
    }

    if(child_yang_name == "nsr-pl-stats")
    {
        if(nsr_pl_stats != nullptr)
        {
            children["nsr-pl-stats"] = nsr_pl_stats;
        }
        else
        {
            nsr_pl_stats = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats>();
            nsr_pl_stats->parent = this;
            children["nsr-pl-stats"] = nsr_pl_stats;
        }
        return children.at("nsr-pl-stats");
    }

    if(child_yang_name == "nsr-stats")
    {
        if(nsr_stats != nullptr)
        {
            children["nsr-stats"] = nsr_stats;
        }
        else
        {
            nsr_stats = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats>();
            nsr_stats->parent = this;
            children["nsr-stats"] = nsr_stats;
        }
        return children.at("nsr-stats");
    }

    if(child_yang_name == "protocol-stats")
    {
        if(protocol_stats != nullptr)
        {
            children["protocol-stats"] = protocol_stats;
        }
        else
        {
            protocol_stats = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::ProtocolStats>();
            protocol_stats->parent = this;
            children["protocol-stats"] = protocol_stats;
        }
        return children.at("protocol-stats");
    }

    if(child_yang_name == "raw-io-stats")
    {
        if(raw_io_stats != nullptr)
        {
            children["raw-io-stats"] = raw_io_stats;
        }
        else
        {
            raw_io_stats = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::RawIoStats>();
            raw_io_stats->parent = this;
            children["raw-io-stats"] = raw_io_stats;
        }
        return children.at("raw-io-stats");
    }

    if(child_yang_name == "rib-batch-stats")
    {
        if(rib_batch_stats != nullptr)
        {
            children["rib-batch-stats"] = rib_batch_stats;
        }
        else
        {
            rib_batch_stats = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibBatchStats>();
            rib_batch_stats->parent = this;
            children["rib-batch-stats"] = rib_batch_stats;
        }
        return children.at("rib-batch-stats");
    }

    if(child_yang_name == "rib-thread-stats")
    {
        if(rib_thread_stats != nullptr)
        {
            children["rib-thread-stats"] = rib_thread_stats;
        }
        else
        {
            rib_thread_stats = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats>();
            rib_thread_stats->parent = this;
            children["rib-thread-stats"] = rib_thread_stats;
        }
        return children.at("rib-thread-stats");
    }

    if(child_yang_name == "spf-stats")
    {
        if(spf_stats != nullptr)
        {
            children["spf-stats"] = spf_stats;
        }
        else
        {
            spf_stats = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats>();
            spf_stats->parent = this;
            children["spf-stats"] = spf_stats;
        }
        return children.at("spf-stats");
    }

    if(child_yang_name == "te-stats")
    {
        if(te_stats != nullptr)
        {
            children["te-stats"] = te_stats;
        }
        else
        {
            te_stats = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::TeStats>();
            te_stats->parent = this;
            children["te-stats"] = te_stats;
        }
        return children.at("te-stats");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::Statistics::get_children()
{
    if(children.find("frr-stats") == children.end())
    {
        if(frr_stats != nullptr)
        {
            children["frr-stats"] = frr_stats;
        }
    }

    if(children.find("interface-stats-entries") == children.end())
    {
        if(interface_stats_entries != nullptr)
        {
            children["interface-stats-entries"] = interface_stats_entries;
        }
    }

    if(children.find("issu-stats") == children.end())
    {
        if(issu_stats != nullptr)
        {
            children["issu-stats"] = issu_stats;
        }
    }

    if(children.find("nsr-pl-stats") == children.end())
    {
        if(nsr_pl_stats != nullptr)
        {
            children["nsr-pl-stats"] = nsr_pl_stats;
        }
    }

    if(children.find("nsr-stats") == children.end())
    {
        if(nsr_stats != nullptr)
        {
            children["nsr-stats"] = nsr_stats;
        }
    }

    if(children.find("protocol-stats") == children.end())
    {
        if(protocol_stats != nullptr)
        {
            children["protocol-stats"] = protocol_stats;
        }
    }

    if(children.find("raw-io-stats") == children.end())
    {
        if(raw_io_stats != nullptr)
        {
            children["raw-io-stats"] = raw_io_stats;
        }
    }

    if(children.find("rib-batch-stats") == children.end())
    {
        if(rib_batch_stats != nullptr)
        {
            children["rib-batch-stats"] = rib_batch_stats;
        }
    }

    if(children.find("rib-thread-stats") == children.end())
    {
        if(rib_thread_stats != nullptr)
        {
            children["rib-thread-stats"] = rib_thread_stats;
        }
    }

    if(children.find("spf-stats") == children.end())
    {
        if(spf_stats != nullptr)
        {
            children["spf-stats"] = spf_stats;
        }
    }

    if(children.find("te-stats") == children.end())
    {
        if(te_stats != nullptr)
        {
            children["te-stats"] = te_stats;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::SpfStats()
    :
    spf_header(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::SpfHeader>())
{
    spf_header->parent = this;
    children["spf-header"] = spf_header;

    yang_name = "spf-stats"; yang_parent_name = "statistics";
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::~SpfStats()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::has_data() const
{
    for (std::size_t index=0; index<os_ex_runtime.size(); index++)
    {
        if(os_ex_runtime[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<os_runtime.size(); index++)
    {
        if(os_runtime[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<os_sum_runtime.size(); index++)
    {
        if(os_sum_runtime[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<runtime.size(); index++)
    {
        if(runtime[index]->has_data())
            return true;
    }
    return (spf_header !=  nullptr && spf_header->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::has_operation() const
{
    for (std::size_t index=0; index<os_ex_runtime.size(); index++)
    {
        if(os_ex_runtime[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<os_runtime.size(); index++)
    {
        if(os_runtime[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<os_sum_runtime.size(); index++)
    {
        if(os_sum_runtime[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<runtime.size(); index++)
    {
        if(runtime[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| (spf_header !=  nullptr && spf_header->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spf-stats";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SpfStats' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "os-ex-runtime")
    {
        for(auto const & c : os_ex_runtime)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsExRuntime>();
        c->parent = this;
        os_ex_runtime.push_back(std::move(c));
        children[segment_path] = os_ex_runtime.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "os-runtime")
    {
        for(auto const & c : os_runtime)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsRuntime>();
        c->parent = this;
        os_runtime.push_back(std::move(c));
        children[segment_path] = os_runtime.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "os-sum-runtime")
    {
        for(auto const & c : os_sum_runtime)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsSumRuntime>();
        c->parent = this;
        os_sum_runtime.push_back(std::move(c));
        children[segment_path] = os_sum_runtime.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "runtime")
    {
        for(auto const & c : runtime)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime>();
        c->parent = this;
        runtime.push_back(std::move(c));
        children[segment_path] = runtime.back();
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
            spf_header = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::SpfHeader>();
            spf_header->parent = this;
            children["spf-header"] = spf_header;
        }
        return children.at("spf-header");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::get_children()
{
    for (auto const & c : os_ex_runtime)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : os_runtime)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : os_sum_runtime)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : runtime)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("spf-header") == children.end())
    {
        if(spf_header != nullptr)
        {
            children["spf-header"] = spf_header;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::SpfHeader::SpfHeader()
    :
    router_id{YType::str, "router-id"},
    spf_count{YType::uint32, "spf-count"}
{
    yang_name = "spf-header"; yang_parent_name = "spf-stats";
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::SpfHeader::~SpfHeader()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::SpfHeader::has_data() const
{
    for (std::size_t index=0; index<area_summ.size(); index++)
    {
        if(area_summ[index]->has_data())
            return true;
    }
    return router_id.is_set
	|| spf_count.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::SpfHeader::has_operation() const
{
    for (std::size_t index=0; index<area_summ.size(); index++)
    {
        if(area_summ[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(router_id.operation)
	|| is_set(spf_count.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::SpfHeader::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spf-header";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::SpfHeader::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SpfHeader' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_id.is_set || is_set(router_id.operation)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (spf_count.is_set || is_set(spf_count.operation)) leaf_name_data.push_back(spf_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::SpfHeader::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "area-summ")
    {
        for(auto const & c : area_summ)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::SpfHeader::AreaSumm>();
        c->parent = this;
        area_summ.push_back(std::move(c));
        children[segment_path] = area_summ.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::SpfHeader::get_children()
{
    for (auto const & c : area_summ)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::SpfHeader::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "router-id")
    {
        router_id = value;
    }
    if(value_path == "spf-count")
    {
        spf_count = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::SpfHeader::AreaSumm::AreaSumm()
    :
    area_id{YType::uint32, "area-id"},
    spf_count{YType::uint32, "spf-count"}
{
    yang_name = "area-summ"; yang_parent_name = "spf-header";
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::SpfHeader::AreaSumm::~AreaSumm()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::SpfHeader::AreaSumm::has_data() const
{
    return area_id.is_set
	|| spf_count.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::SpfHeader::AreaSumm::has_operation() const
{
    return is_set(operation)
	|| is_set(area_id.operation)
	|| is_set(spf_count.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::SpfHeader::AreaSumm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "area-summ";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::SpfHeader::AreaSumm::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AreaSumm' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_id.is_set || is_set(area_id.operation)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (spf_count.is_set || is_set(spf_count.operation)) leaf_name_data.push_back(spf_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::SpfHeader::AreaSumm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::SpfHeader::AreaSumm::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::SpfHeader::AreaSumm::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "area-id")
    {
        area_id = value;
    }
    if(value_path == "spf-count")
    {
        spf_count = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsRuntime::OsRuntime()
    :
    si_area_id_str{YType::str, "si-area-id-str"},
    si_change_flags{YType::uint16, "si-change-flags"}
    	,
    si_duration(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsRuntime::SiDuration>())
	,si_start_time(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsRuntime::SiStartTime>())
{
    si_duration->parent = this;
    children["si-duration"] = si_duration;

    si_start_time->parent = this;
    children["si-start-time"] = si_start_time;

    yang_name = "os-runtime"; yang_parent_name = "spf-stats";
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsRuntime::~OsRuntime()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsRuntime::has_data() const
{
    return si_area_id_str.is_set
	|| si_change_flags.is_set
	|| (si_duration !=  nullptr && si_duration->has_data())
	|| (si_start_time !=  nullptr && si_start_time->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsRuntime::has_operation() const
{
    return is_set(operation)
	|| is_set(si_area_id_str.operation)
	|| is_set(si_change_flags.operation)
	|| (si_duration !=  nullptr && si_duration->has_operation())
	|| (si_start_time !=  nullptr && si_start_time->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsRuntime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "os-runtime";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsRuntime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OsRuntime' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (si_area_id_str.is_set || is_set(si_area_id_str.operation)) leaf_name_data.push_back(si_area_id_str.get_name_leafdata());
    if (si_change_flags.is_set || is_set(si_change_flags.operation)) leaf_name_data.push_back(si_change_flags.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsRuntime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "si-duration")
    {
        if(si_duration != nullptr)
        {
            children["si-duration"] = si_duration;
        }
        else
        {
            si_duration = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsRuntime::SiDuration>();
            si_duration->parent = this;
            children["si-duration"] = si_duration;
        }
        return children.at("si-duration");
    }

    if(child_yang_name == "si-start-time")
    {
        if(si_start_time != nullptr)
        {
            children["si-start-time"] = si_start_time;
        }
        else
        {
            si_start_time = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsRuntime::SiStartTime>();
            si_start_time->parent = this;
            children["si-start-time"] = si_start_time;
        }
        return children.at("si-start-time");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsRuntime::get_children()
{
    if(children.find("si-duration") == children.end())
    {
        if(si_duration != nullptr)
        {
            children["si-duration"] = si_duration;
        }
    }

    if(children.find("si-start-time") == children.end())
    {
        if(si_start_time != nullptr)
        {
            children["si-start-time"] = si_start_time;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsRuntime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "si-area-id-str")
    {
        si_area_id_str = value;
    }
    if(value_path == "si-change-flags")
    {
        si_change_flags = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsRuntime::SiStartTime::SiStartTime()
    :
    nanosecond{YType::uint32, "nanosecond"},
    second{YType::uint32, "second"}
{
    yang_name = "si-start-time"; yang_parent_name = "os-runtime";
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsRuntime::SiStartTime::~SiStartTime()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsRuntime::SiStartTime::has_data() const
{
    return nanosecond.is_set
	|| second.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsRuntime::SiStartTime::has_operation() const
{
    return is_set(operation)
	|| is_set(nanosecond.operation)
	|| is_set(second.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsRuntime::SiStartTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "si-start-time";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsRuntime::SiStartTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SiStartTime' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsRuntime::SiStartTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsRuntime::SiStartTime::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsRuntime::SiStartTime::set_value(const std::string & value_path, std::string value)
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

Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsRuntime::SiDuration::SiDuration()
    :
    nanosecond{YType::uint32, "nanosecond"},
    second{YType::uint32, "second"}
{
    yang_name = "si-duration"; yang_parent_name = "os-runtime";
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsRuntime::SiDuration::~SiDuration()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsRuntime::SiDuration::has_data() const
{
    return nanosecond.is_set
	|| second.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsRuntime::SiDuration::has_operation() const
{
    return is_set(operation)
	|| is_set(nanosecond.operation)
	|| is_set(second.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsRuntime::SiDuration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "si-duration";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsRuntime::SiDuration::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SiDuration' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsRuntime::SiDuration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsRuntime::SiDuration::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsRuntime::SiDuration::set_value(const std::string & value_path, std::string value)
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

Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsSumRuntime::OsSumRuntime()
    :
    sp_adv_rtr_id{YType::uint32, "sp-adv-rtr-id"},
    sp_dest_addr{YType::uint32, "sp-dest-addr"},
    sp_dest_count{YType::uint32, "sp-dest-count"}
    	,
    sp_duration(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsSumRuntime::SpDuration>())
	,sp_start_time(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsSumRuntime::SpStartTime>())
{
    sp_duration->parent = this;
    children["sp-duration"] = sp_duration;

    sp_start_time->parent = this;
    children["sp-start-time"] = sp_start_time;

    yang_name = "os-sum-runtime"; yang_parent_name = "spf-stats";
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsSumRuntime::~OsSumRuntime()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsSumRuntime::has_data() const
{
    return sp_adv_rtr_id.is_set
	|| sp_dest_addr.is_set
	|| sp_dest_count.is_set
	|| (sp_duration !=  nullptr && sp_duration->has_data())
	|| (sp_start_time !=  nullptr && sp_start_time->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsSumRuntime::has_operation() const
{
    return is_set(operation)
	|| is_set(sp_adv_rtr_id.operation)
	|| is_set(sp_dest_addr.operation)
	|| is_set(sp_dest_count.operation)
	|| (sp_duration !=  nullptr && sp_duration->has_operation())
	|| (sp_start_time !=  nullptr && sp_start_time->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsSumRuntime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "os-sum-runtime";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsSumRuntime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OsSumRuntime' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sp_adv_rtr_id.is_set || is_set(sp_adv_rtr_id.operation)) leaf_name_data.push_back(sp_adv_rtr_id.get_name_leafdata());
    if (sp_dest_addr.is_set || is_set(sp_dest_addr.operation)) leaf_name_data.push_back(sp_dest_addr.get_name_leafdata());
    if (sp_dest_count.is_set || is_set(sp_dest_count.operation)) leaf_name_data.push_back(sp_dest_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsSumRuntime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "sp-duration")
    {
        if(sp_duration != nullptr)
        {
            children["sp-duration"] = sp_duration;
        }
        else
        {
            sp_duration = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsSumRuntime::SpDuration>();
            sp_duration->parent = this;
            children["sp-duration"] = sp_duration;
        }
        return children.at("sp-duration");
    }

    if(child_yang_name == "sp-start-time")
    {
        if(sp_start_time != nullptr)
        {
            children["sp-start-time"] = sp_start_time;
        }
        else
        {
            sp_start_time = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsSumRuntime::SpStartTime>();
            sp_start_time->parent = this;
            children["sp-start-time"] = sp_start_time;
        }
        return children.at("sp-start-time");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsSumRuntime::get_children()
{
    if(children.find("sp-duration") == children.end())
    {
        if(sp_duration != nullptr)
        {
            children["sp-duration"] = sp_duration;
        }
    }

    if(children.find("sp-start-time") == children.end())
    {
        if(sp_start_time != nullptr)
        {
            children["sp-start-time"] = sp_start_time;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsSumRuntime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "sp-adv-rtr-id")
    {
        sp_adv_rtr_id = value;
    }
    if(value_path == "sp-dest-addr")
    {
        sp_dest_addr = value;
    }
    if(value_path == "sp-dest-count")
    {
        sp_dest_count = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsSumRuntime::SpStartTime::SpStartTime()
    :
    nanosecond{YType::uint32, "nanosecond"},
    second{YType::uint32, "second"}
{
    yang_name = "sp-start-time"; yang_parent_name = "os-sum-runtime";
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsSumRuntime::SpStartTime::~SpStartTime()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsSumRuntime::SpStartTime::has_data() const
{
    return nanosecond.is_set
	|| second.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsSumRuntime::SpStartTime::has_operation() const
{
    return is_set(operation)
	|| is_set(nanosecond.operation)
	|| is_set(second.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsSumRuntime::SpStartTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sp-start-time";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsSumRuntime::SpStartTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SpStartTime' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsSumRuntime::SpStartTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsSumRuntime::SpStartTime::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsSumRuntime::SpStartTime::set_value(const std::string & value_path, std::string value)
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

Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsSumRuntime::SpDuration::SpDuration()
    :
    nanosecond{YType::uint32, "nanosecond"},
    second{YType::uint32, "second"}
{
    yang_name = "sp-duration"; yang_parent_name = "os-sum-runtime";
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsSumRuntime::SpDuration::~SpDuration()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsSumRuntime::SpDuration::has_data() const
{
    return nanosecond.is_set
	|| second.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsSumRuntime::SpDuration::has_operation() const
{
    return is_set(operation)
	|| is_set(nanosecond.operation)
	|| is_set(second.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsSumRuntime::SpDuration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sp-duration";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsSumRuntime::SpDuration::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SpDuration' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsSumRuntime::SpDuration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsSumRuntime::SpDuration::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsSumRuntime::SpDuration::set_value(const std::string & value_path, std::string value)
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

Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsExRuntime::OsExRuntime()
    :
    sp_adv_rtr_id{YType::uint32, "sp-adv-rtr-id"},
    sp_dest_addr{YType::uint32, "sp-dest-addr"},
    sp_dest_count{YType::uint32, "sp-dest-count"}
    	,
    sp_duration(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsExRuntime::SpDuration>())
	,sp_start_time(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsExRuntime::SpStartTime>())
{
    sp_duration->parent = this;
    children["sp-duration"] = sp_duration;

    sp_start_time->parent = this;
    children["sp-start-time"] = sp_start_time;

    yang_name = "os-ex-runtime"; yang_parent_name = "spf-stats";
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsExRuntime::~OsExRuntime()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsExRuntime::has_data() const
{
    return sp_adv_rtr_id.is_set
	|| sp_dest_addr.is_set
	|| sp_dest_count.is_set
	|| (sp_duration !=  nullptr && sp_duration->has_data())
	|| (sp_start_time !=  nullptr && sp_start_time->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsExRuntime::has_operation() const
{
    return is_set(operation)
	|| is_set(sp_adv_rtr_id.operation)
	|| is_set(sp_dest_addr.operation)
	|| is_set(sp_dest_count.operation)
	|| (sp_duration !=  nullptr && sp_duration->has_operation())
	|| (sp_start_time !=  nullptr && sp_start_time->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsExRuntime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "os-ex-runtime";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsExRuntime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OsExRuntime' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sp_adv_rtr_id.is_set || is_set(sp_adv_rtr_id.operation)) leaf_name_data.push_back(sp_adv_rtr_id.get_name_leafdata());
    if (sp_dest_addr.is_set || is_set(sp_dest_addr.operation)) leaf_name_data.push_back(sp_dest_addr.get_name_leafdata());
    if (sp_dest_count.is_set || is_set(sp_dest_count.operation)) leaf_name_data.push_back(sp_dest_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsExRuntime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "sp-duration")
    {
        if(sp_duration != nullptr)
        {
            children["sp-duration"] = sp_duration;
        }
        else
        {
            sp_duration = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsExRuntime::SpDuration>();
            sp_duration->parent = this;
            children["sp-duration"] = sp_duration;
        }
        return children.at("sp-duration");
    }

    if(child_yang_name == "sp-start-time")
    {
        if(sp_start_time != nullptr)
        {
            children["sp-start-time"] = sp_start_time;
        }
        else
        {
            sp_start_time = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsExRuntime::SpStartTime>();
            sp_start_time->parent = this;
            children["sp-start-time"] = sp_start_time;
        }
        return children.at("sp-start-time");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsExRuntime::get_children()
{
    if(children.find("sp-duration") == children.end())
    {
        if(sp_duration != nullptr)
        {
            children["sp-duration"] = sp_duration;
        }
    }

    if(children.find("sp-start-time") == children.end())
    {
        if(sp_start_time != nullptr)
        {
            children["sp-start-time"] = sp_start_time;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsExRuntime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "sp-adv-rtr-id")
    {
        sp_adv_rtr_id = value;
    }
    if(value_path == "sp-dest-addr")
    {
        sp_dest_addr = value;
    }
    if(value_path == "sp-dest-count")
    {
        sp_dest_count = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsExRuntime::SpStartTime::SpStartTime()
    :
    nanosecond{YType::uint32, "nanosecond"},
    second{YType::uint32, "second"}
{
    yang_name = "sp-start-time"; yang_parent_name = "os-ex-runtime";
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsExRuntime::SpStartTime::~SpStartTime()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsExRuntime::SpStartTime::has_data() const
{
    return nanosecond.is_set
	|| second.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsExRuntime::SpStartTime::has_operation() const
{
    return is_set(operation)
	|| is_set(nanosecond.operation)
	|| is_set(second.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsExRuntime::SpStartTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sp-start-time";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsExRuntime::SpStartTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SpStartTime' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsExRuntime::SpStartTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsExRuntime::SpStartTime::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsExRuntime::SpStartTime::set_value(const std::string & value_path, std::string value)
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

Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsExRuntime::SpDuration::SpDuration()
    :
    nanosecond{YType::uint32, "nanosecond"},
    second{YType::uint32, "second"}
{
    yang_name = "sp-duration"; yang_parent_name = "os-ex-runtime";
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsExRuntime::SpDuration::~SpDuration()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsExRuntime::SpDuration::has_data() const
{
    return nanosecond.is_set
	|| second.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsExRuntime::SpDuration::has_operation() const
{
    return is_set(operation)
	|| is_set(nanosecond.operation)
	|| is_set(second.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsExRuntime::SpDuration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sp-duration";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsExRuntime::SpDuration::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SpDuration' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsExRuntime::SpDuration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsExRuntime::SpDuration::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsExRuntime::SpDuration::set_value(const std::string & value_path, std::string value)
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

Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::Runtime()
    :
    lsa_change_cnt{YType::int16, "lsa-change-cnt"},
    spf_start_time{YType::uint32, "spf-start-time"}
    	,
    gbl_spf_time(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::GblSpfTime>())
{
    gbl_spf_time->parent = this;
    children["gbl-spf-time"] = gbl_spf_time;

    yang_name = "runtime"; yang_parent_name = "spf-stats";
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::~Runtime()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::has_data() const
{
    for (std::size_t index=0; index<area_stat.size(); index++)
    {
        if(area_stat[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<lsa_info.size(); index++)
    {
        if(lsa_info[index]->has_data())
            return true;
    }
    return lsa_change_cnt.is_set
	|| spf_start_time.is_set
	|| (gbl_spf_time !=  nullptr && gbl_spf_time->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::has_operation() const
{
    for (std::size_t index=0; index<area_stat.size(); index++)
    {
        if(area_stat[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<lsa_info.size(); index++)
    {
        if(lsa_info[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(lsa_change_cnt.operation)
	|| is_set(spf_start_time.operation)
	|| (gbl_spf_time !=  nullptr && gbl_spf_time->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "runtime";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Runtime' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsa_change_cnt.is_set || is_set(lsa_change_cnt.operation)) leaf_name_data.push_back(lsa_change_cnt.get_name_leafdata());
    if (spf_start_time.is_set || is_set(spf_start_time.operation)) leaf_name_data.push_back(spf_start_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::AreaStat>();
        c->parent = this;
        area_stat.push_back(std::move(c));
        children[segment_path] = area_stat.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "gbl-spf-time")
    {
        if(gbl_spf_time != nullptr)
        {
            children["gbl-spf-time"] = gbl_spf_time;
        }
        else
        {
            gbl_spf_time = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::GblSpfTime>();
            gbl_spf_time->parent = this;
            children["gbl-spf-time"] = gbl_spf_time;
        }
        return children.at("gbl-spf-time");
    }

    if(child_yang_name == "lsa-info")
    {
        for(auto const & c : lsa_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::LsaInfo>();
        c->parent = this;
        lsa_info.push_back(std::move(c));
        children[segment_path] = lsa_info.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::get_children()
{
    for (auto const & c : area_stat)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("gbl-spf-time") == children.end())
    {
        if(gbl_spf_time != nullptr)
        {
            children["gbl-spf-time"] = gbl_spf_time;
        }
    }

    for (auto const & c : lsa_info)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "lsa-change-cnt")
    {
        lsa_change_cnt = value;
    }
    if(value_path == "spf-start-time")
    {
        spf_start_time = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::GblSpfTime::GblSpfTime()
    :
    spf_dijkstra{YType::uint32, "spf-dijkstra"},
    spf_ext_prefix{YType::uint32, "spf-ext-prefix"},
    spf_ext_prefix_del{YType::uint32, "spf-ext-prefix-del"},
    spf_inter_prefix{YType::uint32, "spf-inter-prefix"},
    spf_inter_prefix_del{YType::uint32, "spf-inter-prefix-del"},
    spf_intra_prefix{YType::uint32, "spf-intra-prefix"},
    spf_intra_prefix_del{YType::uint32, "spf-intra-prefix-del"}
{
    yang_name = "gbl-spf-time"; yang_parent_name = "runtime";
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::GblSpfTime::~GblSpfTime()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::GblSpfTime::has_data() const
{
    return spf_dijkstra.is_set
	|| spf_ext_prefix.is_set
	|| spf_ext_prefix_del.is_set
	|| spf_inter_prefix.is_set
	|| spf_inter_prefix_del.is_set
	|| spf_intra_prefix.is_set
	|| spf_intra_prefix_del.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::GblSpfTime::has_operation() const
{
    return is_set(operation)
	|| is_set(spf_dijkstra.operation)
	|| is_set(spf_ext_prefix.operation)
	|| is_set(spf_ext_prefix_del.operation)
	|| is_set(spf_inter_prefix.operation)
	|| is_set(spf_inter_prefix_del.operation)
	|| is_set(spf_intra_prefix.operation)
	|| is_set(spf_intra_prefix_del.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::GblSpfTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gbl-spf-time";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::GblSpfTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GblSpfTime' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (spf_dijkstra.is_set || is_set(spf_dijkstra.operation)) leaf_name_data.push_back(spf_dijkstra.get_name_leafdata());
    if (spf_ext_prefix.is_set || is_set(spf_ext_prefix.operation)) leaf_name_data.push_back(spf_ext_prefix.get_name_leafdata());
    if (spf_ext_prefix_del.is_set || is_set(spf_ext_prefix_del.operation)) leaf_name_data.push_back(spf_ext_prefix_del.get_name_leafdata());
    if (spf_inter_prefix.is_set || is_set(spf_inter_prefix.operation)) leaf_name_data.push_back(spf_inter_prefix.get_name_leafdata());
    if (spf_inter_prefix_del.is_set || is_set(spf_inter_prefix_del.operation)) leaf_name_data.push_back(spf_inter_prefix_del.get_name_leafdata());
    if (spf_intra_prefix.is_set || is_set(spf_intra_prefix.operation)) leaf_name_data.push_back(spf_intra_prefix.get_name_leafdata());
    if (spf_intra_prefix_del.is_set || is_set(spf_intra_prefix_del.operation)) leaf_name_data.push_back(spf_intra_prefix_del.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::GblSpfTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::GblSpfTime::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::GblSpfTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "spf-dijkstra")
    {
        spf_dijkstra = value;
    }
    if(value_path == "spf-ext-prefix")
    {
        spf_ext_prefix = value;
    }
    if(value_path == "spf-ext-prefix-del")
    {
        spf_ext_prefix_del = value;
    }
    if(value_path == "spf-inter-prefix")
    {
        spf_inter_prefix = value;
    }
    if(value_path == "spf-inter-prefix-del")
    {
        spf_inter_prefix_del = value;
    }
    if(value_path == "spf-intra-prefix")
    {
        spf_intra_prefix = value;
    }
    if(value_path == "spf-intra-prefix-del")
    {
        spf_intra_prefix_del = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::LsaInfo::LsaInfo()
    :
    adv_rtr{YType::str, "adv-rtr"},
    area_id{YType::uint32, "area-id"},
    flush{YType::boolean, "flush"},
    id{YType::str, "id"},
    type{YType::uint8, "type"}
{
    yang_name = "lsa-info"; yang_parent_name = "runtime";
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::LsaInfo::~LsaInfo()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::LsaInfo::has_data() const
{
    return adv_rtr.is_set
	|| area_id.is_set
	|| flush.is_set
	|| id.is_set
	|| type.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::LsaInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(adv_rtr.operation)
	|| is_set(area_id.operation)
	|| is_set(flush.operation)
	|| is_set(id.operation)
	|| is_set(type.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::LsaInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-info";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::LsaInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LsaInfo' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adv_rtr.is_set || is_set(adv_rtr.operation)) leaf_name_data.push_back(adv_rtr.get_name_leafdata());
    if (area_id.is_set || is_set(area_id.operation)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (flush.is_set || is_set(flush.operation)) leaf_name_data.push_back(flush.get_name_leafdata());
    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::LsaInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::LsaInfo::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::LsaInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "adv-rtr")
    {
        adv_rtr = value;
    }
    if(value_path == "area-id")
    {
        area_id = value;
    }
    if(value_path == "flush")
    {
        flush = value;
    }
    if(value_path == "id")
    {
        id = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::AreaStat::AreaStat()
    :
    area_id{YType::uint32, "area-id"},
    lsa_type_cnt{YType::uint32, "lsa-type-cnt"}
    	,
    spf_time(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::AreaStat::SpfTime>())
{
    spf_time->parent = this;
    children["spf-time"] = spf_time;

    yang_name = "area-stat"; yang_parent_name = "runtime";
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::AreaStat::~AreaStat()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::AreaStat::has_data() const
{
    for (auto const & leaf : lsa_type_cnt.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return area_id.is_set
	|| (spf_time !=  nullptr && spf_time->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::AreaStat::has_operation() const
{
    for (auto const & leaf : lsa_type_cnt.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(area_id.operation)
	|| is_set(lsa_type_cnt.operation)
	|| (spf_time !=  nullptr && spf_time->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::AreaStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "area-stat";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::AreaStat::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AreaStat' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_id.is_set || is_set(area_id.operation)) leaf_name_data.push_back(area_id.get_name_leafdata());

    auto lsa_type_cnt_name_datas = lsa_type_cnt.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), lsa_type_cnt_name_datas.begin(), lsa_type_cnt_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::AreaStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "spf-time")
    {
        if(spf_time != nullptr)
        {
            children["spf-time"] = spf_time;
        }
        else
        {
            spf_time = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::AreaStat::SpfTime>();
            spf_time->parent = this;
            children["spf-time"] = spf_time;
        }
        return children.at("spf-time");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::AreaStat::get_children()
{
    if(children.find("spf-time") == children.end())
    {
        if(spf_time != nullptr)
        {
            children["spf-time"] = spf_time;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::AreaStat::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "area-id")
    {
        area_id = value;
    }
    if(value_path == "lsa-type-cnt")
    {
        lsa_type_cnt.append(value);
    }
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::AreaStat::SpfTime::SpfTime()
    :
    spf_dijkstra{YType::uint32, "spf-dijkstra"},
    spf_ext_prefix{YType::uint32, "spf-ext-prefix"},
    spf_ext_prefix_del{YType::uint32, "spf-ext-prefix-del"},
    spf_inter_prefix{YType::uint32, "spf-inter-prefix"},
    spf_inter_prefix_del{YType::uint32, "spf-inter-prefix-del"},
    spf_intra_prefix{YType::uint32, "spf-intra-prefix"},
    spf_intra_prefix_del{YType::uint32, "spf-intra-prefix-del"}
{
    yang_name = "spf-time"; yang_parent_name = "area-stat";
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::AreaStat::SpfTime::~SpfTime()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::AreaStat::SpfTime::has_data() const
{
    return spf_dijkstra.is_set
	|| spf_ext_prefix.is_set
	|| spf_ext_prefix_del.is_set
	|| spf_inter_prefix.is_set
	|| spf_inter_prefix_del.is_set
	|| spf_intra_prefix.is_set
	|| spf_intra_prefix_del.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::AreaStat::SpfTime::has_operation() const
{
    return is_set(operation)
	|| is_set(spf_dijkstra.operation)
	|| is_set(spf_ext_prefix.operation)
	|| is_set(spf_ext_prefix_del.operation)
	|| is_set(spf_inter_prefix.operation)
	|| is_set(spf_inter_prefix_del.operation)
	|| is_set(spf_intra_prefix.operation)
	|| is_set(spf_intra_prefix_del.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::AreaStat::SpfTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spf-time";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::AreaStat::SpfTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SpfTime' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (spf_dijkstra.is_set || is_set(spf_dijkstra.operation)) leaf_name_data.push_back(spf_dijkstra.get_name_leafdata());
    if (spf_ext_prefix.is_set || is_set(spf_ext_prefix.operation)) leaf_name_data.push_back(spf_ext_prefix.get_name_leafdata());
    if (spf_ext_prefix_del.is_set || is_set(spf_ext_prefix_del.operation)) leaf_name_data.push_back(spf_ext_prefix_del.get_name_leafdata());
    if (spf_inter_prefix.is_set || is_set(spf_inter_prefix.operation)) leaf_name_data.push_back(spf_inter_prefix.get_name_leafdata());
    if (spf_inter_prefix_del.is_set || is_set(spf_inter_prefix_del.operation)) leaf_name_data.push_back(spf_inter_prefix_del.get_name_leafdata());
    if (spf_intra_prefix.is_set || is_set(spf_intra_prefix.operation)) leaf_name_data.push_back(spf_intra_prefix.get_name_leafdata());
    if (spf_intra_prefix_del.is_set || is_set(spf_intra_prefix_del.operation)) leaf_name_data.push_back(spf_intra_prefix_del.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::AreaStat::SpfTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::AreaStat::SpfTime::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::AreaStat::SpfTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "spf-dijkstra")
    {
        spf_dijkstra = value;
    }
    if(value_path == "spf-ext-prefix")
    {
        spf_ext_prefix = value;
    }
    if(value_path == "spf-ext-prefix-del")
    {
        spf_ext_prefix_del = value;
    }
    if(value_path == "spf-inter-prefix")
    {
        spf_inter_prefix = value;
    }
    if(value_path == "spf-inter-prefix-del")
    {
        spf_inter_prefix_del = value;
    }
    if(value_path == "spf-intra-prefix")
    {
        spf_intra_prefix = value;
    }
    if(value_path == "spf-intra-prefix-del")
    {
        spf_intra_prefix_del = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibBatchStats::RibBatchStats()
{
    yang_name = "rib-batch-stats"; yang_parent_name = "statistics";
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibBatchStats::~RibBatchStats()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibBatchStats::has_data() const
{
    for (std::size_t index=0; index<priority_batch.size(); index++)
    {
        if(priority_batch[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibBatchStats::has_operation() const
{
    for (std::size_t index=0; index<priority_batch.size(); index++)
    {
        if(priority_batch[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibBatchStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rib-batch-stats";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibBatchStats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RibBatchStats' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibBatchStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "priority-batch")
    {
        for(auto const & c : priority_batch)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibBatchStats::PriorityBatch>();
        c->parent = this;
        priority_batch.push_back(std::move(c));
        children[segment_path] = priority_batch.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibBatchStats::get_children()
{
    for (auto const & c : priority_batch)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibBatchStats::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibBatchStats::PriorityBatch::PriorityBatch()
    :
    batches_sent{YType::uint32, "batches-sent"},
    lfas_add{YType::uint32, "lfas-add"},
    lfas_del{YType::uint32, "lfas-del"},
    lfas_pending{YType::uint32, "lfas-pending"},
    lfas_sent{YType::uint32, "lfas-sent"},
    max_routes{YType::uint32, "max-routes"},
    paths_add{YType::uint32, "paths-add"},
    paths_add_errs{YType::uint32, "paths-add-errs"},
    paths_del{YType::uint32, "paths-del"},
    paths_del_errs{YType::uint32, "paths-del-errs"},
    paths_pending{YType::uint32, "paths-pending"},
    paths_sent{YType::uint32, "paths-sent"},
    priority_level{YType::str, "priority-level"},
    routes_pending{YType::uint32, "routes-pending"},
    routes_sent{YType::uint32, "routes-sent"}
{
    yang_name = "priority-batch"; yang_parent_name = "rib-batch-stats";
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibBatchStats::PriorityBatch::~PriorityBatch()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibBatchStats::PriorityBatch::has_data() const
{
    return batches_sent.is_set
	|| lfas_add.is_set
	|| lfas_del.is_set
	|| lfas_pending.is_set
	|| lfas_sent.is_set
	|| max_routes.is_set
	|| paths_add.is_set
	|| paths_add_errs.is_set
	|| paths_del.is_set
	|| paths_del_errs.is_set
	|| paths_pending.is_set
	|| paths_sent.is_set
	|| priority_level.is_set
	|| routes_pending.is_set
	|| routes_sent.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibBatchStats::PriorityBatch::has_operation() const
{
    return is_set(operation)
	|| is_set(batches_sent.operation)
	|| is_set(lfas_add.operation)
	|| is_set(lfas_del.operation)
	|| is_set(lfas_pending.operation)
	|| is_set(lfas_sent.operation)
	|| is_set(max_routes.operation)
	|| is_set(paths_add.operation)
	|| is_set(paths_add_errs.operation)
	|| is_set(paths_del.operation)
	|| is_set(paths_del_errs.operation)
	|| is_set(paths_pending.operation)
	|| is_set(paths_sent.operation)
	|| is_set(priority_level.operation)
	|| is_set(routes_pending.operation)
	|| is_set(routes_sent.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibBatchStats::PriorityBatch::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority-batch";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibBatchStats::PriorityBatch::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PriorityBatch' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (batches_sent.is_set || is_set(batches_sent.operation)) leaf_name_data.push_back(batches_sent.get_name_leafdata());
    if (lfas_add.is_set || is_set(lfas_add.operation)) leaf_name_data.push_back(lfas_add.get_name_leafdata());
    if (lfas_del.is_set || is_set(lfas_del.operation)) leaf_name_data.push_back(lfas_del.get_name_leafdata());
    if (lfas_pending.is_set || is_set(lfas_pending.operation)) leaf_name_data.push_back(lfas_pending.get_name_leafdata());
    if (lfas_sent.is_set || is_set(lfas_sent.operation)) leaf_name_data.push_back(lfas_sent.get_name_leafdata());
    if (max_routes.is_set || is_set(max_routes.operation)) leaf_name_data.push_back(max_routes.get_name_leafdata());
    if (paths_add.is_set || is_set(paths_add.operation)) leaf_name_data.push_back(paths_add.get_name_leafdata());
    if (paths_add_errs.is_set || is_set(paths_add_errs.operation)) leaf_name_data.push_back(paths_add_errs.get_name_leafdata());
    if (paths_del.is_set || is_set(paths_del.operation)) leaf_name_data.push_back(paths_del.get_name_leafdata());
    if (paths_del_errs.is_set || is_set(paths_del_errs.operation)) leaf_name_data.push_back(paths_del_errs.get_name_leafdata());
    if (paths_pending.is_set || is_set(paths_pending.operation)) leaf_name_data.push_back(paths_pending.get_name_leafdata());
    if (paths_sent.is_set || is_set(paths_sent.operation)) leaf_name_data.push_back(paths_sent.get_name_leafdata());
    if (priority_level.is_set || is_set(priority_level.operation)) leaf_name_data.push_back(priority_level.get_name_leafdata());
    if (routes_pending.is_set || is_set(routes_pending.operation)) leaf_name_data.push_back(routes_pending.get_name_leafdata());
    if (routes_sent.is_set || is_set(routes_sent.operation)) leaf_name_data.push_back(routes_sent.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibBatchStats::PriorityBatch::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibBatchStats::PriorityBatch::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibBatchStats::PriorityBatch::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "batches-sent")
    {
        batches_sent = value;
    }
    if(value_path == "lfas-add")
    {
        lfas_add = value;
    }
    if(value_path == "lfas-del")
    {
        lfas_del = value;
    }
    if(value_path == "lfas-pending")
    {
        lfas_pending = value;
    }
    if(value_path == "lfas-sent")
    {
        lfas_sent = value;
    }
    if(value_path == "max-routes")
    {
        max_routes = value;
    }
    if(value_path == "paths-add")
    {
        paths_add = value;
    }
    if(value_path == "paths-add-errs")
    {
        paths_add_errs = value;
    }
    if(value_path == "paths-del")
    {
        paths_del = value;
    }
    if(value_path == "paths-del-errs")
    {
        paths_del_errs = value;
    }
    if(value_path == "paths-pending")
    {
        paths_pending = value;
    }
    if(value_path == "paths-sent")
    {
        paths_sent = value;
    }
    if(value_path == "priority-level")
    {
        priority_level = value;
    }
    if(value_path == "routes-pending")
    {
        routes_pending = value;
    }
    if(value_path == "routes-sent")
    {
        routes_sent = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::IssuStats()
    :
    nsr_conn_to_active_attempts{YType::uint64, "nsr-conn-to-active-attempts"},
    nsr_conn_to_active_closes{YType::uint64, "nsr-conn-to-active-closes"},
    nsr_conn_to_active_errors{YType::uint64, "nsr-conn-to-active-errors"},
    nsr_conn_to_active_fails{YType::uint64, "nsr-conn-to-active-fails"},
    nsr_conn_to_active_opens{YType::uint64, "nsr-conn-to-active-opens"},
    nsr_fsm_state{YType::int32, "nsr-fsm-state"},
    nsr_intf_seq_no{YType::uint32, "nsr-intf-seq-no"},
    nsr_lsa_init_sync_pend_count{YType::int32, "nsr-lsa-init-sync-pend-count"},
    nsr_lsa_qad_mdata_count{YType::uint32, "nsr-lsa-qad-mdata-count"},
    nsr_lsa_qad_qid{YType::uint32, "nsr-lsa-qad-qid"},
    nsr_mtu{YType::uint32, "nsr-mtu"},
    nsr_nbr_init_sync_pend_count{YType::int32, "nsr-nbr-init-sync-pend-count"},
    nsr_nbr_qad_mdata_count{YType::uint32, "nsr-nbr-qad-mdata-count"},
    nsr_nbr_qad_qid{YType::uint32, "nsr-nbr-qad-qid"},
    nsr_nbr_seq_no{YType::uint32, "nsr-nbr-seq-no"},
    nsr_nodeid{YType::uint32, "nsr-nodeid"},
    nsr_peer_nodeid{YType::uint32, "nsr-peer-nodeid"},
    nsr_peer_version{YType::uint32, "nsr-peer-version"},
    nsr_rev{YType::int32, "nsr-rev"},
    nsr_tmr_quant{YType::int32, "nsr-tmr-quant"},
    nsr_version{YType::uint32, "nsr-version"}
    	,
    nsr_rtr_thd_sched(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::NsrRtrThdSched>())
	,nsr_thd_sched(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::NsrThdSched>())
{
    nsr_rtr_thd_sched->parent = this;
    children["nsr-rtr-thd-sched"] = nsr_rtr_thd_sched;

    nsr_thd_sched->parent = this;
    children["nsr-thd-sched"] = nsr_thd_sched;

    yang_name = "issu-stats"; yang_parent_name = "statistics";
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::~IssuStats()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::has_data() const
{
    return nsr_conn_to_active_attempts.is_set
	|| nsr_conn_to_active_closes.is_set
	|| nsr_conn_to_active_errors.is_set
	|| nsr_conn_to_active_fails.is_set
	|| nsr_conn_to_active_opens.is_set
	|| nsr_fsm_state.is_set
	|| nsr_intf_seq_no.is_set
	|| nsr_lsa_init_sync_pend_count.is_set
	|| nsr_lsa_qad_mdata_count.is_set
	|| nsr_lsa_qad_qid.is_set
	|| nsr_mtu.is_set
	|| nsr_nbr_init_sync_pend_count.is_set
	|| nsr_nbr_qad_mdata_count.is_set
	|| nsr_nbr_qad_qid.is_set
	|| nsr_nbr_seq_no.is_set
	|| nsr_nodeid.is_set
	|| nsr_peer_nodeid.is_set
	|| nsr_peer_version.is_set
	|| nsr_rev.is_set
	|| nsr_tmr_quant.is_set
	|| nsr_version.is_set
	|| (nsr_rtr_thd_sched !=  nullptr && nsr_rtr_thd_sched->has_data())
	|| (nsr_thd_sched !=  nullptr && nsr_thd_sched->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::has_operation() const
{
    return is_set(operation)
	|| is_set(nsr_conn_to_active_attempts.operation)
	|| is_set(nsr_conn_to_active_closes.operation)
	|| is_set(nsr_conn_to_active_errors.operation)
	|| is_set(nsr_conn_to_active_fails.operation)
	|| is_set(nsr_conn_to_active_opens.operation)
	|| is_set(nsr_fsm_state.operation)
	|| is_set(nsr_intf_seq_no.operation)
	|| is_set(nsr_lsa_init_sync_pend_count.operation)
	|| is_set(nsr_lsa_qad_mdata_count.operation)
	|| is_set(nsr_lsa_qad_qid.operation)
	|| is_set(nsr_mtu.operation)
	|| is_set(nsr_nbr_init_sync_pend_count.operation)
	|| is_set(nsr_nbr_qad_mdata_count.operation)
	|| is_set(nsr_nbr_qad_qid.operation)
	|| is_set(nsr_nbr_seq_no.operation)
	|| is_set(nsr_nodeid.operation)
	|| is_set(nsr_peer_nodeid.operation)
	|| is_set(nsr_peer_version.operation)
	|| is_set(nsr_rev.operation)
	|| is_set(nsr_tmr_quant.operation)
	|| is_set(nsr_version.operation)
	|| (nsr_rtr_thd_sched !=  nullptr && nsr_rtr_thd_sched->has_operation())
	|| (nsr_thd_sched !=  nullptr && nsr_thd_sched->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "issu-stats";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IssuStats' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nsr_conn_to_active_attempts.is_set || is_set(nsr_conn_to_active_attempts.operation)) leaf_name_data.push_back(nsr_conn_to_active_attempts.get_name_leafdata());
    if (nsr_conn_to_active_closes.is_set || is_set(nsr_conn_to_active_closes.operation)) leaf_name_data.push_back(nsr_conn_to_active_closes.get_name_leafdata());
    if (nsr_conn_to_active_errors.is_set || is_set(nsr_conn_to_active_errors.operation)) leaf_name_data.push_back(nsr_conn_to_active_errors.get_name_leafdata());
    if (nsr_conn_to_active_fails.is_set || is_set(nsr_conn_to_active_fails.operation)) leaf_name_data.push_back(nsr_conn_to_active_fails.get_name_leafdata());
    if (nsr_conn_to_active_opens.is_set || is_set(nsr_conn_to_active_opens.operation)) leaf_name_data.push_back(nsr_conn_to_active_opens.get_name_leafdata());
    if (nsr_fsm_state.is_set || is_set(nsr_fsm_state.operation)) leaf_name_data.push_back(nsr_fsm_state.get_name_leafdata());
    if (nsr_intf_seq_no.is_set || is_set(nsr_intf_seq_no.operation)) leaf_name_data.push_back(nsr_intf_seq_no.get_name_leafdata());
    if (nsr_lsa_init_sync_pend_count.is_set || is_set(nsr_lsa_init_sync_pend_count.operation)) leaf_name_data.push_back(nsr_lsa_init_sync_pend_count.get_name_leafdata());
    if (nsr_lsa_qad_mdata_count.is_set || is_set(nsr_lsa_qad_mdata_count.operation)) leaf_name_data.push_back(nsr_lsa_qad_mdata_count.get_name_leafdata());
    if (nsr_lsa_qad_qid.is_set || is_set(nsr_lsa_qad_qid.operation)) leaf_name_data.push_back(nsr_lsa_qad_qid.get_name_leafdata());
    if (nsr_mtu.is_set || is_set(nsr_mtu.operation)) leaf_name_data.push_back(nsr_mtu.get_name_leafdata());
    if (nsr_nbr_init_sync_pend_count.is_set || is_set(nsr_nbr_init_sync_pend_count.operation)) leaf_name_data.push_back(nsr_nbr_init_sync_pend_count.get_name_leafdata());
    if (nsr_nbr_qad_mdata_count.is_set || is_set(nsr_nbr_qad_mdata_count.operation)) leaf_name_data.push_back(nsr_nbr_qad_mdata_count.get_name_leafdata());
    if (nsr_nbr_qad_qid.is_set || is_set(nsr_nbr_qad_qid.operation)) leaf_name_data.push_back(nsr_nbr_qad_qid.get_name_leafdata());
    if (nsr_nbr_seq_no.is_set || is_set(nsr_nbr_seq_no.operation)) leaf_name_data.push_back(nsr_nbr_seq_no.get_name_leafdata());
    if (nsr_nodeid.is_set || is_set(nsr_nodeid.operation)) leaf_name_data.push_back(nsr_nodeid.get_name_leafdata());
    if (nsr_peer_nodeid.is_set || is_set(nsr_peer_nodeid.operation)) leaf_name_data.push_back(nsr_peer_nodeid.get_name_leafdata());
    if (nsr_peer_version.is_set || is_set(nsr_peer_version.operation)) leaf_name_data.push_back(nsr_peer_version.get_name_leafdata());
    if (nsr_rev.is_set || is_set(nsr_rev.operation)) leaf_name_data.push_back(nsr_rev.get_name_leafdata());
    if (nsr_tmr_quant.is_set || is_set(nsr_tmr_quant.operation)) leaf_name_data.push_back(nsr_tmr_quant.get_name_leafdata());
    if (nsr_version.is_set || is_set(nsr_version.operation)) leaf_name_data.push_back(nsr_version.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "nsr-rtr-thd-sched")
    {
        if(nsr_rtr_thd_sched != nullptr)
        {
            children["nsr-rtr-thd-sched"] = nsr_rtr_thd_sched;
        }
        else
        {
            nsr_rtr_thd_sched = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::NsrRtrThdSched>();
            nsr_rtr_thd_sched->parent = this;
            children["nsr-rtr-thd-sched"] = nsr_rtr_thd_sched;
        }
        return children.at("nsr-rtr-thd-sched");
    }

    if(child_yang_name == "nsr-thd-sched")
    {
        if(nsr_thd_sched != nullptr)
        {
            children["nsr-thd-sched"] = nsr_thd_sched;
        }
        else
        {
            nsr_thd_sched = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::NsrThdSched>();
            nsr_thd_sched->parent = this;
            children["nsr-thd-sched"] = nsr_thd_sched;
        }
        return children.at("nsr-thd-sched");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::get_children()
{
    if(children.find("nsr-rtr-thd-sched") == children.end())
    {
        if(nsr_rtr_thd_sched != nullptr)
        {
            children["nsr-rtr-thd-sched"] = nsr_rtr_thd_sched;
        }
    }

    if(children.find("nsr-thd-sched") == children.end())
    {
        if(nsr_thd_sched != nullptr)
        {
            children["nsr-thd-sched"] = nsr_thd_sched;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nsr-conn-to-active-attempts")
    {
        nsr_conn_to_active_attempts = value;
    }
    if(value_path == "nsr-conn-to-active-closes")
    {
        nsr_conn_to_active_closes = value;
    }
    if(value_path == "nsr-conn-to-active-errors")
    {
        nsr_conn_to_active_errors = value;
    }
    if(value_path == "nsr-conn-to-active-fails")
    {
        nsr_conn_to_active_fails = value;
    }
    if(value_path == "nsr-conn-to-active-opens")
    {
        nsr_conn_to_active_opens = value;
    }
    if(value_path == "nsr-fsm-state")
    {
        nsr_fsm_state = value;
    }
    if(value_path == "nsr-intf-seq-no")
    {
        nsr_intf_seq_no = value;
    }
    if(value_path == "nsr-lsa-init-sync-pend-count")
    {
        nsr_lsa_init_sync_pend_count = value;
    }
    if(value_path == "nsr-lsa-qad-mdata-count")
    {
        nsr_lsa_qad_mdata_count = value;
    }
    if(value_path == "nsr-lsa-qad-qid")
    {
        nsr_lsa_qad_qid = value;
    }
    if(value_path == "nsr-mtu")
    {
        nsr_mtu = value;
    }
    if(value_path == "nsr-nbr-init-sync-pend-count")
    {
        nsr_nbr_init_sync_pend_count = value;
    }
    if(value_path == "nsr-nbr-qad-mdata-count")
    {
        nsr_nbr_qad_mdata_count = value;
    }
    if(value_path == "nsr-nbr-qad-qid")
    {
        nsr_nbr_qad_qid = value;
    }
    if(value_path == "nsr-nbr-seq-no")
    {
        nsr_nbr_seq_no = value;
    }
    if(value_path == "nsr-nodeid")
    {
        nsr_nodeid = value;
    }
    if(value_path == "nsr-peer-nodeid")
    {
        nsr_peer_nodeid = value;
    }
    if(value_path == "nsr-peer-version")
    {
        nsr_peer_version = value;
    }
    if(value_path == "nsr-rev")
    {
        nsr_rev = value;
    }
    if(value_path == "nsr-tmr-quant")
    {
        nsr_tmr_quant = value;
    }
    if(value_path == "nsr-version")
    {
        nsr_version = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::NsrThdSched::NsrThdSched()
    :
    nsr_bad_pulses_rx{YType::uint64, "nsr-bad-pulses-rx"},
    nsr_events_in_q{YType::uint32, "nsr-events-in-q"},
    nsr_events_rx{YType::uint64, "nsr-events-rx"},
    nsr_events_tx{YType::uint64, "nsr-events-tx"},
    nsr_good_pulses_rx{YType::uint64, "nsr-good-pulses-rx"},
    nsr_pulse_quant{YType::int32, "nsr-pulse-quant"},
    nsr_pulse_tx_fails{YType::uint64, "nsr-pulse-tx-fails"},
    nsr_pulses_tx{YType::uint64, "nsr-pulses-tx"}
{
    yang_name = "nsr-thd-sched"; yang_parent_name = "issu-stats";
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::NsrThdSched::~NsrThdSched()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::NsrThdSched::has_data() const
{
    for (std::size_t index=0; index<nsr_pri.size(); index++)
    {
        if(nsr_pri[index]->has_data())
            return true;
    }
    return nsr_bad_pulses_rx.is_set
	|| nsr_events_in_q.is_set
	|| nsr_events_rx.is_set
	|| nsr_events_tx.is_set
	|| nsr_good_pulses_rx.is_set
	|| nsr_pulse_quant.is_set
	|| nsr_pulse_tx_fails.is_set
	|| nsr_pulses_tx.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::NsrThdSched::has_operation() const
{
    for (std::size_t index=0; index<nsr_pri.size(); index++)
    {
        if(nsr_pri[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(nsr_bad_pulses_rx.operation)
	|| is_set(nsr_events_in_q.operation)
	|| is_set(nsr_events_rx.operation)
	|| is_set(nsr_events_tx.operation)
	|| is_set(nsr_good_pulses_rx.operation)
	|| is_set(nsr_pulse_quant.operation)
	|| is_set(nsr_pulse_tx_fails.operation)
	|| is_set(nsr_pulses_tx.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::NsrThdSched::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsr-thd-sched";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::NsrThdSched::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NsrThdSched' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nsr_bad_pulses_rx.is_set || is_set(nsr_bad_pulses_rx.operation)) leaf_name_data.push_back(nsr_bad_pulses_rx.get_name_leafdata());
    if (nsr_events_in_q.is_set || is_set(nsr_events_in_q.operation)) leaf_name_data.push_back(nsr_events_in_q.get_name_leafdata());
    if (nsr_events_rx.is_set || is_set(nsr_events_rx.operation)) leaf_name_data.push_back(nsr_events_rx.get_name_leafdata());
    if (nsr_events_tx.is_set || is_set(nsr_events_tx.operation)) leaf_name_data.push_back(nsr_events_tx.get_name_leafdata());
    if (nsr_good_pulses_rx.is_set || is_set(nsr_good_pulses_rx.operation)) leaf_name_data.push_back(nsr_good_pulses_rx.get_name_leafdata());
    if (nsr_pulse_quant.is_set || is_set(nsr_pulse_quant.operation)) leaf_name_data.push_back(nsr_pulse_quant.get_name_leafdata());
    if (nsr_pulse_tx_fails.is_set || is_set(nsr_pulse_tx_fails.operation)) leaf_name_data.push_back(nsr_pulse_tx_fails.get_name_leafdata());
    if (nsr_pulses_tx.is_set || is_set(nsr_pulses_tx.operation)) leaf_name_data.push_back(nsr_pulses_tx.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::NsrThdSched::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "nsr-pri")
    {
        for(auto const & c : nsr_pri)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::NsrThdSched::NsrPri>();
        c->parent = this;
        nsr_pri.push_back(std::move(c));
        children[segment_path] = nsr_pri.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::NsrThdSched::get_children()
{
    for (auto const & c : nsr_pri)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::NsrThdSched::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nsr-bad-pulses-rx")
    {
        nsr_bad_pulses_rx = value;
    }
    if(value_path == "nsr-events-in-q")
    {
        nsr_events_in_q = value;
    }
    if(value_path == "nsr-events-rx")
    {
        nsr_events_rx = value;
    }
    if(value_path == "nsr-events-tx")
    {
        nsr_events_tx = value;
    }
    if(value_path == "nsr-good-pulses-rx")
    {
        nsr_good_pulses_rx = value;
    }
    if(value_path == "nsr-pulse-quant")
    {
        nsr_pulse_quant = value;
    }
    if(value_path == "nsr-pulse-tx-fails")
    {
        nsr_pulse_tx_fails = value;
    }
    if(value_path == "nsr-pulses-tx")
    {
        nsr_pulses_tx = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::NsrThdSched::NsrPri::NsrPri()
    :
    nsr_sched_enq_fails{YType::uint64, "nsr-sched-enq-fails"},
    nsr_sched_evs_deqd{YType::uint64, "nsr-sched-evs-deqd"},
    nsr_sched_evs_in_q{YType::uint16, "nsr-sched-evs-in-q"},
    nsr_sched_evs_qd{YType::uint64, "nsr-sched-evs-qd"},
    nsr_sched_max_evs{YType::uint16, "nsr-sched-max-evs"},
    nsr_sched_peak_q_len{YType::uint16, "nsr-sched-peak-q-len"},
    nsr_sched_pri{YType::uint32, "nsr-sched-pri"},
    nsr_sched_quant{YType::uint8, "nsr-sched-quant"},
    nsr_sched_remain_quant{YType::uint8, "nsr-sched-remain-quant"}
{
    yang_name = "nsr-pri"; yang_parent_name = "nsr-thd-sched";
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::NsrThdSched::NsrPri::~NsrPri()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::NsrThdSched::NsrPri::has_data() const
{
    return nsr_sched_enq_fails.is_set
	|| nsr_sched_evs_deqd.is_set
	|| nsr_sched_evs_in_q.is_set
	|| nsr_sched_evs_qd.is_set
	|| nsr_sched_max_evs.is_set
	|| nsr_sched_peak_q_len.is_set
	|| nsr_sched_pri.is_set
	|| nsr_sched_quant.is_set
	|| nsr_sched_remain_quant.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::NsrThdSched::NsrPri::has_operation() const
{
    return is_set(operation)
	|| is_set(nsr_sched_enq_fails.operation)
	|| is_set(nsr_sched_evs_deqd.operation)
	|| is_set(nsr_sched_evs_in_q.operation)
	|| is_set(nsr_sched_evs_qd.operation)
	|| is_set(nsr_sched_max_evs.operation)
	|| is_set(nsr_sched_peak_q_len.operation)
	|| is_set(nsr_sched_pri.operation)
	|| is_set(nsr_sched_quant.operation)
	|| is_set(nsr_sched_remain_quant.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::NsrThdSched::NsrPri::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsr-pri";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::NsrThdSched::NsrPri::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NsrPri' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nsr_sched_enq_fails.is_set || is_set(nsr_sched_enq_fails.operation)) leaf_name_data.push_back(nsr_sched_enq_fails.get_name_leafdata());
    if (nsr_sched_evs_deqd.is_set || is_set(nsr_sched_evs_deqd.operation)) leaf_name_data.push_back(nsr_sched_evs_deqd.get_name_leafdata());
    if (nsr_sched_evs_in_q.is_set || is_set(nsr_sched_evs_in_q.operation)) leaf_name_data.push_back(nsr_sched_evs_in_q.get_name_leafdata());
    if (nsr_sched_evs_qd.is_set || is_set(nsr_sched_evs_qd.operation)) leaf_name_data.push_back(nsr_sched_evs_qd.get_name_leafdata());
    if (nsr_sched_max_evs.is_set || is_set(nsr_sched_max_evs.operation)) leaf_name_data.push_back(nsr_sched_max_evs.get_name_leafdata());
    if (nsr_sched_peak_q_len.is_set || is_set(nsr_sched_peak_q_len.operation)) leaf_name_data.push_back(nsr_sched_peak_q_len.get_name_leafdata());
    if (nsr_sched_pri.is_set || is_set(nsr_sched_pri.operation)) leaf_name_data.push_back(nsr_sched_pri.get_name_leafdata());
    if (nsr_sched_quant.is_set || is_set(nsr_sched_quant.operation)) leaf_name_data.push_back(nsr_sched_quant.get_name_leafdata());
    if (nsr_sched_remain_quant.is_set || is_set(nsr_sched_remain_quant.operation)) leaf_name_data.push_back(nsr_sched_remain_quant.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::NsrThdSched::NsrPri::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::NsrThdSched::NsrPri::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::NsrThdSched::NsrPri::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nsr-sched-enq-fails")
    {
        nsr_sched_enq_fails = value;
    }
    if(value_path == "nsr-sched-evs-deqd")
    {
        nsr_sched_evs_deqd = value;
    }
    if(value_path == "nsr-sched-evs-in-q")
    {
        nsr_sched_evs_in_q = value;
    }
    if(value_path == "nsr-sched-evs-qd")
    {
        nsr_sched_evs_qd = value;
    }
    if(value_path == "nsr-sched-max-evs")
    {
        nsr_sched_max_evs = value;
    }
    if(value_path == "nsr-sched-peak-q-len")
    {
        nsr_sched_peak_q_len = value;
    }
    if(value_path == "nsr-sched-pri")
    {
        nsr_sched_pri = value;
    }
    if(value_path == "nsr-sched-quant")
    {
        nsr_sched_quant = value;
    }
    if(value_path == "nsr-sched-remain-quant")
    {
        nsr_sched_remain_quant = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::NsrRtrThdSched::NsrRtrThdSched()
    :
    nsr_bad_pulses_rx{YType::uint64, "nsr-bad-pulses-rx"},
    nsr_events_in_q{YType::uint32, "nsr-events-in-q"},
    nsr_events_rx{YType::uint64, "nsr-events-rx"},
    nsr_events_tx{YType::uint64, "nsr-events-tx"},
    nsr_good_pulses_rx{YType::uint64, "nsr-good-pulses-rx"},
    nsr_pulse_quant{YType::int32, "nsr-pulse-quant"},
    nsr_pulse_tx_fails{YType::uint64, "nsr-pulse-tx-fails"},
    nsr_pulses_tx{YType::uint64, "nsr-pulses-tx"}
{
    yang_name = "nsr-rtr-thd-sched"; yang_parent_name = "issu-stats";
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::NsrRtrThdSched::~NsrRtrThdSched()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::NsrRtrThdSched::has_data() const
{
    for (std::size_t index=0; index<nsr_pri.size(); index++)
    {
        if(nsr_pri[index]->has_data())
            return true;
    }
    return nsr_bad_pulses_rx.is_set
	|| nsr_events_in_q.is_set
	|| nsr_events_rx.is_set
	|| nsr_events_tx.is_set
	|| nsr_good_pulses_rx.is_set
	|| nsr_pulse_quant.is_set
	|| nsr_pulse_tx_fails.is_set
	|| nsr_pulses_tx.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::NsrRtrThdSched::has_operation() const
{
    for (std::size_t index=0; index<nsr_pri.size(); index++)
    {
        if(nsr_pri[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(nsr_bad_pulses_rx.operation)
	|| is_set(nsr_events_in_q.operation)
	|| is_set(nsr_events_rx.operation)
	|| is_set(nsr_events_tx.operation)
	|| is_set(nsr_good_pulses_rx.operation)
	|| is_set(nsr_pulse_quant.operation)
	|| is_set(nsr_pulse_tx_fails.operation)
	|| is_set(nsr_pulses_tx.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::NsrRtrThdSched::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsr-rtr-thd-sched";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::NsrRtrThdSched::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NsrRtrThdSched' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nsr_bad_pulses_rx.is_set || is_set(nsr_bad_pulses_rx.operation)) leaf_name_data.push_back(nsr_bad_pulses_rx.get_name_leafdata());
    if (nsr_events_in_q.is_set || is_set(nsr_events_in_q.operation)) leaf_name_data.push_back(nsr_events_in_q.get_name_leafdata());
    if (nsr_events_rx.is_set || is_set(nsr_events_rx.operation)) leaf_name_data.push_back(nsr_events_rx.get_name_leafdata());
    if (nsr_events_tx.is_set || is_set(nsr_events_tx.operation)) leaf_name_data.push_back(nsr_events_tx.get_name_leafdata());
    if (nsr_good_pulses_rx.is_set || is_set(nsr_good_pulses_rx.operation)) leaf_name_data.push_back(nsr_good_pulses_rx.get_name_leafdata());
    if (nsr_pulse_quant.is_set || is_set(nsr_pulse_quant.operation)) leaf_name_data.push_back(nsr_pulse_quant.get_name_leafdata());
    if (nsr_pulse_tx_fails.is_set || is_set(nsr_pulse_tx_fails.operation)) leaf_name_data.push_back(nsr_pulse_tx_fails.get_name_leafdata());
    if (nsr_pulses_tx.is_set || is_set(nsr_pulses_tx.operation)) leaf_name_data.push_back(nsr_pulses_tx.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::NsrRtrThdSched::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "nsr-pri")
    {
        for(auto const & c : nsr_pri)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::NsrRtrThdSched::NsrPri>();
        c->parent = this;
        nsr_pri.push_back(std::move(c));
        children[segment_path] = nsr_pri.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::NsrRtrThdSched::get_children()
{
    for (auto const & c : nsr_pri)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::NsrRtrThdSched::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nsr-bad-pulses-rx")
    {
        nsr_bad_pulses_rx = value;
    }
    if(value_path == "nsr-events-in-q")
    {
        nsr_events_in_q = value;
    }
    if(value_path == "nsr-events-rx")
    {
        nsr_events_rx = value;
    }
    if(value_path == "nsr-events-tx")
    {
        nsr_events_tx = value;
    }
    if(value_path == "nsr-good-pulses-rx")
    {
        nsr_good_pulses_rx = value;
    }
    if(value_path == "nsr-pulse-quant")
    {
        nsr_pulse_quant = value;
    }
    if(value_path == "nsr-pulse-tx-fails")
    {
        nsr_pulse_tx_fails = value;
    }
    if(value_path == "nsr-pulses-tx")
    {
        nsr_pulses_tx = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::NsrRtrThdSched::NsrPri::NsrPri()
    :
    nsr_sched_enq_fails{YType::uint64, "nsr-sched-enq-fails"},
    nsr_sched_evs_deqd{YType::uint64, "nsr-sched-evs-deqd"},
    nsr_sched_evs_in_q{YType::uint16, "nsr-sched-evs-in-q"},
    nsr_sched_evs_qd{YType::uint64, "nsr-sched-evs-qd"},
    nsr_sched_max_evs{YType::uint16, "nsr-sched-max-evs"},
    nsr_sched_peak_q_len{YType::uint16, "nsr-sched-peak-q-len"},
    nsr_sched_pri{YType::uint32, "nsr-sched-pri"},
    nsr_sched_quant{YType::uint8, "nsr-sched-quant"},
    nsr_sched_remain_quant{YType::uint8, "nsr-sched-remain-quant"}
{
    yang_name = "nsr-pri"; yang_parent_name = "nsr-rtr-thd-sched";
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::NsrRtrThdSched::NsrPri::~NsrPri()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::NsrRtrThdSched::NsrPri::has_data() const
{
    return nsr_sched_enq_fails.is_set
	|| nsr_sched_evs_deqd.is_set
	|| nsr_sched_evs_in_q.is_set
	|| nsr_sched_evs_qd.is_set
	|| nsr_sched_max_evs.is_set
	|| nsr_sched_peak_q_len.is_set
	|| nsr_sched_pri.is_set
	|| nsr_sched_quant.is_set
	|| nsr_sched_remain_quant.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::NsrRtrThdSched::NsrPri::has_operation() const
{
    return is_set(operation)
	|| is_set(nsr_sched_enq_fails.operation)
	|| is_set(nsr_sched_evs_deqd.operation)
	|| is_set(nsr_sched_evs_in_q.operation)
	|| is_set(nsr_sched_evs_qd.operation)
	|| is_set(nsr_sched_max_evs.operation)
	|| is_set(nsr_sched_peak_q_len.operation)
	|| is_set(nsr_sched_pri.operation)
	|| is_set(nsr_sched_quant.operation)
	|| is_set(nsr_sched_remain_quant.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::NsrRtrThdSched::NsrPri::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsr-pri";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::NsrRtrThdSched::NsrPri::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NsrPri' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nsr_sched_enq_fails.is_set || is_set(nsr_sched_enq_fails.operation)) leaf_name_data.push_back(nsr_sched_enq_fails.get_name_leafdata());
    if (nsr_sched_evs_deqd.is_set || is_set(nsr_sched_evs_deqd.operation)) leaf_name_data.push_back(nsr_sched_evs_deqd.get_name_leafdata());
    if (nsr_sched_evs_in_q.is_set || is_set(nsr_sched_evs_in_q.operation)) leaf_name_data.push_back(nsr_sched_evs_in_q.get_name_leafdata());
    if (nsr_sched_evs_qd.is_set || is_set(nsr_sched_evs_qd.operation)) leaf_name_data.push_back(nsr_sched_evs_qd.get_name_leafdata());
    if (nsr_sched_max_evs.is_set || is_set(nsr_sched_max_evs.operation)) leaf_name_data.push_back(nsr_sched_max_evs.get_name_leafdata());
    if (nsr_sched_peak_q_len.is_set || is_set(nsr_sched_peak_q_len.operation)) leaf_name_data.push_back(nsr_sched_peak_q_len.get_name_leafdata());
    if (nsr_sched_pri.is_set || is_set(nsr_sched_pri.operation)) leaf_name_data.push_back(nsr_sched_pri.get_name_leafdata());
    if (nsr_sched_quant.is_set || is_set(nsr_sched_quant.operation)) leaf_name_data.push_back(nsr_sched_quant.get_name_leafdata());
    if (nsr_sched_remain_quant.is_set || is_set(nsr_sched_remain_quant.operation)) leaf_name_data.push_back(nsr_sched_remain_quant.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::NsrRtrThdSched::NsrPri::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::NsrRtrThdSched::NsrPri::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::NsrRtrThdSched::NsrPri::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nsr-sched-enq-fails")
    {
        nsr_sched_enq_fails = value;
    }
    if(value_path == "nsr-sched-evs-deqd")
    {
        nsr_sched_evs_deqd = value;
    }
    if(value_path == "nsr-sched-evs-in-q")
    {
        nsr_sched_evs_in_q = value;
    }
    if(value_path == "nsr-sched-evs-qd")
    {
        nsr_sched_evs_qd = value;
    }
    if(value_path == "nsr-sched-max-evs")
    {
        nsr_sched_max_evs = value;
    }
    if(value_path == "nsr-sched-peak-q-len")
    {
        nsr_sched_peak_q_len = value;
    }
    if(value_path == "nsr-sched-pri")
    {
        nsr_sched_pri = value;
    }
    if(value_path == "nsr-sched-quant")
    {
        nsr_sched_quant = value;
    }
    if(value_path == "nsr-sched-remain-quant")
    {
        nsr_sched_remain_quant = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::RibThreadStats()
    :
    internalwq(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::Internalwq>())
{
    internalwq->parent = this;
    children["internalwq"] = internalwq;

    yang_name = "rib-thread-stats"; yang_parent_name = "statistics";
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::~RibThreadStats()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::has_data() const
{
    for (std::size_t index=0; index<ribqueue.size(); index++)
    {
        if(ribqueue[index]->has_data())
            return true;
    }
    return (internalwq !=  nullptr && internalwq->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::has_operation() const
{
    for (std::size_t index=0; index<ribqueue.size(); index++)
    {
        if(ribqueue[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| (internalwq !=  nullptr && internalwq->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rib-thread-stats";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RibThreadStats' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "internalwq")
    {
        if(internalwq != nullptr)
        {
            children["internalwq"] = internalwq;
        }
        else
        {
            internalwq = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::Internalwq>();
            internalwq->parent = this;
            children["internalwq"] = internalwq;
        }
        return children.at("internalwq");
    }

    if(child_yang_name == "ribqueue")
    {
        for(auto const & c : ribqueue)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::Ribqueue>();
        c->parent = this;
        ribqueue.push_back(std::move(c));
        children[segment_path] = ribqueue.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::get_children()
{
    if(children.find("internalwq") == children.end())
    {
        if(internalwq != nullptr)
        {
            children["internalwq"] = internalwq;
        }
    }

    for (auto const & c : ribqueue)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::Internalwq::Internalwq()
    :
    priority_level{YType::str, "priority-level"},
    rib_base_clock{YType::uint64, "rib-base-clock"},
    rib_dequeue_errs{YType::uint32, "rib-dequeue-errs"},
    rib_drop_after{YType::uint32, "rib-drop-after"},
    rib_drop_before{YType::uint32, "rib-drop-before"},
    rib_drop_conn{YType::uint32, "rib-drop-conn"},
    rib_empty_batches{YType::uint32, "rib-empty-batches"},
    rib_pfx_limit_errs{YType::uint32, "rib-pfx-limit-errs"},
    rib_pkts_sent{YType::uint32, "rib-pkts-sent"},
    rib_queue_errs{YType::uint32, "rib-queue-errs"},
    rib_send_errs{YType::uint32, "rib-send-errs"},
    rib_signals{YType::uint32, "rib-signals"},
    rib_table_not_created{YType::uint32, "rib-table-not-created"},
    rib_version{YType::uint32, "rib-version"},
    wq_dqtime{YType::uint64, "wq-dqtime"},
    wq_len_cur{YType::int32, "wq-len-cur"},
    wq_len_max{YType::int32, "wq-len-max"},
    wq_thread_active{YType::boolean, "wq-thread-active"},
    wq_total_dequeued{YType::uint32, "wq-total-dequeued"},
    wq_total_queued{YType::uint32, "wq-total-queued"},
    wqe_qtime{YType::uint64, "wqe-qtime"}
    	,
    rib_base_time(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::Internalwq::RibBaseTime>())
{
    rib_base_time->parent = this;
    children["rib-base-time"] = rib_base_time;

    yang_name = "internalwq"; yang_parent_name = "rib-thread-stats";
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::Internalwq::~Internalwq()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::Internalwq::has_data() const
{
    return priority_level.is_set
	|| rib_base_clock.is_set
	|| rib_dequeue_errs.is_set
	|| rib_drop_after.is_set
	|| rib_drop_before.is_set
	|| rib_drop_conn.is_set
	|| rib_empty_batches.is_set
	|| rib_pfx_limit_errs.is_set
	|| rib_pkts_sent.is_set
	|| rib_queue_errs.is_set
	|| rib_send_errs.is_set
	|| rib_signals.is_set
	|| rib_table_not_created.is_set
	|| rib_version.is_set
	|| wq_dqtime.is_set
	|| wq_len_cur.is_set
	|| wq_len_max.is_set
	|| wq_thread_active.is_set
	|| wq_total_dequeued.is_set
	|| wq_total_queued.is_set
	|| wqe_qtime.is_set
	|| (rib_base_time !=  nullptr && rib_base_time->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::Internalwq::has_operation() const
{
    return is_set(operation)
	|| is_set(priority_level.operation)
	|| is_set(rib_base_clock.operation)
	|| is_set(rib_dequeue_errs.operation)
	|| is_set(rib_drop_after.operation)
	|| is_set(rib_drop_before.operation)
	|| is_set(rib_drop_conn.operation)
	|| is_set(rib_empty_batches.operation)
	|| is_set(rib_pfx_limit_errs.operation)
	|| is_set(rib_pkts_sent.operation)
	|| is_set(rib_queue_errs.operation)
	|| is_set(rib_send_errs.operation)
	|| is_set(rib_signals.operation)
	|| is_set(rib_table_not_created.operation)
	|| is_set(rib_version.operation)
	|| is_set(wq_dqtime.operation)
	|| is_set(wq_len_cur.operation)
	|| is_set(wq_len_max.operation)
	|| is_set(wq_thread_active.operation)
	|| is_set(wq_total_dequeued.operation)
	|| is_set(wq_total_queued.operation)
	|| is_set(wqe_qtime.operation)
	|| (rib_base_time !=  nullptr && rib_base_time->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::Internalwq::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "internalwq";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::Internalwq::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Internalwq' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority_level.is_set || is_set(priority_level.operation)) leaf_name_data.push_back(priority_level.get_name_leafdata());
    if (rib_base_clock.is_set || is_set(rib_base_clock.operation)) leaf_name_data.push_back(rib_base_clock.get_name_leafdata());
    if (rib_dequeue_errs.is_set || is_set(rib_dequeue_errs.operation)) leaf_name_data.push_back(rib_dequeue_errs.get_name_leafdata());
    if (rib_drop_after.is_set || is_set(rib_drop_after.operation)) leaf_name_data.push_back(rib_drop_after.get_name_leafdata());
    if (rib_drop_before.is_set || is_set(rib_drop_before.operation)) leaf_name_data.push_back(rib_drop_before.get_name_leafdata());
    if (rib_drop_conn.is_set || is_set(rib_drop_conn.operation)) leaf_name_data.push_back(rib_drop_conn.get_name_leafdata());
    if (rib_empty_batches.is_set || is_set(rib_empty_batches.operation)) leaf_name_data.push_back(rib_empty_batches.get_name_leafdata());
    if (rib_pfx_limit_errs.is_set || is_set(rib_pfx_limit_errs.operation)) leaf_name_data.push_back(rib_pfx_limit_errs.get_name_leafdata());
    if (rib_pkts_sent.is_set || is_set(rib_pkts_sent.operation)) leaf_name_data.push_back(rib_pkts_sent.get_name_leafdata());
    if (rib_queue_errs.is_set || is_set(rib_queue_errs.operation)) leaf_name_data.push_back(rib_queue_errs.get_name_leafdata());
    if (rib_send_errs.is_set || is_set(rib_send_errs.operation)) leaf_name_data.push_back(rib_send_errs.get_name_leafdata());
    if (rib_signals.is_set || is_set(rib_signals.operation)) leaf_name_data.push_back(rib_signals.get_name_leafdata());
    if (rib_table_not_created.is_set || is_set(rib_table_not_created.operation)) leaf_name_data.push_back(rib_table_not_created.get_name_leafdata());
    if (rib_version.is_set || is_set(rib_version.operation)) leaf_name_data.push_back(rib_version.get_name_leafdata());
    if (wq_dqtime.is_set || is_set(wq_dqtime.operation)) leaf_name_data.push_back(wq_dqtime.get_name_leafdata());
    if (wq_len_cur.is_set || is_set(wq_len_cur.operation)) leaf_name_data.push_back(wq_len_cur.get_name_leafdata());
    if (wq_len_max.is_set || is_set(wq_len_max.operation)) leaf_name_data.push_back(wq_len_max.get_name_leafdata());
    if (wq_thread_active.is_set || is_set(wq_thread_active.operation)) leaf_name_data.push_back(wq_thread_active.get_name_leafdata());
    if (wq_total_dequeued.is_set || is_set(wq_total_dequeued.operation)) leaf_name_data.push_back(wq_total_dequeued.get_name_leafdata());
    if (wq_total_queued.is_set || is_set(wq_total_queued.operation)) leaf_name_data.push_back(wq_total_queued.get_name_leafdata());
    if (wqe_qtime.is_set || is_set(wqe_qtime.operation)) leaf_name_data.push_back(wqe_qtime.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::Internalwq::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "rib-base-time")
    {
        if(rib_base_time != nullptr)
        {
            children["rib-base-time"] = rib_base_time;
        }
        else
        {
            rib_base_time = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::Internalwq::RibBaseTime>();
            rib_base_time->parent = this;
            children["rib-base-time"] = rib_base_time;
        }
        return children.at("rib-base-time");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::Internalwq::get_children()
{
    if(children.find("rib-base-time") == children.end())
    {
        if(rib_base_time != nullptr)
        {
            children["rib-base-time"] = rib_base_time;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::Internalwq::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "priority-level")
    {
        priority_level = value;
    }
    if(value_path == "rib-base-clock")
    {
        rib_base_clock = value;
    }
    if(value_path == "rib-dequeue-errs")
    {
        rib_dequeue_errs = value;
    }
    if(value_path == "rib-drop-after")
    {
        rib_drop_after = value;
    }
    if(value_path == "rib-drop-before")
    {
        rib_drop_before = value;
    }
    if(value_path == "rib-drop-conn")
    {
        rib_drop_conn = value;
    }
    if(value_path == "rib-empty-batches")
    {
        rib_empty_batches = value;
    }
    if(value_path == "rib-pfx-limit-errs")
    {
        rib_pfx_limit_errs = value;
    }
    if(value_path == "rib-pkts-sent")
    {
        rib_pkts_sent = value;
    }
    if(value_path == "rib-queue-errs")
    {
        rib_queue_errs = value;
    }
    if(value_path == "rib-send-errs")
    {
        rib_send_errs = value;
    }
    if(value_path == "rib-signals")
    {
        rib_signals = value;
    }
    if(value_path == "rib-table-not-created")
    {
        rib_table_not_created = value;
    }
    if(value_path == "rib-version")
    {
        rib_version = value;
    }
    if(value_path == "wq-dqtime")
    {
        wq_dqtime = value;
    }
    if(value_path == "wq-len-cur")
    {
        wq_len_cur = value;
    }
    if(value_path == "wq-len-max")
    {
        wq_len_max = value;
    }
    if(value_path == "wq-thread-active")
    {
        wq_thread_active = value;
    }
    if(value_path == "wq-total-dequeued")
    {
        wq_total_dequeued = value;
    }
    if(value_path == "wq-total-queued")
    {
        wq_total_queued = value;
    }
    if(value_path == "wqe-qtime")
    {
        wqe_qtime = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::Internalwq::RibBaseTime::RibBaseTime()
    :
    nanosecond{YType::uint32, "nanosecond"},
    second{YType::uint32, "second"}
{
    yang_name = "rib-base-time"; yang_parent_name = "internalwq";
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::Internalwq::RibBaseTime::~RibBaseTime()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::Internalwq::RibBaseTime::has_data() const
{
    return nanosecond.is_set
	|| second.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::Internalwq::RibBaseTime::has_operation() const
{
    return is_set(operation)
	|| is_set(nanosecond.operation)
	|| is_set(second.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::Internalwq::RibBaseTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rib-base-time";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::Internalwq::RibBaseTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RibBaseTime' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::Internalwq::RibBaseTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::Internalwq::RibBaseTime::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::Internalwq::RibBaseTime::set_value(const std::string & value_path, std::string value)
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

Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::Ribqueue::Ribqueue()
    :
    priority_level{YType::str, "priority-level"},
    rib_base_clock{YType::uint64, "rib-base-clock"},
    rib_dequeue_errs{YType::uint32, "rib-dequeue-errs"},
    rib_drop_after{YType::uint32, "rib-drop-after"},
    rib_drop_before{YType::uint32, "rib-drop-before"},
    rib_drop_conn{YType::uint32, "rib-drop-conn"},
    rib_empty_batches{YType::uint32, "rib-empty-batches"},
    rib_pfx_limit_errs{YType::uint32, "rib-pfx-limit-errs"},
    rib_pkts_sent{YType::uint32, "rib-pkts-sent"},
    rib_queue_errs{YType::uint32, "rib-queue-errs"},
    rib_send_errs{YType::uint32, "rib-send-errs"},
    rib_signals{YType::uint32, "rib-signals"},
    rib_table_not_created{YType::uint32, "rib-table-not-created"},
    rib_version{YType::uint32, "rib-version"},
    wq_dqtime{YType::uint64, "wq-dqtime"},
    wq_len_cur{YType::int32, "wq-len-cur"},
    wq_len_max{YType::int32, "wq-len-max"},
    wq_thread_active{YType::boolean, "wq-thread-active"},
    wq_total_dequeued{YType::uint32, "wq-total-dequeued"},
    wq_total_queued{YType::uint32, "wq-total-queued"},
    wqe_qtime{YType::uint64, "wqe-qtime"}
    	,
    rib_base_time(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::Ribqueue::RibBaseTime>())
{
    rib_base_time->parent = this;
    children["rib-base-time"] = rib_base_time;

    yang_name = "ribqueue"; yang_parent_name = "rib-thread-stats";
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::Ribqueue::~Ribqueue()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::Ribqueue::has_data() const
{
    return priority_level.is_set
	|| rib_base_clock.is_set
	|| rib_dequeue_errs.is_set
	|| rib_drop_after.is_set
	|| rib_drop_before.is_set
	|| rib_drop_conn.is_set
	|| rib_empty_batches.is_set
	|| rib_pfx_limit_errs.is_set
	|| rib_pkts_sent.is_set
	|| rib_queue_errs.is_set
	|| rib_send_errs.is_set
	|| rib_signals.is_set
	|| rib_table_not_created.is_set
	|| rib_version.is_set
	|| wq_dqtime.is_set
	|| wq_len_cur.is_set
	|| wq_len_max.is_set
	|| wq_thread_active.is_set
	|| wq_total_dequeued.is_set
	|| wq_total_queued.is_set
	|| wqe_qtime.is_set
	|| (rib_base_time !=  nullptr && rib_base_time->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::Ribqueue::has_operation() const
{
    return is_set(operation)
	|| is_set(priority_level.operation)
	|| is_set(rib_base_clock.operation)
	|| is_set(rib_dequeue_errs.operation)
	|| is_set(rib_drop_after.operation)
	|| is_set(rib_drop_before.operation)
	|| is_set(rib_drop_conn.operation)
	|| is_set(rib_empty_batches.operation)
	|| is_set(rib_pfx_limit_errs.operation)
	|| is_set(rib_pkts_sent.operation)
	|| is_set(rib_queue_errs.operation)
	|| is_set(rib_send_errs.operation)
	|| is_set(rib_signals.operation)
	|| is_set(rib_table_not_created.operation)
	|| is_set(rib_version.operation)
	|| is_set(wq_dqtime.operation)
	|| is_set(wq_len_cur.operation)
	|| is_set(wq_len_max.operation)
	|| is_set(wq_thread_active.operation)
	|| is_set(wq_total_dequeued.operation)
	|| is_set(wq_total_queued.operation)
	|| is_set(wqe_qtime.operation)
	|| (rib_base_time !=  nullptr && rib_base_time->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::Ribqueue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ribqueue";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::Ribqueue::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ribqueue' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority_level.is_set || is_set(priority_level.operation)) leaf_name_data.push_back(priority_level.get_name_leafdata());
    if (rib_base_clock.is_set || is_set(rib_base_clock.operation)) leaf_name_data.push_back(rib_base_clock.get_name_leafdata());
    if (rib_dequeue_errs.is_set || is_set(rib_dequeue_errs.operation)) leaf_name_data.push_back(rib_dequeue_errs.get_name_leafdata());
    if (rib_drop_after.is_set || is_set(rib_drop_after.operation)) leaf_name_data.push_back(rib_drop_after.get_name_leafdata());
    if (rib_drop_before.is_set || is_set(rib_drop_before.operation)) leaf_name_data.push_back(rib_drop_before.get_name_leafdata());
    if (rib_drop_conn.is_set || is_set(rib_drop_conn.operation)) leaf_name_data.push_back(rib_drop_conn.get_name_leafdata());
    if (rib_empty_batches.is_set || is_set(rib_empty_batches.operation)) leaf_name_data.push_back(rib_empty_batches.get_name_leafdata());
    if (rib_pfx_limit_errs.is_set || is_set(rib_pfx_limit_errs.operation)) leaf_name_data.push_back(rib_pfx_limit_errs.get_name_leafdata());
    if (rib_pkts_sent.is_set || is_set(rib_pkts_sent.operation)) leaf_name_data.push_back(rib_pkts_sent.get_name_leafdata());
    if (rib_queue_errs.is_set || is_set(rib_queue_errs.operation)) leaf_name_data.push_back(rib_queue_errs.get_name_leafdata());
    if (rib_send_errs.is_set || is_set(rib_send_errs.operation)) leaf_name_data.push_back(rib_send_errs.get_name_leafdata());
    if (rib_signals.is_set || is_set(rib_signals.operation)) leaf_name_data.push_back(rib_signals.get_name_leafdata());
    if (rib_table_not_created.is_set || is_set(rib_table_not_created.operation)) leaf_name_data.push_back(rib_table_not_created.get_name_leafdata());
    if (rib_version.is_set || is_set(rib_version.operation)) leaf_name_data.push_back(rib_version.get_name_leafdata());
    if (wq_dqtime.is_set || is_set(wq_dqtime.operation)) leaf_name_data.push_back(wq_dqtime.get_name_leafdata());
    if (wq_len_cur.is_set || is_set(wq_len_cur.operation)) leaf_name_data.push_back(wq_len_cur.get_name_leafdata());
    if (wq_len_max.is_set || is_set(wq_len_max.operation)) leaf_name_data.push_back(wq_len_max.get_name_leafdata());
    if (wq_thread_active.is_set || is_set(wq_thread_active.operation)) leaf_name_data.push_back(wq_thread_active.get_name_leafdata());
    if (wq_total_dequeued.is_set || is_set(wq_total_dequeued.operation)) leaf_name_data.push_back(wq_total_dequeued.get_name_leafdata());
    if (wq_total_queued.is_set || is_set(wq_total_queued.operation)) leaf_name_data.push_back(wq_total_queued.get_name_leafdata());
    if (wqe_qtime.is_set || is_set(wqe_qtime.operation)) leaf_name_data.push_back(wqe_qtime.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::Ribqueue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "rib-base-time")
    {
        if(rib_base_time != nullptr)
        {
            children["rib-base-time"] = rib_base_time;
        }
        else
        {
            rib_base_time = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::Ribqueue::RibBaseTime>();
            rib_base_time->parent = this;
            children["rib-base-time"] = rib_base_time;
        }
        return children.at("rib-base-time");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::Ribqueue::get_children()
{
    if(children.find("rib-base-time") == children.end())
    {
        if(rib_base_time != nullptr)
        {
            children["rib-base-time"] = rib_base_time;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::Ribqueue::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "priority-level")
    {
        priority_level = value;
    }
    if(value_path == "rib-base-clock")
    {
        rib_base_clock = value;
    }
    if(value_path == "rib-dequeue-errs")
    {
        rib_dequeue_errs = value;
    }
    if(value_path == "rib-drop-after")
    {
        rib_drop_after = value;
    }
    if(value_path == "rib-drop-before")
    {
        rib_drop_before = value;
    }
    if(value_path == "rib-drop-conn")
    {
        rib_drop_conn = value;
    }
    if(value_path == "rib-empty-batches")
    {
        rib_empty_batches = value;
    }
    if(value_path == "rib-pfx-limit-errs")
    {
        rib_pfx_limit_errs = value;
    }
    if(value_path == "rib-pkts-sent")
    {
        rib_pkts_sent = value;
    }
    if(value_path == "rib-queue-errs")
    {
        rib_queue_errs = value;
    }
    if(value_path == "rib-send-errs")
    {
        rib_send_errs = value;
    }
    if(value_path == "rib-signals")
    {
        rib_signals = value;
    }
    if(value_path == "rib-table-not-created")
    {
        rib_table_not_created = value;
    }
    if(value_path == "rib-version")
    {
        rib_version = value;
    }
    if(value_path == "wq-dqtime")
    {
        wq_dqtime = value;
    }
    if(value_path == "wq-len-cur")
    {
        wq_len_cur = value;
    }
    if(value_path == "wq-len-max")
    {
        wq_len_max = value;
    }
    if(value_path == "wq-thread-active")
    {
        wq_thread_active = value;
    }
    if(value_path == "wq-total-dequeued")
    {
        wq_total_dequeued = value;
    }
    if(value_path == "wq-total-queued")
    {
        wq_total_queued = value;
    }
    if(value_path == "wqe-qtime")
    {
        wqe_qtime = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::Ribqueue::RibBaseTime::RibBaseTime()
    :
    nanosecond{YType::uint32, "nanosecond"},
    second{YType::uint32, "second"}
{
    yang_name = "rib-base-time"; yang_parent_name = "ribqueue";
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::Ribqueue::RibBaseTime::~RibBaseTime()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::Ribqueue::RibBaseTime::has_data() const
{
    return nanosecond.is_set
	|| second.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::Ribqueue::RibBaseTime::has_operation() const
{
    return is_set(operation)
	|| is_set(nanosecond.operation)
	|| is_set(second.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::Ribqueue::RibBaseTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rib-base-time";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::Ribqueue::RibBaseTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RibBaseTime' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::Ribqueue::RibBaseTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::Ribqueue::RibBaseTime::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::Ribqueue::RibBaseTime::set_value(const std::string & value_path, std::string value)
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

Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NsrPlStats()
{
    yang_name = "nsr-pl-stats"; yang_parent_name = "statistics";
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::~NsrPlStats()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::has_data() const
{
    for (std::size_t index=0; index<ncd_pri.size(); index++)
    {
        if(ncd_pri[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::has_operation() const
{
    for (std::size_t index=0; index<ncd_pri.size(); index++)
    {
        if(ncd_pri[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsr-pl-stats";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NsrPlStats' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ncd-pri")
    {
        for(auto const & c : ncd_pri)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri>();
        c->parent = this;
        ncd_pri.push_back(std::move(c));
        children[segment_path] = ncd_pri.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::get_children()
{
    for (auto const & c : ncd_pri)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NcdPri()
    :
    num_recv{YType::uint64, "num-recv"},
    num_sent{YType::uint64, "num-sent"}
{
    yang_name = "ncd-pri"; yang_parent_name = "nsr-pl-stats";
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::~NcdPri()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::has_data() const
{
    for (std::size_t index=0; index<num_recv_drop.size(); index++)
    {
        if(num_recv_drop[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<num_sent_drop.size(); index++)
    {
        if(num_sent_drop[index]->has_data())
            return true;
    }
    for (auto const & leaf : num_recv.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : num_sent.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::has_operation() const
{
    for (std::size_t index=0; index<num_recv_drop.size(); index++)
    {
        if(num_recv_drop[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<num_sent_drop.size(); index++)
    {
        if(num_sent_drop[index]->has_operation())
            return true;
    }
    for (auto const & leaf : num_recv.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : num_sent.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(num_recv.operation)
	|| is_set(num_sent.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ncd-pri";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NcdPri' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto num_recv_name_datas = num_recv.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), num_recv_name_datas.begin(), num_recv_name_datas.end());
    auto num_sent_name_datas = num_sent.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), num_sent_name_datas.begin(), num_sent_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "num-recv-drop")
    {
        for(auto const & c : num_recv_drop)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumRecvDrop>();
        c->parent = this;
        num_recv_drop.push_back(std::move(c));
        children[segment_path] = num_recv_drop.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "num-sent-drop")
    {
        for(auto const & c : num_sent_drop)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumSentDrop>();
        c->parent = this;
        num_sent_drop.push_back(std::move(c));
        children[segment_path] = num_sent_drop.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::get_children()
{
    for (auto const & c : num_recv_drop)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : num_sent_drop)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "num-recv")
    {
        num_recv.append(value);
    }
    if(value_path == "num-sent")
    {
        num_sent.append(value);
    }
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumSentDrop::NumSentDrop()
    :
    nsr_pl_send_drop_array{YType::uint32, "nsr-pl-send-drop-array"}
{
    yang_name = "num-sent-drop"; yang_parent_name = "ncd-pri";
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumSentDrop::~NumSentDrop()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumSentDrop::has_data() const
{
    for (auto const & leaf : nsr_pl_send_drop_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumSentDrop::has_operation() const
{
    for (auto const & leaf : nsr_pl_send_drop_array.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(nsr_pl_send_drop_array.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumSentDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "num-sent-drop";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumSentDrop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NumSentDrop' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto nsr_pl_send_drop_array_name_datas = nsr_pl_send_drop_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), nsr_pl_send_drop_array_name_datas.begin(), nsr_pl_send_drop_array_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumSentDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumSentDrop::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumSentDrop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nsr-pl-send-drop-array")
    {
        nsr_pl_send_drop_array.append(value);
    }
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumRecvDrop::NumRecvDrop()
    :
    nsr_pl_recv_drop_array{YType::uint32, "nsr-pl-recv-drop-array"}
{
    yang_name = "num-recv-drop"; yang_parent_name = "ncd-pri";
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumRecvDrop::~NumRecvDrop()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumRecvDrop::has_data() const
{
    for (auto const & leaf : nsr_pl_recv_drop_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumRecvDrop::has_operation() const
{
    for (auto const & leaf : nsr_pl_recv_drop_array.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(nsr_pl_recv_drop_array.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumRecvDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "num-recv-drop";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumRecvDrop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NumRecvDrop' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto nsr_pl_recv_drop_array_name_datas = nsr_pl_recv_drop_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), nsr_pl_recv_drop_array_name_datas.begin(), nsr_pl_recv_drop_array_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumRecvDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumRecvDrop::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumRecvDrop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nsr-pl-recv-drop-array")
    {
        nsr_pl_recv_drop_array.append(value);
    }
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::NsrStats()
    :
    nsr_conn_to_active_attempts{YType::uint64, "nsr-conn-to-active-attempts"},
    nsr_conn_to_active_closes{YType::uint64, "nsr-conn-to-active-closes"},
    nsr_conn_to_active_errors{YType::uint64, "nsr-conn-to-active-errors"},
    nsr_conn_to_active_fails{YType::uint64, "nsr-conn-to-active-fails"},
    nsr_conn_to_active_opens{YType::uint64, "nsr-conn-to-active-opens"},
    nsr_fsm_state{YType::int32, "nsr-fsm-state"},
    nsr_intf_seq_no{YType::uint32, "nsr-intf-seq-no"},
    nsr_lsa_init_sync_pend_count{YType::int32, "nsr-lsa-init-sync-pend-count"},
    nsr_lsa_qad_mdata_count{YType::uint32, "nsr-lsa-qad-mdata-count"},
    nsr_lsa_qad_qid{YType::uint32, "nsr-lsa-qad-qid"},
    nsr_mtu{YType::uint32, "nsr-mtu"},
    nsr_nbr_init_sync_pend_count{YType::int32, "nsr-nbr-init-sync-pend-count"},
    nsr_nbr_qad_mdata_count{YType::uint32, "nsr-nbr-qad-mdata-count"},
    nsr_nbr_qad_qid{YType::uint32, "nsr-nbr-qad-qid"},
    nsr_nbr_seq_no{YType::uint32, "nsr-nbr-seq-no"},
    nsr_nodeid{YType::uint32, "nsr-nodeid"},
    nsr_peer_nodeid{YType::uint32, "nsr-peer-nodeid"},
    nsr_peer_version{YType::uint32, "nsr-peer-version"},
    nsr_rev{YType::int32, "nsr-rev"},
    nsr_tmr_quant{YType::int32, "nsr-tmr-quant"},
    nsr_version{YType::uint32, "nsr-version"}
    	,
    nsr_rtr_thd_sched(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::NsrRtrThdSched>())
	,nsr_thd_sched(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::NsrThdSched>())
{
    nsr_rtr_thd_sched->parent = this;
    children["nsr-rtr-thd-sched"] = nsr_rtr_thd_sched;

    nsr_thd_sched->parent = this;
    children["nsr-thd-sched"] = nsr_thd_sched;

    yang_name = "nsr-stats"; yang_parent_name = "statistics";
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::~NsrStats()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::has_data() const
{
    return nsr_conn_to_active_attempts.is_set
	|| nsr_conn_to_active_closes.is_set
	|| nsr_conn_to_active_errors.is_set
	|| nsr_conn_to_active_fails.is_set
	|| nsr_conn_to_active_opens.is_set
	|| nsr_fsm_state.is_set
	|| nsr_intf_seq_no.is_set
	|| nsr_lsa_init_sync_pend_count.is_set
	|| nsr_lsa_qad_mdata_count.is_set
	|| nsr_lsa_qad_qid.is_set
	|| nsr_mtu.is_set
	|| nsr_nbr_init_sync_pend_count.is_set
	|| nsr_nbr_qad_mdata_count.is_set
	|| nsr_nbr_qad_qid.is_set
	|| nsr_nbr_seq_no.is_set
	|| nsr_nodeid.is_set
	|| nsr_peer_nodeid.is_set
	|| nsr_peer_version.is_set
	|| nsr_rev.is_set
	|| nsr_tmr_quant.is_set
	|| nsr_version.is_set
	|| (nsr_rtr_thd_sched !=  nullptr && nsr_rtr_thd_sched->has_data())
	|| (nsr_thd_sched !=  nullptr && nsr_thd_sched->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::has_operation() const
{
    return is_set(operation)
	|| is_set(nsr_conn_to_active_attempts.operation)
	|| is_set(nsr_conn_to_active_closes.operation)
	|| is_set(nsr_conn_to_active_errors.operation)
	|| is_set(nsr_conn_to_active_fails.operation)
	|| is_set(nsr_conn_to_active_opens.operation)
	|| is_set(nsr_fsm_state.operation)
	|| is_set(nsr_intf_seq_no.operation)
	|| is_set(nsr_lsa_init_sync_pend_count.operation)
	|| is_set(nsr_lsa_qad_mdata_count.operation)
	|| is_set(nsr_lsa_qad_qid.operation)
	|| is_set(nsr_mtu.operation)
	|| is_set(nsr_nbr_init_sync_pend_count.operation)
	|| is_set(nsr_nbr_qad_mdata_count.operation)
	|| is_set(nsr_nbr_qad_qid.operation)
	|| is_set(nsr_nbr_seq_no.operation)
	|| is_set(nsr_nodeid.operation)
	|| is_set(nsr_peer_nodeid.operation)
	|| is_set(nsr_peer_version.operation)
	|| is_set(nsr_rev.operation)
	|| is_set(nsr_tmr_quant.operation)
	|| is_set(nsr_version.operation)
	|| (nsr_rtr_thd_sched !=  nullptr && nsr_rtr_thd_sched->has_operation())
	|| (nsr_thd_sched !=  nullptr && nsr_thd_sched->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsr-stats";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NsrStats' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nsr_conn_to_active_attempts.is_set || is_set(nsr_conn_to_active_attempts.operation)) leaf_name_data.push_back(nsr_conn_to_active_attempts.get_name_leafdata());
    if (nsr_conn_to_active_closes.is_set || is_set(nsr_conn_to_active_closes.operation)) leaf_name_data.push_back(nsr_conn_to_active_closes.get_name_leafdata());
    if (nsr_conn_to_active_errors.is_set || is_set(nsr_conn_to_active_errors.operation)) leaf_name_data.push_back(nsr_conn_to_active_errors.get_name_leafdata());
    if (nsr_conn_to_active_fails.is_set || is_set(nsr_conn_to_active_fails.operation)) leaf_name_data.push_back(nsr_conn_to_active_fails.get_name_leafdata());
    if (nsr_conn_to_active_opens.is_set || is_set(nsr_conn_to_active_opens.operation)) leaf_name_data.push_back(nsr_conn_to_active_opens.get_name_leafdata());
    if (nsr_fsm_state.is_set || is_set(nsr_fsm_state.operation)) leaf_name_data.push_back(nsr_fsm_state.get_name_leafdata());
    if (nsr_intf_seq_no.is_set || is_set(nsr_intf_seq_no.operation)) leaf_name_data.push_back(nsr_intf_seq_no.get_name_leafdata());
    if (nsr_lsa_init_sync_pend_count.is_set || is_set(nsr_lsa_init_sync_pend_count.operation)) leaf_name_data.push_back(nsr_lsa_init_sync_pend_count.get_name_leafdata());
    if (nsr_lsa_qad_mdata_count.is_set || is_set(nsr_lsa_qad_mdata_count.operation)) leaf_name_data.push_back(nsr_lsa_qad_mdata_count.get_name_leafdata());
    if (nsr_lsa_qad_qid.is_set || is_set(nsr_lsa_qad_qid.operation)) leaf_name_data.push_back(nsr_lsa_qad_qid.get_name_leafdata());
    if (nsr_mtu.is_set || is_set(nsr_mtu.operation)) leaf_name_data.push_back(nsr_mtu.get_name_leafdata());
    if (nsr_nbr_init_sync_pend_count.is_set || is_set(nsr_nbr_init_sync_pend_count.operation)) leaf_name_data.push_back(nsr_nbr_init_sync_pend_count.get_name_leafdata());
    if (nsr_nbr_qad_mdata_count.is_set || is_set(nsr_nbr_qad_mdata_count.operation)) leaf_name_data.push_back(nsr_nbr_qad_mdata_count.get_name_leafdata());
    if (nsr_nbr_qad_qid.is_set || is_set(nsr_nbr_qad_qid.operation)) leaf_name_data.push_back(nsr_nbr_qad_qid.get_name_leafdata());
    if (nsr_nbr_seq_no.is_set || is_set(nsr_nbr_seq_no.operation)) leaf_name_data.push_back(nsr_nbr_seq_no.get_name_leafdata());
    if (nsr_nodeid.is_set || is_set(nsr_nodeid.operation)) leaf_name_data.push_back(nsr_nodeid.get_name_leafdata());
    if (nsr_peer_nodeid.is_set || is_set(nsr_peer_nodeid.operation)) leaf_name_data.push_back(nsr_peer_nodeid.get_name_leafdata());
    if (nsr_peer_version.is_set || is_set(nsr_peer_version.operation)) leaf_name_data.push_back(nsr_peer_version.get_name_leafdata());
    if (nsr_rev.is_set || is_set(nsr_rev.operation)) leaf_name_data.push_back(nsr_rev.get_name_leafdata());
    if (nsr_tmr_quant.is_set || is_set(nsr_tmr_quant.operation)) leaf_name_data.push_back(nsr_tmr_quant.get_name_leafdata());
    if (nsr_version.is_set || is_set(nsr_version.operation)) leaf_name_data.push_back(nsr_version.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "nsr-rtr-thd-sched")
    {
        if(nsr_rtr_thd_sched != nullptr)
        {
            children["nsr-rtr-thd-sched"] = nsr_rtr_thd_sched;
        }
        else
        {
            nsr_rtr_thd_sched = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::NsrRtrThdSched>();
            nsr_rtr_thd_sched->parent = this;
            children["nsr-rtr-thd-sched"] = nsr_rtr_thd_sched;
        }
        return children.at("nsr-rtr-thd-sched");
    }

    if(child_yang_name == "nsr-thd-sched")
    {
        if(nsr_thd_sched != nullptr)
        {
            children["nsr-thd-sched"] = nsr_thd_sched;
        }
        else
        {
            nsr_thd_sched = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::NsrThdSched>();
            nsr_thd_sched->parent = this;
            children["nsr-thd-sched"] = nsr_thd_sched;
        }
        return children.at("nsr-thd-sched");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::get_children()
{
    if(children.find("nsr-rtr-thd-sched") == children.end())
    {
        if(nsr_rtr_thd_sched != nullptr)
        {
            children["nsr-rtr-thd-sched"] = nsr_rtr_thd_sched;
        }
    }

    if(children.find("nsr-thd-sched") == children.end())
    {
        if(nsr_thd_sched != nullptr)
        {
            children["nsr-thd-sched"] = nsr_thd_sched;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nsr-conn-to-active-attempts")
    {
        nsr_conn_to_active_attempts = value;
    }
    if(value_path == "nsr-conn-to-active-closes")
    {
        nsr_conn_to_active_closes = value;
    }
    if(value_path == "nsr-conn-to-active-errors")
    {
        nsr_conn_to_active_errors = value;
    }
    if(value_path == "nsr-conn-to-active-fails")
    {
        nsr_conn_to_active_fails = value;
    }
    if(value_path == "nsr-conn-to-active-opens")
    {
        nsr_conn_to_active_opens = value;
    }
    if(value_path == "nsr-fsm-state")
    {
        nsr_fsm_state = value;
    }
    if(value_path == "nsr-intf-seq-no")
    {
        nsr_intf_seq_no = value;
    }
    if(value_path == "nsr-lsa-init-sync-pend-count")
    {
        nsr_lsa_init_sync_pend_count = value;
    }
    if(value_path == "nsr-lsa-qad-mdata-count")
    {
        nsr_lsa_qad_mdata_count = value;
    }
    if(value_path == "nsr-lsa-qad-qid")
    {
        nsr_lsa_qad_qid = value;
    }
    if(value_path == "nsr-mtu")
    {
        nsr_mtu = value;
    }
    if(value_path == "nsr-nbr-init-sync-pend-count")
    {
        nsr_nbr_init_sync_pend_count = value;
    }
    if(value_path == "nsr-nbr-qad-mdata-count")
    {
        nsr_nbr_qad_mdata_count = value;
    }
    if(value_path == "nsr-nbr-qad-qid")
    {
        nsr_nbr_qad_qid = value;
    }
    if(value_path == "nsr-nbr-seq-no")
    {
        nsr_nbr_seq_no = value;
    }
    if(value_path == "nsr-nodeid")
    {
        nsr_nodeid = value;
    }
    if(value_path == "nsr-peer-nodeid")
    {
        nsr_peer_nodeid = value;
    }
    if(value_path == "nsr-peer-version")
    {
        nsr_peer_version = value;
    }
    if(value_path == "nsr-rev")
    {
        nsr_rev = value;
    }
    if(value_path == "nsr-tmr-quant")
    {
        nsr_tmr_quant = value;
    }
    if(value_path == "nsr-version")
    {
        nsr_version = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::NsrThdSched::NsrThdSched()
    :
    nsr_bad_pulses_rx{YType::uint64, "nsr-bad-pulses-rx"},
    nsr_events_in_q{YType::uint32, "nsr-events-in-q"},
    nsr_events_rx{YType::uint64, "nsr-events-rx"},
    nsr_events_tx{YType::uint64, "nsr-events-tx"},
    nsr_good_pulses_rx{YType::uint64, "nsr-good-pulses-rx"},
    nsr_pulse_quant{YType::int32, "nsr-pulse-quant"},
    nsr_pulse_tx_fails{YType::uint64, "nsr-pulse-tx-fails"},
    nsr_pulses_tx{YType::uint64, "nsr-pulses-tx"}
{
    yang_name = "nsr-thd-sched"; yang_parent_name = "nsr-stats";
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::NsrThdSched::~NsrThdSched()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::NsrThdSched::has_data() const
{
    for (std::size_t index=0; index<nsr_pri.size(); index++)
    {
        if(nsr_pri[index]->has_data())
            return true;
    }
    return nsr_bad_pulses_rx.is_set
	|| nsr_events_in_q.is_set
	|| nsr_events_rx.is_set
	|| nsr_events_tx.is_set
	|| nsr_good_pulses_rx.is_set
	|| nsr_pulse_quant.is_set
	|| nsr_pulse_tx_fails.is_set
	|| nsr_pulses_tx.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::NsrThdSched::has_operation() const
{
    for (std::size_t index=0; index<nsr_pri.size(); index++)
    {
        if(nsr_pri[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(nsr_bad_pulses_rx.operation)
	|| is_set(nsr_events_in_q.operation)
	|| is_set(nsr_events_rx.operation)
	|| is_set(nsr_events_tx.operation)
	|| is_set(nsr_good_pulses_rx.operation)
	|| is_set(nsr_pulse_quant.operation)
	|| is_set(nsr_pulse_tx_fails.operation)
	|| is_set(nsr_pulses_tx.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::NsrThdSched::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsr-thd-sched";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::NsrThdSched::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NsrThdSched' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nsr_bad_pulses_rx.is_set || is_set(nsr_bad_pulses_rx.operation)) leaf_name_data.push_back(nsr_bad_pulses_rx.get_name_leafdata());
    if (nsr_events_in_q.is_set || is_set(nsr_events_in_q.operation)) leaf_name_data.push_back(nsr_events_in_q.get_name_leafdata());
    if (nsr_events_rx.is_set || is_set(nsr_events_rx.operation)) leaf_name_data.push_back(nsr_events_rx.get_name_leafdata());
    if (nsr_events_tx.is_set || is_set(nsr_events_tx.operation)) leaf_name_data.push_back(nsr_events_tx.get_name_leafdata());
    if (nsr_good_pulses_rx.is_set || is_set(nsr_good_pulses_rx.operation)) leaf_name_data.push_back(nsr_good_pulses_rx.get_name_leafdata());
    if (nsr_pulse_quant.is_set || is_set(nsr_pulse_quant.operation)) leaf_name_data.push_back(nsr_pulse_quant.get_name_leafdata());
    if (nsr_pulse_tx_fails.is_set || is_set(nsr_pulse_tx_fails.operation)) leaf_name_data.push_back(nsr_pulse_tx_fails.get_name_leafdata());
    if (nsr_pulses_tx.is_set || is_set(nsr_pulses_tx.operation)) leaf_name_data.push_back(nsr_pulses_tx.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::NsrThdSched::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "nsr-pri")
    {
        for(auto const & c : nsr_pri)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::NsrThdSched::NsrPri>();
        c->parent = this;
        nsr_pri.push_back(std::move(c));
        children[segment_path] = nsr_pri.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::NsrThdSched::get_children()
{
    for (auto const & c : nsr_pri)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::NsrThdSched::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nsr-bad-pulses-rx")
    {
        nsr_bad_pulses_rx = value;
    }
    if(value_path == "nsr-events-in-q")
    {
        nsr_events_in_q = value;
    }
    if(value_path == "nsr-events-rx")
    {
        nsr_events_rx = value;
    }
    if(value_path == "nsr-events-tx")
    {
        nsr_events_tx = value;
    }
    if(value_path == "nsr-good-pulses-rx")
    {
        nsr_good_pulses_rx = value;
    }
    if(value_path == "nsr-pulse-quant")
    {
        nsr_pulse_quant = value;
    }
    if(value_path == "nsr-pulse-tx-fails")
    {
        nsr_pulse_tx_fails = value;
    }
    if(value_path == "nsr-pulses-tx")
    {
        nsr_pulses_tx = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::NsrThdSched::NsrPri::NsrPri()
    :
    nsr_sched_enq_fails{YType::uint64, "nsr-sched-enq-fails"},
    nsr_sched_evs_deqd{YType::uint64, "nsr-sched-evs-deqd"},
    nsr_sched_evs_in_q{YType::uint16, "nsr-sched-evs-in-q"},
    nsr_sched_evs_qd{YType::uint64, "nsr-sched-evs-qd"},
    nsr_sched_max_evs{YType::uint16, "nsr-sched-max-evs"},
    nsr_sched_peak_q_len{YType::uint16, "nsr-sched-peak-q-len"},
    nsr_sched_pri{YType::uint32, "nsr-sched-pri"},
    nsr_sched_quant{YType::uint8, "nsr-sched-quant"},
    nsr_sched_remain_quant{YType::uint8, "nsr-sched-remain-quant"}
{
    yang_name = "nsr-pri"; yang_parent_name = "nsr-thd-sched";
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::NsrThdSched::NsrPri::~NsrPri()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::NsrThdSched::NsrPri::has_data() const
{
    return nsr_sched_enq_fails.is_set
	|| nsr_sched_evs_deqd.is_set
	|| nsr_sched_evs_in_q.is_set
	|| nsr_sched_evs_qd.is_set
	|| nsr_sched_max_evs.is_set
	|| nsr_sched_peak_q_len.is_set
	|| nsr_sched_pri.is_set
	|| nsr_sched_quant.is_set
	|| nsr_sched_remain_quant.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::NsrThdSched::NsrPri::has_operation() const
{
    return is_set(operation)
	|| is_set(nsr_sched_enq_fails.operation)
	|| is_set(nsr_sched_evs_deqd.operation)
	|| is_set(nsr_sched_evs_in_q.operation)
	|| is_set(nsr_sched_evs_qd.operation)
	|| is_set(nsr_sched_max_evs.operation)
	|| is_set(nsr_sched_peak_q_len.operation)
	|| is_set(nsr_sched_pri.operation)
	|| is_set(nsr_sched_quant.operation)
	|| is_set(nsr_sched_remain_quant.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::NsrThdSched::NsrPri::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsr-pri";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::NsrThdSched::NsrPri::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NsrPri' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nsr_sched_enq_fails.is_set || is_set(nsr_sched_enq_fails.operation)) leaf_name_data.push_back(nsr_sched_enq_fails.get_name_leafdata());
    if (nsr_sched_evs_deqd.is_set || is_set(nsr_sched_evs_deqd.operation)) leaf_name_data.push_back(nsr_sched_evs_deqd.get_name_leafdata());
    if (nsr_sched_evs_in_q.is_set || is_set(nsr_sched_evs_in_q.operation)) leaf_name_data.push_back(nsr_sched_evs_in_q.get_name_leafdata());
    if (nsr_sched_evs_qd.is_set || is_set(nsr_sched_evs_qd.operation)) leaf_name_data.push_back(nsr_sched_evs_qd.get_name_leafdata());
    if (nsr_sched_max_evs.is_set || is_set(nsr_sched_max_evs.operation)) leaf_name_data.push_back(nsr_sched_max_evs.get_name_leafdata());
    if (nsr_sched_peak_q_len.is_set || is_set(nsr_sched_peak_q_len.operation)) leaf_name_data.push_back(nsr_sched_peak_q_len.get_name_leafdata());
    if (nsr_sched_pri.is_set || is_set(nsr_sched_pri.operation)) leaf_name_data.push_back(nsr_sched_pri.get_name_leafdata());
    if (nsr_sched_quant.is_set || is_set(nsr_sched_quant.operation)) leaf_name_data.push_back(nsr_sched_quant.get_name_leafdata());
    if (nsr_sched_remain_quant.is_set || is_set(nsr_sched_remain_quant.operation)) leaf_name_data.push_back(nsr_sched_remain_quant.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::NsrThdSched::NsrPri::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::NsrThdSched::NsrPri::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::NsrThdSched::NsrPri::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nsr-sched-enq-fails")
    {
        nsr_sched_enq_fails = value;
    }
    if(value_path == "nsr-sched-evs-deqd")
    {
        nsr_sched_evs_deqd = value;
    }
    if(value_path == "nsr-sched-evs-in-q")
    {
        nsr_sched_evs_in_q = value;
    }
    if(value_path == "nsr-sched-evs-qd")
    {
        nsr_sched_evs_qd = value;
    }
    if(value_path == "nsr-sched-max-evs")
    {
        nsr_sched_max_evs = value;
    }
    if(value_path == "nsr-sched-peak-q-len")
    {
        nsr_sched_peak_q_len = value;
    }
    if(value_path == "nsr-sched-pri")
    {
        nsr_sched_pri = value;
    }
    if(value_path == "nsr-sched-quant")
    {
        nsr_sched_quant = value;
    }
    if(value_path == "nsr-sched-remain-quant")
    {
        nsr_sched_remain_quant = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::NsrRtrThdSched::NsrRtrThdSched()
    :
    nsr_bad_pulses_rx{YType::uint64, "nsr-bad-pulses-rx"},
    nsr_events_in_q{YType::uint32, "nsr-events-in-q"},
    nsr_events_rx{YType::uint64, "nsr-events-rx"},
    nsr_events_tx{YType::uint64, "nsr-events-tx"},
    nsr_good_pulses_rx{YType::uint64, "nsr-good-pulses-rx"},
    nsr_pulse_quant{YType::int32, "nsr-pulse-quant"},
    nsr_pulse_tx_fails{YType::uint64, "nsr-pulse-tx-fails"},
    nsr_pulses_tx{YType::uint64, "nsr-pulses-tx"}
{
    yang_name = "nsr-rtr-thd-sched"; yang_parent_name = "nsr-stats";
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::NsrRtrThdSched::~NsrRtrThdSched()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::NsrRtrThdSched::has_data() const
{
    for (std::size_t index=0; index<nsr_pri.size(); index++)
    {
        if(nsr_pri[index]->has_data())
            return true;
    }
    return nsr_bad_pulses_rx.is_set
	|| nsr_events_in_q.is_set
	|| nsr_events_rx.is_set
	|| nsr_events_tx.is_set
	|| nsr_good_pulses_rx.is_set
	|| nsr_pulse_quant.is_set
	|| nsr_pulse_tx_fails.is_set
	|| nsr_pulses_tx.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::NsrRtrThdSched::has_operation() const
{
    for (std::size_t index=0; index<nsr_pri.size(); index++)
    {
        if(nsr_pri[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(nsr_bad_pulses_rx.operation)
	|| is_set(nsr_events_in_q.operation)
	|| is_set(nsr_events_rx.operation)
	|| is_set(nsr_events_tx.operation)
	|| is_set(nsr_good_pulses_rx.operation)
	|| is_set(nsr_pulse_quant.operation)
	|| is_set(nsr_pulse_tx_fails.operation)
	|| is_set(nsr_pulses_tx.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::NsrRtrThdSched::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsr-rtr-thd-sched";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::NsrRtrThdSched::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NsrRtrThdSched' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nsr_bad_pulses_rx.is_set || is_set(nsr_bad_pulses_rx.operation)) leaf_name_data.push_back(nsr_bad_pulses_rx.get_name_leafdata());
    if (nsr_events_in_q.is_set || is_set(nsr_events_in_q.operation)) leaf_name_data.push_back(nsr_events_in_q.get_name_leafdata());
    if (nsr_events_rx.is_set || is_set(nsr_events_rx.operation)) leaf_name_data.push_back(nsr_events_rx.get_name_leafdata());
    if (nsr_events_tx.is_set || is_set(nsr_events_tx.operation)) leaf_name_data.push_back(nsr_events_tx.get_name_leafdata());
    if (nsr_good_pulses_rx.is_set || is_set(nsr_good_pulses_rx.operation)) leaf_name_data.push_back(nsr_good_pulses_rx.get_name_leafdata());
    if (nsr_pulse_quant.is_set || is_set(nsr_pulse_quant.operation)) leaf_name_data.push_back(nsr_pulse_quant.get_name_leafdata());
    if (nsr_pulse_tx_fails.is_set || is_set(nsr_pulse_tx_fails.operation)) leaf_name_data.push_back(nsr_pulse_tx_fails.get_name_leafdata());
    if (nsr_pulses_tx.is_set || is_set(nsr_pulses_tx.operation)) leaf_name_data.push_back(nsr_pulses_tx.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::NsrRtrThdSched::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "nsr-pri")
    {
        for(auto const & c : nsr_pri)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::NsrRtrThdSched::NsrPri>();
        c->parent = this;
        nsr_pri.push_back(std::move(c));
        children[segment_path] = nsr_pri.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::NsrRtrThdSched::get_children()
{
    for (auto const & c : nsr_pri)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::NsrRtrThdSched::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nsr-bad-pulses-rx")
    {
        nsr_bad_pulses_rx = value;
    }
    if(value_path == "nsr-events-in-q")
    {
        nsr_events_in_q = value;
    }
    if(value_path == "nsr-events-rx")
    {
        nsr_events_rx = value;
    }
    if(value_path == "nsr-events-tx")
    {
        nsr_events_tx = value;
    }
    if(value_path == "nsr-good-pulses-rx")
    {
        nsr_good_pulses_rx = value;
    }
    if(value_path == "nsr-pulse-quant")
    {
        nsr_pulse_quant = value;
    }
    if(value_path == "nsr-pulse-tx-fails")
    {
        nsr_pulse_tx_fails = value;
    }
    if(value_path == "nsr-pulses-tx")
    {
        nsr_pulses_tx = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::NsrRtrThdSched::NsrPri::NsrPri()
    :
    nsr_sched_enq_fails{YType::uint64, "nsr-sched-enq-fails"},
    nsr_sched_evs_deqd{YType::uint64, "nsr-sched-evs-deqd"},
    nsr_sched_evs_in_q{YType::uint16, "nsr-sched-evs-in-q"},
    nsr_sched_evs_qd{YType::uint64, "nsr-sched-evs-qd"},
    nsr_sched_max_evs{YType::uint16, "nsr-sched-max-evs"},
    nsr_sched_peak_q_len{YType::uint16, "nsr-sched-peak-q-len"},
    nsr_sched_pri{YType::uint32, "nsr-sched-pri"},
    nsr_sched_quant{YType::uint8, "nsr-sched-quant"},
    nsr_sched_remain_quant{YType::uint8, "nsr-sched-remain-quant"}
{
    yang_name = "nsr-pri"; yang_parent_name = "nsr-rtr-thd-sched";
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::NsrRtrThdSched::NsrPri::~NsrPri()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::NsrRtrThdSched::NsrPri::has_data() const
{
    return nsr_sched_enq_fails.is_set
	|| nsr_sched_evs_deqd.is_set
	|| nsr_sched_evs_in_q.is_set
	|| nsr_sched_evs_qd.is_set
	|| nsr_sched_max_evs.is_set
	|| nsr_sched_peak_q_len.is_set
	|| nsr_sched_pri.is_set
	|| nsr_sched_quant.is_set
	|| nsr_sched_remain_quant.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::NsrRtrThdSched::NsrPri::has_operation() const
{
    return is_set(operation)
	|| is_set(nsr_sched_enq_fails.operation)
	|| is_set(nsr_sched_evs_deqd.operation)
	|| is_set(nsr_sched_evs_in_q.operation)
	|| is_set(nsr_sched_evs_qd.operation)
	|| is_set(nsr_sched_max_evs.operation)
	|| is_set(nsr_sched_peak_q_len.operation)
	|| is_set(nsr_sched_pri.operation)
	|| is_set(nsr_sched_quant.operation)
	|| is_set(nsr_sched_remain_quant.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::NsrRtrThdSched::NsrPri::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsr-pri";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::NsrRtrThdSched::NsrPri::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NsrPri' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nsr_sched_enq_fails.is_set || is_set(nsr_sched_enq_fails.operation)) leaf_name_data.push_back(nsr_sched_enq_fails.get_name_leafdata());
    if (nsr_sched_evs_deqd.is_set || is_set(nsr_sched_evs_deqd.operation)) leaf_name_data.push_back(nsr_sched_evs_deqd.get_name_leafdata());
    if (nsr_sched_evs_in_q.is_set || is_set(nsr_sched_evs_in_q.operation)) leaf_name_data.push_back(nsr_sched_evs_in_q.get_name_leafdata());
    if (nsr_sched_evs_qd.is_set || is_set(nsr_sched_evs_qd.operation)) leaf_name_data.push_back(nsr_sched_evs_qd.get_name_leafdata());
    if (nsr_sched_max_evs.is_set || is_set(nsr_sched_max_evs.operation)) leaf_name_data.push_back(nsr_sched_max_evs.get_name_leafdata());
    if (nsr_sched_peak_q_len.is_set || is_set(nsr_sched_peak_q_len.operation)) leaf_name_data.push_back(nsr_sched_peak_q_len.get_name_leafdata());
    if (nsr_sched_pri.is_set || is_set(nsr_sched_pri.operation)) leaf_name_data.push_back(nsr_sched_pri.get_name_leafdata());
    if (nsr_sched_quant.is_set || is_set(nsr_sched_quant.operation)) leaf_name_data.push_back(nsr_sched_quant.get_name_leafdata());
    if (nsr_sched_remain_quant.is_set || is_set(nsr_sched_remain_quant.operation)) leaf_name_data.push_back(nsr_sched_remain_quant.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::NsrRtrThdSched::NsrPri::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::NsrRtrThdSched::NsrPri::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::NsrRtrThdSched::NsrPri::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nsr-sched-enq-fails")
    {
        nsr_sched_enq_fails = value;
    }
    if(value_path == "nsr-sched-evs-deqd")
    {
        nsr_sched_evs_deqd = value;
    }
    if(value_path == "nsr-sched-evs-in-q")
    {
        nsr_sched_evs_in_q = value;
    }
    if(value_path == "nsr-sched-evs-qd")
    {
        nsr_sched_evs_qd = value;
    }
    if(value_path == "nsr-sched-max-evs")
    {
        nsr_sched_max_evs = value;
    }
    if(value_path == "nsr-sched-peak-q-len")
    {
        nsr_sched_peak_q_len = value;
    }
    if(value_path == "nsr-sched-pri")
    {
        nsr_sched_pri = value;
    }
    if(value_path == "nsr-sched-quant")
    {
        nsr_sched_quant = value;
    }
    if(value_path == "nsr-sched-remain-quant")
    {
        nsr_sched_remain_quant = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::FrrStats::FrrStats()
    :
    fs_paths{YType::uint32, "fs-paths"},
    fs_paths_eligible{YType::uint32, "fs-paths-eligible"},
    fs_paths_protected{YType::uint32, "fs-paths-protected"}
{
    yang_name = "frr-stats"; yang_parent_name = "statistics";
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::FrrStats::~FrrStats()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::FrrStats::has_data() const
{
    return fs_paths.is_set
	|| fs_paths_eligible.is_set
	|| fs_paths_protected.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::FrrStats::has_operation() const
{
    return is_set(operation)
	|| is_set(fs_paths.operation)
	|| is_set(fs_paths_eligible.operation)
	|| is_set(fs_paths_protected.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Statistics::FrrStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-stats";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::Statistics::FrrStats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FrrStats' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fs_paths.is_set || is_set(fs_paths.operation)) leaf_name_data.push_back(fs_paths.get_name_leafdata());
    if (fs_paths_eligible.is_set || is_set(fs_paths_eligible.operation)) leaf_name_data.push_back(fs_paths_eligible.get_name_leafdata());
    if (fs_paths_protected.is_set || is_set(fs_paths_protected.operation)) leaf_name_data.push_back(fs_paths_protected.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Statistics::FrrStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::Statistics::FrrStats::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::FrrStats::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "fs-paths")
    {
        fs_paths = value;
    }
    if(value_path == "fs-paths-eligible")
    {
        fs_paths_eligible = value;
    }
    if(value_path == "fs-paths-protected")
    {
        fs_paths_protected = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::TeStats::TeStats()
    :
    adj_changes{YType::uint32, "adj-changes"},
    adj_gets{YType::uint32, "adj-gets"},
    control_batch_reads{YType::uint32, "control-batch-reads"},
    control_batch_writes{YType::uint32, "control-batch-writes"},
    control_disconnects{YType::uint32, "control-disconnects"},
    data_trans_completes{YType::uint32, "data-trans-completes"},
    fragment_announces{YType::uint32, "fragment-announces"},
    fragment_deletes{YType::uint32, "fragment-deletes"},
    link_batch_reads{YType::uint32, "link-batch-reads"},
    link_batch_writes{YType::uint32, "link-batch-writes"},
    link_floods{YType::uint32, "link-floods"},
    link_fragment_floods{YType::uint32, "link-fragment-floods"},
    lsp_gets{YType::uint32, "lsp-gets"},
    pce_br_lkup_num_dests{YType::uint32, "pce-br-lkup-num-dests"},
    pce_br_lookup{YType::uint32, "pce-br-lookup"},
    pce_br_resp_fails{YType::uint32, "pce-br-resp-fails"},
    pce_flood{YType::uint32, "pce-flood"},
    pce_get{YType::uint32, "pce-get"},
    pce_listen{YType::uint32, "pce-listen"},
    pce_node_announce_batches{YType::uint32, "pce-node-announce-batches"},
    pce_node_delete_batches{YType::uint32, "pce-node-delete-batches"},
    pce_node_send_fails{YType::uint32, "pce-node-send-fails"},
    pce_num_node_announce{YType::uint32, "pce-num-node-announce"},
    pce_num_node_delete{YType::uint32, "pce-num-node-delete"},
    pce_stoplisten{YType::uint32, "pce-stoplisten"},
    sr_num_area_enabled{YType::uint32, "sr-num-area-enabled"},
    te_connected{YType::boolean, "te-connected"},
    te_disconnects{YType::uint32, "te-disconnects"},
    te_sr_idt_sent{YType::boolean, "te-sr-idt-sent"},
    te_sr_path_reg_idt_recvd{YType::boolean, "te-sr-path-reg-idt-recvd"},
    total_tunnels{YType::uint32, "total-tunnels"},
    tunnel_announces{YType::uint32, "tunnel-announces"}
{
    yang_name = "te-stats"; yang_parent_name = "statistics";
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::TeStats::~TeStats()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::TeStats::has_data() const
{
    return adj_changes.is_set
	|| adj_gets.is_set
	|| control_batch_reads.is_set
	|| control_batch_writes.is_set
	|| control_disconnects.is_set
	|| data_trans_completes.is_set
	|| fragment_announces.is_set
	|| fragment_deletes.is_set
	|| link_batch_reads.is_set
	|| link_batch_writes.is_set
	|| link_floods.is_set
	|| link_fragment_floods.is_set
	|| lsp_gets.is_set
	|| pce_br_lkup_num_dests.is_set
	|| pce_br_lookup.is_set
	|| pce_br_resp_fails.is_set
	|| pce_flood.is_set
	|| pce_get.is_set
	|| pce_listen.is_set
	|| pce_node_announce_batches.is_set
	|| pce_node_delete_batches.is_set
	|| pce_node_send_fails.is_set
	|| pce_num_node_announce.is_set
	|| pce_num_node_delete.is_set
	|| pce_stoplisten.is_set
	|| sr_num_area_enabled.is_set
	|| te_connected.is_set
	|| te_disconnects.is_set
	|| te_sr_idt_sent.is_set
	|| te_sr_path_reg_idt_recvd.is_set
	|| total_tunnels.is_set
	|| tunnel_announces.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::TeStats::has_operation() const
{
    return is_set(operation)
	|| is_set(adj_changes.operation)
	|| is_set(adj_gets.operation)
	|| is_set(control_batch_reads.operation)
	|| is_set(control_batch_writes.operation)
	|| is_set(control_disconnects.operation)
	|| is_set(data_trans_completes.operation)
	|| is_set(fragment_announces.operation)
	|| is_set(fragment_deletes.operation)
	|| is_set(link_batch_reads.operation)
	|| is_set(link_batch_writes.operation)
	|| is_set(link_floods.operation)
	|| is_set(link_fragment_floods.operation)
	|| is_set(lsp_gets.operation)
	|| is_set(pce_br_lkup_num_dests.operation)
	|| is_set(pce_br_lookup.operation)
	|| is_set(pce_br_resp_fails.operation)
	|| is_set(pce_flood.operation)
	|| is_set(pce_get.operation)
	|| is_set(pce_listen.operation)
	|| is_set(pce_node_announce_batches.operation)
	|| is_set(pce_node_delete_batches.operation)
	|| is_set(pce_node_send_fails.operation)
	|| is_set(pce_num_node_announce.operation)
	|| is_set(pce_num_node_delete.operation)
	|| is_set(pce_stoplisten.operation)
	|| is_set(sr_num_area_enabled.operation)
	|| is_set(te_connected.operation)
	|| is_set(te_disconnects.operation)
	|| is_set(te_sr_idt_sent.operation)
	|| is_set(te_sr_path_reg_idt_recvd.operation)
	|| is_set(total_tunnels.operation)
	|| is_set(tunnel_announces.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Statistics::TeStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-stats";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::Statistics::TeStats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TeStats' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adj_changes.is_set || is_set(adj_changes.operation)) leaf_name_data.push_back(adj_changes.get_name_leafdata());
    if (adj_gets.is_set || is_set(adj_gets.operation)) leaf_name_data.push_back(adj_gets.get_name_leafdata());
    if (control_batch_reads.is_set || is_set(control_batch_reads.operation)) leaf_name_data.push_back(control_batch_reads.get_name_leafdata());
    if (control_batch_writes.is_set || is_set(control_batch_writes.operation)) leaf_name_data.push_back(control_batch_writes.get_name_leafdata());
    if (control_disconnects.is_set || is_set(control_disconnects.operation)) leaf_name_data.push_back(control_disconnects.get_name_leafdata());
    if (data_trans_completes.is_set || is_set(data_trans_completes.operation)) leaf_name_data.push_back(data_trans_completes.get_name_leafdata());
    if (fragment_announces.is_set || is_set(fragment_announces.operation)) leaf_name_data.push_back(fragment_announces.get_name_leafdata());
    if (fragment_deletes.is_set || is_set(fragment_deletes.operation)) leaf_name_data.push_back(fragment_deletes.get_name_leafdata());
    if (link_batch_reads.is_set || is_set(link_batch_reads.operation)) leaf_name_data.push_back(link_batch_reads.get_name_leafdata());
    if (link_batch_writes.is_set || is_set(link_batch_writes.operation)) leaf_name_data.push_back(link_batch_writes.get_name_leafdata());
    if (link_floods.is_set || is_set(link_floods.operation)) leaf_name_data.push_back(link_floods.get_name_leafdata());
    if (link_fragment_floods.is_set || is_set(link_fragment_floods.operation)) leaf_name_data.push_back(link_fragment_floods.get_name_leafdata());
    if (lsp_gets.is_set || is_set(lsp_gets.operation)) leaf_name_data.push_back(lsp_gets.get_name_leafdata());
    if (pce_br_lkup_num_dests.is_set || is_set(pce_br_lkup_num_dests.operation)) leaf_name_data.push_back(pce_br_lkup_num_dests.get_name_leafdata());
    if (pce_br_lookup.is_set || is_set(pce_br_lookup.operation)) leaf_name_data.push_back(pce_br_lookup.get_name_leafdata());
    if (pce_br_resp_fails.is_set || is_set(pce_br_resp_fails.operation)) leaf_name_data.push_back(pce_br_resp_fails.get_name_leafdata());
    if (pce_flood.is_set || is_set(pce_flood.operation)) leaf_name_data.push_back(pce_flood.get_name_leafdata());
    if (pce_get.is_set || is_set(pce_get.operation)) leaf_name_data.push_back(pce_get.get_name_leafdata());
    if (pce_listen.is_set || is_set(pce_listen.operation)) leaf_name_data.push_back(pce_listen.get_name_leafdata());
    if (pce_node_announce_batches.is_set || is_set(pce_node_announce_batches.operation)) leaf_name_data.push_back(pce_node_announce_batches.get_name_leafdata());
    if (pce_node_delete_batches.is_set || is_set(pce_node_delete_batches.operation)) leaf_name_data.push_back(pce_node_delete_batches.get_name_leafdata());
    if (pce_node_send_fails.is_set || is_set(pce_node_send_fails.operation)) leaf_name_data.push_back(pce_node_send_fails.get_name_leafdata());
    if (pce_num_node_announce.is_set || is_set(pce_num_node_announce.operation)) leaf_name_data.push_back(pce_num_node_announce.get_name_leafdata());
    if (pce_num_node_delete.is_set || is_set(pce_num_node_delete.operation)) leaf_name_data.push_back(pce_num_node_delete.get_name_leafdata());
    if (pce_stoplisten.is_set || is_set(pce_stoplisten.operation)) leaf_name_data.push_back(pce_stoplisten.get_name_leafdata());
    if (sr_num_area_enabled.is_set || is_set(sr_num_area_enabled.operation)) leaf_name_data.push_back(sr_num_area_enabled.get_name_leafdata());
    if (te_connected.is_set || is_set(te_connected.operation)) leaf_name_data.push_back(te_connected.get_name_leafdata());
    if (te_disconnects.is_set || is_set(te_disconnects.operation)) leaf_name_data.push_back(te_disconnects.get_name_leafdata());
    if (te_sr_idt_sent.is_set || is_set(te_sr_idt_sent.operation)) leaf_name_data.push_back(te_sr_idt_sent.get_name_leafdata());
    if (te_sr_path_reg_idt_recvd.is_set || is_set(te_sr_path_reg_idt_recvd.operation)) leaf_name_data.push_back(te_sr_path_reg_idt_recvd.get_name_leafdata());
    if (total_tunnels.is_set || is_set(total_tunnels.operation)) leaf_name_data.push_back(total_tunnels.get_name_leafdata());
    if (tunnel_announces.is_set || is_set(tunnel_announces.operation)) leaf_name_data.push_back(tunnel_announces.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Statistics::TeStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::Statistics::TeStats::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::TeStats::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "adj-changes")
    {
        adj_changes = value;
    }
    if(value_path == "adj-gets")
    {
        adj_gets = value;
    }
    if(value_path == "control-batch-reads")
    {
        control_batch_reads = value;
    }
    if(value_path == "control-batch-writes")
    {
        control_batch_writes = value;
    }
    if(value_path == "control-disconnects")
    {
        control_disconnects = value;
    }
    if(value_path == "data-trans-completes")
    {
        data_trans_completes = value;
    }
    if(value_path == "fragment-announces")
    {
        fragment_announces = value;
    }
    if(value_path == "fragment-deletes")
    {
        fragment_deletes = value;
    }
    if(value_path == "link-batch-reads")
    {
        link_batch_reads = value;
    }
    if(value_path == "link-batch-writes")
    {
        link_batch_writes = value;
    }
    if(value_path == "link-floods")
    {
        link_floods = value;
    }
    if(value_path == "link-fragment-floods")
    {
        link_fragment_floods = value;
    }
    if(value_path == "lsp-gets")
    {
        lsp_gets = value;
    }
    if(value_path == "pce-br-lkup-num-dests")
    {
        pce_br_lkup_num_dests = value;
    }
    if(value_path == "pce-br-lookup")
    {
        pce_br_lookup = value;
    }
    if(value_path == "pce-br-resp-fails")
    {
        pce_br_resp_fails = value;
    }
    if(value_path == "pce-flood")
    {
        pce_flood = value;
    }
    if(value_path == "pce-get")
    {
        pce_get = value;
    }
    if(value_path == "pce-listen")
    {
        pce_listen = value;
    }
    if(value_path == "pce-node-announce-batches")
    {
        pce_node_announce_batches = value;
    }
    if(value_path == "pce-node-delete-batches")
    {
        pce_node_delete_batches = value;
    }
    if(value_path == "pce-node-send-fails")
    {
        pce_node_send_fails = value;
    }
    if(value_path == "pce-num-node-announce")
    {
        pce_num_node_announce = value;
    }
    if(value_path == "pce-num-node-delete")
    {
        pce_num_node_delete = value;
    }
    if(value_path == "pce-stoplisten")
    {
        pce_stoplisten = value;
    }
    if(value_path == "sr-num-area-enabled")
    {
        sr_num_area_enabled = value;
    }
    if(value_path == "te-connected")
    {
        te_connected = value;
    }
    if(value_path == "te-disconnects")
    {
        te_disconnects = value;
    }
    if(value_path == "te-sr-idt-sent")
    {
        te_sr_idt_sent = value;
    }
    if(value_path == "te-sr-path-reg-idt-recvd")
    {
        te_sr_path_reg_idt_recvd = value;
    }
    if(value_path == "total-tunnels")
    {
        total_tunnels = value;
    }
    if(value_path == "tunnel-announces")
    {
        tunnel_announces = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::ProtocolStats::ProtocolStats()
    :
    checksumerr{YType::uint32, "checksumerr"},
    h_input_ack{YType::uint32, "h-input-ack"},
    h_input_dbdes{YType::uint32, "h-input-dbdes"},
    h_input_lsupd{YType::uint32, "h-input-lsupd"},
    h_input_req{YType::uint32, "h-input-req"},
    input_ack{YType::uint32, "input-ack"},
    input_ack_lsa{YType::uint32, "input-ack-lsa"},
    input_autherr{YType::uint32, "input-autherr"},
    input_dbdes{YType::uint32, "input-dbdes"},
    input_dbdes_lsa{YType::uint32, "input-dbdes-lsa"},
    input_hello{YType::uint32, "input-hello"},
    input_lsupd{YType::uint32, "input-lsupd"},
    input_lsupd_lsa{YType::uint32, "input-lsupd-lsa"},
    input_req{YType::uint32, "input-req"},
    input_req_lsa{YType::uint32, "input-req-lsa"},
    inputs{YType::uint32, "inputs"},
    output_ack{YType::uint32, "output-ack"},
    output_ack_lsa{YType::uint32, "output-ack-lsa"},
    output_autherr{YType::uint32, "output-autherr"},
    output_dbdes{YType::uint32, "output-dbdes"},
    output_dbdes_lsa{YType::uint32, "output-dbdes-lsa"},
    output_hello{YType::uint32, "output-hello"},
    output_lsupd{YType::uint32, "output-lsupd"},
    output_lsupd_lsa{YType::uint32, "output-lsupd-lsa"},
    output_req{YType::uint32, "output-req"},
    output_req_lsa{YType::uint32, "output-req-lsa"},
    outputs{YType::uint32, "outputs"}
{
    yang_name = "protocol-stats"; yang_parent_name = "statistics";
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::ProtocolStats::~ProtocolStats()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::ProtocolStats::has_data() const
{
    return checksumerr.is_set
	|| h_input_ack.is_set
	|| h_input_dbdes.is_set
	|| h_input_lsupd.is_set
	|| h_input_req.is_set
	|| input_ack.is_set
	|| input_ack_lsa.is_set
	|| input_autherr.is_set
	|| input_dbdes.is_set
	|| input_dbdes_lsa.is_set
	|| input_hello.is_set
	|| input_lsupd.is_set
	|| input_lsupd_lsa.is_set
	|| input_req.is_set
	|| input_req_lsa.is_set
	|| inputs.is_set
	|| output_ack.is_set
	|| output_ack_lsa.is_set
	|| output_autherr.is_set
	|| output_dbdes.is_set
	|| output_dbdes_lsa.is_set
	|| output_hello.is_set
	|| output_lsupd.is_set
	|| output_lsupd_lsa.is_set
	|| output_req.is_set
	|| output_req_lsa.is_set
	|| outputs.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::ProtocolStats::has_operation() const
{
    return is_set(operation)
	|| is_set(checksumerr.operation)
	|| is_set(h_input_ack.operation)
	|| is_set(h_input_dbdes.operation)
	|| is_set(h_input_lsupd.operation)
	|| is_set(h_input_req.operation)
	|| is_set(input_ack.operation)
	|| is_set(input_ack_lsa.operation)
	|| is_set(input_autherr.operation)
	|| is_set(input_dbdes.operation)
	|| is_set(input_dbdes_lsa.operation)
	|| is_set(input_hello.operation)
	|| is_set(input_lsupd.operation)
	|| is_set(input_lsupd_lsa.operation)
	|| is_set(input_req.operation)
	|| is_set(input_req_lsa.operation)
	|| is_set(inputs.operation)
	|| is_set(output_ack.operation)
	|| is_set(output_ack_lsa.operation)
	|| is_set(output_autherr.operation)
	|| is_set(output_dbdes.operation)
	|| is_set(output_dbdes_lsa.operation)
	|| is_set(output_hello.operation)
	|| is_set(output_lsupd.operation)
	|| is_set(output_lsupd_lsa.operation)
	|| is_set(output_req.operation)
	|| is_set(output_req_lsa.operation)
	|| is_set(outputs.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Statistics::ProtocolStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol-stats";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::Statistics::ProtocolStats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ProtocolStats' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (checksumerr.is_set || is_set(checksumerr.operation)) leaf_name_data.push_back(checksumerr.get_name_leafdata());
    if (h_input_ack.is_set || is_set(h_input_ack.operation)) leaf_name_data.push_back(h_input_ack.get_name_leafdata());
    if (h_input_dbdes.is_set || is_set(h_input_dbdes.operation)) leaf_name_data.push_back(h_input_dbdes.get_name_leafdata());
    if (h_input_lsupd.is_set || is_set(h_input_lsupd.operation)) leaf_name_data.push_back(h_input_lsupd.get_name_leafdata());
    if (h_input_req.is_set || is_set(h_input_req.operation)) leaf_name_data.push_back(h_input_req.get_name_leafdata());
    if (input_ack.is_set || is_set(input_ack.operation)) leaf_name_data.push_back(input_ack.get_name_leafdata());
    if (input_ack_lsa.is_set || is_set(input_ack_lsa.operation)) leaf_name_data.push_back(input_ack_lsa.get_name_leafdata());
    if (input_autherr.is_set || is_set(input_autherr.operation)) leaf_name_data.push_back(input_autherr.get_name_leafdata());
    if (input_dbdes.is_set || is_set(input_dbdes.operation)) leaf_name_data.push_back(input_dbdes.get_name_leafdata());
    if (input_dbdes_lsa.is_set || is_set(input_dbdes_lsa.operation)) leaf_name_data.push_back(input_dbdes_lsa.get_name_leafdata());
    if (input_hello.is_set || is_set(input_hello.operation)) leaf_name_data.push_back(input_hello.get_name_leafdata());
    if (input_lsupd.is_set || is_set(input_lsupd.operation)) leaf_name_data.push_back(input_lsupd.get_name_leafdata());
    if (input_lsupd_lsa.is_set || is_set(input_lsupd_lsa.operation)) leaf_name_data.push_back(input_lsupd_lsa.get_name_leafdata());
    if (input_req.is_set || is_set(input_req.operation)) leaf_name_data.push_back(input_req.get_name_leafdata());
    if (input_req_lsa.is_set || is_set(input_req_lsa.operation)) leaf_name_data.push_back(input_req_lsa.get_name_leafdata());
    if (inputs.is_set || is_set(inputs.operation)) leaf_name_data.push_back(inputs.get_name_leafdata());
    if (output_ack.is_set || is_set(output_ack.operation)) leaf_name_data.push_back(output_ack.get_name_leafdata());
    if (output_ack_lsa.is_set || is_set(output_ack_lsa.operation)) leaf_name_data.push_back(output_ack_lsa.get_name_leafdata());
    if (output_autherr.is_set || is_set(output_autherr.operation)) leaf_name_data.push_back(output_autherr.get_name_leafdata());
    if (output_dbdes.is_set || is_set(output_dbdes.operation)) leaf_name_data.push_back(output_dbdes.get_name_leafdata());
    if (output_dbdes_lsa.is_set || is_set(output_dbdes_lsa.operation)) leaf_name_data.push_back(output_dbdes_lsa.get_name_leafdata());
    if (output_hello.is_set || is_set(output_hello.operation)) leaf_name_data.push_back(output_hello.get_name_leafdata());
    if (output_lsupd.is_set || is_set(output_lsupd.operation)) leaf_name_data.push_back(output_lsupd.get_name_leafdata());
    if (output_lsupd_lsa.is_set || is_set(output_lsupd_lsa.operation)) leaf_name_data.push_back(output_lsupd_lsa.get_name_leafdata());
    if (output_req.is_set || is_set(output_req.operation)) leaf_name_data.push_back(output_req.get_name_leafdata());
    if (output_req_lsa.is_set || is_set(output_req_lsa.operation)) leaf_name_data.push_back(output_req_lsa.get_name_leafdata());
    if (outputs.is_set || is_set(outputs.operation)) leaf_name_data.push_back(outputs.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Statistics::ProtocolStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::Statistics::ProtocolStats::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::ProtocolStats::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "checksumerr")
    {
        checksumerr = value;
    }
    if(value_path == "h-input-ack")
    {
        h_input_ack = value;
    }
    if(value_path == "h-input-dbdes")
    {
        h_input_dbdes = value;
    }
    if(value_path == "h-input-lsupd")
    {
        h_input_lsupd = value;
    }
    if(value_path == "h-input-req")
    {
        h_input_req = value;
    }
    if(value_path == "input-ack")
    {
        input_ack = value;
    }
    if(value_path == "input-ack-lsa")
    {
        input_ack_lsa = value;
    }
    if(value_path == "input-autherr")
    {
        input_autherr = value;
    }
    if(value_path == "input-dbdes")
    {
        input_dbdes = value;
    }
    if(value_path == "input-dbdes-lsa")
    {
        input_dbdes_lsa = value;
    }
    if(value_path == "input-hello")
    {
        input_hello = value;
    }
    if(value_path == "input-lsupd")
    {
        input_lsupd = value;
    }
    if(value_path == "input-lsupd-lsa")
    {
        input_lsupd_lsa = value;
    }
    if(value_path == "input-req")
    {
        input_req = value;
    }
    if(value_path == "input-req-lsa")
    {
        input_req_lsa = value;
    }
    if(value_path == "inputs")
    {
        inputs = value;
    }
    if(value_path == "output-ack")
    {
        output_ack = value;
    }
    if(value_path == "output-ack-lsa")
    {
        output_ack_lsa = value;
    }
    if(value_path == "output-autherr")
    {
        output_autherr = value;
    }
    if(value_path == "output-dbdes")
    {
        output_dbdes = value;
    }
    if(value_path == "output-dbdes-lsa")
    {
        output_dbdes_lsa = value;
    }
    if(value_path == "output-hello")
    {
        output_hello = value;
    }
    if(value_path == "output-lsupd")
    {
        output_lsupd = value;
    }
    if(value_path == "output-lsupd-lsa")
    {
        output_lsupd_lsa = value;
    }
    if(value_path == "output-req")
    {
        output_req = value;
    }
    if(value_path == "output-req-lsa")
    {
        output_req_lsa = value;
    }
    if(value_path == "outputs")
    {
        outputs = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::RawIoStats::RawIoStats()
    :
    disconnects{YType::uint32, "disconnects"},
    in_bytes_rcv{YType::uint32, "in-bytes-rcv"},
    in_no_mem_discarded{YType::uint32, "in-no-mem-discarded"},
    in_raw_event{YType::uint32, "in-raw-event"},
    in_rcv{YType::uint32, "in-rcv"},
    in_short_msg_discarded{YType::uint32, "in-short-msg-discarded"},
    in_standby_discarded{YType::uint32, "in-standby-discarded"},
    nsr_not_ready_discarded{YType::uint32, "nsr-not-ready-discarded"},
    out_bytes_sent{YType::uint32, "out-bytes-sent"},
    out_ipv4_hdr_err_discarded{YType::uint32, "out-ipv4-hdr-err-discarded"},
    out_no_conn_discarded{YType::uint32, "out-no-conn-discarded"},
    out_no_pak_discarded{YType::uint32, "out-no-pak-discarded"},
    out_null_src_discarded{YType::uint32, "out-null-src-discarded"},
    out_send_pak_err_discarded{YType::uint32, "out-send-pak-err-discarded"},
    out_sent{YType::uint32, "out-sent"},
    raw_connected{YType::boolean, "raw-connected"},
    sl_raw_connected{YType::boolean, "sl-raw-connected"}
{
    yang_name = "raw-io-stats"; yang_parent_name = "statistics";
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::RawIoStats::~RawIoStats()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::RawIoStats::has_data() const
{
    return disconnects.is_set
	|| in_bytes_rcv.is_set
	|| in_no_mem_discarded.is_set
	|| in_raw_event.is_set
	|| in_rcv.is_set
	|| in_short_msg_discarded.is_set
	|| in_standby_discarded.is_set
	|| nsr_not_ready_discarded.is_set
	|| out_bytes_sent.is_set
	|| out_ipv4_hdr_err_discarded.is_set
	|| out_no_conn_discarded.is_set
	|| out_no_pak_discarded.is_set
	|| out_null_src_discarded.is_set
	|| out_send_pak_err_discarded.is_set
	|| out_sent.is_set
	|| raw_connected.is_set
	|| sl_raw_connected.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::RawIoStats::has_operation() const
{
    return is_set(operation)
	|| is_set(disconnects.operation)
	|| is_set(in_bytes_rcv.operation)
	|| is_set(in_no_mem_discarded.operation)
	|| is_set(in_raw_event.operation)
	|| is_set(in_rcv.operation)
	|| is_set(in_short_msg_discarded.operation)
	|| is_set(in_standby_discarded.operation)
	|| is_set(nsr_not_ready_discarded.operation)
	|| is_set(out_bytes_sent.operation)
	|| is_set(out_ipv4_hdr_err_discarded.operation)
	|| is_set(out_no_conn_discarded.operation)
	|| is_set(out_no_pak_discarded.operation)
	|| is_set(out_null_src_discarded.operation)
	|| is_set(out_send_pak_err_discarded.operation)
	|| is_set(out_sent.operation)
	|| is_set(raw_connected.operation)
	|| is_set(sl_raw_connected.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Statistics::RawIoStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "raw-io-stats";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::Statistics::RawIoStats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RawIoStats' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disconnects.is_set || is_set(disconnects.operation)) leaf_name_data.push_back(disconnects.get_name_leafdata());
    if (in_bytes_rcv.is_set || is_set(in_bytes_rcv.operation)) leaf_name_data.push_back(in_bytes_rcv.get_name_leafdata());
    if (in_no_mem_discarded.is_set || is_set(in_no_mem_discarded.operation)) leaf_name_data.push_back(in_no_mem_discarded.get_name_leafdata());
    if (in_raw_event.is_set || is_set(in_raw_event.operation)) leaf_name_data.push_back(in_raw_event.get_name_leafdata());
    if (in_rcv.is_set || is_set(in_rcv.operation)) leaf_name_data.push_back(in_rcv.get_name_leafdata());
    if (in_short_msg_discarded.is_set || is_set(in_short_msg_discarded.operation)) leaf_name_data.push_back(in_short_msg_discarded.get_name_leafdata());
    if (in_standby_discarded.is_set || is_set(in_standby_discarded.operation)) leaf_name_data.push_back(in_standby_discarded.get_name_leafdata());
    if (nsr_not_ready_discarded.is_set || is_set(nsr_not_ready_discarded.operation)) leaf_name_data.push_back(nsr_not_ready_discarded.get_name_leafdata());
    if (out_bytes_sent.is_set || is_set(out_bytes_sent.operation)) leaf_name_data.push_back(out_bytes_sent.get_name_leafdata());
    if (out_ipv4_hdr_err_discarded.is_set || is_set(out_ipv4_hdr_err_discarded.operation)) leaf_name_data.push_back(out_ipv4_hdr_err_discarded.get_name_leafdata());
    if (out_no_conn_discarded.is_set || is_set(out_no_conn_discarded.operation)) leaf_name_data.push_back(out_no_conn_discarded.get_name_leafdata());
    if (out_no_pak_discarded.is_set || is_set(out_no_pak_discarded.operation)) leaf_name_data.push_back(out_no_pak_discarded.get_name_leafdata());
    if (out_null_src_discarded.is_set || is_set(out_null_src_discarded.operation)) leaf_name_data.push_back(out_null_src_discarded.get_name_leafdata());
    if (out_send_pak_err_discarded.is_set || is_set(out_send_pak_err_discarded.operation)) leaf_name_data.push_back(out_send_pak_err_discarded.get_name_leafdata());
    if (out_sent.is_set || is_set(out_sent.operation)) leaf_name_data.push_back(out_sent.get_name_leafdata());
    if (raw_connected.is_set || is_set(raw_connected.operation)) leaf_name_data.push_back(raw_connected.get_name_leafdata());
    if (sl_raw_connected.is_set || is_set(sl_raw_connected.operation)) leaf_name_data.push_back(sl_raw_connected.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Statistics::RawIoStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::Statistics::RawIoStats::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::RawIoStats::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "disconnects")
    {
        disconnects = value;
    }
    if(value_path == "in-bytes-rcv")
    {
        in_bytes_rcv = value;
    }
    if(value_path == "in-no-mem-discarded")
    {
        in_no_mem_discarded = value;
    }
    if(value_path == "in-raw-event")
    {
        in_raw_event = value;
    }
    if(value_path == "in-rcv")
    {
        in_rcv = value;
    }
    if(value_path == "in-short-msg-discarded")
    {
        in_short_msg_discarded = value;
    }
    if(value_path == "in-standby-discarded")
    {
        in_standby_discarded = value;
    }
    if(value_path == "nsr-not-ready-discarded")
    {
        nsr_not_ready_discarded = value;
    }
    if(value_path == "out-bytes-sent")
    {
        out_bytes_sent = value;
    }
    if(value_path == "out-ipv4-hdr-err-discarded")
    {
        out_ipv4_hdr_err_discarded = value;
    }
    if(value_path == "out-no-conn-discarded")
    {
        out_no_conn_discarded = value;
    }
    if(value_path == "out-no-pak-discarded")
    {
        out_no_pak_discarded = value;
    }
    if(value_path == "out-null-src-discarded")
    {
        out_null_src_discarded = value;
    }
    if(value_path == "out-send-pak-err-discarded")
    {
        out_send_pak_err_discarded = value;
    }
    if(value_path == "out-sent")
    {
        out_sent = value;
    }
    if(value_path == "raw-connected")
    {
        raw_connected = value;
    }
    if(value_path == "sl-raw-connected")
    {
        sl_raw_connected = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntries()
{
    yang_name = "interface-stats-entries"; yang_parent_name = "statistics";
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::InterfaceStatsEntries::~InterfaceStatsEntries()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::InterfaceStatsEntries::has_data() const
{
    for (std::size_t index=0; index<interface_stats_entry.size(); index++)
    {
        if(interface_stats_entry[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::InterfaceStatsEntries::has_operation() const
{
    for (std::size_t index=0; index<interface_stats_entry.size(); index++)
    {
        if(interface_stats_entry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Statistics::InterfaceStatsEntries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-stats-entries";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::Statistics::InterfaceStatsEntries::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfaceStatsEntries' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Statistics::InterfaceStatsEntries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "interface-stats-entry")
    {
        for(auto const & c : interface_stats_entry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry>();
        c->parent = this;
        interface_stats_entry.push_back(std::move(c));
        children[segment_path] = interface_stats_entry.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::Statistics::InterfaceStatsEntries::get_children()
{
    for (auto const & c : interface_stats_entry)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::InterfaceStatsEntries::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::InterfaceStatsEntry()
    :
    interface_name{YType::str, "interface-name"},
    handle{YType::str, "handle"},
    if_name_str{YType::str, "if-name-str"}
{
    yang_name = "interface-stats-entry"; yang_parent_name = "interface-stats-entries";
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::~InterfaceStatsEntry()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::has_data() const
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

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::has_operation() const
{
    for (std::size_t index=0; index<if_entry.size(); index++)
    {
        if(if_entry[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(handle.operation)
	|| is_set(if_name_str.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-stats-entry" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfaceStatsEntry' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (handle.is_set || is_set(handle.operation)) leaf_name_data.push_back(handle.get_name_leafdata());
    if (if_name_str.is_set || is_set(if_name_str.operation)) leaf_name_data.push_back(if_name_str.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "if-entry")
    {
        for(auto const & c : if_entry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry>();
        c->parent = this;
        if_entry.push_back(std::move(c));
        children[segment_path] = if_entry.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::get_children()
{
    for (auto const & c : if_entry)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "handle")
    {
        handle = value;
    }
    if(value_path == "if-name-str")
    {
        if_name_str = value;
    }
}

const Enum::YLeaf NsfRtrEnum::mgmt_nsf_rtr_none {0, "mgmt-nsf-rtr-none"};
const Enum::YLeaf NsfRtrEnum::mgmt_nsf_rtr_requester {1, "mgmt-nsf-rtr-requester"};
const Enum::YLeaf NsfRtrEnum::mgmt_nsf_rtr_receiver {2, "mgmt-nsf-rtr-receiver"};

const Enum::YLeaf IpfrrTbrkrEnum::downstream {0, "downstream"};
const Enum::YLeaf IpfrrTbrkrEnum::line_card_disjoint {1, "line-card-disjoint"};
const Enum::YLeaf IpfrrTbrkrEnum::backup_metric {2, "backup-metric"};
const Enum::YLeaf IpfrrTbrkrEnum::node_protect {3, "node-protect"};
const Enum::YLeaf IpfrrTbrkrEnum::primary_path {4, "primary-path"};
const Enum::YLeaf IpfrrTbrkrEnum::secondary_path {5, "secondary-path"};
const Enum::YLeaf IpfrrTbrkrEnum::srlg_disjoint {6, "srlg-disjoint"};
const Enum::YLeaf IpfrrTbrkrEnum::tunnel {7, "tunnel"};
const Enum::YLeaf IpfrrTbrkrEnum::post_convergence {8, "post-convergence"};

const Enum::YLeaf IgpteLibBwModelEnum::rdm {0, "rdm"};
const Enum::YLeaf IgpteLibBwModelEnum::mam {1, "mam"};
const Enum::YLeaf IgpteLibBwModelEnum::not_set {2, "not-set"};

const Enum::YLeaf LinkSubnetEnum::mgmt_igp_subnet_type_none {0, "mgmt-igp-subnet-type-none"};
const Enum::YLeaf LinkSubnetEnum::mgmt_igp_subnet_type_p2p {1, "mgmt-igp-subnet-type-p2p"};
const Enum::YLeaf LinkSubnetEnum::mgmt_igp_subnet_type_broadcast {2, "mgmt-igp-subnet-type-broadcast"};
const Enum::YLeaf LinkSubnetEnum::mgmt_igp_subnet_type_nbma {3, "mgmt-igp-subnet-type-nbma"};
const Enum::YLeaf LinkSubnetEnum::mgmt_igp_subnet_type_p2mp {4, "mgmt-igp-subnet-type-p2mp"};
const Enum::YLeaf LinkSubnetEnum::mgmt_igp_subnet_type_loop_back {5, "mgmt-igp-subnet-type-loop-back"};
const Enum::YLeaf LinkSubnetEnum::mgmt_igp_subnet_type_max {6, "mgmt-igp-subnet-type-max"};

const Enum::YLeaf AuthenticationEnum::mgmt_ospf_auth_none {0, "mgmt-ospf-auth-none"};
const Enum::YLeaf AuthenticationEnum::mgmt_ospf_auth_ct {1, "mgmt-ospf-auth-ct"};
const Enum::YLeaf AuthenticationEnum::mgmt_ospf_auth_md {2, "mgmt-ospf-auth-md"};
const Enum::YLeaf AuthenticationEnum::mgmt_ospf_auth_kc {3, "mgmt-ospf-auth-kc"};

const Enum::YLeaf UloopAvoidanceEnum::none {0, "none"};
const Enum::YLeaf UloopAvoidanceEnum::protected_prefixes {1, "protected-prefixes"};
const Enum::YLeaf UloopAvoidanceEnum::all_prefixes {2, "all-prefixes"};
const Enum::YLeaf UloopAvoidanceEnum::segment_routing_uloop {3, "segment-routing-uloop"};

const Enum::YLeaf OspfLinkTypesEnum::mgmt_rtr_link {1, "mgmt-rtr-link"};
const Enum::YLeaf OspfLinkTypesEnum::mgmt_trans_link {2, "mgmt-trans-link"};
const Enum::YLeaf OspfLinkTypesEnum::mgmt_stub_net {3, "mgmt-stub-net"};
const Enum::YLeaf OspfLinkTypesEnum::mgmt_vitural_link {4, "mgmt-vitural-link"};

const Enum::YLeaf SrmsMiSrcEBEnum::none {0, "none"};
const Enum::YLeaf SrmsMiSrcEBEnum::local {1, "local"};
const Enum::YLeaf SrmsMiSrcEBEnum::remote {2, "remote"};

const Enum::YLeaf OspfInterfaceStateEnum::mgmt_ospf_ifs_down {0, "mgmt-ospf-ifs-down"};
const Enum::YLeaf OspfInterfaceStateEnum::mgmt_ospf_ifs_loop_back {1, "mgmt-ospf-ifs-loop-back"};
const Enum::YLeaf OspfInterfaceStateEnum::mgmt_ospf_ifs_waiting {2, "mgmt-ospf-ifs-waiting"};
const Enum::YLeaf OspfInterfaceStateEnum::mgmt_ospf_ifs_point_to_m_point {3, "mgmt-ospf-ifs-point-to-m-point"};
const Enum::YLeaf OspfInterfaceStateEnum::mgmt_ospf_ifs_point_to_point {4, "mgmt-ospf-ifs-point-to-point"};
const Enum::YLeaf OspfInterfaceStateEnum::mgmt_ospf_ifs_dr {5, "mgmt-ospf-ifs-dr"};
const Enum::YLeaf OspfInterfaceStateEnum::mgmt_ospf_ifs_backup {6, "mgmt-ospf-ifs-backup"};
const Enum::YLeaf OspfInterfaceStateEnum::mgmt_ospf_ifs_other {7, "mgmt-ospf-ifs-other"};

const Enum::YLeaf IpfrrEnum::none {0, "none"};
const Enum::YLeaf IpfrrEnum::per_link {1, "per-link"};
const Enum::YLeaf IpfrrEnum::per_prefix {2, "per-prefix"};

const Enum::YLeaf OspfSrgbStatusEnum::not_allocated {0, "not-allocated"};
const Enum::YLeaf OspfSrgbStatusEnum::pending {1, "pending"};
const Enum::YLeaf OspfSrgbStatusEnum::allocated {2, "allocated"};

const Enum::YLeaf InterfaceEnum::mgmt_if_broadcast {1, "mgmt-if-broadcast"};
const Enum::YLeaf InterfaceEnum::mgmt_if_nonbroadcast {2, "mgmt-if-nonbroadcast"};
const Enum::YLeaf InterfaceEnum::mgmt_if_point_to_point {3, "mgmt-if-point-to-point"};
const Enum::YLeaf InterfaceEnum::mgmt_if_point_to_m_point {4, "mgmt-if-point-to-m-point"};
const Enum::YLeaf InterfaceEnum::mgmt_if_p2mp_non_bcast {5, "mgmt-if-p2mp-non-bcast"};
const Enum::YLeaf InterfaceEnum::mgmt_if_virtual_link {6, "mgmt-if-virtual-link"};
const Enum::YLeaf InterfaceEnum::mgmt_if_sham_link {7, "mgmt-if-sham-link"};
const Enum::YLeaf InterfaceEnum::mgmt_if_loop_back {8, "mgmt-if-loop-back"};

const Enum::YLeaf InterfaceStateEnum::mgmt_ifs_unknown {0, "mgmt-ifs-unknown"};
const Enum::YLeaf InterfaceStateEnum::mgmt_ifs_admin_down {1, "mgmt-ifs-admin-down"};
const Enum::YLeaf InterfaceStateEnum::mgmt_ifs_down {2, "mgmt-ifs-down"};
const Enum::YLeaf InterfaceStateEnum::mgmt_ifs_up {3, "mgmt-ifs-up"};
const Enum::YLeaf InterfaceStateEnum::mgmt_ifs_shutdown {4, "mgmt-ifs-shutdown"};

const Enum::YLeaf ExMetricEnum::mgmt_ex_metric_type_none {0, "mgmt-ex-metric-type-none"};
const Enum::YLeaf ExMetricEnum::mgmt_ex_metric_type_1 {1, "mgmt-ex-metric-type-1"};
const Enum::YLeaf ExMetricEnum::mgmt_ex_metric_type_2 {2, "mgmt-ex-metric-type-2"};

const Enum::YLeaf GsStateEnum::mgmt_gs_init {0, "mgmt-gs-init"};
const Enum::YLeaf GsStateEnum::mgmt_gs_normal {1, "mgmt-gs-normal"};
const Enum::YLeaf GsStateEnum::mgmt_gs_delay {2, "mgmt-gs-delay"};
const Enum::YLeaf GsStateEnum::mgmt_gs_flush {3, "mgmt-gs-flush"};
const Enum::YLeaf GsStateEnum::mgmt_gs_hello {4, "mgmt-gs-hello"};
const Enum::YLeaf GsStateEnum::mgmt_gs_quiet {5, "mgmt-gs-quiet"};

const Enum::YLeaf OspfShOpqRiPceAddrTypesEnum::mgmt_ospf_opq_pce_addr_type_invalid {0, "mgmt-ospf-opq-pce-addr-type-invalid"};
const Enum::YLeaf OspfShOpqRiPceAddrTypesEnum::mgmt_ospf_opq_pce_addr_type_ipv4 {1, "mgmt-ospf-opq-pce-addr-type-ipv4"};
const Enum::YLeaf OspfShOpqRiPceAddrTypesEnum::mgmt_ospf_opq_pce_addr_type_ipv6 {2, "mgmt-ospf-opq-pce-addr-type-ipv6"};

const Enum::YLeaf MaxMetricSetReasonEnum::mgmt_max_metric_on_proc_migration {0, "mgmt-max-metric-on-proc-migration"};
const Enum::YLeaf MaxMetricSetReasonEnum::mgmt_max_metric_on_proc_restart {1, "mgmt-max-metric-on-proc-restart"};
const Enum::YLeaf MaxMetricSetReasonEnum::mgmt_max_metric_on_switchover {2, "mgmt-max-metric-on-switchover"};
const Enum::YLeaf MaxMetricSetReasonEnum::mgmt_max_metric_on_startup {3, "mgmt-max-metric-on-startup"};
const Enum::YLeaf MaxMetricSetReasonEnum::mgmt_max_metric_always {4, "mgmt-max-metric-always"};
const Enum::YLeaf MaxMetricSetReasonEnum::mgmt_max_metric_reason_none {5, "mgmt-max-metric-reason-none"};

const Enum::YLeaf OspfRouteEnum::mgmt_r_type_none {0, "mgmt-r-type-none"};
const Enum::YLeaf OspfRouteEnum::mgmt_r_type_other {1, "mgmt-r-type-other"};
const Enum::YLeaf OspfRouteEnum::mgmt_r_type_intra {2, "mgmt-r-type-intra"};
const Enum::YLeaf OspfRouteEnum::mgmt_r_type_inter {4, "mgmt-r-type-inter"};
const Enum::YLeaf OspfRouteEnum::mgmt_r_type_extern1 {8, "mgmt-r-type-extern1"};
const Enum::YLeaf OspfRouteEnum::mgmt_r_type_extern2 {16, "mgmt-r-type-extern2"};
const Enum::YLeaf OspfRouteEnum::mgmt_r_type_isis_sum {32, "mgmt-r-type-isis-sum"};
const Enum::YLeaf OspfRouteEnum::mgmt_r_type_isis_l1 {64, "mgmt-r-type-isis-l1"};
const Enum::YLeaf OspfRouteEnum::mgmt_r_type_isis_l2 {128, "mgmt-r-type-isis-l2"};
const Enum::YLeaf OspfRouteEnum::mgmt_r_type_isis_l1_ia {256, "mgmt-r-type-isis-l1-ia"};
const Enum::YLeaf OspfRouteEnum::mgmt_r_type_bgp_int {512, "mgmt-r-type-bgp-int"};
const Enum::YLeaf OspfRouteEnum::mgmt_r_type_bgp_ext {1024, "mgmt-r-type-bgp-ext"};
const Enum::YLeaf OspfRouteEnum::mgmt_r_type_bgp_loc {2048, "mgmt-r-type-bgp-loc"};
const Enum::YLeaf OspfRouteEnum::mgmt_r_type_nssa1 {4096, "mgmt-r-type-nssa1"};
const Enum::YLeaf OspfRouteEnum::mgmt_r_type_nssa2 {8192, "mgmt-r-type-nssa2"};
const Enum::YLeaf OspfRouteEnum::mgmt_r_type_i_grp2_int {16384, "mgmt-r-type-i-grp2-int"};
const Enum::YLeaf OspfRouteEnum::mgmt_r_type_i_grp2_ext {32768, "mgmt-r-type-i-grp2-ext"};

const Enum::YLeaf SrUloopEventEnum::none {0, "none"};
const Enum::YLeaf SrUloopEventEnum::link_down {1, "link-down"};
const Enum::YLeaf SrUloopEventEnum::link_up {2, "link-up"};

const Enum::YLeaf OspfShOpqRiTlvTypesEnum::mgmt_ospf_opq_ri_tlv_type_unknown {0, "mgmt-ospf-opq-ri-tlv-type-unknown"};
const Enum::YLeaf OspfShOpqRiTlvTypesEnum::mgmt_ospf_opq_ri_tlv_type_rtrcap {1, "mgmt-ospf-opq-ri-tlv-type-rtrcap"};
const Enum::YLeaf OspfShOpqRiTlvTypesEnum::mgmt_ospf_opq_ri_tlv_type_pce_discovery {2, "mgmt-ospf-opq-ri-tlv-type-pce-discovery"};
const Enum::YLeaf OspfShOpqRiTlvTypesEnum::mgmt_ospf_opq_ri_tlv_type_sr_algo {3, "mgmt-ospf-opq-ri-tlv-type-sr-algo"};
const Enum::YLeaf OspfShOpqRiTlvTypesEnum::mgmt_ospf_opq_ri_tlv_type_sr_range {4, "mgmt-ospf-opq-ri-tlv-type-sr-range"};

const Enum::YLeaf TimerEnum::mgmt_db_stop {0, "mgmt-db-stop"};
const Enum::YLeaf TimerEnum::mgmt_db_refresh {1, "mgmt-db-refresh"};
const Enum::YLeaf TimerEnum::mgmt_db_checksum {2, "mgmt-db-checksum"};
const Enum::YLeaf TimerEnum::mgmt_db_max_age {3, "mgmt-db-max-age"};

const Enum::YLeaf MaxMetricUnsetReasonEnum::mgmt_max_metric_unset_none {0, "mgmt-max-metric-unset-none"};
const Enum::YLeaf MaxMetricUnsetReasonEnum::mgmt_max_metric_unset_bgp {1, "mgmt-max-metric-unset-bgp"};
const Enum::YLeaf MaxMetricUnsetReasonEnum::mgmt_max_metric_unset_timer {2, "mgmt-max-metric-unset-timer"};
const Enum::YLeaf MaxMetricUnsetReasonEnum::mgmt_max_metric_unset_cfg {3, "mgmt-max-metric-unset-cfg"};
const Enum::YLeaf MaxMetricUnsetReasonEnum::mgmt_max_metric_unset_process_cleared {4, "mgmt-max-metric-unset-process-cleared"};
const Enum::YLeaf MaxMetricUnsetReasonEnum::mgmt_max_metric_unset_over_write {5, "mgmt-max-metric-unset-over-write"};

const Enum::YLeaf OspfBrEnum::mgmt_d_type_abr_asbr {0, "mgmt-d-type-abr-asbr"};
const Enum::YLeaf OspfBrEnum::mgmt_d_type_asbr {1, "mgmt-d-type-asbr"};
const Enum::YLeaf OspfBrEnum::mgmt_d_type_abr {2, "mgmt-d-type-abr"};

const Enum::YLeaf StlvEnum::mgmt_rrr_link_type {1, "mgmt-rrr-link-type"};
const Enum::YLeaf StlvEnum::mgmt_rrr_link_id {2, "mgmt-rrr-link-id"};
const Enum::YLeaf StlvEnum::mgmt_rrr_link_local_if_addr {3, "mgmt-rrr-link-local-if-addr"};
const Enum::YLeaf StlvEnum::mgmt_rrr_link_remote_if_addr {4, "mgmt-rrr-link-remote-if-addr"};
const Enum::YLeaf StlvEnum::mgmt_rrr_link_metric {5, "mgmt-rrr-link-metric"};
const Enum::YLeaf StlvEnum::mgmt_rrr_link_max_bw {6, "mgmt-rrr-link-max-bw"};
const Enum::YLeaf StlvEnum::mgmt_rrr_link_max_reservable_bw {7, "mgmt-rrr-link-max-reservable-bw"};
const Enum::YLeaf StlvEnum::mgmt_rrr_link_unreserved_bw {8, "mgmt-rrr-link-unreserved-bw"};
const Enum::YLeaf StlvEnum::mgmt_rrr_link_re_source_class {9, "mgmt-rrr-link-re-source-class"};
const Enum::YLeaf StlvEnum::mgmt_rrr_link_in_out_if_id {11, "mgmt-rrr-link-in-out-if-id"};
const Enum::YLeaf StlvEnum::mgmt_rrr_link_if_switching_cap_desc {15, "mgmt-rrr-link-if-switching-cap-desc"};
const Enum::YLeaf StlvEnum::mgmt_ospf_rrr_link_srlg {16, "mgmt-ospf-rrr-link-srlg"};
const Enum::YLeaf StlvEnum::mgmt_rrr_link_bw_constraints_sub {17, "mgmt-rrr-link-bw-constraints-sub"};
const Enum::YLeaf StlvEnum::mgmt_ospf_rrr_link_uni_delay {27, "mgmt-ospf-rrr-link-uni-delay"};
const Enum::YLeaf StlvEnum::mgmt_ospf_rrr_link_max_reservable_bw_sub {32768, "mgmt-ospf-rrr-link-max-reservable-bw-sub"};
const Enum::YLeaf StlvEnum::mgmt_ospf_rrr_link_unreserved_bw_sub {32769, "mgmt-ospf-rrr-link-unreserved-bw-sub"};
const Enum::YLeaf StlvEnum::mgmt_rrr_link_igp_metric {32770, "mgmt-rrr-link-igp-metric"};
const Enum::YLeaf StlvEnum::mgmt_ospf_rrr_link_ext_admin_sub {32771, "mgmt-ospf-rrr-link-ext-admin-sub"};

const Enum::YLeaf SrmsMiFlagEBEnum::false_ {0, "false"};
const Enum::YLeaf SrmsMiFlagEBEnum::true_ {1, "true"};

const Enum::YLeaf SrmsMiAfEBEnum::none {0, "none"};
const Enum::YLeaf SrmsMiAfEBEnum::ipv4 {1, "ipv4"};
const Enum::YLeaf SrmsMiAfEBEnum::ipv6 {2, "ipv6"};

const Enum::YLeaf NeighborStateEnum::mgmt_nbr_down {0, "mgmt-nbr-down"};
const Enum::YLeaf NeighborStateEnum::mgmt_nbr_attempt {1, "mgmt-nbr-attempt"};
const Enum::YLeaf NeighborStateEnum::mgmt_nbr_init {2, "mgmt-nbr-init"};
const Enum::YLeaf NeighborStateEnum::mgmt_nbr_2way {3, "mgmt-nbr-2way"};
const Enum::YLeaf NeighborStateEnum::mgmt_nbr_ex_start {4, "mgmt-nbr-ex-start"};
const Enum::YLeaf NeighborStateEnum::mgmt_nbr_ex_change {5, "mgmt-nbr-ex-change"};
const Enum::YLeaf NeighborStateEnum::mgmt_nbr_load_ing {6, "mgmt-nbr-load-ing"};
const Enum::YLeaf NeighborStateEnum::mgmt_nbr_full {7, "mgmt-nbr-full"};
const Enum::YLeaf NeighborStateEnum::mgmt_nbr_sc_virtual {8, "mgmt-nbr-sc-virtual"};

const Enum::YLeaf OspfInternalLsaTypesEnum::mgmt_rtr_type {1, "mgmt-rtr-type"};
const Enum::YLeaf OspfInternalLsaTypesEnum::mgmt_ntwk_type {2, "mgmt-ntwk-type"};
const Enum::YLeaf OspfInternalLsaTypesEnum::mgmt_sum_type {3, "mgmt-sum-type"};
const Enum::YLeaf OspfInternalLsaTypesEnum::mgmt_ext_type {4, "mgmt-ext-type"};
const Enum::YLeaf OspfInternalLsaTypesEnum::mgmt_opq_type {5, "mgmt-opq-type"};
const Enum::YLeaf OspfInternalLsaTypesEnum::mgmt_opq_link_type {6, "mgmt-opq-link-type"};
const Enum::YLeaf OspfInternalLsaTypesEnum::mgmt_opq_rrr_type {7, "mgmt-opq-rrr-type"};
const Enum::YLeaf OspfInternalLsaTypesEnum::mgmt_opq_gr_type {8, "mgmt-opq-gr-type"};
const Enum::YLeaf OspfInternalLsaTypesEnum::mgmt_opq_ri_type {9, "mgmt-opq-ri-type"};
const Enum::YLeaf OspfInternalLsaTypesEnum::mgmt_opq_epl_type {10, "mgmt-opq-epl-type"};
const Enum::YLeaf OspfInternalLsaTypesEnum::mgmt_opq_ell_type {11, "mgmt-opq-ell-type"};

const Enum::YLeaf MplsTeOptTlvEnum::mpls_te_opt_tlv_type_none {0, "mpls-te-opt-tlv-type-none"};
const Enum::YLeaf MplsTeOptTlvEnum::mpls_te_opt_tlv_type_srlg {1, "mpls-te-opt-tlv-type-srlg"};
const Enum::YLeaf MplsTeOptTlvEnum::mpls_te_opt_tlv_type_bc {2, "mpls-te-opt-tlv-type-bc"};
const Enum::YLeaf MplsTeOptTlvEnum::mpls_te_opt_tlv_type_ixcd {3, "mpls-te-opt-tlv-type-ixcd"};
const Enum::YLeaf MplsTeOptTlvEnum::mpls_te_opt_tlv_type_uni_delay {4, "mpls-te-opt-tlv-type-uni-delay"};

const Enum::YLeaf RedistProtocolEnum::mgmt_rib_protocol_all {0, "mgmt-rib-protocol-all"};
const Enum::YLeaf RedistProtocolEnum::mgmt_rib_protocol_connected {1, "mgmt-rib-protocol-connected"};
const Enum::YLeaf RedistProtocolEnum::mgmt_rib_protocol_local {2, "mgmt-rib-protocol-local"};
const Enum::YLeaf RedistProtocolEnum::mgmt_rib_protocol_static {3, "mgmt-rib-protocol-static"};
const Enum::YLeaf RedistProtocolEnum::mgmt_rib_protocol_bgp {4, "mgmt-rib-protocol-bgp"};
const Enum::YLeaf RedistProtocolEnum::mgmt_rib_protocol_rip {5, "mgmt-rib-protocol-rip"};
const Enum::YLeaf RedistProtocolEnum::mgmt_rib_protocol_isis {6, "mgmt-rib-protocol-isis"};
const Enum::YLeaf RedistProtocolEnum::mgmt_rib_protocol_ospf {7, "mgmt-rib-protocol-ospf"};
const Enum::YLeaf RedistProtocolEnum::mgmt_rib_protocol_eigrp {8, "mgmt-rib-protocol-eigrp"};
const Enum::YLeaf RedistProtocolEnum::mgmt_rib_protocol_dagr {9, "mgmt-rib-protocol-dagr"};
const Enum::YLeaf RedistProtocolEnum::mgmt_rib_protocol_subscriber {10, "mgmt-rib-protocol-subscriber"};
const Enum::YLeaf RedistProtocolEnum::mgmt_rib_protocol_application {11, "mgmt-rib-protocol-application"};
const Enum::YLeaf RedistProtocolEnum::mgmt_rib_protocol_mobile {12, "mgmt-rib-protocol-mobile"};

const Enum::YLeaf OspfLsaOpqRiScopeEnum::mgmt_lsa_opq_ri_scope_link {9, "mgmt-lsa-opq-ri-scope-link"};
const Enum::YLeaf OspfLsaOpqRiScopeEnum::mgmt_lsa_opq_ri_scope_area {10, "mgmt-lsa-opq-ri-scope-area"};
const Enum::YLeaf OspfLsaOpqRiScopeEnum::mgmt_lsa_opq_ri_scope_as {11, "mgmt-lsa-opq-ri-scope-as"};

const Enum::YLeaf LsaEnum::mgmt_lsa_type_rtr {1, "mgmt-lsa-type-rtr"};
const Enum::YLeaf LsaEnum::mgmt_lsa_type_net {2, "mgmt-lsa-type-net"};
const Enum::YLeaf LsaEnum::mgmt_lsa_type_sum_net {3, "mgmt-lsa-type-sum-net"};
const Enum::YLeaf LsaEnum::mgmt_lsa_type_sum_asb {4, "mgmt-lsa-type-sum-asb"};
const Enum::YLeaf LsaEnum::mgmt_lsa_type_ext {5, "mgmt-lsa-type-ext"};
const Enum::YLeaf LsaEnum::mgmt_lsa_type_mospf {6, "mgmt-lsa-type-mospf"};
const Enum::YLeaf LsaEnum::mgmt_lsa_type_7_ase {7, "mgmt-lsa-type-7-ase"};
const Enum::YLeaf LsaEnum::mgmt_lsa_type_8_ignore {8, "mgmt-lsa-type-8-ignore"};
const Enum::YLeaf LsaEnum::mgmt_lsa_type_opq_link {9, "mgmt-lsa-type-opq-link"};
const Enum::YLeaf LsaEnum::mgmt_lsa_type_opq_area {10, "mgmt-lsa-type-opq-area"};
const Enum::YLeaf LsaEnum::mgmt_lsa_type_opq_as {11, "mgmt-lsa-type-opq-as"};

const Enum::YLeaf DrBdrStateEnum::mgmt_dbdr_none {0, "mgmt-dbdr-none"};
const Enum::YLeaf DrBdrStateEnum::mgmt_dbdr_dr {1, "mgmt-dbdr-dr"};
const Enum::YLeaf DrBdrStateEnum::mgmt_dbdr_bdr {2, "mgmt-dbdr-bdr"};
const Enum::YLeaf DrBdrStateEnum::mgmt_dbdr_dr_other {3, "mgmt-dbdr-dr-other"};

const Enum::YLeaf TimerTableEnum::mgmt_db_no_table {0, "mgmt-db-no-table"};
const Enum::YLeaf TimerTableEnum::mgmt_db_sec_table {1, "mgmt-db-sec-table"};
const Enum::YLeaf TimerTableEnum::mgmt_db_buffer_table {2, "mgmt-db-buffer-table"};
const Enum::YLeaf TimerTableEnum::mgmt_db_min_table {3, "mgmt-db-min-table"};

const Enum::YLeaf OspfGrReasonEnum::mgmt_gr_reason_unknown {0, "mgmt-gr-reason-unknown"};
const Enum::YLeaf OspfGrReasonEnum::mgmt_gr_reason_sw_restart {1, "mgmt-gr-reason-sw-restart"};
const Enum::YLeaf OspfGrReasonEnum::mgmt_gr_reason_sw_upgrade {2, "mgmt-gr-reason-sw-upgrade"};
const Enum::YLeaf OspfGrReasonEnum::mgmt_gr_reason_switchover {3, "mgmt-gr-reason-switchover"};

const Enum::YLeaf OspfMaxMetricAbrOffReasonsEnum::ospf_max_metric_abr_off_reason_none {0, "ospf-max-metric-abr-off-reason-none"};
const Enum::YLeaf OspfMaxMetricAbrOffReasonsEnum::ospf_max_metric_abr_off_reason_no_nbr {1, "ospf-max-metric-abr-off-reason-no-nbr"};
const Enum::YLeaf OspfMaxMetricAbrOffReasonsEnum::ospf_max_metric_abr_off_reason_new_nbr {2, "ospf-max-metric-abr-off-reason-new-nbr"};
const Enum::YLeaf OspfMaxMetricAbrOffReasonsEnum::ospf_max_metric_abr_off_reason_nbr_full {4, "ospf-max-metric-abr-off-reason-nbr-full"};
const Enum::YLeaf OspfMaxMetricAbrOffReasonsEnum::ospf_max_metric_abr_off_reason_flush_p_end {8, "ospf-max-metric-abr-off-reason-flush-p-end"};

const Enum::YLeaf OspfLsEnum::router {1, "router"};
const Enum::YLeaf OspfLsEnum::network {2, "network"};
const Enum::YLeaf OspfLsEnum::summary {3, "summary"};
const Enum::YLeaf OspfLsEnum::asbr_summary {4, "asbr-summary"};
const Enum::YLeaf OspfLsEnum::external {5, "external"};
const Enum::YLeaf OspfLsEnum::nssa_external {7, "nssa-external"};
const Enum::YLeaf OspfLsEnum::opaque_link {9, "opaque-link"};
const Enum::YLeaf OspfLsEnum::opaque_area {10, "opaque-area"};
const Enum::YLeaf OspfLsEnum::opaque_as {11, "opaque-as"};


}
}

