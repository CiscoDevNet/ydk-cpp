
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_pmengine_oper_16.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_pmengine_oper {

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::CenterWavelength::CenterWavelength()
    :
    valid{YType::boolean, "valid"},
    minimum{YType::str, "minimum"},
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    minimum_threshold{YType::str, "minimum-threshold"},
    configured_min_thresh{YType::str, "configured-min-thresh"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    configured_max_thresh{YType::str, "configured-max-thresh"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"}
{

    yang_name = "center-wavelength"; yang_parent_name = "optics-minute15-optics-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::CenterWavelength::~CenterWavelength()
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::CenterWavelength::has_data() const
{
    if (is_presence_container) return true;
    return valid.is_set
	|| minimum.is_set
	|| average.is_set
	|| maximum.is_set
	|| minimum_threshold.is_set
	|| configured_min_thresh.is_set
	|| minimum_tca_report.is_set
	|| maximum_threshold.is_set
	|| configured_max_thresh.is_set
	|| maximum_tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::CenterWavelength::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(valid.yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(minimum_threshold.yfilter)
	|| ydk::is_set(configured_min_thresh.yfilter)
	|| ydk::is_set(minimum_tca_report.yfilter)
	|| ydk::is_set(maximum_threshold.yfilter)
	|| ydk::is_set(configured_max_thresh.yfilter)
	|| ydk::is_set(maximum_tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::CenterWavelength::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "center-wavelength";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::CenterWavelength::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.yfilter)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (configured_min_thresh.is_set || is_set(configured_min_thresh.yfilter)) leaf_name_data.push_back(configured_min_thresh.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.yfilter)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.yfilter)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (configured_max_thresh.is_set || is_set(configured_max_thresh.yfilter)) leaf_name_data.push_back(configured_max_thresh.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.yfilter)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::CenterWavelength::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::CenterWavelength::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::CenterWavelength::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "average")
    {
        average = value;
        average.value_namespace = name_space;
        average.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
        minimum_threshold.value_namespace = name_space;
        minimum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-min-thresh")
    {
        configured_min_thresh = value;
        configured_min_thresh.value_namespace = name_space;
        configured_min_thresh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
        minimum_tca_report.value_namespace = name_space;
        minimum_tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
        maximum_threshold.value_namespace = name_space;
        maximum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-max-thresh")
    {
        configured_max_thresh = value;
        configured_max_thresh.value_namespace = name_space;
        configured_max_thresh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
        maximum_tca_report.value_namespace = name_space;
        maximum_tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::CenterWavelength::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
    if(value_path == "average")
    {
        average.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold.yfilter = yfilter;
    }
    if(value_path == "configured-min-thresh")
    {
        configured_min_thresh.yfilter = yfilter;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report.yfilter = yfilter;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold.yfilter = yfilter;
    }
    if(value_path == "configured-max-thresh")
    {
        configured_max_thresh.yfilter = yfilter;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::CenterWavelength::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "valid" || name == "minimum" || name == "average" || name == "maximum" || name == "minimum-threshold" || name == "configured-min-thresh" || name == "minimum-tca-report" || name == "maximum-threshold" || name == "configured-max-thresh" || name == "maximum-tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Pdl::Pdl()
    :
    valid{YType::boolean, "valid"},
    minimum{YType::str, "minimum"},
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    minimum_threshold{YType::str, "minimum-threshold"},
    configured_min_thresh{YType::str, "configured-min-thresh"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    configured_max_thresh{YType::str, "configured-max-thresh"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"}
{

    yang_name = "pdl"; yang_parent_name = "optics-minute15-optics-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Pdl::~Pdl()
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Pdl::has_data() const
{
    if (is_presence_container) return true;
    return valid.is_set
	|| minimum.is_set
	|| average.is_set
	|| maximum.is_set
	|| minimum_threshold.is_set
	|| configured_min_thresh.is_set
	|| minimum_tca_report.is_set
	|| maximum_threshold.is_set
	|| configured_max_thresh.is_set
	|| maximum_tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Pdl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(valid.yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(minimum_threshold.yfilter)
	|| ydk::is_set(configured_min_thresh.yfilter)
	|| ydk::is_set(minimum_tca_report.yfilter)
	|| ydk::is_set(maximum_threshold.yfilter)
	|| ydk::is_set(configured_max_thresh.yfilter)
	|| ydk::is_set(maximum_tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Pdl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pdl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Pdl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.yfilter)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (configured_min_thresh.is_set || is_set(configured_min_thresh.yfilter)) leaf_name_data.push_back(configured_min_thresh.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.yfilter)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.yfilter)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (configured_max_thresh.is_set || is_set(configured_max_thresh.yfilter)) leaf_name_data.push_back(configured_max_thresh.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.yfilter)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Pdl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Pdl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Pdl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "average")
    {
        average = value;
        average.value_namespace = name_space;
        average.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
        minimum_threshold.value_namespace = name_space;
        minimum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-min-thresh")
    {
        configured_min_thresh = value;
        configured_min_thresh.value_namespace = name_space;
        configured_min_thresh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
        minimum_tca_report.value_namespace = name_space;
        minimum_tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
        maximum_threshold.value_namespace = name_space;
        maximum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-max-thresh")
    {
        configured_max_thresh = value;
        configured_max_thresh.value_namespace = name_space;
        configured_max_thresh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
        maximum_tca_report.value_namespace = name_space;
        maximum_tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Pdl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
    if(value_path == "average")
    {
        average.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold.yfilter = yfilter;
    }
    if(value_path == "configured-min-thresh")
    {
        configured_min_thresh.yfilter = yfilter;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report.yfilter = yfilter;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold.yfilter = yfilter;
    }
    if(value_path == "configured-max-thresh")
    {
        configured_max_thresh.yfilter = yfilter;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Pdl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "valid" || name == "minimum" || name == "average" || name == "maximum" || name == "minimum-threshold" || name == "configured-min-thresh" || name == "minimum-tca-report" || name == "maximum-threshold" || name == "configured-max-thresh" || name == "maximum-tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Pcr::Pcr()
    :
    valid{YType::boolean, "valid"},
    minimum{YType::str, "minimum"},
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    minimum_threshold{YType::str, "minimum-threshold"},
    configured_min_thresh{YType::str, "configured-min-thresh"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    configured_max_thresh{YType::str, "configured-max-thresh"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"}
{

    yang_name = "pcr"; yang_parent_name = "optics-minute15-optics-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Pcr::~Pcr()
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Pcr::has_data() const
{
    if (is_presence_container) return true;
    return valid.is_set
	|| minimum.is_set
	|| average.is_set
	|| maximum.is_set
	|| minimum_threshold.is_set
	|| configured_min_thresh.is_set
	|| minimum_tca_report.is_set
	|| maximum_threshold.is_set
	|| configured_max_thresh.is_set
	|| maximum_tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Pcr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(valid.yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(minimum_threshold.yfilter)
	|| ydk::is_set(configured_min_thresh.yfilter)
	|| ydk::is_set(minimum_tca_report.yfilter)
	|| ydk::is_set(maximum_threshold.yfilter)
	|| ydk::is_set(configured_max_thresh.yfilter)
	|| ydk::is_set(maximum_tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Pcr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pcr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Pcr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.yfilter)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (configured_min_thresh.is_set || is_set(configured_min_thresh.yfilter)) leaf_name_data.push_back(configured_min_thresh.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.yfilter)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.yfilter)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (configured_max_thresh.is_set || is_set(configured_max_thresh.yfilter)) leaf_name_data.push_back(configured_max_thresh.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.yfilter)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Pcr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Pcr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Pcr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "average")
    {
        average = value;
        average.value_namespace = name_space;
        average.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
        minimum_threshold.value_namespace = name_space;
        minimum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-min-thresh")
    {
        configured_min_thresh = value;
        configured_min_thresh.value_namespace = name_space;
        configured_min_thresh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
        minimum_tca_report.value_namespace = name_space;
        minimum_tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
        maximum_threshold.value_namespace = name_space;
        maximum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-max-thresh")
    {
        configured_max_thresh = value;
        configured_max_thresh.value_namespace = name_space;
        configured_max_thresh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
        maximum_tca_report.value_namespace = name_space;
        maximum_tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Pcr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
    if(value_path == "average")
    {
        average.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold.yfilter = yfilter;
    }
    if(value_path == "configured-min-thresh")
    {
        configured_min_thresh.yfilter = yfilter;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report.yfilter = yfilter;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold.yfilter = yfilter;
    }
    if(value_path == "configured-max-thresh")
    {
        configured_max_thresh.yfilter = yfilter;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Pcr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "valid" || name == "minimum" || name == "average" || name == "maximum" || name == "minimum-threshold" || name == "configured-min-thresh" || name == "minimum-tca-report" || name == "maximum-threshold" || name == "configured-max-thresh" || name == "maximum-tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Pn::Pn()
    :
    valid{YType::boolean, "valid"},
    minimum{YType::str, "minimum"},
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    minimum_threshold{YType::str, "minimum-threshold"},
    configured_min_thresh{YType::str, "configured-min-thresh"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    configured_max_thresh{YType::str, "configured-max-thresh"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"}
{

    yang_name = "pn"; yang_parent_name = "optics-minute15-optics-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Pn::~Pn()
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Pn::has_data() const
{
    if (is_presence_container) return true;
    return valid.is_set
	|| minimum.is_set
	|| average.is_set
	|| maximum.is_set
	|| minimum_threshold.is_set
	|| configured_min_thresh.is_set
	|| minimum_tca_report.is_set
	|| maximum_threshold.is_set
	|| configured_max_thresh.is_set
	|| maximum_tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Pn::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(valid.yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(minimum_threshold.yfilter)
	|| ydk::is_set(configured_min_thresh.yfilter)
	|| ydk::is_set(minimum_tca_report.yfilter)
	|| ydk::is_set(maximum_threshold.yfilter)
	|| ydk::is_set(configured_max_thresh.yfilter)
	|| ydk::is_set(maximum_tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Pn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Pn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.yfilter)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (configured_min_thresh.is_set || is_set(configured_min_thresh.yfilter)) leaf_name_data.push_back(configured_min_thresh.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.yfilter)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.yfilter)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (configured_max_thresh.is_set || is_set(configured_max_thresh.yfilter)) leaf_name_data.push_back(configured_max_thresh.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.yfilter)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Pn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Pn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Pn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "average")
    {
        average = value;
        average.value_namespace = name_space;
        average.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
        minimum_threshold.value_namespace = name_space;
        minimum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-min-thresh")
    {
        configured_min_thresh = value;
        configured_min_thresh.value_namespace = name_space;
        configured_min_thresh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
        minimum_tca_report.value_namespace = name_space;
        minimum_tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
        maximum_threshold.value_namespace = name_space;
        maximum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-max-thresh")
    {
        configured_max_thresh = value;
        configured_max_thresh.value_namespace = name_space;
        configured_max_thresh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
        maximum_tca_report.value_namespace = name_space;
        maximum_tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Pn::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
    if(value_path == "average")
    {
        average.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold.yfilter = yfilter;
    }
    if(value_path == "configured-min-thresh")
    {
        configured_min_thresh.yfilter = yfilter;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report.yfilter = yfilter;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold.yfilter = yfilter;
    }
    if(value_path == "configured-max-thresh")
    {
        configured_max_thresh.yfilter = yfilter;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Pn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "valid" || name == "minimum" || name == "average" || name == "maximum" || name == "minimum-threshold" || name == "configured-min-thresh" || name == "minimum-tca-report" || name == "maximum-threshold" || name == "configured-max-thresh" || name == "maximum-tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::RxSigPow::RxSigPow()
    :
    valid{YType::boolean, "valid"},
    minimum{YType::str, "minimum"},
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    minimum_threshold{YType::str, "minimum-threshold"},
    configured_min_thresh{YType::str, "configured-min-thresh"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    configured_max_thresh{YType::str, "configured-max-thresh"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"}
{

    yang_name = "rx-sig-pow"; yang_parent_name = "optics-minute15-optics-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::RxSigPow::~RxSigPow()
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::RxSigPow::has_data() const
{
    if (is_presence_container) return true;
    return valid.is_set
	|| minimum.is_set
	|| average.is_set
	|| maximum.is_set
	|| minimum_threshold.is_set
	|| configured_min_thresh.is_set
	|| minimum_tca_report.is_set
	|| maximum_threshold.is_set
	|| configured_max_thresh.is_set
	|| maximum_tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::RxSigPow::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(valid.yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(minimum_threshold.yfilter)
	|| ydk::is_set(configured_min_thresh.yfilter)
	|| ydk::is_set(minimum_tca_report.yfilter)
	|| ydk::is_set(maximum_threshold.yfilter)
	|| ydk::is_set(configured_max_thresh.yfilter)
	|| ydk::is_set(maximum_tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::RxSigPow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rx-sig-pow";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::RxSigPow::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.yfilter)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (configured_min_thresh.is_set || is_set(configured_min_thresh.yfilter)) leaf_name_data.push_back(configured_min_thresh.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.yfilter)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.yfilter)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (configured_max_thresh.is_set || is_set(configured_max_thresh.yfilter)) leaf_name_data.push_back(configured_max_thresh.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.yfilter)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::RxSigPow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::RxSigPow::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::RxSigPow::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "average")
    {
        average = value;
        average.value_namespace = name_space;
        average.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
        minimum_threshold.value_namespace = name_space;
        minimum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-min-thresh")
    {
        configured_min_thresh = value;
        configured_min_thresh.value_namespace = name_space;
        configured_min_thresh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
        minimum_tca_report.value_namespace = name_space;
        minimum_tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
        maximum_threshold.value_namespace = name_space;
        maximum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-max-thresh")
    {
        configured_max_thresh = value;
        configured_max_thresh.value_namespace = name_space;
        configured_max_thresh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
        maximum_tca_report.value_namespace = name_space;
        maximum_tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::RxSigPow::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
    if(value_path == "average")
    {
        average.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold.yfilter = yfilter;
    }
    if(value_path == "configured-min-thresh")
    {
        configured_min_thresh.yfilter = yfilter;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report.yfilter = yfilter;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold.yfilter = yfilter;
    }
    if(value_path == "configured-max-thresh")
    {
        configured_max_thresh.yfilter = yfilter;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::RxSigPow::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "valid" || name == "minimum" || name == "average" || name == "maximum" || name == "minimum-threshold" || name == "configured-min-thresh" || name == "minimum-tca-report" || name == "maximum-threshold" || name == "configured-max-thresh" || name == "maximum-tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::LowSigFreqOff::LowSigFreqOff()
    :
    valid{YType::boolean, "valid"},
    minimum{YType::int32, "minimum"},
    average{YType::int32, "average"},
    maximum{YType::int32, "maximum"},
    minimum_threshold{YType::int32, "minimum-threshold"},
    configured_min_thresh{YType::str, "configured-min-thresh"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    maximum_threshold{YType::int32, "maximum-threshold"},
    configured_max_thresh{YType::str, "configured-max-thresh"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"}
{

    yang_name = "low-sig-freq-off"; yang_parent_name = "optics-minute15-optics-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::LowSigFreqOff::~LowSigFreqOff()
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::LowSigFreqOff::has_data() const
{
    if (is_presence_container) return true;
    return valid.is_set
	|| minimum.is_set
	|| average.is_set
	|| maximum.is_set
	|| minimum_threshold.is_set
	|| configured_min_thresh.is_set
	|| minimum_tca_report.is_set
	|| maximum_threshold.is_set
	|| configured_max_thresh.is_set
	|| maximum_tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::LowSigFreqOff::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(valid.yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(minimum_threshold.yfilter)
	|| ydk::is_set(configured_min_thresh.yfilter)
	|| ydk::is_set(minimum_tca_report.yfilter)
	|| ydk::is_set(maximum_threshold.yfilter)
	|| ydk::is_set(configured_max_thresh.yfilter)
	|| ydk::is_set(maximum_tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::LowSigFreqOff::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "low-sig-freq-off";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::LowSigFreqOff::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.yfilter)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (configured_min_thresh.is_set || is_set(configured_min_thresh.yfilter)) leaf_name_data.push_back(configured_min_thresh.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.yfilter)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.yfilter)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (configured_max_thresh.is_set || is_set(configured_max_thresh.yfilter)) leaf_name_data.push_back(configured_max_thresh.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.yfilter)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::LowSigFreqOff::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::LowSigFreqOff::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::LowSigFreqOff::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "average")
    {
        average = value;
        average.value_namespace = name_space;
        average.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
        minimum_threshold.value_namespace = name_space;
        minimum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-min-thresh")
    {
        configured_min_thresh = value;
        configured_min_thresh.value_namespace = name_space;
        configured_min_thresh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
        minimum_tca_report.value_namespace = name_space;
        minimum_tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
        maximum_threshold.value_namespace = name_space;
        maximum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-max-thresh")
    {
        configured_max_thresh = value;
        configured_max_thresh.value_namespace = name_space;
        configured_max_thresh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
        maximum_tca_report.value_namespace = name_space;
        maximum_tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::LowSigFreqOff::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
    if(value_path == "average")
    {
        average.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold.yfilter = yfilter;
    }
    if(value_path == "configured-min-thresh")
    {
        configured_min_thresh.yfilter = yfilter;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report.yfilter = yfilter;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold.yfilter = yfilter;
    }
    if(value_path == "configured-max-thresh")
    {
        configured_max_thresh.yfilter = yfilter;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::LowSigFreqOff::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "valid" || name == "minimum" || name == "average" || name == "maximum" || name == "minimum-threshold" || name == "configured-min-thresh" || name == "minimum-tca-report" || name == "maximum-threshold" || name == "configured-max-thresh" || name == "maximum-tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::AmpliGain::AmpliGain()
    :
    valid{YType::boolean, "valid"},
    minimum{YType::str, "minimum"},
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    minimum_threshold{YType::str, "minimum-threshold"},
    configured_min_thresh{YType::str, "configured-min-thresh"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    configured_max_thresh{YType::str, "configured-max-thresh"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"}
{

    yang_name = "ampli-gain"; yang_parent_name = "optics-minute15-optics-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::AmpliGain::~AmpliGain()
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::AmpliGain::has_data() const
{
    if (is_presence_container) return true;
    return valid.is_set
	|| minimum.is_set
	|| average.is_set
	|| maximum.is_set
	|| minimum_threshold.is_set
	|| configured_min_thresh.is_set
	|| minimum_tca_report.is_set
	|| maximum_threshold.is_set
	|| configured_max_thresh.is_set
	|| maximum_tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::AmpliGain::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(valid.yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(minimum_threshold.yfilter)
	|| ydk::is_set(configured_min_thresh.yfilter)
	|| ydk::is_set(minimum_tca_report.yfilter)
	|| ydk::is_set(maximum_threshold.yfilter)
	|| ydk::is_set(configured_max_thresh.yfilter)
	|| ydk::is_set(maximum_tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::AmpliGain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ampli-gain";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::AmpliGain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.yfilter)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (configured_min_thresh.is_set || is_set(configured_min_thresh.yfilter)) leaf_name_data.push_back(configured_min_thresh.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.yfilter)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.yfilter)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (configured_max_thresh.is_set || is_set(configured_max_thresh.yfilter)) leaf_name_data.push_back(configured_max_thresh.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.yfilter)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::AmpliGain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::AmpliGain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::AmpliGain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "average")
    {
        average = value;
        average.value_namespace = name_space;
        average.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
        minimum_threshold.value_namespace = name_space;
        minimum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-min-thresh")
    {
        configured_min_thresh = value;
        configured_min_thresh.value_namespace = name_space;
        configured_min_thresh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
        minimum_tca_report.value_namespace = name_space;
        minimum_tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
        maximum_threshold.value_namespace = name_space;
        maximum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-max-thresh")
    {
        configured_max_thresh = value;
        configured_max_thresh.value_namespace = name_space;
        configured_max_thresh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
        maximum_tca_report.value_namespace = name_space;
        maximum_tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::AmpliGain::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
    if(value_path == "average")
    {
        average.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold.yfilter = yfilter;
    }
    if(value_path == "configured-min-thresh")
    {
        configured_min_thresh.yfilter = yfilter;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report.yfilter = yfilter;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold.yfilter = yfilter;
    }
    if(value_path == "configured-max-thresh")
    {
        configured_max_thresh.yfilter = yfilter;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::AmpliGain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "valid" || name == "minimum" || name == "average" || name == "maximum" || name == "minimum-threshold" || name == "configured-min-thresh" || name == "minimum-tca-report" || name == "maximum-threshold" || name == "configured-max-thresh" || name == "maximum-tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::AmpliGainTilt::AmpliGainTilt()
    :
    valid{YType::boolean, "valid"},
    minimum{YType::str, "minimum"},
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    minimum_threshold{YType::str, "minimum-threshold"},
    configured_min_thresh{YType::str, "configured-min-thresh"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    configured_max_thresh{YType::str, "configured-max-thresh"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"}
{

    yang_name = "ampli-gain-tilt"; yang_parent_name = "optics-minute15-optics-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::AmpliGainTilt::~AmpliGainTilt()
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::AmpliGainTilt::has_data() const
{
    if (is_presence_container) return true;
    return valid.is_set
	|| minimum.is_set
	|| average.is_set
	|| maximum.is_set
	|| minimum_threshold.is_set
	|| configured_min_thresh.is_set
	|| minimum_tca_report.is_set
	|| maximum_threshold.is_set
	|| configured_max_thresh.is_set
	|| maximum_tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::AmpliGainTilt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(valid.yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(minimum_threshold.yfilter)
	|| ydk::is_set(configured_min_thresh.yfilter)
	|| ydk::is_set(minimum_tca_report.yfilter)
	|| ydk::is_set(maximum_threshold.yfilter)
	|| ydk::is_set(configured_max_thresh.yfilter)
	|| ydk::is_set(maximum_tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::AmpliGainTilt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ampli-gain-tilt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::AmpliGainTilt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.yfilter)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (configured_min_thresh.is_set || is_set(configured_min_thresh.yfilter)) leaf_name_data.push_back(configured_min_thresh.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.yfilter)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.yfilter)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (configured_max_thresh.is_set || is_set(configured_max_thresh.yfilter)) leaf_name_data.push_back(configured_max_thresh.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.yfilter)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::AmpliGainTilt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::AmpliGainTilt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::AmpliGainTilt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "average")
    {
        average = value;
        average.value_namespace = name_space;
        average.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
        minimum_threshold.value_namespace = name_space;
        minimum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-min-thresh")
    {
        configured_min_thresh = value;
        configured_min_thresh.value_namespace = name_space;
        configured_min_thresh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
        minimum_tca_report.value_namespace = name_space;
        minimum_tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
        maximum_threshold.value_namespace = name_space;
        maximum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-max-thresh")
    {
        configured_max_thresh = value;
        configured_max_thresh.value_namespace = name_space;
        configured_max_thresh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
        maximum_tca_report.value_namespace = name_space;
        maximum_tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::AmpliGainTilt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
    if(value_path == "average")
    {
        average.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold.yfilter = yfilter;
    }
    if(value_path == "configured-min-thresh")
    {
        configured_min_thresh.yfilter = yfilter;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report.yfilter = yfilter;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold.yfilter = yfilter;
    }
    if(value_path == "configured-max-thresh")
    {
        configured_max_thresh.yfilter = yfilter;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::AmpliGainTilt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "valid" || name == "minimum" || name == "average" || name == "maximum" || name == "minimum-threshold" || name == "configured-min-thresh" || name == "minimum-tca-report" || name == "maximum-threshold" || name == "configured-max-thresh" || name == "maximum-tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15fecHistories::OpticsMinute15fecHistories()
    :
    optics_minute15fec_history(this, {"number"})
{

    yang_name = "optics-minute15fec-histories"; yang_parent_name = "optics-minute15-history"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15fecHistories::~OpticsMinute15fecHistories()
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15fecHistories::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<optics_minute15fec_history.len(); index++)
    {
        if(optics_minute15fec_history[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15fecHistories::has_operation() const
{
    for (std::size_t index=0; index<optics_minute15fec_history.len(); index++)
    {
        if(optics_minute15fec_history[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15fecHistories::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optics-minute15fec-histories";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15fecHistories::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15fecHistories::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "optics-minute15fec-history")
    {
        auto c = std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15fecHistories::OpticsMinute15fecHistory>();
        c->parent = this;
        optics_minute15fec_history.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15fecHistories::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : optics_minute15fec_history.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15fecHistories::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15fecHistories::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15fecHistories::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "optics-minute15fec-history")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15fecHistories::OpticsMinute15fecHistory::OpticsMinute15fecHistory()
    :
    number{YType::uint32, "number"}
        ,
    optics_minute15fec_time_line_instances(std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15fecHistories::OpticsMinute15fecHistory::OpticsMinute15fecTimeLineInstances>())
{
    optics_minute15fec_time_line_instances->parent = this;

    yang_name = "optics-minute15fec-history"; yang_parent_name = "optics-minute15fec-histories"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15fecHistories::OpticsMinute15fecHistory::~OpticsMinute15fecHistory()
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15fecHistories::OpticsMinute15fecHistory::has_data() const
{
    if (is_presence_container) return true;
    return number.is_set
	|| (optics_minute15fec_time_line_instances !=  nullptr && optics_minute15fec_time_line_instances->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15fecHistories::OpticsMinute15fecHistory::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| (optics_minute15fec_time_line_instances !=  nullptr && optics_minute15fec_time_line_instances->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15fecHistories::OpticsMinute15fecHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optics-minute15fec-history";
    ADD_KEY_TOKEN(number, "number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15fecHistories::OpticsMinute15fecHistory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15fecHistories::OpticsMinute15fecHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "optics-minute15fec-time-line-instances")
    {
        if(optics_minute15fec_time_line_instances == nullptr)
        {
            optics_minute15fec_time_line_instances = std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15fecHistories::OpticsMinute15fecHistory::OpticsMinute15fecTimeLineInstances>();
        }
        return optics_minute15fec_time_line_instances;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15fecHistories::OpticsMinute15fecHistory::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(optics_minute15fec_time_line_instances != nullptr)
    {
        children["optics-minute15fec-time-line-instances"] = optics_minute15fec_time_line_instances;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15fecHistories::OpticsMinute15fecHistory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15fecHistories::OpticsMinute15fecHistory::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15fecHistories::OpticsMinute15fecHistory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "optics-minute15fec-time-line-instances" || name == "number")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15fecHistories::OpticsMinute15fecHistory::OpticsMinute15fecTimeLineInstances::OpticsMinute15fecTimeLineInstances()
    :
    optics_minute15fec_time_line_instance(this, {"number"})
{

    yang_name = "optics-minute15fec-time-line-instances"; yang_parent_name = "optics-minute15fec-history"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15fecHistories::OpticsMinute15fecHistory::OpticsMinute15fecTimeLineInstances::~OpticsMinute15fecTimeLineInstances()
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15fecHistories::OpticsMinute15fecHistory::OpticsMinute15fecTimeLineInstances::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<optics_minute15fec_time_line_instance.len(); index++)
    {
        if(optics_minute15fec_time_line_instance[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15fecHistories::OpticsMinute15fecHistory::OpticsMinute15fecTimeLineInstances::has_operation() const
{
    for (std::size_t index=0; index<optics_minute15fec_time_line_instance.len(); index++)
    {
        if(optics_minute15fec_time_line_instance[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15fecHistories::OpticsMinute15fecHistory::OpticsMinute15fecTimeLineInstances::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optics-minute15fec-time-line-instances";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15fecHistories::OpticsMinute15fecHistory::OpticsMinute15fecTimeLineInstances::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15fecHistories::OpticsMinute15fecHistory::OpticsMinute15fecTimeLineInstances::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "optics-minute15fec-time-line-instance")
    {
        auto c = std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15fecHistories::OpticsMinute15fecHistory::OpticsMinute15fecTimeLineInstances::OpticsMinute15fecTimeLineInstance>();
        c->parent = this;
        optics_minute15fec_time_line_instance.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15fecHistories::OpticsMinute15fecHistory::OpticsMinute15fecTimeLineInstances::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : optics_minute15fec_time_line_instance.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15fecHistories::OpticsMinute15fecHistory::OpticsMinute15fecTimeLineInstances::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15fecHistories::OpticsMinute15fecHistory::OpticsMinute15fecTimeLineInstances::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15fecHistories::OpticsMinute15fecHistory::OpticsMinute15fecTimeLineInstances::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "optics-minute15fec-time-line-instance")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15fecHistories::OpticsMinute15fecHistory::OpticsMinute15fecTimeLineInstances::OpticsMinute15fecTimeLineInstance::OpticsMinute15fecTimeLineInstance()
    :
    number{YType::uint32, "number"},
    index_{YType::uint32, "index"},
    valid{YType::boolean, "valid"},
    timestamp{YType::str, "timestamp"},
    last_clear_time{YType::str, "last-clear-time"},
    last_clear15_min_time{YType::str, "last-clear15-min-time"},
    last_clear30_sec_time{YType::str, "last-clear30-sec-time"},
    last_clear24_hr_time{YType::str, "last-clear24-hr-time"},
    sec30_support{YType::boolean, "sec30-support"}
        ,
    ec_bits(std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15fecHistories::OpticsMinute15fecHistory::OpticsMinute15fecTimeLineInstances::OpticsMinute15fecTimeLineInstance::EcBits>())
    , uc_words(std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15fecHistories::OpticsMinute15fecHistory::OpticsMinute15fecTimeLineInstances::OpticsMinute15fecTimeLineInstance::UcWords>())
    , pre_fec_ber(std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15fecHistories::OpticsMinute15fecHistory::OpticsMinute15fecTimeLineInstances::OpticsMinute15fecTimeLineInstance::PreFecBer>())
    , post_fec_ber(std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15fecHistories::OpticsMinute15fecHistory::OpticsMinute15fecTimeLineInstances::OpticsMinute15fecTimeLineInstance::PostFecBer>())
    , q(std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15fecHistories::OpticsMinute15fecHistory::OpticsMinute15fecTimeLineInstances::OpticsMinute15fecTimeLineInstance::Q>())
    , qmargin(std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15fecHistories::OpticsMinute15fecHistory::OpticsMinute15fecTimeLineInstances::OpticsMinute15fecTimeLineInstance::Qmargin>())
{
    ec_bits->parent = this;
    uc_words->parent = this;
    pre_fec_ber->parent = this;
    post_fec_ber->parent = this;
    q->parent = this;
    qmargin->parent = this;

    yang_name = "optics-minute15fec-time-line-instance"; yang_parent_name = "optics-minute15fec-time-line-instances"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15fecHistories::OpticsMinute15fecHistory::OpticsMinute15fecTimeLineInstances::OpticsMinute15fecTimeLineInstance::~OpticsMinute15fecTimeLineInstance()
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15fecHistories::OpticsMinute15fecHistory::OpticsMinute15fecTimeLineInstances::OpticsMinute15fecTimeLineInstance::has_data() const
{
    if (is_presence_container) return true;
    return number.is_set
	|| index_.is_set
	|| valid.is_set
	|| timestamp.is_set
	|| last_clear_time.is_set
	|| last_clear15_min_time.is_set
	|| last_clear30_sec_time.is_set
	|| last_clear24_hr_time.is_set
	|| sec30_support.is_set
	|| (ec_bits !=  nullptr && ec_bits->has_data())
	|| (uc_words !=  nullptr && uc_words->has_data())
	|| (pre_fec_ber !=  nullptr && pre_fec_ber->has_data())
	|| (post_fec_ber !=  nullptr && post_fec_ber->has_data())
	|| (q !=  nullptr && q->has_data())
	|| (qmargin !=  nullptr && qmargin->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15fecHistories::OpticsMinute15fecHistory::OpticsMinute15fecTimeLineInstances::OpticsMinute15fecTimeLineInstance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(valid.yfilter)
	|| ydk::is_set(timestamp.yfilter)
	|| ydk::is_set(last_clear_time.yfilter)
	|| ydk::is_set(last_clear15_min_time.yfilter)
	|| ydk::is_set(last_clear30_sec_time.yfilter)
	|| ydk::is_set(last_clear24_hr_time.yfilter)
	|| ydk::is_set(sec30_support.yfilter)
	|| (ec_bits !=  nullptr && ec_bits->has_operation())
	|| (uc_words !=  nullptr && uc_words->has_operation())
	|| (pre_fec_ber !=  nullptr && pre_fec_ber->has_operation())
	|| (post_fec_ber !=  nullptr && post_fec_ber->has_operation())
	|| (q !=  nullptr && q->has_operation())
	|| (qmargin !=  nullptr && qmargin->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15fecHistories::OpticsMinute15fecHistory::OpticsMinute15fecTimeLineInstances::OpticsMinute15fecTimeLineInstance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optics-minute15fec-time-line-instance";
    ADD_KEY_TOKEN(number, "number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15fecHistories::OpticsMinute15fecHistory::OpticsMinute15fecTimeLineInstances::OpticsMinute15fecTimeLineInstance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());
    if (timestamp.is_set || is_set(timestamp.yfilter)) leaf_name_data.push_back(timestamp.get_name_leafdata());
    if (last_clear_time.is_set || is_set(last_clear_time.yfilter)) leaf_name_data.push_back(last_clear_time.get_name_leafdata());
    if (last_clear15_min_time.is_set || is_set(last_clear15_min_time.yfilter)) leaf_name_data.push_back(last_clear15_min_time.get_name_leafdata());
    if (last_clear30_sec_time.is_set || is_set(last_clear30_sec_time.yfilter)) leaf_name_data.push_back(last_clear30_sec_time.get_name_leafdata());
    if (last_clear24_hr_time.is_set || is_set(last_clear24_hr_time.yfilter)) leaf_name_data.push_back(last_clear24_hr_time.get_name_leafdata());
    if (sec30_support.is_set || is_set(sec30_support.yfilter)) leaf_name_data.push_back(sec30_support.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15fecHistories::OpticsMinute15fecHistory::OpticsMinute15fecTimeLineInstances::OpticsMinute15fecTimeLineInstance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ec-bits")
    {
        if(ec_bits == nullptr)
        {
            ec_bits = std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15fecHistories::OpticsMinute15fecHistory::OpticsMinute15fecTimeLineInstances::OpticsMinute15fecTimeLineInstance::EcBits>();
        }
        return ec_bits;
    }

    if(child_yang_name == "uc-words")
    {
        if(uc_words == nullptr)
        {
            uc_words = std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15fecHistories::OpticsMinute15fecHistory::OpticsMinute15fecTimeLineInstances::OpticsMinute15fecTimeLineInstance::UcWords>();
        }
        return uc_words;
    }

    if(child_yang_name == "pre-fec-ber")
    {
        if(pre_fec_ber == nullptr)
        {
            pre_fec_ber = std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15fecHistories::OpticsMinute15fecHistory::OpticsMinute15fecTimeLineInstances::OpticsMinute15fecTimeLineInstance::PreFecBer>();
        }
        return pre_fec_ber;
    }

    if(child_yang_name == "post-fec-ber")
    {
        if(post_fec_ber == nullptr)
        {
            post_fec_ber = std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15fecHistories::OpticsMinute15fecHistory::OpticsMinute15fecTimeLineInstances::OpticsMinute15fecTimeLineInstance::PostFecBer>();
        }
        return post_fec_ber;
    }

    if(child_yang_name == "q")
    {
        if(q == nullptr)
        {
            q = std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15fecHistories::OpticsMinute15fecHistory::OpticsMinute15fecTimeLineInstances::OpticsMinute15fecTimeLineInstance::Q>();
        }
        return q;
    }

    if(child_yang_name == "qmargin")
    {
        if(qmargin == nullptr)
        {
            qmargin = std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15fecHistories::OpticsMinute15fecHistory::OpticsMinute15fecTimeLineInstances::OpticsMinute15fecTimeLineInstance::Qmargin>();
        }
        return qmargin;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15fecHistories::OpticsMinute15fecHistory::OpticsMinute15fecTimeLineInstances::OpticsMinute15fecTimeLineInstance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ec_bits != nullptr)
    {
        children["ec-bits"] = ec_bits;
    }

    if(uc_words != nullptr)
    {
        children["uc-words"] = uc_words;
    }

    if(pre_fec_ber != nullptr)
    {
        children["pre-fec-ber"] = pre_fec_ber;
    }

    if(post_fec_ber != nullptr)
    {
        children["post-fec-ber"] = post_fec_ber;
    }

    if(q != nullptr)
    {
        children["q"] = q;
    }

    if(qmargin != nullptr)
    {
        children["qmargin"] = qmargin;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15fecHistories::OpticsMinute15fecHistory::OpticsMinute15fecTimeLineInstances::OpticsMinute15fecTimeLineInstance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timestamp")
    {
        timestamp = value;
        timestamp.value_namespace = name_space;
        timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-clear-time")
    {
        last_clear_time = value;
        last_clear_time.value_namespace = name_space;
        last_clear_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-clear15-min-time")
    {
        last_clear15_min_time = value;
        last_clear15_min_time.value_namespace = name_space;
        last_clear15_min_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-clear30-sec-time")
    {
        last_clear30_sec_time = value;
        last_clear30_sec_time.value_namespace = name_space;
        last_clear30_sec_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-clear24-hr-time")
    {
        last_clear24_hr_time = value;
        last_clear24_hr_time.value_namespace = name_space;
        last_clear24_hr_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sec30-support")
    {
        sec30_support = value;
        sec30_support.value_namespace = name_space;
        sec30_support.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15fecHistories::OpticsMinute15fecHistory::OpticsMinute15fecTimeLineInstances::OpticsMinute15fecTimeLineInstance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
    if(value_path == "timestamp")
    {
        timestamp.yfilter = yfilter;
    }
    if(value_path == "last-clear-time")
    {
        last_clear_time.yfilter = yfilter;
    }
    if(value_path == "last-clear15-min-time")
    {
        last_clear15_min_time.yfilter = yfilter;
    }
    if(value_path == "last-clear30-sec-time")
    {
        last_clear30_sec_time.yfilter = yfilter;
    }
    if(value_path == "last-clear24-hr-time")
    {
        last_clear24_hr_time.yfilter = yfilter;
    }
    if(value_path == "sec30-support")
    {
        sec30_support.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15fecHistories::OpticsMinute15fecHistory::OpticsMinute15fecTimeLineInstances::OpticsMinute15fecTimeLineInstance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ec-bits" || name == "uc-words" || name == "pre-fec-ber" || name == "post-fec-ber" || name == "q" || name == "qmargin" || name == "number" || name == "index" || name == "valid" || name == "timestamp" || name == "last-clear-time" || name == "last-clear15-min-time" || name == "last-clear30-sec-time" || name == "last-clear24-hr-time" || name == "sec30-support")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15fecHistories::OpticsMinute15fecHistory::OpticsMinute15fecTimeLineInstances::OpticsMinute15fecTimeLineInstance::EcBits::EcBits()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "ec-bits"; yang_parent_name = "optics-minute15fec-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15fecHistories::OpticsMinute15fecHistory::OpticsMinute15fecTimeLineInstances::OpticsMinute15fecTimeLineInstance::EcBits::~EcBits()
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15fecHistories::OpticsMinute15fecHistory::OpticsMinute15fecTimeLineInstances::OpticsMinute15fecTimeLineInstance::EcBits::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15fecHistories::OpticsMinute15fecHistory::OpticsMinute15fecTimeLineInstances::OpticsMinute15fecTimeLineInstance::EcBits::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15fecHistories::OpticsMinute15fecHistory::OpticsMinute15fecTimeLineInstances::OpticsMinute15fecTimeLineInstance::EcBits::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ec-bits";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15fecHistories::OpticsMinute15fecHistory::OpticsMinute15fecTimeLineInstances::OpticsMinute15fecTimeLineInstance::EcBits::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15fecHistories::OpticsMinute15fecHistory::OpticsMinute15fecTimeLineInstances::OpticsMinute15fecTimeLineInstance::EcBits::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15fecHistories::OpticsMinute15fecHistory::OpticsMinute15fecTimeLineInstances::OpticsMinute15fecTimeLineInstance::EcBits::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15fecHistories::OpticsMinute15fecHistory::OpticsMinute15fecTimeLineInstances::OpticsMinute15fecTimeLineInstance::EcBits::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15fecHistories::OpticsMinute15fecHistory::OpticsMinute15fecTimeLineInstances::OpticsMinute15fecTimeLineInstance::EcBits::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15fecHistories::OpticsMinute15fecHistory::OpticsMinute15fecTimeLineInstances::OpticsMinute15fecTimeLineInstance::EcBits::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15fecHistories::OpticsMinute15fecHistory::OpticsMinute15fecTimeLineInstances::OpticsMinute15fecTimeLineInstance::UcWords::UcWords()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "uc-words"; yang_parent_name = "optics-minute15fec-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15fecHistories::OpticsMinute15fecHistory::OpticsMinute15fecTimeLineInstances::OpticsMinute15fecTimeLineInstance::UcWords::~UcWords()
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15fecHistories::OpticsMinute15fecHistory::OpticsMinute15fecTimeLineInstances::OpticsMinute15fecTimeLineInstance::UcWords::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15fecHistories::OpticsMinute15fecHistory::OpticsMinute15fecTimeLineInstances::OpticsMinute15fecTimeLineInstance::UcWords::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15fecHistories::OpticsMinute15fecHistory::OpticsMinute15fecTimeLineInstances::OpticsMinute15fecTimeLineInstance::UcWords::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uc-words";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15fecHistories::OpticsMinute15fecHistory::OpticsMinute15fecTimeLineInstances::OpticsMinute15fecTimeLineInstance::UcWords::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15fecHistories::OpticsMinute15fecHistory::OpticsMinute15fecTimeLineInstances::OpticsMinute15fecTimeLineInstance::UcWords::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15fecHistories::OpticsMinute15fecHistory::OpticsMinute15fecTimeLineInstances::OpticsMinute15fecTimeLineInstance::UcWords::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15fecHistories::OpticsMinute15fecHistory::OpticsMinute15fecTimeLineInstances::OpticsMinute15fecTimeLineInstance::UcWords::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15fecHistories::OpticsMinute15fecHistory::OpticsMinute15fecTimeLineInstances::OpticsMinute15fecTimeLineInstance::UcWords::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15fecHistories::OpticsMinute15fecHistory::OpticsMinute15fecTimeLineInstances::OpticsMinute15fecTimeLineInstance::UcWords::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15fecHistories::OpticsMinute15fecHistory::OpticsMinute15fecTimeLineInstances::OpticsMinute15fecTimeLineInstance::PreFecBer::PreFecBer()
    :
    minimum{YType::str, "minimum"},
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    minimum_threshold{YType::str, "minimum-threshold"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "pre-fec-ber"; yang_parent_name = "optics-minute15fec-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15fecHistories::OpticsMinute15fecHistory::OpticsMinute15fecTimeLineInstances::OpticsMinute15fecTimeLineInstance::PreFecBer::~PreFecBer()
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15fecHistories::OpticsMinute15fecHistory::OpticsMinute15fecTimeLineInstances::OpticsMinute15fecTimeLineInstance::PreFecBer::has_data() const
{
    if (is_presence_container) return true;
    return minimum.is_set
	|| average.is_set
	|| maximum.is_set
	|| minimum_threshold.is_set
	|| minimum_tca_report.is_set
	|| maximum_threshold.is_set
	|| maximum_tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15fecHistories::OpticsMinute15fecHistory::OpticsMinute15fecTimeLineInstances::OpticsMinute15fecTimeLineInstance::PreFecBer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(minimum_threshold.yfilter)
	|| ydk::is_set(minimum_tca_report.yfilter)
	|| ydk::is_set(maximum_threshold.yfilter)
	|| ydk::is_set(maximum_tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15fecHistories::OpticsMinute15fecHistory::OpticsMinute15fecTimeLineInstances::OpticsMinute15fecTimeLineInstance::PreFecBer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pre-fec-ber";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15fecHistories::OpticsMinute15fecHistory::OpticsMinute15fecTimeLineInstances::OpticsMinute15fecTimeLineInstance::PreFecBer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.yfilter)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.yfilter)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.yfilter)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.yfilter)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15fecHistories::OpticsMinute15fecHistory::OpticsMinute15fecTimeLineInstances::OpticsMinute15fecTimeLineInstance::PreFecBer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15fecHistories::OpticsMinute15fecHistory::OpticsMinute15fecTimeLineInstances::OpticsMinute15fecTimeLineInstance::PreFecBer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15fecHistories::OpticsMinute15fecHistory::OpticsMinute15fecTimeLineInstances::OpticsMinute15fecTimeLineInstance::PreFecBer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "average")
    {
        average = value;
        average.value_namespace = name_space;
        average.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
        minimum_threshold.value_namespace = name_space;
        minimum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
        minimum_tca_report.value_namespace = name_space;
        minimum_tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
        maximum_threshold.value_namespace = name_space;
        maximum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
        maximum_tca_report.value_namespace = name_space;
        maximum_tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15fecHistories::OpticsMinute15fecHistory::OpticsMinute15fecTimeLineInstances::OpticsMinute15fecTimeLineInstance::PreFecBer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
    if(value_path == "average")
    {
        average.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold.yfilter = yfilter;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report.yfilter = yfilter;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold.yfilter = yfilter;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15fecHistories::OpticsMinute15fecHistory::OpticsMinute15fecTimeLineInstances::OpticsMinute15fecTimeLineInstance::PreFecBer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minimum" || name == "average" || name == "maximum" || name == "minimum-threshold" || name == "minimum-tca-report" || name == "maximum-threshold" || name == "maximum-tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15fecHistories::OpticsMinute15fecHistory::OpticsMinute15fecTimeLineInstances::OpticsMinute15fecTimeLineInstance::PostFecBer::PostFecBer()
    :
    minimum{YType::str, "minimum"},
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    minimum_threshold{YType::str, "minimum-threshold"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "post-fec-ber"; yang_parent_name = "optics-minute15fec-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15fecHistories::OpticsMinute15fecHistory::OpticsMinute15fecTimeLineInstances::OpticsMinute15fecTimeLineInstance::PostFecBer::~PostFecBer()
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15fecHistories::OpticsMinute15fecHistory::OpticsMinute15fecTimeLineInstances::OpticsMinute15fecTimeLineInstance::PostFecBer::has_data() const
{
    if (is_presence_container) return true;
    return minimum.is_set
	|| average.is_set
	|| maximum.is_set
	|| minimum_threshold.is_set
	|| minimum_tca_report.is_set
	|| maximum_threshold.is_set
	|| maximum_tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15fecHistories::OpticsMinute15fecHistory::OpticsMinute15fecTimeLineInstances::OpticsMinute15fecTimeLineInstance::PostFecBer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(minimum_threshold.yfilter)
	|| ydk::is_set(minimum_tca_report.yfilter)
	|| ydk::is_set(maximum_threshold.yfilter)
	|| ydk::is_set(maximum_tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15fecHistories::OpticsMinute15fecHistory::OpticsMinute15fecTimeLineInstances::OpticsMinute15fecTimeLineInstance::PostFecBer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "post-fec-ber";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15fecHistories::OpticsMinute15fecHistory::OpticsMinute15fecTimeLineInstances::OpticsMinute15fecTimeLineInstance::PostFecBer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.yfilter)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.yfilter)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.yfilter)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.yfilter)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15fecHistories::OpticsMinute15fecHistory::OpticsMinute15fecTimeLineInstances::OpticsMinute15fecTimeLineInstance::PostFecBer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15fecHistories::OpticsMinute15fecHistory::OpticsMinute15fecTimeLineInstances::OpticsMinute15fecTimeLineInstance::PostFecBer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15fecHistories::OpticsMinute15fecHistory::OpticsMinute15fecTimeLineInstances::OpticsMinute15fecTimeLineInstance::PostFecBer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "average")
    {
        average = value;
        average.value_namespace = name_space;
        average.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
        minimum_threshold.value_namespace = name_space;
        minimum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
        minimum_tca_report.value_namespace = name_space;
        minimum_tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
        maximum_threshold.value_namespace = name_space;
        maximum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
        maximum_tca_report.value_namespace = name_space;
        maximum_tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15fecHistories::OpticsMinute15fecHistory::OpticsMinute15fecTimeLineInstances::OpticsMinute15fecTimeLineInstance::PostFecBer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
    if(value_path == "average")
    {
        average.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold.yfilter = yfilter;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report.yfilter = yfilter;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold.yfilter = yfilter;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15fecHistories::OpticsMinute15fecHistory::OpticsMinute15fecTimeLineInstances::OpticsMinute15fecTimeLineInstance::PostFecBer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minimum" || name == "average" || name == "maximum" || name == "minimum-threshold" || name == "minimum-tca-report" || name == "maximum-threshold" || name == "maximum-tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15fecHistories::OpticsMinute15fecHistory::OpticsMinute15fecTimeLineInstances::OpticsMinute15fecTimeLineInstance::Q::Q()
    :
    minimum{YType::str, "minimum"},
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    minimum_threshold{YType::str, "minimum-threshold"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "q"; yang_parent_name = "optics-minute15fec-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15fecHistories::OpticsMinute15fecHistory::OpticsMinute15fecTimeLineInstances::OpticsMinute15fecTimeLineInstance::Q::~Q()
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15fecHistories::OpticsMinute15fecHistory::OpticsMinute15fecTimeLineInstances::OpticsMinute15fecTimeLineInstance::Q::has_data() const
{
    if (is_presence_container) return true;
    return minimum.is_set
	|| average.is_set
	|| maximum.is_set
	|| minimum_threshold.is_set
	|| minimum_tca_report.is_set
	|| maximum_threshold.is_set
	|| maximum_tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15fecHistories::OpticsMinute15fecHistory::OpticsMinute15fecTimeLineInstances::OpticsMinute15fecTimeLineInstance::Q::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(minimum_threshold.yfilter)
	|| ydk::is_set(minimum_tca_report.yfilter)
	|| ydk::is_set(maximum_threshold.yfilter)
	|| ydk::is_set(maximum_tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15fecHistories::OpticsMinute15fecHistory::OpticsMinute15fecTimeLineInstances::OpticsMinute15fecTimeLineInstance::Q::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "q";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15fecHistories::OpticsMinute15fecHistory::OpticsMinute15fecTimeLineInstances::OpticsMinute15fecTimeLineInstance::Q::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.yfilter)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.yfilter)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.yfilter)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.yfilter)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15fecHistories::OpticsMinute15fecHistory::OpticsMinute15fecTimeLineInstances::OpticsMinute15fecTimeLineInstance::Q::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15fecHistories::OpticsMinute15fecHistory::OpticsMinute15fecTimeLineInstances::OpticsMinute15fecTimeLineInstance::Q::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15fecHistories::OpticsMinute15fecHistory::OpticsMinute15fecTimeLineInstances::OpticsMinute15fecTimeLineInstance::Q::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "average")
    {
        average = value;
        average.value_namespace = name_space;
        average.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
        minimum_threshold.value_namespace = name_space;
        minimum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
        minimum_tca_report.value_namespace = name_space;
        minimum_tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
        maximum_threshold.value_namespace = name_space;
        maximum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
        maximum_tca_report.value_namespace = name_space;
        maximum_tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15fecHistories::OpticsMinute15fecHistory::OpticsMinute15fecTimeLineInstances::OpticsMinute15fecTimeLineInstance::Q::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
    if(value_path == "average")
    {
        average.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold.yfilter = yfilter;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report.yfilter = yfilter;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold.yfilter = yfilter;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15fecHistories::OpticsMinute15fecHistory::OpticsMinute15fecTimeLineInstances::OpticsMinute15fecTimeLineInstance::Q::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minimum" || name == "average" || name == "maximum" || name == "minimum-threshold" || name == "minimum-tca-report" || name == "maximum-threshold" || name == "maximum-tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15fecHistories::OpticsMinute15fecHistory::OpticsMinute15fecTimeLineInstances::OpticsMinute15fecTimeLineInstance::Qmargin::Qmargin()
    :
    minimum{YType::str, "minimum"},
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    minimum_threshold{YType::str, "minimum-threshold"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "qmargin"; yang_parent_name = "optics-minute15fec-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15fecHistories::OpticsMinute15fecHistory::OpticsMinute15fecTimeLineInstances::OpticsMinute15fecTimeLineInstance::Qmargin::~Qmargin()
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15fecHistories::OpticsMinute15fecHistory::OpticsMinute15fecTimeLineInstances::OpticsMinute15fecTimeLineInstance::Qmargin::has_data() const
{
    if (is_presence_container) return true;
    return minimum.is_set
	|| average.is_set
	|| maximum.is_set
	|| minimum_threshold.is_set
	|| minimum_tca_report.is_set
	|| maximum_threshold.is_set
	|| maximum_tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15fecHistories::OpticsMinute15fecHistory::OpticsMinute15fecTimeLineInstances::OpticsMinute15fecTimeLineInstance::Qmargin::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(minimum_threshold.yfilter)
	|| ydk::is_set(minimum_tca_report.yfilter)
	|| ydk::is_set(maximum_threshold.yfilter)
	|| ydk::is_set(maximum_tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15fecHistories::OpticsMinute15fecHistory::OpticsMinute15fecTimeLineInstances::OpticsMinute15fecTimeLineInstance::Qmargin::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qmargin";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15fecHistories::OpticsMinute15fecHistory::OpticsMinute15fecTimeLineInstances::OpticsMinute15fecTimeLineInstance::Qmargin::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.yfilter)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.yfilter)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.yfilter)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.yfilter)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15fecHistories::OpticsMinute15fecHistory::OpticsMinute15fecTimeLineInstances::OpticsMinute15fecTimeLineInstance::Qmargin::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15fecHistories::OpticsMinute15fecHistory::OpticsMinute15fecTimeLineInstances::OpticsMinute15fecTimeLineInstance::Qmargin::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15fecHistories::OpticsMinute15fecHistory::OpticsMinute15fecTimeLineInstances::OpticsMinute15fecTimeLineInstance::Qmargin::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "average")
    {
        average = value;
        average.value_namespace = name_space;
        average.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
        minimum_threshold.value_namespace = name_space;
        minimum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
        minimum_tca_report.value_namespace = name_space;
        minimum_tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
        maximum_threshold.value_namespace = name_space;
        maximum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
        maximum_tca_report.value_namespace = name_space;
        maximum_tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15fecHistories::OpticsMinute15fecHistory::OpticsMinute15fecTimeLineInstances::OpticsMinute15fecTimeLineInstance::Qmargin::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
    if(value_path == "average")
    {
        average.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold.yfilter = yfilter;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report.yfilter = yfilter;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold.yfilter = yfilter;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15fecHistories::OpticsMinute15fecHistory::OpticsMinute15fecTimeLineInstances::OpticsMinute15fecTimeLineInstance::Qmargin::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minimum" || name == "average" || name == "maximum" || name == "minimum-threshold" || name == "minimum-tca-report" || name == "maximum-threshold" || name == "maximum-tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcHistory()
    :
    oc_port_histories(std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories>())
{
    oc_port_histories->parent = this;

    yang_name = "oc-history"; yang_parent_name = "periodic"; is_top_level_class = false; has_list_ancestor = false; 
}

PerformanceManagementHistory::Global::Periodic::OcHistory::~OcHistory()
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::has_data() const
{
    if (is_presence_container) return true;
    return (oc_port_histories !=  nullptr && oc_port_histories->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::has_operation() const
{
    return is_set(yfilter)
	|| (oc_port_histories !=  nullptr && oc_port_histories->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::OcHistory::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-pmengine-oper:performance-management-history/global/periodic/" << get_segment_path();
    return path_buffer.str();
}

std::string PerformanceManagementHistory::Global::Periodic::OcHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oc-history";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OcHistory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OcHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "oc-port-histories")
    {
        if(oc_port_histories == nullptr)
        {
            oc_port_histories = std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories>();
        }
        return oc_port_histories;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OcHistory::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(oc_port_histories != nullptr)
    {
        children["oc-port-histories"] = oc_port_histories;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "oc-port-histories")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistories()
    :
    oc_port_history(this, {"name"})
{

    yang_name = "oc-port-histories"; yang_parent_name = "oc-history"; is_top_level_class = false; has_list_ancestor = false; 
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::~OcPortHistories()
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<oc_port_history.len(); index++)
    {
        if(oc_port_history[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::has_operation() const
{
    for (std::size_t index=0; index<oc_port_history.len(); index++)
    {
        if(oc_port_history[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-pmengine-oper:performance-management-history/global/periodic/oc-history/" << get_segment_path();
    return path_buffer.str();
}

std::string PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oc-port-histories";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "oc-port-history")
    {
        auto c = std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory>();
        c->parent = this;
        oc_port_history.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : oc_port_history.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "oc-port-history")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcPortHistory()
    :
    name{YType::str, "name"}
        ,
    oc_hour24_history(std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History>())
    , oc_minute15_history(std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History>())
{
    oc_hour24_history->parent = this;
    oc_minute15_history->parent = this;

    yang_name = "oc-port-history"; yang_parent_name = "oc-port-histories"; is_top_level_class = false; has_list_ancestor = false; 
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::~OcPortHistory()
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| (oc_hour24_history !=  nullptr && oc_hour24_history->has_data())
	|| (oc_minute15_history !=  nullptr && oc_minute15_history->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (oc_hour24_history !=  nullptr && oc_hour24_history->has_operation())
	|| (oc_minute15_history !=  nullptr && oc_minute15_history->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-pmengine-oper:performance-management-history/global/periodic/oc-history/oc-port-histories/" << get_segment_path();
    return path_buffer.str();
}

std::string PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oc-port-history";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "oc-hour24-history")
    {
        if(oc_hour24_history == nullptr)
        {
            oc_hour24_history = std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History>();
        }
        return oc_hour24_history;
    }

    if(child_yang_name == "oc-minute15-history")
    {
        if(oc_minute15_history == nullptr)
        {
            oc_minute15_history = std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History>();
        }
        return oc_minute15_history;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(oc_hour24_history != nullptr)
    {
        children["oc-hour24-history"] = oc_hour24_history;
    }

    if(oc_minute15_history != nullptr)
    {
        children["oc-minute15-history"] = oc_minute15_history;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "oc-hour24-history" || name == "oc-minute15-history" || name == "name")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24History()
    :
    oc_hour24ocn_histories(std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories>())
{
    oc_hour24ocn_histories->parent = this;

    yang_name = "oc-hour24-history"; yang_parent_name = "oc-port-history"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::~OcHour24History()
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::has_data() const
{
    if (is_presence_container) return true;
    return (oc_hour24ocn_histories !=  nullptr && oc_hour24ocn_histories->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::has_operation() const
{
    return is_set(yfilter)
	|| (oc_hour24ocn_histories !=  nullptr && oc_hour24ocn_histories->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oc-hour24-history";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "oc-hour24ocn-histories")
    {
        if(oc_hour24ocn_histories == nullptr)
        {
            oc_hour24ocn_histories = std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories>();
        }
        return oc_hour24ocn_histories;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(oc_hour24ocn_histories != nullptr)
    {
        children["oc-hour24ocn-histories"] = oc_hour24ocn_histories;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "oc-hour24ocn-histories")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistories()
    :
    oc_hour24ocn_history(this, {"number"})
{

    yang_name = "oc-hour24ocn-histories"; yang_parent_name = "oc-hour24-history"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::~OcHour24ocnHistories()
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<oc_hour24ocn_history.len(); index++)
    {
        if(oc_hour24ocn_history[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::has_operation() const
{
    for (std::size_t index=0; index<oc_hour24ocn_history.len(); index++)
    {
        if(oc_hour24ocn_history[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oc-hour24ocn-histories";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "oc-hour24ocn-history")
    {
        auto c = std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory>();
        c->parent = this;
        oc_hour24ocn_history.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : oc_hour24ocn_history.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "oc-hour24ocn-history")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnHistory()
    :
    number{YType::uint32, "number"}
        ,
    oc_hour24ocn_time_line_instances(std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances>())
{
    oc_hour24ocn_time_line_instances->parent = this;

    yang_name = "oc-hour24ocn-history"; yang_parent_name = "oc-hour24ocn-histories"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::~OcHour24ocnHistory()
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::has_data() const
{
    if (is_presence_container) return true;
    return number.is_set
	|| (oc_hour24ocn_time_line_instances !=  nullptr && oc_hour24ocn_time_line_instances->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| (oc_hour24ocn_time_line_instances !=  nullptr && oc_hour24ocn_time_line_instances->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oc-hour24ocn-history";
    ADD_KEY_TOKEN(number, "number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "oc-hour24ocn-time-line-instances")
    {
        if(oc_hour24ocn_time_line_instances == nullptr)
        {
            oc_hour24ocn_time_line_instances = std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances>();
        }
        return oc_hour24ocn_time_line_instances;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(oc_hour24ocn_time_line_instances != nullptr)
    {
        children["oc-hour24ocn-time-line-instances"] = oc_hour24ocn_time_line_instances;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "oc-hour24ocn-time-line-instances" || name == "number")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstances()
    :
    oc_hour24ocn_time_line_instance(this, {"number"})
{

    yang_name = "oc-hour24ocn-time-line-instances"; yang_parent_name = "oc-hour24ocn-history"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::~OcHour24ocnTimeLineInstances()
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<oc_hour24ocn_time_line_instance.len(); index++)
    {
        if(oc_hour24ocn_time_line_instance[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::has_operation() const
{
    for (std::size_t index=0; index<oc_hour24ocn_time_line_instance.len(); index++)
    {
        if(oc_hour24ocn_time_line_instance[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oc-hour24ocn-time-line-instances";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "oc-hour24ocn-time-line-instance")
    {
        auto c = std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance>();
        c->parent = this;
        oc_hour24ocn_time_line_instance.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : oc_hour24ocn_time_line_instance.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "oc-hour24ocn-time-line-instance")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::OcHour24ocnTimeLineInstance()
    :
    number{YType::uint32, "number"},
    index_{YType::uint32, "index"},
    valid{YType::boolean, "valid"},
    timestamp{YType::str, "timestamp"},
    last_clear_time{YType::str, "last-clear-time"},
    last_clear15_min_time{YType::str, "last-clear15-min-time"},
    last_clear24_hr_time{YType::str, "last-clear24-hr-time"}
        ,
    section(std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::Section>())
    , line(std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::Line>())
    , fe_line(std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::FeLine>())
{
    section->parent = this;
    line->parent = this;
    fe_line->parent = this;

    yang_name = "oc-hour24ocn-time-line-instance"; yang_parent_name = "oc-hour24ocn-time-line-instances"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::~OcHour24ocnTimeLineInstance()
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::has_data() const
{
    if (is_presence_container) return true;
    return number.is_set
	|| index_.is_set
	|| valid.is_set
	|| timestamp.is_set
	|| last_clear_time.is_set
	|| last_clear15_min_time.is_set
	|| last_clear24_hr_time.is_set
	|| (section !=  nullptr && section->has_data())
	|| (line !=  nullptr && line->has_data())
	|| (fe_line !=  nullptr && fe_line->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(valid.yfilter)
	|| ydk::is_set(timestamp.yfilter)
	|| ydk::is_set(last_clear_time.yfilter)
	|| ydk::is_set(last_clear15_min_time.yfilter)
	|| ydk::is_set(last_clear24_hr_time.yfilter)
	|| (section !=  nullptr && section->has_operation())
	|| (line !=  nullptr && line->has_operation())
	|| (fe_line !=  nullptr && fe_line->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oc-hour24ocn-time-line-instance";
    ADD_KEY_TOKEN(number, "number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());
    if (timestamp.is_set || is_set(timestamp.yfilter)) leaf_name_data.push_back(timestamp.get_name_leafdata());
    if (last_clear_time.is_set || is_set(last_clear_time.yfilter)) leaf_name_data.push_back(last_clear_time.get_name_leafdata());
    if (last_clear15_min_time.is_set || is_set(last_clear15_min_time.yfilter)) leaf_name_data.push_back(last_clear15_min_time.get_name_leafdata());
    if (last_clear24_hr_time.is_set || is_set(last_clear24_hr_time.yfilter)) leaf_name_data.push_back(last_clear24_hr_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "section")
    {
        if(section == nullptr)
        {
            section = std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::Section>();
        }
        return section;
    }

    if(child_yang_name == "line")
    {
        if(line == nullptr)
        {
            line = std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::Line>();
        }
        return line;
    }

    if(child_yang_name == "fe-line")
    {
        if(fe_line == nullptr)
        {
            fe_line = std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::FeLine>();
        }
        return fe_line;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(section != nullptr)
    {
        children["section"] = section;
    }

    if(line != nullptr)
    {
        children["line"] = line;
    }

    if(fe_line != nullptr)
    {
        children["fe-line"] = fe_line;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timestamp")
    {
        timestamp = value;
        timestamp.value_namespace = name_space;
        timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-clear-time")
    {
        last_clear_time = value;
        last_clear_time.value_namespace = name_space;
        last_clear_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-clear15-min-time")
    {
        last_clear15_min_time = value;
        last_clear15_min_time.value_namespace = name_space;
        last_clear15_min_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-clear24-hr-time")
    {
        last_clear24_hr_time = value;
        last_clear24_hr_time.value_namespace = name_space;
        last_clear24_hr_time.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
    if(value_path == "timestamp")
    {
        timestamp.yfilter = yfilter;
    }
    if(value_path == "last-clear-time")
    {
        last_clear_time.yfilter = yfilter;
    }
    if(value_path == "last-clear15-min-time")
    {
        last_clear15_min_time.yfilter = yfilter;
    }
    if(value_path == "last-clear24-hr-time")
    {
        last_clear24_hr_time.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "section" || name == "line" || name == "fe-line" || name == "number" || name == "index" || name == "valid" || name == "timestamp" || name == "last-clear-time" || name == "last-clear15-min-time" || name == "last-clear24-hr-time")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::Section::Section()
    :
    section_status{YType::int32, "section-status"}
        ,
    section_e_ss(std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::Section::SectionESs>())
    , section_se_ss(std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::Section::SectionSeSs>())
    , section_sef_ss(std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::Section::SectionSefSs>())
    , section_c_vs(std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::Section::SectionCVs>())
{
    section_e_ss->parent = this;
    section_se_ss->parent = this;
    section_sef_ss->parent = this;
    section_c_vs->parent = this;

    yang_name = "section"; yang_parent_name = "oc-hour24ocn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::Section::~Section()
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::Section::has_data() const
{
    if (is_presence_container) return true;
    return section_status.is_set
	|| (section_e_ss !=  nullptr && section_e_ss->has_data())
	|| (section_se_ss !=  nullptr && section_se_ss->has_data())
	|| (section_sef_ss !=  nullptr && section_sef_ss->has_data())
	|| (section_c_vs !=  nullptr && section_c_vs->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::Section::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(section_status.yfilter)
	|| (section_e_ss !=  nullptr && section_e_ss->has_operation())
	|| (section_se_ss !=  nullptr && section_se_ss->has_operation())
	|| (section_sef_ss !=  nullptr && section_sef_ss->has_operation())
	|| (section_c_vs !=  nullptr && section_c_vs->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::Section::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "section";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::Section::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (section_status.is_set || is_set(section_status.yfilter)) leaf_name_data.push_back(section_status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::Section::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "section-e-ss")
    {
        if(section_e_ss == nullptr)
        {
            section_e_ss = std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::Section::SectionESs>();
        }
        return section_e_ss;
    }

    if(child_yang_name == "section-se-ss")
    {
        if(section_se_ss == nullptr)
        {
            section_se_ss = std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::Section::SectionSeSs>();
        }
        return section_se_ss;
    }

    if(child_yang_name == "section-sef-ss")
    {
        if(section_sef_ss == nullptr)
        {
            section_sef_ss = std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::Section::SectionSefSs>();
        }
        return section_sef_ss;
    }

    if(child_yang_name == "section-c-vs")
    {
        if(section_c_vs == nullptr)
        {
            section_c_vs = std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::Section::SectionCVs>();
        }
        return section_c_vs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::Section::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(section_e_ss != nullptr)
    {
        children["section-e-ss"] = section_e_ss;
    }

    if(section_se_ss != nullptr)
    {
        children["section-se-ss"] = section_se_ss;
    }

    if(section_sef_ss != nullptr)
    {
        children["section-sef-ss"] = section_sef_ss;
    }

    if(section_c_vs != nullptr)
    {
        children["section-c-vs"] = section_c_vs;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::Section::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "section-status")
    {
        section_status = value;
        section_status.value_namespace = name_space;
        section_status.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::Section::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "section-status")
    {
        section_status.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::Section::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "section-e-ss" || name == "section-se-ss" || name == "section-sef-ss" || name == "section-c-vs" || name == "section-status")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::Section::SectionESs::SectionESs()
    :
    data{YType::uint32, "data"},
    threshold{YType::uint32, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "section-e-ss"; yang_parent_name = "section"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::Section::SectionESs::~SectionESs()
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::Section::SectionESs::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::Section::SectionESs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::Section::SectionESs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "section-e-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::Section::SectionESs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::Section::SectionESs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::Section::SectionESs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::Section::SectionESs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::Section::SectionESs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::Section::SectionESs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::Section::SectionSeSs::SectionSeSs()
    :
    data{YType::uint32, "data"},
    threshold{YType::uint32, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "section-se-ss"; yang_parent_name = "section"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::Section::SectionSeSs::~SectionSeSs()
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::Section::SectionSeSs::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::Section::SectionSeSs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::Section::SectionSeSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "section-se-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::Section::SectionSeSs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::Section::SectionSeSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::Section::SectionSeSs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::Section::SectionSeSs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::Section::SectionSeSs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::Section::SectionSeSs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::Section::SectionSefSs::SectionSefSs()
    :
    data{YType::uint32, "data"},
    threshold{YType::uint32, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "section-sef-ss"; yang_parent_name = "section"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::Section::SectionSefSs::~SectionSefSs()
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::Section::SectionSefSs::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::Section::SectionSefSs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::Section::SectionSefSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "section-sef-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::Section::SectionSefSs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::Section::SectionSefSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::Section::SectionSefSs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::Section::SectionSefSs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::Section::SectionSefSs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::Section::SectionSefSs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::Section::SectionCVs::SectionCVs()
    :
    data{YType::uint32, "data"},
    threshold{YType::uint32, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "section-c-vs"; yang_parent_name = "section"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::Section::SectionCVs::~SectionCVs()
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::Section::SectionCVs::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::Section::SectionCVs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::Section::SectionCVs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "section-c-vs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::Section::SectionCVs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::Section::SectionCVs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::Section::SectionCVs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::Section::SectionCVs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::Section::SectionCVs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::Section::SectionCVs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::Line::Line()
    :
    line_status{YType::int32, "line-status"}
        ,
    line_e_ss(std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::Line::LineESs>())
    , line_se_ss(std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::Line::LineSeSs>())
    , line_c_vs(std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::Line::LineCVs>())
    , line_ua_ss(std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::Line::LineUaSs>())
    , line_fc_ls(std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::Line::LineFcLs>())
{
    line_e_ss->parent = this;
    line_se_ss->parent = this;
    line_c_vs->parent = this;
    line_ua_ss->parent = this;
    line_fc_ls->parent = this;

    yang_name = "line"; yang_parent_name = "oc-hour24ocn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::Line::~Line()
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::Line::has_data() const
{
    if (is_presence_container) return true;
    return line_status.is_set
	|| (line_e_ss !=  nullptr && line_e_ss->has_data())
	|| (line_se_ss !=  nullptr && line_se_ss->has_data())
	|| (line_c_vs !=  nullptr && line_c_vs->has_data())
	|| (line_ua_ss !=  nullptr && line_ua_ss->has_data())
	|| (line_fc_ls !=  nullptr && line_fc_ls->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::Line::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(line_status.yfilter)
	|| (line_e_ss !=  nullptr && line_e_ss->has_operation())
	|| (line_se_ss !=  nullptr && line_se_ss->has_operation())
	|| (line_c_vs !=  nullptr && line_c_vs->has_operation())
	|| (line_ua_ss !=  nullptr && line_ua_ss->has_operation())
	|| (line_fc_ls !=  nullptr && line_fc_ls->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::Line::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::Line::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (line_status.is_set || is_set(line_status.yfilter)) leaf_name_data.push_back(line_status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::Line::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "line-e-ss")
    {
        if(line_e_ss == nullptr)
        {
            line_e_ss = std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::Line::LineESs>();
        }
        return line_e_ss;
    }

    if(child_yang_name == "line-se-ss")
    {
        if(line_se_ss == nullptr)
        {
            line_se_ss = std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::Line::LineSeSs>();
        }
        return line_se_ss;
    }

    if(child_yang_name == "line-c-vs")
    {
        if(line_c_vs == nullptr)
        {
            line_c_vs = std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::Line::LineCVs>();
        }
        return line_c_vs;
    }

    if(child_yang_name == "line-ua-ss")
    {
        if(line_ua_ss == nullptr)
        {
            line_ua_ss = std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::Line::LineUaSs>();
        }
        return line_ua_ss;
    }

    if(child_yang_name == "line-fc-ls")
    {
        if(line_fc_ls == nullptr)
        {
            line_fc_ls = std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::Line::LineFcLs>();
        }
        return line_fc_ls;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::Line::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(line_e_ss != nullptr)
    {
        children["line-e-ss"] = line_e_ss;
    }

    if(line_se_ss != nullptr)
    {
        children["line-se-ss"] = line_se_ss;
    }

    if(line_c_vs != nullptr)
    {
        children["line-c-vs"] = line_c_vs;
    }

    if(line_ua_ss != nullptr)
    {
        children["line-ua-ss"] = line_ua_ss;
    }

    if(line_fc_ls != nullptr)
    {
        children["line-fc-ls"] = line_fc_ls;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::Line::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "line-status")
    {
        line_status = value;
        line_status.value_namespace = name_space;
        line_status.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::Line::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "line-status")
    {
        line_status.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::Line::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "line-e-ss" || name == "line-se-ss" || name == "line-c-vs" || name == "line-ua-ss" || name == "line-fc-ls" || name == "line-status")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::Line::LineESs::LineESs()
    :
    data{YType::uint32, "data"},
    threshold{YType::uint32, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "line-e-ss"; yang_parent_name = "line"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::Line::LineESs::~LineESs()
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::Line::LineESs::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::Line::LineESs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::Line::LineESs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line-e-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::Line::LineESs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::Line::LineESs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::Line::LineESs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::Line::LineESs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::Line::LineESs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::Line::LineESs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::Line::LineSeSs::LineSeSs()
    :
    data{YType::uint32, "data"},
    threshold{YType::uint32, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "line-se-ss"; yang_parent_name = "line"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::Line::LineSeSs::~LineSeSs()
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::Line::LineSeSs::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::Line::LineSeSs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::Line::LineSeSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line-se-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::Line::LineSeSs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::Line::LineSeSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::Line::LineSeSs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::Line::LineSeSs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::Line::LineSeSs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::Line::LineSeSs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::Line::LineCVs::LineCVs()
    :
    data{YType::uint32, "data"},
    threshold{YType::uint32, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "line-c-vs"; yang_parent_name = "line"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::Line::LineCVs::~LineCVs()
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::Line::LineCVs::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::Line::LineCVs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::Line::LineCVs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line-c-vs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::Line::LineCVs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::Line::LineCVs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::Line::LineCVs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::Line::LineCVs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::Line::LineCVs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::Line::LineCVs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::Line::LineUaSs::LineUaSs()
    :
    data{YType::uint32, "data"},
    threshold{YType::uint32, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "line-ua-ss"; yang_parent_name = "line"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::Line::LineUaSs::~LineUaSs()
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::Line::LineUaSs::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::Line::LineUaSs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::Line::LineUaSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line-ua-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::Line::LineUaSs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::Line::LineUaSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::Line::LineUaSs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::Line::LineUaSs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::Line::LineUaSs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::Line::LineUaSs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::Line::LineFcLs::LineFcLs()
    :
    data{YType::uint32, "data"},
    threshold{YType::uint32, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "line-fc-ls"; yang_parent_name = "line"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::Line::LineFcLs::~LineFcLs()
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::Line::LineFcLs::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::Line::LineFcLs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::Line::LineFcLs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line-fc-ls";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::Line::LineFcLs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::Line::LineFcLs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::Line::LineFcLs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::Line::LineFcLs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::Line::LineFcLs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::Line::LineFcLs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::FeLine::FeLine()
    :
    far_end_line_e_ss(std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::FeLine::FarEndLineESs>())
    , far_end_line_se_ss(std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::FeLine::FarEndLineSeSs>())
    , far_end_line_c_vs(std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::FeLine::FarEndLineCVs>())
    , far_end_line_ua_ss(std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::FeLine::FarEndLineUaSs>())
    , far_end_line_fc_ls(std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::FeLine::FarEndLineFcLs>())
{
    far_end_line_e_ss->parent = this;
    far_end_line_se_ss->parent = this;
    far_end_line_c_vs->parent = this;
    far_end_line_ua_ss->parent = this;
    far_end_line_fc_ls->parent = this;

    yang_name = "fe-line"; yang_parent_name = "oc-hour24ocn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::FeLine::~FeLine()
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::FeLine::has_data() const
{
    if (is_presence_container) return true;
    return (far_end_line_e_ss !=  nullptr && far_end_line_e_ss->has_data())
	|| (far_end_line_se_ss !=  nullptr && far_end_line_se_ss->has_data())
	|| (far_end_line_c_vs !=  nullptr && far_end_line_c_vs->has_data())
	|| (far_end_line_ua_ss !=  nullptr && far_end_line_ua_ss->has_data())
	|| (far_end_line_fc_ls !=  nullptr && far_end_line_fc_ls->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::FeLine::has_operation() const
{
    return is_set(yfilter)
	|| (far_end_line_e_ss !=  nullptr && far_end_line_e_ss->has_operation())
	|| (far_end_line_se_ss !=  nullptr && far_end_line_se_ss->has_operation())
	|| (far_end_line_c_vs !=  nullptr && far_end_line_c_vs->has_operation())
	|| (far_end_line_ua_ss !=  nullptr && far_end_line_ua_ss->has_operation())
	|| (far_end_line_fc_ls !=  nullptr && far_end_line_fc_ls->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::FeLine::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fe-line";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::FeLine::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::FeLine::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "far-end-line-e-ss")
    {
        if(far_end_line_e_ss == nullptr)
        {
            far_end_line_e_ss = std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::FeLine::FarEndLineESs>();
        }
        return far_end_line_e_ss;
    }

    if(child_yang_name == "far-end-line-se-ss")
    {
        if(far_end_line_se_ss == nullptr)
        {
            far_end_line_se_ss = std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::FeLine::FarEndLineSeSs>();
        }
        return far_end_line_se_ss;
    }

    if(child_yang_name == "far-end-line-c-vs")
    {
        if(far_end_line_c_vs == nullptr)
        {
            far_end_line_c_vs = std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::FeLine::FarEndLineCVs>();
        }
        return far_end_line_c_vs;
    }

    if(child_yang_name == "far-end-line-ua-ss")
    {
        if(far_end_line_ua_ss == nullptr)
        {
            far_end_line_ua_ss = std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::FeLine::FarEndLineUaSs>();
        }
        return far_end_line_ua_ss;
    }

    if(child_yang_name == "far-end-line-fc-ls")
    {
        if(far_end_line_fc_ls == nullptr)
        {
            far_end_line_fc_ls = std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::FeLine::FarEndLineFcLs>();
        }
        return far_end_line_fc_ls;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::FeLine::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(far_end_line_e_ss != nullptr)
    {
        children["far-end-line-e-ss"] = far_end_line_e_ss;
    }

    if(far_end_line_se_ss != nullptr)
    {
        children["far-end-line-se-ss"] = far_end_line_se_ss;
    }

    if(far_end_line_c_vs != nullptr)
    {
        children["far-end-line-c-vs"] = far_end_line_c_vs;
    }

    if(far_end_line_ua_ss != nullptr)
    {
        children["far-end-line-ua-ss"] = far_end_line_ua_ss;
    }

    if(far_end_line_fc_ls != nullptr)
    {
        children["far-end-line-fc-ls"] = far_end_line_fc_ls;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::FeLine::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::FeLine::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::FeLine::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "far-end-line-e-ss" || name == "far-end-line-se-ss" || name == "far-end-line-c-vs" || name == "far-end-line-ua-ss" || name == "far-end-line-fc-ls")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::FeLine::FarEndLineESs::FarEndLineESs()
    :
    data{YType::uint32, "data"},
    threshold{YType::uint32, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "far-end-line-e-ss"; yang_parent_name = "fe-line"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::FeLine::FarEndLineESs::~FarEndLineESs()
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::FeLine::FarEndLineESs::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::FeLine::FarEndLineESs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::FeLine::FarEndLineESs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "far-end-line-e-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::FeLine::FarEndLineESs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::FeLine::FarEndLineESs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::FeLine::FarEndLineESs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::FeLine::FarEndLineESs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::FeLine::FarEndLineESs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::FeLine::FarEndLineESs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::FeLine::FarEndLineSeSs::FarEndLineSeSs()
    :
    data{YType::uint32, "data"},
    threshold{YType::uint32, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "far-end-line-se-ss"; yang_parent_name = "fe-line"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::FeLine::FarEndLineSeSs::~FarEndLineSeSs()
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::FeLine::FarEndLineSeSs::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::FeLine::FarEndLineSeSs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::FeLine::FarEndLineSeSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "far-end-line-se-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::FeLine::FarEndLineSeSs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::FeLine::FarEndLineSeSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::FeLine::FarEndLineSeSs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::FeLine::FarEndLineSeSs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::FeLine::FarEndLineSeSs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::FeLine::FarEndLineSeSs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::FeLine::FarEndLineCVs::FarEndLineCVs()
    :
    data{YType::uint32, "data"},
    threshold{YType::uint32, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "far-end-line-c-vs"; yang_parent_name = "fe-line"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::FeLine::FarEndLineCVs::~FarEndLineCVs()
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::FeLine::FarEndLineCVs::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::FeLine::FarEndLineCVs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::FeLine::FarEndLineCVs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "far-end-line-c-vs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::FeLine::FarEndLineCVs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::FeLine::FarEndLineCVs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::FeLine::FarEndLineCVs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::FeLine::FarEndLineCVs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::FeLine::FarEndLineCVs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::FeLine::FarEndLineCVs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::FeLine::FarEndLineUaSs::FarEndLineUaSs()
    :
    data{YType::uint32, "data"},
    threshold{YType::uint32, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "far-end-line-ua-ss"; yang_parent_name = "fe-line"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::FeLine::FarEndLineUaSs::~FarEndLineUaSs()
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::FeLine::FarEndLineUaSs::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::FeLine::FarEndLineUaSs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::FeLine::FarEndLineUaSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "far-end-line-ua-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::FeLine::FarEndLineUaSs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::FeLine::FarEndLineUaSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::FeLine::FarEndLineUaSs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::FeLine::FarEndLineUaSs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::FeLine::FarEndLineUaSs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::FeLine::FarEndLineUaSs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::FeLine::FarEndLineFcLs::FarEndLineFcLs()
    :
    data{YType::uint32, "data"},
    threshold{YType::uint32, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "far-end-line-fc-ls"; yang_parent_name = "fe-line"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::FeLine::FarEndLineFcLs::~FarEndLineFcLs()
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::FeLine::FarEndLineFcLs::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::FeLine::FarEndLineFcLs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::FeLine::FarEndLineFcLs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "far-end-line-fc-ls";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::FeLine::FarEndLineFcLs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::FeLine::FarEndLineFcLs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::FeLine::FarEndLineFcLs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::FeLine::FarEndLineFcLs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::FeLine::FarEndLineFcLs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24ocnHistories::OcHour24ocnHistory::OcHour24ocnTimeLineInstances::OcHour24ocnTimeLineInstance::FeLine::FarEndLineFcLs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15History()
    :
    oc_minute15ocn_histories(std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories>())
{
    oc_minute15ocn_histories->parent = this;

    yang_name = "oc-minute15-history"; yang_parent_name = "oc-port-history"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::~OcMinute15History()
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::has_data() const
{
    if (is_presence_container) return true;
    return (oc_minute15ocn_histories !=  nullptr && oc_minute15ocn_histories->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::has_operation() const
{
    return is_set(yfilter)
	|| (oc_minute15ocn_histories !=  nullptr && oc_minute15ocn_histories->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oc-minute15-history";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "oc-minute15ocn-histories")
    {
        if(oc_minute15ocn_histories == nullptr)
        {
            oc_minute15ocn_histories = std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories>();
        }
        return oc_minute15ocn_histories;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(oc_minute15ocn_histories != nullptr)
    {
        children["oc-minute15ocn-histories"] = oc_minute15ocn_histories;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "oc-minute15ocn-histories")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistories()
    :
    oc_minute15ocn_history(this, {"number"})
{

    yang_name = "oc-minute15ocn-histories"; yang_parent_name = "oc-minute15-history"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::~OcMinute15ocnHistories()
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<oc_minute15ocn_history.len(); index++)
    {
        if(oc_minute15ocn_history[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::has_operation() const
{
    for (std::size_t index=0; index<oc_minute15ocn_history.len(); index++)
    {
        if(oc_minute15ocn_history[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oc-minute15ocn-histories";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "oc-minute15ocn-history")
    {
        auto c = std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory>();
        c->parent = this;
        oc_minute15ocn_history.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : oc_minute15ocn_history.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "oc-minute15ocn-history")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnHistory()
    :
    number{YType::uint32, "number"}
        ,
    oc_minute15ocn_time_line_instances(std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances>())
{
    oc_minute15ocn_time_line_instances->parent = this;

    yang_name = "oc-minute15ocn-history"; yang_parent_name = "oc-minute15ocn-histories"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::~OcMinute15ocnHistory()
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::has_data() const
{
    if (is_presence_container) return true;
    return number.is_set
	|| (oc_minute15ocn_time_line_instances !=  nullptr && oc_minute15ocn_time_line_instances->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| (oc_minute15ocn_time_line_instances !=  nullptr && oc_minute15ocn_time_line_instances->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oc-minute15ocn-history";
    ADD_KEY_TOKEN(number, "number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "oc-minute15ocn-time-line-instances")
    {
        if(oc_minute15ocn_time_line_instances == nullptr)
        {
            oc_minute15ocn_time_line_instances = std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances>();
        }
        return oc_minute15ocn_time_line_instances;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(oc_minute15ocn_time_line_instances != nullptr)
    {
        children["oc-minute15ocn-time-line-instances"] = oc_minute15ocn_time_line_instances;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "oc-minute15ocn-time-line-instances" || name == "number")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstances()
    :
    oc_minute15ocn_time_line_instance(this, {"number"})
{

    yang_name = "oc-minute15ocn-time-line-instances"; yang_parent_name = "oc-minute15ocn-history"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::~OcMinute15ocnTimeLineInstances()
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<oc_minute15ocn_time_line_instance.len(); index++)
    {
        if(oc_minute15ocn_time_line_instance[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::has_operation() const
{
    for (std::size_t index=0; index<oc_minute15ocn_time_line_instance.len(); index++)
    {
        if(oc_minute15ocn_time_line_instance[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oc-minute15ocn-time-line-instances";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "oc-minute15ocn-time-line-instance")
    {
        auto c = std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance>();
        c->parent = this;
        oc_minute15ocn_time_line_instance.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : oc_minute15ocn_time_line_instance.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "oc-minute15ocn-time-line-instance")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::OcMinute15ocnTimeLineInstance()
    :
    number{YType::uint32, "number"},
    index_{YType::uint32, "index"},
    valid{YType::boolean, "valid"},
    timestamp{YType::str, "timestamp"},
    last_clear_time{YType::str, "last-clear-time"},
    last_clear15_min_time{YType::str, "last-clear15-min-time"},
    last_clear24_hr_time{YType::str, "last-clear24-hr-time"}
        ,
    section(std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::Section>())
    , line(std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::Line>())
    , fe_line(std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::FeLine>())
{
    section->parent = this;
    line->parent = this;
    fe_line->parent = this;

    yang_name = "oc-minute15ocn-time-line-instance"; yang_parent_name = "oc-minute15ocn-time-line-instances"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::~OcMinute15ocnTimeLineInstance()
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::has_data() const
{
    if (is_presence_container) return true;
    return number.is_set
	|| index_.is_set
	|| valid.is_set
	|| timestamp.is_set
	|| last_clear_time.is_set
	|| last_clear15_min_time.is_set
	|| last_clear24_hr_time.is_set
	|| (section !=  nullptr && section->has_data())
	|| (line !=  nullptr && line->has_data())
	|| (fe_line !=  nullptr && fe_line->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(valid.yfilter)
	|| ydk::is_set(timestamp.yfilter)
	|| ydk::is_set(last_clear_time.yfilter)
	|| ydk::is_set(last_clear15_min_time.yfilter)
	|| ydk::is_set(last_clear24_hr_time.yfilter)
	|| (section !=  nullptr && section->has_operation())
	|| (line !=  nullptr && line->has_operation())
	|| (fe_line !=  nullptr && fe_line->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oc-minute15ocn-time-line-instance";
    ADD_KEY_TOKEN(number, "number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());
    if (timestamp.is_set || is_set(timestamp.yfilter)) leaf_name_data.push_back(timestamp.get_name_leafdata());
    if (last_clear_time.is_set || is_set(last_clear_time.yfilter)) leaf_name_data.push_back(last_clear_time.get_name_leafdata());
    if (last_clear15_min_time.is_set || is_set(last_clear15_min_time.yfilter)) leaf_name_data.push_back(last_clear15_min_time.get_name_leafdata());
    if (last_clear24_hr_time.is_set || is_set(last_clear24_hr_time.yfilter)) leaf_name_data.push_back(last_clear24_hr_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "section")
    {
        if(section == nullptr)
        {
            section = std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::Section>();
        }
        return section;
    }

    if(child_yang_name == "line")
    {
        if(line == nullptr)
        {
            line = std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::Line>();
        }
        return line;
    }

    if(child_yang_name == "fe-line")
    {
        if(fe_line == nullptr)
        {
            fe_line = std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::FeLine>();
        }
        return fe_line;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(section != nullptr)
    {
        children["section"] = section;
    }

    if(line != nullptr)
    {
        children["line"] = line;
    }

    if(fe_line != nullptr)
    {
        children["fe-line"] = fe_line;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timestamp")
    {
        timestamp = value;
        timestamp.value_namespace = name_space;
        timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-clear-time")
    {
        last_clear_time = value;
        last_clear_time.value_namespace = name_space;
        last_clear_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-clear15-min-time")
    {
        last_clear15_min_time = value;
        last_clear15_min_time.value_namespace = name_space;
        last_clear15_min_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-clear24-hr-time")
    {
        last_clear24_hr_time = value;
        last_clear24_hr_time.value_namespace = name_space;
        last_clear24_hr_time.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
    if(value_path == "timestamp")
    {
        timestamp.yfilter = yfilter;
    }
    if(value_path == "last-clear-time")
    {
        last_clear_time.yfilter = yfilter;
    }
    if(value_path == "last-clear15-min-time")
    {
        last_clear15_min_time.yfilter = yfilter;
    }
    if(value_path == "last-clear24-hr-time")
    {
        last_clear24_hr_time.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "section" || name == "line" || name == "fe-line" || name == "number" || name == "index" || name == "valid" || name == "timestamp" || name == "last-clear-time" || name == "last-clear15-min-time" || name == "last-clear24-hr-time")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::Section::Section()
    :
    section_status{YType::int32, "section-status"}
        ,
    section_e_ss(std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::Section::SectionESs>())
    , section_se_ss(std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::Section::SectionSeSs>())
    , section_sef_ss(std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::Section::SectionSefSs>())
    , section_c_vs(std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::Section::SectionCVs>())
{
    section_e_ss->parent = this;
    section_se_ss->parent = this;
    section_sef_ss->parent = this;
    section_c_vs->parent = this;

    yang_name = "section"; yang_parent_name = "oc-minute15ocn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::Section::~Section()
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::Section::has_data() const
{
    if (is_presence_container) return true;
    return section_status.is_set
	|| (section_e_ss !=  nullptr && section_e_ss->has_data())
	|| (section_se_ss !=  nullptr && section_se_ss->has_data())
	|| (section_sef_ss !=  nullptr && section_sef_ss->has_data())
	|| (section_c_vs !=  nullptr && section_c_vs->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::Section::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(section_status.yfilter)
	|| (section_e_ss !=  nullptr && section_e_ss->has_operation())
	|| (section_se_ss !=  nullptr && section_se_ss->has_operation())
	|| (section_sef_ss !=  nullptr && section_sef_ss->has_operation())
	|| (section_c_vs !=  nullptr && section_c_vs->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::Section::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "section";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::Section::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (section_status.is_set || is_set(section_status.yfilter)) leaf_name_data.push_back(section_status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::Section::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "section-e-ss")
    {
        if(section_e_ss == nullptr)
        {
            section_e_ss = std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::Section::SectionESs>();
        }
        return section_e_ss;
    }

    if(child_yang_name == "section-se-ss")
    {
        if(section_se_ss == nullptr)
        {
            section_se_ss = std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::Section::SectionSeSs>();
        }
        return section_se_ss;
    }

    if(child_yang_name == "section-sef-ss")
    {
        if(section_sef_ss == nullptr)
        {
            section_sef_ss = std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::Section::SectionSefSs>();
        }
        return section_sef_ss;
    }

    if(child_yang_name == "section-c-vs")
    {
        if(section_c_vs == nullptr)
        {
            section_c_vs = std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::Section::SectionCVs>();
        }
        return section_c_vs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::Section::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(section_e_ss != nullptr)
    {
        children["section-e-ss"] = section_e_ss;
    }

    if(section_se_ss != nullptr)
    {
        children["section-se-ss"] = section_se_ss;
    }

    if(section_sef_ss != nullptr)
    {
        children["section-sef-ss"] = section_sef_ss;
    }

    if(section_c_vs != nullptr)
    {
        children["section-c-vs"] = section_c_vs;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::Section::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "section-status")
    {
        section_status = value;
        section_status.value_namespace = name_space;
        section_status.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::Section::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "section-status")
    {
        section_status.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::Section::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "section-e-ss" || name == "section-se-ss" || name == "section-sef-ss" || name == "section-c-vs" || name == "section-status")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::Section::SectionESs::SectionESs()
    :
    data{YType::uint32, "data"},
    threshold{YType::uint32, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "section-e-ss"; yang_parent_name = "section"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::Section::SectionESs::~SectionESs()
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::Section::SectionESs::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::Section::SectionESs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::Section::SectionESs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "section-e-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::Section::SectionESs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::Section::SectionESs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::Section::SectionESs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::Section::SectionESs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::Section::SectionESs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::Section::SectionESs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::Section::SectionSeSs::SectionSeSs()
    :
    data{YType::uint32, "data"},
    threshold{YType::uint32, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "section-se-ss"; yang_parent_name = "section"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::Section::SectionSeSs::~SectionSeSs()
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::Section::SectionSeSs::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::Section::SectionSeSs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::Section::SectionSeSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "section-se-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::Section::SectionSeSs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::Section::SectionSeSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::Section::SectionSeSs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::Section::SectionSeSs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::Section::SectionSeSs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::Section::SectionSeSs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::Section::SectionSefSs::SectionSefSs()
    :
    data{YType::uint32, "data"},
    threshold{YType::uint32, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "section-sef-ss"; yang_parent_name = "section"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::Section::SectionSefSs::~SectionSefSs()
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::Section::SectionSefSs::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::Section::SectionSefSs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::Section::SectionSefSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "section-sef-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::Section::SectionSefSs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::Section::SectionSefSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::Section::SectionSefSs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::Section::SectionSefSs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::Section::SectionSefSs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::Section::SectionSefSs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::Section::SectionCVs::SectionCVs()
    :
    data{YType::uint32, "data"},
    threshold{YType::uint32, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "section-c-vs"; yang_parent_name = "section"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::Section::SectionCVs::~SectionCVs()
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::Section::SectionCVs::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::Section::SectionCVs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::Section::SectionCVs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "section-c-vs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::Section::SectionCVs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::Section::SectionCVs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::Section::SectionCVs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::Section::SectionCVs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::Section::SectionCVs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::Section::SectionCVs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::Line::Line()
    :
    line_status{YType::int32, "line-status"}
        ,
    line_e_ss(std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::Line::LineESs>())
    , line_se_ss(std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::Line::LineSeSs>())
    , line_c_vs(std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::Line::LineCVs>())
    , line_ua_ss(std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::Line::LineUaSs>())
    , line_fc_ls(std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::Line::LineFcLs>())
{
    line_e_ss->parent = this;
    line_se_ss->parent = this;
    line_c_vs->parent = this;
    line_ua_ss->parent = this;
    line_fc_ls->parent = this;

    yang_name = "line"; yang_parent_name = "oc-minute15ocn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::Line::~Line()
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::Line::has_data() const
{
    if (is_presence_container) return true;
    return line_status.is_set
	|| (line_e_ss !=  nullptr && line_e_ss->has_data())
	|| (line_se_ss !=  nullptr && line_se_ss->has_data())
	|| (line_c_vs !=  nullptr && line_c_vs->has_data())
	|| (line_ua_ss !=  nullptr && line_ua_ss->has_data())
	|| (line_fc_ls !=  nullptr && line_fc_ls->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::Line::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(line_status.yfilter)
	|| (line_e_ss !=  nullptr && line_e_ss->has_operation())
	|| (line_se_ss !=  nullptr && line_se_ss->has_operation())
	|| (line_c_vs !=  nullptr && line_c_vs->has_operation())
	|| (line_ua_ss !=  nullptr && line_ua_ss->has_operation())
	|| (line_fc_ls !=  nullptr && line_fc_ls->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::Line::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::Line::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (line_status.is_set || is_set(line_status.yfilter)) leaf_name_data.push_back(line_status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::Line::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "line-e-ss")
    {
        if(line_e_ss == nullptr)
        {
            line_e_ss = std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::Line::LineESs>();
        }
        return line_e_ss;
    }

    if(child_yang_name == "line-se-ss")
    {
        if(line_se_ss == nullptr)
        {
            line_se_ss = std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::Line::LineSeSs>();
        }
        return line_se_ss;
    }

    if(child_yang_name == "line-c-vs")
    {
        if(line_c_vs == nullptr)
        {
            line_c_vs = std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::Line::LineCVs>();
        }
        return line_c_vs;
    }

    if(child_yang_name == "line-ua-ss")
    {
        if(line_ua_ss == nullptr)
        {
            line_ua_ss = std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::Line::LineUaSs>();
        }
        return line_ua_ss;
    }

    if(child_yang_name == "line-fc-ls")
    {
        if(line_fc_ls == nullptr)
        {
            line_fc_ls = std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::Line::LineFcLs>();
        }
        return line_fc_ls;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::Line::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(line_e_ss != nullptr)
    {
        children["line-e-ss"] = line_e_ss;
    }

    if(line_se_ss != nullptr)
    {
        children["line-se-ss"] = line_se_ss;
    }

    if(line_c_vs != nullptr)
    {
        children["line-c-vs"] = line_c_vs;
    }

    if(line_ua_ss != nullptr)
    {
        children["line-ua-ss"] = line_ua_ss;
    }

    if(line_fc_ls != nullptr)
    {
        children["line-fc-ls"] = line_fc_ls;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::Line::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "line-status")
    {
        line_status = value;
        line_status.value_namespace = name_space;
        line_status.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::Line::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "line-status")
    {
        line_status.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::Line::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "line-e-ss" || name == "line-se-ss" || name == "line-c-vs" || name == "line-ua-ss" || name == "line-fc-ls" || name == "line-status")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::Line::LineESs::LineESs()
    :
    data{YType::uint32, "data"},
    threshold{YType::uint32, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "line-e-ss"; yang_parent_name = "line"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::Line::LineESs::~LineESs()
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::Line::LineESs::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::Line::LineESs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::Line::LineESs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line-e-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::Line::LineESs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::Line::LineESs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::Line::LineESs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::Line::LineESs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::Line::LineESs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::Line::LineESs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::Line::LineSeSs::LineSeSs()
    :
    data{YType::uint32, "data"},
    threshold{YType::uint32, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "line-se-ss"; yang_parent_name = "line"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::Line::LineSeSs::~LineSeSs()
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::Line::LineSeSs::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::Line::LineSeSs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::Line::LineSeSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line-se-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::Line::LineSeSs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::Line::LineSeSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::Line::LineSeSs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::Line::LineSeSs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::Line::LineSeSs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::Line::LineSeSs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::Line::LineCVs::LineCVs()
    :
    data{YType::uint32, "data"},
    threshold{YType::uint32, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "line-c-vs"; yang_parent_name = "line"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::Line::LineCVs::~LineCVs()
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::Line::LineCVs::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::Line::LineCVs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::Line::LineCVs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line-c-vs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::Line::LineCVs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::Line::LineCVs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::Line::LineCVs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::Line::LineCVs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::Line::LineCVs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::Line::LineCVs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::Line::LineUaSs::LineUaSs()
    :
    data{YType::uint32, "data"},
    threshold{YType::uint32, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "line-ua-ss"; yang_parent_name = "line"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::Line::LineUaSs::~LineUaSs()
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::Line::LineUaSs::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::Line::LineUaSs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::Line::LineUaSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line-ua-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::Line::LineUaSs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::Line::LineUaSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::Line::LineUaSs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::Line::LineUaSs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::Line::LineUaSs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::Line::LineUaSs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::Line::LineFcLs::LineFcLs()
    :
    data{YType::uint32, "data"},
    threshold{YType::uint32, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "line-fc-ls"; yang_parent_name = "line"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::Line::LineFcLs::~LineFcLs()
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::Line::LineFcLs::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::Line::LineFcLs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::Line::LineFcLs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line-fc-ls";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::Line::LineFcLs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::Line::LineFcLs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::Line::LineFcLs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::Line::LineFcLs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::Line::LineFcLs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::Line::LineFcLs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::FeLine::FeLine()
    :
    far_end_line_e_ss(std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::FeLine::FarEndLineESs>())
    , far_end_line_se_ss(std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::FeLine::FarEndLineSeSs>())
    , far_end_line_c_vs(std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::FeLine::FarEndLineCVs>())
    , far_end_line_ua_ss(std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::FeLine::FarEndLineUaSs>())
    , far_end_line_fc_ls(std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::FeLine::FarEndLineFcLs>())
{
    far_end_line_e_ss->parent = this;
    far_end_line_se_ss->parent = this;
    far_end_line_c_vs->parent = this;
    far_end_line_ua_ss->parent = this;
    far_end_line_fc_ls->parent = this;

    yang_name = "fe-line"; yang_parent_name = "oc-minute15ocn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::FeLine::~FeLine()
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::FeLine::has_data() const
{
    if (is_presence_container) return true;
    return (far_end_line_e_ss !=  nullptr && far_end_line_e_ss->has_data())
	|| (far_end_line_se_ss !=  nullptr && far_end_line_se_ss->has_data())
	|| (far_end_line_c_vs !=  nullptr && far_end_line_c_vs->has_data())
	|| (far_end_line_ua_ss !=  nullptr && far_end_line_ua_ss->has_data())
	|| (far_end_line_fc_ls !=  nullptr && far_end_line_fc_ls->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::FeLine::has_operation() const
{
    return is_set(yfilter)
	|| (far_end_line_e_ss !=  nullptr && far_end_line_e_ss->has_operation())
	|| (far_end_line_se_ss !=  nullptr && far_end_line_se_ss->has_operation())
	|| (far_end_line_c_vs !=  nullptr && far_end_line_c_vs->has_operation())
	|| (far_end_line_ua_ss !=  nullptr && far_end_line_ua_ss->has_operation())
	|| (far_end_line_fc_ls !=  nullptr && far_end_line_fc_ls->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::FeLine::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fe-line";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::FeLine::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::FeLine::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "far-end-line-e-ss")
    {
        if(far_end_line_e_ss == nullptr)
        {
            far_end_line_e_ss = std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::FeLine::FarEndLineESs>();
        }
        return far_end_line_e_ss;
    }

    if(child_yang_name == "far-end-line-se-ss")
    {
        if(far_end_line_se_ss == nullptr)
        {
            far_end_line_se_ss = std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::FeLine::FarEndLineSeSs>();
        }
        return far_end_line_se_ss;
    }

    if(child_yang_name == "far-end-line-c-vs")
    {
        if(far_end_line_c_vs == nullptr)
        {
            far_end_line_c_vs = std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::FeLine::FarEndLineCVs>();
        }
        return far_end_line_c_vs;
    }

    if(child_yang_name == "far-end-line-ua-ss")
    {
        if(far_end_line_ua_ss == nullptr)
        {
            far_end_line_ua_ss = std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::FeLine::FarEndLineUaSs>();
        }
        return far_end_line_ua_ss;
    }

    if(child_yang_name == "far-end-line-fc-ls")
    {
        if(far_end_line_fc_ls == nullptr)
        {
            far_end_line_fc_ls = std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::FeLine::FarEndLineFcLs>();
        }
        return far_end_line_fc_ls;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::FeLine::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(far_end_line_e_ss != nullptr)
    {
        children["far-end-line-e-ss"] = far_end_line_e_ss;
    }

    if(far_end_line_se_ss != nullptr)
    {
        children["far-end-line-se-ss"] = far_end_line_se_ss;
    }

    if(far_end_line_c_vs != nullptr)
    {
        children["far-end-line-c-vs"] = far_end_line_c_vs;
    }

    if(far_end_line_ua_ss != nullptr)
    {
        children["far-end-line-ua-ss"] = far_end_line_ua_ss;
    }

    if(far_end_line_fc_ls != nullptr)
    {
        children["far-end-line-fc-ls"] = far_end_line_fc_ls;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::FeLine::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::FeLine::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::FeLine::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "far-end-line-e-ss" || name == "far-end-line-se-ss" || name == "far-end-line-c-vs" || name == "far-end-line-ua-ss" || name == "far-end-line-fc-ls")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::FeLine::FarEndLineESs::FarEndLineESs()
    :
    data{YType::uint32, "data"},
    threshold{YType::uint32, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "far-end-line-e-ss"; yang_parent_name = "fe-line"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::FeLine::FarEndLineESs::~FarEndLineESs()
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::FeLine::FarEndLineESs::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::FeLine::FarEndLineESs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::FeLine::FarEndLineESs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "far-end-line-e-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::FeLine::FarEndLineESs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::FeLine::FarEndLineESs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::FeLine::FarEndLineESs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::FeLine::FarEndLineESs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::FeLine::FarEndLineESs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::FeLine::FarEndLineESs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::FeLine::FarEndLineSeSs::FarEndLineSeSs()
    :
    data{YType::uint32, "data"},
    threshold{YType::uint32, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "far-end-line-se-ss"; yang_parent_name = "fe-line"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::FeLine::FarEndLineSeSs::~FarEndLineSeSs()
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::FeLine::FarEndLineSeSs::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::FeLine::FarEndLineSeSs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::FeLine::FarEndLineSeSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "far-end-line-se-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::FeLine::FarEndLineSeSs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::FeLine::FarEndLineSeSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::FeLine::FarEndLineSeSs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::FeLine::FarEndLineSeSs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::FeLine::FarEndLineSeSs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::FeLine::FarEndLineSeSs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::FeLine::FarEndLineCVs::FarEndLineCVs()
    :
    data{YType::uint32, "data"},
    threshold{YType::uint32, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "far-end-line-c-vs"; yang_parent_name = "fe-line"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::FeLine::FarEndLineCVs::~FarEndLineCVs()
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::FeLine::FarEndLineCVs::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::FeLine::FarEndLineCVs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::FeLine::FarEndLineCVs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "far-end-line-c-vs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::FeLine::FarEndLineCVs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::FeLine::FarEndLineCVs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::FeLine::FarEndLineCVs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::FeLine::FarEndLineCVs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::FeLine::FarEndLineCVs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::FeLine::FarEndLineCVs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::FeLine::FarEndLineUaSs::FarEndLineUaSs()
    :
    data{YType::uint32, "data"},
    threshold{YType::uint32, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "far-end-line-ua-ss"; yang_parent_name = "fe-line"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::FeLine::FarEndLineUaSs::~FarEndLineUaSs()
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::FeLine::FarEndLineUaSs::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::FeLine::FarEndLineUaSs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::FeLine::FarEndLineUaSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "far-end-line-ua-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::FeLine::FarEndLineUaSs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::FeLine::FarEndLineUaSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::FeLine::FarEndLineUaSs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::FeLine::FarEndLineUaSs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::FeLine::FarEndLineUaSs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::FeLine::FarEndLineUaSs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::FeLine::FarEndLineFcLs::FarEndLineFcLs()
    :
    data{YType::uint32, "data"},
    threshold{YType::uint32, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "far-end-line-fc-ls"; yang_parent_name = "fe-line"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::FeLine::FarEndLineFcLs::~FarEndLineFcLs()
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::FeLine::FarEndLineFcLs::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::FeLine::FarEndLineFcLs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::FeLine::FarEndLineFcLs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "far-end-line-fc-ls";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::FeLine::FarEndLineFcLs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::FeLine::FarEndLineFcLs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::FeLine::FarEndLineFcLs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::FeLine::FarEndLineFcLs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::FeLine::FarEndLineFcLs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15ocnHistories::OcMinute15ocnHistory::OcMinute15ocnTimeLineInstances::OcMinute15ocnTimeLineInstance::FeLine::FarEndLineFcLs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}


}
}

