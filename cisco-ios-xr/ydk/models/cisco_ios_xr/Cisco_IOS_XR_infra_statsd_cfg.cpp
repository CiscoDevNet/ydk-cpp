
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_infra_statsd_cfg.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_infra_statsd_cfg {

Statistics::Statistics()
    :
    period(std::make_shared<Statistics::Period>())
{
    period->parent = this;

    yang_name = "statistics"; yang_parent_name = "Cisco-IOS-XR-infra-statsd-cfg"; is_top_level_class = true; has_list_ancestor = false; 
}

Statistics::~Statistics()
{
}

bool Statistics::has_data() const
{
    if (is_presence_container) return true;
    return (period !=  nullptr && period->has_data());
}

bool Statistics::has_operation() const
{
    return is_set(yfilter)
	|| (period !=  nullptr && period->has_operation());
}

std::string Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-statsd-cfg:statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

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
    char count=0;
    if(period != nullptr)
    {
        children["period"] = period;
    }

    return children;
}

void Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Statistics::set_filter(const std::string & value_path, YFilter yfilter)
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

std::map<std::pair<std::string, std::string>, std::string> Statistics::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "period")
        return true;
    return false;
}

Statistics::Period::Period()
    :
    service_accounting(std::make_shared<Statistics::Period::ServiceAccounting>())
{
    service_accounting->parent = this;

    yang_name = "period"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = false; 
}

Statistics::Period::~Period()
{
}

bool Statistics::Period::has_data() const
{
    if (is_presence_container) return true;
    return (service_accounting !=  nullptr && service_accounting->has_data());
}

bool Statistics::Period::has_operation() const
{
    return is_set(yfilter)
	|| (service_accounting !=  nullptr && service_accounting->has_operation());
}

std::string Statistics::Period::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-statsd-cfg:statistics/" << get_segment_path();
    return path_buffer.str();
}

std::string Statistics::Period::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "period";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Statistics::Period::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

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
    char count=0;
    if(service_accounting != nullptr)
    {
        children["service-accounting"] = service_accounting;
    }

    return children;
}

void Statistics::Period::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Statistics::Period::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Statistics::Period::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-accounting")
        return true;
    return false;
}

Statistics::Period::ServiceAccounting::ServiceAccounting()
    :
    polling_period{YType::uint32, "polling-period"},
    polling_disable{YType::empty, "polling-disable"}
{

    yang_name = "service-accounting"; yang_parent_name = "period"; is_top_level_class = false; has_list_ancestor = false; 
}

Statistics::Period::ServiceAccounting::~ServiceAccounting()
{
}

bool Statistics::Period::ServiceAccounting::has_data() const
{
    if (is_presence_container) return true;
    return polling_period.is_set
	|| polling_disable.is_set;
}

bool Statistics::Period::ServiceAccounting::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(polling_period.yfilter)
	|| ydk::is_set(polling_disable.yfilter);
}

std::string Statistics::Period::ServiceAccounting::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-statsd-cfg:statistics/period/" << get_segment_path();
    return path_buffer.str();
}

std::string Statistics::Period::ServiceAccounting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-accounting";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Statistics::Period::ServiceAccounting::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (polling_period.is_set || is_set(polling_period.yfilter)) leaf_name_data.push_back(polling_period.get_name_leafdata());
    if (polling_disable.is_set || is_set(polling_disable.yfilter)) leaf_name_data.push_back(polling_disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Statistics::Period::ServiceAccounting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Statistics::Period::ServiceAccounting::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Statistics::Period::ServiceAccounting::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "polling-period")
    {
        polling_period = value;
        polling_period.value_namespace = name_space;
        polling_period.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "polling-disable")
    {
        polling_disable = value;
        polling_disable.value_namespace = name_space;
        polling_disable.value_namespace_prefix = name_space_prefix;
    }
}

void Statistics::Period::ServiceAccounting::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "polling-period")
    {
        polling_period.yfilter = yfilter;
    }
    if(value_path == "polling-disable")
    {
        polling_disable.yfilter = yfilter;
    }
}

bool Statistics::Period::ServiceAccounting::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "polling-period" || name == "polling-disable")
        return true;
    return false;
}


}
}

