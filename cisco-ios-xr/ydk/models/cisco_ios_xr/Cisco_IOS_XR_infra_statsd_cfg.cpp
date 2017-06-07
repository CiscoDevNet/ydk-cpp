
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_infra_statsd_cfg.hpp"

namespace ydk {
namespace Cisco_IOS_XR_infra_statsd_cfg {

Statistics::Statistics()
    :
    period(std::make_shared<Statistics::Period>())
{
    period->parent = this;

    yang_name = "statistics"; yang_parent_name = "Cisco-IOS-XR-infra-statsd-cfg";
}

Statistics::~Statistics()
{
}

bool Statistics::has_data() const
{
    return (period !=  nullptr && period->has_data());
}

bool Statistics::has_operation() const
{
    return is_set(operation)
	|| (period !=  nullptr && period->has_operation());
}

std::string Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-statsd-cfg:statistics";

    return path_buffer.str();

}

const EntityPath Statistics::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "period")
    {
        if(period == nullptr)
        {
            period = std::make_shared<Statistics::Period>();
        }
        return period;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(period != nullptr)
    {
        children["period"] = period;
    }

    return children;
}

void Statistics::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> Statistics::clone_ptr() const
{
    return std::make_shared<Statistics>();
}

std::string Statistics::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Statistics::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Statistics::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

Statistics::Period::Period()
    :
    service_accounting(std::make_shared<Statistics::Period::ServiceAccounting>())
{
    service_accounting->parent = this;

    yang_name = "period"; yang_parent_name = "statistics";
}

Statistics::Period::~Period()
{
}

bool Statistics::Period::has_data() const
{
    return (service_accounting !=  nullptr && service_accounting->has_data());
}

bool Statistics::Period::has_operation() const
{
    return is_set(operation)
	|| (service_accounting !=  nullptr && service_accounting->has_operation());
}

std::string Statistics::Period::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "period";

    return path_buffer.str();

}

const EntityPath Statistics::Period::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-statsd-cfg:statistics/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Statistics::Period::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-accounting")
    {
        if(service_accounting == nullptr)
        {
            service_accounting = std::make_shared<Statistics::Period::ServiceAccounting>();
        }
        return service_accounting;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Statistics::Period::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(service_accounting != nullptr)
    {
        children["service-accounting"] = service_accounting;
    }

    return children;
}

void Statistics::Period::set_value(const std::string & value_path, std::string value)
{
}

Statistics::Period::ServiceAccounting::ServiceAccounting()
    :
    polling_disable{YType::empty, "polling-disable"},
    polling_period{YType::uint32, "polling-period"}
{
    yang_name = "service-accounting"; yang_parent_name = "period";
}

Statistics::Period::ServiceAccounting::~ServiceAccounting()
{
}

bool Statistics::Period::ServiceAccounting::has_data() const
{
    return polling_disable.is_set
	|| polling_period.is_set;
}

bool Statistics::Period::ServiceAccounting::has_operation() const
{
    return is_set(operation)
	|| is_set(polling_disable.operation)
	|| is_set(polling_period.operation);
}

std::string Statistics::Period::ServiceAccounting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-accounting";

    return path_buffer.str();

}

const EntityPath Statistics::Period::ServiceAccounting::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-statsd-cfg:statistics/period/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (polling_disable.is_set || is_set(polling_disable.operation)) leaf_name_data.push_back(polling_disable.get_name_leafdata());
    if (polling_period.is_set || is_set(polling_period.operation)) leaf_name_data.push_back(polling_period.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Statistics::Period::ServiceAccounting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Statistics::Period::ServiceAccounting::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Statistics::Period::ServiceAccounting::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "polling-disable")
    {
        polling_disable = value;
    }
    if(value_path == "polling-period")
    {
        polling_period = value;
    }
}


}
}

