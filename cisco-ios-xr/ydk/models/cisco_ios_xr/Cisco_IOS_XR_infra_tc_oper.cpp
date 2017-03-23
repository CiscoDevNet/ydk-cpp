
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_infra_tc_oper.hpp"

namespace ydk {
namespace Cisco_IOS_XR_infra_tc_oper {

TrafficCollector::TrafficCollector()
    :
    afs(std::make_shared<TrafficCollector::Afs>())
	,external_interfaces(std::make_shared<TrafficCollector::ExternalInterfaces>())
	,summary(std::make_shared<TrafficCollector::Summary>())
	,vrf_table(std::make_shared<TrafficCollector::VrfTable>())
{
    afs->parent = this;
    children["afs"] = afs;

    external_interfaces->parent = this;
    children["external-interfaces"] = external_interfaces;

    summary->parent = this;
    children["summary"] = summary;

    vrf_table->parent = this;
    children["vrf-table"] = vrf_table;

    yang_name = "traffic-collector"; yang_parent_name = "Cisco-IOS-XR-infra-tc-oper";
}

TrafficCollector::~TrafficCollector()
{
}

bool TrafficCollector::has_data() const
{
    return (afs !=  nullptr && afs->has_data())
	|| (external_interfaces !=  nullptr && external_interfaces->has_data())
	|| (summary !=  nullptr && summary->has_data())
	|| (vrf_table !=  nullptr && vrf_table->has_data());
}

bool TrafficCollector::has_operation() const
{
    return is_set(operation)
	|| (afs !=  nullptr && afs->has_operation())
	|| (external_interfaces !=  nullptr && external_interfaces->has_operation())
	|| (summary !=  nullptr && summary->has_operation())
	|| (vrf_table !=  nullptr && vrf_table->has_operation());
}

std::string TrafficCollector::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-tc-oper:traffic-collector";

    return path_buffer.str();

}

EntityPath TrafficCollector::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> TrafficCollector::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "afs")
    {
        if(afs != nullptr)
        {
            children["afs"] = afs;
        }
        else
        {
            afs = std::make_shared<TrafficCollector::Afs>();
            afs->parent = this;
            children["afs"] = afs;
        }
        return children.at("afs");
    }

    if(child_yang_name == "external-interfaces")
    {
        if(external_interfaces != nullptr)
        {
            children["external-interfaces"] = external_interfaces;
        }
        else
        {
            external_interfaces = std::make_shared<TrafficCollector::ExternalInterfaces>();
            external_interfaces->parent = this;
            children["external-interfaces"] = external_interfaces;
        }
        return children.at("external-interfaces");
    }

    if(child_yang_name == "summary")
    {
        if(summary != nullptr)
        {
            children["summary"] = summary;
        }
        else
        {
            summary = std::make_shared<TrafficCollector::Summary>();
            summary->parent = this;
            children["summary"] = summary;
        }
        return children.at("summary");
    }

    if(child_yang_name == "vrf-table")
    {
        if(vrf_table != nullptr)
        {
            children["vrf-table"] = vrf_table;
        }
        else
        {
            vrf_table = std::make_shared<TrafficCollector::VrfTable>();
            vrf_table->parent = this;
            children["vrf-table"] = vrf_table;
        }
        return children.at("vrf-table");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & TrafficCollector::get_children()
{
    if(children.find("afs") == children.end())
    {
        if(afs != nullptr)
        {
            children["afs"] = afs;
        }
    }

    if(children.find("external-interfaces") == children.end())
    {
        if(external_interfaces != nullptr)
        {
            children["external-interfaces"] = external_interfaces;
        }
    }

    if(children.find("summary") == children.end())
    {
        if(summary != nullptr)
        {
            children["summary"] = summary;
        }
    }

    if(children.find("vrf-table") == children.end())
    {
        if(vrf_table != nullptr)
        {
            children["vrf-table"] = vrf_table;
        }
    }

    return children;
}

void TrafficCollector::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> TrafficCollector::clone_ptr() const
{
    return std::make_shared<TrafficCollector>();
}

std::string TrafficCollector::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string TrafficCollector::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function TrafficCollector::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

TrafficCollector::ExternalInterfaces::ExternalInterfaces()
{
    yang_name = "external-interfaces"; yang_parent_name = "traffic-collector";
}

TrafficCollector::ExternalInterfaces::~ExternalInterfaces()
{
}

bool TrafficCollector::ExternalInterfaces::has_data() const
{
    for (std::size_t index=0; index<external_interface.size(); index++)
    {
        if(external_interface[index]->has_data())
            return true;
    }
    return false;
}

bool TrafficCollector::ExternalInterfaces::has_operation() const
{
    for (std::size_t index=0; index<external_interface.size(); index++)
    {
        if(external_interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string TrafficCollector::ExternalInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "external-interfaces";

    return path_buffer.str();

}

EntityPath TrafficCollector::ExternalInterfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-tc-oper:traffic-collector/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> TrafficCollector::ExternalInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "external-interface")
    {
        for(auto const & c : external_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<TrafficCollector::ExternalInterfaces::ExternalInterface>();
        c->parent = this;
        external_interface.push_back(std::move(c));
        children[segment_path] = external_interface.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & TrafficCollector::ExternalInterfaces::get_children()
{
    for (auto const & c : external_interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void TrafficCollector::ExternalInterfaces::set_value(const std::string & value_path, std::string value)
{
}

TrafficCollector::ExternalInterfaces::ExternalInterface::ExternalInterface()
    :
    interface_name{YType::str, "interface-name"},
    interface_handle{YType::uint32, "interface-handle"},
    interface_name_xr{YType::str, "interface-name-xr"},
    is_interface_enabled{YType::boolean, "is-interface-enabled"},
    vrfid{YType::uint32, "vrfid"}
{
    yang_name = "external-interface"; yang_parent_name = "external-interfaces";
}

TrafficCollector::ExternalInterfaces::ExternalInterface::~ExternalInterface()
{
}

bool TrafficCollector::ExternalInterfaces::ExternalInterface::has_data() const
{
    return interface_name.is_set
	|| interface_handle.is_set
	|| interface_name_xr.is_set
	|| is_interface_enabled.is_set
	|| vrfid.is_set;
}

bool TrafficCollector::ExternalInterfaces::ExternalInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(interface_handle.operation)
	|| is_set(interface_name_xr.operation)
	|| is_set(is_interface_enabled.operation)
	|| is_set(vrfid.operation);
}

std::string TrafficCollector::ExternalInterfaces::ExternalInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "external-interface" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath TrafficCollector::ExternalInterfaces::ExternalInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-tc-oper:traffic-collector/external-interfaces/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (interface_handle.is_set || is_set(interface_handle.operation)) leaf_name_data.push_back(interface_handle.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.operation)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (is_interface_enabled.is_set || is_set(is_interface_enabled.operation)) leaf_name_data.push_back(is_interface_enabled.get_name_leafdata());
    if (vrfid.is_set || is_set(vrfid.operation)) leaf_name_data.push_back(vrfid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> TrafficCollector::ExternalInterfaces::ExternalInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & TrafficCollector::ExternalInterfaces::ExternalInterface::get_children()
{
    return children;
}

void TrafficCollector::ExternalInterfaces::ExternalInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "interface-handle")
    {
        interface_handle = value;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
    }
    if(value_path == "is-interface-enabled")
    {
        is_interface_enabled = value;
    }
    if(value_path == "vrfid")
    {
        vrfid = value;
    }
}

TrafficCollector::Summary::Summary()
    :
    collection_interval{YType::uint8, "collection-interval"},
    collection_timer_is_running{YType::boolean, "collection-timer-is-running"},
    history_size{YType::uint8, "history-size"},
    timeout_interval{YType::uint16, "timeout-interval"},
    timeout_timer_is_running{YType::boolean, "timeout-timer-is-running"}
    	,
    database_statistics_external_interface(std::make_shared<TrafficCollector::Summary::DatabaseStatisticsExternalInterface>())
{
    database_statistics_external_interface->parent = this;
    children["database-statistics-external-interface"] = database_statistics_external_interface;

    yang_name = "summary"; yang_parent_name = "traffic-collector";
}

TrafficCollector::Summary::~Summary()
{
}

bool TrafficCollector::Summary::has_data() const
{
    for (std::size_t index=0; index<checkpoint_message_statistic.size(); index++)
    {
        if(checkpoint_message_statistic[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<collection_message_statistic.size(); index++)
    {
        if(collection_message_statistic[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vrf_statistic.size(); index++)
    {
        if(vrf_statistic[index]->has_data())
            return true;
    }
    return collection_interval.is_set
	|| collection_timer_is_running.is_set
	|| history_size.is_set
	|| timeout_interval.is_set
	|| timeout_timer_is_running.is_set
	|| (database_statistics_external_interface !=  nullptr && database_statistics_external_interface->has_data());
}

bool TrafficCollector::Summary::has_operation() const
{
    for (std::size_t index=0; index<checkpoint_message_statistic.size(); index++)
    {
        if(checkpoint_message_statistic[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<collection_message_statistic.size(); index++)
    {
        if(collection_message_statistic[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vrf_statistic.size(); index++)
    {
        if(vrf_statistic[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(collection_interval.operation)
	|| is_set(collection_timer_is_running.operation)
	|| is_set(history_size.operation)
	|| is_set(timeout_interval.operation)
	|| is_set(timeout_timer_is_running.operation)
	|| (database_statistics_external_interface !=  nullptr && database_statistics_external_interface->has_operation());
}

std::string TrafficCollector::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";

    return path_buffer.str();

}

EntityPath TrafficCollector::Summary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-tc-oper:traffic-collector/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (collection_interval.is_set || is_set(collection_interval.operation)) leaf_name_data.push_back(collection_interval.get_name_leafdata());
    if (collection_timer_is_running.is_set || is_set(collection_timer_is_running.operation)) leaf_name_data.push_back(collection_timer_is_running.get_name_leafdata());
    if (history_size.is_set || is_set(history_size.operation)) leaf_name_data.push_back(history_size.get_name_leafdata());
    if (timeout_interval.is_set || is_set(timeout_interval.operation)) leaf_name_data.push_back(timeout_interval.get_name_leafdata());
    if (timeout_timer_is_running.is_set || is_set(timeout_timer_is_running.operation)) leaf_name_data.push_back(timeout_timer_is_running.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> TrafficCollector::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "checkpoint-message-statistic")
    {
        for(auto const & c : checkpoint_message_statistic)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<TrafficCollector::Summary::CheckpointMessageStatistic>();
        c->parent = this;
        checkpoint_message_statistic.push_back(std::move(c));
        children[segment_path] = checkpoint_message_statistic.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "collection-message-statistic")
    {
        for(auto const & c : collection_message_statistic)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<TrafficCollector::Summary::CollectionMessageStatistic>();
        c->parent = this;
        collection_message_statistic.push_back(std::move(c));
        children[segment_path] = collection_message_statistic.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "database-statistics-external-interface")
    {
        if(database_statistics_external_interface != nullptr)
        {
            children["database-statistics-external-interface"] = database_statistics_external_interface;
        }
        else
        {
            database_statistics_external_interface = std::make_shared<TrafficCollector::Summary::DatabaseStatisticsExternalInterface>();
            database_statistics_external_interface->parent = this;
            children["database-statistics-external-interface"] = database_statistics_external_interface;
        }
        return children.at("database-statistics-external-interface");
    }

    if(child_yang_name == "vrf-statistic")
    {
        for(auto const & c : vrf_statistic)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<TrafficCollector::Summary::VrfStatistic>();
        c->parent = this;
        vrf_statistic.push_back(std::move(c));
        children[segment_path] = vrf_statistic.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & TrafficCollector::Summary::get_children()
{
    for (auto const & c : checkpoint_message_statistic)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : collection_message_statistic)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("database-statistics-external-interface") == children.end())
    {
        if(database_statistics_external_interface != nullptr)
        {
            children["database-statistics-external-interface"] = database_statistics_external_interface;
        }
    }

    for (auto const & c : vrf_statistic)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void TrafficCollector::Summary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "collection-interval")
    {
        collection_interval = value;
    }
    if(value_path == "collection-timer-is-running")
    {
        collection_timer_is_running = value;
    }
    if(value_path == "history-size")
    {
        history_size = value;
    }
    if(value_path == "timeout-interval")
    {
        timeout_interval = value;
    }
    if(value_path == "timeout-timer-is-running")
    {
        timeout_timer_is_running = value;
    }
}

TrafficCollector::Summary::DatabaseStatisticsExternalInterface::DatabaseStatisticsExternalInterface()
    :
    number_of_add_o_perations{YType::uint64, "number-of-add-o-perations"},
    number_of_delete_o_perations{YType::uint64, "number-of-delete-o-perations"},
    number_of_entries{YType::uint32, "number-of-entries"},
    number_of_stale_entries{YType::uint32, "number-of-stale-entries"}
{
    yang_name = "database-statistics-external-interface"; yang_parent_name = "summary";
}

TrafficCollector::Summary::DatabaseStatisticsExternalInterface::~DatabaseStatisticsExternalInterface()
{
}

bool TrafficCollector::Summary::DatabaseStatisticsExternalInterface::has_data() const
{
    return number_of_add_o_perations.is_set
	|| number_of_delete_o_perations.is_set
	|| number_of_entries.is_set
	|| number_of_stale_entries.is_set;
}

bool TrafficCollector::Summary::DatabaseStatisticsExternalInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(number_of_add_o_perations.operation)
	|| is_set(number_of_delete_o_perations.operation)
	|| is_set(number_of_entries.operation)
	|| is_set(number_of_stale_entries.operation);
}

std::string TrafficCollector::Summary::DatabaseStatisticsExternalInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-statistics-external-interface";

    return path_buffer.str();

}

EntityPath TrafficCollector::Summary::DatabaseStatisticsExternalInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-tc-oper:traffic-collector/summary/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number_of_add_o_perations.is_set || is_set(number_of_add_o_perations.operation)) leaf_name_data.push_back(number_of_add_o_perations.get_name_leafdata());
    if (number_of_delete_o_perations.is_set || is_set(number_of_delete_o_perations.operation)) leaf_name_data.push_back(number_of_delete_o_perations.get_name_leafdata());
    if (number_of_entries.is_set || is_set(number_of_entries.operation)) leaf_name_data.push_back(number_of_entries.get_name_leafdata());
    if (number_of_stale_entries.is_set || is_set(number_of_stale_entries.operation)) leaf_name_data.push_back(number_of_stale_entries.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> TrafficCollector::Summary::DatabaseStatisticsExternalInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & TrafficCollector::Summary::DatabaseStatisticsExternalInterface::get_children()
{
    return children;
}

void TrafficCollector::Summary::DatabaseStatisticsExternalInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "number-of-add-o-perations")
    {
        number_of_add_o_perations = value;
    }
    if(value_path == "number-of-delete-o-perations")
    {
        number_of_delete_o_perations = value;
    }
    if(value_path == "number-of-entries")
    {
        number_of_entries = value;
    }
    if(value_path == "number-of-stale-entries")
    {
        number_of_stale_entries = value;
    }
}

TrafficCollector::Summary::VrfStatistic::VrfStatistic()
    :
    vrf_name{YType::str, "vrf-name"}
    	,
    database_statistics_ipv4(std::make_shared<TrafficCollector::Summary::VrfStatistic::DatabaseStatisticsIpv4>())
	,database_statistics_tunnel(std::make_shared<TrafficCollector::Summary::VrfStatistic::DatabaseStatisticsTunnel>())
{
    database_statistics_ipv4->parent = this;
    children["database-statistics-ipv4"] = database_statistics_ipv4;

    database_statistics_tunnel->parent = this;
    children["database-statistics-tunnel"] = database_statistics_tunnel;

    yang_name = "vrf-statistic"; yang_parent_name = "summary";
}

TrafficCollector::Summary::VrfStatistic::~VrfStatistic()
{
}

bool TrafficCollector::Summary::VrfStatistic::has_data() const
{
    return vrf_name.is_set
	|| (database_statistics_ipv4 !=  nullptr && database_statistics_ipv4->has_data())
	|| (database_statistics_tunnel !=  nullptr && database_statistics_tunnel->has_data());
}

bool TrafficCollector::Summary::VrfStatistic::has_operation() const
{
    return is_set(operation)
	|| is_set(vrf_name.operation)
	|| (database_statistics_ipv4 !=  nullptr && database_statistics_ipv4->has_operation())
	|| (database_statistics_tunnel !=  nullptr && database_statistics_tunnel->has_operation());
}

std::string TrafficCollector::Summary::VrfStatistic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-statistic";

    return path_buffer.str();

}

EntityPath TrafficCollector::Summary::VrfStatistic::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-tc-oper:traffic-collector/summary/" << get_segment_path();
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

std::shared_ptr<Entity> TrafficCollector::Summary::VrfStatistic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "database-statistics-ipv4")
    {
        if(database_statistics_ipv4 != nullptr)
        {
            children["database-statistics-ipv4"] = database_statistics_ipv4;
        }
        else
        {
            database_statistics_ipv4 = std::make_shared<TrafficCollector::Summary::VrfStatistic::DatabaseStatisticsIpv4>();
            database_statistics_ipv4->parent = this;
            children["database-statistics-ipv4"] = database_statistics_ipv4;
        }
        return children.at("database-statistics-ipv4");
    }

    if(child_yang_name == "database-statistics-tunnel")
    {
        if(database_statistics_tunnel != nullptr)
        {
            children["database-statistics-tunnel"] = database_statistics_tunnel;
        }
        else
        {
            database_statistics_tunnel = std::make_shared<TrafficCollector::Summary::VrfStatistic::DatabaseStatisticsTunnel>();
            database_statistics_tunnel->parent = this;
            children["database-statistics-tunnel"] = database_statistics_tunnel;
        }
        return children.at("database-statistics-tunnel");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & TrafficCollector::Summary::VrfStatistic::get_children()
{
    if(children.find("database-statistics-ipv4") == children.end())
    {
        if(database_statistics_ipv4 != nullptr)
        {
            children["database-statistics-ipv4"] = database_statistics_ipv4;
        }
    }

    if(children.find("database-statistics-tunnel") == children.end())
    {
        if(database_statistics_tunnel != nullptr)
        {
            children["database-statistics-tunnel"] = database_statistics_tunnel;
        }
    }

    return children;
}

void TrafficCollector::Summary::VrfStatistic::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

TrafficCollector::Summary::VrfStatistic::DatabaseStatisticsIpv4::DatabaseStatisticsIpv4()
    :
    number_of_add_o_perations{YType::uint64, "number-of-add-o-perations"},
    number_of_delete_o_perations{YType::uint64, "number-of-delete-o-perations"},
    number_of_entries{YType::uint32, "number-of-entries"},
    number_of_stale_entries{YType::uint32, "number-of-stale-entries"}
{
    yang_name = "database-statistics-ipv4"; yang_parent_name = "vrf-statistic";
}

TrafficCollector::Summary::VrfStatistic::DatabaseStatisticsIpv4::~DatabaseStatisticsIpv4()
{
}

bool TrafficCollector::Summary::VrfStatistic::DatabaseStatisticsIpv4::has_data() const
{
    return number_of_add_o_perations.is_set
	|| number_of_delete_o_perations.is_set
	|| number_of_entries.is_set
	|| number_of_stale_entries.is_set;
}

bool TrafficCollector::Summary::VrfStatistic::DatabaseStatisticsIpv4::has_operation() const
{
    return is_set(operation)
	|| is_set(number_of_add_o_perations.operation)
	|| is_set(number_of_delete_o_perations.operation)
	|| is_set(number_of_entries.operation)
	|| is_set(number_of_stale_entries.operation);
}

std::string TrafficCollector::Summary::VrfStatistic::DatabaseStatisticsIpv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-statistics-ipv4";

    return path_buffer.str();

}

EntityPath TrafficCollector::Summary::VrfStatistic::DatabaseStatisticsIpv4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-tc-oper:traffic-collector/summary/vrf-statistic/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number_of_add_o_perations.is_set || is_set(number_of_add_o_perations.operation)) leaf_name_data.push_back(number_of_add_o_perations.get_name_leafdata());
    if (number_of_delete_o_perations.is_set || is_set(number_of_delete_o_perations.operation)) leaf_name_data.push_back(number_of_delete_o_perations.get_name_leafdata());
    if (number_of_entries.is_set || is_set(number_of_entries.operation)) leaf_name_data.push_back(number_of_entries.get_name_leafdata());
    if (number_of_stale_entries.is_set || is_set(number_of_stale_entries.operation)) leaf_name_data.push_back(number_of_stale_entries.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> TrafficCollector::Summary::VrfStatistic::DatabaseStatisticsIpv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & TrafficCollector::Summary::VrfStatistic::DatabaseStatisticsIpv4::get_children()
{
    return children;
}

void TrafficCollector::Summary::VrfStatistic::DatabaseStatisticsIpv4::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "number-of-add-o-perations")
    {
        number_of_add_o_perations = value;
    }
    if(value_path == "number-of-delete-o-perations")
    {
        number_of_delete_o_perations = value;
    }
    if(value_path == "number-of-entries")
    {
        number_of_entries = value;
    }
    if(value_path == "number-of-stale-entries")
    {
        number_of_stale_entries = value;
    }
}

TrafficCollector::Summary::VrfStatistic::DatabaseStatisticsTunnel::DatabaseStatisticsTunnel()
    :
    number_of_add_o_perations{YType::uint64, "number-of-add-o-perations"},
    number_of_delete_o_perations{YType::uint64, "number-of-delete-o-perations"},
    number_of_entries{YType::uint32, "number-of-entries"},
    number_of_stale_entries{YType::uint32, "number-of-stale-entries"}
{
    yang_name = "database-statistics-tunnel"; yang_parent_name = "vrf-statistic";
}

TrafficCollector::Summary::VrfStatistic::DatabaseStatisticsTunnel::~DatabaseStatisticsTunnel()
{
}

bool TrafficCollector::Summary::VrfStatistic::DatabaseStatisticsTunnel::has_data() const
{
    return number_of_add_o_perations.is_set
	|| number_of_delete_o_perations.is_set
	|| number_of_entries.is_set
	|| number_of_stale_entries.is_set;
}

bool TrafficCollector::Summary::VrfStatistic::DatabaseStatisticsTunnel::has_operation() const
{
    return is_set(operation)
	|| is_set(number_of_add_o_perations.operation)
	|| is_set(number_of_delete_o_perations.operation)
	|| is_set(number_of_entries.operation)
	|| is_set(number_of_stale_entries.operation);
}

std::string TrafficCollector::Summary::VrfStatistic::DatabaseStatisticsTunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-statistics-tunnel";

    return path_buffer.str();

}

EntityPath TrafficCollector::Summary::VrfStatistic::DatabaseStatisticsTunnel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-tc-oper:traffic-collector/summary/vrf-statistic/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number_of_add_o_perations.is_set || is_set(number_of_add_o_perations.operation)) leaf_name_data.push_back(number_of_add_o_perations.get_name_leafdata());
    if (number_of_delete_o_perations.is_set || is_set(number_of_delete_o_perations.operation)) leaf_name_data.push_back(number_of_delete_o_perations.get_name_leafdata());
    if (number_of_entries.is_set || is_set(number_of_entries.operation)) leaf_name_data.push_back(number_of_entries.get_name_leafdata());
    if (number_of_stale_entries.is_set || is_set(number_of_stale_entries.operation)) leaf_name_data.push_back(number_of_stale_entries.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> TrafficCollector::Summary::VrfStatistic::DatabaseStatisticsTunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & TrafficCollector::Summary::VrfStatistic::DatabaseStatisticsTunnel::get_children()
{
    return children;
}

void TrafficCollector::Summary::VrfStatistic::DatabaseStatisticsTunnel::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "number-of-add-o-perations")
    {
        number_of_add_o_perations = value;
    }
    if(value_path == "number-of-delete-o-perations")
    {
        number_of_delete_o_perations = value;
    }
    if(value_path == "number-of-entries")
    {
        number_of_entries = value;
    }
    if(value_path == "number-of-stale-entries")
    {
        number_of_stale_entries = value;
    }
}

TrafficCollector::Summary::CollectionMessageStatistic::CollectionMessageStatistic()
    :
    byte_received{YType::uint64, "byte-received"},
    byte_sent{YType::uint64, "byte-sent"},
    maimum_latency_timestamp{YType::uint64, "maimum-latency-timestamp"},
    maximum_roundtrip_latency{YType::uint32, "maximum-roundtrip-latency"},
    packet_received{YType::uint64, "packet-received"},
    packet_sent{YType::uint64, "packet-sent"}
{
    yang_name = "collection-message-statistic"; yang_parent_name = "summary";
}

TrafficCollector::Summary::CollectionMessageStatistic::~CollectionMessageStatistic()
{
}

bool TrafficCollector::Summary::CollectionMessageStatistic::has_data() const
{
    return byte_received.is_set
	|| byte_sent.is_set
	|| maimum_latency_timestamp.is_set
	|| maximum_roundtrip_latency.is_set
	|| packet_received.is_set
	|| packet_sent.is_set;
}

bool TrafficCollector::Summary::CollectionMessageStatistic::has_operation() const
{
    return is_set(operation)
	|| is_set(byte_received.operation)
	|| is_set(byte_sent.operation)
	|| is_set(maimum_latency_timestamp.operation)
	|| is_set(maximum_roundtrip_latency.operation)
	|| is_set(packet_received.operation)
	|| is_set(packet_sent.operation);
}

std::string TrafficCollector::Summary::CollectionMessageStatistic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "collection-message-statistic";

    return path_buffer.str();

}

EntityPath TrafficCollector::Summary::CollectionMessageStatistic::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-tc-oper:traffic-collector/summary/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_received.is_set || is_set(byte_received.operation)) leaf_name_data.push_back(byte_received.get_name_leafdata());
    if (byte_sent.is_set || is_set(byte_sent.operation)) leaf_name_data.push_back(byte_sent.get_name_leafdata());
    if (maimum_latency_timestamp.is_set || is_set(maimum_latency_timestamp.operation)) leaf_name_data.push_back(maimum_latency_timestamp.get_name_leafdata());
    if (maximum_roundtrip_latency.is_set || is_set(maximum_roundtrip_latency.operation)) leaf_name_data.push_back(maximum_roundtrip_latency.get_name_leafdata());
    if (packet_received.is_set || is_set(packet_received.operation)) leaf_name_data.push_back(packet_received.get_name_leafdata());
    if (packet_sent.is_set || is_set(packet_sent.operation)) leaf_name_data.push_back(packet_sent.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> TrafficCollector::Summary::CollectionMessageStatistic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & TrafficCollector::Summary::CollectionMessageStatistic::get_children()
{
    return children;
}

void TrafficCollector::Summary::CollectionMessageStatistic::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "byte-received")
    {
        byte_received = value;
    }
    if(value_path == "byte-sent")
    {
        byte_sent = value;
    }
    if(value_path == "maimum-latency-timestamp")
    {
        maimum_latency_timestamp = value;
    }
    if(value_path == "maximum-roundtrip-latency")
    {
        maximum_roundtrip_latency = value;
    }
    if(value_path == "packet-received")
    {
        packet_received = value;
    }
    if(value_path == "packet-sent")
    {
        packet_sent = value;
    }
}

TrafficCollector::Summary::CheckpointMessageStatistic::CheckpointMessageStatistic()
    :
    byte_received{YType::uint64, "byte-received"},
    byte_sent{YType::uint64, "byte-sent"},
    maimum_latency_timestamp{YType::uint64, "maimum-latency-timestamp"},
    maximum_roundtrip_latency{YType::uint32, "maximum-roundtrip-latency"},
    packet_received{YType::uint64, "packet-received"},
    packet_sent{YType::uint64, "packet-sent"}
{
    yang_name = "checkpoint-message-statistic"; yang_parent_name = "summary";
}

TrafficCollector::Summary::CheckpointMessageStatistic::~CheckpointMessageStatistic()
{
}

bool TrafficCollector::Summary::CheckpointMessageStatistic::has_data() const
{
    return byte_received.is_set
	|| byte_sent.is_set
	|| maimum_latency_timestamp.is_set
	|| maximum_roundtrip_latency.is_set
	|| packet_received.is_set
	|| packet_sent.is_set;
}

bool TrafficCollector::Summary::CheckpointMessageStatistic::has_operation() const
{
    return is_set(operation)
	|| is_set(byte_received.operation)
	|| is_set(byte_sent.operation)
	|| is_set(maimum_latency_timestamp.operation)
	|| is_set(maximum_roundtrip_latency.operation)
	|| is_set(packet_received.operation)
	|| is_set(packet_sent.operation);
}

std::string TrafficCollector::Summary::CheckpointMessageStatistic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "checkpoint-message-statistic";

    return path_buffer.str();

}

EntityPath TrafficCollector::Summary::CheckpointMessageStatistic::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-tc-oper:traffic-collector/summary/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_received.is_set || is_set(byte_received.operation)) leaf_name_data.push_back(byte_received.get_name_leafdata());
    if (byte_sent.is_set || is_set(byte_sent.operation)) leaf_name_data.push_back(byte_sent.get_name_leafdata());
    if (maimum_latency_timestamp.is_set || is_set(maimum_latency_timestamp.operation)) leaf_name_data.push_back(maimum_latency_timestamp.get_name_leafdata());
    if (maximum_roundtrip_latency.is_set || is_set(maximum_roundtrip_latency.operation)) leaf_name_data.push_back(maximum_roundtrip_latency.get_name_leafdata());
    if (packet_received.is_set || is_set(packet_received.operation)) leaf_name_data.push_back(packet_received.get_name_leafdata());
    if (packet_sent.is_set || is_set(packet_sent.operation)) leaf_name_data.push_back(packet_sent.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> TrafficCollector::Summary::CheckpointMessageStatistic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & TrafficCollector::Summary::CheckpointMessageStatistic::get_children()
{
    return children;
}

void TrafficCollector::Summary::CheckpointMessageStatistic::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "byte-received")
    {
        byte_received = value;
    }
    if(value_path == "byte-sent")
    {
        byte_sent = value;
    }
    if(value_path == "maimum-latency-timestamp")
    {
        maimum_latency_timestamp = value;
    }
    if(value_path == "maximum-roundtrip-latency")
    {
        maximum_roundtrip_latency = value;
    }
    if(value_path == "packet-received")
    {
        packet_received = value;
    }
    if(value_path == "packet-sent")
    {
        packet_sent = value;
    }
}

TrafficCollector::VrfTable::VrfTable()
    :
    default_vrf(std::make_shared<TrafficCollector::VrfTable::DefaultVrf>())
{
    default_vrf->parent = this;
    children["default-vrf"] = default_vrf;

    yang_name = "vrf-table"; yang_parent_name = "traffic-collector";
}

TrafficCollector::VrfTable::~VrfTable()
{
}

bool TrafficCollector::VrfTable::has_data() const
{
    return (default_vrf !=  nullptr && default_vrf->has_data());
}

bool TrafficCollector::VrfTable::has_operation() const
{
    return is_set(operation)
	|| (default_vrf !=  nullptr && default_vrf->has_operation());
}

std::string TrafficCollector::VrfTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-table";

    return path_buffer.str();

}

EntityPath TrafficCollector::VrfTable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-tc-oper:traffic-collector/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> TrafficCollector::VrfTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            default_vrf = std::make_shared<TrafficCollector::VrfTable::DefaultVrf>();
            default_vrf->parent = this;
            children["default-vrf"] = default_vrf;
        }
        return children.at("default-vrf");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & TrafficCollector::VrfTable::get_children()
{
    if(children.find("default-vrf") == children.end())
    {
        if(default_vrf != nullptr)
        {
            children["default-vrf"] = default_vrf;
        }
    }

    return children;
}

void TrafficCollector::VrfTable::set_value(const std::string & value_path, std::string value)
{
}

TrafficCollector::VrfTable::DefaultVrf::DefaultVrf()
    :
    afs(std::make_shared<TrafficCollector::VrfTable::DefaultVrf::Afs>())
{
    afs->parent = this;
    children["afs"] = afs;

    yang_name = "default-vrf"; yang_parent_name = "vrf-table";
}

TrafficCollector::VrfTable::DefaultVrf::~DefaultVrf()
{
}

bool TrafficCollector::VrfTable::DefaultVrf::has_data() const
{
    return (afs !=  nullptr && afs->has_data());
}

bool TrafficCollector::VrfTable::DefaultVrf::has_operation() const
{
    return is_set(operation)
	|| (afs !=  nullptr && afs->has_operation());
}

std::string TrafficCollector::VrfTable::DefaultVrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-vrf";

    return path_buffer.str();

}

EntityPath TrafficCollector::VrfTable::DefaultVrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-tc-oper:traffic-collector/vrf-table/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> TrafficCollector::VrfTable::DefaultVrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "afs")
    {
        if(afs != nullptr)
        {
            children["afs"] = afs;
        }
        else
        {
            afs = std::make_shared<TrafficCollector::VrfTable::DefaultVrf::Afs>();
            afs->parent = this;
            children["afs"] = afs;
        }
        return children.at("afs");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & TrafficCollector::VrfTable::DefaultVrf::get_children()
{
    if(children.find("afs") == children.end())
    {
        if(afs != nullptr)
        {
            children["afs"] = afs;
        }
    }

    return children;
}

void TrafficCollector::VrfTable::DefaultVrf::set_value(const std::string & value_path, std::string value)
{
}

TrafficCollector::VrfTable::DefaultVrf::Afs::Afs()
{
    yang_name = "afs"; yang_parent_name = "default-vrf";
}

TrafficCollector::VrfTable::DefaultVrf::Afs::~Afs()
{
}

bool TrafficCollector::VrfTable::DefaultVrf::Afs::has_data() const
{
    for (std::size_t index=0; index<af.size(); index++)
    {
        if(af[index]->has_data())
            return true;
    }
    return false;
}

bool TrafficCollector::VrfTable::DefaultVrf::Afs::has_operation() const
{
    for (std::size_t index=0; index<af.size(); index++)
    {
        if(af[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string TrafficCollector::VrfTable::DefaultVrf::Afs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "afs";

    return path_buffer.str();

}

EntityPath TrafficCollector::VrfTable::DefaultVrf::Afs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-tc-oper:traffic-collector/vrf-table/default-vrf/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> TrafficCollector::VrfTable::DefaultVrf::Afs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "af")
    {
        for(auto const & c : af)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<TrafficCollector::VrfTable::DefaultVrf::Afs::Af>();
        c->parent = this;
        af.push_back(std::move(c));
        children[segment_path] = af.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & TrafficCollector::VrfTable::DefaultVrf::Afs::get_children()
{
    for (auto const & c : af)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void TrafficCollector::VrfTable::DefaultVrf::Afs::set_value(const std::string & value_path, std::string value)
{
}

TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Af()
    :
    af_name{YType::enumeration, "af-name"}
    	,
    counters(std::make_shared<TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters>())
{
    counters->parent = this;
    children["counters"] = counters;

    yang_name = "af"; yang_parent_name = "afs";
}

TrafficCollector::VrfTable::DefaultVrf::Afs::Af::~Af()
{
}

bool TrafficCollector::VrfTable::DefaultVrf::Afs::Af::has_data() const
{
    return af_name.is_set
	|| (counters !=  nullptr && counters->has_data());
}

bool TrafficCollector::VrfTable::DefaultVrf::Afs::Af::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| (counters !=  nullptr && counters->has_operation());
}

std::string TrafficCollector::VrfTable::DefaultVrf::Afs::Af::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "af" <<"[af-name='" <<af_name <<"']";

    return path_buffer.str();

}

EntityPath TrafficCollector::VrfTable::DefaultVrf::Afs::Af::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-tc-oper:traffic-collector/vrf-table/default-vrf/afs/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> TrafficCollector::VrfTable::DefaultVrf::Afs::Af::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            counters = std::make_shared<TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters>();
            counters->parent = this;
            children["counters"] = counters;
        }
        return children.at("counters");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & TrafficCollector::VrfTable::DefaultVrf::Afs::Af::get_children()
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

void TrafficCollector::VrfTable::DefaultVrf::Afs::Af::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
}

TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Counters()
    :
    prefixes(std::make_shared<TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Prefixes>())
	,tunnels(std::make_shared<TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Tunnels>())
{
    prefixes->parent = this;
    children["prefixes"] = prefixes;

    tunnels->parent = this;
    children["tunnels"] = tunnels;

    yang_name = "counters"; yang_parent_name = "af";
}

TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::~Counters()
{
}

bool TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::has_data() const
{
    return (prefixes !=  nullptr && prefixes->has_data())
	|| (tunnels !=  nullptr && tunnels->has_data());
}

bool TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::has_operation() const
{
    return is_set(operation)
	|| (prefixes !=  nullptr && prefixes->has_operation())
	|| (tunnels !=  nullptr && tunnels->has_operation());
}

std::string TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "counters";

    return path_buffer.str();

}

EntityPath TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Counters' in Cisco_IOS_XR_infra_tc_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "prefixes")
    {
        if(prefixes != nullptr)
        {
            children["prefixes"] = prefixes;
        }
        else
        {
            prefixes = std::make_shared<TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Prefixes>();
            prefixes->parent = this;
            children["prefixes"] = prefixes;
        }
        return children.at("prefixes");
    }

    if(child_yang_name == "tunnels")
    {
        if(tunnels != nullptr)
        {
            children["tunnels"] = tunnels;
        }
        else
        {
            tunnels = std::make_shared<TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Tunnels>();
            tunnels->parent = this;
            children["tunnels"] = tunnels;
        }
        return children.at("tunnels");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::get_children()
{
    if(children.find("prefixes") == children.end())
    {
        if(prefixes != nullptr)
        {
            children["prefixes"] = prefixes;
        }
    }

    if(children.find("tunnels") == children.end())
    {
        if(tunnels != nullptr)
        {
            children["tunnels"] = tunnels;
        }
    }

    return children;
}

void TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::set_value(const std::string & value_path, std::string value)
{
}

TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Prefixes::Prefixes()
{
    yang_name = "prefixes"; yang_parent_name = "counters";
}

TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Prefixes::~Prefixes()
{
}

bool TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Prefixes::has_data() const
{
    for (std::size_t index=0; index<prefix.size(); index++)
    {
        if(prefix[index]->has_data())
            return true;
    }
    return false;
}

bool TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Prefixes::has_operation() const
{
    for (std::size_t index=0; index<prefix.size(); index++)
    {
        if(prefix[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Prefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefixes";

    return path_buffer.str();

}

EntityPath TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Prefixes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Prefixes' in Cisco_IOS_XR_infra_tc_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Prefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
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
        auto c = std::make_shared<TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Prefixes::Prefix>();
        c->parent = this;
        prefix.push_back(std::move(c));
        children[segment_path] = prefix.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Prefixes::get_children()
{
    for (auto const & c : prefix)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Prefixes::set_value(const std::string & value_path, std::string value)
{
}

TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Prefixes::Prefix::Prefix()
    :
    ipaddr{YType::str, "ipaddr"},
    is_active{YType::boolean, "is-active"},
    label{YType::uint32, "label"},
    label_xr{YType::uint32, "label-xr"},
    mask{YType::str, "mask"},
    prefix{YType::str, "prefix"}
    	,
    base_counter_statistics(std::make_shared<TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Prefixes::Prefix::BaseCounterStatistics>())
	,traffic_matrix_counter_statistics(std::make_shared<TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Prefixes::Prefix::TrafficMatrixCounterStatistics>())
{
    base_counter_statistics->parent = this;
    children["base-counter-statistics"] = base_counter_statistics;

    traffic_matrix_counter_statistics->parent = this;
    children["traffic-matrix-counter-statistics"] = traffic_matrix_counter_statistics;

    yang_name = "prefix"; yang_parent_name = "prefixes";
}

TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Prefixes::Prefix::~Prefix()
{
}

bool TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Prefixes::Prefix::has_data() const
{
    return ipaddr.is_set
	|| is_active.is_set
	|| label.is_set
	|| label_xr.is_set
	|| mask.is_set
	|| prefix.is_set
	|| (base_counter_statistics !=  nullptr && base_counter_statistics->has_data())
	|| (traffic_matrix_counter_statistics !=  nullptr && traffic_matrix_counter_statistics->has_data());
}

bool TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Prefixes::Prefix::has_operation() const
{
    return is_set(operation)
	|| is_set(ipaddr.operation)
	|| is_set(is_active.operation)
	|| is_set(label.operation)
	|| is_set(label_xr.operation)
	|| is_set(mask.operation)
	|| is_set(prefix.operation)
	|| (base_counter_statistics !=  nullptr && base_counter_statistics->has_operation())
	|| (traffic_matrix_counter_statistics !=  nullptr && traffic_matrix_counter_statistics->has_operation());
}

std::string TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Prefixes::Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix";

    return path_buffer.str();

}

EntityPath TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Prefixes::Prefix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Prefix' in Cisco_IOS_XR_infra_tc_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipaddr.is_set || is_set(ipaddr.operation)) leaf_name_data.push_back(ipaddr.get_name_leafdata());
    if (is_active.is_set || is_set(is_active.operation)) leaf_name_data.push_back(is_active.get_name_leafdata());
    if (label.is_set || is_set(label.operation)) leaf_name_data.push_back(label.get_name_leafdata());
    if (label_xr.is_set || is_set(label_xr.operation)) leaf_name_data.push_back(label_xr.get_name_leafdata());
    if (mask.is_set || is_set(mask.operation)) leaf_name_data.push_back(mask.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Prefixes::Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "base-counter-statistics")
    {
        if(base_counter_statistics != nullptr)
        {
            children["base-counter-statistics"] = base_counter_statistics;
        }
        else
        {
            base_counter_statistics = std::make_shared<TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Prefixes::Prefix::BaseCounterStatistics>();
            base_counter_statistics->parent = this;
            children["base-counter-statistics"] = base_counter_statistics;
        }
        return children.at("base-counter-statistics");
    }

    if(child_yang_name == "traffic-matrix-counter-statistics")
    {
        if(traffic_matrix_counter_statistics != nullptr)
        {
            children["traffic-matrix-counter-statistics"] = traffic_matrix_counter_statistics;
        }
        else
        {
            traffic_matrix_counter_statistics = std::make_shared<TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Prefixes::Prefix::TrafficMatrixCounterStatistics>();
            traffic_matrix_counter_statistics->parent = this;
            children["traffic-matrix-counter-statistics"] = traffic_matrix_counter_statistics;
        }
        return children.at("traffic-matrix-counter-statistics");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Prefixes::Prefix::get_children()
{
    if(children.find("base-counter-statistics") == children.end())
    {
        if(base_counter_statistics != nullptr)
        {
            children["base-counter-statistics"] = base_counter_statistics;
        }
    }

    if(children.find("traffic-matrix-counter-statistics") == children.end())
    {
        if(traffic_matrix_counter_statistics != nullptr)
        {
            children["traffic-matrix-counter-statistics"] = traffic_matrix_counter_statistics;
        }
    }

    return children;
}

void TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Prefixes::Prefix::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipaddr")
    {
        ipaddr = value;
    }
    if(value_path == "is-active")
    {
        is_active = value;
    }
    if(value_path == "label")
    {
        label = value;
    }
    if(value_path == "label-xr")
    {
        label_xr = value;
    }
    if(value_path == "mask")
    {
        mask = value;
    }
    if(value_path == "prefix")
    {
        prefix = value;
    }
}

TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Prefixes::Prefix::BaseCounterStatistics::BaseCounterStatistics()
    :
    transmit_bytes_per_second_switched{YType::uint64, "transmit-bytes-per-second-switched"},
    transmit_packets_per_second_switched{YType::uint64, "transmit-packets-per-second-switched"}
{
    yang_name = "base-counter-statistics"; yang_parent_name = "prefix";
}

TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Prefixes::Prefix::BaseCounterStatistics::~BaseCounterStatistics()
{
}

bool TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Prefixes::Prefix::BaseCounterStatistics::has_data() const
{
    for (std::size_t index=0; index<count_history.size(); index++)
    {
        if(count_history[index]->has_data())
            return true;
    }
    return transmit_bytes_per_second_switched.is_set
	|| transmit_packets_per_second_switched.is_set;
}

bool TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Prefixes::Prefix::BaseCounterStatistics::has_operation() const
{
    for (std::size_t index=0; index<count_history.size(); index++)
    {
        if(count_history[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(transmit_bytes_per_second_switched.operation)
	|| is_set(transmit_packets_per_second_switched.operation);
}

std::string TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Prefixes::Prefix::BaseCounterStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base-counter-statistics";

    return path_buffer.str();

}

EntityPath TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Prefixes::Prefix::BaseCounterStatistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BaseCounterStatistics' in Cisco_IOS_XR_infra_tc_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (transmit_bytes_per_second_switched.is_set || is_set(transmit_bytes_per_second_switched.operation)) leaf_name_data.push_back(transmit_bytes_per_second_switched.get_name_leafdata());
    if (transmit_packets_per_second_switched.is_set || is_set(transmit_packets_per_second_switched.operation)) leaf_name_data.push_back(transmit_packets_per_second_switched.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Prefixes::Prefix::BaseCounterStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "count-history")
    {
        for(auto const & c : count_history)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Prefixes::Prefix::BaseCounterStatistics::CountHistory>();
        c->parent = this;
        count_history.push_back(std::move(c));
        children[segment_path] = count_history.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Prefixes::Prefix::BaseCounterStatistics::get_children()
{
    for (auto const & c : count_history)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Prefixes::Prefix::BaseCounterStatistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "transmit-bytes-per-second-switched")
    {
        transmit_bytes_per_second_switched = value;
    }
    if(value_path == "transmit-packets-per-second-switched")
    {
        transmit_packets_per_second_switched = value;
    }
}

TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Prefixes::Prefix::BaseCounterStatistics::CountHistory::CountHistory()
    :
    event_end_timestamp{YType::uint64, "event-end-timestamp"},
    event_start_timestamp{YType::uint64, "event-start-timestamp"},
    is_valid{YType::boolean, "is-valid"},
    transmit_number_of_bytes_switched{YType::uint64, "transmit-number-of-bytes-switched"},
    transmit_number_of_packets_switched{YType::uint64, "transmit-number-of-packets-switched"}
{
    yang_name = "count-history"; yang_parent_name = "base-counter-statistics";
}

TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Prefixes::Prefix::BaseCounterStatistics::CountHistory::~CountHistory()
{
}

bool TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Prefixes::Prefix::BaseCounterStatistics::CountHistory::has_data() const
{
    return event_end_timestamp.is_set
	|| event_start_timestamp.is_set
	|| is_valid.is_set
	|| transmit_number_of_bytes_switched.is_set
	|| transmit_number_of_packets_switched.is_set;
}

bool TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Prefixes::Prefix::BaseCounterStatistics::CountHistory::has_operation() const
{
    return is_set(operation)
	|| is_set(event_end_timestamp.operation)
	|| is_set(event_start_timestamp.operation)
	|| is_set(is_valid.operation)
	|| is_set(transmit_number_of_bytes_switched.operation)
	|| is_set(transmit_number_of_packets_switched.operation);
}

std::string TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Prefixes::Prefix::BaseCounterStatistics::CountHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "count-history";

    return path_buffer.str();

}

EntityPath TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Prefixes::Prefix::BaseCounterStatistics::CountHistory::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CountHistory' in Cisco_IOS_XR_infra_tc_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (event_end_timestamp.is_set || is_set(event_end_timestamp.operation)) leaf_name_data.push_back(event_end_timestamp.get_name_leafdata());
    if (event_start_timestamp.is_set || is_set(event_start_timestamp.operation)) leaf_name_data.push_back(event_start_timestamp.get_name_leafdata());
    if (is_valid.is_set || is_set(is_valid.operation)) leaf_name_data.push_back(is_valid.get_name_leafdata());
    if (transmit_number_of_bytes_switched.is_set || is_set(transmit_number_of_bytes_switched.operation)) leaf_name_data.push_back(transmit_number_of_bytes_switched.get_name_leafdata());
    if (transmit_number_of_packets_switched.is_set || is_set(transmit_number_of_packets_switched.operation)) leaf_name_data.push_back(transmit_number_of_packets_switched.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Prefixes::Prefix::BaseCounterStatistics::CountHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Prefixes::Prefix::BaseCounterStatistics::CountHistory::get_children()
{
    return children;
}

void TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Prefixes::Prefix::BaseCounterStatistics::CountHistory::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "event-end-timestamp")
    {
        event_end_timestamp = value;
    }
    if(value_path == "event-start-timestamp")
    {
        event_start_timestamp = value;
    }
    if(value_path == "is-valid")
    {
        is_valid = value;
    }
    if(value_path == "transmit-number-of-bytes-switched")
    {
        transmit_number_of_bytes_switched = value;
    }
    if(value_path == "transmit-number-of-packets-switched")
    {
        transmit_number_of_packets_switched = value;
    }
}

TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Prefixes::Prefix::TrafficMatrixCounterStatistics::TrafficMatrixCounterStatistics()
    :
    transmit_bytes_per_second_switched{YType::uint64, "transmit-bytes-per-second-switched"},
    transmit_packets_per_second_switched{YType::uint64, "transmit-packets-per-second-switched"}
{
    yang_name = "traffic-matrix-counter-statistics"; yang_parent_name = "prefix";
}

TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Prefixes::Prefix::TrafficMatrixCounterStatistics::~TrafficMatrixCounterStatistics()
{
}

bool TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Prefixes::Prefix::TrafficMatrixCounterStatistics::has_data() const
{
    for (std::size_t index=0; index<count_history.size(); index++)
    {
        if(count_history[index]->has_data())
            return true;
    }
    return transmit_bytes_per_second_switched.is_set
	|| transmit_packets_per_second_switched.is_set;
}

bool TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Prefixes::Prefix::TrafficMatrixCounterStatistics::has_operation() const
{
    for (std::size_t index=0; index<count_history.size(); index++)
    {
        if(count_history[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(transmit_bytes_per_second_switched.operation)
	|| is_set(transmit_packets_per_second_switched.operation);
}

std::string TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Prefixes::Prefix::TrafficMatrixCounterStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traffic-matrix-counter-statistics";

    return path_buffer.str();

}

EntityPath TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Prefixes::Prefix::TrafficMatrixCounterStatistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TrafficMatrixCounterStatistics' in Cisco_IOS_XR_infra_tc_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (transmit_bytes_per_second_switched.is_set || is_set(transmit_bytes_per_second_switched.operation)) leaf_name_data.push_back(transmit_bytes_per_second_switched.get_name_leafdata());
    if (transmit_packets_per_second_switched.is_set || is_set(transmit_packets_per_second_switched.operation)) leaf_name_data.push_back(transmit_packets_per_second_switched.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Prefixes::Prefix::TrafficMatrixCounterStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "count-history")
    {
        for(auto const & c : count_history)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Prefixes::Prefix::TrafficMatrixCounterStatistics::CountHistory>();
        c->parent = this;
        count_history.push_back(std::move(c));
        children[segment_path] = count_history.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Prefixes::Prefix::TrafficMatrixCounterStatistics::get_children()
{
    for (auto const & c : count_history)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Prefixes::Prefix::TrafficMatrixCounterStatistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "transmit-bytes-per-second-switched")
    {
        transmit_bytes_per_second_switched = value;
    }
    if(value_path == "transmit-packets-per-second-switched")
    {
        transmit_packets_per_second_switched = value;
    }
}

TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Prefixes::Prefix::TrafficMatrixCounterStatistics::CountHistory::CountHistory()
    :
    event_end_timestamp{YType::uint64, "event-end-timestamp"},
    event_start_timestamp{YType::uint64, "event-start-timestamp"},
    is_valid{YType::boolean, "is-valid"},
    transmit_number_of_bytes_switched{YType::uint64, "transmit-number-of-bytes-switched"},
    transmit_number_of_packets_switched{YType::uint64, "transmit-number-of-packets-switched"}
{
    yang_name = "count-history"; yang_parent_name = "traffic-matrix-counter-statistics";
}

TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Prefixes::Prefix::TrafficMatrixCounterStatistics::CountHistory::~CountHistory()
{
}

bool TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Prefixes::Prefix::TrafficMatrixCounterStatistics::CountHistory::has_data() const
{
    return event_end_timestamp.is_set
	|| event_start_timestamp.is_set
	|| is_valid.is_set
	|| transmit_number_of_bytes_switched.is_set
	|| transmit_number_of_packets_switched.is_set;
}

bool TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Prefixes::Prefix::TrafficMatrixCounterStatistics::CountHistory::has_operation() const
{
    return is_set(operation)
	|| is_set(event_end_timestamp.operation)
	|| is_set(event_start_timestamp.operation)
	|| is_set(is_valid.operation)
	|| is_set(transmit_number_of_bytes_switched.operation)
	|| is_set(transmit_number_of_packets_switched.operation);
}

std::string TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Prefixes::Prefix::TrafficMatrixCounterStatistics::CountHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "count-history";

    return path_buffer.str();

}

EntityPath TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Prefixes::Prefix::TrafficMatrixCounterStatistics::CountHistory::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CountHistory' in Cisco_IOS_XR_infra_tc_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (event_end_timestamp.is_set || is_set(event_end_timestamp.operation)) leaf_name_data.push_back(event_end_timestamp.get_name_leafdata());
    if (event_start_timestamp.is_set || is_set(event_start_timestamp.operation)) leaf_name_data.push_back(event_start_timestamp.get_name_leafdata());
    if (is_valid.is_set || is_set(is_valid.operation)) leaf_name_data.push_back(is_valid.get_name_leafdata());
    if (transmit_number_of_bytes_switched.is_set || is_set(transmit_number_of_bytes_switched.operation)) leaf_name_data.push_back(transmit_number_of_bytes_switched.get_name_leafdata());
    if (transmit_number_of_packets_switched.is_set || is_set(transmit_number_of_packets_switched.operation)) leaf_name_data.push_back(transmit_number_of_packets_switched.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Prefixes::Prefix::TrafficMatrixCounterStatistics::CountHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Prefixes::Prefix::TrafficMatrixCounterStatistics::CountHistory::get_children()
{
    return children;
}

void TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Prefixes::Prefix::TrafficMatrixCounterStatistics::CountHistory::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "event-end-timestamp")
    {
        event_end_timestamp = value;
    }
    if(value_path == "event-start-timestamp")
    {
        event_start_timestamp = value;
    }
    if(value_path == "is-valid")
    {
        is_valid = value;
    }
    if(value_path == "transmit-number-of-bytes-switched")
    {
        transmit_number_of_bytes_switched = value;
    }
    if(value_path == "transmit-number-of-packets-switched")
    {
        transmit_number_of_packets_switched = value;
    }
}

TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Tunnels::Tunnels()
{
    yang_name = "tunnels"; yang_parent_name = "counters";
}

TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Tunnels::~Tunnels()
{
}

bool TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Tunnels::has_data() const
{
    for (std::size_t index=0; index<tunnel.size(); index++)
    {
        if(tunnel[index]->has_data())
            return true;
    }
    return false;
}

bool TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Tunnels::has_operation() const
{
    for (std::size_t index=0; index<tunnel.size(); index++)
    {
        if(tunnel[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Tunnels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnels";

    return path_buffer.str();

}

EntityPath TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Tunnels::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Tunnels' in Cisco_IOS_XR_infra_tc_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Tunnels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "tunnel")
    {
        for(auto const & c : tunnel)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Tunnels::Tunnel>();
        c->parent = this;
        tunnel.push_back(std::move(c));
        children[segment_path] = tunnel.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Tunnels::get_children()
{
    for (auto const & c : tunnel)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Tunnels::set_value(const std::string & value_path, std::string value)
{
}

TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Tunnels::Tunnel::Tunnel()
    :
    interface_name{YType::str, "interface-name"},
    interface_handle{YType::uint32, "interface-handle"},
    interface_name_xr{YType::str, "interface-name-xr"},
    is_active{YType::boolean, "is-active"},
    vrfid{YType::uint32, "vrfid"}
    	,
    base_counter_statistics(std::make_shared<TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Tunnels::Tunnel::BaseCounterStatistics>())
{
    base_counter_statistics->parent = this;
    children["base-counter-statistics"] = base_counter_statistics;

    yang_name = "tunnel"; yang_parent_name = "tunnels";
}

TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Tunnels::Tunnel::~Tunnel()
{
}

bool TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Tunnels::Tunnel::has_data() const
{
    return interface_name.is_set
	|| interface_handle.is_set
	|| interface_name_xr.is_set
	|| is_active.is_set
	|| vrfid.is_set
	|| (base_counter_statistics !=  nullptr && base_counter_statistics->has_data());
}

bool TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Tunnels::Tunnel::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(interface_handle.operation)
	|| is_set(interface_name_xr.operation)
	|| is_set(is_active.operation)
	|| is_set(vrfid.operation)
	|| (base_counter_statistics !=  nullptr && base_counter_statistics->has_operation());
}

std::string TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Tunnels::Tunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Tunnels::Tunnel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Tunnel' in Cisco_IOS_XR_infra_tc_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (interface_handle.is_set || is_set(interface_handle.operation)) leaf_name_data.push_back(interface_handle.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.operation)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (is_active.is_set || is_set(is_active.operation)) leaf_name_data.push_back(is_active.get_name_leafdata());
    if (vrfid.is_set || is_set(vrfid.operation)) leaf_name_data.push_back(vrfid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Tunnels::Tunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "base-counter-statistics")
    {
        if(base_counter_statistics != nullptr)
        {
            children["base-counter-statistics"] = base_counter_statistics;
        }
        else
        {
            base_counter_statistics = std::make_shared<TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Tunnels::Tunnel::BaseCounterStatistics>();
            base_counter_statistics->parent = this;
            children["base-counter-statistics"] = base_counter_statistics;
        }
        return children.at("base-counter-statistics");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Tunnels::Tunnel::get_children()
{
    if(children.find("base-counter-statistics") == children.end())
    {
        if(base_counter_statistics != nullptr)
        {
            children["base-counter-statistics"] = base_counter_statistics;
        }
    }

    return children;
}

void TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Tunnels::Tunnel::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "interface-handle")
    {
        interface_handle = value;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
    }
    if(value_path == "is-active")
    {
        is_active = value;
    }
    if(value_path == "vrfid")
    {
        vrfid = value;
    }
}

TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Tunnels::Tunnel::BaseCounterStatistics::BaseCounterStatistics()
    :
    transmit_bytes_per_second_switched{YType::uint64, "transmit-bytes-per-second-switched"},
    transmit_packets_per_second_switched{YType::uint64, "transmit-packets-per-second-switched"}
{
    yang_name = "base-counter-statistics"; yang_parent_name = "tunnel";
}

TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Tunnels::Tunnel::BaseCounterStatistics::~BaseCounterStatistics()
{
}

bool TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Tunnels::Tunnel::BaseCounterStatistics::has_data() const
{
    for (std::size_t index=0; index<count_history.size(); index++)
    {
        if(count_history[index]->has_data())
            return true;
    }
    return transmit_bytes_per_second_switched.is_set
	|| transmit_packets_per_second_switched.is_set;
}

bool TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Tunnels::Tunnel::BaseCounterStatistics::has_operation() const
{
    for (std::size_t index=0; index<count_history.size(); index++)
    {
        if(count_history[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(transmit_bytes_per_second_switched.operation)
	|| is_set(transmit_packets_per_second_switched.operation);
}

std::string TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Tunnels::Tunnel::BaseCounterStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base-counter-statistics";

    return path_buffer.str();

}

EntityPath TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Tunnels::Tunnel::BaseCounterStatistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BaseCounterStatistics' in Cisco_IOS_XR_infra_tc_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (transmit_bytes_per_second_switched.is_set || is_set(transmit_bytes_per_second_switched.operation)) leaf_name_data.push_back(transmit_bytes_per_second_switched.get_name_leafdata());
    if (transmit_packets_per_second_switched.is_set || is_set(transmit_packets_per_second_switched.operation)) leaf_name_data.push_back(transmit_packets_per_second_switched.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Tunnels::Tunnel::BaseCounterStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "count-history")
    {
        for(auto const & c : count_history)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Tunnels::Tunnel::BaseCounterStatistics::CountHistory>();
        c->parent = this;
        count_history.push_back(std::move(c));
        children[segment_path] = count_history.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Tunnels::Tunnel::BaseCounterStatistics::get_children()
{
    for (auto const & c : count_history)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Tunnels::Tunnel::BaseCounterStatistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "transmit-bytes-per-second-switched")
    {
        transmit_bytes_per_second_switched = value;
    }
    if(value_path == "transmit-packets-per-second-switched")
    {
        transmit_packets_per_second_switched = value;
    }
}

TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Tunnels::Tunnel::BaseCounterStatistics::CountHistory::CountHistory()
    :
    event_end_timestamp{YType::uint64, "event-end-timestamp"},
    event_start_timestamp{YType::uint64, "event-start-timestamp"},
    is_valid{YType::boolean, "is-valid"},
    transmit_number_of_bytes_switched{YType::uint64, "transmit-number-of-bytes-switched"},
    transmit_number_of_packets_switched{YType::uint64, "transmit-number-of-packets-switched"}
{
    yang_name = "count-history"; yang_parent_name = "base-counter-statistics";
}

TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Tunnels::Tunnel::BaseCounterStatistics::CountHistory::~CountHistory()
{
}

bool TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Tunnels::Tunnel::BaseCounterStatistics::CountHistory::has_data() const
{
    return event_end_timestamp.is_set
	|| event_start_timestamp.is_set
	|| is_valid.is_set
	|| transmit_number_of_bytes_switched.is_set
	|| transmit_number_of_packets_switched.is_set;
}

bool TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Tunnels::Tunnel::BaseCounterStatistics::CountHistory::has_operation() const
{
    return is_set(operation)
	|| is_set(event_end_timestamp.operation)
	|| is_set(event_start_timestamp.operation)
	|| is_set(is_valid.operation)
	|| is_set(transmit_number_of_bytes_switched.operation)
	|| is_set(transmit_number_of_packets_switched.operation);
}

std::string TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Tunnels::Tunnel::BaseCounterStatistics::CountHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "count-history";

    return path_buffer.str();

}

EntityPath TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Tunnels::Tunnel::BaseCounterStatistics::CountHistory::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CountHistory' in Cisco_IOS_XR_infra_tc_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (event_end_timestamp.is_set || is_set(event_end_timestamp.operation)) leaf_name_data.push_back(event_end_timestamp.get_name_leafdata());
    if (event_start_timestamp.is_set || is_set(event_start_timestamp.operation)) leaf_name_data.push_back(event_start_timestamp.get_name_leafdata());
    if (is_valid.is_set || is_set(is_valid.operation)) leaf_name_data.push_back(is_valid.get_name_leafdata());
    if (transmit_number_of_bytes_switched.is_set || is_set(transmit_number_of_bytes_switched.operation)) leaf_name_data.push_back(transmit_number_of_bytes_switched.get_name_leafdata());
    if (transmit_number_of_packets_switched.is_set || is_set(transmit_number_of_packets_switched.operation)) leaf_name_data.push_back(transmit_number_of_packets_switched.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Tunnels::Tunnel::BaseCounterStatistics::CountHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Tunnels::Tunnel::BaseCounterStatistics::CountHistory::get_children()
{
    return children;
}

void TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Tunnels::Tunnel::BaseCounterStatistics::CountHistory::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "event-end-timestamp")
    {
        event_end_timestamp = value;
    }
    if(value_path == "event-start-timestamp")
    {
        event_start_timestamp = value;
    }
    if(value_path == "is-valid")
    {
        is_valid = value;
    }
    if(value_path == "transmit-number-of-bytes-switched")
    {
        transmit_number_of_bytes_switched = value;
    }
    if(value_path == "transmit-number-of-packets-switched")
    {
        transmit_number_of_packets_switched = value;
    }
}

TrafficCollector::Afs::Afs()
{
    yang_name = "afs"; yang_parent_name = "traffic-collector";
}

TrafficCollector::Afs::~Afs()
{
}

bool TrafficCollector::Afs::has_data() const
{
    for (std::size_t index=0; index<af.size(); index++)
    {
        if(af[index]->has_data())
            return true;
    }
    return false;
}

bool TrafficCollector::Afs::has_operation() const
{
    for (std::size_t index=0; index<af.size(); index++)
    {
        if(af[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string TrafficCollector::Afs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "afs";

    return path_buffer.str();

}

EntityPath TrafficCollector::Afs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-tc-oper:traffic-collector/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> TrafficCollector::Afs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "af")
    {
        for(auto const & c : af)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<TrafficCollector::Afs::Af>();
        c->parent = this;
        af.push_back(std::move(c));
        children[segment_path] = af.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & TrafficCollector::Afs::get_children()
{
    for (auto const & c : af)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void TrafficCollector::Afs::set_value(const std::string & value_path, std::string value)
{
}

TrafficCollector::Afs::Af::Af()
    :
    af_name{YType::enumeration, "af-name"}
    	,
    counters(std::make_shared<TrafficCollector::Afs::Af::Counters>())
{
    counters->parent = this;
    children["counters"] = counters;

    yang_name = "af"; yang_parent_name = "afs";
}

TrafficCollector::Afs::Af::~Af()
{
}

bool TrafficCollector::Afs::Af::has_data() const
{
    return af_name.is_set
	|| (counters !=  nullptr && counters->has_data());
}

bool TrafficCollector::Afs::Af::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| (counters !=  nullptr && counters->has_operation());
}

std::string TrafficCollector::Afs::Af::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "af" <<"[af-name='" <<af_name <<"']";

    return path_buffer.str();

}

EntityPath TrafficCollector::Afs::Af::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-tc-oper:traffic-collector/afs/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> TrafficCollector::Afs::Af::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            counters = std::make_shared<TrafficCollector::Afs::Af::Counters>();
            counters->parent = this;
            children["counters"] = counters;
        }
        return children.at("counters");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & TrafficCollector::Afs::Af::get_children()
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

void TrafficCollector::Afs::Af::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
}

TrafficCollector::Afs::Af::Counters::Counters()
    :
    prefixes(std::make_shared<TrafficCollector::Afs::Af::Counters::Prefixes>())
	,tunnels(std::make_shared<TrafficCollector::Afs::Af::Counters::Tunnels>())
{
    prefixes->parent = this;
    children["prefixes"] = prefixes;

    tunnels->parent = this;
    children["tunnels"] = tunnels;

    yang_name = "counters"; yang_parent_name = "af";
}

TrafficCollector::Afs::Af::Counters::~Counters()
{
}

bool TrafficCollector::Afs::Af::Counters::has_data() const
{
    return (prefixes !=  nullptr && prefixes->has_data())
	|| (tunnels !=  nullptr && tunnels->has_data());
}

bool TrafficCollector::Afs::Af::Counters::has_operation() const
{
    return is_set(operation)
	|| (prefixes !=  nullptr && prefixes->has_operation())
	|| (tunnels !=  nullptr && tunnels->has_operation());
}

std::string TrafficCollector::Afs::Af::Counters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "counters";

    return path_buffer.str();

}

EntityPath TrafficCollector::Afs::Af::Counters::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Counters' in Cisco_IOS_XR_infra_tc_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> TrafficCollector::Afs::Af::Counters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "prefixes")
    {
        if(prefixes != nullptr)
        {
            children["prefixes"] = prefixes;
        }
        else
        {
            prefixes = std::make_shared<TrafficCollector::Afs::Af::Counters::Prefixes>();
            prefixes->parent = this;
            children["prefixes"] = prefixes;
        }
        return children.at("prefixes");
    }

    if(child_yang_name == "tunnels")
    {
        if(tunnels != nullptr)
        {
            children["tunnels"] = tunnels;
        }
        else
        {
            tunnels = std::make_shared<TrafficCollector::Afs::Af::Counters::Tunnels>();
            tunnels->parent = this;
            children["tunnels"] = tunnels;
        }
        return children.at("tunnels");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & TrafficCollector::Afs::Af::Counters::get_children()
{
    if(children.find("prefixes") == children.end())
    {
        if(prefixes != nullptr)
        {
            children["prefixes"] = prefixes;
        }
    }

    if(children.find("tunnels") == children.end())
    {
        if(tunnels != nullptr)
        {
            children["tunnels"] = tunnels;
        }
    }

    return children;
}

void TrafficCollector::Afs::Af::Counters::set_value(const std::string & value_path, std::string value)
{
}

TrafficCollector::Afs::Af::Counters::Prefixes::Prefixes()
{
    yang_name = "prefixes"; yang_parent_name = "counters";
}

TrafficCollector::Afs::Af::Counters::Prefixes::~Prefixes()
{
}

bool TrafficCollector::Afs::Af::Counters::Prefixes::has_data() const
{
    for (std::size_t index=0; index<prefix.size(); index++)
    {
        if(prefix[index]->has_data())
            return true;
    }
    return false;
}

bool TrafficCollector::Afs::Af::Counters::Prefixes::has_operation() const
{
    for (std::size_t index=0; index<prefix.size(); index++)
    {
        if(prefix[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string TrafficCollector::Afs::Af::Counters::Prefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefixes";

    return path_buffer.str();

}

EntityPath TrafficCollector::Afs::Af::Counters::Prefixes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Prefixes' in Cisco_IOS_XR_infra_tc_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> TrafficCollector::Afs::Af::Counters::Prefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
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
        auto c = std::make_shared<TrafficCollector::Afs::Af::Counters::Prefixes::Prefix>();
        c->parent = this;
        prefix.push_back(std::move(c));
        children[segment_path] = prefix.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & TrafficCollector::Afs::Af::Counters::Prefixes::get_children()
{
    for (auto const & c : prefix)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void TrafficCollector::Afs::Af::Counters::Prefixes::set_value(const std::string & value_path, std::string value)
{
}

TrafficCollector::Afs::Af::Counters::Prefixes::Prefix::Prefix()
    :
    ipaddr{YType::str, "ipaddr"},
    is_active{YType::boolean, "is-active"},
    label{YType::uint32, "label"},
    label_xr{YType::uint32, "label-xr"},
    mask{YType::str, "mask"},
    prefix{YType::str, "prefix"}
    	,
    base_counter_statistics(std::make_shared<TrafficCollector::Afs::Af::Counters::Prefixes::Prefix::BaseCounterStatistics>())
	,traffic_matrix_counter_statistics(std::make_shared<TrafficCollector::Afs::Af::Counters::Prefixes::Prefix::TrafficMatrixCounterStatistics>())
{
    base_counter_statistics->parent = this;
    children["base-counter-statistics"] = base_counter_statistics;

    traffic_matrix_counter_statistics->parent = this;
    children["traffic-matrix-counter-statistics"] = traffic_matrix_counter_statistics;

    yang_name = "prefix"; yang_parent_name = "prefixes";
}

TrafficCollector::Afs::Af::Counters::Prefixes::Prefix::~Prefix()
{
}

bool TrafficCollector::Afs::Af::Counters::Prefixes::Prefix::has_data() const
{
    return ipaddr.is_set
	|| is_active.is_set
	|| label.is_set
	|| label_xr.is_set
	|| mask.is_set
	|| prefix.is_set
	|| (base_counter_statistics !=  nullptr && base_counter_statistics->has_data())
	|| (traffic_matrix_counter_statistics !=  nullptr && traffic_matrix_counter_statistics->has_data());
}

bool TrafficCollector::Afs::Af::Counters::Prefixes::Prefix::has_operation() const
{
    return is_set(operation)
	|| is_set(ipaddr.operation)
	|| is_set(is_active.operation)
	|| is_set(label.operation)
	|| is_set(label_xr.operation)
	|| is_set(mask.operation)
	|| is_set(prefix.operation)
	|| (base_counter_statistics !=  nullptr && base_counter_statistics->has_operation())
	|| (traffic_matrix_counter_statistics !=  nullptr && traffic_matrix_counter_statistics->has_operation());
}

std::string TrafficCollector::Afs::Af::Counters::Prefixes::Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix";

    return path_buffer.str();

}

EntityPath TrafficCollector::Afs::Af::Counters::Prefixes::Prefix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Prefix' in Cisco_IOS_XR_infra_tc_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipaddr.is_set || is_set(ipaddr.operation)) leaf_name_data.push_back(ipaddr.get_name_leafdata());
    if (is_active.is_set || is_set(is_active.operation)) leaf_name_data.push_back(is_active.get_name_leafdata());
    if (label.is_set || is_set(label.operation)) leaf_name_data.push_back(label.get_name_leafdata());
    if (label_xr.is_set || is_set(label_xr.operation)) leaf_name_data.push_back(label_xr.get_name_leafdata());
    if (mask.is_set || is_set(mask.operation)) leaf_name_data.push_back(mask.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> TrafficCollector::Afs::Af::Counters::Prefixes::Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "base-counter-statistics")
    {
        if(base_counter_statistics != nullptr)
        {
            children["base-counter-statistics"] = base_counter_statistics;
        }
        else
        {
            base_counter_statistics = std::make_shared<TrafficCollector::Afs::Af::Counters::Prefixes::Prefix::BaseCounterStatistics>();
            base_counter_statistics->parent = this;
            children["base-counter-statistics"] = base_counter_statistics;
        }
        return children.at("base-counter-statistics");
    }

    if(child_yang_name == "traffic-matrix-counter-statistics")
    {
        if(traffic_matrix_counter_statistics != nullptr)
        {
            children["traffic-matrix-counter-statistics"] = traffic_matrix_counter_statistics;
        }
        else
        {
            traffic_matrix_counter_statistics = std::make_shared<TrafficCollector::Afs::Af::Counters::Prefixes::Prefix::TrafficMatrixCounterStatistics>();
            traffic_matrix_counter_statistics->parent = this;
            children["traffic-matrix-counter-statistics"] = traffic_matrix_counter_statistics;
        }
        return children.at("traffic-matrix-counter-statistics");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & TrafficCollector::Afs::Af::Counters::Prefixes::Prefix::get_children()
{
    if(children.find("base-counter-statistics") == children.end())
    {
        if(base_counter_statistics != nullptr)
        {
            children["base-counter-statistics"] = base_counter_statistics;
        }
    }

    if(children.find("traffic-matrix-counter-statistics") == children.end())
    {
        if(traffic_matrix_counter_statistics != nullptr)
        {
            children["traffic-matrix-counter-statistics"] = traffic_matrix_counter_statistics;
        }
    }

    return children;
}

void TrafficCollector::Afs::Af::Counters::Prefixes::Prefix::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipaddr")
    {
        ipaddr = value;
    }
    if(value_path == "is-active")
    {
        is_active = value;
    }
    if(value_path == "label")
    {
        label = value;
    }
    if(value_path == "label-xr")
    {
        label_xr = value;
    }
    if(value_path == "mask")
    {
        mask = value;
    }
    if(value_path == "prefix")
    {
        prefix = value;
    }
}

TrafficCollector::Afs::Af::Counters::Prefixes::Prefix::BaseCounterStatistics::BaseCounterStatistics()
    :
    transmit_bytes_per_second_switched{YType::uint64, "transmit-bytes-per-second-switched"},
    transmit_packets_per_second_switched{YType::uint64, "transmit-packets-per-second-switched"}
{
    yang_name = "base-counter-statistics"; yang_parent_name = "prefix";
}

TrafficCollector::Afs::Af::Counters::Prefixes::Prefix::BaseCounterStatistics::~BaseCounterStatistics()
{
}

bool TrafficCollector::Afs::Af::Counters::Prefixes::Prefix::BaseCounterStatistics::has_data() const
{
    for (std::size_t index=0; index<count_history.size(); index++)
    {
        if(count_history[index]->has_data())
            return true;
    }
    return transmit_bytes_per_second_switched.is_set
	|| transmit_packets_per_second_switched.is_set;
}

bool TrafficCollector::Afs::Af::Counters::Prefixes::Prefix::BaseCounterStatistics::has_operation() const
{
    for (std::size_t index=0; index<count_history.size(); index++)
    {
        if(count_history[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(transmit_bytes_per_second_switched.operation)
	|| is_set(transmit_packets_per_second_switched.operation);
}

std::string TrafficCollector::Afs::Af::Counters::Prefixes::Prefix::BaseCounterStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base-counter-statistics";

    return path_buffer.str();

}

EntityPath TrafficCollector::Afs::Af::Counters::Prefixes::Prefix::BaseCounterStatistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BaseCounterStatistics' in Cisco_IOS_XR_infra_tc_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (transmit_bytes_per_second_switched.is_set || is_set(transmit_bytes_per_second_switched.operation)) leaf_name_data.push_back(transmit_bytes_per_second_switched.get_name_leafdata());
    if (transmit_packets_per_second_switched.is_set || is_set(transmit_packets_per_second_switched.operation)) leaf_name_data.push_back(transmit_packets_per_second_switched.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> TrafficCollector::Afs::Af::Counters::Prefixes::Prefix::BaseCounterStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "count-history")
    {
        for(auto const & c : count_history)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<TrafficCollector::Afs::Af::Counters::Prefixes::Prefix::BaseCounterStatistics::CountHistory>();
        c->parent = this;
        count_history.push_back(std::move(c));
        children[segment_path] = count_history.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & TrafficCollector::Afs::Af::Counters::Prefixes::Prefix::BaseCounterStatistics::get_children()
{
    for (auto const & c : count_history)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void TrafficCollector::Afs::Af::Counters::Prefixes::Prefix::BaseCounterStatistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "transmit-bytes-per-second-switched")
    {
        transmit_bytes_per_second_switched = value;
    }
    if(value_path == "transmit-packets-per-second-switched")
    {
        transmit_packets_per_second_switched = value;
    }
}

TrafficCollector::Afs::Af::Counters::Prefixes::Prefix::BaseCounterStatistics::CountHistory::CountHistory()
    :
    event_end_timestamp{YType::uint64, "event-end-timestamp"},
    event_start_timestamp{YType::uint64, "event-start-timestamp"},
    is_valid{YType::boolean, "is-valid"},
    transmit_number_of_bytes_switched{YType::uint64, "transmit-number-of-bytes-switched"},
    transmit_number_of_packets_switched{YType::uint64, "transmit-number-of-packets-switched"}
{
    yang_name = "count-history"; yang_parent_name = "base-counter-statistics";
}

TrafficCollector::Afs::Af::Counters::Prefixes::Prefix::BaseCounterStatistics::CountHistory::~CountHistory()
{
}

bool TrafficCollector::Afs::Af::Counters::Prefixes::Prefix::BaseCounterStatistics::CountHistory::has_data() const
{
    return event_end_timestamp.is_set
	|| event_start_timestamp.is_set
	|| is_valid.is_set
	|| transmit_number_of_bytes_switched.is_set
	|| transmit_number_of_packets_switched.is_set;
}

bool TrafficCollector::Afs::Af::Counters::Prefixes::Prefix::BaseCounterStatistics::CountHistory::has_operation() const
{
    return is_set(operation)
	|| is_set(event_end_timestamp.operation)
	|| is_set(event_start_timestamp.operation)
	|| is_set(is_valid.operation)
	|| is_set(transmit_number_of_bytes_switched.operation)
	|| is_set(transmit_number_of_packets_switched.operation);
}

std::string TrafficCollector::Afs::Af::Counters::Prefixes::Prefix::BaseCounterStatistics::CountHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "count-history";

    return path_buffer.str();

}

EntityPath TrafficCollector::Afs::Af::Counters::Prefixes::Prefix::BaseCounterStatistics::CountHistory::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CountHistory' in Cisco_IOS_XR_infra_tc_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (event_end_timestamp.is_set || is_set(event_end_timestamp.operation)) leaf_name_data.push_back(event_end_timestamp.get_name_leafdata());
    if (event_start_timestamp.is_set || is_set(event_start_timestamp.operation)) leaf_name_data.push_back(event_start_timestamp.get_name_leafdata());
    if (is_valid.is_set || is_set(is_valid.operation)) leaf_name_data.push_back(is_valid.get_name_leafdata());
    if (transmit_number_of_bytes_switched.is_set || is_set(transmit_number_of_bytes_switched.operation)) leaf_name_data.push_back(transmit_number_of_bytes_switched.get_name_leafdata());
    if (transmit_number_of_packets_switched.is_set || is_set(transmit_number_of_packets_switched.operation)) leaf_name_data.push_back(transmit_number_of_packets_switched.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> TrafficCollector::Afs::Af::Counters::Prefixes::Prefix::BaseCounterStatistics::CountHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & TrafficCollector::Afs::Af::Counters::Prefixes::Prefix::BaseCounterStatistics::CountHistory::get_children()
{
    return children;
}

void TrafficCollector::Afs::Af::Counters::Prefixes::Prefix::BaseCounterStatistics::CountHistory::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "event-end-timestamp")
    {
        event_end_timestamp = value;
    }
    if(value_path == "event-start-timestamp")
    {
        event_start_timestamp = value;
    }
    if(value_path == "is-valid")
    {
        is_valid = value;
    }
    if(value_path == "transmit-number-of-bytes-switched")
    {
        transmit_number_of_bytes_switched = value;
    }
    if(value_path == "transmit-number-of-packets-switched")
    {
        transmit_number_of_packets_switched = value;
    }
}

TrafficCollector::Afs::Af::Counters::Prefixes::Prefix::TrafficMatrixCounterStatistics::TrafficMatrixCounterStatistics()
    :
    transmit_bytes_per_second_switched{YType::uint64, "transmit-bytes-per-second-switched"},
    transmit_packets_per_second_switched{YType::uint64, "transmit-packets-per-second-switched"}
{
    yang_name = "traffic-matrix-counter-statistics"; yang_parent_name = "prefix";
}

TrafficCollector::Afs::Af::Counters::Prefixes::Prefix::TrafficMatrixCounterStatistics::~TrafficMatrixCounterStatistics()
{
}

bool TrafficCollector::Afs::Af::Counters::Prefixes::Prefix::TrafficMatrixCounterStatistics::has_data() const
{
    for (std::size_t index=0; index<count_history.size(); index++)
    {
        if(count_history[index]->has_data())
            return true;
    }
    return transmit_bytes_per_second_switched.is_set
	|| transmit_packets_per_second_switched.is_set;
}

bool TrafficCollector::Afs::Af::Counters::Prefixes::Prefix::TrafficMatrixCounterStatistics::has_operation() const
{
    for (std::size_t index=0; index<count_history.size(); index++)
    {
        if(count_history[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(transmit_bytes_per_second_switched.operation)
	|| is_set(transmit_packets_per_second_switched.operation);
}

std::string TrafficCollector::Afs::Af::Counters::Prefixes::Prefix::TrafficMatrixCounterStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traffic-matrix-counter-statistics";

    return path_buffer.str();

}

EntityPath TrafficCollector::Afs::Af::Counters::Prefixes::Prefix::TrafficMatrixCounterStatistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TrafficMatrixCounterStatistics' in Cisco_IOS_XR_infra_tc_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (transmit_bytes_per_second_switched.is_set || is_set(transmit_bytes_per_second_switched.operation)) leaf_name_data.push_back(transmit_bytes_per_second_switched.get_name_leafdata());
    if (transmit_packets_per_second_switched.is_set || is_set(transmit_packets_per_second_switched.operation)) leaf_name_data.push_back(transmit_packets_per_second_switched.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> TrafficCollector::Afs::Af::Counters::Prefixes::Prefix::TrafficMatrixCounterStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "count-history")
    {
        for(auto const & c : count_history)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<TrafficCollector::Afs::Af::Counters::Prefixes::Prefix::TrafficMatrixCounterStatistics::CountHistory>();
        c->parent = this;
        count_history.push_back(std::move(c));
        children[segment_path] = count_history.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & TrafficCollector::Afs::Af::Counters::Prefixes::Prefix::TrafficMatrixCounterStatistics::get_children()
{
    for (auto const & c : count_history)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void TrafficCollector::Afs::Af::Counters::Prefixes::Prefix::TrafficMatrixCounterStatistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "transmit-bytes-per-second-switched")
    {
        transmit_bytes_per_second_switched = value;
    }
    if(value_path == "transmit-packets-per-second-switched")
    {
        transmit_packets_per_second_switched = value;
    }
}

TrafficCollector::Afs::Af::Counters::Prefixes::Prefix::TrafficMatrixCounterStatistics::CountHistory::CountHistory()
    :
    event_end_timestamp{YType::uint64, "event-end-timestamp"},
    event_start_timestamp{YType::uint64, "event-start-timestamp"},
    is_valid{YType::boolean, "is-valid"},
    transmit_number_of_bytes_switched{YType::uint64, "transmit-number-of-bytes-switched"},
    transmit_number_of_packets_switched{YType::uint64, "transmit-number-of-packets-switched"}
{
    yang_name = "count-history"; yang_parent_name = "traffic-matrix-counter-statistics";
}

TrafficCollector::Afs::Af::Counters::Prefixes::Prefix::TrafficMatrixCounterStatistics::CountHistory::~CountHistory()
{
}

bool TrafficCollector::Afs::Af::Counters::Prefixes::Prefix::TrafficMatrixCounterStatistics::CountHistory::has_data() const
{
    return event_end_timestamp.is_set
	|| event_start_timestamp.is_set
	|| is_valid.is_set
	|| transmit_number_of_bytes_switched.is_set
	|| transmit_number_of_packets_switched.is_set;
}

bool TrafficCollector::Afs::Af::Counters::Prefixes::Prefix::TrafficMatrixCounterStatistics::CountHistory::has_operation() const
{
    return is_set(operation)
	|| is_set(event_end_timestamp.operation)
	|| is_set(event_start_timestamp.operation)
	|| is_set(is_valid.operation)
	|| is_set(transmit_number_of_bytes_switched.operation)
	|| is_set(transmit_number_of_packets_switched.operation);
}

std::string TrafficCollector::Afs::Af::Counters::Prefixes::Prefix::TrafficMatrixCounterStatistics::CountHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "count-history";

    return path_buffer.str();

}

EntityPath TrafficCollector::Afs::Af::Counters::Prefixes::Prefix::TrafficMatrixCounterStatistics::CountHistory::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CountHistory' in Cisco_IOS_XR_infra_tc_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (event_end_timestamp.is_set || is_set(event_end_timestamp.operation)) leaf_name_data.push_back(event_end_timestamp.get_name_leafdata());
    if (event_start_timestamp.is_set || is_set(event_start_timestamp.operation)) leaf_name_data.push_back(event_start_timestamp.get_name_leafdata());
    if (is_valid.is_set || is_set(is_valid.operation)) leaf_name_data.push_back(is_valid.get_name_leafdata());
    if (transmit_number_of_bytes_switched.is_set || is_set(transmit_number_of_bytes_switched.operation)) leaf_name_data.push_back(transmit_number_of_bytes_switched.get_name_leafdata());
    if (transmit_number_of_packets_switched.is_set || is_set(transmit_number_of_packets_switched.operation)) leaf_name_data.push_back(transmit_number_of_packets_switched.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> TrafficCollector::Afs::Af::Counters::Prefixes::Prefix::TrafficMatrixCounterStatistics::CountHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & TrafficCollector::Afs::Af::Counters::Prefixes::Prefix::TrafficMatrixCounterStatistics::CountHistory::get_children()
{
    return children;
}

void TrafficCollector::Afs::Af::Counters::Prefixes::Prefix::TrafficMatrixCounterStatistics::CountHistory::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "event-end-timestamp")
    {
        event_end_timestamp = value;
    }
    if(value_path == "event-start-timestamp")
    {
        event_start_timestamp = value;
    }
    if(value_path == "is-valid")
    {
        is_valid = value;
    }
    if(value_path == "transmit-number-of-bytes-switched")
    {
        transmit_number_of_bytes_switched = value;
    }
    if(value_path == "transmit-number-of-packets-switched")
    {
        transmit_number_of_packets_switched = value;
    }
}

TrafficCollector::Afs::Af::Counters::Tunnels::Tunnels()
{
    yang_name = "tunnels"; yang_parent_name = "counters";
}

TrafficCollector::Afs::Af::Counters::Tunnels::~Tunnels()
{
}

bool TrafficCollector::Afs::Af::Counters::Tunnels::has_data() const
{
    for (std::size_t index=0; index<tunnel.size(); index++)
    {
        if(tunnel[index]->has_data())
            return true;
    }
    return false;
}

bool TrafficCollector::Afs::Af::Counters::Tunnels::has_operation() const
{
    for (std::size_t index=0; index<tunnel.size(); index++)
    {
        if(tunnel[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string TrafficCollector::Afs::Af::Counters::Tunnels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnels";

    return path_buffer.str();

}

EntityPath TrafficCollector::Afs::Af::Counters::Tunnels::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Tunnels' in Cisco_IOS_XR_infra_tc_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> TrafficCollector::Afs::Af::Counters::Tunnels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "tunnel")
    {
        for(auto const & c : tunnel)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<TrafficCollector::Afs::Af::Counters::Tunnels::Tunnel>();
        c->parent = this;
        tunnel.push_back(std::move(c));
        children[segment_path] = tunnel.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & TrafficCollector::Afs::Af::Counters::Tunnels::get_children()
{
    for (auto const & c : tunnel)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void TrafficCollector::Afs::Af::Counters::Tunnels::set_value(const std::string & value_path, std::string value)
{
}

TrafficCollector::Afs::Af::Counters::Tunnels::Tunnel::Tunnel()
    :
    interface_name{YType::str, "interface-name"},
    interface_handle{YType::uint32, "interface-handle"},
    interface_name_xr{YType::str, "interface-name-xr"},
    is_active{YType::boolean, "is-active"},
    vrfid{YType::uint32, "vrfid"}
    	,
    base_counter_statistics(std::make_shared<TrafficCollector::Afs::Af::Counters::Tunnels::Tunnel::BaseCounterStatistics>())
{
    base_counter_statistics->parent = this;
    children["base-counter-statistics"] = base_counter_statistics;

    yang_name = "tunnel"; yang_parent_name = "tunnels";
}

TrafficCollector::Afs::Af::Counters::Tunnels::Tunnel::~Tunnel()
{
}

bool TrafficCollector::Afs::Af::Counters::Tunnels::Tunnel::has_data() const
{
    return interface_name.is_set
	|| interface_handle.is_set
	|| interface_name_xr.is_set
	|| is_active.is_set
	|| vrfid.is_set
	|| (base_counter_statistics !=  nullptr && base_counter_statistics->has_data());
}

bool TrafficCollector::Afs::Af::Counters::Tunnels::Tunnel::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(interface_handle.operation)
	|| is_set(interface_name_xr.operation)
	|| is_set(is_active.operation)
	|| is_set(vrfid.operation)
	|| (base_counter_statistics !=  nullptr && base_counter_statistics->has_operation());
}

std::string TrafficCollector::Afs::Af::Counters::Tunnels::Tunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath TrafficCollector::Afs::Af::Counters::Tunnels::Tunnel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Tunnel' in Cisco_IOS_XR_infra_tc_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (interface_handle.is_set || is_set(interface_handle.operation)) leaf_name_data.push_back(interface_handle.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.operation)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (is_active.is_set || is_set(is_active.operation)) leaf_name_data.push_back(is_active.get_name_leafdata());
    if (vrfid.is_set || is_set(vrfid.operation)) leaf_name_data.push_back(vrfid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> TrafficCollector::Afs::Af::Counters::Tunnels::Tunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "base-counter-statistics")
    {
        if(base_counter_statistics != nullptr)
        {
            children["base-counter-statistics"] = base_counter_statistics;
        }
        else
        {
            base_counter_statistics = std::make_shared<TrafficCollector::Afs::Af::Counters::Tunnels::Tunnel::BaseCounterStatistics>();
            base_counter_statistics->parent = this;
            children["base-counter-statistics"] = base_counter_statistics;
        }
        return children.at("base-counter-statistics");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & TrafficCollector::Afs::Af::Counters::Tunnels::Tunnel::get_children()
{
    if(children.find("base-counter-statistics") == children.end())
    {
        if(base_counter_statistics != nullptr)
        {
            children["base-counter-statistics"] = base_counter_statistics;
        }
    }

    return children;
}

void TrafficCollector::Afs::Af::Counters::Tunnels::Tunnel::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "interface-handle")
    {
        interface_handle = value;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
    }
    if(value_path == "is-active")
    {
        is_active = value;
    }
    if(value_path == "vrfid")
    {
        vrfid = value;
    }
}

TrafficCollector::Afs::Af::Counters::Tunnels::Tunnel::BaseCounterStatistics::BaseCounterStatistics()
    :
    transmit_bytes_per_second_switched{YType::uint64, "transmit-bytes-per-second-switched"},
    transmit_packets_per_second_switched{YType::uint64, "transmit-packets-per-second-switched"}
{
    yang_name = "base-counter-statistics"; yang_parent_name = "tunnel";
}

TrafficCollector::Afs::Af::Counters::Tunnels::Tunnel::BaseCounterStatistics::~BaseCounterStatistics()
{
}

bool TrafficCollector::Afs::Af::Counters::Tunnels::Tunnel::BaseCounterStatistics::has_data() const
{
    for (std::size_t index=0; index<count_history.size(); index++)
    {
        if(count_history[index]->has_data())
            return true;
    }
    return transmit_bytes_per_second_switched.is_set
	|| transmit_packets_per_second_switched.is_set;
}

bool TrafficCollector::Afs::Af::Counters::Tunnels::Tunnel::BaseCounterStatistics::has_operation() const
{
    for (std::size_t index=0; index<count_history.size(); index++)
    {
        if(count_history[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(transmit_bytes_per_second_switched.operation)
	|| is_set(transmit_packets_per_second_switched.operation);
}

std::string TrafficCollector::Afs::Af::Counters::Tunnels::Tunnel::BaseCounterStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base-counter-statistics";

    return path_buffer.str();

}

EntityPath TrafficCollector::Afs::Af::Counters::Tunnels::Tunnel::BaseCounterStatistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BaseCounterStatistics' in Cisco_IOS_XR_infra_tc_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (transmit_bytes_per_second_switched.is_set || is_set(transmit_bytes_per_second_switched.operation)) leaf_name_data.push_back(transmit_bytes_per_second_switched.get_name_leafdata());
    if (transmit_packets_per_second_switched.is_set || is_set(transmit_packets_per_second_switched.operation)) leaf_name_data.push_back(transmit_packets_per_second_switched.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> TrafficCollector::Afs::Af::Counters::Tunnels::Tunnel::BaseCounterStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "count-history")
    {
        for(auto const & c : count_history)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<TrafficCollector::Afs::Af::Counters::Tunnels::Tunnel::BaseCounterStatistics::CountHistory>();
        c->parent = this;
        count_history.push_back(std::move(c));
        children[segment_path] = count_history.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & TrafficCollector::Afs::Af::Counters::Tunnels::Tunnel::BaseCounterStatistics::get_children()
{
    for (auto const & c : count_history)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void TrafficCollector::Afs::Af::Counters::Tunnels::Tunnel::BaseCounterStatistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "transmit-bytes-per-second-switched")
    {
        transmit_bytes_per_second_switched = value;
    }
    if(value_path == "transmit-packets-per-second-switched")
    {
        transmit_packets_per_second_switched = value;
    }
}

TrafficCollector::Afs::Af::Counters::Tunnels::Tunnel::BaseCounterStatistics::CountHistory::CountHistory()
    :
    event_end_timestamp{YType::uint64, "event-end-timestamp"},
    event_start_timestamp{YType::uint64, "event-start-timestamp"},
    is_valid{YType::boolean, "is-valid"},
    transmit_number_of_bytes_switched{YType::uint64, "transmit-number-of-bytes-switched"},
    transmit_number_of_packets_switched{YType::uint64, "transmit-number-of-packets-switched"}
{
    yang_name = "count-history"; yang_parent_name = "base-counter-statistics";
}

TrafficCollector::Afs::Af::Counters::Tunnels::Tunnel::BaseCounterStatistics::CountHistory::~CountHistory()
{
}

bool TrafficCollector::Afs::Af::Counters::Tunnels::Tunnel::BaseCounterStatistics::CountHistory::has_data() const
{
    return event_end_timestamp.is_set
	|| event_start_timestamp.is_set
	|| is_valid.is_set
	|| transmit_number_of_bytes_switched.is_set
	|| transmit_number_of_packets_switched.is_set;
}

bool TrafficCollector::Afs::Af::Counters::Tunnels::Tunnel::BaseCounterStatistics::CountHistory::has_operation() const
{
    return is_set(operation)
	|| is_set(event_end_timestamp.operation)
	|| is_set(event_start_timestamp.operation)
	|| is_set(is_valid.operation)
	|| is_set(transmit_number_of_bytes_switched.operation)
	|| is_set(transmit_number_of_packets_switched.operation);
}

std::string TrafficCollector::Afs::Af::Counters::Tunnels::Tunnel::BaseCounterStatistics::CountHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "count-history";

    return path_buffer.str();

}

EntityPath TrafficCollector::Afs::Af::Counters::Tunnels::Tunnel::BaseCounterStatistics::CountHistory::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CountHistory' in Cisco_IOS_XR_infra_tc_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (event_end_timestamp.is_set || is_set(event_end_timestamp.operation)) leaf_name_data.push_back(event_end_timestamp.get_name_leafdata());
    if (event_start_timestamp.is_set || is_set(event_start_timestamp.operation)) leaf_name_data.push_back(event_start_timestamp.get_name_leafdata());
    if (is_valid.is_set || is_set(is_valid.operation)) leaf_name_data.push_back(is_valid.get_name_leafdata());
    if (transmit_number_of_bytes_switched.is_set || is_set(transmit_number_of_bytes_switched.operation)) leaf_name_data.push_back(transmit_number_of_bytes_switched.get_name_leafdata());
    if (transmit_number_of_packets_switched.is_set || is_set(transmit_number_of_packets_switched.operation)) leaf_name_data.push_back(transmit_number_of_packets_switched.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> TrafficCollector::Afs::Af::Counters::Tunnels::Tunnel::BaseCounterStatistics::CountHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & TrafficCollector::Afs::Af::Counters::Tunnels::Tunnel::BaseCounterStatistics::CountHistory::get_children()
{
    return children;
}

void TrafficCollector::Afs::Af::Counters::Tunnels::Tunnel::BaseCounterStatistics::CountHistory::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "event-end-timestamp")
    {
        event_end_timestamp = value;
    }
    if(value_path == "event-start-timestamp")
    {
        event_start_timestamp = value;
    }
    if(value_path == "is-valid")
    {
        is_valid = value;
    }
    if(value_path == "transmit-number-of-bytes-switched")
    {
        transmit_number_of_bytes_switched = value;
    }
    if(value_path == "transmit-number-of-packets-switched")
    {
        transmit_number_of_packets_switched = value;
    }
}

const Enum::YLeaf TcOperAfNameEnum::ipv4 {0, "ipv4"};
const Enum::YLeaf TcOperAfNameEnum::ipv6 {1, "ipv6"};


}
}

