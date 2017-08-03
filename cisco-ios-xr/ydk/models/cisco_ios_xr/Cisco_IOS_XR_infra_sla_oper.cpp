
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_infra_sla_oper.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_infra_sla_oper {

Sla::Sla()
    :
    protocols(std::make_shared<Sla::Protocols>())
{
    protocols->parent = this;

    yang_name = "sla"; yang_parent_name = "Cisco-IOS-XR-infra-sla-oper";
}

Sla::~Sla()
{
}

bool Sla::has_data() const
{
    return (protocols !=  nullptr && protocols->has_data());
}

bool Sla::has_operation() const
{
    return is_set(yfilter)
	|| (protocols !=  nullptr && protocols->has_operation());
}

std::string Sla::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-sla-oper:sla";

    return path_buffer.str();

}

const EntityPath Sla::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Sla::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protocols")
    {
        if(protocols == nullptr)
        {
            protocols = std::make_shared<Sla::Protocols>();
        }
        return protocols;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Sla::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(protocols != nullptr)
    {
        children["protocols"] = protocols;
    }

    return children;
}

void Sla::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Sla::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> Sla::clone_ptr() const
{
    return std::make_shared<Sla>();
}

std::string Sla::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Sla::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Sla::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Sla::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Sla::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocols")
        return true;
    return false;
}

Sla::Protocols::Protocols()
    :
    ethernet(std::make_shared<Sla::Protocols::Ethernet>())
{
    ethernet->parent = this;

    yang_name = "protocols"; yang_parent_name = "sla";
}

Sla::Protocols::~Protocols()
{
}

bool Sla::Protocols::has_data() const
{
    return (ethernet !=  nullptr && ethernet->has_data());
}

bool Sla::Protocols::has_operation() const
{
    return is_set(yfilter)
	|| (ethernet !=  nullptr && ethernet->has_operation());
}

std::string Sla::Protocols::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocols";

    return path_buffer.str();

}

const EntityPath Sla::Protocols::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-sla-oper:sla/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Sla::Protocols::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ethernet")
    {
        if(ethernet == nullptr)
        {
            ethernet = std::make_shared<Sla::Protocols::Ethernet>();
        }
        return ethernet;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Sla::Protocols::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ethernet != nullptr)
    {
        children["ethernet"] = ethernet;
    }

    return children;
}

void Sla::Protocols::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Sla::Protocols::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Sla::Protocols::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ethernet")
        return true;
    return false;
}

Sla::Protocols::Ethernet::Ethernet()
    :
    config_errors(std::make_shared<Sla::Protocols::Ethernet::ConfigErrors>())
	,on_demand_operations(std::make_shared<Sla::Protocols::Ethernet::OnDemandOperations>())
	,operations(std::make_shared<Sla::Protocols::Ethernet::Operations>())
	,statistics_currents(std::make_shared<Sla::Protocols::Ethernet::StatisticsCurrents>())
	,statistics_historicals(std::make_shared<Sla::Protocols::Ethernet::StatisticsHistoricals>())
	,statistics_on_demand_currents(std::make_shared<Sla::Protocols::Ethernet::StatisticsOnDemandCurrents>())
	,statistics_on_demand_historicals(std::make_shared<Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals>())
{
    config_errors->parent = this;

    on_demand_operations->parent = this;

    operations->parent = this;

    statistics_currents->parent = this;

    statistics_historicals->parent = this;

    statistics_on_demand_currents->parent = this;

    statistics_on_demand_historicals->parent = this;

    yang_name = "ethernet"; yang_parent_name = "protocols";
}

Sla::Protocols::Ethernet::~Ethernet()
{
}

bool Sla::Protocols::Ethernet::has_data() const
{
    return (config_errors !=  nullptr && config_errors->has_data())
	|| (on_demand_operations !=  nullptr && on_demand_operations->has_data())
	|| (operations !=  nullptr && operations->has_data())
	|| (statistics_currents !=  nullptr && statistics_currents->has_data())
	|| (statistics_historicals !=  nullptr && statistics_historicals->has_data())
	|| (statistics_on_demand_currents !=  nullptr && statistics_on_demand_currents->has_data())
	|| (statistics_on_demand_historicals !=  nullptr && statistics_on_demand_historicals->has_data());
}

bool Sla::Protocols::Ethernet::has_operation() const
{
    return is_set(yfilter)
	|| (config_errors !=  nullptr && config_errors->has_operation())
	|| (on_demand_operations !=  nullptr && on_demand_operations->has_operation())
	|| (operations !=  nullptr && operations->has_operation())
	|| (statistics_currents !=  nullptr && statistics_currents->has_operation())
	|| (statistics_historicals !=  nullptr && statistics_historicals->has_operation())
	|| (statistics_on_demand_currents !=  nullptr && statistics_on_demand_currents->has_operation())
	|| (statistics_on_demand_historicals !=  nullptr && statistics_on_demand_historicals->has_operation());
}

std::string Sla::Protocols::Ethernet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ethernet-cfm-oper:ethernet";

    return path_buffer.str();

}

const EntityPath Sla::Protocols::Ethernet::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-sla-oper:sla/protocols/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Sla::Protocols::Ethernet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config-errors")
    {
        if(config_errors == nullptr)
        {
            config_errors = std::make_shared<Sla::Protocols::Ethernet::ConfigErrors>();
        }
        return config_errors;
    }

    if(child_yang_name == "on-demand-operations")
    {
        if(on_demand_operations == nullptr)
        {
            on_demand_operations = std::make_shared<Sla::Protocols::Ethernet::OnDemandOperations>();
        }
        return on_demand_operations;
    }

    if(child_yang_name == "operations")
    {
        if(operations == nullptr)
        {
            operations = std::make_shared<Sla::Protocols::Ethernet::Operations>();
        }
        return operations;
    }

    if(child_yang_name == "statistics-currents")
    {
        if(statistics_currents == nullptr)
        {
            statistics_currents = std::make_shared<Sla::Protocols::Ethernet::StatisticsCurrents>();
        }
        return statistics_currents;
    }

    if(child_yang_name == "statistics-historicals")
    {
        if(statistics_historicals == nullptr)
        {
            statistics_historicals = std::make_shared<Sla::Protocols::Ethernet::StatisticsHistoricals>();
        }
        return statistics_historicals;
    }

    if(child_yang_name == "statistics-on-demand-currents")
    {
        if(statistics_on_demand_currents == nullptr)
        {
            statistics_on_demand_currents = std::make_shared<Sla::Protocols::Ethernet::StatisticsOnDemandCurrents>();
        }
        return statistics_on_demand_currents;
    }

    if(child_yang_name == "statistics-on-demand-historicals")
    {
        if(statistics_on_demand_historicals == nullptr)
        {
            statistics_on_demand_historicals = std::make_shared<Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals>();
        }
        return statistics_on_demand_historicals;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Sla::Protocols::Ethernet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(config_errors != nullptr)
    {
        children["config-errors"] = config_errors;
    }

    if(on_demand_operations != nullptr)
    {
        children["on-demand-operations"] = on_demand_operations;
    }

    if(operations != nullptr)
    {
        children["operations"] = operations;
    }

    if(statistics_currents != nullptr)
    {
        children["statistics-currents"] = statistics_currents;
    }

    if(statistics_historicals != nullptr)
    {
        children["statistics-historicals"] = statistics_historicals;
    }

    if(statistics_on_demand_currents != nullptr)
    {
        children["statistics-on-demand-currents"] = statistics_on_demand_currents;
    }

    if(statistics_on_demand_historicals != nullptr)
    {
        children["statistics-on-demand-historicals"] = statistics_on_demand_historicals;
    }

    return children;
}

void Sla::Protocols::Ethernet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Sla::Protocols::Ethernet::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Sla::Protocols::Ethernet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config-errors" || name == "on-demand-operations" || name == "operations" || name == "statistics-currents" || name == "statistics-historicals" || name == "statistics-on-demand-currents" || name == "statistics-on-demand-historicals")
        return true;
    return false;
}

Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrents()
{
    yang_name = "statistics-on-demand-currents"; yang_parent_name = "ethernet";
}

Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::~StatisticsOnDemandCurrents()
{
}

bool Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::has_data() const
{
    for (std::size_t index=0; index<statistics_on_demand_current.size(); index++)
    {
        if(statistics_on_demand_current[index]->has_data())
            return true;
    }
    return false;
}

bool Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::has_operation() const
{
    for (std::size_t index=0; index<statistics_on_demand_current.size(); index++)
    {
        if(statistics_on_demand_current[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics-on-demand-currents";

    return path_buffer.str();

}

const EntityPath Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-sla-oper:sla/protocols/Cisco-IOS-XR-ethernet-cfm-oper:ethernet/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "statistics-on-demand-current")
    {
        for(auto const & c : statistics_on_demand_current)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent>();
        c->parent = this;
        statistics_on_demand_current.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : statistics_on_demand_current)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "statistics-on-demand-current")
        return true;
    return false;
}

Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::StatisticsOnDemandCurrent()
    :
    display_long{YType::str, "display-long"},
    display_short{YType::str, "display-short"},
    domain_name{YType::str, "domain-name"},
    flr_calculation_interval{YType::uint32, "flr-calculation-interval"},
    interface_name{YType::str, "interface-name"},
    mac_address{YType::str, "mac-address"},
    mep_id{YType::uint32, "mep-id"},
    operation_id{YType::uint32, "operation-id"},
    probe_type{YType::str, "probe-type"}
    	,
    operation_schedule(std::make_shared<Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationSchedule>())
	,specific_options(std::make_shared<Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::SpecificOptions>())
{
    operation_schedule->parent = this;

    specific_options->parent = this;

    yang_name = "statistics-on-demand-current"; yang_parent_name = "statistics-on-demand-currents";
}

Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::~StatisticsOnDemandCurrent()
{
}

bool Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::has_data() const
{
    for (std::size_t index=0; index<operation_metric.size(); index++)
    {
        if(operation_metric[index]->has_data())
            return true;
    }
    return display_long.is_set
	|| display_short.is_set
	|| domain_name.is_set
	|| flr_calculation_interval.is_set
	|| interface_name.is_set
	|| mac_address.is_set
	|| mep_id.is_set
	|| operation_id.is_set
	|| probe_type.is_set
	|| (operation_schedule !=  nullptr && operation_schedule->has_data())
	|| (specific_options !=  nullptr && specific_options->has_data());
}

bool Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::has_operation() const
{
    for (std::size_t index=0; index<operation_metric.size(); index++)
    {
        if(operation_metric[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(display_long.yfilter)
	|| ydk::is_set(display_short.yfilter)
	|| ydk::is_set(domain_name.yfilter)
	|| ydk::is_set(flr_calculation_interval.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(mep_id.yfilter)
	|| ydk::is_set(operation_id.yfilter)
	|| ydk::is_set(probe_type.yfilter)
	|| (operation_schedule !=  nullptr && operation_schedule->has_operation())
	|| (specific_options !=  nullptr && specific_options->has_operation());
}

std::string Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics-on-demand-current";

    return path_buffer.str();

}

const EntityPath Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-sla-oper:sla/protocols/Cisco-IOS-XR-ethernet-cfm-oper:ethernet/statistics-on-demand-currents/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (display_long.is_set || is_set(display_long.yfilter)) leaf_name_data.push_back(display_long.get_name_leafdata());
    if (display_short.is_set || is_set(display_short.yfilter)) leaf_name_data.push_back(display_short.get_name_leafdata());
    if (domain_name.is_set || is_set(domain_name.yfilter)) leaf_name_data.push_back(domain_name.get_name_leafdata());
    if (flr_calculation_interval.is_set || is_set(flr_calculation_interval.yfilter)) leaf_name_data.push_back(flr_calculation_interval.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (mep_id.is_set || is_set(mep_id.yfilter)) leaf_name_data.push_back(mep_id.get_name_leafdata());
    if (operation_id.is_set || is_set(operation_id.yfilter)) leaf_name_data.push_back(operation_id.get_name_leafdata());
    if (probe_type.is_set || is_set(probe_type.yfilter)) leaf_name_data.push_back(probe_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "operation-metric")
    {
        for(auto const & c : operation_metric)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationMetric>();
        c->parent = this;
        operation_metric.push_back(c);
        return c;
    }

    if(child_yang_name == "operation-schedule")
    {
        if(operation_schedule == nullptr)
        {
            operation_schedule = std::make_shared<Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationSchedule>();
        }
        return operation_schedule;
    }

    if(child_yang_name == "specific-options")
    {
        if(specific_options == nullptr)
        {
            specific_options = std::make_shared<Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::SpecificOptions>();
        }
        return specific_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : operation_metric)
    {
        children[c->get_segment_path()] = c;
    }

    if(operation_schedule != nullptr)
    {
        children["operation-schedule"] = operation_schedule;
    }

    if(specific_options != nullptr)
    {
        children["specific-options"] = specific_options;
    }

    return children;
}

void Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "display-long")
    {
        display_long = value;
        display_long.value_namespace = name_space;
        display_long.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "display-short")
    {
        display_short = value;
        display_short.value_namespace = name_space;
        display_short.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "domain-name")
    {
        domain_name = value;
        domain_name.value_namespace = name_space;
        domain_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flr-calculation-interval")
    {
        flr_calculation_interval = value;
        flr_calculation_interval.value_namespace = name_space;
        flr_calculation_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mep-id")
    {
        mep_id = value;
        mep_id.value_namespace = name_space;
        mep_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operation-id")
    {
        operation_id = value;
        operation_id.value_namespace = name_space;
        operation_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "probe-type")
    {
        probe_type = value;
        probe_type.value_namespace = name_space;
        probe_type.value_namespace_prefix = name_space_prefix;
    }
}

void Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "display-long")
    {
        display_long.yfilter = yfilter;
    }
    if(value_path == "display-short")
    {
        display_short.yfilter = yfilter;
    }
    if(value_path == "domain-name")
    {
        domain_name.yfilter = yfilter;
    }
    if(value_path == "flr-calculation-interval")
    {
        flr_calculation_interval.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "mep-id")
    {
        mep_id.yfilter = yfilter;
    }
    if(value_path == "operation-id")
    {
        operation_id.yfilter = yfilter;
    }
    if(value_path == "probe-type")
    {
        probe_type.yfilter = yfilter;
    }
}

bool Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "operation-metric" || name == "operation-schedule" || name == "specific-options" || name == "display-long" || name == "display-short" || name == "domain-name" || name == "flr-calculation-interval" || name == "interface-name" || name == "mac-address" || name == "mep-id" || name == "operation-id" || name == "probe-type")
        return true;
    return false;
}

Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::SpecificOptions::SpecificOptions()
    :
    oper_type{YType::enumeration, "oper-type"}
    	,
    configured_operation_options(std::make_shared<Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::SpecificOptions::ConfiguredOperationOptions>())
	,ondemand_operation_options(std::make_shared<Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::SpecificOptions::OndemandOperationOptions>())
{
    configured_operation_options->parent = this;

    ondemand_operation_options->parent = this;

    yang_name = "specific-options"; yang_parent_name = "statistics-on-demand-current";
}

Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::SpecificOptions::~SpecificOptions()
{
}

bool Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::SpecificOptions::has_data() const
{
    return oper_type.is_set
	|| (configured_operation_options !=  nullptr && configured_operation_options->has_data())
	|| (ondemand_operation_options !=  nullptr && ondemand_operation_options->has_data());
}

bool Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::SpecificOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(oper_type.yfilter)
	|| (configured_operation_options !=  nullptr && configured_operation_options->has_operation())
	|| (ondemand_operation_options !=  nullptr && ondemand_operation_options->has_operation());
}

std::string Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::SpecificOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "specific-options";

    return path_buffer.str();

}

const EntityPath Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::SpecificOptions::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-sla-oper:sla/protocols/Cisco-IOS-XR-ethernet-cfm-oper:ethernet/statistics-on-demand-currents/statistics-on-demand-current/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (oper_type.is_set || is_set(oper_type.yfilter)) leaf_name_data.push_back(oper_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::SpecificOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "configured-operation-options")
    {
        if(configured_operation_options == nullptr)
        {
            configured_operation_options = std::make_shared<Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::SpecificOptions::ConfiguredOperationOptions>();
        }
        return configured_operation_options;
    }

    if(child_yang_name == "ondemand-operation-options")
    {
        if(ondemand_operation_options == nullptr)
        {
            ondemand_operation_options = std::make_shared<Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::SpecificOptions::OndemandOperationOptions>();
        }
        return ondemand_operation_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::SpecificOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(configured_operation_options != nullptr)
    {
        children["configured-operation-options"] = configured_operation_options;
    }

    if(ondemand_operation_options != nullptr)
    {
        children["ondemand-operation-options"] = ondemand_operation_options;
    }

    return children;
}

void Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::SpecificOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "oper-type")
    {
        oper_type = value;
        oper_type.value_namespace = name_space;
        oper_type.value_namespace_prefix = name_space_prefix;
    }
}

void Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::SpecificOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "oper-type")
    {
        oper_type.yfilter = yfilter;
    }
}

bool Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::SpecificOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "configured-operation-options" || name == "ondemand-operation-options" || name == "oper-type")
        return true;
    return false;
}

Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::SpecificOptions::ConfiguredOperationOptions::ConfiguredOperationOptions()
    :
    profile_name{YType::str, "profile-name"}
{
    yang_name = "configured-operation-options"; yang_parent_name = "specific-options";
}

Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::SpecificOptions::ConfiguredOperationOptions::~ConfiguredOperationOptions()
{
}

bool Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::SpecificOptions::ConfiguredOperationOptions::has_data() const
{
    return profile_name.is_set;
}

bool Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::SpecificOptions::ConfiguredOperationOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(profile_name.yfilter);
}

std::string Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::SpecificOptions::ConfiguredOperationOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "configured-operation-options";

    return path_buffer.str();

}

const EntityPath Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::SpecificOptions::ConfiguredOperationOptions::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-sla-oper:sla/protocols/Cisco-IOS-XR-ethernet-cfm-oper:ethernet/statistics-on-demand-currents/statistics-on-demand-current/specific-options/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (profile_name.is_set || is_set(profile_name.yfilter)) leaf_name_data.push_back(profile_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::SpecificOptions::ConfiguredOperationOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::SpecificOptions::ConfiguredOperationOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::SpecificOptions::ConfiguredOperationOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "profile-name")
    {
        profile_name = value;
        profile_name.value_namespace = name_space;
        profile_name.value_namespace_prefix = name_space_prefix;
    }
}

void Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::SpecificOptions::ConfiguredOperationOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "profile-name")
    {
        profile_name.yfilter = yfilter;
    }
}

bool Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::SpecificOptions::ConfiguredOperationOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "profile-name")
        return true;
    return false;
}

Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::SpecificOptions::OndemandOperationOptions::OndemandOperationOptions()
    :
    ondemand_operation_id{YType::uint32, "ondemand-operation-id"},
    probe_count{YType::uint8, "probe-count"}
{
    yang_name = "ondemand-operation-options"; yang_parent_name = "specific-options";
}

Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::SpecificOptions::OndemandOperationOptions::~OndemandOperationOptions()
{
}

bool Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::SpecificOptions::OndemandOperationOptions::has_data() const
{
    return ondemand_operation_id.is_set
	|| probe_count.is_set;
}

bool Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::SpecificOptions::OndemandOperationOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ondemand_operation_id.yfilter)
	|| ydk::is_set(probe_count.yfilter);
}

std::string Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::SpecificOptions::OndemandOperationOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ondemand-operation-options";

    return path_buffer.str();

}

const EntityPath Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::SpecificOptions::OndemandOperationOptions::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-sla-oper:sla/protocols/Cisco-IOS-XR-ethernet-cfm-oper:ethernet/statistics-on-demand-currents/statistics-on-demand-current/specific-options/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ondemand_operation_id.is_set || is_set(ondemand_operation_id.yfilter)) leaf_name_data.push_back(ondemand_operation_id.get_name_leafdata());
    if (probe_count.is_set || is_set(probe_count.yfilter)) leaf_name_data.push_back(probe_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::SpecificOptions::OndemandOperationOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::SpecificOptions::OndemandOperationOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::SpecificOptions::OndemandOperationOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ondemand-operation-id")
    {
        ondemand_operation_id = value;
        ondemand_operation_id.value_namespace = name_space;
        ondemand_operation_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "probe-count")
    {
        probe_count = value;
        probe_count.value_namespace = name_space;
        probe_count.value_namespace_prefix = name_space_prefix;
    }
}

void Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::SpecificOptions::OndemandOperationOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ondemand-operation-id")
    {
        ondemand_operation_id.yfilter = yfilter;
    }
    if(value_path == "probe-count")
    {
        probe_count.yfilter = yfilter;
    }
}

bool Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::SpecificOptions::OndemandOperationOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ondemand-operation-id" || name == "probe-count")
        return true;
    return false;
}

Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationSchedule::OperationSchedule()
    :
    schedule_duration{YType::uint32, "schedule-duration"},
    schedule_interval{YType::uint32, "schedule-interval"},
    start_time{YType::uint32, "start-time"},
    start_time_configured{YType::boolean, "start-time-configured"}
{
    yang_name = "operation-schedule"; yang_parent_name = "statistics-on-demand-current";
}

Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationSchedule::~OperationSchedule()
{
}

bool Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationSchedule::has_data() const
{
    return schedule_duration.is_set
	|| schedule_interval.is_set
	|| start_time.is_set
	|| start_time_configured.is_set;
}

bool Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationSchedule::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(schedule_duration.yfilter)
	|| ydk::is_set(schedule_interval.yfilter)
	|| ydk::is_set(start_time.yfilter)
	|| ydk::is_set(start_time_configured.yfilter);
}

std::string Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationSchedule::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "operation-schedule";

    return path_buffer.str();

}

const EntityPath Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationSchedule::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-sla-oper:sla/protocols/Cisco-IOS-XR-ethernet-cfm-oper:ethernet/statistics-on-demand-currents/statistics-on-demand-current/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (schedule_duration.is_set || is_set(schedule_duration.yfilter)) leaf_name_data.push_back(schedule_duration.get_name_leafdata());
    if (schedule_interval.is_set || is_set(schedule_interval.yfilter)) leaf_name_data.push_back(schedule_interval.get_name_leafdata());
    if (start_time.is_set || is_set(start_time.yfilter)) leaf_name_data.push_back(start_time.get_name_leafdata());
    if (start_time_configured.is_set || is_set(start_time_configured.yfilter)) leaf_name_data.push_back(start_time_configured.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationSchedule::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationSchedule::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationSchedule::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "schedule-duration")
    {
        schedule_duration = value;
        schedule_duration.value_namespace = name_space;
        schedule_duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "schedule-interval")
    {
        schedule_interval = value;
        schedule_interval.value_namespace = name_space;
        schedule_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-time")
    {
        start_time = value;
        start_time.value_namespace = name_space;
        start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-time-configured")
    {
        start_time_configured = value;
        start_time_configured.value_namespace = name_space;
        start_time_configured.value_namespace_prefix = name_space_prefix;
    }
}

void Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationSchedule::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "schedule-duration")
    {
        schedule_duration.yfilter = yfilter;
    }
    if(value_path == "schedule-interval")
    {
        schedule_interval.yfilter = yfilter;
    }
    if(value_path == "start-time")
    {
        start_time.yfilter = yfilter;
    }
    if(value_path == "start-time-configured")
    {
        start_time_configured.yfilter = yfilter;
    }
}

bool Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationSchedule::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "schedule-duration" || name == "schedule-interval" || name == "start-time" || name == "start-time-configured")
        return true;
    return false;
}

Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationMetric::OperationMetric()
    :
    config(std::make_shared<Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationMetric::Config>())
{
    config->parent = this;

    yang_name = "operation-metric"; yang_parent_name = "statistics-on-demand-current";
}

Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationMetric::~OperationMetric()
{
}

bool Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationMetric::has_data() const
{
    for (std::size_t index=0; index<bucket.size(); index++)
    {
        if(bucket[index]->has_data())
            return true;
    }
    return (config !=  nullptr && config->has_data());
}

bool Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationMetric::has_operation() const
{
    for (std::size_t index=0; index<bucket.size(); index++)
    {
        if(bucket[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation());
}

std::string Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationMetric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "operation-metric";

    return path_buffer.str();

}

const EntityPath Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationMetric::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-sla-oper:sla/protocols/Cisco-IOS-XR-ethernet-cfm-oper:ethernet/statistics-on-demand-currents/statistics-on-demand-current/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationMetric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bucket")
    {
        for(auto const & c : bucket)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationMetric::Bucket>();
        c->parent = this;
        bucket.push_back(c);
        return c;
    }

    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationMetric::Config>();
        }
        return config;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationMetric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bucket)
    {
        children[c->get_segment_path()] = c;
    }

    if(config != nullptr)
    {
        children["config"] = config;
    }

    return children;
}

void Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationMetric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationMetric::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationMetric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bucket" || name == "config")
        return true;
    return false;
}

Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationMetric::Config::Config()
    :
    bins_count{YType::uint16, "bins-count"},
    bins_width{YType::uint16, "bins-width"},
    bucket_size{YType::uint8, "bucket-size"},
    bucket_size_unit{YType::enumeration, "bucket-size-unit"},
    buckets_archive{YType::uint32, "buckets-archive"},
    metric_type{YType::enumeration, "metric-type"}
{
    yang_name = "config"; yang_parent_name = "operation-metric";
}

Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationMetric::Config::~Config()
{
}

bool Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationMetric::Config::has_data() const
{
    return bins_count.is_set
	|| bins_width.is_set
	|| bucket_size.is_set
	|| bucket_size_unit.is_set
	|| buckets_archive.is_set
	|| metric_type.is_set;
}

bool Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationMetric::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bins_count.yfilter)
	|| ydk::is_set(bins_width.yfilter)
	|| ydk::is_set(bucket_size.yfilter)
	|| ydk::is_set(bucket_size_unit.yfilter)
	|| ydk::is_set(buckets_archive.yfilter)
	|| ydk::is_set(metric_type.yfilter);
}

std::string Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationMetric::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

const EntityPath Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationMetric::Config::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-sla-oper:sla/protocols/Cisco-IOS-XR-ethernet-cfm-oper:ethernet/statistics-on-demand-currents/statistics-on-demand-current/operation-metric/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bins_count.is_set || is_set(bins_count.yfilter)) leaf_name_data.push_back(bins_count.get_name_leafdata());
    if (bins_width.is_set || is_set(bins_width.yfilter)) leaf_name_data.push_back(bins_width.get_name_leafdata());
    if (bucket_size.is_set || is_set(bucket_size.yfilter)) leaf_name_data.push_back(bucket_size.get_name_leafdata());
    if (bucket_size_unit.is_set || is_set(bucket_size_unit.yfilter)) leaf_name_data.push_back(bucket_size_unit.get_name_leafdata());
    if (buckets_archive.is_set || is_set(buckets_archive.yfilter)) leaf_name_data.push_back(buckets_archive.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationMetric::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationMetric::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationMetric::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bins-count")
    {
        bins_count = value;
        bins_count.value_namespace = name_space;
        bins_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bins-width")
    {
        bins_width = value;
        bins_width.value_namespace = name_space;
        bins_width.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bucket-size")
    {
        bucket_size = value;
        bucket_size.value_namespace = name_space;
        bucket_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bucket-size-unit")
    {
        bucket_size_unit = value;
        bucket_size_unit.value_namespace = name_space;
        bucket_size_unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "buckets-archive")
    {
        buckets_archive = value;
        buckets_archive.value_namespace = name_space;
        buckets_archive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
}

void Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationMetric::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bins-count")
    {
        bins_count.yfilter = yfilter;
    }
    if(value_path == "bins-width")
    {
        bins_width.yfilter = yfilter;
    }
    if(value_path == "bucket-size")
    {
        bucket_size.yfilter = yfilter;
    }
    if(value_path == "bucket-size-unit")
    {
        bucket_size_unit.yfilter = yfilter;
    }
    if(value_path == "buckets-archive")
    {
        buckets_archive.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
}

bool Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationMetric::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bins-count" || name == "bins-width" || name == "bucket-size" || name == "bucket-size-unit" || name == "buckets-archive" || name == "metric-type")
        return true;
    return false;
}

Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationMetric::Bucket::Bucket()
    :
    average{YType::int32, "average"},
    corrupt{YType::uint32, "corrupt"},
    data_lost_count{YType::uint32, "data-lost-count"},
    data_sent_count{YType::uint32, "data-sent-count"},
    duplicates{YType::uint32, "duplicates"},
    duration{YType::uint32, "duration"},
    lost{YType::uint32, "lost"},
    maximum{YType::int32, "maximum"},
    minimum{YType::int32, "minimum"},
    out_of_order{YType::uint32, "out-of-order"},
    overall_flr{YType::int32, "overall-flr"},
    premature_reason{YType::uint32, "premature-reason"},
    premature_reason_string{YType::str, "premature-reason-string"},
    result_count{YType::uint32, "result-count"},
    sent{YType::uint32, "sent"},
    standard_deviation{YType::int32, "standard-deviation"},
    start_at{YType::uint32, "start-at"},
    suspect_cleared_mid_bucket{YType::boolean, "suspect-cleared-mid-bucket"},
    suspect_clock_drift{YType::boolean, "suspect-clock-drift"},
    suspect_flr_low_packet_count{YType::boolean, "suspect-flr-low-packet-count"},
    suspect_management_latency{YType::boolean, "suspect-management-latency"},
    suspect_memory_allocation_failed{YType::boolean, "suspect-memory-allocation-failed"},
    suspect_misordering{YType::boolean, "suspect-misordering"},
    suspect_multiple_buckets{YType::boolean, "suspect-multiple-buckets"},
    suspect_premature_end{YType::boolean, "suspect-premature-end"},
    suspect_probe_restarted{YType::boolean, "suspect-probe-restarted"},
    suspect_schedule_latency{YType::boolean, "suspect-schedule-latency"},
    suspect_send_fail{YType::boolean, "suspect-send-fail"},
    suspect_start_mid_bucket{YType::boolean, "suspect-start-mid-bucket"},
    time_of_maximum{YType::uint32, "time-of-maximum"},
    time_of_minimum{YType::uint32, "time-of-minimum"}
    	,
    contents(std::make_shared<Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationMetric::Bucket::Contents>())
{
    contents->parent = this;

    yang_name = "bucket"; yang_parent_name = "operation-metric";
}

Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationMetric::Bucket::~Bucket()
{
}

bool Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationMetric::Bucket::has_data() const
{
    return average.is_set
	|| corrupt.is_set
	|| data_lost_count.is_set
	|| data_sent_count.is_set
	|| duplicates.is_set
	|| duration.is_set
	|| lost.is_set
	|| maximum.is_set
	|| minimum.is_set
	|| out_of_order.is_set
	|| overall_flr.is_set
	|| premature_reason.is_set
	|| premature_reason_string.is_set
	|| result_count.is_set
	|| sent.is_set
	|| standard_deviation.is_set
	|| start_at.is_set
	|| suspect_cleared_mid_bucket.is_set
	|| suspect_clock_drift.is_set
	|| suspect_flr_low_packet_count.is_set
	|| suspect_management_latency.is_set
	|| suspect_memory_allocation_failed.is_set
	|| suspect_misordering.is_set
	|| suspect_multiple_buckets.is_set
	|| suspect_premature_end.is_set
	|| suspect_probe_restarted.is_set
	|| suspect_schedule_latency.is_set
	|| suspect_send_fail.is_set
	|| suspect_start_mid_bucket.is_set
	|| time_of_maximum.is_set
	|| time_of_minimum.is_set
	|| (contents !=  nullptr && contents->has_data());
}

bool Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationMetric::Bucket::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(corrupt.yfilter)
	|| ydk::is_set(data_lost_count.yfilter)
	|| ydk::is_set(data_sent_count.yfilter)
	|| ydk::is_set(duplicates.yfilter)
	|| ydk::is_set(duration.yfilter)
	|| ydk::is_set(lost.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(out_of_order.yfilter)
	|| ydk::is_set(overall_flr.yfilter)
	|| ydk::is_set(premature_reason.yfilter)
	|| ydk::is_set(premature_reason_string.yfilter)
	|| ydk::is_set(result_count.yfilter)
	|| ydk::is_set(sent.yfilter)
	|| ydk::is_set(standard_deviation.yfilter)
	|| ydk::is_set(start_at.yfilter)
	|| ydk::is_set(suspect_cleared_mid_bucket.yfilter)
	|| ydk::is_set(suspect_clock_drift.yfilter)
	|| ydk::is_set(suspect_flr_low_packet_count.yfilter)
	|| ydk::is_set(suspect_management_latency.yfilter)
	|| ydk::is_set(suspect_memory_allocation_failed.yfilter)
	|| ydk::is_set(suspect_misordering.yfilter)
	|| ydk::is_set(suspect_multiple_buckets.yfilter)
	|| ydk::is_set(suspect_premature_end.yfilter)
	|| ydk::is_set(suspect_probe_restarted.yfilter)
	|| ydk::is_set(suspect_schedule_latency.yfilter)
	|| ydk::is_set(suspect_send_fail.yfilter)
	|| ydk::is_set(suspect_start_mid_bucket.yfilter)
	|| ydk::is_set(time_of_maximum.yfilter)
	|| ydk::is_set(time_of_minimum.yfilter)
	|| (contents !=  nullptr && contents->has_operation());
}

std::string Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationMetric::Bucket::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bucket";

    return path_buffer.str();

}

const EntityPath Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationMetric::Bucket::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-sla-oper:sla/protocols/Cisco-IOS-XR-ethernet-cfm-oper:ethernet/statistics-on-demand-currents/statistics-on-demand-current/operation-metric/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (corrupt.is_set || is_set(corrupt.yfilter)) leaf_name_data.push_back(corrupt.get_name_leafdata());
    if (data_lost_count.is_set || is_set(data_lost_count.yfilter)) leaf_name_data.push_back(data_lost_count.get_name_leafdata());
    if (data_sent_count.is_set || is_set(data_sent_count.yfilter)) leaf_name_data.push_back(data_sent_count.get_name_leafdata());
    if (duplicates.is_set || is_set(duplicates.yfilter)) leaf_name_data.push_back(duplicates.get_name_leafdata());
    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());
    if (lost.is_set || is_set(lost.yfilter)) leaf_name_data.push_back(lost.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (out_of_order.is_set || is_set(out_of_order.yfilter)) leaf_name_data.push_back(out_of_order.get_name_leafdata());
    if (overall_flr.is_set || is_set(overall_flr.yfilter)) leaf_name_data.push_back(overall_flr.get_name_leafdata());
    if (premature_reason.is_set || is_set(premature_reason.yfilter)) leaf_name_data.push_back(premature_reason.get_name_leafdata());
    if (premature_reason_string.is_set || is_set(premature_reason_string.yfilter)) leaf_name_data.push_back(premature_reason_string.get_name_leafdata());
    if (result_count.is_set || is_set(result_count.yfilter)) leaf_name_data.push_back(result_count.get_name_leafdata());
    if (sent.is_set || is_set(sent.yfilter)) leaf_name_data.push_back(sent.get_name_leafdata());
    if (standard_deviation.is_set || is_set(standard_deviation.yfilter)) leaf_name_data.push_back(standard_deviation.get_name_leafdata());
    if (start_at.is_set || is_set(start_at.yfilter)) leaf_name_data.push_back(start_at.get_name_leafdata());
    if (suspect_cleared_mid_bucket.is_set || is_set(suspect_cleared_mid_bucket.yfilter)) leaf_name_data.push_back(suspect_cleared_mid_bucket.get_name_leafdata());
    if (suspect_clock_drift.is_set || is_set(suspect_clock_drift.yfilter)) leaf_name_data.push_back(suspect_clock_drift.get_name_leafdata());
    if (suspect_flr_low_packet_count.is_set || is_set(suspect_flr_low_packet_count.yfilter)) leaf_name_data.push_back(suspect_flr_low_packet_count.get_name_leafdata());
    if (suspect_management_latency.is_set || is_set(suspect_management_latency.yfilter)) leaf_name_data.push_back(suspect_management_latency.get_name_leafdata());
    if (suspect_memory_allocation_failed.is_set || is_set(suspect_memory_allocation_failed.yfilter)) leaf_name_data.push_back(suspect_memory_allocation_failed.get_name_leafdata());
    if (suspect_misordering.is_set || is_set(suspect_misordering.yfilter)) leaf_name_data.push_back(suspect_misordering.get_name_leafdata());
    if (suspect_multiple_buckets.is_set || is_set(suspect_multiple_buckets.yfilter)) leaf_name_data.push_back(suspect_multiple_buckets.get_name_leafdata());
    if (suspect_premature_end.is_set || is_set(suspect_premature_end.yfilter)) leaf_name_data.push_back(suspect_premature_end.get_name_leafdata());
    if (suspect_probe_restarted.is_set || is_set(suspect_probe_restarted.yfilter)) leaf_name_data.push_back(suspect_probe_restarted.get_name_leafdata());
    if (suspect_schedule_latency.is_set || is_set(suspect_schedule_latency.yfilter)) leaf_name_data.push_back(suspect_schedule_latency.get_name_leafdata());
    if (suspect_send_fail.is_set || is_set(suspect_send_fail.yfilter)) leaf_name_data.push_back(suspect_send_fail.get_name_leafdata());
    if (suspect_start_mid_bucket.is_set || is_set(suspect_start_mid_bucket.yfilter)) leaf_name_data.push_back(suspect_start_mid_bucket.get_name_leafdata());
    if (time_of_maximum.is_set || is_set(time_of_maximum.yfilter)) leaf_name_data.push_back(time_of_maximum.get_name_leafdata());
    if (time_of_minimum.is_set || is_set(time_of_minimum.yfilter)) leaf_name_data.push_back(time_of_minimum.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationMetric::Bucket::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "contents")
    {
        if(contents == nullptr)
        {
            contents = std::make_shared<Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationMetric::Bucket::Contents>();
        }
        return contents;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationMetric::Bucket::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(contents != nullptr)
    {
        children["contents"] = contents;
    }

    return children;
}

void Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationMetric::Bucket::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "average")
    {
        average = value;
        average.value_namespace = name_space;
        average.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "corrupt")
    {
        corrupt = value;
        corrupt.value_namespace = name_space;
        corrupt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "data-lost-count")
    {
        data_lost_count = value;
        data_lost_count.value_namespace = name_space;
        data_lost_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "data-sent-count")
    {
        data_sent_count = value;
        data_sent_count.value_namespace = name_space;
        data_sent_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "duplicates")
    {
        duplicates = value;
        duplicates.value_namespace = name_space;
        duplicates.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lost")
    {
        lost = value;
        lost.value_namespace = name_space;
        lost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-of-order")
    {
        out_of_order = value;
        out_of_order.value_namespace = name_space;
        out_of_order.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "overall-flr")
    {
        overall_flr = value;
        overall_flr.value_namespace = name_space;
        overall_flr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "premature-reason")
    {
        premature_reason = value;
        premature_reason.value_namespace = name_space;
        premature_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "premature-reason-string")
    {
        premature_reason_string = value;
        premature_reason_string.value_namespace = name_space;
        premature_reason_string.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "result-count")
    {
        result_count = value;
        result_count.value_namespace = name_space;
        result_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sent")
    {
        sent = value;
        sent.value_namespace = name_space;
        sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "standard-deviation")
    {
        standard_deviation = value;
        standard_deviation.value_namespace = name_space;
        standard_deviation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-at")
    {
        start_at = value;
        start_at.value_namespace = name_space;
        start_at.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suspect-cleared-mid-bucket")
    {
        suspect_cleared_mid_bucket = value;
        suspect_cleared_mid_bucket.value_namespace = name_space;
        suspect_cleared_mid_bucket.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suspect-clock-drift")
    {
        suspect_clock_drift = value;
        suspect_clock_drift.value_namespace = name_space;
        suspect_clock_drift.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suspect-flr-low-packet-count")
    {
        suspect_flr_low_packet_count = value;
        suspect_flr_low_packet_count.value_namespace = name_space;
        suspect_flr_low_packet_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suspect-management-latency")
    {
        suspect_management_latency = value;
        suspect_management_latency.value_namespace = name_space;
        suspect_management_latency.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suspect-memory-allocation-failed")
    {
        suspect_memory_allocation_failed = value;
        suspect_memory_allocation_failed.value_namespace = name_space;
        suspect_memory_allocation_failed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suspect-misordering")
    {
        suspect_misordering = value;
        suspect_misordering.value_namespace = name_space;
        suspect_misordering.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suspect-multiple-buckets")
    {
        suspect_multiple_buckets = value;
        suspect_multiple_buckets.value_namespace = name_space;
        suspect_multiple_buckets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suspect-premature-end")
    {
        suspect_premature_end = value;
        suspect_premature_end.value_namespace = name_space;
        suspect_premature_end.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suspect-probe-restarted")
    {
        suspect_probe_restarted = value;
        suspect_probe_restarted.value_namespace = name_space;
        suspect_probe_restarted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suspect-schedule-latency")
    {
        suspect_schedule_latency = value;
        suspect_schedule_latency.value_namespace = name_space;
        suspect_schedule_latency.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suspect-send-fail")
    {
        suspect_send_fail = value;
        suspect_send_fail.value_namespace = name_space;
        suspect_send_fail.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suspect-start-mid-bucket")
    {
        suspect_start_mid_bucket = value;
        suspect_start_mid_bucket.value_namespace = name_space;
        suspect_start_mid_bucket.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-of-maximum")
    {
        time_of_maximum = value;
        time_of_maximum.value_namespace = name_space;
        time_of_maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-of-minimum")
    {
        time_of_minimum = value;
        time_of_minimum.value_namespace = name_space;
        time_of_minimum.value_namespace_prefix = name_space_prefix;
    }
}

void Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationMetric::Bucket::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "average")
    {
        average.yfilter = yfilter;
    }
    if(value_path == "corrupt")
    {
        corrupt.yfilter = yfilter;
    }
    if(value_path == "data-lost-count")
    {
        data_lost_count.yfilter = yfilter;
    }
    if(value_path == "data-sent-count")
    {
        data_sent_count.yfilter = yfilter;
    }
    if(value_path == "duplicates")
    {
        duplicates.yfilter = yfilter;
    }
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
    }
    if(value_path == "lost")
    {
        lost.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
    if(value_path == "out-of-order")
    {
        out_of_order.yfilter = yfilter;
    }
    if(value_path == "overall-flr")
    {
        overall_flr.yfilter = yfilter;
    }
    if(value_path == "premature-reason")
    {
        premature_reason.yfilter = yfilter;
    }
    if(value_path == "premature-reason-string")
    {
        premature_reason_string.yfilter = yfilter;
    }
    if(value_path == "result-count")
    {
        result_count.yfilter = yfilter;
    }
    if(value_path == "sent")
    {
        sent.yfilter = yfilter;
    }
    if(value_path == "standard-deviation")
    {
        standard_deviation.yfilter = yfilter;
    }
    if(value_path == "start-at")
    {
        start_at.yfilter = yfilter;
    }
    if(value_path == "suspect-cleared-mid-bucket")
    {
        suspect_cleared_mid_bucket.yfilter = yfilter;
    }
    if(value_path == "suspect-clock-drift")
    {
        suspect_clock_drift.yfilter = yfilter;
    }
    if(value_path == "suspect-flr-low-packet-count")
    {
        suspect_flr_low_packet_count.yfilter = yfilter;
    }
    if(value_path == "suspect-management-latency")
    {
        suspect_management_latency.yfilter = yfilter;
    }
    if(value_path == "suspect-memory-allocation-failed")
    {
        suspect_memory_allocation_failed.yfilter = yfilter;
    }
    if(value_path == "suspect-misordering")
    {
        suspect_misordering.yfilter = yfilter;
    }
    if(value_path == "suspect-multiple-buckets")
    {
        suspect_multiple_buckets.yfilter = yfilter;
    }
    if(value_path == "suspect-premature-end")
    {
        suspect_premature_end.yfilter = yfilter;
    }
    if(value_path == "suspect-probe-restarted")
    {
        suspect_probe_restarted.yfilter = yfilter;
    }
    if(value_path == "suspect-schedule-latency")
    {
        suspect_schedule_latency.yfilter = yfilter;
    }
    if(value_path == "suspect-send-fail")
    {
        suspect_send_fail.yfilter = yfilter;
    }
    if(value_path == "suspect-start-mid-bucket")
    {
        suspect_start_mid_bucket.yfilter = yfilter;
    }
    if(value_path == "time-of-maximum")
    {
        time_of_maximum.yfilter = yfilter;
    }
    if(value_path == "time-of-minimum")
    {
        time_of_minimum.yfilter = yfilter;
    }
}

bool Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationMetric::Bucket::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "contents" || name == "average" || name == "corrupt" || name == "data-lost-count" || name == "data-sent-count" || name == "duplicates" || name == "duration" || name == "lost" || name == "maximum" || name == "minimum" || name == "out-of-order" || name == "overall-flr" || name == "premature-reason" || name == "premature-reason-string" || name == "result-count" || name == "sent" || name == "standard-deviation" || name == "start-at" || name == "suspect-cleared-mid-bucket" || name == "suspect-clock-drift" || name == "suspect-flr-low-packet-count" || name == "suspect-management-latency" || name == "suspect-memory-allocation-failed" || name == "suspect-misordering" || name == "suspect-multiple-buckets" || name == "suspect-premature-end" || name == "suspect-probe-restarted" || name == "suspect-schedule-latency" || name == "suspect-send-fail" || name == "suspect-start-mid-bucket" || name == "time-of-maximum" || name == "time-of-minimum")
        return true;
    return false;
}

Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationMetric::Bucket::Contents::Contents()
    :
    bucket_type{YType::enumeration, "bucket-type"}
    	,
    aggregated(std::make_shared<Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationMetric::Bucket::Contents::Aggregated>())
	,unaggregated(std::make_shared<Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationMetric::Bucket::Contents::Unaggregated>())
{
    aggregated->parent = this;

    unaggregated->parent = this;

    yang_name = "contents"; yang_parent_name = "bucket";
}

Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationMetric::Bucket::Contents::~Contents()
{
}

bool Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationMetric::Bucket::Contents::has_data() const
{
    return bucket_type.is_set
	|| (aggregated !=  nullptr && aggregated->has_data())
	|| (unaggregated !=  nullptr && unaggregated->has_data());
}

bool Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationMetric::Bucket::Contents::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bucket_type.yfilter)
	|| (aggregated !=  nullptr && aggregated->has_operation())
	|| (unaggregated !=  nullptr && unaggregated->has_operation());
}

std::string Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationMetric::Bucket::Contents::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "contents";

    return path_buffer.str();

}

const EntityPath Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationMetric::Bucket::Contents::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-sla-oper:sla/protocols/Cisco-IOS-XR-ethernet-cfm-oper:ethernet/statistics-on-demand-currents/statistics-on-demand-current/operation-metric/bucket/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bucket_type.is_set || is_set(bucket_type.yfilter)) leaf_name_data.push_back(bucket_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationMetric::Bucket::Contents::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aggregated")
    {
        if(aggregated == nullptr)
        {
            aggregated = std::make_shared<Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationMetric::Bucket::Contents::Aggregated>();
        }
        return aggregated;
    }

    if(child_yang_name == "unaggregated")
    {
        if(unaggregated == nullptr)
        {
            unaggregated = std::make_shared<Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationMetric::Bucket::Contents::Unaggregated>();
        }
        return unaggregated;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationMetric::Bucket::Contents::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(aggregated != nullptr)
    {
        children["aggregated"] = aggregated;
    }

    if(unaggregated != nullptr)
    {
        children["unaggregated"] = unaggregated;
    }

    return children;
}

void Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationMetric::Bucket::Contents::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bucket-type")
    {
        bucket_type = value;
        bucket_type.value_namespace = name_space;
        bucket_type.value_namespace_prefix = name_space_prefix;
    }
}

void Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationMetric::Bucket::Contents::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bucket-type")
    {
        bucket_type.yfilter = yfilter;
    }
}

bool Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationMetric::Bucket::Contents::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aggregated" || name == "unaggregated" || name == "bucket-type")
        return true;
    return false;
}

Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationMetric::Bucket::Contents::Aggregated::Aggregated()
{
    yang_name = "aggregated"; yang_parent_name = "contents";
}

Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationMetric::Bucket::Contents::Aggregated::~Aggregated()
{
}

bool Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationMetric::Bucket::Contents::Aggregated::has_data() const
{
    for (std::size_t index=0; index<bins.size(); index++)
    {
        if(bins[index]->has_data())
            return true;
    }
    return false;
}

bool Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationMetric::Bucket::Contents::Aggregated::has_operation() const
{
    for (std::size_t index=0; index<bins.size(); index++)
    {
        if(bins[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationMetric::Bucket::Contents::Aggregated::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aggregated";

    return path_buffer.str();

}

const EntityPath Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationMetric::Bucket::Contents::Aggregated::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-sla-oper:sla/protocols/Cisco-IOS-XR-ethernet-cfm-oper:ethernet/statistics-on-demand-currents/statistics-on-demand-current/operation-metric/bucket/contents/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationMetric::Bucket::Contents::Aggregated::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bins")
    {
        for(auto const & c : bins)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationMetric::Bucket::Contents::Aggregated::Bins>();
        c->parent = this;
        bins.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationMetric::Bucket::Contents::Aggregated::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bins)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationMetric::Bucket::Contents::Aggregated::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationMetric::Bucket::Contents::Aggregated::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationMetric::Bucket::Contents::Aggregated::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bins")
        return true;
    return false;
}

Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationMetric::Bucket::Contents::Aggregated::Bins::Bins()
    :
    count{YType::uint32, "count"},
    lower_bound{YType::int32, "lower-bound"},
    lower_bound_tenths{YType::int32, "lower-bound-tenths"},
    sum{YType::int64, "sum"},
    upper_bound{YType::int32, "upper-bound"},
    upper_bound_tenths{YType::int32, "upper-bound-tenths"}
{
    yang_name = "bins"; yang_parent_name = "aggregated";
}

Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationMetric::Bucket::Contents::Aggregated::Bins::~Bins()
{
}

bool Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationMetric::Bucket::Contents::Aggregated::Bins::has_data() const
{
    return count.is_set
	|| lower_bound.is_set
	|| lower_bound_tenths.is_set
	|| sum.is_set
	|| upper_bound.is_set
	|| upper_bound_tenths.is_set;
}

bool Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationMetric::Bucket::Contents::Aggregated::Bins::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(count.yfilter)
	|| ydk::is_set(lower_bound.yfilter)
	|| ydk::is_set(lower_bound_tenths.yfilter)
	|| ydk::is_set(sum.yfilter)
	|| ydk::is_set(upper_bound.yfilter)
	|| ydk::is_set(upper_bound_tenths.yfilter);
}

std::string Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationMetric::Bucket::Contents::Aggregated::Bins::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bins";

    return path_buffer.str();

}

const EntityPath Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationMetric::Bucket::Contents::Aggregated::Bins::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-sla-oper:sla/protocols/Cisco-IOS-XR-ethernet-cfm-oper:ethernet/statistics-on-demand-currents/statistics-on-demand-current/operation-metric/bucket/contents/aggregated/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (count.is_set || is_set(count.yfilter)) leaf_name_data.push_back(count.get_name_leafdata());
    if (lower_bound.is_set || is_set(lower_bound.yfilter)) leaf_name_data.push_back(lower_bound.get_name_leafdata());
    if (lower_bound_tenths.is_set || is_set(lower_bound_tenths.yfilter)) leaf_name_data.push_back(lower_bound_tenths.get_name_leafdata());
    if (sum.is_set || is_set(sum.yfilter)) leaf_name_data.push_back(sum.get_name_leafdata());
    if (upper_bound.is_set || is_set(upper_bound.yfilter)) leaf_name_data.push_back(upper_bound.get_name_leafdata());
    if (upper_bound_tenths.is_set || is_set(upper_bound_tenths.yfilter)) leaf_name_data.push_back(upper_bound_tenths.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationMetric::Bucket::Contents::Aggregated::Bins::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationMetric::Bucket::Contents::Aggregated::Bins::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationMetric::Bucket::Contents::Aggregated::Bins::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "count")
    {
        count = value;
        count.value_namespace = name_space;
        count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lower-bound")
    {
        lower_bound = value;
        lower_bound.value_namespace = name_space;
        lower_bound.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lower-bound-tenths")
    {
        lower_bound_tenths = value;
        lower_bound_tenths.value_namespace = name_space;
        lower_bound_tenths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sum")
    {
        sum = value;
        sum.value_namespace = name_space;
        sum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "upper-bound")
    {
        upper_bound = value;
        upper_bound.value_namespace = name_space;
        upper_bound.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "upper-bound-tenths")
    {
        upper_bound_tenths = value;
        upper_bound_tenths.value_namespace = name_space;
        upper_bound_tenths.value_namespace_prefix = name_space_prefix;
    }
}

void Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationMetric::Bucket::Contents::Aggregated::Bins::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "count")
    {
        count.yfilter = yfilter;
    }
    if(value_path == "lower-bound")
    {
        lower_bound.yfilter = yfilter;
    }
    if(value_path == "lower-bound-tenths")
    {
        lower_bound_tenths.yfilter = yfilter;
    }
    if(value_path == "sum")
    {
        sum.yfilter = yfilter;
    }
    if(value_path == "upper-bound")
    {
        upper_bound.yfilter = yfilter;
    }
    if(value_path == "upper-bound-tenths")
    {
        upper_bound_tenths.yfilter = yfilter;
    }
}

bool Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationMetric::Bucket::Contents::Aggregated::Bins::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "count" || name == "lower-bound" || name == "lower-bound-tenths" || name == "sum" || name == "upper-bound" || name == "upper-bound-tenths")
        return true;
    return false;
}

Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationMetric::Bucket::Contents::Unaggregated::Unaggregated()
{
    yang_name = "unaggregated"; yang_parent_name = "contents";
}

Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationMetric::Bucket::Contents::Unaggregated::~Unaggregated()
{
}

bool Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationMetric::Bucket::Contents::Unaggregated::has_data() const
{
    for (std::size_t index=0; index<sample.size(); index++)
    {
        if(sample[index]->has_data())
            return true;
    }
    return false;
}

bool Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationMetric::Bucket::Contents::Unaggregated::has_operation() const
{
    for (std::size_t index=0; index<sample.size(); index++)
    {
        if(sample[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationMetric::Bucket::Contents::Unaggregated::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unaggregated";

    return path_buffer.str();

}

const EntityPath Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationMetric::Bucket::Contents::Unaggregated::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-sla-oper:sla/protocols/Cisco-IOS-XR-ethernet-cfm-oper:ethernet/statistics-on-demand-currents/statistics-on-demand-current/operation-metric/bucket/contents/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationMetric::Bucket::Contents::Unaggregated::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sample")
    {
        for(auto const & c : sample)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationMetric::Bucket::Contents::Unaggregated::Sample>();
        c->parent = this;
        sample.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationMetric::Bucket::Contents::Unaggregated::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sample)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationMetric::Bucket::Contents::Unaggregated::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationMetric::Bucket::Contents::Unaggregated::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationMetric::Bucket::Contents::Unaggregated::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sample")
        return true;
    return false;
}

Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationMetric::Bucket::Contents::Unaggregated::Sample::Sample()
    :
    corrupt{YType::boolean, "corrupt"},
    frames_lost{YType::uint32, "frames-lost"},
    frames_sent{YType::uint32, "frames-sent"},
    no_data_packets{YType::boolean, "no-data-packets"},
    out_of_order{YType::boolean, "out-of-order"},
    result{YType::int32, "result"},
    sent{YType::boolean, "sent"},
    sent_at{YType::uint32, "sent-at"},
    timed_out{YType::boolean, "timed-out"}
{
    yang_name = "sample"; yang_parent_name = "unaggregated";
}

Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationMetric::Bucket::Contents::Unaggregated::Sample::~Sample()
{
}

bool Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationMetric::Bucket::Contents::Unaggregated::Sample::has_data() const
{
    return corrupt.is_set
	|| frames_lost.is_set
	|| frames_sent.is_set
	|| no_data_packets.is_set
	|| out_of_order.is_set
	|| result.is_set
	|| sent.is_set
	|| sent_at.is_set
	|| timed_out.is_set;
}

bool Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationMetric::Bucket::Contents::Unaggregated::Sample::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(corrupt.yfilter)
	|| ydk::is_set(frames_lost.yfilter)
	|| ydk::is_set(frames_sent.yfilter)
	|| ydk::is_set(no_data_packets.yfilter)
	|| ydk::is_set(out_of_order.yfilter)
	|| ydk::is_set(result.yfilter)
	|| ydk::is_set(sent.yfilter)
	|| ydk::is_set(sent_at.yfilter)
	|| ydk::is_set(timed_out.yfilter);
}

std::string Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationMetric::Bucket::Contents::Unaggregated::Sample::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sample";

    return path_buffer.str();

}

const EntityPath Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationMetric::Bucket::Contents::Unaggregated::Sample::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-sla-oper:sla/protocols/Cisco-IOS-XR-ethernet-cfm-oper:ethernet/statistics-on-demand-currents/statistics-on-demand-current/operation-metric/bucket/contents/unaggregated/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (corrupt.is_set || is_set(corrupt.yfilter)) leaf_name_data.push_back(corrupt.get_name_leafdata());
    if (frames_lost.is_set || is_set(frames_lost.yfilter)) leaf_name_data.push_back(frames_lost.get_name_leafdata());
    if (frames_sent.is_set || is_set(frames_sent.yfilter)) leaf_name_data.push_back(frames_sent.get_name_leafdata());
    if (no_data_packets.is_set || is_set(no_data_packets.yfilter)) leaf_name_data.push_back(no_data_packets.get_name_leafdata());
    if (out_of_order.is_set || is_set(out_of_order.yfilter)) leaf_name_data.push_back(out_of_order.get_name_leafdata());
    if (result.is_set || is_set(result.yfilter)) leaf_name_data.push_back(result.get_name_leafdata());
    if (sent.is_set || is_set(sent.yfilter)) leaf_name_data.push_back(sent.get_name_leafdata());
    if (sent_at.is_set || is_set(sent_at.yfilter)) leaf_name_data.push_back(sent_at.get_name_leafdata());
    if (timed_out.is_set || is_set(timed_out.yfilter)) leaf_name_data.push_back(timed_out.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationMetric::Bucket::Contents::Unaggregated::Sample::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationMetric::Bucket::Contents::Unaggregated::Sample::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationMetric::Bucket::Contents::Unaggregated::Sample::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "corrupt")
    {
        corrupt = value;
        corrupt.value_namespace = name_space;
        corrupt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frames-lost")
    {
        frames_lost = value;
        frames_lost.value_namespace = name_space;
        frames_lost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frames-sent")
    {
        frames_sent = value;
        frames_sent.value_namespace = name_space;
        frames_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-data-packets")
    {
        no_data_packets = value;
        no_data_packets.value_namespace = name_space;
        no_data_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-of-order")
    {
        out_of_order = value;
        out_of_order.value_namespace = name_space;
        out_of_order.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "result")
    {
        result = value;
        result.value_namespace = name_space;
        result.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sent")
    {
        sent = value;
        sent.value_namespace = name_space;
        sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sent-at")
    {
        sent_at = value;
        sent_at.value_namespace = name_space;
        sent_at.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timed-out")
    {
        timed_out = value;
        timed_out.value_namespace = name_space;
        timed_out.value_namespace_prefix = name_space_prefix;
    }
}

void Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationMetric::Bucket::Contents::Unaggregated::Sample::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "corrupt")
    {
        corrupt.yfilter = yfilter;
    }
    if(value_path == "frames-lost")
    {
        frames_lost.yfilter = yfilter;
    }
    if(value_path == "frames-sent")
    {
        frames_sent.yfilter = yfilter;
    }
    if(value_path == "no-data-packets")
    {
        no_data_packets.yfilter = yfilter;
    }
    if(value_path == "out-of-order")
    {
        out_of_order.yfilter = yfilter;
    }
    if(value_path == "result")
    {
        result.yfilter = yfilter;
    }
    if(value_path == "sent")
    {
        sent.yfilter = yfilter;
    }
    if(value_path == "sent-at")
    {
        sent_at.yfilter = yfilter;
    }
    if(value_path == "timed-out")
    {
        timed_out.yfilter = yfilter;
    }
}

bool Sla::Protocols::Ethernet::StatisticsOnDemandCurrents::StatisticsOnDemandCurrent::OperationMetric::Bucket::Contents::Unaggregated::Sample::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "corrupt" || name == "frames-lost" || name == "frames-sent" || name == "no-data-packets" || name == "out-of-order" || name == "result" || name == "sent" || name == "sent-at" || name == "timed-out")
        return true;
    return false;
}

Sla::Protocols::Ethernet::Operations::Operations()
{
    yang_name = "operations"; yang_parent_name = "ethernet";
}

Sla::Protocols::Ethernet::Operations::~Operations()
{
}

bool Sla::Protocols::Ethernet::Operations::has_data() const
{
    for (std::size_t index=0; index<operation_.size(); index++)
    {
        if(operation_[index]->has_data())
            return true;
    }
    return false;
}

bool Sla::Protocols::Ethernet::Operations::has_operation() const
{
    for (std::size_t index=0; index<operation_.size(); index++)
    {
        if(operation_[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Sla::Protocols::Ethernet::Operations::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "operations";

    return path_buffer.str();

}

const EntityPath Sla::Protocols::Ethernet::Operations::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-sla-oper:sla/protocols/Cisco-IOS-XR-ethernet-cfm-oper:ethernet/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Sla::Protocols::Ethernet::Operations::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "operation")
    {
        for(auto const & c : operation_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Sla::Protocols::Ethernet::Operations::Operation_>();
        c->parent = this;
        operation_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Sla::Protocols::Ethernet::Operations::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : operation_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Sla::Protocols::Ethernet::Operations::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Sla::Protocols::Ethernet::Operations::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Sla::Protocols::Ethernet::Operations::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "operation")
        return true;
    return false;
}

Sla::Protocols::Ethernet::Operations::Operation_::Operation_()
    :
    display_long{YType::str, "display-long"},
    display_short{YType::str, "display-short"},
    domain_name{YType::str, "domain-name"},
    interface_name{YType::str, "interface-name"},
    last_run{YType::uint32, "last-run"},
    mac_address{YType::str, "mac-address"},
    mep_id{YType::uint32, "mep-id"},
    profile_name{YType::str, "profile-name"}
    	,
    profile_options(std::make_shared<Sla::Protocols::Ethernet::Operations::Operation_::ProfileOptions>())
	,specific_options(std::make_shared<Sla::Protocols::Ethernet::Operations::Operation_::SpecificOptions>())
{
    profile_options->parent = this;

    specific_options->parent = this;

    yang_name = "operation"; yang_parent_name = "operations";
}

Sla::Protocols::Ethernet::Operations::Operation_::~Operation_()
{
}

bool Sla::Protocols::Ethernet::Operations::Operation_::has_data() const
{
    return display_long.is_set
	|| display_short.is_set
	|| domain_name.is_set
	|| interface_name.is_set
	|| last_run.is_set
	|| mac_address.is_set
	|| mep_id.is_set
	|| profile_name.is_set
	|| (profile_options !=  nullptr && profile_options->has_data())
	|| (specific_options !=  nullptr && specific_options->has_data());
}

bool Sla::Protocols::Ethernet::Operations::Operation_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(display_long.yfilter)
	|| ydk::is_set(display_short.yfilter)
	|| ydk::is_set(domain_name.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(last_run.yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(mep_id.yfilter)
	|| ydk::is_set(profile_name.yfilter)
	|| (profile_options !=  nullptr && profile_options->has_operation())
	|| (specific_options !=  nullptr && specific_options->has_operation());
}

std::string Sla::Protocols::Ethernet::Operations::Operation_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "operation";

    return path_buffer.str();

}

const EntityPath Sla::Protocols::Ethernet::Operations::Operation_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-sla-oper:sla/protocols/Cisco-IOS-XR-ethernet-cfm-oper:ethernet/operations/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (display_long.is_set || is_set(display_long.yfilter)) leaf_name_data.push_back(display_long.get_name_leafdata());
    if (display_short.is_set || is_set(display_short.yfilter)) leaf_name_data.push_back(display_short.get_name_leafdata());
    if (domain_name.is_set || is_set(domain_name.yfilter)) leaf_name_data.push_back(domain_name.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (last_run.is_set || is_set(last_run.yfilter)) leaf_name_data.push_back(last_run.get_name_leafdata());
    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (mep_id.is_set || is_set(mep_id.yfilter)) leaf_name_data.push_back(mep_id.get_name_leafdata());
    if (profile_name.is_set || is_set(profile_name.yfilter)) leaf_name_data.push_back(profile_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Sla::Protocols::Ethernet::Operations::Operation_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "profile-options")
    {
        if(profile_options == nullptr)
        {
            profile_options = std::make_shared<Sla::Protocols::Ethernet::Operations::Operation_::ProfileOptions>();
        }
        return profile_options;
    }

    if(child_yang_name == "specific-options")
    {
        if(specific_options == nullptr)
        {
            specific_options = std::make_shared<Sla::Protocols::Ethernet::Operations::Operation_::SpecificOptions>();
        }
        return specific_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Sla::Protocols::Ethernet::Operations::Operation_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(profile_options != nullptr)
    {
        children["profile-options"] = profile_options;
    }

    if(specific_options != nullptr)
    {
        children["specific-options"] = specific_options;
    }

    return children;
}

void Sla::Protocols::Ethernet::Operations::Operation_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "display-long")
    {
        display_long = value;
        display_long.value_namespace = name_space;
        display_long.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "display-short")
    {
        display_short = value;
        display_short.value_namespace = name_space;
        display_short.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "domain-name")
    {
        domain_name = value;
        domain_name.value_namespace = name_space;
        domain_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-run")
    {
        last_run = value;
        last_run.value_namespace = name_space;
        last_run.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mep-id")
    {
        mep_id = value;
        mep_id.value_namespace = name_space;
        mep_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "profile-name")
    {
        profile_name = value;
        profile_name.value_namespace = name_space;
        profile_name.value_namespace_prefix = name_space_prefix;
    }
}

void Sla::Protocols::Ethernet::Operations::Operation_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "display-long")
    {
        display_long.yfilter = yfilter;
    }
    if(value_path == "display-short")
    {
        display_short.yfilter = yfilter;
    }
    if(value_path == "domain-name")
    {
        domain_name.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "last-run")
    {
        last_run.yfilter = yfilter;
    }
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "mep-id")
    {
        mep_id.yfilter = yfilter;
    }
    if(value_path == "profile-name")
    {
        profile_name.yfilter = yfilter;
    }
}

bool Sla::Protocols::Ethernet::Operations::Operation_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "profile-options" || name == "specific-options" || name == "display-long" || name == "display-short" || name == "domain-name" || name == "interface-name" || name == "last-run" || name == "mac-address" || name == "mep-id" || name == "profile-name")
        return true;
    return false;
}

Sla::Protocols::Ethernet::Operations::Operation_::ProfileOptions::ProfileOptions()
    :
    bursts_per_probe{YType::uint32, "bursts-per-probe"},
    flr_calculation_interval{YType::uint32, "flr-calculation-interval"},
    inter_burst_interval{YType::uint32, "inter-burst-interval"},
    inter_packet_interval{YType::uint16, "inter-packet-interval"},
    packets_per_burst{YType::uint16, "packets-per-burst"},
    probe_type{YType::str, "probe-type"}
    	,
    operation_schedule(std::make_shared<Sla::Protocols::Ethernet::Operations::Operation_::ProfileOptions::OperationSchedule>())
	,packet_padding(std::make_shared<Sla::Protocols::Ethernet::Operations::Operation_::ProfileOptions::PacketPadding>())
	,priority(std::make_shared<Sla::Protocols::Ethernet::Operations::Operation_::ProfileOptions::Priority>())
{
    operation_schedule->parent = this;

    packet_padding->parent = this;

    priority->parent = this;

    yang_name = "profile-options"; yang_parent_name = "operation";
}

Sla::Protocols::Ethernet::Operations::Operation_::ProfileOptions::~ProfileOptions()
{
}

bool Sla::Protocols::Ethernet::Operations::Operation_::ProfileOptions::has_data() const
{
    for (std::size_t index=0; index<operation_metric.size(); index++)
    {
        if(operation_metric[index]->has_data())
            return true;
    }
    return bursts_per_probe.is_set
	|| flr_calculation_interval.is_set
	|| inter_burst_interval.is_set
	|| inter_packet_interval.is_set
	|| packets_per_burst.is_set
	|| probe_type.is_set
	|| (operation_schedule !=  nullptr && operation_schedule->has_data())
	|| (packet_padding !=  nullptr && packet_padding->has_data())
	|| (priority !=  nullptr && priority->has_data());
}

bool Sla::Protocols::Ethernet::Operations::Operation_::ProfileOptions::has_operation() const
{
    for (std::size_t index=0; index<operation_metric.size(); index++)
    {
        if(operation_metric[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(bursts_per_probe.yfilter)
	|| ydk::is_set(flr_calculation_interval.yfilter)
	|| ydk::is_set(inter_burst_interval.yfilter)
	|| ydk::is_set(inter_packet_interval.yfilter)
	|| ydk::is_set(packets_per_burst.yfilter)
	|| ydk::is_set(probe_type.yfilter)
	|| (operation_schedule !=  nullptr && operation_schedule->has_operation())
	|| (packet_padding !=  nullptr && packet_padding->has_operation())
	|| (priority !=  nullptr && priority->has_operation());
}

std::string Sla::Protocols::Ethernet::Operations::Operation_::ProfileOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "profile-options";

    return path_buffer.str();

}

const EntityPath Sla::Protocols::Ethernet::Operations::Operation_::ProfileOptions::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-sla-oper:sla/protocols/Cisco-IOS-XR-ethernet-cfm-oper:ethernet/operations/operation/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bursts_per_probe.is_set || is_set(bursts_per_probe.yfilter)) leaf_name_data.push_back(bursts_per_probe.get_name_leafdata());
    if (flr_calculation_interval.is_set || is_set(flr_calculation_interval.yfilter)) leaf_name_data.push_back(flr_calculation_interval.get_name_leafdata());
    if (inter_burst_interval.is_set || is_set(inter_burst_interval.yfilter)) leaf_name_data.push_back(inter_burst_interval.get_name_leafdata());
    if (inter_packet_interval.is_set || is_set(inter_packet_interval.yfilter)) leaf_name_data.push_back(inter_packet_interval.get_name_leafdata());
    if (packets_per_burst.is_set || is_set(packets_per_burst.yfilter)) leaf_name_data.push_back(packets_per_burst.get_name_leafdata());
    if (probe_type.is_set || is_set(probe_type.yfilter)) leaf_name_data.push_back(probe_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Sla::Protocols::Ethernet::Operations::Operation_::ProfileOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "operation-metric")
    {
        for(auto const & c : operation_metric)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Sla::Protocols::Ethernet::Operations::Operation_::ProfileOptions::OperationMetric>();
        c->parent = this;
        operation_metric.push_back(c);
        return c;
    }

    if(child_yang_name == "operation-schedule")
    {
        if(operation_schedule == nullptr)
        {
            operation_schedule = std::make_shared<Sla::Protocols::Ethernet::Operations::Operation_::ProfileOptions::OperationSchedule>();
        }
        return operation_schedule;
    }

    if(child_yang_name == "packet-padding")
    {
        if(packet_padding == nullptr)
        {
            packet_padding = std::make_shared<Sla::Protocols::Ethernet::Operations::Operation_::ProfileOptions::PacketPadding>();
        }
        return packet_padding;
    }

    if(child_yang_name == "priority")
    {
        if(priority == nullptr)
        {
            priority = std::make_shared<Sla::Protocols::Ethernet::Operations::Operation_::ProfileOptions::Priority>();
        }
        return priority;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Sla::Protocols::Ethernet::Operations::Operation_::ProfileOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : operation_metric)
    {
        children[c->get_segment_path()] = c;
    }

    if(operation_schedule != nullptr)
    {
        children["operation-schedule"] = operation_schedule;
    }

    if(packet_padding != nullptr)
    {
        children["packet-padding"] = packet_padding;
    }

    if(priority != nullptr)
    {
        children["priority"] = priority;
    }

    return children;
}

void Sla::Protocols::Ethernet::Operations::Operation_::ProfileOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bursts-per-probe")
    {
        bursts_per_probe = value;
        bursts_per_probe.value_namespace = name_space;
        bursts_per_probe.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flr-calculation-interval")
    {
        flr_calculation_interval = value;
        flr_calculation_interval.value_namespace = name_space;
        flr_calculation_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inter-burst-interval")
    {
        inter_burst_interval = value;
        inter_burst_interval.value_namespace = name_space;
        inter_burst_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inter-packet-interval")
    {
        inter_packet_interval = value;
        inter_packet_interval.value_namespace = name_space;
        inter_packet_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packets-per-burst")
    {
        packets_per_burst = value;
        packets_per_burst.value_namespace = name_space;
        packets_per_burst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "probe-type")
    {
        probe_type = value;
        probe_type.value_namespace = name_space;
        probe_type.value_namespace_prefix = name_space_prefix;
    }
}

void Sla::Protocols::Ethernet::Operations::Operation_::ProfileOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bursts-per-probe")
    {
        bursts_per_probe.yfilter = yfilter;
    }
    if(value_path == "flr-calculation-interval")
    {
        flr_calculation_interval.yfilter = yfilter;
    }
    if(value_path == "inter-burst-interval")
    {
        inter_burst_interval.yfilter = yfilter;
    }
    if(value_path == "inter-packet-interval")
    {
        inter_packet_interval.yfilter = yfilter;
    }
    if(value_path == "packets-per-burst")
    {
        packets_per_burst.yfilter = yfilter;
    }
    if(value_path == "probe-type")
    {
        probe_type.yfilter = yfilter;
    }
}

bool Sla::Protocols::Ethernet::Operations::Operation_::ProfileOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "operation-metric" || name == "operation-schedule" || name == "packet-padding" || name == "priority" || name == "bursts-per-probe" || name == "flr-calculation-interval" || name == "inter-burst-interval" || name == "inter-packet-interval" || name == "packets-per-burst" || name == "probe-type")
        return true;
    return false;
}

Sla::Protocols::Ethernet::Operations::Operation_::ProfileOptions::PacketPadding::PacketPadding()
    :
    packet_pad_size{YType::uint16, "packet-pad-size"},
    test_pattern_pad_hex_string{YType::uint32, "test-pattern-pad-hex-string"},
    test_pattern_pad_scheme{YType::enumeration, "test-pattern-pad-scheme"}
{
    yang_name = "packet-padding"; yang_parent_name = "profile-options";
}

Sla::Protocols::Ethernet::Operations::Operation_::ProfileOptions::PacketPadding::~PacketPadding()
{
}

bool Sla::Protocols::Ethernet::Operations::Operation_::ProfileOptions::PacketPadding::has_data() const
{
    return packet_pad_size.is_set
	|| test_pattern_pad_hex_string.is_set
	|| test_pattern_pad_scheme.is_set;
}

bool Sla::Protocols::Ethernet::Operations::Operation_::ProfileOptions::PacketPadding::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packet_pad_size.yfilter)
	|| ydk::is_set(test_pattern_pad_hex_string.yfilter)
	|| ydk::is_set(test_pattern_pad_scheme.yfilter);
}

std::string Sla::Protocols::Ethernet::Operations::Operation_::ProfileOptions::PacketPadding::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "packet-padding";

    return path_buffer.str();

}

const EntityPath Sla::Protocols::Ethernet::Operations::Operation_::ProfileOptions::PacketPadding::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-sla-oper:sla/protocols/Cisco-IOS-XR-ethernet-cfm-oper:ethernet/operations/operation/profile-options/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packet_pad_size.is_set || is_set(packet_pad_size.yfilter)) leaf_name_data.push_back(packet_pad_size.get_name_leafdata());
    if (test_pattern_pad_hex_string.is_set || is_set(test_pattern_pad_hex_string.yfilter)) leaf_name_data.push_back(test_pattern_pad_hex_string.get_name_leafdata());
    if (test_pattern_pad_scheme.is_set || is_set(test_pattern_pad_scheme.yfilter)) leaf_name_data.push_back(test_pattern_pad_scheme.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Sla::Protocols::Ethernet::Operations::Operation_::ProfileOptions::PacketPadding::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Sla::Protocols::Ethernet::Operations::Operation_::ProfileOptions::PacketPadding::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Sla::Protocols::Ethernet::Operations::Operation_::ProfileOptions::PacketPadding::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packet-pad-size")
    {
        packet_pad_size = value;
        packet_pad_size.value_namespace = name_space;
        packet_pad_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "test-pattern-pad-hex-string")
    {
        test_pattern_pad_hex_string = value;
        test_pattern_pad_hex_string.value_namespace = name_space;
        test_pattern_pad_hex_string.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "test-pattern-pad-scheme")
    {
        test_pattern_pad_scheme = value;
        test_pattern_pad_scheme.value_namespace = name_space;
        test_pattern_pad_scheme.value_namespace_prefix = name_space_prefix;
    }
}

void Sla::Protocols::Ethernet::Operations::Operation_::ProfileOptions::PacketPadding::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packet-pad-size")
    {
        packet_pad_size.yfilter = yfilter;
    }
    if(value_path == "test-pattern-pad-hex-string")
    {
        test_pattern_pad_hex_string.yfilter = yfilter;
    }
    if(value_path == "test-pattern-pad-scheme")
    {
        test_pattern_pad_scheme.yfilter = yfilter;
    }
}

bool Sla::Protocols::Ethernet::Operations::Operation_::ProfileOptions::PacketPadding::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packet-pad-size" || name == "test-pattern-pad-hex-string" || name == "test-pattern-pad-scheme")
        return true;
    return false;
}

Sla::Protocols::Ethernet::Operations::Operation_::ProfileOptions::Priority::Priority()
    :
    cos{YType::uint8, "cos"},
    priority_type{YType::enumeration, "priority-type"}
{
    yang_name = "priority"; yang_parent_name = "profile-options";
}

Sla::Protocols::Ethernet::Operations::Operation_::ProfileOptions::Priority::~Priority()
{
}

bool Sla::Protocols::Ethernet::Operations::Operation_::ProfileOptions::Priority::has_data() const
{
    return cos.is_set
	|| priority_type.is_set;
}

bool Sla::Protocols::Ethernet::Operations::Operation_::ProfileOptions::Priority::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cos.yfilter)
	|| ydk::is_set(priority_type.yfilter);
}

std::string Sla::Protocols::Ethernet::Operations::Operation_::ProfileOptions::Priority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority";

    return path_buffer.str();

}

const EntityPath Sla::Protocols::Ethernet::Operations::Operation_::ProfileOptions::Priority::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-sla-oper:sla/protocols/Cisco-IOS-XR-ethernet-cfm-oper:ethernet/operations/operation/profile-options/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cos.is_set || is_set(cos.yfilter)) leaf_name_data.push_back(cos.get_name_leafdata());
    if (priority_type.is_set || is_set(priority_type.yfilter)) leaf_name_data.push_back(priority_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Sla::Protocols::Ethernet::Operations::Operation_::ProfileOptions::Priority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Sla::Protocols::Ethernet::Operations::Operation_::ProfileOptions::Priority::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Sla::Protocols::Ethernet::Operations::Operation_::ProfileOptions::Priority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cos")
    {
        cos = value;
        cos.value_namespace = name_space;
        cos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority-type")
    {
        priority_type = value;
        priority_type.value_namespace = name_space;
        priority_type.value_namespace_prefix = name_space_prefix;
    }
}

void Sla::Protocols::Ethernet::Operations::Operation_::ProfileOptions::Priority::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cos")
    {
        cos.yfilter = yfilter;
    }
    if(value_path == "priority-type")
    {
        priority_type.yfilter = yfilter;
    }
}

bool Sla::Protocols::Ethernet::Operations::Operation_::ProfileOptions::Priority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cos" || name == "priority-type")
        return true;
    return false;
}

Sla::Protocols::Ethernet::Operations::Operation_::ProfileOptions::OperationSchedule::OperationSchedule()
    :
    schedule_duration{YType::uint32, "schedule-duration"},
    schedule_interval{YType::uint32, "schedule-interval"},
    start_time{YType::uint32, "start-time"},
    start_time_configured{YType::boolean, "start-time-configured"}
{
    yang_name = "operation-schedule"; yang_parent_name = "profile-options";
}

Sla::Protocols::Ethernet::Operations::Operation_::ProfileOptions::OperationSchedule::~OperationSchedule()
{
}

bool Sla::Protocols::Ethernet::Operations::Operation_::ProfileOptions::OperationSchedule::has_data() const
{
    return schedule_duration.is_set
	|| schedule_interval.is_set
	|| start_time.is_set
	|| start_time_configured.is_set;
}

bool Sla::Protocols::Ethernet::Operations::Operation_::ProfileOptions::OperationSchedule::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(schedule_duration.yfilter)
	|| ydk::is_set(schedule_interval.yfilter)
	|| ydk::is_set(start_time.yfilter)
	|| ydk::is_set(start_time_configured.yfilter);
}

std::string Sla::Protocols::Ethernet::Operations::Operation_::ProfileOptions::OperationSchedule::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "operation-schedule";

    return path_buffer.str();

}

const EntityPath Sla::Protocols::Ethernet::Operations::Operation_::ProfileOptions::OperationSchedule::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-sla-oper:sla/protocols/Cisco-IOS-XR-ethernet-cfm-oper:ethernet/operations/operation/profile-options/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (schedule_duration.is_set || is_set(schedule_duration.yfilter)) leaf_name_data.push_back(schedule_duration.get_name_leafdata());
    if (schedule_interval.is_set || is_set(schedule_interval.yfilter)) leaf_name_data.push_back(schedule_interval.get_name_leafdata());
    if (start_time.is_set || is_set(start_time.yfilter)) leaf_name_data.push_back(start_time.get_name_leafdata());
    if (start_time_configured.is_set || is_set(start_time_configured.yfilter)) leaf_name_data.push_back(start_time_configured.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Sla::Protocols::Ethernet::Operations::Operation_::ProfileOptions::OperationSchedule::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Sla::Protocols::Ethernet::Operations::Operation_::ProfileOptions::OperationSchedule::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Sla::Protocols::Ethernet::Operations::Operation_::ProfileOptions::OperationSchedule::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "schedule-duration")
    {
        schedule_duration = value;
        schedule_duration.value_namespace = name_space;
        schedule_duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "schedule-interval")
    {
        schedule_interval = value;
        schedule_interval.value_namespace = name_space;
        schedule_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-time")
    {
        start_time = value;
        start_time.value_namespace = name_space;
        start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-time-configured")
    {
        start_time_configured = value;
        start_time_configured.value_namespace = name_space;
        start_time_configured.value_namespace_prefix = name_space_prefix;
    }
}

void Sla::Protocols::Ethernet::Operations::Operation_::ProfileOptions::OperationSchedule::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "schedule-duration")
    {
        schedule_duration.yfilter = yfilter;
    }
    if(value_path == "schedule-interval")
    {
        schedule_interval.yfilter = yfilter;
    }
    if(value_path == "start-time")
    {
        start_time.yfilter = yfilter;
    }
    if(value_path == "start-time-configured")
    {
        start_time_configured.yfilter = yfilter;
    }
}

bool Sla::Protocols::Ethernet::Operations::Operation_::ProfileOptions::OperationSchedule::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "schedule-duration" || name == "schedule-interval" || name == "start-time" || name == "start-time-configured")
        return true;
    return false;
}

Sla::Protocols::Ethernet::Operations::Operation_::ProfileOptions::OperationMetric::OperationMetric()
    :
    current_buckets_archive{YType::uint32, "current-buckets-archive"}
    	,
    metric_config(std::make_shared<Sla::Protocols::Ethernet::Operations::Operation_::ProfileOptions::OperationMetric::MetricConfig>())
{
    metric_config->parent = this;

    yang_name = "operation-metric"; yang_parent_name = "profile-options";
}

Sla::Protocols::Ethernet::Operations::Operation_::ProfileOptions::OperationMetric::~OperationMetric()
{
}

bool Sla::Protocols::Ethernet::Operations::Operation_::ProfileOptions::OperationMetric::has_data() const
{
    return current_buckets_archive.is_set
	|| (metric_config !=  nullptr && metric_config->has_data());
}

bool Sla::Protocols::Ethernet::Operations::Operation_::ProfileOptions::OperationMetric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(current_buckets_archive.yfilter)
	|| (metric_config !=  nullptr && metric_config->has_operation());
}

std::string Sla::Protocols::Ethernet::Operations::Operation_::ProfileOptions::OperationMetric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "operation-metric";

    return path_buffer.str();

}

const EntityPath Sla::Protocols::Ethernet::Operations::Operation_::ProfileOptions::OperationMetric::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-sla-oper:sla/protocols/Cisco-IOS-XR-ethernet-cfm-oper:ethernet/operations/operation/profile-options/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (current_buckets_archive.is_set || is_set(current_buckets_archive.yfilter)) leaf_name_data.push_back(current_buckets_archive.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Sla::Protocols::Ethernet::Operations::Operation_::ProfileOptions::OperationMetric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metric-config")
    {
        if(metric_config == nullptr)
        {
            metric_config = std::make_shared<Sla::Protocols::Ethernet::Operations::Operation_::ProfileOptions::OperationMetric::MetricConfig>();
        }
        return metric_config;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Sla::Protocols::Ethernet::Operations::Operation_::ProfileOptions::OperationMetric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(metric_config != nullptr)
    {
        children["metric-config"] = metric_config;
    }

    return children;
}

void Sla::Protocols::Ethernet::Operations::Operation_::ProfileOptions::OperationMetric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "current-buckets-archive")
    {
        current_buckets_archive = value;
        current_buckets_archive.value_namespace = name_space;
        current_buckets_archive.value_namespace_prefix = name_space_prefix;
    }
}

void Sla::Protocols::Ethernet::Operations::Operation_::ProfileOptions::OperationMetric::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "current-buckets-archive")
    {
        current_buckets_archive.yfilter = yfilter;
    }
}

bool Sla::Protocols::Ethernet::Operations::Operation_::ProfileOptions::OperationMetric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric-config" || name == "current-buckets-archive")
        return true;
    return false;
}

Sla::Protocols::Ethernet::Operations::Operation_::ProfileOptions::OperationMetric::MetricConfig::MetricConfig()
    :
    bins_count{YType::uint16, "bins-count"},
    bins_width{YType::uint16, "bins-width"},
    bucket_size{YType::uint8, "bucket-size"},
    bucket_size_unit{YType::enumeration, "bucket-size-unit"},
    buckets_archive{YType::uint32, "buckets-archive"},
    metric_type{YType::enumeration, "metric-type"}
{
    yang_name = "metric-config"; yang_parent_name = "operation-metric";
}

Sla::Protocols::Ethernet::Operations::Operation_::ProfileOptions::OperationMetric::MetricConfig::~MetricConfig()
{
}

bool Sla::Protocols::Ethernet::Operations::Operation_::ProfileOptions::OperationMetric::MetricConfig::has_data() const
{
    return bins_count.is_set
	|| bins_width.is_set
	|| bucket_size.is_set
	|| bucket_size_unit.is_set
	|| buckets_archive.is_set
	|| metric_type.is_set;
}

bool Sla::Protocols::Ethernet::Operations::Operation_::ProfileOptions::OperationMetric::MetricConfig::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bins_count.yfilter)
	|| ydk::is_set(bins_width.yfilter)
	|| ydk::is_set(bucket_size.yfilter)
	|| ydk::is_set(bucket_size_unit.yfilter)
	|| ydk::is_set(buckets_archive.yfilter)
	|| ydk::is_set(metric_type.yfilter);
}

std::string Sla::Protocols::Ethernet::Operations::Operation_::ProfileOptions::OperationMetric::MetricConfig::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric-config";

    return path_buffer.str();

}

const EntityPath Sla::Protocols::Ethernet::Operations::Operation_::ProfileOptions::OperationMetric::MetricConfig::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-sla-oper:sla/protocols/Cisco-IOS-XR-ethernet-cfm-oper:ethernet/operations/operation/profile-options/operation-metric/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bins_count.is_set || is_set(bins_count.yfilter)) leaf_name_data.push_back(bins_count.get_name_leafdata());
    if (bins_width.is_set || is_set(bins_width.yfilter)) leaf_name_data.push_back(bins_width.get_name_leafdata());
    if (bucket_size.is_set || is_set(bucket_size.yfilter)) leaf_name_data.push_back(bucket_size.get_name_leafdata());
    if (bucket_size_unit.is_set || is_set(bucket_size_unit.yfilter)) leaf_name_data.push_back(bucket_size_unit.get_name_leafdata());
    if (buckets_archive.is_set || is_set(buckets_archive.yfilter)) leaf_name_data.push_back(buckets_archive.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Sla::Protocols::Ethernet::Operations::Operation_::ProfileOptions::OperationMetric::MetricConfig::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Sla::Protocols::Ethernet::Operations::Operation_::ProfileOptions::OperationMetric::MetricConfig::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Sla::Protocols::Ethernet::Operations::Operation_::ProfileOptions::OperationMetric::MetricConfig::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bins-count")
    {
        bins_count = value;
        bins_count.value_namespace = name_space;
        bins_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bins-width")
    {
        bins_width = value;
        bins_width.value_namespace = name_space;
        bins_width.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bucket-size")
    {
        bucket_size = value;
        bucket_size.value_namespace = name_space;
        bucket_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bucket-size-unit")
    {
        bucket_size_unit = value;
        bucket_size_unit.value_namespace = name_space;
        bucket_size_unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "buckets-archive")
    {
        buckets_archive = value;
        buckets_archive.value_namespace = name_space;
        buckets_archive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
}

void Sla::Protocols::Ethernet::Operations::Operation_::ProfileOptions::OperationMetric::MetricConfig::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bins-count")
    {
        bins_count.yfilter = yfilter;
    }
    if(value_path == "bins-width")
    {
        bins_width.yfilter = yfilter;
    }
    if(value_path == "bucket-size")
    {
        bucket_size.yfilter = yfilter;
    }
    if(value_path == "bucket-size-unit")
    {
        bucket_size_unit.yfilter = yfilter;
    }
    if(value_path == "buckets-archive")
    {
        buckets_archive.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
}

bool Sla::Protocols::Ethernet::Operations::Operation_::ProfileOptions::OperationMetric::MetricConfig::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bins-count" || name == "bins-width" || name == "bucket-size" || name == "bucket-size-unit" || name == "buckets-archive" || name == "metric-type")
        return true;
    return false;
}

Sla::Protocols::Ethernet::Operations::Operation_::SpecificOptions::SpecificOptions()
    :
    oper_type{YType::enumeration, "oper-type"}
    	,
    configured_operation_options(std::make_shared<Sla::Protocols::Ethernet::Operations::Operation_::SpecificOptions::ConfiguredOperationOptions>())
	,ondemand_operation_options(std::make_shared<Sla::Protocols::Ethernet::Operations::Operation_::SpecificOptions::OndemandOperationOptions>())
{
    configured_operation_options->parent = this;

    ondemand_operation_options->parent = this;

    yang_name = "specific-options"; yang_parent_name = "operation";
}

Sla::Protocols::Ethernet::Operations::Operation_::SpecificOptions::~SpecificOptions()
{
}

bool Sla::Protocols::Ethernet::Operations::Operation_::SpecificOptions::has_data() const
{
    return oper_type.is_set
	|| (configured_operation_options !=  nullptr && configured_operation_options->has_data())
	|| (ondemand_operation_options !=  nullptr && ondemand_operation_options->has_data());
}

bool Sla::Protocols::Ethernet::Operations::Operation_::SpecificOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(oper_type.yfilter)
	|| (configured_operation_options !=  nullptr && configured_operation_options->has_operation())
	|| (ondemand_operation_options !=  nullptr && ondemand_operation_options->has_operation());
}

std::string Sla::Protocols::Ethernet::Operations::Operation_::SpecificOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "specific-options";

    return path_buffer.str();

}

const EntityPath Sla::Protocols::Ethernet::Operations::Operation_::SpecificOptions::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-sla-oper:sla/protocols/Cisco-IOS-XR-ethernet-cfm-oper:ethernet/operations/operation/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (oper_type.is_set || is_set(oper_type.yfilter)) leaf_name_data.push_back(oper_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Sla::Protocols::Ethernet::Operations::Operation_::SpecificOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "configured-operation-options")
    {
        if(configured_operation_options == nullptr)
        {
            configured_operation_options = std::make_shared<Sla::Protocols::Ethernet::Operations::Operation_::SpecificOptions::ConfiguredOperationOptions>();
        }
        return configured_operation_options;
    }

    if(child_yang_name == "ondemand-operation-options")
    {
        if(ondemand_operation_options == nullptr)
        {
            ondemand_operation_options = std::make_shared<Sla::Protocols::Ethernet::Operations::Operation_::SpecificOptions::OndemandOperationOptions>();
        }
        return ondemand_operation_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Sla::Protocols::Ethernet::Operations::Operation_::SpecificOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(configured_operation_options != nullptr)
    {
        children["configured-operation-options"] = configured_operation_options;
    }

    if(ondemand_operation_options != nullptr)
    {
        children["ondemand-operation-options"] = ondemand_operation_options;
    }

    return children;
}

void Sla::Protocols::Ethernet::Operations::Operation_::SpecificOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "oper-type")
    {
        oper_type = value;
        oper_type.value_namespace = name_space;
        oper_type.value_namespace_prefix = name_space_prefix;
    }
}

void Sla::Protocols::Ethernet::Operations::Operation_::SpecificOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "oper-type")
    {
        oper_type.yfilter = yfilter;
    }
}

bool Sla::Protocols::Ethernet::Operations::Operation_::SpecificOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "configured-operation-options" || name == "ondemand-operation-options" || name == "oper-type")
        return true;
    return false;
}

Sla::Protocols::Ethernet::Operations::Operation_::SpecificOptions::ConfiguredOperationOptions::ConfiguredOperationOptions()
    :
    profile_name{YType::str, "profile-name"}
{
    yang_name = "configured-operation-options"; yang_parent_name = "specific-options";
}

Sla::Protocols::Ethernet::Operations::Operation_::SpecificOptions::ConfiguredOperationOptions::~ConfiguredOperationOptions()
{
}

bool Sla::Protocols::Ethernet::Operations::Operation_::SpecificOptions::ConfiguredOperationOptions::has_data() const
{
    return profile_name.is_set;
}

bool Sla::Protocols::Ethernet::Operations::Operation_::SpecificOptions::ConfiguredOperationOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(profile_name.yfilter);
}

std::string Sla::Protocols::Ethernet::Operations::Operation_::SpecificOptions::ConfiguredOperationOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "configured-operation-options";

    return path_buffer.str();

}

const EntityPath Sla::Protocols::Ethernet::Operations::Operation_::SpecificOptions::ConfiguredOperationOptions::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-sla-oper:sla/protocols/Cisco-IOS-XR-ethernet-cfm-oper:ethernet/operations/operation/specific-options/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (profile_name.is_set || is_set(profile_name.yfilter)) leaf_name_data.push_back(profile_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Sla::Protocols::Ethernet::Operations::Operation_::SpecificOptions::ConfiguredOperationOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Sla::Protocols::Ethernet::Operations::Operation_::SpecificOptions::ConfiguredOperationOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Sla::Protocols::Ethernet::Operations::Operation_::SpecificOptions::ConfiguredOperationOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "profile-name")
    {
        profile_name = value;
        profile_name.value_namespace = name_space;
        profile_name.value_namespace_prefix = name_space_prefix;
    }
}

void Sla::Protocols::Ethernet::Operations::Operation_::SpecificOptions::ConfiguredOperationOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "profile-name")
    {
        profile_name.yfilter = yfilter;
    }
}

bool Sla::Protocols::Ethernet::Operations::Operation_::SpecificOptions::ConfiguredOperationOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "profile-name")
        return true;
    return false;
}

Sla::Protocols::Ethernet::Operations::Operation_::SpecificOptions::OndemandOperationOptions::OndemandOperationOptions()
    :
    ondemand_operation_id{YType::uint32, "ondemand-operation-id"},
    probe_count{YType::uint8, "probe-count"}
{
    yang_name = "ondemand-operation-options"; yang_parent_name = "specific-options";
}

Sla::Protocols::Ethernet::Operations::Operation_::SpecificOptions::OndemandOperationOptions::~OndemandOperationOptions()
{
}

bool Sla::Protocols::Ethernet::Operations::Operation_::SpecificOptions::OndemandOperationOptions::has_data() const
{
    return ondemand_operation_id.is_set
	|| probe_count.is_set;
}

bool Sla::Protocols::Ethernet::Operations::Operation_::SpecificOptions::OndemandOperationOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ondemand_operation_id.yfilter)
	|| ydk::is_set(probe_count.yfilter);
}

std::string Sla::Protocols::Ethernet::Operations::Operation_::SpecificOptions::OndemandOperationOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ondemand-operation-options";

    return path_buffer.str();

}

const EntityPath Sla::Protocols::Ethernet::Operations::Operation_::SpecificOptions::OndemandOperationOptions::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-sla-oper:sla/protocols/Cisco-IOS-XR-ethernet-cfm-oper:ethernet/operations/operation/specific-options/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ondemand_operation_id.is_set || is_set(ondemand_operation_id.yfilter)) leaf_name_data.push_back(ondemand_operation_id.get_name_leafdata());
    if (probe_count.is_set || is_set(probe_count.yfilter)) leaf_name_data.push_back(probe_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Sla::Protocols::Ethernet::Operations::Operation_::SpecificOptions::OndemandOperationOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Sla::Protocols::Ethernet::Operations::Operation_::SpecificOptions::OndemandOperationOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Sla::Protocols::Ethernet::Operations::Operation_::SpecificOptions::OndemandOperationOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ondemand-operation-id")
    {
        ondemand_operation_id = value;
        ondemand_operation_id.value_namespace = name_space;
        ondemand_operation_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "probe-count")
    {
        probe_count = value;
        probe_count.value_namespace = name_space;
        probe_count.value_namespace_prefix = name_space_prefix;
    }
}

void Sla::Protocols::Ethernet::Operations::Operation_::SpecificOptions::OndemandOperationOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ondemand-operation-id")
    {
        ondemand_operation_id.yfilter = yfilter;
    }
    if(value_path == "probe-count")
    {
        probe_count.yfilter = yfilter;
    }
}

bool Sla::Protocols::Ethernet::Operations::Operation_::SpecificOptions::OndemandOperationOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ondemand-operation-id" || name == "probe-count")
        return true;
    return false;
}

Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistoricals()
{
    yang_name = "statistics-historicals"; yang_parent_name = "ethernet";
}

Sla::Protocols::Ethernet::StatisticsHistoricals::~StatisticsHistoricals()
{
}

bool Sla::Protocols::Ethernet::StatisticsHistoricals::has_data() const
{
    for (std::size_t index=0; index<statistics_historical.size(); index++)
    {
        if(statistics_historical[index]->has_data())
            return true;
    }
    return false;
}

bool Sla::Protocols::Ethernet::StatisticsHistoricals::has_operation() const
{
    for (std::size_t index=0; index<statistics_historical.size(); index++)
    {
        if(statistics_historical[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Sla::Protocols::Ethernet::StatisticsHistoricals::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics-historicals";

    return path_buffer.str();

}

const EntityPath Sla::Protocols::Ethernet::StatisticsHistoricals::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-sla-oper:sla/protocols/Cisco-IOS-XR-ethernet-cfm-oper:ethernet/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Sla::Protocols::Ethernet::StatisticsHistoricals::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "statistics-historical")
    {
        for(auto const & c : statistics_historical)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical>();
        c->parent = this;
        statistics_historical.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Sla::Protocols::Ethernet::StatisticsHistoricals::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : statistics_historical)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Sla::Protocols::Ethernet::StatisticsHistoricals::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Sla::Protocols::Ethernet::StatisticsHistoricals::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Sla::Protocols::Ethernet::StatisticsHistoricals::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "statistics-historical")
        return true;
    return false;
}

Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::StatisticsHistorical()
    :
    display_long{YType::str, "display-long"},
    display_short{YType::str, "display-short"},
    domain_name{YType::str, "domain-name"},
    flr_calculation_interval{YType::uint32, "flr-calculation-interval"},
    interface_name{YType::str, "interface-name"},
    mac_address{YType::str, "mac-address"},
    mep_id{YType::uint32, "mep-id"},
    probe_type{YType::str, "probe-type"},
    profile_name{YType::str, "profile-name"}
    	,
    operation_schedule(std::make_shared<Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationSchedule>())
	,specific_options(std::make_shared<Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::SpecificOptions>())
{
    operation_schedule->parent = this;

    specific_options->parent = this;

    yang_name = "statistics-historical"; yang_parent_name = "statistics-historicals";
}

Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::~StatisticsHistorical()
{
}

bool Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::has_data() const
{
    for (std::size_t index=0; index<operation_metric.size(); index++)
    {
        if(operation_metric[index]->has_data())
            return true;
    }
    return display_long.is_set
	|| display_short.is_set
	|| domain_name.is_set
	|| flr_calculation_interval.is_set
	|| interface_name.is_set
	|| mac_address.is_set
	|| mep_id.is_set
	|| probe_type.is_set
	|| profile_name.is_set
	|| (operation_schedule !=  nullptr && operation_schedule->has_data())
	|| (specific_options !=  nullptr && specific_options->has_data());
}

bool Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::has_operation() const
{
    for (std::size_t index=0; index<operation_metric.size(); index++)
    {
        if(operation_metric[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(display_long.yfilter)
	|| ydk::is_set(display_short.yfilter)
	|| ydk::is_set(domain_name.yfilter)
	|| ydk::is_set(flr_calculation_interval.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(mep_id.yfilter)
	|| ydk::is_set(probe_type.yfilter)
	|| ydk::is_set(profile_name.yfilter)
	|| (operation_schedule !=  nullptr && operation_schedule->has_operation())
	|| (specific_options !=  nullptr && specific_options->has_operation());
}

std::string Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics-historical";

    return path_buffer.str();

}

const EntityPath Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-sla-oper:sla/protocols/Cisco-IOS-XR-ethernet-cfm-oper:ethernet/statistics-historicals/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (display_long.is_set || is_set(display_long.yfilter)) leaf_name_data.push_back(display_long.get_name_leafdata());
    if (display_short.is_set || is_set(display_short.yfilter)) leaf_name_data.push_back(display_short.get_name_leafdata());
    if (domain_name.is_set || is_set(domain_name.yfilter)) leaf_name_data.push_back(domain_name.get_name_leafdata());
    if (flr_calculation_interval.is_set || is_set(flr_calculation_interval.yfilter)) leaf_name_data.push_back(flr_calculation_interval.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (mep_id.is_set || is_set(mep_id.yfilter)) leaf_name_data.push_back(mep_id.get_name_leafdata());
    if (probe_type.is_set || is_set(probe_type.yfilter)) leaf_name_data.push_back(probe_type.get_name_leafdata());
    if (profile_name.is_set || is_set(profile_name.yfilter)) leaf_name_data.push_back(profile_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "operation-metric")
    {
        for(auto const & c : operation_metric)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationMetric>();
        c->parent = this;
        operation_metric.push_back(c);
        return c;
    }

    if(child_yang_name == "operation-schedule")
    {
        if(operation_schedule == nullptr)
        {
            operation_schedule = std::make_shared<Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationSchedule>();
        }
        return operation_schedule;
    }

    if(child_yang_name == "specific-options")
    {
        if(specific_options == nullptr)
        {
            specific_options = std::make_shared<Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::SpecificOptions>();
        }
        return specific_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : operation_metric)
    {
        children[c->get_segment_path()] = c;
    }

    if(operation_schedule != nullptr)
    {
        children["operation-schedule"] = operation_schedule;
    }

    if(specific_options != nullptr)
    {
        children["specific-options"] = specific_options;
    }

    return children;
}

void Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "display-long")
    {
        display_long = value;
        display_long.value_namespace = name_space;
        display_long.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "display-short")
    {
        display_short = value;
        display_short.value_namespace = name_space;
        display_short.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "domain-name")
    {
        domain_name = value;
        domain_name.value_namespace = name_space;
        domain_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flr-calculation-interval")
    {
        flr_calculation_interval = value;
        flr_calculation_interval.value_namespace = name_space;
        flr_calculation_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mep-id")
    {
        mep_id = value;
        mep_id.value_namespace = name_space;
        mep_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "probe-type")
    {
        probe_type = value;
        probe_type.value_namespace = name_space;
        probe_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "profile-name")
    {
        profile_name = value;
        profile_name.value_namespace = name_space;
        profile_name.value_namespace_prefix = name_space_prefix;
    }
}

void Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "display-long")
    {
        display_long.yfilter = yfilter;
    }
    if(value_path == "display-short")
    {
        display_short.yfilter = yfilter;
    }
    if(value_path == "domain-name")
    {
        domain_name.yfilter = yfilter;
    }
    if(value_path == "flr-calculation-interval")
    {
        flr_calculation_interval.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "mep-id")
    {
        mep_id.yfilter = yfilter;
    }
    if(value_path == "probe-type")
    {
        probe_type.yfilter = yfilter;
    }
    if(value_path == "profile-name")
    {
        profile_name.yfilter = yfilter;
    }
}

bool Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "operation-metric" || name == "operation-schedule" || name == "specific-options" || name == "display-long" || name == "display-short" || name == "domain-name" || name == "flr-calculation-interval" || name == "interface-name" || name == "mac-address" || name == "mep-id" || name == "probe-type" || name == "profile-name")
        return true;
    return false;
}

Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::SpecificOptions::SpecificOptions()
    :
    oper_type{YType::enumeration, "oper-type"}
    	,
    configured_operation_options(std::make_shared<Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::SpecificOptions::ConfiguredOperationOptions>())
	,ondemand_operation_options(std::make_shared<Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::SpecificOptions::OndemandOperationOptions>())
{
    configured_operation_options->parent = this;

    ondemand_operation_options->parent = this;

    yang_name = "specific-options"; yang_parent_name = "statistics-historical";
}

Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::SpecificOptions::~SpecificOptions()
{
}

bool Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::SpecificOptions::has_data() const
{
    return oper_type.is_set
	|| (configured_operation_options !=  nullptr && configured_operation_options->has_data())
	|| (ondemand_operation_options !=  nullptr && ondemand_operation_options->has_data());
}

bool Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::SpecificOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(oper_type.yfilter)
	|| (configured_operation_options !=  nullptr && configured_operation_options->has_operation())
	|| (ondemand_operation_options !=  nullptr && ondemand_operation_options->has_operation());
}

std::string Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::SpecificOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "specific-options";

    return path_buffer.str();

}

const EntityPath Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::SpecificOptions::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-sla-oper:sla/protocols/Cisco-IOS-XR-ethernet-cfm-oper:ethernet/statistics-historicals/statistics-historical/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (oper_type.is_set || is_set(oper_type.yfilter)) leaf_name_data.push_back(oper_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::SpecificOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "configured-operation-options")
    {
        if(configured_operation_options == nullptr)
        {
            configured_operation_options = std::make_shared<Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::SpecificOptions::ConfiguredOperationOptions>();
        }
        return configured_operation_options;
    }

    if(child_yang_name == "ondemand-operation-options")
    {
        if(ondemand_operation_options == nullptr)
        {
            ondemand_operation_options = std::make_shared<Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::SpecificOptions::OndemandOperationOptions>();
        }
        return ondemand_operation_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::SpecificOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(configured_operation_options != nullptr)
    {
        children["configured-operation-options"] = configured_operation_options;
    }

    if(ondemand_operation_options != nullptr)
    {
        children["ondemand-operation-options"] = ondemand_operation_options;
    }

    return children;
}

void Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::SpecificOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "oper-type")
    {
        oper_type = value;
        oper_type.value_namespace = name_space;
        oper_type.value_namespace_prefix = name_space_prefix;
    }
}

void Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::SpecificOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "oper-type")
    {
        oper_type.yfilter = yfilter;
    }
}

bool Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::SpecificOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "configured-operation-options" || name == "ondemand-operation-options" || name == "oper-type")
        return true;
    return false;
}

Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::SpecificOptions::ConfiguredOperationOptions::ConfiguredOperationOptions()
    :
    profile_name{YType::str, "profile-name"}
{
    yang_name = "configured-operation-options"; yang_parent_name = "specific-options";
}

Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::SpecificOptions::ConfiguredOperationOptions::~ConfiguredOperationOptions()
{
}

bool Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::SpecificOptions::ConfiguredOperationOptions::has_data() const
{
    return profile_name.is_set;
}

bool Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::SpecificOptions::ConfiguredOperationOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(profile_name.yfilter);
}

std::string Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::SpecificOptions::ConfiguredOperationOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "configured-operation-options";

    return path_buffer.str();

}

const EntityPath Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::SpecificOptions::ConfiguredOperationOptions::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-sla-oper:sla/protocols/Cisco-IOS-XR-ethernet-cfm-oper:ethernet/statistics-historicals/statistics-historical/specific-options/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (profile_name.is_set || is_set(profile_name.yfilter)) leaf_name_data.push_back(profile_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::SpecificOptions::ConfiguredOperationOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::SpecificOptions::ConfiguredOperationOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::SpecificOptions::ConfiguredOperationOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "profile-name")
    {
        profile_name = value;
        profile_name.value_namespace = name_space;
        profile_name.value_namespace_prefix = name_space_prefix;
    }
}

void Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::SpecificOptions::ConfiguredOperationOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "profile-name")
    {
        profile_name.yfilter = yfilter;
    }
}

bool Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::SpecificOptions::ConfiguredOperationOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "profile-name")
        return true;
    return false;
}

Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::SpecificOptions::OndemandOperationOptions::OndemandOperationOptions()
    :
    ondemand_operation_id{YType::uint32, "ondemand-operation-id"},
    probe_count{YType::uint8, "probe-count"}
{
    yang_name = "ondemand-operation-options"; yang_parent_name = "specific-options";
}

Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::SpecificOptions::OndemandOperationOptions::~OndemandOperationOptions()
{
}

bool Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::SpecificOptions::OndemandOperationOptions::has_data() const
{
    return ondemand_operation_id.is_set
	|| probe_count.is_set;
}

bool Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::SpecificOptions::OndemandOperationOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ondemand_operation_id.yfilter)
	|| ydk::is_set(probe_count.yfilter);
}

std::string Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::SpecificOptions::OndemandOperationOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ondemand-operation-options";

    return path_buffer.str();

}

const EntityPath Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::SpecificOptions::OndemandOperationOptions::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-sla-oper:sla/protocols/Cisco-IOS-XR-ethernet-cfm-oper:ethernet/statistics-historicals/statistics-historical/specific-options/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ondemand_operation_id.is_set || is_set(ondemand_operation_id.yfilter)) leaf_name_data.push_back(ondemand_operation_id.get_name_leafdata());
    if (probe_count.is_set || is_set(probe_count.yfilter)) leaf_name_data.push_back(probe_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::SpecificOptions::OndemandOperationOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::SpecificOptions::OndemandOperationOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::SpecificOptions::OndemandOperationOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ondemand-operation-id")
    {
        ondemand_operation_id = value;
        ondemand_operation_id.value_namespace = name_space;
        ondemand_operation_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "probe-count")
    {
        probe_count = value;
        probe_count.value_namespace = name_space;
        probe_count.value_namespace_prefix = name_space_prefix;
    }
}

void Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::SpecificOptions::OndemandOperationOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ondemand-operation-id")
    {
        ondemand_operation_id.yfilter = yfilter;
    }
    if(value_path == "probe-count")
    {
        probe_count.yfilter = yfilter;
    }
}

bool Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::SpecificOptions::OndemandOperationOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ondemand-operation-id" || name == "probe-count")
        return true;
    return false;
}

Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationSchedule::OperationSchedule()
    :
    schedule_duration{YType::uint32, "schedule-duration"},
    schedule_interval{YType::uint32, "schedule-interval"},
    start_time{YType::uint32, "start-time"},
    start_time_configured{YType::boolean, "start-time-configured"}
{
    yang_name = "operation-schedule"; yang_parent_name = "statistics-historical";
}

Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationSchedule::~OperationSchedule()
{
}

bool Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationSchedule::has_data() const
{
    return schedule_duration.is_set
	|| schedule_interval.is_set
	|| start_time.is_set
	|| start_time_configured.is_set;
}

bool Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationSchedule::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(schedule_duration.yfilter)
	|| ydk::is_set(schedule_interval.yfilter)
	|| ydk::is_set(start_time.yfilter)
	|| ydk::is_set(start_time_configured.yfilter);
}

std::string Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationSchedule::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "operation-schedule";

    return path_buffer.str();

}

const EntityPath Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationSchedule::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-sla-oper:sla/protocols/Cisco-IOS-XR-ethernet-cfm-oper:ethernet/statistics-historicals/statistics-historical/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (schedule_duration.is_set || is_set(schedule_duration.yfilter)) leaf_name_data.push_back(schedule_duration.get_name_leafdata());
    if (schedule_interval.is_set || is_set(schedule_interval.yfilter)) leaf_name_data.push_back(schedule_interval.get_name_leafdata());
    if (start_time.is_set || is_set(start_time.yfilter)) leaf_name_data.push_back(start_time.get_name_leafdata());
    if (start_time_configured.is_set || is_set(start_time_configured.yfilter)) leaf_name_data.push_back(start_time_configured.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationSchedule::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationSchedule::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationSchedule::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "schedule-duration")
    {
        schedule_duration = value;
        schedule_duration.value_namespace = name_space;
        schedule_duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "schedule-interval")
    {
        schedule_interval = value;
        schedule_interval.value_namespace = name_space;
        schedule_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-time")
    {
        start_time = value;
        start_time.value_namespace = name_space;
        start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-time-configured")
    {
        start_time_configured = value;
        start_time_configured.value_namespace = name_space;
        start_time_configured.value_namespace_prefix = name_space_prefix;
    }
}

void Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationSchedule::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "schedule-duration")
    {
        schedule_duration.yfilter = yfilter;
    }
    if(value_path == "schedule-interval")
    {
        schedule_interval.yfilter = yfilter;
    }
    if(value_path == "start-time")
    {
        start_time.yfilter = yfilter;
    }
    if(value_path == "start-time-configured")
    {
        start_time_configured.yfilter = yfilter;
    }
}

bool Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationSchedule::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "schedule-duration" || name == "schedule-interval" || name == "start-time" || name == "start-time-configured")
        return true;
    return false;
}

Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationMetric::OperationMetric()
    :
    config(std::make_shared<Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationMetric::Config>())
{
    config->parent = this;

    yang_name = "operation-metric"; yang_parent_name = "statistics-historical";
}

Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationMetric::~OperationMetric()
{
}

bool Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationMetric::has_data() const
{
    for (std::size_t index=0; index<bucket.size(); index++)
    {
        if(bucket[index]->has_data())
            return true;
    }
    return (config !=  nullptr && config->has_data());
}

bool Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationMetric::has_operation() const
{
    for (std::size_t index=0; index<bucket.size(); index++)
    {
        if(bucket[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation());
}

std::string Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationMetric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "operation-metric";

    return path_buffer.str();

}

const EntityPath Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationMetric::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-sla-oper:sla/protocols/Cisco-IOS-XR-ethernet-cfm-oper:ethernet/statistics-historicals/statistics-historical/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationMetric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bucket")
    {
        for(auto const & c : bucket)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationMetric::Bucket>();
        c->parent = this;
        bucket.push_back(c);
        return c;
    }

    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationMetric::Config>();
        }
        return config;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationMetric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bucket)
    {
        children[c->get_segment_path()] = c;
    }

    if(config != nullptr)
    {
        children["config"] = config;
    }

    return children;
}

void Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationMetric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationMetric::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationMetric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bucket" || name == "config")
        return true;
    return false;
}

Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationMetric::Config::Config()
    :
    bins_count{YType::uint16, "bins-count"},
    bins_width{YType::uint16, "bins-width"},
    bucket_size{YType::uint8, "bucket-size"},
    bucket_size_unit{YType::enumeration, "bucket-size-unit"},
    buckets_archive{YType::uint32, "buckets-archive"},
    metric_type{YType::enumeration, "metric-type"}
{
    yang_name = "config"; yang_parent_name = "operation-metric";
}

Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationMetric::Config::~Config()
{
}

bool Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationMetric::Config::has_data() const
{
    return bins_count.is_set
	|| bins_width.is_set
	|| bucket_size.is_set
	|| bucket_size_unit.is_set
	|| buckets_archive.is_set
	|| metric_type.is_set;
}

bool Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationMetric::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bins_count.yfilter)
	|| ydk::is_set(bins_width.yfilter)
	|| ydk::is_set(bucket_size.yfilter)
	|| ydk::is_set(bucket_size_unit.yfilter)
	|| ydk::is_set(buckets_archive.yfilter)
	|| ydk::is_set(metric_type.yfilter);
}

std::string Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationMetric::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

const EntityPath Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationMetric::Config::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-sla-oper:sla/protocols/Cisco-IOS-XR-ethernet-cfm-oper:ethernet/statistics-historicals/statistics-historical/operation-metric/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bins_count.is_set || is_set(bins_count.yfilter)) leaf_name_data.push_back(bins_count.get_name_leafdata());
    if (bins_width.is_set || is_set(bins_width.yfilter)) leaf_name_data.push_back(bins_width.get_name_leafdata());
    if (bucket_size.is_set || is_set(bucket_size.yfilter)) leaf_name_data.push_back(bucket_size.get_name_leafdata());
    if (bucket_size_unit.is_set || is_set(bucket_size_unit.yfilter)) leaf_name_data.push_back(bucket_size_unit.get_name_leafdata());
    if (buckets_archive.is_set || is_set(buckets_archive.yfilter)) leaf_name_data.push_back(buckets_archive.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationMetric::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationMetric::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationMetric::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bins-count")
    {
        bins_count = value;
        bins_count.value_namespace = name_space;
        bins_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bins-width")
    {
        bins_width = value;
        bins_width.value_namespace = name_space;
        bins_width.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bucket-size")
    {
        bucket_size = value;
        bucket_size.value_namespace = name_space;
        bucket_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bucket-size-unit")
    {
        bucket_size_unit = value;
        bucket_size_unit.value_namespace = name_space;
        bucket_size_unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "buckets-archive")
    {
        buckets_archive = value;
        buckets_archive.value_namespace = name_space;
        buckets_archive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
}

void Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationMetric::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bins-count")
    {
        bins_count.yfilter = yfilter;
    }
    if(value_path == "bins-width")
    {
        bins_width.yfilter = yfilter;
    }
    if(value_path == "bucket-size")
    {
        bucket_size.yfilter = yfilter;
    }
    if(value_path == "bucket-size-unit")
    {
        bucket_size_unit.yfilter = yfilter;
    }
    if(value_path == "buckets-archive")
    {
        buckets_archive.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
}

bool Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationMetric::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bins-count" || name == "bins-width" || name == "bucket-size" || name == "bucket-size-unit" || name == "buckets-archive" || name == "metric-type")
        return true;
    return false;
}

Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationMetric::Bucket::Bucket()
    :
    average{YType::int32, "average"},
    corrupt{YType::uint32, "corrupt"},
    data_lost_count{YType::uint32, "data-lost-count"},
    data_sent_count{YType::uint32, "data-sent-count"},
    duplicates{YType::uint32, "duplicates"},
    duration{YType::uint32, "duration"},
    lost{YType::uint32, "lost"},
    maximum{YType::int32, "maximum"},
    minimum{YType::int32, "minimum"},
    out_of_order{YType::uint32, "out-of-order"},
    overall_flr{YType::int32, "overall-flr"},
    premature_reason{YType::uint32, "premature-reason"},
    premature_reason_string{YType::str, "premature-reason-string"},
    result_count{YType::uint32, "result-count"},
    sent{YType::uint32, "sent"},
    standard_deviation{YType::int32, "standard-deviation"},
    start_at{YType::uint32, "start-at"},
    suspect_cleared_mid_bucket{YType::boolean, "suspect-cleared-mid-bucket"},
    suspect_clock_drift{YType::boolean, "suspect-clock-drift"},
    suspect_flr_low_packet_count{YType::boolean, "suspect-flr-low-packet-count"},
    suspect_management_latency{YType::boolean, "suspect-management-latency"},
    suspect_memory_allocation_failed{YType::boolean, "suspect-memory-allocation-failed"},
    suspect_misordering{YType::boolean, "suspect-misordering"},
    suspect_multiple_buckets{YType::boolean, "suspect-multiple-buckets"},
    suspect_premature_end{YType::boolean, "suspect-premature-end"},
    suspect_probe_restarted{YType::boolean, "suspect-probe-restarted"},
    suspect_schedule_latency{YType::boolean, "suspect-schedule-latency"},
    suspect_send_fail{YType::boolean, "suspect-send-fail"},
    suspect_start_mid_bucket{YType::boolean, "suspect-start-mid-bucket"},
    time_of_maximum{YType::uint32, "time-of-maximum"},
    time_of_minimum{YType::uint32, "time-of-minimum"}
    	,
    contents(std::make_shared<Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationMetric::Bucket::Contents>())
{
    contents->parent = this;

    yang_name = "bucket"; yang_parent_name = "operation-metric";
}

Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationMetric::Bucket::~Bucket()
{
}

bool Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationMetric::Bucket::has_data() const
{
    return average.is_set
	|| corrupt.is_set
	|| data_lost_count.is_set
	|| data_sent_count.is_set
	|| duplicates.is_set
	|| duration.is_set
	|| lost.is_set
	|| maximum.is_set
	|| minimum.is_set
	|| out_of_order.is_set
	|| overall_flr.is_set
	|| premature_reason.is_set
	|| premature_reason_string.is_set
	|| result_count.is_set
	|| sent.is_set
	|| standard_deviation.is_set
	|| start_at.is_set
	|| suspect_cleared_mid_bucket.is_set
	|| suspect_clock_drift.is_set
	|| suspect_flr_low_packet_count.is_set
	|| suspect_management_latency.is_set
	|| suspect_memory_allocation_failed.is_set
	|| suspect_misordering.is_set
	|| suspect_multiple_buckets.is_set
	|| suspect_premature_end.is_set
	|| suspect_probe_restarted.is_set
	|| suspect_schedule_latency.is_set
	|| suspect_send_fail.is_set
	|| suspect_start_mid_bucket.is_set
	|| time_of_maximum.is_set
	|| time_of_minimum.is_set
	|| (contents !=  nullptr && contents->has_data());
}

bool Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationMetric::Bucket::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(corrupt.yfilter)
	|| ydk::is_set(data_lost_count.yfilter)
	|| ydk::is_set(data_sent_count.yfilter)
	|| ydk::is_set(duplicates.yfilter)
	|| ydk::is_set(duration.yfilter)
	|| ydk::is_set(lost.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(out_of_order.yfilter)
	|| ydk::is_set(overall_flr.yfilter)
	|| ydk::is_set(premature_reason.yfilter)
	|| ydk::is_set(premature_reason_string.yfilter)
	|| ydk::is_set(result_count.yfilter)
	|| ydk::is_set(sent.yfilter)
	|| ydk::is_set(standard_deviation.yfilter)
	|| ydk::is_set(start_at.yfilter)
	|| ydk::is_set(suspect_cleared_mid_bucket.yfilter)
	|| ydk::is_set(suspect_clock_drift.yfilter)
	|| ydk::is_set(suspect_flr_low_packet_count.yfilter)
	|| ydk::is_set(suspect_management_latency.yfilter)
	|| ydk::is_set(suspect_memory_allocation_failed.yfilter)
	|| ydk::is_set(suspect_misordering.yfilter)
	|| ydk::is_set(suspect_multiple_buckets.yfilter)
	|| ydk::is_set(suspect_premature_end.yfilter)
	|| ydk::is_set(suspect_probe_restarted.yfilter)
	|| ydk::is_set(suspect_schedule_latency.yfilter)
	|| ydk::is_set(suspect_send_fail.yfilter)
	|| ydk::is_set(suspect_start_mid_bucket.yfilter)
	|| ydk::is_set(time_of_maximum.yfilter)
	|| ydk::is_set(time_of_minimum.yfilter)
	|| (contents !=  nullptr && contents->has_operation());
}

std::string Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationMetric::Bucket::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bucket";

    return path_buffer.str();

}

const EntityPath Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationMetric::Bucket::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-sla-oper:sla/protocols/Cisco-IOS-XR-ethernet-cfm-oper:ethernet/statistics-historicals/statistics-historical/operation-metric/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (corrupt.is_set || is_set(corrupt.yfilter)) leaf_name_data.push_back(corrupt.get_name_leafdata());
    if (data_lost_count.is_set || is_set(data_lost_count.yfilter)) leaf_name_data.push_back(data_lost_count.get_name_leafdata());
    if (data_sent_count.is_set || is_set(data_sent_count.yfilter)) leaf_name_data.push_back(data_sent_count.get_name_leafdata());
    if (duplicates.is_set || is_set(duplicates.yfilter)) leaf_name_data.push_back(duplicates.get_name_leafdata());
    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());
    if (lost.is_set || is_set(lost.yfilter)) leaf_name_data.push_back(lost.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (out_of_order.is_set || is_set(out_of_order.yfilter)) leaf_name_data.push_back(out_of_order.get_name_leafdata());
    if (overall_flr.is_set || is_set(overall_flr.yfilter)) leaf_name_data.push_back(overall_flr.get_name_leafdata());
    if (premature_reason.is_set || is_set(premature_reason.yfilter)) leaf_name_data.push_back(premature_reason.get_name_leafdata());
    if (premature_reason_string.is_set || is_set(premature_reason_string.yfilter)) leaf_name_data.push_back(premature_reason_string.get_name_leafdata());
    if (result_count.is_set || is_set(result_count.yfilter)) leaf_name_data.push_back(result_count.get_name_leafdata());
    if (sent.is_set || is_set(sent.yfilter)) leaf_name_data.push_back(sent.get_name_leafdata());
    if (standard_deviation.is_set || is_set(standard_deviation.yfilter)) leaf_name_data.push_back(standard_deviation.get_name_leafdata());
    if (start_at.is_set || is_set(start_at.yfilter)) leaf_name_data.push_back(start_at.get_name_leafdata());
    if (suspect_cleared_mid_bucket.is_set || is_set(suspect_cleared_mid_bucket.yfilter)) leaf_name_data.push_back(suspect_cleared_mid_bucket.get_name_leafdata());
    if (suspect_clock_drift.is_set || is_set(suspect_clock_drift.yfilter)) leaf_name_data.push_back(suspect_clock_drift.get_name_leafdata());
    if (suspect_flr_low_packet_count.is_set || is_set(suspect_flr_low_packet_count.yfilter)) leaf_name_data.push_back(suspect_flr_low_packet_count.get_name_leafdata());
    if (suspect_management_latency.is_set || is_set(suspect_management_latency.yfilter)) leaf_name_data.push_back(suspect_management_latency.get_name_leafdata());
    if (suspect_memory_allocation_failed.is_set || is_set(suspect_memory_allocation_failed.yfilter)) leaf_name_data.push_back(suspect_memory_allocation_failed.get_name_leafdata());
    if (suspect_misordering.is_set || is_set(suspect_misordering.yfilter)) leaf_name_data.push_back(suspect_misordering.get_name_leafdata());
    if (suspect_multiple_buckets.is_set || is_set(suspect_multiple_buckets.yfilter)) leaf_name_data.push_back(suspect_multiple_buckets.get_name_leafdata());
    if (suspect_premature_end.is_set || is_set(suspect_premature_end.yfilter)) leaf_name_data.push_back(suspect_premature_end.get_name_leafdata());
    if (suspect_probe_restarted.is_set || is_set(suspect_probe_restarted.yfilter)) leaf_name_data.push_back(suspect_probe_restarted.get_name_leafdata());
    if (suspect_schedule_latency.is_set || is_set(suspect_schedule_latency.yfilter)) leaf_name_data.push_back(suspect_schedule_latency.get_name_leafdata());
    if (suspect_send_fail.is_set || is_set(suspect_send_fail.yfilter)) leaf_name_data.push_back(suspect_send_fail.get_name_leafdata());
    if (suspect_start_mid_bucket.is_set || is_set(suspect_start_mid_bucket.yfilter)) leaf_name_data.push_back(suspect_start_mid_bucket.get_name_leafdata());
    if (time_of_maximum.is_set || is_set(time_of_maximum.yfilter)) leaf_name_data.push_back(time_of_maximum.get_name_leafdata());
    if (time_of_minimum.is_set || is_set(time_of_minimum.yfilter)) leaf_name_data.push_back(time_of_minimum.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationMetric::Bucket::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "contents")
    {
        if(contents == nullptr)
        {
            contents = std::make_shared<Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationMetric::Bucket::Contents>();
        }
        return contents;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationMetric::Bucket::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(contents != nullptr)
    {
        children["contents"] = contents;
    }

    return children;
}

void Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationMetric::Bucket::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "average")
    {
        average = value;
        average.value_namespace = name_space;
        average.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "corrupt")
    {
        corrupt = value;
        corrupt.value_namespace = name_space;
        corrupt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "data-lost-count")
    {
        data_lost_count = value;
        data_lost_count.value_namespace = name_space;
        data_lost_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "data-sent-count")
    {
        data_sent_count = value;
        data_sent_count.value_namespace = name_space;
        data_sent_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "duplicates")
    {
        duplicates = value;
        duplicates.value_namespace = name_space;
        duplicates.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lost")
    {
        lost = value;
        lost.value_namespace = name_space;
        lost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-of-order")
    {
        out_of_order = value;
        out_of_order.value_namespace = name_space;
        out_of_order.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "overall-flr")
    {
        overall_flr = value;
        overall_flr.value_namespace = name_space;
        overall_flr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "premature-reason")
    {
        premature_reason = value;
        premature_reason.value_namespace = name_space;
        premature_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "premature-reason-string")
    {
        premature_reason_string = value;
        premature_reason_string.value_namespace = name_space;
        premature_reason_string.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "result-count")
    {
        result_count = value;
        result_count.value_namespace = name_space;
        result_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sent")
    {
        sent = value;
        sent.value_namespace = name_space;
        sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "standard-deviation")
    {
        standard_deviation = value;
        standard_deviation.value_namespace = name_space;
        standard_deviation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-at")
    {
        start_at = value;
        start_at.value_namespace = name_space;
        start_at.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suspect-cleared-mid-bucket")
    {
        suspect_cleared_mid_bucket = value;
        suspect_cleared_mid_bucket.value_namespace = name_space;
        suspect_cleared_mid_bucket.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suspect-clock-drift")
    {
        suspect_clock_drift = value;
        suspect_clock_drift.value_namespace = name_space;
        suspect_clock_drift.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suspect-flr-low-packet-count")
    {
        suspect_flr_low_packet_count = value;
        suspect_flr_low_packet_count.value_namespace = name_space;
        suspect_flr_low_packet_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suspect-management-latency")
    {
        suspect_management_latency = value;
        suspect_management_latency.value_namespace = name_space;
        suspect_management_latency.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suspect-memory-allocation-failed")
    {
        suspect_memory_allocation_failed = value;
        suspect_memory_allocation_failed.value_namespace = name_space;
        suspect_memory_allocation_failed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suspect-misordering")
    {
        suspect_misordering = value;
        suspect_misordering.value_namespace = name_space;
        suspect_misordering.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suspect-multiple-buckets")
    {
        suspect_multiple_buckets = value;
        suspect_multiple_buckets.value_namespace = name_space;
        suspect_multiple_buckets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suspect-premature-end")
    {
        suspect_premature_end = value;
        suspect_premature_end.value_namespace = name_space;
        suspect_premature_end.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suspect-probe-restarted")
    {
        suspect_probe_restarted = value;
        suspect_probe_restarted.value_namespace = name_space;
        suspect_probe_restarted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suspect-schedule-latency")
    {
        suspect_schedule_latency = value;
        suspect_schedule_latency.value_namespace = name_space;
        suspect_schedule_latency.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suspect-send-fail")
    {
        suspect_send_fail = value;
        suspect_send_fail.value_namespace = name_space;
        suspect_send_fail.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suspect-start-mid-bucket")
    {
        suspect_start_mid_bucket = value;
        suspect_start_mid_bucket.value_namespace = name_space;
        suspect_start_mid_bucket.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-of-maximum")
    {
        time_of_maximum = value;
        time_of_maximum.value_namespace = name_space;
        time_of_maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-of-minimum")
    {
        time_of_minimum = value;
        time_of_minimum.value_namespace = name_space;
        time_of_minimum.value_namespace_prefix = name_space_prefix;
    }
}

void Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationMetric::Bucket::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "average")
    {
        average.yfilter = yfilter;
    }
    if(value_path == "corrupt")
    {
        corrupt.yfilter = yfilter;
    }
    if(value_path == "data-lost-count")
    {
        data_lost_count.yfilter = yfilter;
    }
    if(value_path == "data-sent-count")
    {
        data_sent_count.yfilter = yfilter;
    }
    if(value_path == "duplicates")
    {
        duplicates.yfilter = yfilter;
    }
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
    }
    if(value_path == "lost")
    {
        lost.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
    if(value_path == "out-of-order")
    {
        out_of_order.yfilter = yfilter;
    }
    if(value_path == "overall-flr")
    {
        overall_flr.yfilter = yfilter;
    }
    if(value_path == "premature-reason")
    {
        premature_reason.yfilter = yfilter;
    }
    if(value_path == "premature-reason-string")
    {
        premature_reason_string.yfilter = yfilter;
    }
    if(value_path == "result-count")
    {
        result_count.yfilter = yfilter;
    }
    if(value_path == "sent")
    {
        sent.yfilter = yfilter;
    }
    if(value_path == "standard-deviation")
    {
        standard_deviation.yfilter = yfilter;
    }
    if(value_path == "start-at")
    {
        start_at.yfilter = yfilter;
    }
    if(value_path == "suspect-cleared-mid-bucket")
    {
        suspect_cleared_mid_bucket.yfilter = yfilter;
    }
    if(value_path == "suspect-clock-drift")
    {
        suspect_clock_drift.yfilter = yfilter;
    }
    if(value_path == "suspect-flr-low-packet-count")
    {
        suspect_flr_low_packet_count.yfilter = yfilter;
    }
    if(value_path == "suspect-management-latency")
    {
        suspect_management_latency.yfilter = yfilter;
    }
    if(value_path == "suspect-memory-allocation-failed")
    {
        suspect_memory_allocation_failed.yfilter = yfilter;
    }
    if(value_path == "suspect-misordering")
    {
        suspect_misordering.yfilter = yfilter;
    }
    if(value_path == "suspect-multiple-buckets")
    {
        suspect_multiple_buckets.yfilter = yfilter;
    }
    if(value_path == "suspect-premature-end")
    {
        suspect_premature_end.yfilter = yfilter;
    }
    if(value_path == "suspect-probe-restarted")
    {
        suspect_probe_restarted.yfilter = yfilter;
    }
    if(value_path == "suspect-schedule-latency")
    {
        suspect_schedule_latency.yfilter = yfilter;
    }
    if(value_path == "suspect-send-fail")
    {
        suspect_send_fail.yfilter = yfilter;
    }
    if(value_path == "suspect-start-mid-bucket")
    {
        suspect_start_mid_bucket.yfilter = yfilter;
    }
    if(value_path == "time-of-maximum")
    {
        time_of_maximum.yfilter = yfilter;
    }
    if(value_path == "time-of-minimum")
    {
        time_of_minimum.yfilter = yfilter;
    }
}

bool Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationMetric::Bucket::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "contents" || name == "average" || name == "corrupt" || name == "data-lost-count" || name == "data-sent-count" || name == "duplicates" || name == "duration" || name == "lost" || name == "maximum" || name == "minimum" || name == "out-of-order" || name == "overall-flr" || name == "premature-reason" || name == "premature-reason-string" || name == "result-count" || name == "sent" || name == "standard-deviation" || name == "start-at" || name == "suspect-cleared-mid-bucket" || name == "suspect-clock-drift" || name == "suspect-flr-low-packet-count" || name == "suspect-management-latency" || name == "suspect-memory-allocation-failed" || name == "suspect-misordering" || name == "suspect-multiple-buckets" || name == "suspect-premature-end" || name == "suspect-probe-restarted" || name == "suspect-schedule-latency" || name == "suspect-send-fail" || name == "suspect-start-mid-bucket" || name == "time-of-maximum" || name == "time-of-minimum")
        return true;
    return false;
}

Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationMetric::Bucket::Contents::Contents()
    :
    bucket_type{YType::enumeration, "bucket-type"}
    	,
    aggregated(std::make_shared<Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationMetric::Bucket::Contents::Aggregated>())
	,unaggregated(std::make_shared<Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationMetric::Bucket::Contents::Unaggregated>())
{
    aggregated->parent = this;

    unaggregated->parent = this;

    yang_name = "contents"; yang_parent_name = "bucket";
}

Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationMetric::Bucket::Contents::~Contents()
{
}

bool Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationMetric::Bucket::Contents::has_data() const
{
    return bucket_type.is_set
	|| (aggregated !=  nullptr && aggregated->has_data())
	|| (unaggregated !=  nullptr && unaggregated->has_data());
}

bool Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationMetric::Bucket::Contents::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bucket_type.yfilter)
	|| (aggregated !=  nullptr && aggregated->has_operation())
	|| (unaggregated !=  nullptr && unaggregated->has_operation());
}

std::string Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationMetric::Bucket::Contents::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "contents";

    return path_buffer.str();

}

const EntityPath Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationMetric::Bucket::Contents::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-sla-oper:sla/protocols/Cisco-IOS-XR-ethernet-cfm-oper:ethernet/statistics-historicals/statistics-historical/operation-metric/bucket/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bucket_type.is_set || is_set(bucket_type.yfilter)) leaf_name_data.push_back(bucket_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationMetric::Bucket::Contents::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aggregated")
    {
        if(aggregated == nullptr)
        {
            aggregated = std::make_shared<Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationMetric::Bucket::Contents::Aggregated>();
        }
        return aggregated;
    }

    if(child_yang_name == "unaggregated")
    {
        if(unaggregated == nullptr)
        {
            unaggregated = std::make_shared<Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationMetric::Bucket::Contents::Unaggregated>();
        }
        return unaggregated;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationMetric::Bucket::Contents::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(aggregated != nullptr)
    {
        children["aggregated"] = aggregated;
    }

    if(unaggregated != nullptr)
    {
        children["unaggregated"] = unaggregated;
    }

    return children;
}

void Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationMetric::Bucket::Contents::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bucket-type")
    {
        bucket_type = value;
        bucket_type.value_namespace = name_space;
        bucket_type.value_namespace_prefix = name_space_prefix;
    }
}

void Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationMetric::Bucket::Contents::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bucket-type")
    {
        bucket_type.yfilter = yfilter;
    }
}

bool Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationMetric::Bucket::Contents::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aggregated" || name == "unaggregated" || name == "bucket-type")
        return true;
    return false;
}

Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationMetric::Bucket::Contents::Aggregated::Aggregated()
{
    yang_name = "aggregated"; yang_parent_name = "contents";
}

Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationMetric::Bucket::Contents::Aggregated::~Aggregated()
{
}

bool Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationMetric::Bucket::Contents::Aggregated::has_data() const
{
    for (std::size_t index=0; index<bins.size(); index++)
    {
        if(bins[index]->has_data())
            return true;
    }
    return false;
}

bool Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationMetric::Bucket::Contents::Aggregated::has_operation() const
{
    for (std::size_t index=0; index<bins.size(); index++)
    {
        if(bins[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationMetric::Bucket::Contents::Aggregated::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aggregated";

    return path_buffer.str();

}

const EntityPath Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationMetric::Bucket::Contents::Aggregated::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-sla-oper:sla/protocols/Cisco-IOS-XR-ethernet-cfm-oper:ethernet/statistics-historicals/statistics-historical/operation-metric/bucket/contents/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationMetric::Bucket::Contents::Aggregated::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bins")
    {
        for(auto const & c : bins)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationMetric::Bucket::Contents::Aggregated::Bins>();
        c->parent = this;
        bins.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationMetric::Bucket::Contents::Aggregated::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bins)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationMetric::Bucket::Contents::Aggregated::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationMetric::Bucket::Contents::Aggregated::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationMetric::Bucket::Contents::Aggregated::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bins")
        return true;
    return false;
}

Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationMetric::Bucket::Contents::Aggregated::Bins::Bins()
    :
    count{YType::uint32, "count"},
    lower_bound{YType::int32, "lower-bound"},
    lower_bound_tenths{YType::int32, "lower-bound-tenths"},
    sum{YType::int64, "sum"},
    upper_bound{YType::int32, "upper-bound"},
    upper_bound_tenths{YType::int32, "upper-bound-tenths"}
{
    yang_name = "bins"; yang_parent_name = "aggregated";
}

Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationMetric::Bucket::Contents::Aggregated::Bins::~Bins()
{
}

bool Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationMetric::Bucket::Contents::Aggregated::Bins::has_data() const
{
    return count.is_set
	|| lower_bound.is_set
	|| lower_bound_tenths.is_set
	|| sum.is_set
	|| upper_bound.is_set
	|| upper_bound_tenths.is_set;
}

bool Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationMetric::Bucket::Contents::Aggregated::Bins::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(count.yfilter)
	|| ydk::is_set(lower_bound.yfilter)
	|| ydk::is_set(lower_bound_tenths.yfilter)
	|| ydk::is_set(sum.yfilter)
	|| ydk::is_set(upper_bound.yfilter)
	|| ydk::is_set(upper_bound_tenths.yfilter);
}

std::string Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationMetric::Bucket::Contents::Aggregated::Bins::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bins";

    return path_buffer.str();

}

const EntityPath Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationMetric::Bucket::Contents::Aggregated::Bins::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-sla-oper:sla/protocols/Cisco-IOS-XR-ethernet-cfm-oper:ethernet/statistics-historicals/statistics-historical/operation-metric/bucket/contents/aggregated/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (count.is_set || is_set(count.yfilter)) leaf_name_data.push_back(count.get_name_leafdata());
    if (lower_bound.is_set || is_set(lower_bound.yfilter)) leaf_name_data.push_back(lower_bound.get_name_leafdata());
    if (lower_bound_tenths.is_set || is_set(lower_bound_tenths.yfilter)) leaf_name_data.push_back(lower_bound_tenths.get_name_leafdata());
    if (sum.is_set || is_set(sum.yfilter)) leaf_name_data.push_back(sum.get_name_leafdata());
    if (upper_bound.is_set || is_set(upper_bound.yfilter)) leaf_name_data.push_back(upper_bound.get_name_leafdata());
    if (upper_bound_tenths.is_set || is_set(upper_bound_tenths.yfilter)) leaf_name_data.push_back(upper_bound_tenths.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationMetric::Bucket::Contents::Aggregated::Bins::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationMetric::Bucket::Contents::Aggregated::Bins::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationMetric::Bucket::Contents::Aggregated::Bins::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "count")
    {
        count = value;
        count.value_namespace = name_space;
        count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lower-bound")
    {
        lower_bound = value;
        lower_bound.value_namespace = name_space;
        lower_bound.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lower-bound-tenths")
    {
        lower_bound_tenths = value;
        lower_bound_tenths.value_namespace = name_space;
        lower_bound_tenths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sum")
    {
        sum = value;
        sum.value_namespace = name_space;
        sum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "upper-bound")
    {
        upper_bound = value;
        upper_bound.value_namespace = name_space;
        upper_bound.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "upper-bound-tenths")
    {
        upper_bound_tenths = value;
        upper_bound_tenths.value_namespace = name_space;
        upper_bound_tenths.value_namespace_prefix = name_space_prefix;
    }
}

void Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationMetric::Bucket::Contents::Aggregated::Bins::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "count")
    {
        count.yfilter = yfilter;
    }
    if(value_path == "lower-bound")
    {
        lower_bound.yfilter = yfilter;
    }
    if(value_path == "lower-bound-tenths")
    {
        lower_bound_tenths.yfilter = yfilter;
    }
    if(value_path == "sum")
    {
        sum.yfilter = yfilter;
    }
    if(value_path == "upper-bound")
    {
        upper_bound.yfilter = yfilter;
    }
    if(value_path == "upper-bound-tenths")
    {
        upper_bound_tenths.yfilter = yfilter;
    }
}

bool Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationMetric::Bucket::Contents::Aggregated::Bins::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "count" || name == "lower-bound" || name == "lower-bound-tenths" || name == "sum" || name == "upper-bound" || name == "upper-bound-tenths")
        return true;
    return false;
}

Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationMetric::Bucket::Contents::Unaggregated::Unaggregated()
{
    yang_name = "unaggregated"; yang_parent_name = "contents";
}

Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationMetric::Bucket::Contents::Unaggregated::~Unaggregated()
{
}

bool Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationMetric::Bucket::Contents::Unaggregated::has_data() const
{
    for (std::size_t index=0; index<sample.size(); index++)
    {
        if(sample[index]->has_data())
            return true;
    }
    return false;
}

bool Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationMetric::Bucket::Contents::Unaggregated::has_operation() const
{
    for (std::size_t index=0; index<sample.size(); index++)
    {
        if(sample[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationMetric::Bucket::Contents::Unaggregated::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unaggregated";

    return path_buffer.str();

}

const EntityPath Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationMetric::Bucket::Contents::Unaggregated::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-sla-oper:sla/protocols/Cisco-IOS-XR-ethernet-cfm-oper:ethernet/statistics-historicals/statistics-historical/operation-metric/bucket/contents/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationMetric::Bucket::Contents::Unaggregated::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sample")
    {
        for(auto const & c : sample)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationMetric::Bucket::Contents::Unaggregated::Sample>();
        c->parent = this;
        sample.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationMetric::Bucket::Contents::Unaggregated::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sample)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationMetric::Bucket::Contents::Unaggregated::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationMetric::Bucket::Contents::Unaggregated::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationMetric::Bucket::Contents::Unaggregated::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sample")
        return true;
    return false;
}

Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationMetric::Bucket::Contents::Unaggregated::Sample::Sample()
    :
    corrupt{YType::boolean, "corrupt"},
    frames_lost{YType::uint32, "frames-lost"},
    frames_sent{YType::uint32, "frames-sent"},
    no_data_packets{YType::boolean, "no-data-packets"},
    out_of_order{YType::boolean, "out-of-order"},
    result{YType::int32, "result"},
    sent{YType::boolean, "sent"},
    sent_at{YType::uint32, "sent-at"},
    timed_out{YType::boolean, "timed-out"}
{
    yang_name = "sample"; yang_parent_name = "unaggregated";
}

Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationMetric::Bucket::Contents::Unaggregated::Sample::~Sample()
{
}

bool Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationMetric::Bucket::Contents::Unaggregated::Sample::has_data() const
{
    return corrupt.is_set
	|| frames_lost.is_set
	|| frames_sent.is_set
	|| no_data_packets.is_set
	|| out_of_order.is_set
	|| result.is_set
	|| sent.is_set
	|| sent_at.is_set
	|| timed_out.is_set;
}

bool Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationMetric::Bucket::Contents::Unaggregated::Sample::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(corrupt.yfilter)
	|| ydk::is_set(frames_lost.yfilter)
	|| ydk::is_set(frames_sent.yfilter)
	|| ydk::is_set(no_data_packets.yfilter)
	|| ydk::is_set(out_of_order.yfilter)
	|| ydk::is_set(result.yfilter)
	|| ydk::is_set(sent.yfilter)
	|| ydk::is_set(sent_at.yfilter)
	|| ydk::is_set(timed_out.yfilter);
}

std::string Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationMetric::Bucket::Contents::Unaggregated::Sample::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sample";

    return path_buffer.str();

}

const EntityPath Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationMetric::Bucket::Contents::Unaggregated::Sample::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-sla-oper:sla/protocols/Cisco-IOS-XR-ethernet-cfm-oper:ethernet/statistics-historicals/statistics-historical/operation-metric/bucket/contents/unaggregated/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (corrupt.is_set || is_set(corrupt.yfilter)) leaf_name_data.push_back(corrupt.get_name_leafdata());
    if (frames_lost.is_set || is_set(frames_lost.yfilter)) leaf_name_data.push_back(frames_lost.get_name_leafdata());
    if (frames_sent.is_set || is_set(frames_sent.yfilter)) leaf_name_data.push_back(frames_sent.get_name_leafdata());
    if (no_data_packets.is_set || is_set(no_data_packets.yfilter)) leaf_name_data.push_back(no_data_packets.get_name_leafdata());
    if (out_of_order.is_set || is_set(out_of_order.yfilter)) leaf_name_data.push_back(out_of_order.get_name_leafdata());
    if (result.is_set || is_set(result.yfilter)) leaf_name_data.push_back(result.get_name_leafdata());
    if (sent.is_set || is_set(sent.yfilter)) leaf_name_data.push_back(sent.get_name_leafdata());
    if (sent_at.is_set || is_set(sent_at.yfilter)) leaf_name_data.push_back(sent_at.get_name_leafdata());
    if (timed_out.is_set || is_set(timed_out.yfilter)) leaf_name_data.push_back(timed_out.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationMetric::Bucket::Contents::Unaggregated::Sample::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationMetric::Bucket::Contents::Unaggregated::Sample::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationMetric::Bucket::Contents::Unaggregated::Sample::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "corrupt")
    {
        corrupt = value;
        corrupt.value_namespace = name_space;
        corrupt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frames-lost")
    {
        frames_lost = value;
        frames_lost.value_namespace = name_space;
        frames_lost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frames-sent")
    {
        frames_sent = value;
        frames_sent.value_namespace = name_space;
        frames_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-data-packets")
    {
        no_data_packets = value;
        no_data_packets.value_namespace = name_space;
        no_data_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-of-order")
    {
        out_of_order = value;
        out_of_order.value_namespace = name_space;
        out_of_order.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "result")
    {
        result = value;
        result.value_namespace = name_space;
        result.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sent")
    {
        sent = value;
        sent.value_namespace = name_space;
        sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sent-at")
    {
        sent_at = value;
        sent_at.value_namespace = name_space;
        sent_at.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timed-out")
    {
        timed_out = value;
        timed_out.value_namespace = name_space;
        timed_out.value_namespace_prefix = name_space_prefix;
    }
}

void Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationMetric::Bucket::Contents::Unaggregated::Sample::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "corrupt")
    {
        corrupt.yfilter = yfilter;
    }
    if(value_path == "frames-lost")
    {
        frames_lost.yfilter = yfilter;
    }
    if(value_path == "frames-sent")
    {
        frames_sent.yfilter = yfilter;
    }
    if(value_path == "no-data-packets")
    {
        no_data_packets.yfilter = yfilter;
    }
    if(value_path == "out-of-order")
    {
        out_of_order.yfilter = yfilter;
    }
    if(value_path == "result")
    {
        result.yfilter = yfilter;
    }
    if(value_path == "sent")
    {
        sent.yfilter = yfilter;
    }
    if(value_path == "sent-at")
    {
        sent_at.yfilter = yfilter;
    }
    if(value_path == "timed-out")
    {
        timed_out.yfilter = yfilter;
    }
}

bool Sla::Protocols::Ethernet::StatisticsHistoricals::StatisticsHistorical::OperationMetric::Bucket::Contents::Unaggregated::Sample::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "corrupt" || name == "frames-lost" || name == "frames-sent" || name == "no-data-packets" || name == "out-of-order" || name == "result" || name == "sent" || name == "sent-at" || name == "timed-out")
        return true;
    return false;
}

Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistoricals()
{
    yang_name = "statistics-on-demand-historicals"; yang_parent_name = "ethernet";
}

Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::~StatisticsOnDemandHistoricals()
{
}

bool Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::has_data() const
{
    for (std::size_t index=0; index<statistics_on_demand_historical.size(); index++)
    {
        if(statistics_on_demand_historical[index]->has_data())
            return true;
    }
    return false;
}

bool Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::has_operation() const
{
    for (std::size_t index=0; index<statistics_on_demand_historical.size(); index++)
    {
        if(statistics_on_demand_historical[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics-on-demand-historicals";

    return path_buffer.str();

}

const EntityPath Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-sla-oper:sla/protocols/Cisco-IOS-XR-ethernet-cfm-oper:ethernet/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "statistics-on-demand-historical")
    {
        for(auto const & c : statistics_on_demand_historical)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical>();
        c->parent = this;
        statistics_on_demand_historical.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : statistics_on_demand_historical)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "statistics-on-demand-historical")
        return true;
    return false;
}

Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::StatisticsOnDemandHistorical()
    :
    display_long{YType::str, "display-long"},
    display_short{YType::str, "display-short"},
    domain_name{YType::str, "domain-name"},
    flr_calculation_interval{YType::uint32, "flr-calculation-interval"},
    interface_name{YType::str, "interface-name"},
    mac_address{YType::str, "mac-address"},
    mep_id{YType::uint32, "mep-id"},
    operation_id{YType::uint32, "operation-id"},
    probe_type{YType::str, "probe-type"}
    	,
    operation_schedule(std::make_shared<Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationSchedule>())
	,specific_options(std::make_shared<Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::SpecificOptions>())
{
    operation_schedule->parent = this;

    specific_options->parent = this;

    yang_name = "statistics-on-demand-historical"; yang_parent_name = "statistics-on-demand-historicals";
}

Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::~StatisticsOnDemandHistorical()
{
}

bool Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::has_data() const
{
    for (std::size_t index=0; index<operation_metric.size(); index++)
    {
        if(operation_metric[index]->has_data())
            return true;
    }
    return display_long.is_set
	|| display_short.is_set
	|| domain_name.is_set
	|| flr_calculation_interval.is_set
	|| interface_name.is_set
	|| mac_address.is_set
	|| mep_id.is_set
	|| operation_id.is_set
	|| probe_type.is_set
	|| (operation_schedule !=  nullptr && operation_schedule->has_data())
	|| (specific_options !=  nullptr && specific_options->has_data());
}

bool Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::has_operation() const
{
    for (std::size_t index=0; index<operation_metric.size(); index++)
    {
        if(operation_metric[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(display_long.yfilter)
	|| ydk::is_set(display_short.yfilter)
	|| ydk::is_set(domain_name.yfilter)
	|| ydk::is_set(flr_calculation_interval.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(mep_id.yfilter)
	|| ydk::is_set(operation_id.yfilter)
	|| ydk::is_set(probe_type.yfilter)
	|| (operation_schedule !=  nullptr && operation_schedule->has_operation())
	|| (specific_options !=  nullptr && specific_options->has_operation());
}

std::string Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics-on-demand-historical";

    return path_buffer.str();

}

const EntityPath Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-sla-oper:sla/protocols/Cisco-IOS-XR-ethernet-cfm-oper:ethernet/statistics-on-demand-historicals/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (display_long.is_set || is_set(display_long.yfilter)) leaf_name_data.push_back(display_long.get_name_leafdata());
    if (display_short.is_set || is_set(display_short.yfilter)) leaf_name_data.push_back(display_short.get_name_leafdata());
    if (domain_name.is_set || is_set(domain_name.yfilter)) leaf_name_data.push_back(domain_name.get_name_leafdata());
    if (flr_calculation_interval.is_set || is_set(flr_calculation_interval.yfilter)) leaf_name_data.push_back(flr_calculation_interval.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (mep_id.is_set || is_set(mep_id.yfilter)) leaf_name_data.push_back(mep_id.get_name_leafdata());
    if (operation_id.is_set || is_set(operation_id.yfilter)) leaf_name_data.push_back(operation_id.get_name_leafdata());
    if (probe_type.is_set || is_set(probe_type.yfilter)) leaf_name_data.push_back(probe_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "operation-metric")
    {
        for(auto const & c : operation_metric)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationMetric>();
        c->parent = this;
        operation_metric.push_back(c);
        return c;
    }

    if(child_yang_name == "operation-schedule")
    {
        if(operation_schedule == nullptr)
        {
            operation_schedule = std::make_shared<Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationSchedule>();
        }
        return operation_schedule;
    }

    if(child_yang_name == "specific-options")
    {
        if(specific_options == nullptr)
        {
            specific_options = std::make_shared<Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::SpecificOptions>();
        }
        return specific_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : operation_metric)
    {
        children[c->get_segment_path()] = c;
    }

    if(operation_schedule != nullptr)
    {
        children["operation-schedule"] = operation_schedule;
    }

    if(specific_options != nullptr)
    {
        children["specific-options"] = specific_options;
    }

    return children;
}

void Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "display-long")
    {
        display_long = value;
        display_long.value_namespace = name_space;
        display_long.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "display-short")
    {
        display_short = value;
        display_short.value_namespace = name_space;
        display_short.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "domain-name")
    {
        domain_name = value;
        domain_name.value_namespace = name_space;
        domain_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flr-calculation-interval")
    {
        flr_calculation_interval = value;
        flr_calculation_interval.value_namespace = name_space;
        flr_calculation_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mep-id")
    {
        mep_id = value;
        mep_id.value_namespace = name_space;
        mep_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operation-id")
    {
        operation_id = value;
        operation_id.value_namespace = name_space;
        operation_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "probe-type")
    {
        probe_type = value;
        probe_type.value_namespace = name_space;
        probe_type.value_namespace_prefix = name_space_prefix;
    }
}

void Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "display-long")
    {
        display_long.yfilter = yfilter;
    }
    if(value_path == "display-short")
    {
        display_short.yfilter = yfilter;
    }
    if(value_path == "domain-name")
    {
        domain_name.yfilter = yfilter;
    }
    if(value_path == "flr-calculation-interval")
    {
        flr_calculation_interval.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "mep-id")
    {
        mep_id.yfilter = yfilter;
    }
    if(value_path == "operation-id")
    {
        operation_id.yfilter = yfilter;
    }
    if(value_path == "probe-type")
    {
        probe_type.yfilter = yfilter;
    }
}

bool Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "operation-metric" || name == "operation-schedule" || name == "specific-options" || name == "display-long" || name == "display-short" || name == "domain-name" || name == "flr-calculation-interval" || name == "interface-name" || name == "mac-address" || name == "mep-id" || name == "operation-id" || name == "probe-type")
        return true;
    return false;
}

Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::SpecificOptions::SpecificOptions()
    :
    oper_type{YType::enumeration, "oper-type"}
    	,
    configured_operation_options(std::make_shared<Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::SpecificOptions::ConfiguredOperationOptions>())
	,ondemand_operation_options(std::make_shared<Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::SpecificOptions::OndemandOperationOptions>())
{
    configured_operation_options->parent = this;

    ondemand_operation_options->parent = this;

    yang_name = "specific-options"; yang_parent_name = "statistics-on-demand-historical";
}

Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::SpecificOptions::~SpecificOptions()
{
}

bool Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::SpecificOptions::has_data() const
{
    return oper_type.is_set
	|| (configured_operation_options !=  nullptr && configured_operation_options->has_data())
	|| (ondemand_operation_options !=  nullptr && ondemand_operation_options->has_data());
}

bool Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::SpecificOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(oper_type.yfilter)
	|| (configured_operation_options !=  nullptr && configured_operation_options->has_operation())
	|| (ondemand_operation_options !=  nullptr && ondemand_operation_options->has_operation());
}

std::string Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::SpecificOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "specific-options";

    return path_buffer.str();

}

const EntityPath Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::SpecificOptions::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-sla-oper:sla/protocols/Cisco-IOS-XR-ethernet-cfm-oper:ethernet/statistics-on-demand-historicals/statistics-on-demand-historical/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (oper_type.is_set || is_set(oper_type.yfilter)) leaf_name_data.push_back(oper_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::SpecificOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "configured-operation-options")
    {
        if(configured_operation_options == nullptr)
        {
            configured_operation_options = std::make_shared<Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::SpecificOptions::ConfiguredOperationOptions>();
        }
        return configured_operation_options;
    }

    if(child_yang_name == "ondemand-operation-options")
    {
        if(ondemand_operation_options == nullptr)
        {
            ondemand_operation_options = std::make_shared<Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::SpecificOptions::OndemandOperationOptions>();
        }
        return ondemand_operation_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::SpecificOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(configured_operation_options != nullptr)
    {
        children["configured-operation-options"] = configured_operation_options;
    }

    if(ondemand_operation_options != nullptr)
    {
        children["ondemand-operation-options"] = ondemand_operation_options;
    }

    return children;
}

void Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::SpecificOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "oper-type")
    {
        oper_type = value;
        oper_type.value_namespace = name_space;
        oper_type.value_namespace_prefix = name_space_prefix;
    }
}

void Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::SpecificOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "oper-type")
    {
        oper_type.yfilter = yfilter;
    }
}

bool Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::SpecificOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "configured-operation-options" || name == "ondemand-operation-options" || name == "oper-type")
        return true;
    return false;
}

Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::SpecificOptions::ConfiguredOperationOptions::ConfiguredOperationOptions()
    :
    profile_name{YType::str, "profile-name"}
{
    yang_name = "configured-operation-options"; yang_parent_name = "specific-options";
}

Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::SpecificOptions::ConfiguredOperationOptions::~ConfiguredOperationOptions()
{
}

bool Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::SpecificOptions::ConfiguredOperationOptions::has_data() const
{
    return profile_name.is_set;
}

bool Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::SpecificOptions::ConfiguredOperationOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(profile_name.yfilter);
}

std::string Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::SpecificOptions::ConfiguredOperationOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "configured-operation-options";

    return path_buffer.str();

}

const EntityPath Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::SpecificOptions::ConfiguredOperationOptions::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-sla-oper:sla/protocols/Cisco-IOS-XR-ethernet-cfm-oper:ethernet/statistics-on-demand-historicals/statistics-on-demand-historical/specific-options/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (profile_name.is_set || is_set(profile_name.yfilter)) leaf_name_data.push_back(profile_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::SpecificOptions::ConfiguredOperationOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::SpecificOptions::ConfiguredOperationOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::SpecificOptions::ConfiguredOperationOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "profile-name")
    {
        profile_name = value;
        profile_name.value_namespace = name_space;
        profile_name.value_namespace_prefix = name_space_prefix;
    }
}

void Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::SpecificOptions::ConfiguredOperationOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "profile-name")
    {
        profile_name.yfilter = yfilter;
    }
}

bool Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::SpecificOptions::ConfiguredOperationOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "profile-name")
        return true;
    return false;
}

Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::SpecificOptions::OndemandOperationOptions::OndemandOperationOptions()
    :
    ondemand_operation_id{YType::uint32, "ondemand-operation-id"},
    probe_count{YType::uint8, "probe-count"}
{
    yang_name = "ondemand-operation-options"; yang_parent_name = "specific-options";
}

Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::SpecificOptions::OndemandOperationOptions::~OndemandOperationOptions()
{
}

bool Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::SpecificOptions::OndemandOperationOptions::has_data() const
{
    return ondemand_operation_id.is_set
	|| probe_count.is_set;
}

bool Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::SpecificOptions::OndemandOperationOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ondemand_operation_id.yfilter)
	|| ydk::is_set(probe_count.yfilter);
}

std::string Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::SpecificOptions::OndemandOperationOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ondemand-operation-options";

    return path_buffer.str();

}

const EntityPath Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::SpecificOptions::OndemandOperationOptions::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-sla-oper:sla/protocols/Cisco-IOS-XR-ethernet-cfm-oper:ethernet/statistics-on-demand-historicals/statistics-on-demand-historical/specific-options/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ondemand_operation_id.is_set || is_set(ondemand_operation_id.yfilter)) leaf_name_data.push_back(ondemand_operation_id.get_name_leafdata());
    if (probe_count.is_set || is_set(probe_count.yfilter)) leaf_name_data.push_back(probe_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::SpecificOptions::OndemandOperationOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::SpecificOptions::OndemandOperationOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::SpecificOptions::OndemandOperationOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ondemand-operation-id")
    {
        ondemand_operation_id = value;
        ondemand_operation_id.value_namespace = name_space;
        ondemand_operation_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "probe-count")
    {
        probe_count = value;
        probe_count.value_namespace = name_space;
        probe_count.value_namespace_prefix = name_space_prefix;
    }
}

void Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::SpecificOptions::OndemandOperationOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ondemand-operation-id")
    {
        ondemand_operation_id.yfilter = yfilter;
    }
    if(value_path == "probe-count")
    {
        probe_count.yfilter = yfilter;
    }
}

bool Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::SpecificOptions::OndemandOperationOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ondemand-operation-id" || name == "probe-count")
        return true;
    return false;
}

Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationSchedule::OperationSchedule()
    :
    schedule_duration{YType::uint32, "schedule-duration"},
    schedule_interval{YType::uint32, "schedule-interval"},
    start_time{YType::uint32, "start-time"},
    start_time_configured{YType::boolean, "start-time-configured"}
{
    yang_name = "operation-schedule"; yang_parent_name = "statistics-on-demand-historical";
}

Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationSchedule::~OperationSchedule()
{
}

bool Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationSchedule::has_data() const
{
    return schedule_duration.is_set
	|| schedule_interval.is_set
	|| start_time.is_set
	|| start_time_configured.is_set;
}

bool Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationSchedule::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(schedule_duration.yfilter)
	|| ydk::is_set(schedule_interval.yfilter)
	|| ydk::is_set(start_time.yfilter)
	|| ydk::is_set(start_time_configured.yfilter);
}

std::string Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationSchedule::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "operation-schedule";

    return path_buffer.str();

}

const EntityPath Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationSchedule::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-sla-oper:sla/protocols/Cisco-IOS-XR-ethernet-cfm-oper:ethernet/statistics-on-demand-historicals/statistics-on-demand-historical/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (schedule_duration.is_set || is_set(schedule_duration.yfilter)) leaf_name_data.push_back(schedule_duration.get_name_leafdata());
    if (schedule_interval.is_set || is_set(schedule_interval.yfilter)) leaf_name_data.push_back(schedule_interval.get_name_leafdata());
    if (start_time.is_set || is_set(start_time.yfilter)) leaf_name_data.push_back(start_time.get_name_leafdata());
    if (start_time_configured.is_set || is_set(start_time_configured.yfilter)) leaf_name_data.push_back(start_time_configured.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationSchedule::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationSchedule::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationSchedule::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "schedule-duration")
    {
        schedule_duration = value;
        schedule_duration.value_namespace = name_space;
        schedule_duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "schedule-interval")
    {
        schedule_interval = value;
        schedule_interval.value_namespace = name_space;
        schedule_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-time")
    {
        start_time = value;
        start_time.value_namespace = name_space;
        start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-time-configured")
    {
        start_time_configured = value;
        start_time_configured.value_namespace = name_space;
        start_time_configured.value_namespace_prefix = name_space_prefix;
    }
}

void Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationSchedule::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "schedule-duration")
    {
        schedule_duration.yfilter = yfilter;
    }
    if(value_path == "schedule-interval")
    {
        schedule_interval.yfilter = yfilter;
    }
    if(value_path == "start-time")
    {
        start_time.yfilter = yfilter;
    }
    if(value_path == "start-time-configured")
    {
        start_time_configured.yfilter = yfilter;
    }
}

bool Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationSchedule::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "schedule-duration" || name == "schedule-interval" || name == "start-time" || name == "start-time-configured")
        return true;
    return false;
}

Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationMetric::OperationMetric()
    :
    config(std::make_shared<Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationMetric::Config>())
{
    config->parent = this;

    yang_name = "operation-metric"; yang_parent_name = "statistics-on-demand-historical";
}

Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationMetric::~OperationMetric()
{
}

bool Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationMetric::has_data() const
{
    for (std::size_t index=0; index<bucket.size(); index++)
    {
        if(bucket[index]->has_data())
            return true;
    }
    return (config !=  nullptr && config->has_data());
}

bool Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationMetric::has_operation() const
{
    for (std::size_t index=0; index<bucket.size(); index++)
    {
        if(bucket[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation());
}

std::string Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationMetric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "operation-metric";

    return path_buffer.str();

}

const EntityPath Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationMetric::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-sla-oper:sla/protocols/Cisco-IOS-XR-ethernet-cfm-oper:ethernet/statistics-on-demand-historicals/statistics-on-demand-historical/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationMetric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bucket")
    {
        for(auto const & c : bucket)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationMetric::Bucket>();
        c->parent = this;
        bucket.push_back(c);
        return c;
    }

    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationMetric::Config>();
        }
        return config;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationMetric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bucket)
    {
        children[c->get_segment_path()] = c;
    }

    if(config != nullptr)
    {
        children["config"] = config;
    }

    return children;
}

void Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationMetric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationMetric::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationMetric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bucket" || name == "config")
        return true;
    return false;
}

Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationMetric::Config::Config()
    :
    bins_count{YType::uint16, "bins-count"},
    bins_width{YType::uint16, "bins-width"},
    bucket_size{YType::uint8, "bucket-size"},
    bucket_size_unit{YType::enumeration, "bucket-size-unit"},
    buckets_archive{YType::uint32, "buckets-archive"},
    metric_type{YType::enumeration, "metric-type"}
{
    yang_name = "config"; yang_parent_name = "operation-metric";
}

Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationMetric::Config::~Config()
{
}

bool Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationMetric::Config::has_data() const
{
    return bins_count.is_set
	|| bins_width.is_set
	|| bucket_size.is_set
	|| bucket_size_unit.is_set
	|| buckets_archive.is_set
	|| metric_type.is_set;
}

bool Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationMetric::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bins_count.yfilter)
	|| ydk::is_set(bins_width.yfilter)
	|| ydk::is_set(bucket_size.yfilter)
	|| ydk::is_set(bucket_size_unit.yfilter)
	|| ydk::is_set(buckets_archive.yfilter)
	|| ydk::is_set(metric_type.yfilter);
}

std::string Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationMetric::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

const EntityPath Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationMetric::Config::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-sla-oper:sla/protocols/Cisco-IOS-XR-ethernet-cfm-oper:ethernet/statistics-on-demand-historicals/statistics-on-demand-historical/operation-metric/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bins_count.is_set || is_set(bins_count.yfilter)) leaf_name_data.push_back(bins_count.get_name_leafdata());
    if (bins_width.is_set || is_set(bins_width.yfilter)) leaf_name_data.push_back(bins_width.get_name_leafdata());
    if (bucket_size.is_set || is_set(bucket_size.yfilter)) leaf_name_data.push_back(bucket_size.get_name_leafdata());
    if (bucket_size_unit.is_set || is_set(bucket_size_unit.yfilter)) leaf_name_data.push_back(bucket_size_unit.get_name_leafdata());
    if (buckets_archive.is_set || is_set(buckets_archive.yfilter)) leaf_name_data.push_back(buckets_archive.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationMetric::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationMetric::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationMetric::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bins-count")
    {
        bins_count = value;
        bins_count.value_namespace = name_space;
        bins_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bins-width")
    {
        bins_width = value;
        bins_width.value_namespace = name_space;
        bins_width.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bucket-size")
    {
        bucket_size = value;
        bucket_size.value_namespace = name_space;
        bucket_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bucket-size-unit")
    {
        bucket_size_unit = value;
        bucket_size_unit.value_namespace = name_space;
        bucket_size_unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "buckets-archive")
    {
        buckets_archive = value;
        buckets_archive.value_namespace = name_space;
        buckets_archive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
}

void Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationMetric::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bins-count")
    {
        bins_count.yfilter = yfilter;
    }
    if(value_path == "bins-width")
    {
        bins_width.yfilter = yfilter;
    }
    if(value_path == "bucket-size")
    {
        bucket_size.yfilter = yfilter;
    }
    if(value_path == "bucket-size-unit")
    {
        bucket_size_unit.yfilter = yfilter;
    }
    if(value_path == "buckets-archive")
    {
        buckets_archive.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
}

bool Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationMetric::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bins-count" || name == "bins-width" || name == "bucket-size" || name == "bucket-size-unit" || name == "buckets-archive" || name == "metric-type")
        return true;
    return false;
}

Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationMetric::Bucket::Bucket()
    :
    average{YType::int32, "average"},
    corrupt{YType::uint32, "corrupt"},
    data_lost_count{YType::uint32, "data-lost-count"},
    data_sent_count{YType::uint32, "data-sent-count"},
    duplicates{YType::uint32, "duplicates"},
    duration{YType::uint32, "duration"},
    lost{YType::uint32, "lost"},
    maximum{YType::int32, "maximum"},
    minimum{YType::int32, "minimum"},
    out_of_order{YType::uint32, "out-of-order"},
    overall_flr{YType::int32, "overall-flr"},
    premature_reason{YType::uint32, "premature-reason"},
    premature_reason_string{YType::str, "premature-reason-string"},
    result_count{YType::uint32, "result-count"},
    sent{YType::uint32, "sent"},
    standard_deviation{YType::int32, "standard-deviation"},
    start_at{YType::uint32, "start-at"},
    suspect_cleared_mid_bucket{YType::boolean, "suspect-cleared-mid-bucket"},
    suspect_clock_drift{YType::boolean, "suspect-clock-drift"},
    suspect_flr_low_packet_count{YType::boolean, "suspect-flr-low-packet-count"},
    suspect_management_latency{YType::boolean, "suspect-management-latency"},
    suspect_memory_allocation_failed{YType::boolean, "suspect-memory-allocation-failed"},
    suspect_misordering{YType::boolean, "suspect-misordering"},
    suspect_multiple_buckets{YType::boolean, "suspect-multiple-buckets"},
    suspect_premature_end{YType::boolean, "suspect-premature-end"},
    suspect_probe_restarted{YType::boolean, "suspect-probe-restarted"},
    suspect_schedule_latency{YType::boolean, "suspect-schedule-latency"},
    suspect_send_fail{YType::boolean, "suspect-send-fail"},
    suspect_start_mid_bucket{YType::boolean, "suspect-start-mid-bucket"},
    time_of_maximum{YType::uint32, "time-of-maximum"},
    time_of_minimum{YType::uint32, "time-of-minimum"}
    	,
    contents(std::make_shared<Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationMetric::Bucket::Contents>())
{
    contents->parent = this;

    yang_name = "bucket"; yang_parent_name = "operation-metric";
}

Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationMetric::Bucket::~Bucket()
{
}

bool Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationMetric::Bucket::has_data() const
{
    return average.is_set
	|| corrupt.is_set
	|| data_lost_count.is_set
	|| data_sent_count.is_set
	|| duplicates.is_set
	|| duration.is_set
	|| lost.is_set
	|| maximum.is_set
	|| minimum.is_set
	|| out_of_order.is_set
	|| overall_flr.is_set
	|| premature_reason.is_set
	|| premature_reason_string.is_set
	|| result_count.is_set
	|| sent.is_set
	|| standard_deviation.is_set
	|| start_at.is_set
	|| suspect_cleared_mid_bucket.is_set
	|| suspect_clock_drift.is_set
	|| suspect_flr_low_packet_count.is_set
	|| suspect_management_latency.is_set
	|| suspect_memory_allocation_failed.is_set
	|| suspect_misordering.is_set
	|| suspect_multiple_buckets.is_set
	|| suspect_premature_end.is_set
	|| suspect_probe_restarted.is_set
	|| suspect_schedule_latency.is_set
	|| suspect_send_fail.is_set
	|| suspect_start_mid_bucket.is_set
	|| time_of_maximum.is_set
	|| time_of_minimum.is_set
	|| (contents !=  nullptr && contents->has_data());
}

bool Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationMetric::Bucket::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(corrupt.yfilter)
	|| ydk::is_set(data_lost_count.yfilter)
	|| ydk::is_set(data_sent_count.yfilter)
	|| ydk::is_set(duplicates.yfilter)
	|| ydk::is_set(duration.yfilter)
	|| ydk::is_set(lost.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(out_of_order.yfilter)
	|| ydk::is_set(overall_flr.yfilter)
	|| ydk::is_set(premature_reason.yfilter)
	|| ydk::is_set(premature_reason_string.yfilter)
	|| ydk::is_set(result_count.yfilter)
	|| ydk::is_set(sent.yfilter)
	|| ydk::is_set(standard_deviation.yfilter)
	|| ydk::is_set(start_at.yfilter)
	|| ydk::is_set(suspect_cleared_mid_bucket.yfilter)
	|| ydk::is_set(suspect_clock_drift.yfilter)
	|| ydk::is_set(suspect_flr_low_packet_count.yfilter)
	|| ydk::is_set(suspect_management_latency.yfilter)
	|| ydk::is_set(suspect_memory_allocation_failed.yfilter)
	|| ydk::is_set(suspect_misordering.yfilter)
	|| ydk::is_set(suspect_multiple_buckets.yfilter)
	|| ydk::is_set(suspect_premature_end.yfilter)
	|| ydk::is_set(suspect_probe_restarted.yfilter)
	|| ydk::is_set(suspect_schedule_latency.yfilter)
	|| ydk::is_set(suspect_send_fail.yfilter)
	|| ydk::is_set(suspect_start_mid_bucket.yfilter)
	|| ydk::is_set(time_of_maximum.yfilter)
	|| ydk::is_set(time_of_minimum.yfilter)
	|| (contents !=  nullptr && contents->has_operation());
}

std::string Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationMetric::Bucket::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bucket";

    return path_buffer.str();

}

const EntityPath Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationMetric::Bucket::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-sla-oper:sla/protocols/Cisco-IOS-XR-ethernet-cfm-oper:ethernet/statistics-on-demand-historicals/statistics-on-demand-historical/operation-metric/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (corrupt.is_set || is_set(corrupt.yfilter)) leaf_name_data.push_back(corrupt.get_name_leafdata());
    if (data_lost_count.is_set || is_set(data_lost_count.yfilter)) leaf_name_data.push_back(data_lost_count.get_name_leafdata());
    if (data_sent_count.is_set || is_set(data_sent_count.yfilter)) leaf_name_data.push_back(data_sent_count.get_name_leafdata());
    if (duplicates.is_set || is_set(duplicates.yfilter)) leaf_name_data.push_back(duplicates.get_name_leafdata());
    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());
    if (lost.is_set || is_set(lost.yfilter)) leaf_name_data.push_back(lost.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (out_of_order.is_set || is_set(out_of_order.yfilter)) leaf_name_data.push_back(out_of_order.get_name_leafdata());
    if (overall_flr.is_set || is_set(overall_flr.yfilter)) leaf_name_data.push_back(overall_flr.get_name_leafdata());
    if (premature_reason.is_set || is_set(premature_reason.yfilter)) leaf_name_data.push_back(premature_reason.get_name_leafdata());
    if (premature_reason_string.is_set || is_set(premature_reason_string.yfilter)) leaf_name_data.push_back(premature_reason_string.get_name_leafdata());
    if (result_count.is_set || is_set(result_count.yfilter)) leaf_name_data.push_back(result_count.get_name_leafdata());
    if (sent.is_set || is_set(sent.yfilter)) leaf_name_data.push_back(sent.get_name_leafdata());
    if (standard_deviation.is_set || is_set(standard_deviation.yfilter)) leaf_name_data.push_back(standard_deviation.get_name_leafdata());
    if (start_at.is_set || is_set(start_at.yfilter)) leaf_name_data.push_back(start_at.get_name_leafdata());
    if (suspect_cleared_mid_bucket.is_set || is_set(suspect_cleared_mid_bucket.yfilter)) leaf_name_data.push_back(suspect_cleared_mid_bucket.get_name_leafdata());
    if (suspect_clock_drift.is_set || is_set(suspect_clock_drift.yfilter)) leaf_name_data.push_back(suspect_clock_drift.get_name_leafdata());
    if (suspect_flr_low_packet_count.is_set || is_set(suspect_flr_low_packet_count.yfilter)) leaf_name_data.push_back(suspect_flr_low_packet_count.get_name_leafdata());
    if (suspect_management_latency.is_set || is_set(suspect_management_latency.yfilter)) leaf_name_data.push_back(suspect_management_latency.get_name_leafdata());
    if (suspect_memory_allocation_failed.is_set || is_set(suspect_memory_allocation_failed.yfilter)) leaf_name_data.push_back(suspect_memory_allocation_failed.get_name_leafdata());
    if (suspect_misordering.is_set || is_set(suspect_misordering.yfilter)) leaf_name_data.push_back(suspect_misordering.get_name_leafdata());
    if (suspect_multiple_buckets.is_set || is_set(suspect_multiple_buckets.yfilter)) leaf_name_data.push_back(suspect_multiple_buckets.get_name_leafdata());
    if (suspect_premature_end.is_set || is_set(suspect_premature_end.yfilter)) leaf_name_data.push_back(suspect_premature_end.get_name_leafdata());
    if (suspect_probe_restarted.is_set || is_set(suspect_probe_restarted.yfilter)) leaf_name_data.push_back(suspect_probe_restarted.get_name_leafdata());
    if (suspect_schedule_latency.is_set || is_set(suspect_schedule_latency.yfilter)) leaf_name_data.push_back(suspect_schedule_latency.get_name_leafdata());
    if (suspect_send_fail.is_set || is_set(suspect_send_fail.yfilter)) leaf_name_data.push_back(suspect_send_fail.get_name_leafdata());
    if (suspect_start_mid_bucket.is_set || is_set(suspect_start_mid_bucket.yfilter)) leaf_name_data.push_back(suspect_start_mid_bucket.get_name_leafdata());
    if (time_of_maximum.is_set || is_set(time_of_maximum.yfilter)) leaf_name_data.push_back(time_of_maximum.get_name_leafdata());
    if (time_of_minimum.is_set || is_set(time_of_minimum.yfilter)) leaf_name_data.push_back(time_of_minimum.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationMetric::Bucket::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "contents")
    {
        if(contents == nullptr)
        {
            contents = std::make_shared<Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationMetric::Bucket::Contents>();
        }
        return contents;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationMetric::Bucket::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(contents != nullptr)
    {
        children["contents"] = contents;
    }

    return children;
}

void Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationMetric::Bucket::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "average")
    {
        average = value;
        average.value_namespace = name_space;
        average.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "corrupt")
    {
        corrupt = value;
        corrupt.value_namespace = name_space;
        corrupt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "data-lost-count")
    {
        data_lost_count = value;
        data_lost_count.value_namespace = name_space;
        data_lost_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "data-sent-count")
    {
        data_sent_count = value;
        data_sent_count.value_namespace = name_space;
        data_sent_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "duplicates")
    {
        duplicates = value;
        duplicates.value_namespace = name_space;
        duplicates.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lost")
    {
        lost = value;
        lost.value_namespace = name_space;
        lost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-of-order")
    {
        out_of_order = value;
        out_of_order.value_namespace = name_space;
        out_of_order.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "overall-flr")
    {
        overall_flr = value;
        overall_flr.value_namespace = name_space;
        overall_flr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "premature-reason")
    {
        premature_reason = value;
        premature_reason.value_namespace = name_space;
        premature_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "premature-reason-string")
    {
        premature_reason_string = value;
        premature_reason_string.value_namespace = name_space;
        premature_reason_string.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "result-count")
    {
        result_count = value;
        result_count.value_namespace = name_space;
        result_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sent")
    {
        sent = value;
        sent.value_namespace = name_space;
        sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "standard-deviation")
    {
        standard_deviation = value;
        standard_deviation.value_namespace = name_space;
        standard_deviation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-at")
    {
        start_at = value;
        start_at.value_namespace = name_space;
        start_at.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suspect-cleared-mid-bucket")
    {
        suspect_cleared_mid_bucket = value;
        suspect_cleared_mid_bucket.value_namespace = name_space;
        suspect_cleared_mid_bucket.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suspect-clock-drift")
    {
        suspect_clock_drift = value;
        suspect_clock_drift.value_namespace = name_space;
        suspect_clock_drift.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suspect-flr-low-packet-count")
    {
        suspect_flr_low_packet_count = value;
        suspect_flr_low_packet_count.value_namespace = name_space;
        suspect_flr_low_packet_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suspect-management-latency")
    {
        suspect_management_latency = value;
        suspect_management_latency.value_namespace = name_space;
        suspect_management_latency.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suspect-memory-allocation-failed")
    {
        suspect_memory_allocation_failed = value;
        suspect_memory_allocation_failed.value_namespace = name_space;
        suspect_memory_allocation_failed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suspect-misordering")
    {
        suspect_misordering = value;
        suspect_misordering.value_namespace = name_space;
        suspect_misordering.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suspect-multiple-buckets")
    {
        suspect_multiple_buckets = value;
        suspect_multiple_buckets.value_namespace = name_space;
        suspect_multiple_buckets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suspect-premature-end")
    {
        suspect_premature_end = value;
        suspect_premature_end.value_namespace = name_space;
        suspect_premature_end.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suspect-probe-restarted")
    {
        suspect_probe_restarted = value;
        suspect_probe_restarted.value_namespace = name_space;
        suspect_probe_restarted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suspect-schedule-latency")
    {
        suspect_schedule_latency = value;
        suspect_schedule_latency.value_namespace = name_space;
        suspect_schedule_latency.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suspect-send-fail")
    {
        suspect_send_fail = value;
        suspect_send_fail.value_namespace = name_space;
        suspect_send_fail.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suspect-start-mid-bucket")
    {
        suspect_start_mid_bucket = value;
        suspect_start_mid_bucket.value_namespace = name_space;
        suspect_start_mid_bucket.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-of-maximum")
    {
        time_of_maximum = value;
        time_of_maximum.value_namespace = name_space;
        time_of_maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-of-minimum")
    {
        time_of_minimum = value;
        time_of_minimum.value_namespace = name_space;
        time_of_minimum.value_namespace_prefix = name_space_prefix;
    }
}

void Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationMetric::Bucket::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "average")
    {
        average.yfilter = yfilter;
    }
    if(value_path == "corrupt")
    {
        corrupt.yfilter = yfilter;
    }
    if(value_path == "data-lost-count")
    {
        data_lost_count.yfilter = yfilter;
    }
    if(value_path == "data-sent-count")
    {
        data_sent_count.yfilter = yfilter;
    }
    if(value_path == "duplicates")
    {
        duplicates.yfilter = yfilter;
    }
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
    }
    if(value_path == "lost")
    {
        lost.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
    if(value_path == "out-of-order")
    {
        out_of_order.yfilter = yfilter;
    }
    if(value_path == "overall-flr")
    {
        overall_flr.yfilter = yfilter;
    }
    if(value_path == "premature-reason")
    {
        premature_reason.yfilter = yfilter;
    }
    if(value_path == "premature-reason-string")
    {
        premature_reason_string.yfilter = yfilter;
    }
    if(value_path == "result-count")
    {
        result_count.yfilter = yfilter;
    }
    if(value_path == "sent")
    {
        sent.yfilter = yfilter;
    }
    if(value_path == "standard-deviation")
    {
        standard_deviation.yfilter = yfilter;
    }
    if(value_path == "start-at")
    {
        start_at.yfilter = yfilter;
    }
    if(value_path == "suspect-cleared-mid-bucket")
    {
        suspect_cleared_mid_bucket.yfilter = yfilter;
    }
    if(value_path == "suspect-clock-drift")
    {
        suspect_clock_drift.yfilter = yfilter;
    }
    if(value_path == "suspect-flr-low-packet-count")
    {
        suspect_flr_low_packet_count.yfilter = yfilter;
    }
    if(value_path == "suspect-management-latency")
    {
        suspect_management_latency.yfilter = yfilter;
    }
    if(value_path == "suspect-memory-allocation-failed")
    {
        suspect_memory_allocation_failed.yfilter = yfilter;
    }
    if(value_path == "suspect-misordering")
    {
        suspect_misordering.yfilter = yfilter;
    }
    if(value_path == "suspect-multiple-buckets")
    {
        suspect_multiple_buckets.yfilter = yfilter;
    }
    if(value_path == "suspect-premature-end")
    {
        suspect_premature_end.yfilter = yfilter;
    }
    if(value_path == "suspect-probe-restarted")
    {
        suspect_probe_restarted.yfilter = yfilter;
    }
    if(value_path == "suspect-schedule-latency")
    {
        suspect_schedule_latency.yfilter = yfilter;
    }
    if(value_path == "suspect-send-fail")
    {
        suspect_send_fail.yfilter = yfilter;
    }
    if(value_path == "suspect-start-mid-bucket")
    {
        suspect_start_mid_bucket.yfilter = yfilter;
    }
    if(value_path == "time-of-maximum")
    {
        time_of_maximum.yfilter = yfilter;
    }
    if(value_path == "time-of-minimum")
    {
        time_of_minimum.yfilter = yfilter;
    }
}

bool Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationMetric::Bucket::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "contents" || name == "average" || name == "corrupt" || name == "data-lost-count" || name == "data-sent-count" || name == "duplicates" || name == "duration" || name == "lost" || name == "maximum" || name == "minimum" || name == "out-of-order" || name == "overall-flr" || name == "premature-reason" || name == "premature-reason-string" || name == "result-count" || name == "sent" || name == "standard-deviation" || name == "start-at" || name == "suspect-cleared-mid-bucket" || name == "suspect-clock-drift" || name == "suspect-flr-low-packet-count" || name == "suspect-management-latency" || name == "suspect-memory-allocation-failed" || name == "suspect-misordering" || name == "suspect-multiple-buckets" || name == "suspect-premature-end" || name == "suspect-probe-restarted" || name == "suspect-schedule-latency" || name == "suspect-send-fail" || name == "suspect-start-mid-bucket" || name == "time-of-maximum" || name == "time-of-minimum")
        return true;
    return false;
}

Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationMetric::Bucket::Contents::Contents()
    :
    bucket_type{YType::enumeration, "bucket-type"}
    	,
    aggregated(std::make_shared<Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationMetric::Bucket::Contents::Aggregated>())
	,unaggregated(std::make_shared<Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationMetric::Bucket::Contents::Unaggregated>())
{
    aggregated->parent = this;

    unaggregated->parent = this;

    yang_name = "contents"; yang_parent_name = "bucket";
}

Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationMetric::Bucket::Contents::~Contents()
{
}

bool Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationMetric::Bucket::Contents::has_data() const
{
    return bucket_type.is_set
	|| (aggregated !=  nullptr && aggregated->has_data())
	|| (unaggregated !=  nullptr && unaggregated->has_data());
}

bool Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationMetric::Bucket::Contents::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bucket_type.yfilter)
	|| (aggregated !=  nullptr && aggregated->has_operation())
	|| (unaggregated !=  nullptr && unaggregated->has_operation());
}

std::string Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationMetric::Bucket::Contents::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "contents";

    return path_buffer.str();

}

const EntityPath Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationMetric::Bucket::Contents::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-sla-oper:sla/protocols/Cisco-IOS-XR-ethernet-cfm-oper:ethernet/statistics-on-demand-historicals/statistics-on-demand-historical/operation-metric/bucket/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bucket_type.is_set || is_set(bucket_type.yfilter)) leaf_name_data.push_back(bucket_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationMetric::Bucket::Contents::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aggregated")
    {
        if(aggregated == nullptr)
        {
            aggregated = std::make_shared<Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationMetric::Bucket::Contents::Aggregated>();
        }
        return aggregated;
    }

    if(child_yang_name == "unaggregated")
    {
        if(unaggregated == nullptr)
        {
            unaggregated = std::make_shared<Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationMetric::Bucket::Contents::Unaggregated>();
        }
        return unaggregated;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationMetric::Bucket::Contents::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(aggregated != nullptr)
    {
        children["aggregated"] = aggregated;
    }

    if(unaggregated != nullptr)
    {
        children["unaggregated"] = unaggregated;
    }

    return children;
}

void Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationMetric::Bucket::Contents::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bucket-type")
    {
        bucket_type = value;
        bucket_type.value_namespace = name_space;
        bucket_type.value_namespace_prefix = name_space_prefix;
    }
}

void Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationMetric::Bucket::Contents::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bucket-type")
    {
        bucket_type.yfilter = yfilter;
    }
}

bool Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationMetric::Bucket::Contents::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aggregated" || name == "unaggregated" || name == "bucket-type")
        return true;
    return false;
}

Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationMetric::Bucket::Contents::Aggregated::Aggregated()
{
    yang_name = "aggregated"; yang_parent_name = "contents";
}

Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationMetric::Bucket::Contents::Aggregated::~Aggregated()
{
}

bool Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationMetric::Bucket::Contents::Aggregated::has_data() const
{
    for (std::size_t index=0; index<bins.size(); index++)
    {
        if(bins[index]->has_data())
            return true;
    }
    return false;
}

bool Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationMetric::Bucket::Contents::Aggregated::has_operation() const
{
    for (std::size_t index=0; index<bins.size(); index++)
    {
        if(bins[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationMetric::Bucket::Contents::Aggregated::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aggregated";

    return path_buffer.str();

}

const EntityPath Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationMetric::Bucket::Contents::Aggregated::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-sla-oper:sla/protocols/Cisco-IOS-XR-ethernet-cfm-oper:ethernet/statistics-on-demand-historicals/statistics-on-demand-historical/operation-metric/bucket/contents/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationMetric::Bucket::Contents::Aggregated::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bins")
    {
        for(auto const & c : bins)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationMetric::Bucket::Contents::Aggregated::Bins>();
        c->parent = this;
        bins.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationMetric::Bucket::Contents::Aggregated::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bins)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationMetric::Bucket::Contents::Aggregated::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationMetric::Bucket::Contents::Aggregated::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationMetric::Bucket::Contents::Aggregated::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bins")
        return true;
    return false;
}

Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationMetric::Bucket::Contents::Aggregated::Bins::Bins()
    :
    count{YType::uint32, "count"},
    lower_bound{YType::int32, "lower-bound"},
    lower_bound_tenths{YType::int32, "lower-bound-tenths"},
    sum{YType::int64, "sum"},
    upper_bound{YType::int32, "upper-bound"},
    upper_bound_tenths{YType::int32, "upper-bound-tenths"}
{
    yang_name = "bins"; yang_parent_name = "aggregated";
}

Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationMetric::Bucket::Contents::Aggregated::Bins::~Bins()
{
}

bool Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationMetric::Bucket::Contents::Aggregated::Bins::has_data() const
{
    return count.is_set
	|| lower_bound.is_set
	|| lower_bound_tenths.is_set
	|| sum.is_set
	|| upper_bound.is_set
	|| upper_bound_tenths.is_set;
}

bool Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationMetric::Bucket::Contents::Aggregated::Bins::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(count.yfilter)
	|| ydk::is_set(lower_bound.yfilter)
	|| ydk::is_set(lower_bound_tenths.yfilter)
	|| ydk::is_set(sum.yfilter)
	|| ydk::is_set(upper_bound.yfilter)
	|| ydk::is_set(upper_bound_tenths.yfilter);
}

std::string Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationMetric::Bucket::Contents::Aggregated::Bins::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bins";

    return path_buffer.str();

}

const EntityPath Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationMetric::Bucket::Contents::Aggregated::Bins::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-sla-oper:sla/protocols/Cisco-IOS-XR-ethernet-cfm-oper:ethernet/statistics-on-demand-historicals/statistics-on-demand-historical/operation-metric/bucket/contents/aggregated/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (count.is_set || is_set(count.yfilter)) leaf_name_data.push_back(count.get_name_leafdata());
    if (lower_bound.is_set || is_set(lower_bound.yfilter)) leaf_name_data.push_back(lower_bound.get_name_leafdata());
    if (lower_bound_tenths.is_set || is_set(lower_bound_tenths.yfilter)) leaf_name_data.push_back(lower_bound_tenths.get_name_leafdata());
    if (sum.is_set || is_set(sum.yfilter)) leaf_name_data.push_back(sum.get_name_leafdata());
    if (upper_bound.is_set || is_set(upper_bound.yfilter)) leaf_name_data.push_back(upper_bound.get_name_leafdata());
    if (upper_bound_tenths.is_set || is_set(upper_bound_tenths.yfilter)) leaf_name_data.push_back(upper_bound_tenths.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationMetric::Bucket::Contents::Aggregated::Bins::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationMetric::Bucket::Contents::Aggregated::Bins::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationMetric::Bucket::Contents::Aggregated::Bins::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "count")
    {
        count = value;
        count.value_namespace = name_space;
        count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lower-bound")
    {
        lower_bound = value;
        lower_bound.value_namespace = name_space;
        lower_bound.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lower-bound-tenths")
    {
        lower_bound_tenths = value;
        lower_bound_tenths.value_namespace = name_space;
        lower_bound_tenths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sum")
    {
        sum = value;
        sum.value_namespace = name_space;
        sum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "upper-bound")
    {
        upper_bound = value;
        upper_bound.value_namespace = name_space;
        upper_bound.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "upper-bound-tenths")
    {
        upper_bound_tenths = value;
        upper_bound_tenths.value_namespace = name_space;
        upper_bound_tenths.value_namespace_prefix = name_space_prefix;
    }
}

void Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationMetric::Bucket::Contents::Aggregated::Bins::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "count")
    {
        count.yfilter = yfilter;
    }
    if(value_path == "lower-bound")
    {
        lower_bound.yfilter = yfilter;
    }
    if(value_path == "lower-bound-tenths")
    {
        lower_bound_tenths.yfilter = yfilter;
    }
    if(value_path == "sum")
    {
        sum.yfilter = yfilter;
    }
    if(value_path == "upper-bound")
    {
        upper_bound.yfilter = yfilter;
    }
    if(value_path == "upper-bound-tenths")
    {
        upper_bound_tenths.yfilter = yfilter;
    }
}

bool Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationMetric::Bucket::Contents::Aggregated::Bins::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "count" || name == "lower-bound" || name == "lower-bound-tenths" || name == "sum" || name == "upper-bound" || name == "upper-bound-tenths")
        return true;
    return false;
}

Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationMetric::Bucket::Contents::Unaggregated::Unaggregated()
{
    yang_name = "unaggregated"; yang_parent_name = "contents";
}

Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationMetric::Bucket::Contents::Unaggregated::~Unaggregated()
{
}

bool Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationMetric::Bucket::Contents::Unaggregated::has_data() const
{
    for (std::size_t index=0; index<sample.size(); index++)
    {
        if(sample[index]->has_data())
            return true;
    }
    return false;
}

bool Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationMetric::Bucket::Contents::Unaggregated::has_operation() const
{
    for (std::size_t index=0; index<sample.size(); index++)
    {
        if(sample[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationMetric::Bucket::Contents::Unaggregated::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unaggregated";

    return path_buffer.str();

}

const EntityPath Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationMetric::Bucket::Contents::Unaggregated::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-sla-oper:sla/protocols/Cisco-IOS-XR-ethernet-cfm-oper:ethernet/statistics-on-demand-historicals/statistics-on-demand-historical/operation-metric/bucket/contents/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationMetric::Bucket::Contents::Unaggregated::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sample")
    {
        for(auto const & c : sample)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationMetric::Bucket::Contents::Unaggregated::Sample>();
        c->parent = this;
        sample.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationMetric::Bucket::Contents::Unaggregated::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sample)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationMetric::Bucket::Contents::Unaggregated::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationMetric::Bucket::Contents::Unaggregated::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationMetric::Bucket::Contents::Unaggregated::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sample")
        return true;
    return false;
}

Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationMetric::Bucket::Contents::Unaggregated::Sample::Sample()
    :
    corrupt{YType::boolean, "corrupt"},
    frames_lost{YType::uint32, "frames-lost"},
    frames_sent{YType::uint32, "frames-sent"},
    no_data_packets{YType::boolean, "no-data-packets"},
    out_of_order{YType::boolean, "out-of-order"},
    result{YType::int32, "result"},
    sent{YType::boolean, "sent"},
    sent_at{YType::uint32, "sent-at"},
    timed_out{YType::boolean, "timed-out"}
{
    yang_name = "sample"; yang_parent_name = "unaggregated";
}

Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationMetric::Bucket::Contents::Unaggregated::Sample::~Sample()
{
}

bool Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationMetric::Bucket::Contents::Unaggregated::Sample::has_data() const
{
    return corrupt.is_set
	|| frames_lost.is_set
	|| frames_sent.is_set
	|| no_data_packets.is_set
	|| out_of_order.is_set
	|| result.is_set
	|| sent.is_set
	|| sent_at.is_set
	|| timed_out.is_set;
}

bool Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationMetric::Bucket::Contents::Unaggregated::Sample::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(corrupt.yfilter)
	|| ydk::is_set(frames_lost.yfilter)
	|| ydk::is_set(frames_sent.yfilter)
	|| ydk::is_set(no_data_packets.yfilter)
	|| ydk::is_set(out_of_order.yfilter)
	|| ydk::is_set(result.yfilter)
	|| ydk::is_set(sent.yfilter)
	|| ydk::is_set(sent_at.yfilter)
	|| ydk::is_set(timed_out.yfilter);
}

std::string Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationMetric::Bucket::Contents::Unaggregated::Sample::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sample";

    return path_buffer.str();

}

const EntityPath Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationMetric::Bucket::Contents::Unaggregated::Sample::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-sla-oper:sla/protocols/Cisco-IOS-XR-ethernet-cfm-oper:ethernet/statistics-on-demand-historicals/statistics-on-demand-historical/operation-metric/bucket/contents/unaggregated/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (corrupt.is_set || is_set(corrupt.yfilter)) leaf_name_data.push_back(corrupt.get_name_leafdata());
    if (frames_lost.is_set || is_set(frames_lost.yfilter)) leaf_name_data.push_back(frames_lost.get_name_leafdata());
    if (frames_sent.is_set || is_set(frames_sent.yfilter)) leaf_name_data.push_back(frames_sent.get_name_leafdata());
    if (no_data_packets.is_set || is_set(no_data_packets.yfilter)) leaf_name_data.push_back(no_data_packets.get_name_leafdata());
    if (out_of_order.is_set || is_set(out_of_order.yfilter)) leaf_name_data.push_back(out_of_order.get_name_leafdata());
    if (result.is_set || is_set(result.yfilter)) leaf_name_data.push_back(result.get_name_leafdata());
    if (sent.is_set || is_set(sent.yfilter)) leaf_name_data.push_back(sent.get_name_leafdata());
    if (sent_at.is_set || is_set(sent_at.yfilter)) leaf_name_data.push_back(sent_at.get_name_leafdata());
    if (timed_out.is_set || is_set(timed_out.yfilter)) leaf_name_data.push_back(timed_out.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationMetric::Bucket::Contents::Unaggregated::Sample::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationMetric::Bucket::Contents::Unaggregated::Sample::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationMetric::Bucket::Contents::Unaggregated::Sample::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "corrupt")
    {
        corrupt = value;
        corrupt.value_namespace = name_space;
        corrupt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frames-lost")
    {
        frames_lost = value;
        frames_lost.value_namespace = name_space;
        frames_lost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frames-sent")
    {
        frames_sent = value;
        frames_sent.value_namespace = name_space;
        frames_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-data-packets")
    {
        no_data_packets = value;
        no_data_packets.value_namespace = name_space;
        no_data_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-of-order")
    {
        out_of_order = value;
        out_of_order.value_namespace = name_space;
        out_of_order.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "result")
    {
        result = value;
        result.value_namespace = name_space;
        result.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sent")
    {
        sent = value;
        sent.value_namespace = name_space;
        sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sent-at")
    {
        sent_at = value;
        sent_at.value_namespace = name_space;
        sent_at.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timed-out")
    {
        timed_out = value;
        timed_out.value_namespace = name_space;
        timed_out.value_namespace_prefix = name_space_prefix;
    }
}

void Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationMetric::Bucket::Contents::Unaggregated::Sample::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "corrupt")
    {
        corrupt.yfilter = yfilter;
    }
    if(value_path == "frames-lost")
    {
        frames_lost.yfilter = yfilter;
    }
    if(value_path == "frames-sent")
    {
        frames_sent.yfilter = yfilter;
    }
    if(value_path == "no-data-packets")
    {
        no_data_packets.yfilter = yfilter;
    }
    if(value_path == "out-of-order")
    {
        out_of_order.yfilter = yfilter;
    }
    if(value_path == "result")
    {
        result.yfilter = yfilter;
    }
    if(value_path == "sent")
    {
        sent.yfilter = yfilter;
    }
    if(value_path == "sent-at")
    {
        sent_at.yfilter = yfilter;
    }
    if(value_path == "timed-out")
    {
        timed_out.yfilter = yfilter;
    }
}

bool Sla::Protocols::Ethernet::StatisticsOnDemandHistoricals::StatisticsOnDemandHistorical::OperationMetric::Bucket::Contents::Unaggregated::Sample::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "corrupt" || name == "frames-lost" || name == "frames-sent" || name == "no-data-packets" || name == "out-of-order" || name == "result" || name == "sent" || name == "sent-at" || name == "timed-out")
        return true;
    return false;
}

Sla::Protocols::Ethernet::ConfigErrors::ConfigErrors()
{
    yang_name = "config-errors"; yang_parent_name = "ethernet";
}

Sla::Protocols::Ethernet::ConfigErrors::~ConfigErrors()
{
}

bool Sla::Protocols::Ethernet::ConfigErrors::has_data() const
{
    for (std::size_t index=0; index<config_error.size(); index++)
    {
        if(config_error[index]->has_data())
            return true;
    }
    return false;
}

bool Sla::Protocols::Ethernet::ConfigErrors::has_operation() const
{
    for (std::size_t index=0; index<config_error.size(); index++)
    {
        if(config_error[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Sla::Protocols::Ethernet::ConfigErrors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config-errors";

    return path_buffer.str();

}

const EntityPath Sla::Protocols::Ethernet::ConfigErrors::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-sla-oper:sla/protocols/Cisco-IOS-XR-ethernet-cfm-oper:ethernet/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Sla::Protocols::Ethernet::ConfigErrors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config-error")
    {
        for(auto const & c : config_error)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Sla::Protocols::Ethernet::ConfigErrors::ConfigError>();
        c->parent = this;
        config_error.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Sla::Protocols::Ethernet::ConfigErrors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : config_error)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Sla::Protocols::Ethernet::ConfigErrors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Sla::Protocols::Ethernet::ConfigErrors::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Sla::Protocols::Ethernet::ConfigErrors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config-error")
        return true;
    return false;
}

Sla::Protocols::Ethernet::ConfigErrors::ConfigError::ConfigError()
    :
    display_short{YType::str, "display-short"},
    domain_name{YType::str, "domain-name"},
    error_string{YType::str, "error-string"},
    interface_name{YType::str, "interface-name"},
    mac_address{YType::str, "mac-address"},
    mep_id{YType::uint32, "mep-id"},
    min_packet_interval_inconsistent{YType::boolean, "min-packet-interval-inconsistent"},
    ow_delay_ds_inconsistent{YType::boolean, "ow-delay-ds-inconsistent"},
    ow_delay_sd_inconsistent{YType::boolean, "ow-delay-sd-inconsistent"},
    ow_jitter_ds_inconsistent{YType::boolean, "ow-jitter-ds-inconsistent"},
    ow_jitter_sd_inconsistent{YType::boolean, "ow-jitter-sd-inconsistent"},
    ow_loss_ds_inconsistent{YType::boolean, "ow-loss-ds-inconsistent"},
    ow_loss_sd_inconsistent{YType::boolean, "ow-loss-sd-inconsistent"},
    packet_pad_inconsistent{YType::boolean, "packet-pad-inconsistent"},
    packet_rand_pad_inconsistent{YType::boolean, "packet-rand-pad-inconsistent"},
    packet_type_inconsistent{YType::boolean, "packet-type-inconsistent"},
    priority_inconsistent{YType::boolean, "priority-inconsistent"},
    probe_too_big{YType::boolean, "probe-too-big"},
    profile_doesnt_exist{YType::boolean, "profile-doesnt-exist"},
    profile_name{YType::str, "profile-name"},
    profile_name_xr{YType::str, "profile-name-xr"},
    rt_delay_inconsistent{YType::boolean, "rt-delay-inconsistent"},
    rt_jitter_inconsistent{YType::boolean, "rt-jitter-inconsistent"},
    synthetic_loss_not_supported{YType::boolean, "synthetic-loss-not-supported"}
{
    yang_name = "config-error"; yang_parent_name = "config-errors";
}

Sla::Protocols::Ethernet::ConfigErrors::ConfigError::~ConfigError()
{
}

bool Sla::Protocols::Ethernet::ConfigErrors::ConfigError::has_data() const
{
    for (auto const & leaf : error_string.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return display_short.is_set
	|| domain_name.is_set
	|| interface_name.is_set
	|| mac_address.is_set
	|| mep_id.is_set
	|| min_packet_interval_inconsistent.is_set
	|| ow_delay_ds_inconsistent.is_set
	|| ow_delay_sd_inconsistent.is_set
	|| ow_jitter_ds_inconsistent.is_set
	|| ow_jitter_sd_inconsistent.is_set
	|| ow_loss_ds_inconsistent.is_set
	|| ow_loss_sd_inconsistent.is_set
	|| packet_pad_inconsistent.is_set
	|| packet_rand_pad_inconsistent.is_set
	|| packet_type_inconsistent.is_set
	|| priority_inconsistent.is_set
	|| probe_too_big.is_set
	|| profile_doesnt_exist.is_set
	|| profile_name.is_set
	|| profile_name_xr.is_set
	|| rt_delay_inconsistent.is_set
	|| rt_jitter_inconsistent.is_set
	|| synthetic_loss_not_supported.is_set;
}

bool Sla::Protocols::Ethernet::ConfigErrors::ConfigError::has_operation() const
{
    for (auto const & leaf : error_string.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(display_short.yfilter)
	|| ydk::is_set(domain_name.yfilter)
	|| ydk::is_set(error_string.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(mep_id.yfilter)
	|| ydk::is_set(min_packet_interval_inconsistent.yfilter)
	|| ydk::is_set(ow_delay_ds_inconsistent.yfilter)
	|| ydk::is_set(ow_delay_sd_inconsistent.yfilter)
	|| ydk::is_set(ow_jitter_ds_inconsistent.yfilter)
	|| ydk::is_set(ow_jitter_sd_inconsistent.yfilter)
	|| ydk::is_set(ow_loss_ds_inconsistent.yfilter)
	|| ydk::is_set(ow_loss_sd_inconsistent.yfilter)
	|| ydk::is_set(packet_pad_inconsistent.yfilter)
	|| ydk::is_set(packet_rand_pad_inconsistent.yfilter)
	|| ydk::is_set(packet_type_inconsistent.yfilter)
	|| ydk::is_set(priority_inconsistent.yfilter)
	|| ydk::is_set(probe_too_big.yfilter)
	|| ydk::is_set(profile_doesnt_exist.yfilter)
	|| ydk::is_set(profile_name.yfilter)
	|| ydk::is_set(profile_name_xr.yfilter)
	|| ydk::is_set(rt_delay_inconsistent.yfilter)
	|| ydk::is_set(rt_jitter_inconsistent.yfilter)
	|| ydk::is_set(synthetic_loss_not_supported.yfilter);
}

std::string Sla::Protocols::Ethernet::ConfigErrors::ConfigError::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config-error";

    return path_buffer.str();

}

const EntityPath Sla::Protocols::Ethernet::ConfigErrors::ConfigError::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-sla-oper:sla/protocols/Cisco-IOS-XR-ethernet-cfm-oper:ethernet/config-errors/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (display_short.is_set || is_set(display_short.yfilter)) leaf_name_data.push_back(display_short.get_name_leafdata());
    if (domain_name.is_set || is_set(domain_name.yfilter)) leaf_name_data.push_back(domain_name.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (mep_id.is_set || is_set(mep_id.yfilter)) leaf_name_data.push_back(mep_id.get_name_leafdata());
    if (min_packet_interval_inconsistent.is_set || is_set(min_packet_interval_inconsistent.yfilter)) leaf_name_data.push_back(min_packet_interval_inconsistent.get_name_leafdata());
    if (ow_delay_ds_inconsistent.is_set || is_set(ow_delay_ds_inconsistent.yfilter)) leaf_name_data.push_back(ow_delay_ds_inconsistent.get_name_leafdata());
    if (ow_delay_sd_inconsistent.is_set || is_set(ow_delay_sd_inconsistent.yfilter)) leaf_name_data.push_back(ow_delay_sd_inconsistent.get_name_leafdata());
    if (ow_jitter_ds_inconsistent.is_set || is_set(ow_jitter_ds_inconsistent.yfilter)) leaf_name_data.push_back(ow_jitter_ds_inconsistent.get_name_leafdata());
    if (ow_jitter_sd_inconsistent.is_set || is_set(ow_jitter_sd_inconsistent.yfilter)) leaf_name_data.push_back(ow_jitter_sd_inconsistent.get_name_leafdata());
    if (ow_loss_ds_inconsistent.is_set || is_set(ow_loss_ds_inconsistent.yfilter)) leaf_name_data.push_back(ow_loss_ds_inconsistent.get_name_leafdata());
    if (ow_loss_sd_inconsistent.is_set || is_set(ow_loss_sd_inconsistent.yfilter)) leaf_name_data.push_back(ow_loss_sd_inconsistent.get_name_leafdata());
    if (packet_pad_inconsistent.is_set || is_set(packet_pad_inconsistent.yfilter)) leaf_name_data.push_back(packet_pad_inconsistent.get_name_leafdata());
    if (packet_rand_pad_inconsistent.is_set || is_set(packet_rand_pad_inconsistent.yfilter)) leaf_name_data.push_back(packet_rand_pad_inconsistent.get_name_leafdata());
    if (packet_type_inconsistent.is_set || is_set(packet_type_inconsistent.yfilter)) leaf_name_data.push_back(packet_type_inconsistent.get_name_leafdata());
    if (priority_inconsistent.is_set || is_set(priority_inconsistent.yfilter)) leaf_name_data.push_back(priority_inconsistent.get_name_leafdata());
    if (probe_too_big.is_set || is_set(probe_too_big.yfilter)) leaf_name_data.push_back(probe_too_big.get_name_leafdata());
    if (profile_doesnt_exist.is_set || is_set(profile_doesnt_exist.yfilter)) leaf_name_data.push_back(profile_doesnt_exist.get_name_leafdata());
    if (profile_name.is_set || is_set(profile_name.yfilter)) leaf_name_data.push_back(profile_name.get_name_leafdata());
    if (profile_name_xr.is_set || is_set(profile_name_xr.yfilter)) leaf_name_data.push_back(profile_name_xr.get_name_leafdata());
    if (rt_delay_inconsistent.is_set || is_set(rt_delay_inconsistent.yfilter)) leaf_name_data.push_back(rt_delay_inconsistent.get_name_leafdata());
    if (rt_jitter_inconsistent.is_set || is_set(rt_jitter_inconsistent.yfilter)) leaf_name_data.push_back(rt_jitter_inconsistent.get_name_leafdata());
    if (synthetic_loss_not_supported.is_set || is_set(synthetic_loss_not_supported.yfilter)) leaf_name_data.push_back(synthetic_loss_not_supported.get_name_leafdata());

    auto error_string_name_datas = error_string.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), error_string_name_datas.begin(), error_string_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Sla::Protocols::Ethernet::ConfigErrors::ConfigError::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Sla::Protocols::Ethernet::ConfigErrors::ConfigError::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Sla::Protocols::Ethernet::ConfigErrors::ConfigError::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "display-short")
    {
        display_short = value;
        display_short.value_namespace = name_space;
        display_short.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "domain-name")
    {
        domain_name = value;
        domain_name.value_namespace = name_space;
        domain_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error-string")
    {
        error_string.append(value);
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mep-id")
    {
        mep_id = value;
        mep_id.value_namespace = name_space;
        mep_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min-packet-interval-inconsistent")
    {
        min_packet_interval_inconsistent = value;
        min_packet_interval_inconsistent.value_namespace = name_space;
        min_packet_interval_inconsistent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ow-delay-ds-inconsistent")
    {
        ow_delay_ds_inconsistent = value;
        ow_delay_ds_inconsistent.value_namespace = name_space;
        ow_delay_ds_inconsistent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ow-delay-sd-inconsistent")
    {
        ow_delay_sd_inconsistent = value;
        ow_delay_sd_inconsistent.value_namespace = name_space;
        ow_delay_sd_inconsistent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ow-jitter-ds-inconsistent")
    {
        ow_jitter_ds_inconsistent = value;
        ow_jitter_ds_inconsistent.value_namespace = name_space;
        ow_jitter_ds_inconsistent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ow-jitter-sd-inconsistent")
    {
        ow_jitter_sd_inconsistent = value;
        ow_jitter_sd_inconsistent.value_namespace = name_space;
        ow_jitter_sd_inconsistent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ow-loss-ds-inconsistent")
    {
        ow_loss_ds_inconsistent = value;
        ow_loss_ds_inconsistent.value_namespace = name_space;
        ow_loss_ds_inconsistent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ow-loss-sd-inconsistent")
    {
        ow_loss_sd_inconsistent = value;
        ow_loss_sd_inconsistent.value_namespace = name_space;
        ow_loss_sd_inconsistent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-pad-inconsistent")
    {
        packet_pad_inconsistent = value;
        packet_pad_inconsistent.value_namespace = name_space;
        packet_pad_inconsistent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-rand-pad-inconsistent")
    {
        packet_rand_pad_inconsistent = value;
        packet_rand_pad_inconsistent.value_namespace = name_space;
        packet_rand_pad_inconsistent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-type-inconsistent")
    {
        packet_type_inconsistent = value;
        packet_type_inconsistent.value_namespace = name_space;
        packet_type_inconsistent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority-inconsistent")
    {
        priority_inconsistent = value;
        priority_inconsistent.value_namespace = name_space;
        priority_inconsistent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "probe-too-big")
    {
        probe_too_big = value;
        probe_too_big.value_namespace = name_space;
        probe_too_big.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "profile-doesnt-exist")
    {
        profile_doesnt_exist = value;
        profile_doesnt_exist.value_namespace = name_space;
        profile_doesnt_exist.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "profile-name")
    {
        profile_name = value;
        profile_name.value_namespace = name_space;
        profile_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "profile-name-xr")
    {
        profile_name_xr = value;
        profile_name_xr.value_namespace = name_space;
        profile_name_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-delay-inconsistent")
    {
        rt_delay_inconsistent = value;
        rt_delay_inconsistent.value_namespace = name_space;
        rt_delay_inconsistent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-jitter-inconsistent")
    {
        rt_jitter_inconsistent = value;
        rt_jitter_inconsistent.value_namespace = name_space;
        rt_jitter_inconsistent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "synthetic-loss-not-supported")
    {
        synthetic_loss_not_supported = value;
        synthetic_loss_not_supported.value_namespace = name_space;
        synthetic_loss_not_supported.value_namespace_prefix = name_space_prefix;
    }
}

void Sla::Protocols::Ethernet::ConfigErrors::ConfigError::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "display-short")
    {
        display_short.yfilter = yfilter;
    }
    if(value_path == "domain-name")
    {
        domain_name.yfilter = yfilter;
    }
    if(value_path == "error-string")
    {
        error_string.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "mep-id")
    {
        mep_id.yfilter = yfilter;
    }
    if(value_path == "min-packet-interval-inconsistent")
    {
        min_packet_interval_inconsistent.yfilter = yfilter;
    }
    if(value_path == "ow-delay-ds-inconsistent")
    {
        ow_delay_ds_inconsistent.yfilter = yfilter;
    }
    if(value_path == "ow-delay-sd-inconsistent")
    {
        ow_delay_sd_inconsistent.yfilter = yfilter;
    }
    if(value_path == "ow-jitter-ds-inconsistent")
    {
        ow_jitter_ds_inconsistent.yfilter = yfilter;
    }
    if(value_path == "ow-jitter-sd-inconsistent")
    {
        ow_jitter_sd_inconsistent.yfilter = yfilter;
    }
    if(value_path == "ow-loss-ds-inconsistent")
    {
        ow_loss_ds_inconsistent.yfilter = yfilter;
    }
    if(value_path == "ow-loss-sd-inconsistent")
    {
        ow_loss_sd_inconsistent.yfilter = yfilter;
    }
    if(value_path == "packet-pad-inconsistent")
    {
        packet_pad_inconsistent.yfilter = yfilter;
    }
    if(value_path == "packet-rand-pad-inconsistent")
    {
        packet_rand_pad_inconsistent.yfilter = yfilter;
    }
    if(value_path == "packet-type-inconsistent")
    {
        packet_type_inconsistent.yfilter = yfilter;
    }
    if(value_path == "priority-inconsistent")
    {
        priority_inconsistent.yfilter = yfilter;
    }
    if(value_path == "probe-too-big")
    {
        probe_too_big.yfilter = yfilter;
    }
    if(value_path == "profile-doesnt-exist")
    {
        profile_doesnt_exist.yfilter = yfilter;
    }
    if(value_path == "profile-name")
    {
        profile_name.yfilter = yfilter;
    }
    if(value_path == "profile-name-xr")
    {
        profile_name_xr.yfilter = yfilter;
    }
    if(value_path == "rt-delay-inconsistent")
    {
        rt_delay_inconsistent.yfilter = yfilter;
    }
    if(value_path == "rt-jitter-inconsistent")
    {
        rt_jitter_inconsistent.yfilter = yfilter;
    }
    if(value_path == "synthetic-loss-not-supported")
    {
        synthetic_loss_not_supported.yfilter = yfilter;
    }
}

bool Sla::Protocols::Ethernet::ConfigErrors::ConfigError::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "display-short" || name == "domain-name" || name == "error-string" || name == "interface-name" || name == "mac-address" || name == "mep-id" || name == "min-packet-interval-inconsistent" || name == "ow-delay-ds-inconsistent" || name == "ow-delay-sd-inconsistent" || name == "ow-jitter-ds-inconsistent" || name == "ow-jitter-sd-inconsistent" || name == "ow-loss-ds-inconsistent" || name == "ow-loss-sd-inconsistent" || name == "packet-pad-inconsistent" || name == "packet-rand-pad-inconsistent" || name == "packet-type-inconsistent" || name == "priority-inconsistent" || name == "probe-too-big" || name == "profile-doesnt-exist" || name == "profile-name" || name == "profile-name-xr" || name == "rt-delay-inconsistent" || name == "rt-jitter-inconsistent" || name == "synthetic-loss-not-supported")
        return true;
    return false;
}

Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperations()
{
    yang_name = "on-demand-operations"; yang_parent_name = "ethernet";
}

Sla::Protocols::Ethernet::OnDemandOperations::~OnDemandOperations()
{
}

bool Sla::Protocols::Ethernet::OnDemandOperations::has_data() const
{
    for (std::size_t index=0; index<on_demand_operation.size(); index++)
    {
        if(on_demand_operation[index]->has_data())
            return true;
    }
    return false;
}

bool Sla::Protocols::Ethernet::OnDemandOperations::has_operation() const
{
    for (std::size_t index=0; index<on_demand_operation.size(); index++)
    {
        if(on_demand_operation[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Sla::Protocols::Ethernet::OnDemandOperations::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "on-demand-operations";

    return path_buffer.str();

}

const EntityPath Sla::Protocols::Ethernet::OnDemandOperations::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-sla-oper:sla/protocols/Cisco-IOS-XR-ethernet-cfm-oper:ethernet/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Sla::Protocols::Ethernet::OnDemandOperations::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "on-demand-operation")
    {
        for(auto const & c : on_demand_operation)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation>();
        c->parent = this;
        on_demand_operation.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Sla::Protocols::Ethernet::OnDemandOperations::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : on_demand_operation)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Sla::Protocols::Ethernet::OnDemandOperations::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Sla::Protocols::Ethernet::OnDemandOperations::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Sla::Protocols::Ethernet::OnDemandOperations::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "on-demand-operation")
        return true;
    return false;
}

Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::OnDemandOperation()
    :
    display_long{YType::str, "display-long"},
    display_short{YType::str, "display-short"},
    domain_name{YType::str, "domain-name"},
    interface_name{YType::str, "interface-name"},
    last_run{YType::uint32, "last-run"},
    mac_address{YType::str, "mac-address"},
    mep_id{YType::uint32, "mep-id"},
    operation_id{YType::uint32, "operation-id"}
    	,
    profile_options(std::make_shared<Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::ProfileOptions>())
	,specific_options(std::make_shared<Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::SpecificOptions>())
{
    profile_options->parent = this;

    specific_options->parent = this;

    yang_name = "on-demand-operation"; yang_parent_name = "on-demand-operations";
}

Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::~OnDemandOperation()
{
}

bool Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::has_data() const
{
    return display_long.is_set
	|| display_short.is_set
	|| domain_name.is_set
	|| interface_name.is_set
	|| last_run.is_set
	|| mac_address.is_set
	|| mep_id.is_set
	|| operation_id.is_set
	|| (profile_options !=  nullptr && profile_options->has_data())
	|| (specific_options !=  nullptr && specific_options->has_data());
}

bool Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(display_long.yfilter)
	|| ydk::is_set(display_short.yfilter)
	|| ydk::is_set(domain_name.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(last_run.yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(mep_id.yfilter)
	|| ydk::is_set(operation_id.yfilter)
	|| (profile_options !=  nullptr && profile_options->has_operation())
	|| (specific_options !=  nullptr && specific_options->has_operation());
}

std::string Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "on-demand-operation";

    return path_buffer.str();

}

const EntityPath Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-sla-oper:sla/protocols/Cisco-IOS-XR-ethernet-cfm-oper:ethernet/on-demand-operations/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (display_long.is_set || is_set(display_long.yfilter)) leaf_name_data.push_back(display_long.get_name_leafdata());
    if (display_short.is_set || is_set(display_short.yfilter)) leaf_name_data.push_back(display_short.get_name_leafdata());
    if (domain_name.is_set || is_set(domain_name.yfilter)) leaf_name_data.push_back(domain_name.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (last_run.is_set || is_set(last_run.yfilter)) leaf_name_data.push_back(last_run.get_name_leafdata());
    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (mep_id.is_set || is_set(mep_id.yfilter)) leaf_name_data.push_back(mep_id.get_name_leafdata());
    if (operation_id.is_set || is_set(operation_id.yfilter)) leaf_name_data.push_back(operation_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "profile-options")
    {
        if(profile_options == nullptr)
        {
            profile_options = std::make_shared<Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::ProfileOptions>();
        }
        return profile_options;
    }

    if(child_yang_name == "specific-options")
    {
        if(specific_options == nullptr)
        {
            specific_options = std::make_shared<Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::SpecificOptions>();
        }
        return specific_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(profile_options != nullptr)
    {
        children["profile-options"] = profile_options;
    }

    if(specific_options != nullptr)
    {
        children["specific-options"] = specific_options;
    }

    return children;
}

void Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "display-long")
    {
        display_long = value;
        display_long.value_namespace = name_space;
        display_long.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "display-short")
    {
        display_short = value;
        display_short.value_namespace = name_space;
        display_short.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "domain-name")
    {
        domain_name = value;
        domain_name.value_namespace = name_space;
        domain_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-run")
    {
        last_run = value;
        last_run.value_namespace = name_space;
        last_run.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mep-id")
    {
        mep_id = value;
        mep_id.value_namespace = name_space;
        mep_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operation-id")
    {
        operation_id = value;
        operation_id.value_namespace = name_space;
        operation_id.value_namespace_prefix = name_space_prefix;
    }
}

void Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "display-long")
    {
        display_long.yfilter = yfilter;
    }
    if(value_path == "display-short")
    {
        display_short.yfilter = yfilter;
    }
    if(value_path == "domain-name")
    {
        domain_name.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "last-run")
    {
        last_run.yfilter = yfilter;
    }
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "mep-id")
    {
        mep_id.yfilter = yfilter;
    }
    if(value_path == "operation-id")
    {
        operation_id.yfilter = yfilter;
    }
}

bool Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "profile-options" || name == "specific-options" || name == "display-long" || name == "display-short" || name == "domain-name" || name == "interface-name" || name == "last-run" || name == "mac-address" || name == "mep-id" || name == "operation-id")
        return true;
    return false;
}

Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::ProfileOptions::ProfileOptions()
    :
    bursts_per_probe{YType::uint32, "bursts-per-probe"},
    flr_calculation_interval{YType::uint32, "flr-calculation-interval"},
    inter_burst_interval{YType::uint32, "inter-burst-interval"},
    inter_packet_interval{YType::uint16, "inter-packet-interval"},
    packets_per_burst{YType::uint16, "packets-per-burst"},
    probe_type{YType::str, "probe-type"}
    	,
    operation_schedule(std::make_shared<Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::ProfileOptions::OperationSchedule>())
	,packet_padding(std::make_shared<Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::ProfileOptions::PacketPadding>())
	,priority(std::make_shared<Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::ProfileOptions::Priority>())
{
    operation_schedule->parent = this;

    packet_padding->parent = this;

    priority->parent = this;

    yang_name = "profile-options"; yang_parent_name = "on-demand-operation";
}

Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::ProfileOptions::~ProfileOptions()
{
}

bool Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::ProfileOptions::has_data() const
{
    for (std::size_t index=0; index<operation_metric.size(); index++)
    {
        if(operation_metric[index]->has_data())
            return true;
    }
    return bursts_per_probe.is_set
	|| flr_calculation_interval.is_set
	|| inter_burst_interval.is_set
	|| inter_packet_interval.is_set
	|| packets_per_burst.is_set
	|| probe_type.is_set
	|| (operation_schedule !=  nullptr && operation_schedule->has_data())
	|| (packet_padding !=  nullptr && packet_padding->has_data())
	|| (priority !=  nullptr && priority->has_data());
}

bool Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::ProfileOptions::has_operation() const
{
    for (std::size_t index=0; index<operation_metric.size(); index++)
    {
        if(operation_metric[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(bursts_per_probe.yfilter)
	|| ydk::is_set(flr_calculation_interval.yfilter)
	|| ydk::is_set(inter_burst_interval.yfilter)
	|| ydk::is_set(inter_packet_interval.yfilter)
	|| ydk::is_set(packets_per_burst.yfilter)
	|| ydk::is_set(probe_type.yfilter)
	|| (operation_schedule !=  nullptr && operation_schedule->has_operation())
	|| (packet_padding !=  nullptr && packet_padding->has_operation())
	|| (priority !=  nullptr && priority->has_operation());
}

std::string Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::ProfileOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "profile-options";

    return path_buffer.str();

}

const EntityPath Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::ProfileOptions::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-sla-oper:sla/protocols/Cisco-IOS-XR-ethernet-cfm-oper:ethernet/on-demand-operations/on-demand-operation/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bursts_per_probe.is_set || is_set(bursts_per_probe.yfilter)) leaf_name_data.push_back(bursts_per_probe.get_name_leafdata());
    if (flr_calculation_interval.is_set || is_set(flr_calculation_interval.yfilter)) leaf_name_data.push_back(flr_calculation_interval.get_name_leafdata());
    if (inter_burst_interval.is_set || is_set(inter_burst_interval.yfilter)) leaf_name_data.push_back(inter_burst_interval.get_name_leafdata());
    if (inter_packet_interval.is_set || is_set(inter_packet_interval.yfilter)) leaf_name_data.push_back(inter_packet_interval.get_name_leafdata());
    if (packets_per_burst.is_set || is_set(packets_per_burst.yfilter)) leaf_name_data.push_back(packets_per_burst.get_name_leafdata());
    if (probe_type.is_set || is_set(probe_type.yfilter)) leaf_name_data.push_back(probe_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::ProfileOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "operation-metric")
    {
        for(auto const & c : operation_metric)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::ProfileOptions::OperationMetric>();
        c->parent = this;
        operation_metric.push_back(c);
        return c;
    }

    if(child_yang_name == "operation-schedule")
    {
        if(operation_schedule == nullptr)
        {
            operation_schedule = std::make_shared<Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::ProfileOptions::OperationSchedule>();
        }
        return operation_schedule;
    }

    if(child_yang_name == "packet-padding")
    {
        if(packet_padding == nullptr)
        {
            packet_padding = std::make_shared<Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::ProfileOptions::PacketPadding>();
        }
        return packet_padding;
    }

    if(child_yang_name == "priority")
    {
        if(priority == nullptr)
        {
            priority = std::make_shared<Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::ProfileOptions::Priority>();
        }
        return priority;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::ProfileOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : operation_metric)
    {
        children[c->get_segment_path()] = c;
    }

    if(operation_schedule != nullptr)
    {
        children["operation-schedule"] = operation_schedule;
    }

    if(packet_padding != nullptr)
    {
        children["packet-padding"] = packet_padding;
    }

    if(priority != nullptr)
    {
        children["priority"] = priority;
    }

    return children;
}

void Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::ProfileOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bursts-per-probe")
    {
        bursts_per_probe = value;
        bursts_per_probe.value_namespace = name_space;
        bursts_per_probe.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flr-calculation-interval")
    {
        flr_calculation_interval = value;
        flr_calculation_interval.value_namespace = name_space;
        flr_calculation_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inter-burst-interval")
    {
        inter_burst_interval = value;
        inter_burst_interval.value_namespace = name_space;
        inter_burst_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inter-packet-interval")
    {
        inter_packet_interval = value;
        inter_packet_interval.value_namespace = name_space;
        inter_packet_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packets-per-burst")
    {
        packets_per_burst = value;
        packets_per_burst.value_namespace = name_space;
        packets_per_burst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "probe-type")
    {
        probe_type = value;
        probe_type.value_namespace = name_space;
        probe_type.value_namespace_prefix = name_space_prefix;
    }
}

void Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::ProfileOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bursts-per-probe")
    {
        bursts_per_probe.yfilter = yfilter;
    }
    if(value_path == "flr-calculation-interval")
    {
        flr_calculation_interval.yfilter = yfilter;
    }
    if(value_path == "inter-burst-interval")
    {
        inter_burst_interval.yfilter = yfilter;
    }
    if(value_path == "inter-packet-interval")
    {
        inter_packet_interval.yfilter = yfilter;
    }
    if(value_path == "packets-per-burst")
    {
        packets_per_burst.yfilter = yfilter;
    }
    if(value_path == "probe-type")
    {
        probe_type.yfilter = yfilter;
    }
}

bool Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::ProfileOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "operation-metric" || name == "operation-schedule" || name == "packet-padding" || name == "priority" || name == "bursts-per-probe" || name == "flr-calculation-interval" || name == "inter-burst-interval" || name == "inter-packet-interval" || name == "packets-per-burst" || name == "probe-type")
        return true;
    return false;
}

Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::ProfileOptions::PacketPadding::PacketPadding()
    :
    packet_pad_size{YType::uint16, "packet-pad-size"},
    test_pattern_pad_hex_string{YType::uint32, "test-pattern-pad-hex-string"},
    test_pattern_pad_scheme{YType::enumeration, "test-pattern-pad-scheme"}
{
    yang_name = "packet-padding"; yang_parent_name = "profile-options";
}

Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::ProfileOptions::PacketPadding::~PacketPadding()
{
}

bool Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::ProfileOptions::PacketPadding::has_data() const
{
    return packet_pad_size.is_set
	|| test_pattern_pad_hex_string.is_set
	|| test_pattern_pad_scheme.is_set;
}

bool Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::ProfileOptions::PacketPadding::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packet_pad_size.yfilter)
	|| ydk::is_set(test_pattern_pad_hex_string.yfilter)
	|| ydk::is_set(test_pattern_pad_scheme.yfilter);
}

std::string Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::ProfileOptions::PacketPadding::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "packet-padding";

    return path_buffer.str();

}

const EntityPath Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::ProfileOptions::PacketPadding::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-sla-oper:sla/protocols/Cisco-IOS-XR-ethernet-cfm-oper:ethernet/on-demand-operations/on-demand-operation/profile-options/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packet_pad_size.is_set || is_set(packet_pad_size.yfilter)) leaf_name_data.push_back(packet_pad_size.get_name_leafdata());
    if (test_pattern_pad_hex_string.is_set || is_set(test_pattern_pad_hex_string.yfilter)) leaf_name_data.push_back(test_pattern_pad_hex_string.get_name_leafdata());
    if (test_pattern_pad_scheme.is_set || is_set(test_pattern_pad_scheme.yfilter)) leaf_name_data.push_back(test_pattern_pad_scheme.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::ProfileOptions::PacketPadding::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::ProfileOptions::PacketPadding::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::ProfileOptions::PacketPadding::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packet-pad-size")
    {
        packet_pad_size = value;
        packet_pad_size.value_namespace = name_space;
        packet_pad_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "test-pattern-pad-hex-string")
    {
        test_pattern_pad_hex_string = value;
        test_pattern_pad_hex_string.value_namespace = name_space;
        test_pattern_pad_hex_string.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "test-pattern-pad-scheme")
    {
        test_pattern_pad_scheme = value;
        test_pattern_pad_scheme.value_namespace = name_space;
        test_pattern_pad_scheme.value_namespace_prefix = name_space_prefix;
    }
}

void Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::ProfileOptions::PacketPadding::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packet-pad-size")
    {
        packet_pad_size.yfilter = yfilter;
    }
    if(value_path == "test-pattern-pad-hex-string")
    {
        test_pattern_pad_hex_string.yfilter = yfilter;
    }
    if(value_path == "test-pattern-pad-scheme")
    {
        test_pattern_pad_scheme.yfilter = yfilter;
    }
}

bool Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::ProfileOptions::PacketPadding::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packet-pad-size" || name == "test-pattern-pad-hex-string" || name == "test-pattern-pad-scheme")
        return true;
    return false;
}

Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::ProfileOptions::Priority::Priority()
    :
    cos{YType::uint8, "cos"},
    priority_type{YType::enumeration, "priority-type"}
{
    yang_name = "priority"; yang_parent_name = "profile-options";
}

Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::ProfileOptions::Priority::~Priority()
{
}

bool Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::ProfileOptions::Priority::has_data() const
{
    return cos.is_set
	|| priority_type.is_set;
}

bool Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::ProfileOptions::Priority::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cos.yfilter)
	|| ydk::is_set(priority_type.yfilter);
}

std::string Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::ProfileOptions::Priority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority";

    return path_buffer.str();

}

const EntityPath Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::ProfileOptions::Priority::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-sla-oper:sla/protocols/Cisco-IOS-XR-ethernet-cfm-oper:ethernet/on-demand-operations/on-demand-operation/profile-options/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cos.is_set || is_set(cos.yfilter)) leaf_name_data.push_back(cos.get_name_leafdata());
    if (priority_type.is_set || is_set(priority_type.yfilter)) leaf_name_data.push_back(priority_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::ProfileOptions::Priority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::ProfileOptions::Priority::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::ProfileOptions::Priority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cos")
    {
        cos = value;
        cos.value_namespace = name_space;
        cos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority-type")
    {
        priority_type = value;
        priority_type.value_namespace = name_space;
        priority_type.value_namespace_prefix = name_space_prefix;
    }
}

void Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::ProfileOptions::Priority::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cos")
    {
        cos.yfilter = yfilter;
    }
    if(value_path == "priority-type")
    {
        priority_type.yfilter = yfilter;
    }
}

bool Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::ProfileOptions::Priority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cos" || name == "priority-type")
        return true;
    return false;
}

Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::ProfileOptions::OperationSchedule::OperationSchedule()
    :
    schedule_duration{YType::uint32, "schedule-duration"},
    schedule_interval{YType::uint32, "schedule-interval"},
    start_time{YType::uint32, "start-time"},
    start_time_configured{YType::boolean, "start-time-configured"}
{
    yang_name = "operation-schedule"; yang_parent_name = "profile-options";
}

Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::ProfileOptions::OperationSchedule::~OperationSchedule()
{
}

bool Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::ProfileOptions::OperationSchedule::has_data() const
{
    return schedule_duration.is_set
	|| schedule_interval.is_set
	|| start_time.is_set
	|| start_time_configured.is_set;
}

bool Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::ProfileOptions::OperationSchedule::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(schedule_duration.yfilter)
	|| ydk::is_set(schedule_interval.yfilter)
	|| ydk::is_set(start_time.yfilter)
	|| ydk::is_set(start_time_configured.yfilter);
}

std::string Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::ProfileOptions::OperationSchedule::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "operation-schedule";

    return path_buffer.str();

}

const EntityPath Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::ProfileOptions::OperationSchedule::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-sla-oper:sla/protocols/Cisco-IOS-XR-ethernet-cfm-oper:ethernet/on-demand-operations/on-demand-operation/profile-options/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (schedule_duration.is_set || is_set(schedule_duration.yfilter)) leaf_name_data.push_back(schedule_duration.get_name_leafdata());
    if (schedule_interval.is_set || is_set(schedule_interval.yfilter)) leaf_name_data.push_back(schedule_interval.get_name_leafdata());
    if (start_time.is_set || is_set(start_time.yfilter)) leaf_name_data.push_back(start_time.get_name_leafdata());
    if (start_time_configured.is_set || is_set(start_time_configured.yfilter)) leaf_name_data.push_back(start_time_configured.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::ProfileOptions::OperationSchedule::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::ProfileOptions::OperationSchedule::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::ProfileOptions::OperationSchedule::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "schedule-duration")
    {
        schedule_duration = value;
        schedule_duration.value_namespace = name_space;
        schedule_duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "schedule-interval")
    {
        schedule_interval = value;
        schedule_interval.value_namespace = name_space;
        schedule_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-time")
    {
        start_time = value;
        start_time.value_namespace = name_space;
        start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-time-configured")
    {
        start_time_configured = value;
        start_time_configured.value_namespace = name_space;
        start_time_configured.value_namespace_prefix = name_space_prefix;
    }
}

void Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::ProfileOptions::OperationSchedule::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "schedule-duration")
    {
        schedule_duration.yfilter = yfilter;
    }
    if(value_path == "schedule-interval")
    {
        schedule_interval.yfilter = yfilter;
    }
    if(value_path == "start-time")
    {
        start_time.yfilter = yfilter;
    }
    if(value_path == "start-time-configured")
    {
        start_time_configured.yfilter = yfilter;
    }
}

bool Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::ProfileOptions::OperationSchedule::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "schedule-duration" || name == "schedule-interval" || name == "start-time" || name == "start-time-configured")
        return true;
    return false;
}

Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::ProfileOptions::OperationMetric::OperationMetric()
    :
    current_buckets_archive{YType::uint32, "current-buckets-archive"}
    	,
    metric_config(std::make_shared<Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::ProfileOptions::OperationMetric::MetricConfig>())
{
    metric_config->parent = this;

    yang_name = "operation-metric"; yang_parent_name = "profile-options";
}

Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::ProfileOptions::OperationMetric::~OperationMetric()
{
}

bool Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::ProfileOptions::OperationMetric::has_data() const
{
    return current_buckets_archive.is_set
	|| (metric_config !=  nullptr && metric_config->has_data());
}

bool Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::ProfileOptions::OperationMetric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(current_buckets_archive.yfilter)
	|| (metric_config !=  nullptr && metric_config->has_operation());
}

std::string Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::ProfileOptions::OperationMetric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "operation-metric";

    return path_buffer.str();

}

const EntityPath Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::ProfileOptions::OperationMetric::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-sla-oper:sla/protocols/Cisco-IOS-XR-ethernet-cfm-oper:ethernet/on-demand-operations/on-demand-operation/profile-options/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (current_buckets_archive.is_set || is_set(current_buckets_archive.yfilter)) leaf_name_data.push_back(current_buckets_archive.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::ProfileOptions::OperationMetric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metric-config")
    {
        if(metric_config == nullptr)
        {
            metric_config = std::make_shared<Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::ProfileOptions::OperationMetric::MetricConfig>();
        }
        return metric_config;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::ProfileOptions::OperationMetric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(metric_config != nullptr)
    {
        children["metric-config"] = metric_config;
    }

    return children;
}

void Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::ProfileOptions::OperationMetric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "current-buckets-archive")
    {
        current_buckets_archive = value;
        current_buckets_archive.value_namespace = name_space;
        current_buckets_archive.value_namespace_prefix = name_space_prefix;
    }
}

void Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::ProfileOptions::OperationMetric::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "current-buckets-archive")
    {
        current_buckets_archive.yfilter = yfilter;
    }
}

bool Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::ProfileOptions::OperationMetric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric-config" || name == "current-buckets-archive")
        return true;
    return false;
}

Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::ProfileOptions::OperationMetric::MetricConfig::MetricConfig()
    :
    bins_count{YType::uint16, "bins-count"},
    bins_width{YType::uint16, "bins-width"},
    bucket_size{YType::uint8, "bucket-size"},
    bucket_size_unit{YType::enumeration, "bucket-size-unit"},
    buckets_archive{YType::uint32, "buckets-archive"},
    metric_type{YType::enumeration, "metric-type"}
{
    yang_name = "metric-config"; yang_parent_name = "operation-metric";
}

Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::ProfileOptions::OperationMetric::MetricConfig::~MetricConfig()
{
}

bool Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::ProfileOptions::OperationMetric::MetricConfig::has_data() const
{
    return bins_count.is_set
	|| bins_width.is_set
	|| bucket_size.is_set
	|| bucket_size_unit.is_set
	|| buckets_archive.is_set
	|| metric_type.is_set;
}

bool Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::ProfileOptions::OperationMetric::MetricConfig::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bins_count.yfilter)
	|| ydk::is_set(bins_width.yfilter)
	|| ydk::is_set(bucket_size.yfilter)
	|| ydk::is_set(bucket_size_unit.yfilter)
	|| ydk::is_set(buckets_archive.yfilter)
	|| ydk::is_set(metric_type.yfilter);
}

std::string Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::ProfileOptions::OperationMetric::MetricConfig::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric-config";

    return path_buffer.str();

}

const EntityPath Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::ProfileOptions::OperationMetric::MetricConfig::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-sla-oper:sla/protocols/Cisco-IOS-XR-ethernet-cfm-oper:ethernet/on-demand-operations/on-demand-operation/profile-options/operation-metric/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bins_count.is_set || is_set(bins_count.yfilter)) leaf_name_data.push_back(bins_count.get_name_leafdata());
    if (bins_width.is_set || is_set(bins_width.yfilter)) leaf_name_data.push_back(bins_width.get_name_leafdata());
    if (bucket_size.is_set || is_set(bucket_size.yfilter)) leaf_name_data.push_back(bucket_size.get_name_leafdata());
    if (bucket_size_unit.is_set || is_set(bucket_size_unit.yfilter)) leaf_name_data.push_back(bucket_size_unit.get_name_leafdata());
    if (buckets_archive.is_set || is_set(buckets_archive.yfilter)) leaf_name_data.push_back(buckets_archive.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::ProfileOptions::OperationMetric::MetricConfig::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::ProfileOptions::OperationMetric::MetricConfig::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::ProfileOptions::OperationMetric::MetricConfig::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bins-count")
    {
        bins_count = value;
        bins_count.value_namespace = name_space;
        bins_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bins-width")
    {
        bins_width = value;
        bins_width.value_namespace = name_space;
        bins_width.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bucket-size")
    {
        bucket_size = value;
        bucket_size.value_namespace = name_space;
        bucket_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bucket-size-unit")
    {
        bucket_size_unit = value;
        bucket_size_unit.value_namespace = name_space;
        bucket_size_unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "buckets-archive")
    {
        buckets_archive = value;
        buckets_archive.value_namespace = name_space;
        buckets_archive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
}

void Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::ProfileOptions::OperationMetric::MetricConfig::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bins-count")
    {
        bins_count.yfilter = yfilter;
    }
    if(value_path == "bins-width")
    {
        bins_width.yfilter = yfilter;
    }
    if(value_path == "bucket-size")
    {
        bucket_size.yfilter = yfilter;
    }
    if(value_path == "bucket-size-unit")
    {
        bucket_size_unit.yfilter = yfilter;
    }
    if(value_path == "buckets-archive")
    {
        buckets_archive.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
}

bool Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::ProfileOptions::OperationMetric::MetricConfig::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bins-count" || name == "bins-width" || name == "bucket-size" || name == "bucket-size-unit" || name == "buckets-archive" || name == "metric-type")
        return true;
    return false;
}

Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::SpecificOptions::SpecificOptions()
    :
    oper_type{YType::enumeration, "oper-type"}
    	,
    configured_operation_options(std::make_shared<Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::SpecificOptions::ConfiguredOperationOptions>())
	,ondemand_operation_options(std::make_shared<Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::SpecificOptions::OndemandOperationOptions>())
{
    configured_operation_options->parent = this;

    ondemand_operation_options->parent = this;

    yang_name = "specific-options"; yang_parent_name = "on-demand-operation";
}

Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::SpecificOptions::~SpecificOptions()
{
}

bool Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::SpecificOptions::has_data() const
{
    return oper_type.is_set
	|| (configured_operation_options !=  nullptr && configured_operation_options->has_data())
	|| (ondemand_operation_options !=  nullptr && ondemand_operation_options->has_data());
}

bool Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::SpecificOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(oper_type.yfilter)
	|| (configured_operation_options !=  nullptr && configured_operation_options->has_operation())
	|| (ondemand_operation_options !=  nullptr && ondemand_operation_options->has_operation());
}

std::string Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::SpecificOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "specific-options";

    return path_buffer.str();

}

const EntityPath Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::SpecificOptions::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-sla-oper:sla/protocols/Cisco-IOS-XR-ethernet-cfm-oper:ethernet/on-demand-operations/on-demand-operation/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (oper_type.is_set || is_set(oper_type.yfilter)) leaf_name_data.push_back(oper_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::SpecificOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "configured-operation-options")
    {
        if(configured_operation_options == nullptr)
        {
            configured_operation_options = std::make_shared<Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::SpecificOptions::ConfiguredOperationOptions>();
        }
        return configured_operation_options;
    }

    if(child_yang_name == "ondemand-operation-options")
    {
        if(ondemand_operation_options == nullptr)
        {
            ondemand_operation_options = std::make_shared<Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::SpecificOptions::OndemandOperationOptions>();
        }
        return ondemand_operation_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::SpecificOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(configured_operation_options != nullptr)
    {
        children["configured-operation-options"] = configured_operation_options;
    }

    if(ondemand_operation_options != nullptr)
    {
        children["ondemand-operation-options"] = ondemand_operation_options;
    }

    return children;
}

void Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::SpecificOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "oper-type")
    {
        oper_type = value;
        oper_type.value_namespace = name_space;
        oper_type.value_namespace_prefix = name_space_prefix;
    }
}

void Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::SpecificOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "oper-type")
    {
        oper_type.yfilter = yfilter;
    }
}

bool Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::SpecificOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "configured-operation-options" || name == "ondemand-operation-options" || name == "oper-type")
        return true;
    return false;
}

Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::SpecificOptions::ConfiguredOperationOptions::ConfiguredOperationOptions()
    :
    profile_name{YType::str, "profile-name"}
{
    yang_name = "configured-operation-options"; yang_parent_name = "specific-options";
}

Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::SpecificOptions::ConfiguredOperationOptions::~ConfiguredOperationOptions()
{
}

bool Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::SpecificOptions::ConfiguredOperationOptions::has_data() const
{
    return profile_name.is_set;
}

bool Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::SpecificOptions::ConfiguredOperationOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(profile_name.yfilter);
}

std::string Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::SpecificOptions::ConfiguredOperationOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "configured-operation-options";

    return path_buffer.str();

}

const EntityPath Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::SpecificOptions::ConfiguredOperationOptions::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-sla-oper:sla/protocols/Cisco-IOS-XR-ethernet-cfm-oper:ethernet/on-demand-operations/on-demand-operation/specific-options/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (profile_name.is_set || is_set(profile_name.yfilter)) leaf_name_data.push_back(profile_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::SpecificOptions::ConfiguredOperationOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::SpecificOptions::ConfiguredOperationOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::SpecificOptions::ConfiguredOperationOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "profile-name")
    {
        profile_name = value;
        profile_name.value_namespace = name_space;
        profile_name.value_namespace_prefix = name_space_prefix;
    }
}

void Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::SpecificOptions::ConfiguredOperationOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "profile-name")
    {
        profile_name.yfilter = yfilter;
    }
}

bool Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::SpecificOptions::ConfiguredOperationOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "profile-name")
        return true;
    return false;
}

Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::SpecificOptions::OndemandOperationOptions::OndemandOperationOptions()
    :
    ondemand_operation_id{YType::uint32, "ondemand-operation-id"},
    probe_count{YType::uint8, "probe-count"}
{
    yang_name = "ondemand-operation-options"; yang_parent_name = "specific-options";
}

Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::SpecificOptions::OndemandOperationOptions::~OndemandOperationOptions()
{
}

bool Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::SpecificOptions::OndemandOperationOptions::has_data() const
{
    return ondemand_operation_id.is_set
	|| probe_count.is_set;
}

bool Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::SpecificOptions::OndemandOperationOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ondemand_operation_id.yfilter)
	|| ydk::is_set(probe_count.yfilter);
}

std::string Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::SpecificOptions::OndemandOperationOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ondemand-operation-options";

    return path_buffer.str();

}

const EntityPath Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::SpecificOptions::OndemandOperationOptions::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-sla-oper:sla/protocols/Cisco-IOS-XR-ethernet-cfm-oper:ethernet/on-demand-operations/on-demand-operation/specific-options/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ondemand_operation_id.is_set || is_set(ondemand_operation_id.yfilter)) leaf_name_data.push_back(ondemand_operation_id.get_name_leafdata());
    if (probe_count.is_set || is_set(probe_count.yfilter)) leaf_name_data.push_back(probe_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::SpecificOptions::OndemandOperationOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::SpecificOptions::OndemandOperationOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::SpecificOptions::OndemandOperationOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ondemand-operation-id")
    {
        ondemand_operation_id = value;
        ondemand_operation_id.value_namespace = name_space;
        ondemand_operation_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "probe-count")
    {
        probe_count = value;
        probe_count.value_namespace = name_space;
        probe_count.value_namespace_prefix = name_space_prefix;
    }
}

void Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::SpecificOptions::OndemandOperationOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ondemand-operation-id")
    {
        ondemand_operation_id.yfilter = yfilter;
    }
    if(value_path == "probe-count")
    {
        probe_count.yfilter = yfilter;
    }
}

bool Sla::Protocols::Ethernet::OnDemandOperations::OnDemandOperation::SpecificOptions::OndemandOperationOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ondemand-operation-id" || name == "probe-count")
        return true;
    return false;
}

Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrents()
{
    yang_name = "statistics-currents"; yang_parent_name = "ethernet";
}

Sla::Protocols::Ethernet::StatisticsCurrents::~StatisticsCurrents()
{
}

bool Sla::Protocols::Ethernet::StatisticsCurrents::has_data() const
{
    for (std::size_t index=0; index<statistics_current.size(); index++)
    {
        if(statistics_current[index]->has_data())
            return true;
    }
    return false;
}

bool Sla::Protocols::Ethernet::StatisticsCurrents::has_operation() const
{
    for (std::size_t index=0; index<statistics_current.size(); index++)
    {
        if(statistics_current[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Sla::Protocols::Ethernet::StatisticsCurrents::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics-currents";

    return path_buffer.str();

}

const EntityPath Sla::Protocols::Ethernet::StatisticsCurrents::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-sla-oper:sla/protocols/Cisco-IOS-XR-ethernet-cfm-oper:ethernet/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Sla::Protocols::Ethernet::StatisticsCurrents::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "statistics-current")
    {
        for(auto const & c : statistics_current)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent>();
        c->parent = this;
        statistics_current.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Sla::Protocols::Ethernet::StatisticsCurrents::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : statistics_current)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Sla::Protocols::Ethernet::StatisticsCurrents::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Sla::Protocols::Ethernet::StatisticsCurrents::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Sla::Protocols::Ethernet::StatisticsCurrents::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "statistics-current")
        return true;
    return false;
}

Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::StatisticsCurrent()
    :
    display_long{YType::str, "display-long"},
    display_short{YType::str, "display-short"},
    domain_name{YType::str, "domain-name"},
    flr_calculation_interval{YType::uint32, "flr-calculation-interval"},
    interface_name{YType::str, "interface-name"},
    mac_address{YType::str, "mac-address"},
    mep_id{YType::uint32, "mep-id"},
    probe_type{YType::str, "probe-type"},
    profile_name{YType::str, "profile-name"}
    	,
    operation_schedule(std::make_shared<Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationSchedule>())
	,specific_options(std::make_shared<Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::SpecificOptions>())
{
    operation_schedule->parent = this;

    specific_options->parent = this;

    yang_name = "statistics-current"; yang_parent_name = "statistics-currents";
}

Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::~StatisticsCurrent()
{
}

bool Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::has_data() const
{
    for (std::size_t index=0; index<operation_metric.size(); index++)
    {
        if(operation_metric[index]->has_data())
            return true;
    }
    return display_long.is_set
	|| display_short.is_set
	|| domain_name.is_set
	|| flr_calculation_interval.is_set
	|| interface_name.is_set
	|| mac_address.is_set
	|| mep_id.is_set
	|| probe_type.is_set
	|| profile_name.is_set
	|| (operation_schedule !=  nullptr && operation_schedule->has_data())
	|| (specific_options !=  nullptr && specific_options->has_data());
}

bool Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::has_operation() const
{
    for (std::size_t index=0; index<operation_metric.size(); index++)
    {
        if(operation_metric[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(display_long.yfilter)
	|| ydk::is_set(display_short.yfilter)
	|| ydk::is_set(domain_name.yfilter)
	|| ydk::is_set(flr_calculation_interval.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(mep_id.yfilter)
	|| ydk::is_set(probe_type.yfilter)
	|| ydk::is_set(profile_name.yfilter)
	|| (operation_schedule !=  nullptr && operation_schedule->has_operation())
	|| (specific_options !=  nullptr && specific_options->has_operation());
}

std::string Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics-current";

    return path_buffer.str();

}

const EntityPath Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-sla-oper:sla/protocols/Cisco-IOS-XR-ethernet-cfm-oper:ethernet/statistics-currents/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (display_long.is_set || is_set(display_long.yfilter)) leaf_name_data.push_back(display_long.get_name_leafdata());
    if (display_short.is_set || is_set(display_short.yfilter)) leaf_name_data.push_back(display_short.get_name_leafdata());
    if (domain_name.is_set || is_set(domain_name.yfilter)) leaf_name_data.push_back(domain_name.get_name_leafdata());
    if (flr_calculation_interval.is_set || is_set(flr_calculation_interval.yfilter)) leaf_name_data.push_back(flr_calculation_interval.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (mep_id.is_set || is_set(mep_id.yfilter)) leaf_name_data.push_back(mep_id.get_name_leafdata());
    if (probe_type.is_set || is_set(probe_type.yfilter)) leaf_name_data.push_back(probe_type.get_name_leafdata());
    if (profile_name.is_set || is_set(profile_name.yfilter)) leaf_name_data.push_back(profile_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "operation-metric")
    {
        for(auto const & c : operation_metric)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationMetric>();
        c->parent = this;
        operation_metric.push_back(c);
        return c;
    }

    if(child_yang_name == "operation-schedule")
    {
        if(operation_schedule == nullptr)
        {
            operation_schedule = std::make_shared<Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationSchedule>();
        }
        return operation_schedule;
    }

    if(child_yang_name == "specific-options")
    {
        if(specific_options == nullptr)
        {
            specific_options = std::make_shared<Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::SpecificOptions>();
        }
        return specific_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : operation_metric)
    {
        children[c->get_segment_path()] = c;
    }

    if(operation_schedule != nullptr)
    {
        children["operation-schedule"] = operation_schedule;
    }

    if(specific_options != nullptr)
    {
        children["specific-options"] = specific_options;
    }

    return children;
}

void Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "display-long")
    {
        display_long = value;
        display_long.value_namespace = name_space;
        display_long.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "display-short")
    {
        display_short = value;
        display_short.value_namespace = name_space;
        display_short.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "domain-name")
    {
        domain_name = value;
        domain_name.value_namespace = name_space;
        domain_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flr-calculation-interval")
    {
        flr_calculation_interval = value;
        flr_calculation_interval.value_namespace = name_space;
        flr_calculation_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mep-id")
    {
        mep_id = value;
        mep_id.value_namespace = name_space;
        mep_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "probe-type")
    {
        probe_type = value;
        probe_type.value_namespace = name_space;
        probe_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "profile-name")
    {
        profile_name = value;
        profile_name.value_namespace = name_space;
        profile_name.value_namespace_prefix = name_space_prefix;
    }
}

void Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "display-long")
    {
        display_long.yfilter = yfilter;
    }
    if(value_path == "display-short")
    {
        display_short.yfilter = yfilter;
    }
    if(value_path == "domain-name")
    {
        domain_name.yfilter = yfilter;
    }
    if(value_path == "flr-calculation-interval")
    {
        flr_calculation_interval.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "mep-id")
    {
        mep_id.yfilter = yfilter;
    }
    if(value_path == "probe-type")
    {
        probe_type.yfilter = yfilter;
    }
    if(value_path == "profile-name")
    {
        profile_name.yfilter = yfilter;
    }
}

bool Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "operation-metric" || name == "operation-schedule" || name == "specific-options" || name == "display-long" || name == "display-short" || name == "domain-name" || name == "flr-calculation-interval" || name == "interface-name" || name == "mac-address" || name == "mep-id" || name == "probe-type" || name == "profile-name")
        return true;
    return false;
}

Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::SpecificOptions::SpecificOptions()
    :
    oper_type{YType::enumeration, "oper-type"}
    	,
    configured_operation_options(std::make_shared<Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::SpecificOptions::ConfiguredOperationOptions>())
	,ondemand_operation_options(std::make_shared<Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::SpecificOptions::OndemandOperationOptions>())
{
    configured_operation_options->parent = this;

    ondemand_operation_options->parent = this;

    yang_name = "specific-options"; yang_parent_name = "statistics-current";
}

Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::SpecificOptions::~SpecificOptions()
{
}

bool Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::SpecificOptions::has_data() const
{
    return oper_type.is_set
	|| (configured_operation_options !=  nullptr && configured_operation_options->has_data())
	|| (ondemand_operation_options !=  nullptr && ondemand_operation_options->has_data());
}

bool Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::SpecificOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(oper_type.yfilter)
	|| (configured_operation_options !=  nullptr && configured_operation_options->has_operation())
	|| (ondemand_operation_options !=  nullptr && ondemand_operation_options->has_operation());
}

std::string Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::SpecificOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "specific-options";

    return path_buffer.str();

}

const EntityPath Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::SpecificOptions::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-sla-oper:sla/protocols/Cisco-IOS-XR-ethernet-cfm-oper:ethernet/statistics-currents/statistics-current/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (oper_type.is_set || is_set(oper_type.yfilter)) leaf_name_data.push_back(oper_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::SpecificOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "configured-operation-options")
    {
        if(configured_operation_options == nullptr)
        {
            configured_operation_options = std::make_shared<Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::SpecificOptions::ConfiguredOperationOptions>();
        }
        return configured_operation_options;
    }

    if(child_yang_name == "ondemand-operation-options")
    {
        if(ondemand_operation_options == nullptr)
        {
            ondemand_operation_options = std::make_shared<Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::SpecificOptions::OndemandOperationOptions>();
        }
        return ondemand_operation_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::SpecificOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(configured_operation_options != nullptr)
    {
        children["configured-operation-options"] = configured_operation_options;
    }

    if(ondemand_operation_options != nullptr)
    {
        children["ondemand-operation-options"] = ondemand_operation_options;
    }

    return children;
}

void Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::SpecificOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "oper-type")
    {
        oper_type = value;
        oper_type.value_namespace = name_space;
        oper_type.value_namespace_prefix = name_space_prefix;
    }
}

void Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::SpecificOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "oper-type")
    {
        oper_type.yfilter = yfilter;
    }
}

bool Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::SpecificOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "configured-operation-options" || name == "ondemand-operation-options" || name == "oper-type")
        return true;
    return false;
}

Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::SpecificOptions::ConfiguredOperationOptions::ConfiguredOperationOptions()
    :
    profile_name{YType::str, "profile-name"}
{
    yang_name = "configured-operation-options"; yang_parent_name = "specific-options";
}

Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::SpecificOptions::ConfiguredOperationOptions::~ConfiguredOperationOptions()
{
}

bool Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::SpecificOptions::ConfiguredOperationOptions::has_data() const
{
    return profile_name.is_set;
}

bool Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::SpecificOptions::ConfiguredOperationOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(profile_name.yfilter);
}

std::string Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::SpecificOptions::ConfiguredOperationOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "configured-operation-options";

    return path_buffer.str();

}

const EntityPath Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::SpecificOptions::ConfiguredOperationOptions::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-sla-oper:sla/protocols/Cisco-IOS-XR-ethernet-cfm-oper:ethernet/statistics-currents/statistics-current/specific-options/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (profile_name.is_set || is_set(profile_name.yfilter)) leaf_name_data.push_back(profile_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::SpecificOptions::ConfiguredOperationOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::SpecificOptions::ConfiguredOperationOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::SpecificOptions::ConfiguredOperationOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "profile-name")
    {
        profile_name = value;
        profile_name.value_namespace = name_space;
        profile_name.value_namespace_prefix = name_space_prefix;
    }
}

void Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::SpecificOptions::ConfiguredOperationOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "profile-name")
    {
        profile_name.yfilter = yfilter;
    }
}

bool Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::SpecificOptions::ConfiguredOperationOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "profile-name")
        return true;
    return false;
}

Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::SpecificOptions::OndemandOperationOptions::OndemandOperationOptions()
    :
    ondemand_operation_id{YType::uint32, "ondemand-operation-id"},
    probe_count{YType::uint8, "probe-count"}
{
    yang_name = "ondemand-operation-options"; yang_parent_name = "specific-options";
}

Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::SpecificOptions::OndemandOperationOptions::~OndemandOperationOptions()
{
}

bool Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::SpecificOptions::OndemandOperationOptions::has_data() const
{
    return ondemand_operation_id.is_set
	|| probe_count.is_set;
}

bool Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::SpecificOptions::OndemandOperationOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ondemand_operation_id.yfilter)
	|| ydk::is_set(probe_count.yfilter);
}

std::string Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::SpecificOptions::OndemandOperationOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ondemand-operation-options";

    return path_buffer.str();

}

const EntityPath Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::SpecificOptions::OndemandOperationOptions::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-sla-oper:sla/protocols/Cisco-IOS-XR-ethernet-cfm-oper:ethernet/statistics-currents/statistics-current/specific-options/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ondemand_operation_id.is_set || is_set(ondemand_operation_id.yfilter)) leaf_name_data.push_back(ondemand_operation_id.get_name_leafdata());
    if (probe_count.is_set || is_set(probe_count.yfilter)) leaf_name_data.push_back(probe_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::SpecificOptions::OndemandOperationOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::SpecificOptions::OndemandOperationOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::SpecificOptions::OndemandOperationOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ondemand-operation-id")
    {
        ondemand_operation_id = value;
        ondemand_operation_id.value_namespace = name_space;
        ondemand_operation_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "probe-count")
    {
        probe_count = value;
        probe_count.value_namespace = name_space;
        probe_count.value_namespace_prefix = name_space_prefix;
    }
}

void Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::SpecificOptions::OndemandOperationOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ondemand-operation-id")
    {
        ondemand_operation_id.yfilter = yfilter;
    }
    if(value_path == "probe-count")
    {
        probe_count.yfilter = yfilter;
    }
}

bool Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::SpecificOptions::OndemandOperationOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ondemand-operation-id" || name == "probe-count")
        return true;
    return false;
}

Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationSchedule::OperationSchedule()
    :
    schedule_duration{YType::uint32, "schedule-duration"},
    schedule_interval{YType::uint32, "schedule-interval"},
    start_time{YType::uint32, "start-time"},
    start_time_configured{YType::boolean, "start-time-configured"}
{
    yang_name = "operation-schedule"; yang_parent_name = "statistics-current";
}

Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationSchedule::~OperationSchedule()
{
}

bool Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationSchedule::has_data() const
{
    return schedule_duration.is_set
	|| schedule_interval.is_set
	|| start_time.is_set
	|| start_time_configured.is_set;
}

bool Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationSchedule::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(schedule_duration.yfilter)
	|| ydk::is_set(schedule_interval.yfilter)
	|| ydk::is_set(start_time.yfilter)
	|| ydk::is_set(start_time_configured.yfilter);
}

std::string Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationSchedule::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "operation-schedule";

    return path_buffer.str();

}

const EntityPath Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationSchedule::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-sla-oper:sla/protocols/Cisco-IOS-XR-ethernet-cfm-oper:ethernet/statistics-currents/statistics-current/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (schedule_duration.is_set || is_set(schedule_duration.yfilter)) leaf_name_data.push_back(schedule_duration.get_name_leafdata());
    if (schedule_interval.is_set || is_set(schedule_interval.yfilter)) leaf_name_data.push_back(schedule_interval.get_name_leafdata());
    if (start_time.is_set || is_set(start_time.yfilter)) leaf_name_data.push_back(start_time.get_name_leafdata());
    if (start_time_configured.is_set || is_set(start_time_configured.yfilter)) leaf_name_data.push_back(start_time_configured.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationSchedule::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationSchedule::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationSchedule::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "schedule-duration")
    {
        schedule_duration = value;
        schedule_duration.value_namespace = name_space;
        schedule_duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "schedule-interval")
    {
        schedule_interval = value;
        schedule_interval.value_namespace = name_space;
        schedule_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-time")
    {
        start_time = value;
        start_time.value_namespace = name_space;
        start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-time-configured")
    {
        start_time_configured = value;
        start_time_configured.value_namespace = name_space;
        start_time_configured.value_namespace_prefix = name_space_prefix;
    }
}

void Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationSchedule::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "schedule-duration")
    {
        schedule_duration.yfilter = yfilter;
    }
    if(value_path == "schedule-interval")
    {
        schedule_interval.yfilter = yfilter;
    }
    if(value_path == "start-time")
    {
        start_time.yfilter = yfilter;
    }
    if(value_path == "start-time-configured")
    {
        start_time_configured.yfilter = yfilter;
    }
}

bool Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationSchedule::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "schedule-duration" || name == "schedule-interval" || name == "start-time" || name == "start-time-configured")
        return true;
    return false;
}

Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationMetric::OperationMetric()
    :
    config(std::make_shared<Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationMetric::Config>())
{
    config->parent = this;

    yang_name = "operation-metric"; yang_parent_name = "statistics-current";
}

Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationMetric::~OperationMetric()
{
}

bool Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationMetric::has_data() const
{
    for (std::size_t index=0; index<bucket.size(); index++)
    {
        if(bucket[index]->has_data())
            return true;
    }
    return (config !=  nullptr && config->has_data());
}

bool Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationMetric::has_operation() const
{
    for (std::size_t index=0; index<bucket.size(); index++)
    {
        if(bucket[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation());
}

std::string Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationMetric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "operation-metric";

    return path_buffer.str();

}

const EntityPath Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationMetric::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-sla-oper:sla/protocols/Cisco-IOS-XR-ethernet-cfm-oper:ethernet/statistics-currents/statistics-current/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationMetric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bucket")
    {
        for(auto const & c : bucket)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationMetric::Bucket>();
        c->parent = this;
        bucket.push_back(c);
        return c;
    }

    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationMetric::Config>();
        }
        return config;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationMetric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bucket)
    {
        children[c->get_segment_path()] = c;
    }

    if(config != nullptr)
    {
        children["config"] = config;
    }

    return children;
}

void Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationMetric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationMetric::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationMetric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bucket" || name == "config")
        return true;
    return false;
}

Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationMetric::Config::Config()
    :
    bins_count{YType::uint16, "bins-count"},
    bins_width{YType::uint16, "bins-width"},
    bucket_size{YType::uint8, "bucket-size"},
    bucket_size_unit{YType::enumeration, "bucket-size-unit"},
    buckets_archive{YType::uint32, "buckets-archive"},
    metric_type{YType::enumeration, "metric-type"}
{
    yang_name = "config"; yang_parent_name = "operation-metric";
}

Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationMetric::Config::~Config()
{
}

bool Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationMetric::Config::has_data() const
{
    return bins_count.is_set
	|| bins_width.is_set
	|| bucket_size.is_set
	|| bucket_size_unit.is_set
	|| buckets_archive.is_set
	|| metric_type.is_set;
}

bool Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationMetric::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bins_count.yfilter)
	|| ydk::is_set(bins_width.yfilter)
	|| ydk::is_set(bucket_size.yfilter)
	|| ydk::is_set(bucket_size_unit.yfilter)
	|| ydk::is_set(buckets_archive.yfilter)
	|| ydk::is_set(metric_type.yfilter);
}

std::string Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationMetric::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

const EntityPath Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationMetric::Config::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-sla-oper:sla/protocols/Cisco-IOS-XR-ethernet-cfm-oper:ethernet/statistics-currents/statistics-current/operation-metric/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bins_count.is_set || is_set(bins_count.yfilter)) leaf_name_data.push_back(bins_count.get_name_leafdata());
    if (bins_width.is_set || is_set(bins_width.yfilter)) leaf_name_data.push_back(bins_width.get_name_leafdata());
    if (bucket_size.is_set || is_set(bucket_size.yfilter)) leaf_name_data.push_back(bucket_size.get_name_leafdata());
    if (bucket_size_unit.is_set || is_set(bucket_size_unit.yfilter)) leaf_name_data.push_back(bucket_size_unit.get_name_leafdata());
    if (buckets_archive.is_set || is_set(buckets_archive.yfilter)) leaf_name_data.push_back(buckets_archive.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationMetric::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationMetric::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationMetric::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bins-count")
    {
        bins_count = value;
        bins_count.value_namespace = name_space;
        bins_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bins-width")
    {
        bins_width = value;
        bins_width.value_namespace = name_space;
        bins_width.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bucket-size")
    {
        bucket_size = value;
        bucket_size.value_namespace = name_space;
        bucket_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bucket-size-unit")
    {
        bucket_size_unit = value;
        bucket_size_unit.value_namespace = name_space;
        bucket_size_unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "buckets-archive")
    {
        buckets_archive = value;
        buckets_archive.value_namespace = name_space;
        buckets_archive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
}

void Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationMetric::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bins-count")
    {
        bins_count.yfilter = yfilter;
    }
    if(value_path == "bins-width")
    {
        bins_width.yfilter = yfilter;
    }
    if(value_path == "bucket-size")
    {
        bucket_size.yfilter = yfilter;
    }
    if(value_path == "bucket-size-unit")
    {
        bucket_size_unit.yfilter = yfilter;
    }
    if(value_path == "buckets-archive")
    {
        buckets_archive.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
}

bool Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationMetric::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bins-count" || name == "bins-width" || name == "bucket-size" || name == "bucket-size-unit" || name == "buckets-archive" || name == "metric-type")
        return true;
    return false;
}

Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationMetric::Bucket::Bucket()
    :
    average{YType::int32, "average"},
    corrupt{YType::uint32, "corrupt"},
    data_lost_count{YType::uint32, "data-lost-count"},
    data_sent_count{YType::uint32, "data-sent-count"},
    duplicates{YType::uint32, "duplicates"},
    duration{YType::uint32, "duration"},
    lost{YType::uint32, "lost"},
    maximum{YType::int32, "maximum"},
    minimum{YType::int32, "minimum"},
    out_of_order{YType::uint32, "out-of-order"},
    overall_flr{YType::int32, "overall-flr"},
    premature_reason{YType::uint32, "premature-reason"},
    premature_reason_string{YType::str, "premature-reason-string"},
    result_count{YType::uint32, "result-count"},
    sent{YType::uint32, "sent"},
    standard_deviation{YType::int32, "standard-deviation"},
    start_at{YType::uint32, "start-at"},
    suspect_cleared_mid_bucket{YType::boolean, "suspect-cleared-mid-bucket"},
    suspect_clock_drift{YType::boolean, "suspect-clock-drift"},
    suspect_flr_low_packet_count{YType::boolean, "suspect-flr-low-packet-count"},
    suspect_management_latency{YType::boolean, "suspect-management-latency"},
    suspect_memory_allocation_failed{YType::boolean, "suspect-memory-allocation-failed"},
    suspect_misordering{YType::boolean, "suspect-misordering"},
    suspect_multiple_buckets{YType::boolean, "suspect-multiple-buckets"},
    suspect_premature_end{YType::boolean, "suspect-premature-end"},
    suspect_probe_restarted{YType::boolean, "suspect-probe-restarted"},
    suspect_schedule_latency{YType::boolean, "suspect-schedule-latency"},
    suspect_send_fail{YType::boolean, "suspect-send-fail"},
    suspect_start_mid_bucket{YType::boolean, "suspect-start-mid-bucket"},
    time_of_maximum{YType::uint32, "time-of-maximum"},
    time_of_minimum{YType::uint32, "time-of-minimum"}
    	,
    contents(std::make_shared<Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationMetric::Bucket::Contents>())
{
    contents->parent = this;

    yang_name = "bucket"; yang_parent_name = "operation-metric";
}

Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationMetric::Bucket::~Bucket()
{
}

bool Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationMetric::Bucket::has_data() const
{
    return average.is_set
	|| corrupt.is_set
	|| data_lost_count.is_set
	|| data_sent_count.is_set
	|| duplicates.is_set
	|| duration.is_set
	|| lost.is_set
	|| maximum.is_set
	|| minimum.is_set
	|| out_of_order.is_set
	|| overall_flr.is_set
	|| premature_reason.is_set
	|| premature_reason_string.is_set
	|| result_count.is_set
	|| sent.is_set
	|| standard_deviation.is_set
	|| start_at.is_set
	|| suspect_cleared_mid_bucket.is_set
	|| suspect_clock_drift.is_set
	|| suspect_flr_low_packet_count.is_set
	|| suspect_management_latency.is_set
	|| suspect_memory_allocation_failed.is_set
	|| suspect_misordering.is_set
	|| suspect_multiple_buckets.is_set
	|| suspect_premature_end.is_set
	|| suspect_probe_restarted.is_set
	|| suspect_schedule_latency.is_set
	|| suspect_send_fail.is_set
	|| suspect_start_mid_bucket.is_set
	|| time_of_maximum.is_set
	|| time_of_minimum.is_set
	|| (contents !=  nullptr && contents->has_data());
}

bool Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationMetric::Bucket::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(corrupt.yfilter)
	|| ydk::is_set(data_lost_count.yfilter)
	|| ydk::is_set(data_sent_count.yfilter)
	|| ydk::is_set(duplicates.yfilter)
	|| ydk::is_set(duration.yfilter)
	|| ydk::is_set(lost.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(out_of_order.yfilter)
	|| ydk::is_set(overall_flr.yfilter)
	|| ydk::is_set(premature_reason.yfilter)
	|| ydk::is_set(premature_reason_string.yfilter)
	|| ydk::is_set(result_count.yfilter)
	|| ydk::is_set(sent.yfilter)
	|| ydk::is_set(standard_deviation.yfilter)
	|| ydk::is_set(start_at.yfilter)
	|| ydk::is_set(suspect_cleared_mid_bucket.yfilter)
	|| ydk::is_set(suspect_clock_drift.yfilter)
	|| ydk::is_set(suspect_flr_low_packet_count.yfilter)
	|| ydk::is_set(suspect_management_latency.yfilter)
	|| ydk::is_set(suspect_memory_allocation_failed.yfilter)
	|| ydk::is_set(suspect_misordering.yfilter)
	|| ydk::is_set(suspect_multiple_buckets.yfilter)
	|| ydk::is_set(suspect_premature_end.yfilter)
	|| ydk::is_set(suspect_probe_restarted.yfilter)
	|| ydk::is_set(suspect_schedule_latency.yfilter)
	|| ydk::is_set(suspect_send_fail.yfilter)
	|| ydk::is_set(suspect_start_mid_bucket.yfilter)
	|| ydk::is_set(time_of_maximum.yfilter)
	|| ydk::is_set(time_of_minimum.yfilter)
	|| (contents !=  nullptr && contents->has_operation());
}

std::string Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationMetric::Bucket::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bucket";

    return path_buffer.str();

}

const EntityPath Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationMetric::Bucket::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-sla-oper:sla/protocols/Cisco-IOS-XR-ethernet-cfm-oper:ethernet/statistics-currents/statistics-current/operation-metric/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (corrupt.is_set || is_set(corrupt.yfilter)) leaf_name_data.push_back(corrupt.get_name_leafdata());
    if (data_lost_count.is_set || is_set(data_lost_count.yfilter)) leaf_name_data.push_back(data_lost_count.get_name_leafdata());
    if (data_sent_count.is_set || is_set(data_sent_count.yfilter)) leaf_name_data.push_back(data_sent_count.get_name_leafdata());
    if (duplicates.is_set || is_set(duplicates.yfilter)) leaf_name_data.push_back(duplicates.get_name_leafdata());
    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());
    if (lost.is_set || is_set(lost.yfilter)) leaf_name_data.push_back(lost.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (out_of_order.is_set || is_set(out_of_order.yfilter)) leaf_name_data.push_back(out_of_order.get_name_leafdata());
    if (overall_flr.is_set || is_set(overall_flr.yfilter)) leaf_name_data.push_back(overall_flr.get_name_leafdata());
    if (premature_reason.is_set || is_set(premature_reason.yfilter)) leaf_name_data.push_back(premature_reason.get_name_leafdata());
    if (premature_reason_string.is_set || is_set(premature_reason_string.yfilter)) leaf_name_data.push_back(premature_reason_string.get_name_leafdata());
    if (result_count.is_set || is_set(result_count.yfilter)) leaf_name_data.push_back(result_count.get_name_leafdata());
    if (sent.is_set || is_set(sent.yfilter)) leaf_name_data.push_back(sent.get_name_leafdata());
    if (standard_deviation.is_set || is_set(standard_deviation.yfilter)) leaf_name_data.push_back(standard_deviation.get_name_leafdata());
    if (start_at.is_set || is_set(start_at.yfilter)) leaf_name_data.push_back(start_at.get_name_leafdata());
    if (suspect_cleared_mid_bucket.is_set || is_set(suspect_cleared_mid_bucket.yfilter)) leaf_name_data.push_back(suspect_cleared_mid_bucket.get_name_leafdata());
    if (suspect_clock_drift.is_set || is_set(suspect_clock_drift.yfilter)) leaf_name_data.push_back(suspect_clock_drift.get_name_leafdata());
    if (suspect_flr_low_packet_count.is_set || is_set(suspect_flr_low_packet_count.yfilter)) leaf_name_data.push_back(suspect_flr_low_packet_count.get_name_leafdata());
    if (suspect_management_latency.is_set || is_set(suspect_management_latency.yfilter)) leaf_name_data.push_back(suspect_management_latency.get_name_leafdata());
    if (suspect_memory_allocation_failed.is_set || is_set(suspect_memory_allocation_failed.yfilter)) leaf_name_data.push_back(suspect_memory_allocation_failed.get_name_leafdata());
    if (suspect_misordering.is_set || is_set(suspect_misordering.yfilter)) leaf_name_data.push_back(suspect_misordering.get_name_leafdata());
    if (suspect_multiple_buckets.is_set || is_set(suspect_multiple_buckets.yfilter)) leaf_name_data.push_back(suspect_multiple_buckets.get_name_leafdata());
    if (suspect_premature_end.is_set || is_set(suspect_premature_end.yfilter)) leaf_name_data.push_back(suspect_premature_end.get_name_leafdata());
    if (suspect_probe_restarted.is_set || is_set(suspect_probe_restarted.yfilter)) leaf_name_data.push_back(suspect_probe_restarted.get_name_leafdata());
    if (suspect_schedule_latency.is_set || is_set(suspect_schedule_latency.yfilter)) leaf_name_data.push_back(suspect_schedule_latency.get_name_leafdata());
    if (suspect_send_fail.is_set || is_set(suspect_send_fail.yfilter)) leaf_name_data.push_back(suspect_send_fail.get_name_leafdata());
    if (suspect_start_mid_bucket.is_set || is_set(suspect_start_mid_bucket.yfilter)) leaf_name_data.push_back(suspect_start_mid_bucket.get_name_leafdata());
    if (time_of_maximum.is_set || is_set(time_of_maximum.yfilter)) leaf_name_data.push_back(time_of_maximum.get_name_leafdata());
    if (time_of_minimum.is_set || is_set(time_of_minimum.yfilter)) leaf_name_data.push_back(time_of_minimum.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationMetric::Bucket::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "contents")
    {
        if(contents == nullptr)
        {
            contents = std::make_shared<Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationMetric::Bucket::Contents>();
        }
        return contents;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationMetric::Bucket::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(contents != nullptr)
    {
        children["contents"] = contents;
    }

    return children;
}

void Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationMetric::Bucket::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "average")
    {
        average = value;
        average.value_namespace = name_space;
        average.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "corrupt")
    {
        corrupt = value;
        corrupt.value_namespace = name_space;
        corrupt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "data-lost-count")
    {
        data_lost_count = value;
        data_lost_count.value_namespace = name_space;
        data_lost_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "data-sent-count")
    {
        data_sent_count = value;
        data_sent_count.value_namespace = name_space;
        data_sent_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "duplicates")
    {
        duplicates = value;
        duplicates.value_namespace = name_space;
        duplicates.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lost")
    {
        lost = value;
        lost.value_namespace = name_space;
        lost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-of-order")
    {
        out_of_order = value;
        out_of_order.value_namespace = name_space;
        out_of_order.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "overall-flr")
    {
        overall_flr = value;
        overall_flr.value_namespace = name_space;
        overall_flr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "premature-reason")
    {
        premature_reason = value;
        premature_reason.value_namespace = name_space;
        premature_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "premature-reason-string")
    {
        premature_reason_string = value;
        premature_reason_string.value_namespace = name_space;
        premature_reason_string.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "result-count")
    {
        result_count = value;
        result_count.value_namespace = name_space;
        result_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sent")
    {
        sent = value;
        sent.value_namespace = name_space;
        sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "standard-deviation")
    {
        standard_deviation = value;
        standard_deviation.value_namespace = name_space;
        standard_deviation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-at")
    {
        start_at = value;
        start_at.value_namespace = name_space;
        start_at.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suspect-cleared-mid-bucket")
    {
        suspect_cleared_mid_bucket = value;
        suspect_cleared_mid_bucket.value_namespace = name_space;
        suspect_cleared_mid_bucket.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suspect-clock-drift")
    {
        suspect_clock_drift = value;
        suspect_clock_drift.value_namespace = name_space;
        suspect_clock_drift.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suspect-flr-low-packet-count")
    {
        suspect_flr_low_packet_count = value;
        suspect_flr_low_packet_count.value_namespace = name_space;
        suspect_flr_low_packet_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suspect-management-latency")
    {
        suspect_management_latency = value;
        suspect_management_latency.value_namespace = name_space;
        suspect_management_latency.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suspect-memory-allocation-failed")
    {
        suspect_memory_allocation_failed = value;
        suspect_memory_allocation_failed.value_namespace = name_space;
        suspect_memory_allocation_failed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suspect-misordering")
    {
        suspect_misordering = value;
        suspect_misordering.value_namespace = name_space;
        suspect_misordering.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suspect-multiple-buckets")
    {
        suspect_multiple_buckets = value;
        suspect_multiple_buckets.value_namespace = name_space;
        suspect_multiple_buckets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suspect-premature-end")
    {
        suspect_premature_end = value;
        suspect_premature_end.value_namespace = name_space;
        suspect_premature_end.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suspect-probe-restarted")
    {
        suspect_probe_restarted = value;
        suspect_probe_restarted.value_namespace = name_space;
        suspect_probe_restarted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suspect-schedule-latency")
    {
        suspect_schedule_latency = value;
        suspect_schedule_latency.value_namespace = name_space;
        suspect_schedule_latency.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suspect-send-fail")
    {
        suspect_send_fail = value;
        suspect_send_fail.value_namespace = name_space;
        suspect_send_fail.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suspect-start-mid-bucket")
    {
        suspect_start_mid_bucket = value;
        suspect_start_mid_bucket.value_namespace = name_space;
        suspect_start_mid_bucket.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-of-maximum")
    {
        time_of_maximum = value;
        time_of_maximum.value_namespace = name_space;
        time_of_maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-of-minimum")
    {
        time_of_minimum = value;
        time_of_minimum.value_namespace = name_space;
        time_of_minimum.value_namespace_prefix = name_space_prefix;
    }
}

void Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationMetric::Bucket::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "average")
    {
        average.yfilter = yfilter;
    }
    if(value_path == "corrupt")
    {
        corrupt.yfilter = yfilter;
    }
    if(value_path == "data-lost-count")
    {
        data_lost_count.yfilter = yfilter;
    }
    if(value_path == "data-sent-count")
    {
        data_sent_count.yfilter = yfilter;
    }
    if(value_path == "duplicates")
    {
        duplicates.yfilter = yfilter;
    }
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
    }
    if(value_path == "lost")
    {
        lost.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
    if(value_path == "out-of-order")
    {
        out_of_order.yfilter = yfilter;
    }
    if(value_path == "overall-flr")
    {
        overall_flr.yfilter = yfilter;
    }
    if(value_path == "premature-reason")
    {
        premature_reason.yfilter = yfilter;
    }
    if(value_path == "premature-reason-string")
    {
        premature_reason_string.yfilter = yfilter;
    }
    if(value_path == "result-count")
    {
        result_count.yfilter = yfilter;
    }
    if(value_path == "sent")
    {
        sent.yfilter = yfilter;
    }
    if(value_path == "standard-deviation")
    {
        standard_deviation.yfilter = yfilter;
    }
    if(value_path == "start-at")
    {
        start_at.yfilter = yfilter;
    }
    if(value_path == "suspect-cleared-mid-bucket")
    {
        suspect_cleared_mid_bucket.yfilter = yfilter;
    }
    if(value_path == "suspect-clock-drift")
    {
        suspect_clock_drift.yfilter = yfilter;
    }
    if(value_path == "suspect-flr-low-packet-count")
    {
        suspect_flr_low_packet_count.yfilter = yfilter;
    }
    if(value_path == "suspect-management-latency")
    {
        suspect_management_latency.yfilter = yfilter;
    }
    if(value_path == "suspect-memory-allocation-failed")
    {
        suspect_memory_allocation_failed.yfilter = yfilter;
    }
    if(value_path == "suspect-misordering")
    {
        suspect_misordering.yfilter = yfilter;
    }
    if(value_path == "suspect-multiple-buckets")
    {
        suspect_multiple_buckets.yfilter = yfilter;
    }
    if(value_path == "suspect-premature-end")
    {
        suspect_premature_end.yfilter = yfilter;
    }
    if(value_path == "suspect-probe-restarted")
    {
        suspect_probe_restarted.yfilter = yfilter;
    }
    if(value_path == "suspect-schedule-latency")
    {
        suspect_schedule_latency.yfilter = yfilter;
    }
    if(value_path == "suspect-send-fail")
    {
        suspect_send_fail.yfilter = yfilter;
    }
    if(value_path == "suspect-start-mid-bucket")
    {
        suspect_start_mid_bucket.yfilter = yfilter;
    }
    if(value_path == "time-of-maximum")
    {
        time_of_maximum.yfilter = yfilter;
    }
    if(value_path == "time-of-minimum")
    {
        time_of_minimum.yfilter = yfilter;
    }
}

bool Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationMetric::Bucket::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "contents" || name == "average" || name == "corrupt" || name == "data-lost-count" || name == "data-sent-count" || name == "duplicates" || name == "duration" || name == "lost" || name == "maximum" || name == "minimum" || name == "out-of-order" || name == "overall-flr" || name == "premature-reason" || name == "premature-reason-string" || name == "result-count" || name == "sent" || name == "standard-deviation" || name == "start-at" || name == "suspect-cleared-mid-bucket" || name == "suspect-clock-drift" || name == "suspect-flr-low-packet-count" || name == "suspect-management-latency" || name == "suspect-memory-allocation-failed" || name == "suspect-misordering" || name == "suspect-multiple-buckets" || name == "suspect-premature-end" || name == "suspect-probe-restarted" || name == "suspect-schedule-latency" || name == "suspect-send-fail" || name == "suspect-start-mid-bucket" || name == "time-of-maximum" || name == "time-of-minimum")
        return true;
    return false;
}

Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationMetric::Bucket::Contents::Contents()
    :
    bucket_type{YType::enumeration, "bucket-type"}
    	,
    aggregated(std::make_shared<Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationMetric::Bucket::Contents::Aggregated>())
	,unaggregated(std::make_shared<Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationMetric::Bucket::Contents::Unaggregated>())
{
    aggregated->parent = this;

    unaggregated->parent = this;

    yang_name = "contents"; yang_parent_name = "bucket";
}

Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationMetric::Bucket::Contents::~Contents()
{
}

bool Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationMetric::Bucket::Contents::has_data() const
{
    return bucket_type.is_set
	|| (aggregated !=  nullptr && aggregated->has_data())
	|| (unaggregated !=  nullptr && unaggregated->has_data());
}

bool Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationMetric::Bucket::Contents::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bucket_type.yfilter)
	|| (aggregated !=  nullptr && aggregated->has_operation())
	|| (unaggregated !=  nullptr && unaggregated->has_operation());
}

std::string Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationMetric::Bucket::Contents::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "contents";

    return path_buffer.str();

}

const EntityPath Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationMetric::Bucket::Contents::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-sla-oper:sla/protocols/Cisco-IOS-XR-ethernet-cfm-oper:ethernet/statistics-currents/statistics-current/operation-metric/bucket/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bucket_type.is_set || is_set(bucket_type.yfilter)) leaf_name_data.push_back(bucket_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationMetric::Bucket::Contents::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aggregated")
    {
        if(aggregated == nullptr)
        {
            aggregated = std::make_shared<Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationMetric::Bucket::Contents::Aggregated>();
        }
        return aggregated;
    }

    if(child_yang_name == "unaggregated")
    {
        if(unaggregated == nullptr)
        {
            unaggregated = std::make_shared<Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationMetric::Bucket::Contents::Unaggregated>();
        }
        return unaggregated;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationMetric::Bucket::Contents::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(aggregated != nullptr)
    {
        children["aggregated"] = aggregated;
    }

    if(unaggregated != nullptr)
    {
        children["unaggregated"] = unaggregated;
    }

    return children;
}

void Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationMetric::Bucket::Contents::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bucket-type")
    {
        bucket_type = value;
        bucket_type.value_namespace = name_space;
        bucket_type.value_namespace_prefix = name_space_prefix;
    }
}

void Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationMetric::Bucket::Contents::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bucket-type")
    {
        bucket_type.yfilter = yfilter;
    }
}

bool Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationMetric::Bucket::Contents::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aggregated" || name == "unaggregated" || name == "bucket-type")
        return true;
    return false;
}

Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationMetric::Bucket::Contents::Aggregated::Aggregated()
{
    yang_name = "aggregated"; yang_parent_name = "contents";
}

Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationMetric::Bucket::Contents::Aggregated::~Aggregated()
{
}

bool Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationMetric::Bucket::Contents::Aggregated::has_data() const
{
    for (std::size_t index=0; index<bins.size(); index++)
    {
        if(bins[index]->has_data())
            return true;
    }
    return false;
}

bool Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationMetric::Bucket::Contents::Aggregated::has_operation() const
{
    for (std::size_t index=0; index<bins.size(); index++)
    {
        if(bins[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationMetric::Bucket::Contents::Aggregated::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aggregated";

    return path_buffer.str();

}

const EntityPath Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationMetric::Bucket::Contents::Aggregated::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-sla-oper:sla/protocols/Cisco-IOS-XR-ethernet-cfm-oper:ethernet/statistics-currents/statistics-current/operation-metric/bucket/contents/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationMetric::Bucket::Contents::Aggregated::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bins")
    {
        for(auto const & c : bins)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationMetric::Bucket::Contents::Aggregated::Bins>();
        c->parent = this;
        bins.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationMetric::Bucket::Contents::Aggregated::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bins)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationMetric::Bucket::Contents::Aggregated::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationMetric::Bucket::Contents::Aggregated::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationMetric::Bucket::Contents::Aggregated::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bins")
        return true;
    return false;
}

Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationMetric::Bucket::Contents::Aggregated::Bins::Bins()
    :
    count{YType::uint32, "count"},
    lower_bound{YType::int32, "lower-bound"},
    lower_bound_tenths{YType::int32, "lower-bound-tenths"},
    sum{YType::int64, "sum"},
    upper_bound{YType::int32, "upper-bound"},
    upper_bound_tenths{YType::int32, "upper-bound-tenths"}
{
    yang_name = "bins"; yang_parent_name = "aggregated";
}

Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationMetric::Bucket::Contents::Aggregated::Bins::~Bins()
{
}

bool Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationMetric::Bucket::Contents::Aggregated::Bins::has_data() const
{
    return count.is_set
	|| lower_bound.is_set
	|| lower_bound_tenths.is_set
	|| sum.is_set
	|| upper_bound.is_set
	|| upper_bound_tenths.is_set;
}

bool Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationMetric::Bucket::Contents::Aggregated::Bins::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(count.yfilter)
	|| ydk::is_set(lower_bound.yfilter)
	|| ydk::is_set(lower_bound_tenths.yfilter)
	|| ydk::is_set(sum.yfilter)
	|| ydk::is_set(upper_bound.yfilter)
	|| ydk::is_set(upper_bound_tenths.yfilter);
}

std::string Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationMetric::Bucket::Contents::Aggregated::Bins::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bins";

    return path_buffer.str();

}

const EntityPath Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationMetric::Bucket::Contents::Aggregated::Bins::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-sla-oper:sla/protocols/Cisco-IOS-XR-ethernet-cfm-oper:ethernet/statistics-currents/statistics-current/operation-metric/bucket/contents/aggregated/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (count.is_set || is_set(count.yfilter)) leaf_name_data.push_back(count.get_name_leafdata());
    if (lower_bound.is_set || is_set(lower_bound.yfilter)) leaf_name_data.push_back(lower_bound.get_name_leafdata());
    if (lower_bound_tenths.is_set || is_set(lower_bound_tenths.yfilter)) leaf_name_data.push_back(lower_bound_tenths.get_name_leafdata());
    if (sum.is_set || is_set(sum.yfilter)) leaf_name_data.push_back(sum.get_name_leafdata());
    if (upper_bound.is_set || is_set(upper_bound.yfilter)) leaf_name_data.push_back(upper_bound.get_name_leafdata());
    if (upper_bound_tenths.is_set || is_set(upper_bound_tenths.yfilter)) leaf_name_data.push_back(upper_bound_tenths.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationMetric::Bucket::Contents::Aggregated::Bins::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationMetric::Bucket::Contents::Aggregated::Bins::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationMetric::Bucket::Contents::Aggregated::Bins::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "count")
    {
        count = value;
        count.value_namespace = name_space;
        count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lower-bound")
    {
        lower_bound = value;
        lower_bound.value_namespace = name_space;
        lower_bound.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lower-bound-tenths")
    {
        lower_bound_tenths = value;
        lower_bound_tenths.value_namespace = name_space;
        lower_bound_tenths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sum")
    {
        sum = value;
        sum.value_namespace = name_space;
        sum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "upper-bound")
    {
        upper_bound = value;
        upper_bound.value_namespace = name_space;
        upper_bound.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "upper-bound-tenths")
    {
        upper_bound_tenths = value;
        upper_bound_tenths.value_namespace = name_space;
        upper_bound_tenths.value_namespace_prefix = name_space_prefix;
    }
}

void Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationMetric::Bucket::Contents::Aggregated::Bins::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "count")
    {
        count.yfilter = yfilter;
    }
    if(value_path == "lower-bound")
    {
        lower_bound.yfilter = yfilter;
    }
    if(value_path == "lower-bound-tenths")
    {
        lower_bound_tenths.yfilter = yfilter;
    }
    if(value_path == "sum")
    {
        sum.yfilter = yfilter;
    }
    if(value_path == "upper-bound")
    {
        upper_bound.yfilter = yfilter;
    }
    if(value_path == "upper-bound-tenths")
    {
        upper_bound_tenths.yfilter = yfilter;
    }
}

bool Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationMetric::Bucket::Contents::Aggregated::Bins::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "count" || name == "lower-bound" || name == "lower-bound-tenths" || name == "sum" || name == "upper-bound" || name == "upper-bound-tenths")
        return true;
    return false;
}

Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationMetric::Bucket::Contents::Unaggregated::Unaggregated()
{
    yang_name = "unaggregated"; yang_parent_name = "contents";
}

Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationMetric::Bucket::Contents::Unaggregated::~Unaggregated()
{
}

bool Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationMetric::Bucket::Contents::Unaggregated::has_data() const
{
    for (std::size_t index=0; index<sample.size(); index++)
    {
        if(sample[index]->has_data())
            return true;
    }
    return false;
}

bool Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationMetric::Bucket::Contents::Unaggregated::has_operation() const
{
    for (std::size_t index=0; index<sample.size(); index++)
    {
        if(sample[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationMetric::Bucket::Contents::Unaggregated::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unaggregated";

    return path_buffer.str();

}

const EntityPath Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationMetric::Bucket::Contents::Unaggregated::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-sla-oper:sla/protocols/Cisco-IOS-XR-ethernet-cfm-oper:ethernet/statistics-currents/statistics-current/operation-metric/bucket/contents/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationMetric::Bucket::Contents::Unaggregated::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sample")
    {
        for(auto const & c : sample)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationMetric::Bucket::Contents::Unaggregated::Sample>();
        c->parent = this;
        sample.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationMetric::Bucket::Contents::Unaggregated::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sample)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationMetric::Bucket::Contents::Unaggregated::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationMetric::Bucket::Contents::Unaggregated::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationMetric::Bucket::Contents::Unaggregated::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sample")
        return true;
    return false;
}

Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationMetric::Bucket::Contents::Unaggregated::Sample::Sample()
    :
    corrupt{YType::boolean, "corrupt"},
    frames_lost{YType::uint32, "frames-lost"},
    frames_sent{YType::uint32, "frames-sent"},
    no_data_packets{YType::boolean, "no-data-packets"},
    out_of_order{YType::boolean, "out-of-order"},
    result{YType::int32, "result"},
    sent{YType::boolean, "sent"},
    sent_at{YType::uint32, "sent-at"},
    timed_out{YType::boolean, "timed-out"}
{
    yang_name = "sample"; yang_parent_name = "unaggregated";
}

Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationMetric::Bucket::Contents::Unaggregated::Sample::~Sample()
{
}

bool Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationMetric::Bucket::Contents::Unaggregated::Sample::has_data() const
{
    return corrupt.is_set
	|| frames_lost.is_set
	|| frames_sent.is_set
	|| no_data_packets.is_set
	|| out_of_order.is_set
	|| result.is_set
	|| sent.is_set
	|| sent_at.is_set
	|| timed_out.is_set;
}

bool Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationMetric::Bucket::Contents::Unaggregated::Sample::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(corrupt.yfilter)
	|| ydk::is_set(frames_lost.yfilter)
	|| ydk::is_set(frames_sent.yfilter)
	|| ydk::is_set(no_data_packets.yfilter)
	|| ydk::is_set(out_of_order.yfilter)
	|| ydk::is_set(result.yfilter)
	|| ydk::is_set(sent.yfilter)
	|| ydk::is_set(sent_at.yfilter)
	|| ydk::is_set(timed_out.yfilter);
}

std::string Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationMetric::Bucket::Contents::Unaggregated::Sample::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sample";

    return path_buffer.str();

}

const EntityPath Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationMetric::Bucket::Contents::Unaggregated::Sample::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-sla-oper:sla/protocols/Cisco-IOS-XR-ethernet-cfm-oper:ethernet/statistics-currents/statistics-current/operation-metric/bucket/contents/unaggregated/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (corrupt.is_set || is_set(corrupt.yfilter)) leaf_name_data.push_back(corrupt.get_name_leafdata());
    if (frames_lost.is_set || is_set(frames_lost.yfilter)) leaf_name_data.push_back(frames_lost.get_name_leafdata());
    if (frames_sent.is_set || is_set(frames_sent.yfilter)) leaf_name_data.push_back(frames_sent.get_name_leafdata());
    if (no_data_packets.is_set || is_set(no_data_packets.yfilter)) leaf_name_data.push_back(no_data_packets.get_name_leafdata());
    if (out_of_order.is_set || is_set(out_of_order.yfilter)) leaf_name_data.push_back(out_of_order.get_name_leafdata());
    if (result.is_set || is_set(result.yfilter)) leaf_name_data.push_back(result.get_name_leafdata());
    if (sent.is_set || is_set(sent.yfilter)) leaf_name_data.push_back(sent.get_name_leafdata());
    if (sent_at.is_set || is_set(sent_at.yfilter)) leaf_name_data.push_back(sent_at.get_name_leafdata());
    if (timed_out.is_set || is_set(timed_out.yfilter)) leaf_name_data.push_back(timed_out.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationMetric::Bucket::Contents::Unaggregated::Sample::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationMetric::Bucket::Contents::Unaggregated::Sample::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationMetric::Bucket::Contents::Unaggregated::Sample::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "corrupt")
    {
        corrupt = value;
        corrupt.value_namespace = name_space;
        corrupt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frames-lost")
    {
        frames_lost = value;
        frames_lost.value_namespace = name_space;
        frames_lost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frames-sent")
    {
        frames_sent = value;
        frames_sent.value_namespace = name_space;
        frames_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-data-packets")
    {
        no_data_packets = value;
        no_data_packets.value_namespace = name_space;
        no_data_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-of-order")
    {
        out_of_order = value;
        out_of_order.value_namespace = name_space;
        out_of_order.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "result")
    {
        result = value;
        result.value_namespace = name_space;
        result.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sent")
    {
        sent = value;
        sent.value_namespace = name_space;
        sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sent-at")
    {
        sent_at = value;
        sent_at.value_namespace = name_space;
        sent_at.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timed-out")
    {
        timed_out = value;
        timed_out.value_namespace = name_space;
        timed_out.value_namespace_prefix = name_space_prefix;
    }
}

void Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationMetric::Bucket::Contents::Unaggregated::Sample::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "corrupt")
    {
        corrupt.yfilter = yfilter;
    }
    if(value_path == "frames-lost")
    {
        frames_lost.yfilter = yfilter;
    }
    if(value_path == "frames-sent")
    {
        frames_sent.yfilter = yfilter;
    }
    if(value_path == "no-data-packets")
    {
        no_data_packets.yfilter = yfilter;
    }
    if(value_path == "out-of-order")
    {
        out_of_order.yfilter = yfilter;
    }
    if(value_path == "result")
    {
        result.yfilter = yfilter;
    }
    if(value_path == "sent")
    {
        sent.yfilter = yfilter;
    }
    if(value_path == "sent-at")
    {
        sent_at.yfilter = yfilter;
    }
    if(value_path == "timed-out")
    {
        timed_out.yfilter = yfilter;
    }
}

bool Sla::Protocols::Ethernet::StatisticsCurrents::StatisticsCurrent::OperationMetric::Bucket::Contents::Unaggregated::Sample::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "corrupt" || name == "frames-lost" || name == "frames-sent" || name == "no-data-packets" || name == "out-of-order" || name == "result" || name == "sent" || name == "sent-at" || name == "timed-out")
        return true;
    return false;
}

SlaNodes::SlaNodes()
{
    yang_name = "sla-nodes"; yang_parent_name = "Cisco-IOS-XR-infra-sla-oper";
}

SlaNodes::~SlaNodes()
{
}

bool SlaNodes::has_data() const
{
    return false;
}

bool SlaNodes::has_operation() const
{
    return is_set(yfilter);
}

std::string SlaNodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-sla-oper:sla-nodes";

    return path_buffer.str();

}

const EntityPath SlaNodes::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> SlaNodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SlaNodes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void SlaNodes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SlaNodes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> SlaNodes::clone_ptr() const
{
    return std::make_shared<SlaNodes>();
}

std::string SlaNodes::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string SlaNodes::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function SlaNodes::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> SlaNodes::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool SlaNodes::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}


}
}

