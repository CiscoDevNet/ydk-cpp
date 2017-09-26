
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_pmengine_oper_14.hpp"
#include "Cisco_IOS_XR_pmengine_oper_15.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_pmengine_oper {

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::PostFecBer::PostFecBer()
    :
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    minimum{YType::str, "minimum"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    minimum_threshold{YType::str, "minimum-threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "post-fec-ber"; yang_parent_name = "otu-hour24fec-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::PostFecBer::~PostFecBer()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::PostFecBer::has_data() const
{
    return average.is_set
	|| maximum.is_set
	|| maximum_tca_report.is_set
	|| maximum_threshold.is_set
	|| minimum.is_set
	|| minimum_tca_report.is_set
	|| minimum_threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::PostFecBer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(maximum_tca_report.yfilter)
	|| ydk::is_set(maximum_threshold.yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(minimum_tca_report.yfilter)
	|| ydk::is_set(minimum_threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::PostFecBer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "post-fec-ber";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::PostFecBer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.yfilter)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.yfilter)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.yfilter)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.yfilter)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::PostFecBer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::PostFecBer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::PostFecBer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
        maximum_tca_report.value_namespace = name_space;
        maximum_tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
        maximum_threshold.value_namespace = name_space;
        maximum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
        minimum_tca_report.value_namespace = name_space;
        minimum_tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
        minimum_threshold.value_namespace = name_space;
        minimum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::PostFecBer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "average")
    {
        average.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report.yfilter = yfilter;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold.yfilter = yfilter;
    }
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report.yfilter = yfilter;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::PostFecBer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "average" || name == "maximum" || name == "maximum-tca-report" || name == "maximum-threshold" || name == "minimum" || name == "minimum-tca-report" || name == "minimum-threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::PreFecBer::PreFecBer()
    :
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    minimum{YType::str, "minimum"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    minimum_threshold{YType::str, "minimum-threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "pre-fec-ber"; yang_parent_name = "otu-hour24fec-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::PreFecBer::~PreFecBer()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::PreFecBer::has_data() const
{
    return average.is_set
	|| maximum.is_set
	|| maximum_tca_report.is_set
	|| maximum_threshold.is_set
	|| minimum.is_set
	|| minimum_tca_report.is_set
	|| minimum_threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::PreFecBer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(maximum_tca_report.yfilter)
	|| ydk::is_set(maximum_threshold.yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(minimum_tca_report.yfilter)
	|| ydk::is_set(minimum_threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::PreFecBer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pre-fec-ber";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::PreFecBer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.yfilter)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.yfilter)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.yfilter)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.yfilter)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::PreFecBer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::PreFecBer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::PreFecBer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
        maximum_tca_report.value_namespace = name_space;
        maximum_tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
        maximum_threshold.value_namespace = name_space;
        maximum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
        minimum_tca_report.value_namespace = name_space;
        minimum_tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
        minimum_threshold.value_namespace = name_space;
        minimum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::PreFecBer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "average")
    {
        average.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report.yfilter = yfilter;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold.yfilter = yfilter;
    }
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report.yfilter = yfilter;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::PreFecBer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "average" || name == "maximum" || name == "maximum-tca-report" || name == "maximum-threshold" || name == "minimum" || name == "minimum-tca-report" || name == "minimum-threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::Q::Q()
    :
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    minimum{YType::str, "minimum"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    minimum_threshold{YType::str, "minimum-threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "q"; yang_parent_name = "otu-hour24fec-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::Q::~Q()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::Q::has_data() const
{
    return average.is_set
	|| maximum.is_set
	|| maximum_tca_report.is_set
	|| maximum_threshold.is_set
	|| minimum.is_set
	|| minimum_tca_report.is_set
	|| minimum_threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::Q::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(maximum_tca_report.yfilter)
	|| ydk::is_set(maximum_threshold.yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(minimum_tca_report.yfilter)
	|| ydk::is_set(minimum_threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::Q::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "q";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::Q::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.yfilter)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.yfilter)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.yfilter)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.yfilter)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::Q::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::Q::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::Q::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
        maximum_tca_report.value_namespace = name_space;
        maximum_tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
        maximum_threshold.value_namespace = name_space;
        maximum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
        minimum_tca_report.value_namespace = name_space;
        minimum_tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
        minimum_threshold.value_namespace = name_space;
        minimum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::Q::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "average")
    {
        average.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report.yfilter = yfilter;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold.yfilter = yfilter;
    }
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report.yfilter = yfilter;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::Q::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "average" || name == "maximum" || name == "maximum-tca-report" || name == "maximum-threshold" || name == "minimum" || name == "minimum-tca-report" || name == "minimum-threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::Qmargin::Qmargin()
    :
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    minimum{YType::str, "minimum"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    minimum_threshold{YType::str, "minimum-threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "qmargin"; yang_parent_name = "otu-hour24fec-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::Qmargin::~Qmargin()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::Qmargin::has_data() const
{
    return average.is_set
	|| maximum.is_set
	|| maximum_tca_report.is_set
	|| maximum_threshold.is_set
	|| minimum.is_set
	|| minimum_tca_report.is_set
	|| minimum_threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::Qmargin::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(maximum_tca_report.yfilter)
	|| ydk::is_set(maximum_threshold.yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(minimum_tca_report.yfilter)
	|| ydk::is_set(minimum_threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::Qmargin::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qmargin";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::Qmargin::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.yfilter)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.yfilter)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.yfilter)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.yfilter)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::Qmargin::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::Qmargin::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::Qmargin::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
        maximum_tca_report.value_namespace = name_space;
        maximum_tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
        maximum_threshold.value_namespace = name_space;
        maximum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
        minimum_tca_report.value_namespace = name_space;
        minimum_tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
        minimum_threshold.value_namespace = name_space;
        minimum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::Qmargin::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "average")
    {
        average.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report.yfilter = yfilter;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold.yfilter = yfilter;
    }
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report.yfilter = yfilter;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::Qmargin::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "average" || name == "maximum" || name == "maximum-tca-report" || name == "maximum-threshold" || name == "minimum" || name == "minimum-tca-report" || name == "minimum-threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::UcWords::UcWords()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "uc-words"; yang_parent_name = "otu-hour24fec-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::UcWords::~UcWords()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::UcWords::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::UcWords::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::UcWords::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uc-words";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::UcWords::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::UcWords::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::UcWords::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::UcWords::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::UcWords::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::UcWords::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistories()
{

    yang_name = "otu-hour24otn-histories"; yang_parent_name = "otu-hour24-history"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::~OtuHour24OtnHistories()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::has_data() const
{
    for (std::size_t index=0; index<otu_hour24otn_history.size(); index++)
    {
        if(otu_hour24otn_history[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::has_operation() const
{
    for (std::size_t index=0; index<otu_hour24otn_history.size(); index++)
    {
        if(otu_hour24otn_history[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otu-hour24otn-histories";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "otu-hour24otn-history")
    {
        for(auto const & c : otu_hour24otn_history)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory>();
        c->parent = this;
        otu_hour24otn_history.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : otu_hour24otn_history)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "otu-hour24otn-history")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnHistory()
    :
    number{YType::int32, "number"}
    	,
    otu_hour24otn_time_line_instances(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances>())
{
    otu_hour24otn_time_line_instances->parent = this;

    yang_name = "otu-hour24otn-history"; yang_parent_name = "otu-hour24otn-histories"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::~OtuHour24OtnHistory()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::has_data() const
{
    return number.is_set
	|| (otu_hour24otn_time_line_instances !=  nullptr && otu_hour24otn_time_line_instances->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| (otu_hour24otn_time_line_instances !=  nullptr && otu_hour24otn_time_line_instances->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otu-hour24otn-history" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "otu-hour24otn-time-line-instances")
    {
        if(otu_hour24otn_time_line_instances == nullptr)
        {
            otu_hour24otn_time_line_instances = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances>();
        }
        return otu_hour24otn_time_line_instances;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(otu_hour24otn_time_line_instances != nullptr)
    {
        children["otu-hour24otn-time-line-instances"] = otu_hour24otn_time_line_instances;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "otu-hour24otn-time-line-instances" || name == "number")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstances()
{

    yang_name = "otu-hour24otn-time-line-instances"; yang_parent_name = "otu-hour24otn-history"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::~OtuHour24OtnTimeLineInstances()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::has_data() const
{
    for (std::size_t index=0; index<otu_hour24otn_time_line_instance.size(); index++)
    {
        if(otu_hour24otn_time_line_instance[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::has_operation() const
{
    for (std::size_t index=0; index<otu_hour24otn_time_line_instance.size(); index++)
    {
        if(otu_hour24otn_time_line_instance[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otu-hour24otn-time-line-instances";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "otu-hour24otn-time-line-instance")
    {
        for(auto const & c : otu_hour24otn_time_line_instance)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance>();
        c->parent = this;
        otu_hour24otn_time_line_instance.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : otu_hour24otn_time_line_instance)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "otu-hour24otn-time-line-instance")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::OtuHour24OtnTimeLineInstance()
    :
    number{YType::int32, "number"},
    index_{YType::uint32, "index"},
    last_clear15_min_time{YType::str, "last-clear15-min-time"},
    last_clear24_hr_time{YType::str, "last-clear24-hr-time"},
    last_clear30_sec_time{YType::str, "last-clear30-sec-time"},
    last_clear_time{YType::str, "last-clear-time"},
    sec30_support{YType::boolean, "sec30-support"},
    timestamp{YType::str, "timestamp"},
    valid{YType::boolean, "valid"}
    	,
    bbe_fe(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::BbeFe>())
	,bbe_ne(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::BbeNe>())
	,bber_fe(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::BberFe>())
	,bber_ne(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::BberNe>())
	,es_fe(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::EsFe>())
	,es_ne(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::EsNe>())
	,esr_fe(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::EsrFe>())
	,esr_ne(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::EsrNe>())
	,fc_fe(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::FcFe>())
	,fc_ne(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::FcNe>())
	,lbc(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::Lbc>())
	,ses_fe(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::SesFe>())
	,ses_ne(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::SesNe>())
	,sesr_fe(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::SesrFe>())
	,sesr_ne(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::SesrNe>())
	,uas_fe(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::UasFe>())
	,uas_ne(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::UasNe>())
{
    bbe_fe->parent = this;
    bbe_ne->parent = this;
    bber_fe->parent = this;
    bber_ne->parent = this;
    es_fe->parent = this;
    es_ne->parent = this;
    esr_fe->parent = this;
    esr_ne->parent = this;
    fc_fe->parent = this;
    fc_ne->parent = this;
    lbc->parent = this;
    ses_fe->parent = this;
    ses_ne->parent = this;
    sesr_fe->parent = this;
    sesr_ne->parent = this;
    uas_fe->parent = this;
    uas_ne->parent = this;

    yang_name = "otu-hour24otn-time-line-instance"; yang_parent_name = "otu-hour24otn-time-line-instances"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::~OtuHour24OtnTimeLineInstance()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::has_data() const
{
    return number.is_set
	|| index_.is_set
	|| last_clear15_min_time.is_set
	|| last_clear24_hr_time.is_set
	|| last_clear30_sec_time.is_set
	|| last_clear_time.is_set
	|| sec30_support.is_set
	|| timestamp.is_set
	|| valid.is_set
	|| (bbe_fe !=  nullptr && bbe_fe->has_data())
	|| (bbe_ne !=  nullptr && bbe_ne->has_data())
	|| (bber_fe !=  nullptr && bber_fe->has_data())
	|| (bber_ne !=  nullptr && bber_ne->has_data())
	|| (es_fe !=  nullptr && es_fe->has_data())
	|| (es_ne !=  nullptr && es_ne->has_data())
	|| (esr_fe !=  nullptr && esr_fe->has_data())
	|| (esr_ne !=  nullptr && esr_ne->has_data())
	|| (fc_fe !=  nullptr && fc_fe->has_data())
	|| (fc_ne !=  nullptr && fc_ne->has_data())
	|| (lbc !=  nullptr && lbc->has_data())
	|| (ses_fe !=  nullptr && ses_fe->has_data())
	|| (ses_ne !=  nullptr && ses_ne->has_data())
	|| (sesr_fe !=  nullptr && sesr_fe->has_data())
	|| (sesr_ne !=  nullptr && sesr_ne->has_data())
	|| (uas_fe !=  nullptr && uas_fe->has_data())
	|| (uas_ne !=  nullptr && uas_ne->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(last_clear15_min_time.yfilter)
	|| ydk::is_set(last_clear24_hr_time.yfilter)
	|| ydk::is_set(last_clear30_sec_time.yfilter)
	|| ydk::is_set(last_clear_time.yfilter)
	|| ydk::is_set(sec30_support.yfilter)
	|| ydk::is_set(timestamp.yfilter)
	|| ydk::is_set(valid.yfilter)
	|| (bbe_fe !=  nullptr && bbe_fe->has_operation())
	|| (bbe_ne !=  nullptr && bbe_ne->has_operation())
	|| (bber_fe !=  nullptr && bber_fe->has_operation())
	|| (bber_ne !=  nullptr && bber_ne->has_operation())
	|| (es_fe !=  nullptr && es_fe->has_operation())
	|| (es_ne !=  nullptr && es_ne->has_operation())
	|| (esr_fe !=  nullptr && esr_fe->has_operation())
	|| (esr_ne !=  nullptr && esr_ne->has_operation())
	|| (fc_fe !=  nullptr && fc_fe->has_operation())
	|| (fc_ne !=  nullptr && fc_ne->has_operation())
	|| (lbc !=  nullptr && lbc->has_operation())
	|| (ses_fe !=  nullptr && ses_fe->has_operation())
	|| (ses_ne !=  nullptr && ses_ne->has_operation())
	|| (sesr_fe !=  nullptr && sesr_fe->has_operation())
	|| (sesr_ne !=  nullptr && sesr_ne->has_operation())
	|| (uas_fe !=  nullptr && uas_fe->has_operation())
	|| (uas_ne !=  nullptr && uas_ne->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otu-hour24otn-time-line-instance" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (last_clear15_min_time.is_set || is_set(last_clear15_min_time.yfilter)) leaf_name_data.push_back(last_clear15_min_time.get_name_leafdata());
    if (last_clear24_hr_time.is_set || is_set(last_clear24_hr_time.yfilter)) leaf_name_data.push_back(last_clear24_hr_time.get_name_leafdata());
    if (last_clear30_sec_time.is_set || is_set(last_clear30_sec_time.yfilter)) leaf_name_data.push_back(last_clear30_sec_time.get_name_leafdata());
    if (last_clear_time.is_set || is_set(last_clear_time.yfilter)) leaf_name_data.push_back(last_clear_time.get_name_leafdata());
    if (sec30_support.is_set || is_set(sec30_support.yfilter)) leaf_name_data.push_back(sec30_support.get_name_leafdata());
    if (timestamp.is_set || is_set(timestamp.yfilter)) leaf_name_data.push_back(timestamp.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bbe-fe")
    {
        if(bbe_fe == nullptr)
        {
            bbe_fe = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::BbeFe>();
        }
        return bbe_fe;
    }

    if(child_yang_name == "bbe-ne")
    {
        if(bbe_ne == nullptr)
        {
            bbe_ne = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::BbeNe>();
        }
        return bbe_ne;
    }

    if(child_yang_name == "bber-fe")
    {
        if(bber_fe == nullptr)
        {
            bber_fe = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::BberFe>();
        }
        return bber_fe;
    }

    if(child_yang_name == "bber-ne")
    {
        if(bber_ne == nullptr)
        {
            bber_ne = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::BberNe>();
        }
        return bber_ne;
    }

    if(child_yang_name == "es-fe")
    {
        if(es_fe == nullptr)
        {
            es_fe = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::EsFe>();
        }
        return es_fe;
    }

    if(child_yang_name == "es-ne")
    {
        if(es_ne == nullptr)
        {
            es_ne = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::EsNe>();
        }
        return es_ne;
    }

    if(child_yang_name == "esr-fe")
    {
        if(esr_fe == nullptr)
        {
            esr_fe = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::EsrFe>();
        }
        return esr_fe;
    }

    if(child_yang_name == "esr-ne")
    {
        if(esr_ne == nullptr)
        {
            esr_ne = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::EsrNe>();
        }
        return esr_ne;
    }

    if(child_yang_name == "fc-fe")
    {
        if(fc_fe == nullptr)
        {
            fc_fe = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::FcFe>();
        }
        return fc_fe;
    }

    if(child_yang_name == "fc-ne")
    {
        if(fc_ne == nullptr)
        {
            fc_ne = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::FcNe>();
        }
        return fc_ne;
    }

    if(child_yang_name == "lbc")
    {
        if(lbc == nullptr)
        {
            lbc = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::Lbc>();
        }
        return lbc;
    }

    if(child_yang_name == "ses-fe")
    {
        if(ses_fe == nullptr)
        {
            ses_fe = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::SesFe>();
        }
        return ses_fe;
    }

    if(child_yang_name == "ses-ne")
    {
        if(ses_ne == nullptr)
        {
            ses_ne = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::SesNe>();
        }
        return ses_ne;
    }

    if(child_yang_name == "sesr-fe")
    {
        if(sesr_fe == nullptr)
        {
            sesr_fe = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::SesrFe>();
        }
        return sesr_fe;
    }

    if(child_yang_name == "sesr-ne")
    {
        if(sesr_ne == nullptr)
        {
            sesr_ne = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::SesrNe>();
        }
        return sesr_ne;
    }

    if(child_yang_name == "uas-fe")
    {
        if(uas_fe == nullptr)
        {
            uas_fe = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::UasFe>();
        }
        return uas_fe;
    }

    if(child_yang_name == "uas-ne")
    {
        if(uas_ne == nullptr)
        {
            uas_ne = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::UasNe>();
        }
        return uas_ne;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bbe_fe != nullptr)
    {
        children["bbe-fe"] = bbe_fe;
    }

    if(bbe_ne != nullptr)
    {
        children["bbe-ne"] = bbe_ne;
    }

    if(bber_fe != nullptr)
    {
        children["bber-fe"] = bber_fe;
    }

    if(bber_ne != nullptr)
    {
        children["bber-ne"] = bber_ne;
    }

    if(es_fe != nullptr)
    {
        children["es-fe"] = es_fe;
    }

    if(es_ne != nullptr)
    {
        children["es-ne"] = es_ne;
    }

    if(esr_fe != nullptr)
    {
        children["esr-fe"] = esr_fe;
    }

    if(esr_ne != nullptr)
    {
        children["esr-ne"] = esr_ne;
    }

    if(fc_fe != nullptr)
    {
        children["fc-fe"] = fc_fe;
    }

    if(fc_ne != nullptr)
    {
        children["fc-ne"] = fc_ne;
    }

    if(lbc != nullptr)
    {
        children["lbc"] = lbc;
    }

    if(ses_fe != nullptr)
    {
        children["ses-fe"] = ses_fe;
    }

    if(ses_ne != nullptr)
    {
        children["ses-ne"] = ses_ne;
    }

    if(sesr_fe != nullptr)
    {
        children["sesr-fe"] = sesr_fe;
    }

    if(sesr_ne != nullptr)
    {
        children["sesr-ne"] = sesr_ne;
    }

    if(uas_fe != nullptr)
    {
        children["uas-fe"] = uas_fe;
    }

    if(uas_ne != nullptr)
    {
        children["uas-ne"] = uas_ne;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "last-clear30-sec-time")
    {
        last_clear30_sec_time = value;
        last_clear30_sec_time.value_namespace = name_space;
        last_clear30_sec_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-clear-time")
    {
        last_clear_time = value;
        last_clear_time.value_namespace = name_space;
        last_clear_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sec30-support")
    {
        sec30_support = value;
        sec30_support.value_namespace = name_space;
        sec30_support.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timestamp")
    {
        timestamp = value;
        timestamp.value_namespace = name_space;
        timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "last-clear15-min-time")
    {
        last_clear15_min_time.yfilter = yfilter;
    }
    if(value_path == "last-clear24-hr-time")
    {
        last_clear24_hr_time.yfilter = yfilter;
    }
    if(value_path == "last-clear30-sec-time")
    {
        last_clear30_sec_time.yfilter = yfilter;
    }
    if(value_path == "last-clear-time")
    {
        last_clear_time.yfilter = yfilter;
    }
    if(value_path == "sec30-support")
    {
        sec30_support.yfilter = yfilter;
    }
    if(value_path == "timestamp")
    {
        timestamp.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bbe-fe" || name == "bbe-ne" || name == "bber-fe" || name == "bber-ne" || name == "es-fe" || name == "es-ne" || name == "esr-fe" || name == "esr-ne" || name == "fc-fe" || name == "fc-ne" || name == "lbc" || name == "ses-fe" || name == "ses-ne" || name == "sesr-fe" || name == "sesr-ne" || name == "uas-fe" || name == "uas-ne" || name == "number" || name == "index" || name == "last-clear15-min-time" || name == "last-clear24-hr-time" || name == "last-clear30-sec-time" || name == "last-clear-time" || name == "sec30-support" || name == "timestamp" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::BbeFe::BbeFe()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{

    yang_name = "bbe-fe"; yang_parent_name = "otu-hour24otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::BbeFe::~BbeFe()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::BbeFe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::BbeFe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::BbeFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bbe-fe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::BbeFe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::BbeFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::BbeFe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::BbeFe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::BbeFe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::BbeFe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::BbeNe::BbeNe()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{

    yang_name = "bbe-ne"; yang_parent_name = "otu-hour24otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::BbeNe::~BbeNe()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::BbeNe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::BbeNe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::BbeNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bbe-ne";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::BbeNe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::BbeNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::BbeNe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::BbeNe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::BbeNe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::BbeNe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::BberFe::BberFe()
    :
    data{YType::str, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::str, "threshold"}
{

    yang_name = "bber-fe"; yang_parent_name = "otu-hour24otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::BberFe::~BberFe()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::BberFe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::BberFe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::BberFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bber-fe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::BberFe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::BberFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::BberFe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::BberFe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::BberFe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::BberFe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::BberNe::BberNe()
    :
    data{YType::str, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::str, "threshold"}
{

    yang_name = "bber-ne"; yang_parent_name = "otu-hour24otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::BberNe::~BberNe()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::BberNe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::BberNe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::BberNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bber-ne";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::BberNe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::BberNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::BberNe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::BberNe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::BberNe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::BberNe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::EsFe::EsFe()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{

    yang_name = "es-fe"; yang_parent_name = "otu-hour24otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::EsFe::~EsFe()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::EsFe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::EsFe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::EsFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "es-fe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::EsFe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::EsFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::EsFe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::EsFe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::EsFe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::EsFe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::EsNe::EsNe()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{

    yang_name = "es-ne"; yang_parent_name = "otu-hour24otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::EsNe::~EsNe()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::EsNe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::EsNe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::EsNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "es-ne";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::EsNe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::EsNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::EsNe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::EsNe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::EsNe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::EsNe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::EsrFe::EsrFe()
    :
    data{YType::str, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::str, "threshold"}
{

    yang_name = "esr-fe"; yang_parent_name = "otu-hour24otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::EsrFe::~EsrFe()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::EsrFe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::EsrFe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::EsrFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "esr-fe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::EsrFe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::EsrFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::EsrFe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::EsrFe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::EsrFe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::EsrFe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::EsrNe::EsrNe()
    :
    data{YType::str, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::str, "threshold"}
{

    yang_name = "esr-ne"; yang_parent_name = "otu-hour24otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::EsrNe::~EsrNe()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::EsrNe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::EsrNe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::EsrNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "esr-ne";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::EsrNe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::EsrNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::EsrNe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::EsrNe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::EsrNe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::EsrNe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::FcFe::FcFe()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{

    yang_name = "fc-fe"; yang_parent_name = "otu-hour24otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::FcFe::~FcFe()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::FcFe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::FcFe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::FcFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fc-fe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::FcFe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::FcFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::FcFe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::FcFe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::FcFe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::FcFe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::FcNe::FcNe()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{

    yang_name = "fc-ne"; yang_parent_name = "otu-hour24otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::FcNe::~FcNe()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::FcNe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::FcNe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::FcNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fc-ne";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::FcNe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::FcNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::FcNe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::FcNe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::FcNe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::FcNe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::Lbc::Lbc()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{

    yang_name = "lbc"; yang_parent_name = "otu-hour24otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::Lbc::~Lbc()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::Lbc::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::Lbc::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::Lbc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lbc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::Lbc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::Lbc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::Lbc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::Lbc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::Lbc::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::Lbc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::SesFe::SesFe()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{

    yang_name = "ses-fe"; yang_parent_name = "otu-hour24otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::SesFe::~SesFe()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::SesFe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::SesFe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::SesFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ses-fe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::SesFe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::SesFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::SesFe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::SesFe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::SesFe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::SesFe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::SesNe::SesNe()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{

    yang_name = "ses-ne"; yang_parent_name = "otu-hour24otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::SesNe::~SesNe()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::SesNe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::SesNe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::SesNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ses-ne";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::SesNe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::SesNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::SesNe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::SesNe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::SesNe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::SesNe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::SesrFe::SesrFe()
    :
    data{YType::str, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::str, "threshold"}
{

    yang_name = "sesr-fe"; yang_parent_name = "otu-hour24otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::SesrFe::~SesrFe()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::SesrFe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::SesrFe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::SesrFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sesr-fe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::SesrFe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::SesrFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::SesrFe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::SesrFe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::SesrFe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::SesrFe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::SesrNe::SesrNe()
    :
    data{YType::str, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::str, "threshold"}
{

    yang_name = "sesr-ne"; yang_parent_name = "otu-hour24otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::SesrNe::~SesrNe()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::SesrNe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::SesrNe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::SesrNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sesr-ne";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::SesrNe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::SesrNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::SesrNe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::SesrNe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::SesrNe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::SesrNe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::UasFe::UasFe()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{

    yang_name = "uas-fe"; yang_parent_name = "otu-hour24otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::UasFe::~UasFe()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::UasFe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::UasFe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::UasFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uas-fe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::UasFe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::UasFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::UasFe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::UasFe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::UasFe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::UasFe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::UasNe::UasNe()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{

    yang_name = "uas-ne"; yang_parent_name = "otu-hour24otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::UasNe::~UasNe()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::UasNe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::UasNe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::UasNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uas-ne";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::UasNe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::UasNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::UasNe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::UasNe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::UasNe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::UasNe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24PrbsHistories::OtuHour24PrbsHistories()
{

    yang_name = "otu-hour24prbs-histories"; yang_parent_name = "otu-hour24-history"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24PrbsHistories::~OtuHour24PrbsHistories()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24PrbsHistories::has_data() const
{
    for (std::size_t index=0; index<otu_hour24prbs_history.size(); index++)
    {
        if(otu_hour24prbs_history[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24PrbsHistories::has_operation() const
{
    for (std::size_t index=0; index<otu_hour24prbs_history.size(); index++)
    {
        if(otu_hour24prbs_history[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24PrbsHistories::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otu-hour24prbs-histories";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24PrbsHistories::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24PrbsHistories::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "otu-hour24prbs-history")
    {
        for(auto const & c : otu_hour24prbs_history)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24PrbsHistories::OtuHour24PrbsHistory>();
        c->parent = this;
        otu_hour24prbs_history.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24PrbsHistories::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : otu_hour24prbs_history)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24PrbsHistories::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24PrbsHistories::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24PrbsHistories::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "otu-hour24prbs-history")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24PrbsHistories::OtuHour24PrbsHistory::OtuHour24PrbsHistory()
    :
    number{YType::int32, "number"}
    	,
    otu_hour24prbs_time_line_instances(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24PrbsHistories::OtuHour24PrbsHistory::OtuHour24PrbsTimeLineInstances>())
{
    otu_hour24prbs_time_line_instances->parent = this;

    yang_name = "otu-hour24prbs-history"; yang_parent_name = "otu-hour24prbs-histories"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24PrbsHistories::OtuHour24PrbsHistory::~OtuHour24PrbsHistory()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24PrbsHistories::OtuHour24PrbsHistory::has_data() const
{
    return number.is_set
	|| (otu_hour24prbs_time_line_instances !=  nullptr && otu_hour24prbs_time_line_instances->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24PrbsHistories::OtuHour24PrbsHistory::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| (otu_hour24prbs_time_line_instances !=  nullptr && otu_hour24prbs_time_line_instances->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24PrbsHistories::OtuHour24PrbsHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otu-hour24prbs-history" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24PrbsHistories::OtuHour24PrbsHistory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24PrbsHistories::OtuHour24PrbsHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "otu-hour24prbs-time-line-instances")
    {
        if(otu_hour24prbs_time_line_instances == nullptr)
        {
            otu_hour24prbs_time_line_instances = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24PrbsHistories::OtuHour24PrbsHistory::OtuHour24PrbsTimeLineInstances>();
        }
        return otu_hour24prbs_time_line_instances;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24PrbsHistories::OtuHour24PrbsHistory::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(otu_hour24prbs_time_line_instances != nullptr)
    {
        children["otu-hour24prbs-time-line-instances"] = otu_hour24prbs_time_line_instances;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24PrbsHistories::OtuHour24PrbsHistory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24PrbsHistories::OtuHour24PrbsHistory::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24PrbsHistories::OtuHour24PrbsHistory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "otu-hour24prbs-time-line-instances" || name == "number")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24PrbsHistories::OtuHour24PrbsHistory::OtuHour24PrbsTimeLineInstances::OtuHour24PrbsTimeLineInstances()
{

    yang_name = "otu-hour24prbs-time-line-instances"; yang_parent_name = "otu-hour24prbs-history"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24PrbsHistories::OtuHour24PrbsHistory::OtuHour24PrbsTimeLineInstances::~OtuHour24PrbsTimeLineInstances()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24PrbsHistories::OtuHour24PrbsHistory::OtuHour24PrbsTimeLineInstances::has_data() const
{
    for (std::size_t index=0; index<otu_hour24prbs_time_line_instance.size(); index++)
    {
        if(otu_hour24prbs_time_line_instance[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24PrbsHistories::OtuHour24PrbsHistory::OtuHour24PrbsTimeLineInstances::has_operation() const
{
    for (std::size_t index=0; index<otu_hour24prbs_time_line_instance.size(); index++)
    {
        if(otu_hour24prbs_time_line_instance[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24PrbsHistories::OtuHour24PrbsHistory::OtuHour24PrbsTimeLineInstances::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otu-hour24prbs-time-line-instances";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24PrbsHistories::OtuHour24PrbsHistory::OtuHour24PrbsTimeLineInstances::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24PrbsHistories::OtuHour24PrbsHistory::OtuHour24PrbsTimeLineInstances::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "otu-hour24prbs-time-line-instance")
    {
        for(auto const & c : otu_hour24prbs_time_line_instance)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24PrbsHistories::OtuHour24PrbsHistory::OtuHour24PrbsTimeLineInstances::OtuHour24PrbsTimeLineInstance>();
        c->parent = this;
        otu_hour24prbs_time_line_instance.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24PrbsHistories::OtuHour24PrbsHistory::OtuHour24PrbsTimeLineInstances::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : otu_hour24prbs_time_line_instance)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24PrbsHistories::OtuHour24PrbsHistory::OtuHour24PrbsTimeLineInstances::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24PrbsHistories::OtuHour24PrbsHistory::OtuHour24PrbsTimeLineInstances::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24PrbsHistories::OtuHour24PrbsHistory::OtuHour24PrbsTimeLineInstances::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "otu-hour24prbs-time-line-instance")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24PrbsHistories::OtuHour24PrbsHistory::OtuHour24PrbsTimeLineInstances::OtuHour24PrbsTimeLineInstance::OtuHour24PrbsTimeLineInstance()
    :
    number{YType::int32, "number"},
    conf_patt{YType::enumeration, "conf-patt"},
    ebc{YType::uint64, "ebc"},
    found_at_time{YType::uint64, "found-at-time"},
    found_count{YType::uint32, "found-count"},
    index_{YType::uint32, "index"},
    last_clear15_min_time{YType::str, "last-clear15-min-time"},
    last_clear24_hr_time{YType::str, "last-clear24-hr-time"},
    last_clear_time{YType::str, "last-clear-time"},
    lost_at_time{YType::uint64, "lost-at-time"},
    lost_count{YType::uint32, "lost-count"},
    timestamp{YType::str, "timestamp"},
    valid{YType::boolean, "valid"}
    	,
    prbs_status(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24PrbsHistories::OtuHour24PrbsHistory::OtuHour24PrbsTimeLineInstances::OtuHour24PrbsTimeLineInstance::PrbsStatus>())
	,rcv_patt(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24PrbsHistories::OtuHour24PrbsHistory::OtuHour24PrbsTimeLineInstances::OtuHour24PrbsTimeLineInstance::RcvPatt>())
{
    prbs_status->parent = this;
    rcv_patt->parent = this;

    yang_name = "otu-hour24prbs-time-line-instance"; yang_parent_name = "otu-hour24prbs-time-line-instances"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24PrbsHistories::OtuHour24PrbsHistory::OtuHour24PrbsTimeLineInstances::OtuHour24PrbsTimeLineInstance::~OtuHour24PrbsTimeLineInstance()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24PrbsHistories::OtuHour24PrbsHistory::OtuHour24PrbsTimeLineInstances::OtuHour24PrbsTimeLineInstance::has_data() const
{
    return number.is_set
	|| conf_patt.is_set
	|| ebc.is_set
	|| found_at_time.is_set
	|| found_count.is_set
	|| index_.is_set
	|| last_clear15_min_time.is_set
	|| last_clear24_hr_time.is_set
	|| last_clear_time.is_set
	|| lost_at_time.is_set
	|| lost_count.is_set
	|| timestamp.is_set
	|| valid.is_set
	|| (prbs_status !=  nullptr && prbs_status->has_data())
	|| (rcv_patt !=  nullptr && rcv_patt->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24PrbsHistories::OtuHour24PrbsHistory::OtuHour24PrbsTimeLineInstances::OtuHour24PrbsTimeLineInstance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(conf_patt.yfilter)
	|| ydk::is_set(ebc.yfilter)
	|| ydk::is_set(found_at_time.yfilter)
	|| ydk::is_set(found_count.yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(last_clear15_min_time.yfilter)
	|| ydk::is_set(last_clear24_hr_time.yfilter)
	|| ydk::is_set(last_clear_time.yfilter)
	|| ydk::is_set(lost_at_time.yfilter)
	|| ydk::is_set(lost_count.yfilter)
	|| ydk::is_set(timestamp.yfilter)
	|| ydk::is_set(valid.yfilter)
	|| (prbs_status !=  nullptr && prbs_status->has_operation())
	|| (rcv_patt !=  nullptr && rcv_patt->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24PrbsHistories::OtuHour24PrbsHistory::OtuHour24PrbsTimeLineInstances::OtuHour24PrbsTimeLineInstance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otu-hour24prbs-time-line-instance" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24PrbsHistories::OtuHour24PrbsHistory::OtuHour24PrbsTimeLineInstances::OtuHour24PrbsTimeLineInstance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (conf_patt.is_set || is_set(conf_patt.yfilter)) leaf_name_data.push_back(conf_patt.get_name_leafdata());
    if (ebc.is_set || is_set(ebc.yfilter)) leaf_name_data.push_back(ebc.get_name_leafdata());
    if (found_at_time.is_set || is_set(found_at_time.yfilter)) leaf_name_data.push_back(found_at_time.get_name_leafdata());
    if (found_count.is_set || is_set(found_count.yfilter)) leaf_name_data.push_back(found_count.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (last_clear15_min_time.is_set || is_set(last_clear15_min_time.yfilter)) leaf_name_data.push_back(last_clear15_min_time.get_name_leafdata());
    if (last_clear24_hr_time.is_set || is_set(last_clear24_hr_time.yfilter)) leaf_name_data.push_back(last_clear24_hr_time.get_name_leafdata());
    if (last_clear_time.is_set || is_set(last_clear_time.yfilter)) leaf_name_data.push_back(last_clear_time.get_name_leafdata());
    if (lost_at_time.is_set || is_set(lost_at_time.yfilter)) leaf_name_data.push_back(lost_at_time.get_name_leafdata());
    if (lost_count.is_set || is_set(lost_count.yfilter)) leaf_name_data.push_back(lost_count.get_name_leafdata());
    if (timestamp.is_set || is_set(timestamp.yfilter)) leaf_name_data.push_back(timestamp.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24PrbsHistories::OtuHour24PrbsHistory::OtuHour24PrbsTimeLineInstances::OtuHour24PrbsTimeLineInstance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prbs-status")
    {
        if(prbs_status == nullptr)
        {
            prbs_status = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24PrbsHistories::OtuHour24PrbsHistory::OtuHour24PrbsTimeLineInstances::OtuHour24PrbsTimeLineInstance::PrbsStatus>();
        }
        return prbs_status;
    }

    if(child_yang_name == "rcv-patt")
    {
        if(rcv_patt == nullptr)
        {
            rcv_patt = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24PrbsHistories::OtuHour24PrbsHistory::OtuHour24PrbsTimeLineInstances::OtuHour24PrbsTimeLineInstance::RcvPatt>();
        }
        return rcv_patt;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24PrbsHistories::OtuHour24PrbsHistory::OtuHour24PrbsTimeLineInstances::OtuHour24PrbsTimeLineInstance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(prbs_status != nullptr)
    {
        children["prbs-status"] = prbs_status;
    }

    if(rcv_patt != nullptr)
    {
        children["rcv-patt"] = rcv_patt;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24PrbsHistories::OtuHour24PrbsHistory::OtuHour24PrbsTimeLineInstances::OtuHour24PrbsTimeLineInstance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "conf-patt")
    {
        conf_patt = value;
        conf_patt.value_namespace = name_space;
        conf_patt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ebc")
    {
        ebc = value;
        ebc.value_namespace = name_space;
        ebc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "found-at-time")
    {
        found_at_time = value;
        found_at_time.value_namespace = name_space;
        found_at_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "found-count")
    {
        found_count = value;
        found_count.value_namespace = name_space;
        found_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "last-clear-time")
    {
        last_clear_time = value;
        last_clear_time.value_namespace = name_space;
        last_clear_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lost-at-time")
    {
        lost_at_time = value;
        lost_at_time.value_namespace = name_space;
        lost_at_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lost-count")
    {
        lost_count = value;
        lost_count.value_namespace = name_space;
        lost_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timestamp")
    {
        timestamp = value;
        timestamp.value_namespace = name_space;
        timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24PrbsHistories::OtuHour24PrbsHistory::OtuHour24PrbsTimeLineInstances::OtuHour24PrbsTimeLineInstance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "conf-patt")
    {
        conf_patt.yfilter = yfilter;
    }
    if(value_path == "ebc")
    {
        ebc.yfilter = yfilter;
    }
    if(value_path == "found-at-time")
    {
        found_at_time.yfilter = yfilter;
    }
    if(value_path == "found-count")
    {
        found_count.yfilter = yfilter;
    }
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "last-clear15-min-time")
    {
        last_clear15_min_time.yfilter = yfilter;
    }
    if(value_path == "last-clear24-hr-time")
    {
        last_clear24_hr_time.yfilter = yfilter;
    }
    if(value_path == "last-clear-time")
    {
        last_clear_time.yfilter = yfilter;
    }
    if(value_path == "lost-at-time")
    {
        lost_at_time.yfilter = yfilter;
    }
    if(value_path == "lost-count")
    {
        lost_count.yfilter = yfilter;
    }
    if(value_path == "timestamp")
    {
        timestamp.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24PrbsHistories::OtuHour24PrbsHistory::OtuHour24PrbsTimeLineInstances::OtuHour24PrbsTimeLineInstance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prbs-status" || name == "rcv-patt" || name == "number" || name == "conf-patt" || name == "ebc" || name == "found-at-time" || name == "found-count" || name == "index" || name == "last-clear15-min-time" || name == "last-clear24-hr-time" || name == "last-clear-time" || name == "lost-at-time" || name == "lost-count" || name == "timestamp" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24PrbsHistories::OtuHour24PrbsHistory::OtuHour24PrbsTimeLineInstances::OtuHour24PrbsTimeLineInstance::PrbsStatus::PrbsStatus()
    :
    prbs_status{YType::enumeration, "prbs-status"},
    valid{YType::boolean, "valid"}
{

    yang_name = "prbs-status"; yang_parent_name = "otu-hour24prbs-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24PrbsHistories::OtuHour24PrbsHistory::OtuHour24PrbsTimeLineInstances::OtuHour24PrbsTimeLineInstance::PrbsStatus::~PrbsStatus()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24PrbsHistories::OtuHour24PrbsHistory::OtuHour24PrbsTimeLineInstances::OtuHour24PrbsTimeLineInstance::PrbsStatus::has_data() const
{
    return prbs_status.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24PrbsHistories::OtuHour24PrbsHistory::OtuHour24PrbsTimeLineInstances::OtuHour24PrbsTimeLineInstance::PrbsStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prbs_status.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24PrbsHistories::OtuHour24PrbsHistory::OtuHour24PrbsTimeLineInstances::OtuHour24PrbsTimeLineInstance::PrbsStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prbs-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24PrbsHistories::OtuHour24PrbsHistory::OtuHour24PrbsTimeLineInstances::OtuHour24PrbsTimeLineInstance::PrbsStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prbs_status.is_set || is_set(prbs_status.yfilter)) leaf_name_data.push_back(prbs_status.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24PrbsHistories::OtuHour24PrbsHistory::OtuHour24PrbsTimeLineInstances::OtuHour24PrbsTimeLineInstance::PrbsStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24PrbsHistories::OtuHour24PrbsHistory::OtuHour24PrbsTimeLineInstances::OtuHour24PrbsTimeLineInstance::PrbsStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24PrbsHistories::OtuHour24PrbsHistory::OtuHour24PrbsTimeLineInstances::OtuHour24PrbsTimeLineInstance::PrbsStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prbs-status")
    {
        prbs_status = value;
        prbs_status.value_namespace = name_space;
        prbs_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24PrbsHistories::OtuHour24PrbsHistory::OtuHour24PrbsTimeLineInstances::OtuHour24PrbsTimeLineInstance::PrbsStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prbs-status")
    {
        prbs_status.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24PrbsHistories::OtuHour24PrbsHistory::OtuHour24PrbsTimeLineInstances::OtuHour24PrbsTimeLineInstance::PrbsStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prbs-status" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24PrbsHistories::OtuHour24PrbsHistory::OtuHour24PrbsTimeLineInstances::OtuHour24PrbsTimeLineInstance::RcvPatt::RcvPatt()
    :
    rcv_patt{YType::enumeration, "rcv-patt"},
    valid{YType::boolean, "valid"}
{

    yang_name = "rcv-patt"; yang_parent_name = "otu-hour24prbs-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24PrbsHistories::OtuHour24PrbsHistory::OtuHour24PrbsTimeLineInstances::OtuHour24PrbsTimeLineInstance::RcvPatt::~RcvPatt()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24PrbsHistories::OtuHour24PrbsHistory::OtuHour24PrbsTimeLineInstances::OtuHour24PrbsTimeLineInstance::RcvPatt::has_data() const
{
    return rcv_patt.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24PrbsHistories::OtuHour24PrbsHistory::OtuHour24PrbsTimeLineInstances::OtuHour24PrbsTimeLineInstance::RcvPatt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rcv_patt.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24PrbsHistories::OtuHour24PrbsHistory::OtuHour24PrbsTimeLineInstances::OtuHour24PrbsTimeLineInstance::RcvPatt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rcv-patt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24PrbsHistories::OtuHour24PrbsHistory::OtuHour24PrbsTimeLineInstances::OtuHour24PrbsTimeLineInstance::RcvPatt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rcv_patt.is_set || is_set(rcv_patt.yfilter)) leaf_name_data.push_back(rcv_patt.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24PrbsHistories::OtuHour24PrbsHistory::OtuHour24PrbsTimeLineInstances::OtuHour24PrbsTimeLineInstance::RcvPatt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24PrbsHistories::OtuHour24PrbsHistory::OtuHour24PrbsTimeLineInstances::OtuHour24PrbsTimeLineInstance::RcvPatt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24PrbsHistories::OtuHour24PrbsHistory::OtuHour24PrbsTimeLineInstances::OtuHour24PrbsTimeLineInstance::RcvPatt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rcv-patt")
    {
        rcv_patt = value;
        rcv_patt.value_namespace = name_space;
        rcv_patt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24PrbsHistories::OtuHour24PrbsHistory::OtuHour24PrbsTimeLineInstances::OtuHour24PrbsTimeLineInstance::RcvPatt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rcv-patt")
    {
        rcv_patt.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24PrbsHistories::OtuHour24PrbsHistory::OtuHour24PrbsTimeLineInstances::OtuHour24PrbsTimeLineInstance::RcvPatt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rcv-patt" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15History()
    :
    otu_minute15fec_histories(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories>())
	,otu_minute15otn_histories(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories>())
	,otu_minute15prbs_histories(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15PrbsHistories>())
{
    otu_minute15fec_histories->parent = this;
    otu_minute15otn_histories->parent = this;
    otu_minute15prbs_histories->parent = this;

    yang_name = "otu-minute15-history"; yang_parent_name = "otu-port-history"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::~OtuMinute15History()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::has_data() const
{
    return (otu_minute15fec_histories !=  nullptr && otu_minute15fec_histories->has_data())
	|| (otu_minute15otn_histories !=  nullptr && otu_minute15otn_histories->has_data())
	|| (otu_minute15prbs_histories !=  nullptr && otu_minute15prbs_histories->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::has_operation() const
{
    return is_set(yfilter)
	|| (otu_minute15fec_histories !=  nullptr && otu_minute15fec_histories->has_operation())
	|| (otu_minute15otn_histories !=  nullptr && otu_minute15otn_histories->has_operation())
	|| (otu_minute15prbs_histories !=  nullptr && otu_minute15prbs_histories->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otu-minute15-history";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "otu-minute15fec-histories")
    {
        if(otu_minute15fec_histories == nullptr)
        {
            otu_minute15fec_histories = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories>();
        }
        return otu_minute15fec_histories;
    }

    if(child_yang_name == "otu-minute15otn-histories")
    {
        if(otu_minute15otn_histories == nullptr)
        {
            otu_minute15otn_histories = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories>();
        }
        return otu_minute15otn_histories;
    }

    if(child_yang_name == "otu-minute15prbs-histories")
    {
        if(otu_minute15prbs_histories == nullptr)
        {
            otu_minute15prbs_histories = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15PrbsHistories>();
        }
        return otu_minute15prbs_histories;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(otu_minute15fec_histories != nullptr)
    {
        children["otu-minute15fec-histories"] = otu_minute15fec_histories;
    }

    if(otu_minute15otn_histories != nullptr)
    {
        children["otu-minute15otn-histories"] = otu_minute15otn_histories;
    }

    if(otu_minute15prbs_histories != nullptr)
    {
        children["otu-minute15prbs-histories"] = otu_minute15prbs_histories;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "otu-minute15fec-histories" || name == "otu-minute15otn-histories" || name == "otu-minute15prbs-histories")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistories()
{

    yang_name = "otu-minute15fec-histories"; yang_parent_name = "otu-minute15-history"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::~OtuMinute15FecHistories()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::has_data() const
{
    for (std::size_t index=0; index<otu_minute15fec_history.size(); index++)
    {
        if(otu_minute15fec_history[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::has_operation() const
{
    for (std::size_t index=0; index<otu_minute15fec_history.size(); index++)
    {
        if(otu_minute15fec_history[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otu-minute15fec-histories";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "otu-minute15fec-history")
    {
        for(auto const & c : otu_minute15fec_history)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory>();
        c->parent = this;
        otu_minute15fec_history.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : otu_minute15fec_history)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "otu-minute15fec-history")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecHistory()
    :
    number{YType::int32, "number"}
    	,
    otu_minute15fec_time_line_instances(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances>())
{
    otu_minute15fec_time_line_instances->parent = this;

    yang_name = "otu-minute15fec-history"; yang_parent_name = "otu-minute15fec-histories"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::~OtuMinute15FecHistory()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::has_data() const
{
    return number.is_set
	|| (otu_minute15fec_time_line_instances !=  nullptr && otu_minute15fec_time_line_instances->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| (otu_minute15fec_time_line_instances !=  nullptr && otu_minute15fec_time_line_instances->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otu-minute15fec-history" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "otu-minute15fec-time-line-instances")
    {
        if(otu_minute15fec_time_line_instances == nullptr)
        {
            otu_minute15fec_time_line_instances = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances>();
        }
        return otu_minute15fec_time_line_instances;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(otu_minute15fec_time_line_instances != nullptr)
    {
        children["otu-minute15fec-time-line-instances"] = otu_minute15fec_time_line_instances;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "otu-minute15fec-time-line-instances" || name == "number")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstances()
{

    yang_name = "otu-minute15fec-time-line-instances"; yang_parent_name = "otu-minute15fec-history"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::~OtuMinute15FecTimeLineInstances()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::has_data() const
{
    for (std::size_t index=0; index<otu_minute15fec_time_line_instance.size(); index++)
    {
        if(otu_minute15fec_time_line_instance[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::has_operation() const
{
    for (std::size_t index=0; index<otu_minute15fec_time_line_instance.size(); index++)
    {
        if(otu_minute15fec_time_line_instance[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otu-minute15fec-time-line-instances";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "otu-minute15fec-time-line-instance")
    {
        for(auto const & c : otu_minute15fec_time_line_instance)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance>();
        c->parent = this;
        otu_minute15fec_time_line_instance.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : otu_minute15fec_time_line_instance)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "otu-minute15fec-time-line-instance")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::OtuMinute15FecTimeLineInstance()
    :
    number{YType::int32, "number"},
    index_{YType::uint32, "index"},
    last_clear15_min_time{YType::str, "last-clear15-min-time"},
    last_clear24_hr_time{YType::str, "last-clear24-hr-time"},
    last_clear30_sec_time{YType::str, "last-clear30-sec-time"},
    last_clear_time{YType::str, "last-clear-time"},
    sec30_support{YType::boolean, "sec30-support"},
    timestamp{YType::str, "timestamp"},
    valid{YType::boolean, "valid"}
    	,
    ec_bits(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::EcBits>())
	,post_fec_ber(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::PostFecBer>())
	,pre_fec_ber(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::PreFecBer>())
	,q(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::Q>())
	,qmargin(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::Qmargin>())
	,uc_words(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::UcWords>())
{
    ec_bits->parent = this;
    post_fec_ber->parent = this;
    pre_fec_ber->parent = this;
    q->parent = this;
    qmargin->parent = this;
    uc_words->parent = this;

    yang_name = "otu-minute15fec-time-line-instance"; yang_parent_name = "otu-minute15fec-time-line-instances"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::~OtuMinute15FecTimeLineInstance()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::has_data() const
{
    return number.is_set
	|| index_.is_set
	|| last_clear15_min_time.is_set
	|| last_clear24_hr_time.is_set
	|| last_clear30_sec_time.is_set
	|| last_clear_time.is_set
	|| sec30_support.is_set
	|| timestamp.is_set
	|| valid.is_set
	|| (ec_bits !=  nullptr && ec_bits->has_data())
	|| (post_fec_ber !=  nullptr && post_fec_ber->has_data())
	|| (pre_fec_ber !=  nullptr && pre_fec_ber->has_data())
	|| (q !=  nullptr && q->has_data())
	|| (qmargin !=  nullptr && qmargin->has_data())
	|| (uc_words !=  nullptr && uc_words->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(last_clear15_min_time.yfilter)
	|| ydk::is_set(last_clear24_hr_time.yfilter)
	|| ydk::is_set(last_clear30_sec_time.yfilter)
	|| ydk::is_set(last_clear_time.yfilter)
	|| ydk::is_set(sec30_support.yfilter)
	|| ydk::is_set(timestamp.yfilter)
	|| ydk::is_set(valid.yfilter)
	|| (ec_bits !=  nullptr && ec_bits->has_operation())
	|| (post_fec_ber !=  nullptr && post_fec_ber->has_operation())
	|| (pre_fec_ber !=  nullptr && pre_fec_ber->has_operation())
	|| (q !=  nullptr && q->has_operation())
	|| (qmargin !=  nullptr && qmargin->has_operation())
	|| (uc_words !=  nullptr && uc_words->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otu-minute15fec-time-line-instance" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (last_clear15_min_time.is_set || is_set(last_clear15_min_time.yfilter)) leaf_name_data.push_back(last_clear15_min_time.get_name_leafdata());
    if (last_clear24_hr_time.is_set || is_set(last_clear24_hr_time.yfilter)) leaf_name_data.push_back(last_clear24_hr_time.get_name_leafdata());
    if (last_clear30_sec_time.is_set || is_set(last_clear30_sec_time.yfilter)) leaf_name_data.push_back(last_clear30_sec_time.get_name_leafdata());
    if (last_clear_time.is_set || is_set(last_clear_time.yfilter)) leaf_name_data.push_back(last_clear_time.get_name_leafdata());
    if (sec30_support.is_set || is_set(sec30_support.yfilter)) leaf_name_data.push_back(sec30_support.get_name_leafdata());
    if (timestamp.is_set || is_set(timestamp.yfilter)) leaf_name_data.push_back(timestamp.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ec-bits")
    {
        if(ec_bits == nullptr)
        {
            ec_bits = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::EcBits>();
        }
        return ec_bits;
    }

    if(child_yang_name == "post-fec-ber")
    {
        if(post_fec_ber == nullptr)
        {
            post_fec_ber = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::PostFecBer>();
        }
        return post_fec_ber;
    }

    if(child_yang_name == "pre-fec-ber")
    {
        if(pre_fec_ber == nullptr)
        {
            pre_fec_ber = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::PreFecBer>();
        }
        return pre_fec_ber;
    }

    if(child_yang_name == "q")
    {
        if(q == nullptr)
        {
            q = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::Q>();
        }
        return q;
    }

    if(child_yang_name == "qmargin")
    {
        if(qmargin == nullptr)
        {
            qmargin = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::Qmargin>();
        }
        return qmargin;
    }

    if(child_yang_name == "uc-words")
    {
        if(uc_words == nullptr)
        {
            uc_words = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::UcWords>();
        }
        return uc_words;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ec_bits != nullptr)
    {
        children["ec-bits"] = ec_bits;
    }

    if(post_fec_ber != nullptr)
    {
        children["post-fec-ber"] = post_fec_ber;
    }

    if(pre_fec_ber != nullptr)
    {
        children["pre-fec-ber"] = pre_fec_ber;
    }

    if(q != nullptr)
    {
        children["q"] = q;
    }

    if(qmargin != nullptr)
    {
        children["qmargin"] = qmargin;
    }

    if(uc_words != nullptr)
    {
        children["uc-words"] = uc_words;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "last-clear30-sec-time")
    {
        last_clear30_sec_time = value;
        last_clear30_sec_time.value_namespace = name_space;
        last_clear30_sec_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-clear-time")
    {
        last_clear_time = value;
        last_clear_time.value_namespace = name_space;
        last_clear_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sec30-support")
    {
        sec30_support = value;
        sec30_support.value_namespace = name_space;
        sec30_support.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timestamp")
    {
        timestamp = value;
        timestamp.value_namespace = name_space;
        timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "last-clear15-min-time")
    {
        last_clear15_min_time.yfilter = yfilter;
    }
    if(value_path == "last-clear24-hr-time")
    {
        last_clear24_hr_time.yfilter = yfilter;
    }
    if(value_path == "last-clear30-sec-time")
    {
        last_clear30_sec_time.yfilter = yfilter;
    }
    if(value_path == "last-clear-time")
    {
        last_clear_time.yfilter = yfilter;
    }
    if(value_path == "sec30-support")
    {
        sec30_support.yfilter = yfilter;
    }
    if(value_path == "timestamp")
    {
        timestamp.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ec-bits" || name == "post-fec-ber" || name == "pre-fec-ber" || name == "q" || name == "qmargin" || name == "uc-words" || name == "number" || name == "index" || name == "last-clear15-min-time" || name == "last-clear24-hr-time" || name == "last-clear30-sec-time" || name == "last-clear-time" || name == "sec30-support" || name == "timestamp" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::EcBits::EcBits()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "ec-bits"; yang_parent_name = "otu-minute15fec-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::EcBits::~EcBits()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::EcBits::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::EcBits::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::EcBits::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ec-bits";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::EcBits::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::EcBits::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::EcBits::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::EcBits::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::EcBits::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::EcBits::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::PostFecBer::PostFecBer()
    :
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    minimum{YType::str, "minimum"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    minimum_threshold{YType::str, "minimum-threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "post-fec-ber"; yang_parent_name = "otu-minute15fec-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::PostFecBer::~PostFecBer()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::PostFecBer::has_data() const
{
    return average.is_set
	|| maximum.is_set
	|| maximum_tca_report.is_set
	|| maximum_threshold.is_set
	|| minimum.is_set
	|| minimum_tca_report.is_set
	|| minimum_threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::PostFecBer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(maximum_tca_report.yfilter)
	|| ydk::is_set(maximum_threshold.yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(minimum_tca_report.yfilter)
	|| ydk::is_set(minimum_threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::PostFecBer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "post-fec-ber";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::PostFecBer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.yfilter)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.yfilter)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.yfilter)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.yfilter)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::PostFecBer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::PostFecBer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::PostFecBer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
        maximum_tca_report.value_namespace = name_space;
        maximum_tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
        maximum_threshold.value_namespace = name_space;
        maximum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
        minimum_tca_report.value_namespace = name_space;
        minimum_tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
        minimum_threshold.value_namespace = name_space;
        minimum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::PostFecBer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "average")
    {
        average.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report.yfilter = yfilter;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold.yfilter = yfilter;
    }
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report.yfilter = yfilter;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::PostFecBer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "average" || name == "maximum" || name == "maximum-tca-report" || name == "maximum-threshold" || name == "minimum" || name == "minimum-tca-report" || name == "minimum-threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::PreFecBer::PreFecBer()
    :
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    minimum{YType::str, "minimum"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    minimum_threshold{YType::str, "minimum-threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "pre-fec-ber"; yang_parent_name = "otu-minute15fec-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::PreFecBer::~PreFecBer()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::PreFecBer::has_data() const
{
    return average.is_set
	|| maximum.is_set
	|| maximum_tca_report.is_set
	|| maximum_threshold.is_set
	|| minimum.is_set
	|| minimum_tca_report.is_set
	|| minimum_threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::PreFecBer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(maximum_tca_report.yfilter)
	|| ydk::is_set(maximum_threshold.yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(minimum_tca_report.yfilter)
	|| ydk::is_set(minimum_threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::PreFecBer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pre-fec-ber";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::PreFecBer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.yfilter)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.yfilter)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.yfilter)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.yfilter)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::PreFecBer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::PreFecBer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::PreFecBer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
        maximum_tca_report.value_namespace = name_space;
        maximum_tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
        maximum_threshold.value_namespace = name_space;
        maximum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
        minimum_tca_report.value_namespace = name_space;
        minimum_tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
        minimum_threshold.value_namespace = name_space;
        minimum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::PreFecBer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "average")
    {
        average.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report.yfilter = yfilter;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold.yfilter = yfilter;
    }
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report.yfilter = yfilter;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::PreFecBer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "average" || name == "maximum" || name == "maximum-tca-report" || name == "maximum-threshold" || name == "minimum" || name == "minimum-tca-report" || name == "minimum-threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::Q::Q()
    :
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    minimum{YType::str, "minimum"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    minimum_threshold{YType::str, "minimum-threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "q"; yang_parent_name = "otu-minute15fec-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::Q::~Q()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::Q::has_data() const
{
    return average.is_set
	|| maximum.is_set
	|| maximum_tca_report.is_set
	|| maximum_threshold.is_set
	|| minimum.is_set
	|| minimum_tca_report.is_set
	|| minimum_threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::Q::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(maximum_tca_report.yfilter)
	|| ydk::is_set(maximum_threshold.yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(minimum_tca_report.yfilter)
	|| ydk::is_set(minimum_threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::Q::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "q";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::Q::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.yfilter)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.yfilter)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.yfilter)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.yfilter)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::Q::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::Q::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::Q::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
        maximum_tca_report.value_namespace = name_space;
        maximum_tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
        maximum_threshold.value_namespace = name_space;
        maximum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
        minimum_tca_report.value_namespace = name_space;
        minimum_tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
        minimum_threshold.value_namespace = name_space;
        minimum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::Q::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "average")
    {
        average.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report.yfilter = yfilter;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold.yfilter = yfilter;
    }
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report.yfilter = yfilter;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::Q::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "average" || name == "maximum" || name == "maximum-tca-report" || name == "maximum-threshold" || name == "minimum" || name == "minimum-tca-report" || name == "minimum-threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::Qmargin::Qmargin()
    :
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    minimum{YType::str, "minimum"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    minimum_threshold{YType::str, "minimum-threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "qmargin"; yang_parent_name = "otu-minute15fec-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::Qmargin::~Qmargin()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::Qmargin::has_data() const
{
    return average.is_set
	|| maximum.is_set
	|| maximum_tca_report.is_set
	|| maximum_threshold.is_set
	|| minimum.is_set
	|| minimum_tca_report.is_set
	|| minimum_threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::Qmargin::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(maximum_tca_report.yfilter)
	|| ydk::is_set(maximum_threshold.yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(minimum_tca_report.yfilter)
	|| ydk::is_set(minimum_threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::Qmargin::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qmargin";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::Qmargin::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.yfilter)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.yfilter)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.yfilter)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.yfilter)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::Qmargin::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::Qmargin::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::Qmargin::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
        maximum_tca_report.value_namespace = name_space;
        maximum_tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
        maximum_threshold.value_namespace = name_space;
        maximum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
        minimum_tca_report.value_namespace = name_space;
        minimum_tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
        minimum_threshold.value_namespace = name_space;
        minimum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::Qmargin::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "average")
    {
        average.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report.yfilter = yfilter;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold.yfilter = yfilter;
    }
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report.yfilter = yfilter;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::Qmargin::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "average" || name == "maximum" || name == "maximum-tca-report" || name == "maximum-threshold" || name == "minimum" || name == "minimum-tca-report" || name == "minimum-threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::UcWords::UcWords()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "uc-words"; yang_parent_name = "otu-minute15fec-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::UcWords::~UcWords()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::UcWords::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::UcWords::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::UcWords::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uc-words";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::UcWords::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::UcWords::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::UcWords::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::UcWords::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::UcWords::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::UcWords::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistories()
{

    yang_name = "otu-minute15otn-histories"; yang_parent_name = "otu-minute15-history"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::~OtuMinute15OtnHistories()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::has_data() const
{
    for (std::size_t index=0; index<otu_minute15otn_history.size(); index++)
    {
        if(otu_minute15otn_history[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::has_operation() const
{
    for (std::size_t index=0; index<otu_minute15otn_history.size(); index++)
    {
        if(otu_minute15otn_history[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otu-minute15otn-histories";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "otu-minute15otn-history")
    {
        for(auto const & c : otu_minute15otn_history)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory>();
        c->parent = this;
        otu_minute15otn_history.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : otu_minute15otn_history)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "otu-minute15otn-history")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnHistory()
    :
    number{YType::int32, "number"}
    	,
    otu_minute15otn_time_line_instances(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances>())
{
    otu_minute15otn_time_line_instances->parent = this;

    yang_name = "otu-minute15otn-history"; yang_parent_name = "otu-minute15otn-histories"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::~OtuMinute15OtnHistory()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::has_data() const
{
    return number.is_set
	|| (otu_minute15otn_time_line_instances !=  nullptr && otu_minute15otn_time_line_instances->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| (otu_minute15otn_time_line_instances !=  nullptr && otu_minute15otn_time_line_instances->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otu-minute15otn-history" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "otu-minute15otn-time-line-instances")
    {
        if(otu_minute15otn_time_line_instances == nullptr)
        {
            otu_minute15otn_time_line_instances = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances>();
        }
        return otu_minute15otn_time_line_instances;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(otu_minute15otn_time_line_instances != nullptr)
    {
        children["otu-minute15otn-time-line-instances"] = otu_minute15otn_time_line_instances;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "otu-minute15otn-time-line-instances" || name == "number")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstances()
{

    yang_name = "otu-minute15otn-time-line-instances"; yang_parent_name = "otu-minute15otn-history"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::~OtuMinute15OtnTimeLineInstances()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::has_data() const
{
    for (std::size_t index=0; index<otu_minute15otn_time_line_instance.size(); index++)
    {
        if(otu_minute15otn_time_line_instance[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::has_operation() const
{
    for (std::size_t index=0; index<otu_minute15otn_time_line_instance.size(); index++)
    {
        if(otu_minute15otn_time_line_instance[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otu-minute15otn-time-line-instances";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "otu-minute15otn-time-line-instance")
    {
        for(auto const & c : otu_minute15otn_time_line_instance)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance>();
        c->parent = this;
        otu_minute15otn_time_line_instance.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : otu_minute15otn_time_line_instance)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "otu-minute15otn-time-line-instance")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::OtuMinute15OtnTimeLineInstance()
    :
    number{YType::int32, "number"},
    index_{YType::uint32, "index"},
    last_clear15_min_time{YType::str, "last-clear15-min-time"},
    last_clear24_hr_time{YType::str, "last-clear24-hr-time"},
    last_clear30_sec_time{YType::str, "last-clear30-sec-time"},
    last_clear_time{YType::str, "last-clear-time"},
    sec30_support{YType::boolean, "sec30-support"},
    timestamp{YType::str, "timestamp"},
    valid{YType::boolean, "valid"}
    	,
    bbe_fe(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::BbeFe>())
	,bbe_ne(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::BbeNe>())
	,bber_fe(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::BberFe>())
	,bber_ne(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::BberNe>())
	,es_fe(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::EsFe>())
	,es_ne(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::EsNe>())
	,esr_fe(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::EsrFe>())
	,esr_ne(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::EsrNe>())
	,fc_fe(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::FcFe>())
	,fc_ne(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::FcNe>())
	,lbc(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::Lbc>())
	,ses_fe(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::SesFe>())
	,ses_ne(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::SesNe>())
	,sesr_fe(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::SesrFe>())
	,sesr_ne(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::SesrNe>())
	,uas_fe(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::UasFe>())
	,uas_ne(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::UasNe>())
{
    bbe_fe->parent = this;
    bbe_ne->parent = this;
    bber_fe->parent = this;
    bber_ne->parent = this;
    es_fe->parent = this;
    es_ne->parent = this;
    esr_fe->parent = this;
    esr_ne->parent = this;
    fc_fe->parent = this;
    fc_ne->parent = this;
    lbc->parent = this;
    ses_fe->parent = this;
    ses_ne->parent = this;
    sesr_fe->parent = this;
    sesr_ne->parent = this;
    uas_fe->parent = this;
    uas_ne->parent = this;

    yang_name = "otu-minute15otn-time-line-instance"; yang_parent_name = "otu-minute15otn-time-line-instances"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::~OtuMinute15OtnTimeLineInstance()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::has_data() const
{
    return number.is_set
	|| index_.is_set
	|| last_clear15_min_time.is_set
	|| last_clear24_hr_time.is_set
	|| last_clear30_sec_time.is_set
	|| last_clear_time.is_set
	|| sec30_support.is_set
	|| timestamp.is_set
	|| valid.is_set
	|| (bbe_fe !=  nullptr && bbe_fe->has_data())
	|| (bbe_ne !=  nullptr && bbe_ne->has_data())
	|| (bber_fe !=  nullptr && bber_fe->has_data())
	|| (bber_ne !=  nullptr && bber_ne->has_data())
	|| (es_fe !=  nullptr && es_fe->has_data())
	|| (es_ne !=  nullptr && es_ne->has_data())
	|| (esr_fe !=  nullptr && esr_fe->has_data())
	|| (esr_ne !=  nullptr && esr_ne->has_data())
	|| (fc_fe !=  nullptr && fc_fe->has_data())
	|| (fc_ne !=  nullptr && fc_ne->has_data())
	|| (lbc !=  nullptr && lbc->has_data())
	|| (ses_fe !=  nullptr && ses_fe->has_data())
	|| (ses_ne !=  nullptr && ses_ne->has_data())
	|| (sesr_fe !=  nullptr && sesr_fe->has_data())
	|| (sesr_ne !=  nullptr && sesr_ne->has_data())
	|| (uas_fe !=  nullptr && uas_fe->has_data())
	|| (uas_ne !=  nullptr && uas_ne->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(last_clear15_min_time.yfilter)
	|| ydk::is_set(last_clear24_hr_time.yfilter)
	|| ydk::is_set(last_clear30_sec_time.yfilter)
	|| ydk::is_set(last_clear_time.yfilter)
	|| ydk::is_set(sec30_support.yfilter)
	|| ydk::is_set(timestamp.yfilter)
	|| ydk::is_set(valid.yfilter)
	|| (bbe_fe !=  nullptr && bbe_fe->has_operation())
	|| (bbe_ne !=  nullptr && bbe_ne->has_operation())
	|| (bber_fe !=  nullptr && bber_fe->has_operation())
	|| (bber_ne !=  nullptr && bber_ne->has_operation())
	|| (es_fe !=  nullptr && es_fe->has_operation())
	|| (es_ne !=  nullptr && es_ne->has_operation())
	|| (esr_fe !=  nullptr && esr_fe->has_operation())
	|| (esr_ne !=  nullptr && esr_ne->has_operation())
	|| (fc_fe !=  nullptr && fc_fe->has_operation())
	|| (fc_ne !=  nullptr && fc_ne->has_operation())
	|| (lbc !=  nullptr && lbc->has_operation())
	|| (ses_fe !=  nullptr && ses_fe->has_operation())
	|| (ses_ne !=  nullptr && ses_ne->has_operation())
	|| (sesr_fe !=  nullptr && sesr_fe->has_operation())
	|| (sesr_ne !=  nullptr && sesr_ne->has_operation())
	|| (uas_fe !=  nullptr && uas_fe->has_operation())
	|| (uas_ne !=  nullptr && uas_ne->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otu-minute15otn-time-line-instance" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (last_clear15_min_time.is_set || is_set(last_clear15_min_time.yfilter)) leaf_name_data.push_back(last_clear15_min_time.get_name_leafdata());
    if (last_clear24_hr_time.is_set || is_set(last_clear24_hr_time.yfilter)) leaf_name_data.push_back(last_clear24_hr_time.get_name_leafdata());
    if (last_clear30_sec_time.is_set || is_set(last_clear30_sec_time.yfilter)) leaf_name_data.push_back(last_clear30_sec_time.get_name_leafdata());
    if (last_clear_time.is_set || is_set(last_clear_time.yfilter)) leaf_name_data.push_back(last_clear_time.get_name_leafdata());
    if (sec30_support.is_set || is_set(sec30_support.yfilter)) leaf_name_data.push_back(sec30_support.get_name_leafdata());
    if (timestamp.is_set || is_set(timestamp.yfilter)) leaf_name_data.push_back(timestamp.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bbe-fe")
    {
        if(bbe_fe == nullptr)
        {
            bbe_fe = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::BbeFe>();
        }
        return bbe_fe;
    }

    if(child_yang_name == "bbe-ne")
    {
        if(bbe_ne == nullptr)
        {
            bbe_ne = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::BbeNe>();
        }
        return bbe_ne;
    }

    if(child_yang_name == "bber-fe")
    {
        if(bber_fe == nullptr)
        {
            bber_fe = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::BberFe>();
        }
        return bber_fe;
    }

    if(child_yang_name == "bber-ne")
    {
        if(bber_ne == nullptr)
        {
            bber_ne = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::BberNe>();
        }
        return bber_ne;
    }

    if(child_yang_name == "es-fe")
    {
        if(es_fe == nullptr)
        {
            es_fe = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::EsFe>();
        }
        return es_fe;
    }

    if(child_yang_name == "es-ne")
    {
        if(es_ne == nullptr)
        {
            es_ne = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::EsNe>();
        }
        return es_ne;
    }

    if(child_yang_name == "esr-fe")
    {
        if(esr_fe == nullptr)
        {
            esr_fe = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::EsrFe>();
        }
        return esr_fe;
    }

    if(child_yang_name == "esr-ne")
    {
        if(esr_ne == nullptr)
        {
            esr_ne = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::EsrNe>();
        }
        return esr_ne;
    }

    if(child_yang_name == "fc-fe")
    {
        if(fc_fe == nullptr)
        {
            fc_fe = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::FcFe>();
        }
        return fc_fe;
    }

    if(child_yang_name == "fc-ne")
    {
        if(fc_ne == nullptr)
        {
            fc_ne = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::FcNe>();
        }
        return fc_ne;
    }

    if(child_yang_name == "lbc")
    {
        if(lbc == nullptr)
        {
            lbc = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::Lbc>();
        }
        return lbc;
    }

    if(child_yang_name == "ses-fe")
    {
        if(ses_fe == nullptr)
        {
            ses_fe = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::SesFe>();
        }
        return ses_fe;
    }

    if(child_yang_name == "ses-ne")
    {
        if(ses_ne == nullptr)
        {
            ses_ne = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::SesNe>();
        }
        return ses_ne;
    }

    if(child_yang_name == "sesr-fe")
    {
        if(sesr_fe == nullptr)
        {
            sesr_fe = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::SesrFe>();
        }
        return sesr_fe;
    }

    if(child_yang_name == "sesr-ne")
    {
        if(sesr_ne == nullptr)
        {
            sesr_ne = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::SesrNe>();
        }
        return sesr_ne;
    }

    if(child_yang_name == "uas-fe")
    {
        if(uas_fe == nullptr)
        {
            uas_fe = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::UasFe>();
        }
        return uas_fe;
    }

    if(child_yang_name == "uas-ne")
    {
        if(uas_ne == nullptr)
        {
            uas_ne = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::UasNe>();
        }
        return uas_ne;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bbe_fe != nullptr)
    {
        children["bbe-fe"] = bbe_fe;
    }

    if(bbe_ne != nullptr)
    {
        children["bbe-ne"] = bbe_ne;
    }

    if(bber_fe != nullptr)
    {
        children["bber-fe"] = bber_fe;
    }

    if(bber_ne != nullptr)
    {
        children["bber-ne"] = bber_ne;
    }

    if(es_fe != nullptr)
    {
        children["es-fe"] = es_fe;
    }

    if(es_ne != nullptr)
    {
        children["es-ne"] = es_ne;
    }

    if(esr_fe != nullptr)
    {
        children["esr-fe"] = esr_fe;
    }

    if(esr_ne != nullptr)
    {
        children["esr-ne"] = esr_ne;
    }

    if(fc_fe != nullptr)
    {
        children["fc-fe"] = fc_fe;
    }

    if(fc_ne != nullptr)
    {
        children["fc-ne"] = fc_ne;
    }

    if(lbc != nullptr)
    {
        children["lbc"] = lbc;
    }

    if(ses_fe != nullptr)
    {
        children["ses-fe"] = ses_fe;
    }

    if(ses_ne != nullptr)
    {
        children["ses-ne"] = ses_ne;
    }

    if(sesr_fe != nullptr)
    {
        children["sesr-fe"] = sesr_fe;
    }

    if(sesr_ne != nullptr)
    {
        children["sesr-ne"] = sesr_ne;
    }

    if(uas_fe != nullptr)
    {
        children["uas-fe"] = uas_fe;
    }

    if(uas_ne != nullptr)
    {
        children["uas-ne"] = uas_ne;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "last-clear30-sec-time")
    {
        last_clear30_sec_time = value;
        last_clear30_sec_time.value_namespace = name_space;
        last_clear30_sec_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-clear-time")
    {
        last_clear_time = value;
        last_clear_time.value_namespace = name_space;
        last_clear_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sec30-support")
    {
        sec30_support = value;
        sec30_support.value_namespace = name_space;
        sec30_support.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timestamp")
    {
        timestamp = value;
        timestamp.value_namespace = name_space;
        timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "last-clear15-min-time")
    {
        last_clear15_min_time.yfilter = yfilter;
    }
    if(value_path == "last-clear24-hr-time")
    {
        last_clear24_hr_time.yfilter = yfilter;
    }
    if(value_path == "last-clear30-sec-time")
    {
        last_clear30_sec_time.yfilter = yfilter;
    }
    if(value_path == "last-clear-time")
    {
        last_clear_time.yfilter = yfilter;
    }
    if(value_path == "sec30-support")
    {
        sec30_support.yfilter = yfilter;
    }
    if(value_path == "timestamp")
    {
        timestamp.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bbe-fe" || name == "bbe-ne" || name == "bber-fe" || name == "bber-ne" || name == "es-fe" || name == "es-ne" || name == "esr-fe" || name == "esr-ne" || name == "fc-fe" || name == "fc-ne" || name == "lbc" || name == "ses-fe" || name == "ses-ne" || name == "sesr-fe" || name == "sesr-ne" || name == "uas-fe" || name == "uas-ne" || name == "number" || name == "index" || name == "last-clear15-min-time" || name == "last-clear24-hr-time" || name == "last-clear30-sec-time" || name == "last-clear-time" || name == "sec30-support" || name == "timestamp" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::BbeFe::BbeFe()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{

    yang_name = "bbe-fe"; yang_parent_name = "otu-minute15otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::BbeFe::~BbeFe()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::BbeFe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::BbeFe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::BbeFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bbe-fe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::BbeFe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::BbeFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::BbeFe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::BbeFe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::BbeFe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::BbeFe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::BbeNe::BbeNe()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{

    yang_name = "bbe-ne"; yang_parent_name = "otu-minute15otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::BbeNe::~BbeNe()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::BbeNe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::BbeNe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::BbeNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bbe-ne";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::BbeNe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::BbeNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::BbeNe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::BbeNe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::BbeNe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::BbeNe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::BberFe::BberFe()
    :
    data{YType::str, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::str, "threshold"}
{

    yang_name = "bber-fe"; yang_parent_name = "otu-minute15otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::BberFe::~BberFe()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::BberFe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::BberFe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::BberFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bber-fe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::BberFe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::BberFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::BberFe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::BberFe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::BberFe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::BberFe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::BberNe::BberNe()
    :
    data{YType::str, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::str, "threshold"}
{

    yang_name = "bber-ne"; yang_parent_name = "otu-minute15otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::BberNe::~BberNe()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::BberNe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::BberNe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::BberNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bber-ne";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::BberNe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::BberNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::BberNe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::BberNe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::BberNe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::BberNe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::EsFe::EsFe()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{

    yang_name = "es-fe"; yang_parent_name = "otu-minute15otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::EsFe::~EsFe()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::EsFe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::EsFe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::EsFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "es-fe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::EsFe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::EsFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::EsFe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::EsFe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::EsFe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::EsFe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::EsNe::EsNe()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{

    yang_name = "es-ne"; yang_parent_name = "otu-minute15otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::EsNe::~EsNe()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::EsNe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::EsNe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::EsNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "es-ne";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::EsNe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::EsNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::EsNe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::EsNe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::EsNe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::EsNe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::EsrFe::EsrFe()
    :
    data{YType::str, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::str, "threshold"}
{

    yang_name = "esr-fe"; yang_parent_name = "otu-minute15otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::EsrFe::~EsrFe()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::EsrFe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::EsrFe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::EsrFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "esr-fe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::EsrFe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::EsrFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::EsrFe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::EsrFe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::EsrFe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::EsrFe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::EsrNe::EsrNe()
    :
    data{YType::str, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::str, "threshold"}
{

    yang_name = "esr-ne"; yang_parent_name = "otu-minute15otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::EsrNe::~EsrNe()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::EsrNe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::EsrNe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::EsrNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "esr-ne";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::EsrNe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::EsrNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::EsrNe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::EsrNe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::EsrNe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::EsrNe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::FcFe::FcFe()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{

    yang_name = "fc-fe"; yang_parent_name = "otu-minute15otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::FcFe::~FcFe()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::FcFe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::FcFe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::FcFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fc-fe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::FcFe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::FcFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::FcFe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::FcFe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::FcFe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::FcFe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::FcNe::FcNe()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{

    yang_name = "fc-ne"; yang_parent_name = "otu-minute15otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::FcNe::~FcNe()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::FcNe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::FcNe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::FcNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fc-ne";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::FcNe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::FcNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::FcNe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::FcNe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::FcNe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::FcNe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::Lbc::Lbc()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{

    yang_name = "lbc"; yang_parent_name = "otu-minute15otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::Lbc::~Lbc()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::Lbc::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::Lbc::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::Lbc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lbc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::Lbc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::Lbc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::Lbc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::Lbc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::Lbc::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::Lbc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::SesFe::SesFe()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{

    yang_name = "ses-fe"; yang_parent_name = "otu-minute15otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::SesFe::~SesFe()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::SesFe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::SesFe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::SesFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ses-fe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::SesFe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::SesFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::SesFe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::SesFe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::SesFe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::SesFe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::SesNe::SesNe()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{

    yang_name = "ses-ne"; yang_parent_name = "otu-minute15otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::SesNe::~SesNe()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::SesNe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::SesNe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::SesNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ses-ne";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::SesNe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::SesNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::SesNe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::SesNe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::SesNe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::SesNe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::SesrFe::SesrFe()
    :
    data{YType::str, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::str, "threshold"}
{

    yang_name = "sesr-fe"; yang_parent_name = "otu-minute15otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::SesrFe::~SesrFe()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::SesrFe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::SesrFe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::SesrFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sesr-fe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::SesrFe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::SesrFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::SesrFe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::SesrFe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::SesrFe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::SesrFe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::SesrNe::SesrNe()
    :
    data{YType::str, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::str, "threshold"}
{

    yang_name = "sesr-ne"; yang_parent_name = "otu-minute15otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::SesrNe::~SesrNe()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::SesrNe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::SesrNe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::SesrNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sesr-ne";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::SesrNe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::SesrNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::SesrNe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::SesrNe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::SesrNe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::SesrNe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::UasFe::UasFe()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{

    yang_name = "uas-fe"; yang_parent_name = "otu-minute15otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::UasFe::~UasFe()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::UasFe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::UasFe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::UasFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uas-fe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::UasFe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::UasFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::UasFe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::UasFe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::UasFe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::UasFe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::UasNe::UasNe()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{

    yang_name = "uas-ne"; yang_parent_name = "otu-minute15otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::UasNe::~UasNe()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::UasNe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::UasNe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::UasNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uas-ne";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::UasNe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::UasNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::UasNe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::UasNe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::UasNe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::UasNe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15PrbsHistories::OtuMinute15PrbsHistories()
{

    yang_name = "otu-minute15prbs-histories"; yang_parent_name = "otu-minute15-history"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15PrbsHistories::~OtuMinute15PrbsHistories()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15PrbsHistories::has_data() const
{
    for (std::size_t index=0; index<otu_minute15prbs_history.size(); index++)
    {
        if(otu_minute15prbs_history[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15PrbsHistories::has_operation() const
{
    for (std::size_t index=0; index<otu_minute15prbs_history.size(); index++)
    {
        if(otu_minute15prbs_history[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15PrbsHistories::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otu-minute15prbs-histories";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15PrbsHistories::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15PrbsHistories::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "otu-minute15prbs-history")
    {
        for(auto const & c : otu_minute15prbs_history)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15PrbsHistories::OtuMinute15PrbsHistory>();
        c->parent = this;
        otu_minute15prbs_history.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15PrbsHistories::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : otu_minute15prbs_history)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15PrbsHistories::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15PrbsHistories::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15PrbsHistories::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "otu-minute15prbs-history")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15PrbsHistories::OtuMinute15PrbsHistory::OtuMinute15PrbsHistory()
    :
    number{YType::int32, "number"}
    	,
    otu_minute15prbs_time_line_instances(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15PrbsHistories::OtuMinute15PrbsHistory::OtuMinute15PrbsTimeLineInstances>())
{
    otu_minute15prbs_time_line_instances->parent = this;

    yang_name = "otu-minute15prbs-history"; yang_parent_name = "otu-minute15prbs-histories"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15PrbsHistories::OtuMinute15PrbsHistory::~OtuMinute15PrbsHistory()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15PrbsHistories::OtuMinute15PrbsHistory::has_data() const
{
    return number.is_set
	|| (otu_minute15prbs_time_line_instances !=  nullptr && otu_minute15prbs_time_line_instances->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15PrbsHistories::OtuMinute15PrbsHistory::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| (otu_minute15prbs_time_line_instances !=  nullptr && otu_minute15prbs_time_line_instances->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15PrbsHistories::OtuMinute15PrbsHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otu-minute15prbs-history" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15PrbsHistories::OtuMinute15PrbsHistory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15PrbsHistories::OtuMinute15PrbsHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "otu-minute15prbs-time-line-instances")
    {
        if(otu_minute15prbs_time_line_instances == nullptr)
        {
            otu_minute15prbs_time_line_instances = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15PrbsHistories::OtuMinute15PrbsHistory::OtuMinute15PrbsTimeLineInstances>();
        }
        return otu_minute15prbs_time_line_instances;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15PrbsHistories::OtuMinute15PrbsHistory::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(otu_minute15prbs_time_line_instances != nullptr)
    {
        children["otu-minute15prbs-time-line-instances"] = otu_minute15prbs_time_line_instances;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15PrbsHistories::OtuMinute15PrbsHistory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15PrbsHistories::OtuMinute15PrbsHistory::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15PrbsHistories::OtuMinute15PrbsHistory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "otu-minute15prbs-time-line-instances" || name == "number")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15PrbsHistories::OtuMinute15PrbsHistory::OtuMinute15PrbsTimeLineInstances::OtuMinute15PrbsTimeLineInstances()
{

    yang_name = "otu-minute15prbs-time-line-instances"; yang_parent_name = "otu-minute15prbs-history"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15PrbsHistories::OtuMinute15PrbsHistory::OtuMinute15PrbsTimeLineInstances::~OtuMinute15PrbsTimeLineInstances()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15PrbsHistories::OtuMinute15PrbsHistory::OtuMinute15PrbsTimeLineInstances::has_data() const
{
    for (std::size_t index=0; index<otu_minute15prbs_time_line_instance.size(); index++)
    {
        if(otu_minute15prbs_time_line_instance[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15PrbsHistories::OtuMinute15PrbsHistory::OtuMinute15PrbsTimeLineInstances::has_operation() const
{
    for (std::size_t index=0; index<otu_minute15prbs_time_line_instance.size(); index++)
    {
        if(otu_minute15prbs_time_line_instance[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15PrbsHistories::OtuMinute15PrbsHistory::OtuMinute15PrbsTimeLineInstances::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otu-minute15prbs-time-line-instances";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15PrbsHistories::OtuMinute15PrbsHistory::OtuMinute15PrbsTimeLineInstances::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15PrbsHistories::OtuMinute15PrbsHistory::OtuMinute15PrbsTimeLineInstances::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "otu-minute15prbs-time-line-instance")
    {
        for(auto const & c : otu_minute15prbs_time_line_instance)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15PrbsHistories::OtuMinute15PrbsHistory::OtuMinute15PrbsTimeLineInstances::OtuMinute15PrbsTimeLineInstance>();
        c->parent = this;
        otu_minute15prbs_time_line_instance.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15PrbsHistories::OtuMinute15PrbsHistory::OtuMinute15PrbsTimeLineInstances::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : otu_minute15prbs_time_line_instance)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15PrbsHistories::OtuMinute15PrbsHistory::OtuMinute15PrbsTimeLineInstances::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15PrbsHistories::OtuMinute15PrbsHistory::OtuMinute15PrbsTimeLineInstances::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15PrbsHistories::OtuMinute15PrbsHistory::OtuMinute15PrbsTimeLineInstances::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "otu-minute15prbs-time-line-instance")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15PrbsHistories::OtuMinute15PrbsHistory::OtuMinute15PrbsTimeLineInstances::OtuMinute15PrbsTimeLineInstance::OtuMinute15PrbsTimeLineInstance()
    :
    number{YType::int32, "number"},
    conf_patt{YType::enumeration, "conf-patt"},
    ebc{YType::uint64, "ebc"},
    found_at_time{YType::uint64, "found-at-time"},
    found_count{YType::uint32, "found-count"},
    index_{YType::uint32, "index"},
    last_clear15_min_time{YType::str, "last-clear15-min-time"},
    last_clear24_hr_time{YType::str, "last-clear24-hr-time"},
    last_clear_time{YType::str, "last-clear-time"},
    lost_at_time{YType::uint64, "lost-at-time"},
    lost_count{YType::uint32, "lost-count"},
    timestamp{YType::str, "timestamp"},
    valid{YType::boolean, "valid"}
    	,
    prbs_status(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15PrbsHistories::OtuMinute15PrbsHistory::OtuMinute15PrbsTimeLineInstances::OtuMinute15PrbsTimeLineInstance::PrbsStatus>())
	,rcv_patt(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15PrbsHistories::OtuMinute15PrbsHistory::OtuMinute15PrbsTimeLineInstances::OtuMinute15PrbsTimeLineInstance::RcvPatt>())
{
    prbs_status->parent = this;
    rcv_patt->parent = this;

    yang_name = "otu-minute15prbs-time-line-instance"; yang_parent_name = "otu-minute15prbs-time-line-instances"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15PrbsHistories::OtuMinute15PrbsHistory::OtuMinute15PrbsTimeLineInstances::OtuMinute15PrbsTimeLineInstance::~OtuMinute15PrbsTimeLineInstance()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15PrbsHistories::OtuMinute15PrbsHistory::OtuMinute15PrbsTimeLineInstances::OtuMinute15PrbsTimeLineInstance::has_data() const
{
    return number.is_set
	|| conf_patt.is_set
	|| ebc.is_set
	|| found_at_time.is_set
	|| found_count.is_set
	|| index_.is_set
	|| last_clear15_min_time.is_set
	|| last_clear24_hr_time.is_set
	|| last_clear_time.is_set
	|| lost_at_time.is_set
	|| lost_count.is_set
	|| timestamp.is_set
	|| valid.is_set
	|| (prbs_status !=  nullptr && prbs_status->has_data())
	|| (rcv_patt !=  nullptr && rcv_patt->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15PrbsHistories::OtuMinute15PrbsHistory::OtuMinute15PrbsTimeLineInstances::OtuMinute15PrbsTimeLineInstance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(conf_patt.yfilter)
	|| ydk::is_set(ebc.yfilter)
	|| ydk::is_set(found_at_time.yfilter)
	|| ydk::is_set(found_count.yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(last_clear15_min_time.yfilter)
	|| ydk::is_set(last_clear24_hr_time.yfilter)
	|| ydk::is_set(last_clear_time.yfilter)
	|| ydk::is_set(lost_at_time.yfilter)
	|| ydk::is_set(lost_count.yfilter)
	|| ydk::is_set(timestamp.yfilter)
	|| ydk::is_set(valid.yfilter)
	|| (prbs_status !=  nullptr && prbs_status->has_operation())
	|| (rcv_patt !=  nullptr && rcv_patt->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15PrbsHistories::OtuMinute15PrbsHistory::OtuMinute15PrbsTimeLineInstances::OtuMinute15PrbsTimeLineInstance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otu-minute15prbs-time-line-instance" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15PrbsHistories::OtuMinute15PrbsHistory::OtuMinute15PrbsTimeLineInstances::OtuMinute15PrbsTimeLineInstance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (conf_patt.is_set || is_set(conf_patt.yfilter)) leaf_name_data.push_back(conf_patt.get_name_leafdata());
    if (ebc.is_set || is_set(ebc.yfilter)) leaf_name_data.push_back(ebc.get_name_leafdata());
    if (found_at_time.is_set || is_set(found_at_time.yfilter)) leaf_name_data.push_back(found_at_time.get_name_leafdata());
    if (found_count.is_set || is_set(found_count.yfilter)) leaf_name_data.push_back(found_count.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (last_clear15_min_time.is_set || is_set(last_clear15_min_time.yfilter)) leaf_name_data.push_back(last_clear15_min_time.get_name_leafdata());
    if (last_clear24_hr_time.is_set || is_set(last_clear24_hr_time.yfilter)) leaf_name_data.push_back(last_clear24_hr_time.get_name_leafdata());
    if (last_clear_time.is_set || is_set(last_clear_time.yfilter)) leaf_name_data.push_back(last_clear_time.get_name_leafdata());
    if (lost_at_time.is_set || is_set(lost_at_time.yfilter)) leaf_name_data.push_back(lost_at_time.get_name_leafdata());
    if (lost_count.is_set || is_set(lost_count.yfilter)) leaf_name_data.push_back(lost_count.get_name_leafdata());
    if (timestamp.is_set || is_set(timestamp.yfilter)) leaf_name_data.push_back(timestamp.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15PrbsHistories::OtuMinute15PrbsHistory::OtuMinute15PrbsTimeLineInstances::OtuMinute15PrbsTimeLineInstance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prbs-status")
    {
        if(prbs_status == nullptr)
        {
            prbs_status = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15PrbsHistories::OtuMinute15PrbsHistory::OtuMinute15PrbsTimeLineInstances::OtuMinute15PrbsTimeLineInstance::PrbsStatus>();
        }
        return prbs_status;
    }

    if(child_yang_name == "rcv-patt")
    {
        if(rcv_patt == nullptr)
        {
            rcv_patt = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15PrbsHistories::OtuMinute15PrbsHistory::OtuMinute15PrbsTimeLineInstances::OtuMinute15PrbsTimeLineInstance::RcvPatt>();
        }
        return rcv_patt;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15PrbsHistories::OtuMinute15PrbsHistory::OtuMinute15PrbsTimeLineInstances::OtuMinute15PrbsTimeLineInstance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(prbs_status != nullptr)
    {
        children["prbs-status"] = prbs_status;
    }

    if(rcv_patt != nullptr)
    {
        children["rcv-patt"] = rcv_patt;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15PrbsHistories::OtuMinute15PrbsHistory::OtuMinute15PrbsTimeLineInstances::OtuMinute15PrbsTimeLineInstance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "conf-patt")
    {
        conf_patt = value;
        conf_patt.value_namespace = name_space;
        conf_patt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ebc")
    {
        ebc = value;
        ebc.value_namespace = name_space;
        ebc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "found-at-time")
    {
        found_at_time = value;
        found_at_time.value_namespace = name_space;
        found_at_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "found-count")
    {
        found_count = value;
        found_count.value_namespace = name_space;
        found_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "last-clear-time")
    {
        last_clear_time = value;
        last_clear_time.value_namespace = name_space;
        last_clear_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lost-at-time")
    {
        lost_at_time = value;
        lost_at_time.value_namespace = name_space;
        lost_at_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lost-count")
    {
        lost_count = value;
        lost_count.value_namespace = name_space;
        lost_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timestamp")
    {
        timestamp = value;
        timestamp.value_namespace = name_space;
        timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15PrbsHistories::OtuMinute15PrbsHistory::OtuMinute15PrbsTimeLineInstances::OtuMinute15PrbsTimeLineInstance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "conf-patt")
    {
        conf_patt.yfilter = yfilter;
    }
    if(value_path == "ebc")
    {
        ebc.yfilter = yfilter;
    }
    if(value_path == "found-at-time")
    {
        found_at_time.yfilter = yfilter;
    }
    if(value_path == "found-count")
    {
        found_count.yfilter = yfilter;
    }
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "last-clear15-min-time")
    {
        last_clear15_min_time.yfilter = yfilter;
    }
    if(value_path == "last-clear24-hr-time")
    {
        last_clear24_hr_time.yfilter = yfilter;
    }
    if(value_path == "last-clear-time")
    {
        last_clear_time.yfilter = yfilter;
    }
    if(value_path == "lost-at-time")
    {
        lost_at_time.yfilter = yfilter;
    }
    if(value_path == "lost-count")
    {
        lost_count.yfilter = yfilter;
    }
    if(value_path == "timestamp")
    {
        timestamp.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15PrbsHistories::OtuMinute15PrbsHistory::OtuMinute15PrbsTimeLineInstances::OtuMinute15PrbsTimeLineInstance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prbs-status" || name == "rcv-patt" || name == "number" || name == "conf-patt" || name == "ebc" || name == "found-at-time" || name == "found-count" || name == "index" || name == "last-clear15-min-time" || name == "last-clear24-hr-time" || name == "last-clear-time" || name == "lost-at-time" || name == "lost-count" || name == "timestamp" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15PrbsHistories::OtuMinute15PrbsHistory::OtuMinute15PrbsTimeLineInstances::OtuMinute15PrbsTimeLineInstance::PrbsStatus::PrbsStatus()
    :
    prbs_status{YType::enumeration, "prbs-status"},
    valid{YType::boolean, "valid"}
{

    yang_name = "prbs-status"; yang_parent_name = "otu-minute15prbs-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15PrbsHistories::OtuMinute15PrbsHistory::OtuMinute15PrbsTimeLineInstances::OtuMinute15PrbsTimeLineInstance::PrbsStatus::~PrbsStatus()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15PrbsHistories::OtuMinute15PrbsHistory::OtuMinute15PrbsTimeLineInstances::OtuMinute15PrbsTimeLineInstance::PrbsStatus::has_data() const
{
    return prbs_status.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15PrbsHistories::OtuMinute15PrbsHistory::OtuMinute15PrbsTimeLineInstances::OtuMinute15PrbsTimeLineInstance::PrbsStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prbs_status.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15PrbsHistories::OtuMinute15PrbsHistory::OtuMinute15PrbsTimeLineInstances::OtuMinute15PrbsTimeLineInstance::PrbsStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prbs-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15PrbsHistories::OtuMinute15PrbsHistory::OtuMinute15PrbsTimeLineInstances::OtuMinute15PrbsTimeLineInstance::PrbsStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prbs_status.is_set || is_set(prbs_status.yfilter)) leaf_name_data.push_back(prbs_status.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15PrbsHistories::OtuMinute15PrbsHistory::OtuMinute15PrbsTimeLineInstances::OtuMinute15PrbsTimeLineInstance::PrbsStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15PrbsHistories::OtuMinute15PrbsHistory::OtuMinute15PrbsTimeLineInstances::OtuMinute15PrbsTimeLineInstance::PrbsStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15PrbsHistories::OtuMinute15PrbsHistory::OtuMinute15PrbsTimeLineInstances::OtuMinute15PrbsTimeLineInstance::PrbsStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prbs-status")
    {
        prbs_status = value;
        prbs_status.value_namespace = name_space;
        prbs_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15PrbsHistories::OtuMinute15PrbsHistory::OtuMinute15PrbsTimeLineInstances::OtuMinute15PrbsTimeLineInstance::PrbsStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prbs-status")
    {
        prbs_status.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15PrbsHistories::OtuMinute15PrbsHistory::OtuMinute15PrbsTimeLineInstances::OtuMinute15PrbsTimeLineInstance::PrbsStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prbs-status" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15PrbsHistories::OtuMinute15PrbsHistory::OtuMinute15PrbsTimeLineInstances::OtuMinute15PrbsTimeLineInstance::RcvPatt::RcvPatt()
    :
    rcv_patt{YType::enumeration, "rcv-patt"},
    valid{YType::boolean, "valid"}
{

    yang_name = "rcv-patt"; yang_parent_name = "otu-minute15prbs-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15PrbsHistories::OtuMinute15PrbsHistory::OtuMinute15PrbsTimeLineInstances::OtuMinute15PrbsTimeLineInstance::RcvPatt::~RcvPatt()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15PrbsHistories::OtuMinute15PrbsHistory::OtuMinute15PrbsTimeLineInstances::OtuMinute15PrbsTimeLineInstance::RcvPatt::has_data() const
{
    return rcv_patt.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15PrbsHistories::OtuMinute15PrbsHistory::OtuMinute15PrbsTimeLineInstances::OtuMinute15PrbsTimeLineInstance::RcvPatt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rcv_patt.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15PrbsHistories::OtuMinute15PrbsHistory::OtuMinute15PrbsTimeLineInstances::OtuMinute15PrbsTimeLineInstance::RcvPatt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rcv-patt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15PrbsHistories::OtuMinute15PrbsHistory::OtuMinute15PrbsTimeLineInstances::OtuMinute15PrbsTimeLineInstance::RcvPatt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rcv_patt.is_set || is_set(rcv_patt.yfilter)) leaf_name_data.push_back(rcv_patt.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15PrbsHistories::OtuMinute15PrbsHistory::OtuMinute15PrbsTimeLineInstances::OtuMinute15PrbsTimeLineInstance::RcvPatt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15PrbsHistories::OtuMinute15PrbsHistory::OtuMinute15PrbsTimeLineInstances::OtuMinute15PrbsTimeLineInstance::RcvPatt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15PrbsHistories::OtuMinute15PrbsHistory::OtuMinute15PrbsTimeLineInstances::OtuMinute15PrbsTimeLineInstance::RcvPatt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rcv-patt")
    {
        rcv_patt = value;
        rcv_patt.value_namespace = name_space;
        rcv_patt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15PrbsHistories::OtuMinute15PrbsHistory::OtuMinute15PrbsTimeLineInstances::OtuMinute15PrbsTimeLineInstance::RcvPatt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rcv-patt")
    {
        rcv_patt.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15PrbsHistories::OtuMinute15PrbsHistory::OtuMinute15PrbsTimeLineInstances::OtuMinute15PrbsTimeLineInstance::RcvPatt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rcv-patt" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30History()
    :
    otu_second30fec_histories(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories>())
	,otu_second30otn_histories(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories>())
{
    otu_second30fec_histories->parent = this;
    otu_second30otn_histories->parent = this;

    yang_name = "otu-second30-history"; yang_parent_name = "otu-port-history"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::~OtuSecond30History()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::has_data() const
{
    return (otu_second30fec_histories !=  nullptr && otu_second30fec_histories->has_data())
	|| (otu_second30otn_histories !=  nullptr && otu_second30otn_histories->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::has_operation() const
{
    return is_set(yfilter)
	|| (otu_second30fec_histories !=  nullptr && otu_second30fec_histories->has_operation())
	|| (otu_second30otn_histories !=  nullptr && otu_second30otn_histories->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otu-second30-history";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "otu-second30fec-histories")
    {
        if(otu_second30fec_histories == nullptr)
        {
            otu_second30fec_histories = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories>();
        }
        return otu_second30fec_histories;
    }

    if(child_yang_name == "otu-second30otn-histories")
    {
        if(otu_second30otn_histories == nullptr)
        {
            otu_second30otn_histories = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories>();
        }
        return otu_second30otn_histories;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(otu_second30fec_histories != nullptr)
    {
        children["otu-second30fec-histories"] = otu_second30fec_histories;
    }

    if(otu_second30otn_histories != nullptr)
    {
        children["otu-second30otn-histories"] = otu_second30otn_histories;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "otu-second30fec-histories" || name == "otu-second30otn-histories")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistories()
{

    yang_name = "otu-second30fec-histories"; yang_parent_name = "otu-second30-history"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::~OtuSecond30FecHistories()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::has_data() const
{
    for (std::size_t index=0; index<otu_second30fec_history.size(); index++)
    {
        if(otu_second30fec_history[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::has_operation() const
{
    for (std::size_t index=0; index<otu_second30fec_history.size(); index++)
    {
        if(otu_second30fec_history[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otu-second30fec-histories";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "otu-second30fec-history")
    {
        for(auto const & c : otu_second30fec_history)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory>();
        c->parent = this;
        otu_second30fec_history.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : otu_second30fec_history)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "otu-second30fec-history")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecHistory()
    :
    number{YType::int32, "number"}
    	,
    otu_second30fec_time_line_instances(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances>())
{
    otu_second30fec_time_line_instances->parent = this;

    yang_name = "otu-second30fec-history"; yang_parent_name = "otu-second30fec-histories"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::~OtuSecond30FecHistory()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::has_data() const
{
    return number.is_set
	|| (otu_second30fec_time_line_instances !=  nullptr && otu_second30fec_time_line_instances->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| (otu_second30fec_time_line_instances !=  nullptr && otu_second30fec_time_line_instances->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otu-second30fec-history" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "otu-second30fec-time-line-instances")
    {
        if(otu_second30fec_time_line_instances == nullptr)
        {
            otu_second30fec_time_line_instances = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances>();
        }
        return otu_second30fec_time_line_instances;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(otu_second30fec_time_line_instances != nullptr)
    {
        children["otu-second30fec-time-line-instances"] = otu_second30fec_time_line_instances;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "otu-second30fec-time-line-instances" || name == "number")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstances()
{

    yang_name = "otu-second30fec-time-line-instances"; yang_parent_name = "otu-second30fec-history"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::~OtuSecond30FecTimeLineInstances()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::has_data() const
{
    for (std::size_t index=0; index<otu_second30fec_time_line_instance.size(); index++)
    {
        if(otu_second30fec_time_line_instance[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::has_operation() const
{
    for (std::size_t index=0; index<otu_second30fec_time_line_instance.size(); index++)
    {
        if(otu_second30fec_time_line_instance[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otu-second30fec-time-line-instances";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "otu-second30fec-time-line-instance")
    {
        for(auto const & c : otu_second30fec_time_line_instance)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance>();
        c->parent = this;
        otu_second30fec_time_line_instance.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : otu_second30fec_time_line_instance)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "otu-second30fec-time-line-instance")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::OtuSecond30FecTimeLineInstance()
    :
    number{YType::int32, "number"},
    index_{YType::uint32, "index"},
    last_clear15_min_time{YType::str, "last-clear15-min-time"},
    last_clear24_hr_time{YType::str, "last-clear24-hr-time"},
    last_clear30_sec_time{YType::str, "last-clear30-sec-time"},
    last_clear_time{YType::str, "last-clear-time"},
    sec30_support{YType::boolean, "sec30-support"},
    timestamp{YType::str, "timestamp"},
    valid{YType::boolean, "valid"}
    	,
    ec_bits(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::EcBits>())
	,post_fec_ber(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::PostFecBer>())
	,pre_fec_ber(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::PreFecBer>())
	,q(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::Q>())
	,qmargin(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::Qmargin>())
	,uc_words(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::UcWords>())
{
    ec_bits->parent = this;
    post_fec_ber->parent = this;
    pre_fec_ber->parent = this;
    q->parent = this;
    qmargin->parent = this;
    uc_words->parent = this;

    yang_name = "otu-second30fec-time-line-instance"; yang_parent_name = "otu-second30fec-time-line-instances"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::~OtuSecond30FecTimeLineInstance()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::has_data() const
{
    return number.is_set
	|| index_.is_set
	|| last_clear15_min_time.is_set
	|| last_clear24_hr_time.is_set
	|| last_clear30_sec_time.is_set
	|| last_clear_time.is_set
	|| sec30_support.is_set
	|| timestamp.is_set
	|| valid.is_set
	|| (ec_bits !=  nullptr && ec_bits->has_data())
	|| (post_fec_ber !=  nullptr && post_fec_ber->has_data())
	|| (pre_fec_ber !=  nullptr && pre_fec_ber->has_data())
	|| (q !=  nullptr && q->has_data())
	|| (qmargin !=  nullptr && qmargin->has_data())
	|| (uc_words !=  nullptr && uc_words->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(last_clear15_min_time.yfilter)
	|| ydk::is_set(last_clear24_hr_time.yfilter)
	|| ydk::is_set(last_clear30_sec_time.yfilter)
	|| ydk::is_set(last_clear_time.yfilter)
	|| ydk::is_set(sec30_support.yfilter)
	|| ydk::is_set(timestamp.yfilter)
	|| ydk::is_set(valid.yfilter)
	|| (ec_bits !=  nullptr && ec_bits->has_operation())
	|| (post_fec_ber !=  nullptr && post_fec_ber->has_operation())
	|| (pre_fec_ber !=  nullptr && pre_fec_ber->has_operation())
	|| (q !=  nullptr && q->has_operation())
	|| (qmargin !=  nullptr && qmargin->has_operation())
	|| (uc_words !=  nullptr && uc_words->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otu-second30fec-time-line-instance" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (last_clear15_min_time.is_set || is_set(last_clear15_min_time.yfilter)) leaf_name_data.push_back(last_clear15_min_time.get_name_leafdata());
    if (last_clear24_hr_time.is_set || is_set(last_clear24_hr_time.yfilter)) leaf_name_data.push_back(last_clear24_hr_time.get_name_leafdata());
    if (last_clear30_sec_time.is_set || is_set(last_clear30_sec_time.yfilter)) leaf_name_data.push_back(last_clear30_sec_time.get_name_leafdata());
    if (last_clear_time.is_set || is_set(last_clear_time.yfilter)) leaf_name_data.push_back(last_clear_time.get_name_leafdata());
    if (sec30_support.is_set || is_set(sec30_support.yfilter)) leaf_name_data.push_back(sec30_support.get_name_leafdata());
    if (timestamp.is_set || is_set(timestamp.yfilter)) leaf_name_data.push_back(timestamp.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ec-bits")
    {
        if(ec_bits == nullptr)
        {
            ec_bits = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::EcBits>();
        }
        return ec_bits;
    }

    if(child_yang_name == "post-fec-ber")
    {
        if(post_fec_ber == nullptr)
        {
            post_fec_ber = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::PostFecBer>();
        }
        return post_fec_ber;
    }

    if(child_yang_name == "pre-fec-ber")
    {
        if(pre_fec_ber == nullptr)
        {
            pre_fec_ber = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::PreFecBer>();
        }
        return pre_fec_ber;
    }

    if(child_yang_name == "q")
    {
        if(q == nullptr)
        {
            q = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::Q>();
        }
        return q;
    }

    if(child_yang_name == "qmargin")
    {
        if(qmargin == nullptr)
        {
            qmargin = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::Qmargin>();
        }
        return qmargin;
    }

    if(child_yang_name == "uc-words")
    {
        if(uc_words == nullptr)
        {
            uc_words = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::UcWords>();
        }
        return uc_words;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ec_bits != nullptr)
    {
        children["ec-bits"] = ec_bits;
    }

    if(post_fec_ber != nullptr)
    {
        children["post-fec-ber"] = post_fec_ber;
    }

    if(pre_fec_ber != nullptr)
    {
        children["pre-fec-ber"] = pre_fec_ber;
    }

    if(q != nullptr)
    {
        children["q"] = q;
    }

    if(qmargin != nullptr)
    {
        children["qmargin"] = qmargin;
    }

    if(uc_words != nullptr)
    {
        children["uc-words"] = uc_words;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "last-clear30-sec-time")
    {
        last_clear30_sec_time = value;
        last_clear30_sec_time.value_namespace = name_space;
        last_clear30_sec_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-clear-time")
    {
        last_clear_time = value;
        last_clear_time.value_namespace = name_space;
        last_clear_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sec30-support")
    {
        sec30_support = value;
        sec30_support.value_namespace = name_space;
        sec30_support.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timestamp")
    {
        timestamp = value;
        timestamp.value_namespace = name_space;
        timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "last-clear15-min-time")
    {
        last_clear15_min_time.yfilter = yfilter;
    }
    if(value_path == "last-clear24-hr-time")
    {
        last_clear24_hr_time.yfilter = yfilter;
    }
    if(value_path == "last-clear30-sec-time")
    {
        last_clear30_sec_time.yfilter = yfilter;
    }
    if(value_path == "last-clear-time")
    {
        last_clear_time.yfilter = yfilter;
    }
    if(value_path == "sec30-support")
    {
        sec30_support.yfilter = yfilter;
    }
    if(value_path == "timestamp")
    {
        timestamp.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ec-bits" || name == "post-fec-ber" || name == "pre-fec-ber" || name == "q" || name == "qmargin" || name == "uc-words" || name == "number" || name == "index" || name == "last-clear15-min-time" || name == "last-clear24-hr-time" || name == "last-clear30-sec-time" || name == "last-clear-time" || name == "sec30-support" || name == "timestamp" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::EcBits::EcBits()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "ec-bits"; yang_parent_name = "otu-second30fec-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::EcBits::~EcBits()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::EcBits::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::EcBits::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::EcBits::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ec-bits";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::EcBits::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::EcBits::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::EcBits::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::EcBits::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::EcBits::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::EcBits::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::PostFecBer::PostFecBer()
    :
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    minimum{YType::str, "minimum"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    minimum_threshold{YType::str, "minimum-threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "post-fec-ber"; yang_parent_name = "otu-second30fec-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::PostFecBer::~PostFecBer()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::PostFecBer::has_data() const
{
    return average.is_set
	|| maximum.is_set
	|| maximum_tca_report.is_set
	|| maximum_threshold.is_set
	|| minimum.is_set
	|| minimum_tca_report.is_set
	|| minimum_threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::PostFecBer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(maximum_tca_report.yfilter)
	|| ydk::is_set(maximum_threshold.yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(minimum_tca_report.yfilter)
	|| ydk::is_set(minimum_threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::PostFecBer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "post-fec-ber";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::PostFecBer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.yfilter)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.yfilter)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.yfilter)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.yfilter)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::PostFecBer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::PostFecBer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::PostFecBer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
        maximum_tca_report.value_namespace = name_space;
        maximum_tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
        maximum_threshold.value_namespace = name_space;
        maximum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
        minimum_tca_report.value_namespace = name_space;
        minimum_tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
        minimum_threshold.value_namespace = name_space;
        minimum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::PostFecBer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "average")
    {
        average.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report.yfilter = yfilter;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold.yfilter = yfilter;
    }
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report.yfilter = yfilter;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::PostFecBer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "average" || name == "maximum" || name == "maximum-tca-report" || name == "maximum-threshold" || name == "minimum" || name == "minimum-tca-report" || name == "minimum-threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::PreFecBer::PreFecBer()
    :
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    minimum{YType::str, "minimum"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    minimum_threshold{YType::str, "minimum-threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "pre-fec-ber"; yang_parent_name = "otu-second30fec-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::PreFecBer::~PreFecBer()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::PreFecBer::has_data() const
{
    return average.is_set
	|| maximum.is_set
	|| maximum_tca_report.is_set
	|| maximum_threshold.is_set
	|| minimum.is_set
	|| minimum_tca_report.is_set
	|| minimum_threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::PreFecBer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(maximum_tca_report.yfilter)
	|| ydk::is_set(maximum_threshold.yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(minimum_tca_report.yfilter)
	|| ydk::is_set(minimum_threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::PreFecBer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pre-fec-ber";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::PreFecBer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.yfilter)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.yfilter)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.yfilter)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.yfilter)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::PreFecBer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::PreFecBer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::PreFecBer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
        maximum_tca_report.value_namespace = name_space;
        maximum_tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
        maximum_threshold.value_namespace = name_space;
        maximum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
        minimum_tca_report.value_namespace = name_space;
        minimum_tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
        minimum_threshold.value_namespace = name_space;
        minimum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::PreFecBer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "average")
    {
        average.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report.yfilter = yfilter;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold.yfilter = yfilter;
    }
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report.yfilter = yfilter;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::PreFecBer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "average" || name == "maximum" || name == "maximum-tca-report" || name == "maximum-threshold" || name == "minimum" || name == "minimum-tca-report" || name == "minimum-threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::Q::Q()
    :
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    minimum{YType::str, "minimum"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    minimum_threshold{YType::str, "minimum-threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "q"; yang_parent_name = "otu-second30fec-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::Q::~Q()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::Q::has_data() const
{
    return average.is_set
	|| maximum.is_set
	|| maximum_tca_report.is_set
	|| maximum_threshold.is_set
	|| minimum.is_set
	|| minimum_tca_report.is_set
	|| minimum_threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::Q::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(maximum_tca_report.yfilter)
	|| ydk::is_set(maximum_threshold.yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(minimum_tca_report.yfilter)
	|| ydk::is_set(minimum_threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::Q::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "q";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::Q::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.yfilter)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.yfilter)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.yfilter)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.yfilter)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::Q::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::Q::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::Q::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
        maximum_tca_report.value_namespace = name_space;
        maximum_tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
        maximum_threshold.value_namespace = name_space;
        maximum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
        minimum_tca_report.value_namespace = name_space;
        minimum_tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
        minimum_threshold.value_namespace = name_space;
        minimum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::Q::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "average")
    {
        average.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report.yfilter = yfilter;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold.yfilter = yfilter;
    }
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report.yfilter = yfilter;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::Q::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "average" || name == "maximum" || name == "maximum-tca-report" || name == "maximum-threshold" || name == "minimum" || name == "minimum-tca-report" || name == "minimum-threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::Qmargin::Qmargin()
    :
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    minimum{YType::str, "minimum"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    minimum_threshold{YType::str, "minimum-threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "qmargin"; yang_parent_name = "otu-second30fec-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::Qmargin::~Qmargin()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::Qmargin::has_data() const
{
    return average.is_set
	|| maximum.is_set
	|| maximum_tca_report.is_set
	|| maximum_threshold.is_set
	|| minimum.is_set
	|| minimum_tca_report.is_set
	|| minimum_threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::Qmargin::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(maximum_tca_report.yfilter)
	|| ydk::is_set(maximum_threshold.yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(minimum_tca_report.yfilter)
	|| ydk::is_set(minimum_threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::Qmargin::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qmargin";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::Qmargin::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.yfilter)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.yfilter)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.yfilter)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.yfilter)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::Qmargin::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::Qmargin::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::Qmargin::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
        maximum_tca_report.value_namespace = name_space;
        maximum_tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
        maximum_threshold.value_namespace = name_space;
        maximum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
        minimum_tca_report.value_namespace = name_space;
        minimum_tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
        minimum_threshold.value_namespace = name_space;
        minimum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::Qmargin::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "average")
    {
        average.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report.yfilter = yfilter;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold.yfilter = yfilter;
    }
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report.yfilter = yfilter;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::Qmargin::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "average" || name == "maximum" || name == "maximum-tca-report" || name == "maximum-threshold" || name == "minimum" || name == "minimum-tca-report" || name == "minimum-threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::UcWords::UcWords()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "uc-words"; yang_parent_name = "otu-second30fec-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::UcWords::~UcWords()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::UcWords::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::UcWords::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::UcWords::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uc-words";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::UcWords::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::UcWords::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::UcWords::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::UcWords::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::UcWords::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::UcWords::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistories()
{

    yang_name = "otu-second30otn-histories"; yang_parent_name = "otu-second30-history"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::~OtuSecond30OtnHistories()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::has_data() const
{
    for (std::size_t index=0; index<otu_second30otn_history.size(); index++)
    {
        if(otu_second30otn_history[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::has_operation() const
{
    for (std::size_t index=0; index<otu_second30otn_history.size(); index++)
    {
        if(otu_second30otn_history[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otu-second30otn-histories";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "otu-second30otn-history")
    {
        for(auto const & c : otu_second30otn_history)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory>();
        c->parent = this;
        otu_second30otn_history.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : otu_second30otn_history)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "otu-second30otn-history")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnHistory()
    :
    number{YType::int32, "number"}
    	,
    otu_second30otn_time_line_instances(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances>())
{
    otu_second30otn_time_line_instances->parent = this;

    yang_name = "otu-second30otn-history"; yang_parent_name = "otu-second30otn-histories"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::~OtuSecond30OtnHistory()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::has_data() const
{
    return number.is_set
	|| (otu_second30otn_time_line_instances !=  nullptr && otu_second30otn_time_line_instances->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| (otu_second30otn_time_line_instances !=  nullptr && otu_second30otn_time_line_instances->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otu-second30otn-history" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "otu-second30otn-time-line-instances")
    {
        if(otu_second30otn_time_line_instances == nullptr)
        {
            otu_second30otn_time_line_instances = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances>();
        }
        return otu_second30otn_time_line_instances;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(otu_second30otn_time_line_instances != nullptr)
    {
        children["otu-second30otn-time-line-instances"] = otu_second30otn_time_line_instances;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "otu-second30otn-time-line-instances" || name == "number")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstances()
{

    yang_name = "otu-second30otn-time-line-instances"; yang_parent_name = "otu-second30otn-history"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::~OtuSecond30OtnTimeLineInstances()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::has_data() const
{
    for (std::size_t index=0; index<otu_second30otn_time_line_instance.size(); index++)
    {
        if(otu_second30otn_time_line_instance[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::has_operation() const
{
    for (std::size_t index=0; index<otu_second30otn_time_line_instance.size(); index++)
    {
        if(otu_second30otn_time_line_instance[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otu-second30otn-time-line-instances";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "otu-second30otn-time-line-instance")
    {
        for(auto const & c : otu_second30otn_time_line_instance)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance>();
        c->parent = this;
        otu_second30otn_time_line_instance.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : otu_second30otn_time_line_instance)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "otu-second30otn-time-line-instance")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::OtuSecond30OtnTimeLineInstance()
    :
    number{YType::int32, "number"},
    index_{YType::uint32, "index"},
    last_clear15_min_time{YType::str, "last-clear15-min-time"},
    last_clear24_hr_time{YType::str, "last-clear24-hr-time"},
    last_clear30_sec_time{YType::str, "last-clear30-sec-time"},
    last_clear_time{YType::str, "last-clear-time"},
    sec30_support{YType::boolean, "sec30-support"},
    timestamp{YType::str, "timestamp"},
    valid{YType::boolean, "valid"}
    	,
    bbe_fe(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::BbeFe>())
	,bbe_ne(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::BbeNe>())
	,bber_fe(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::BberFe>())
	,bber_ne(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::BberNe>())
	,es_fe(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::EsFe>())
	,es_ne(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::EsNe>())
	,esr_fe(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::EsrFe>())
	,esr_ne(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::EsrNe>())
	,fc_fe(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::FcFe>())
	,fc_ne(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::FcNe>())
	,lbc(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::Lbc>())
	,ses_fe(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::SesFe>())
	,ses_ne(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::SesNe>())
	,sesr_fe(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::SesrFe>())
	,sesr_ne(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::SesrNe>())
	,uas_fe(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::UasFe>())
	,uas_ne(std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::UasNe>())
{
    bbe_fe->parent = this;
    bbe_ne->parent = this;
    bber_fe->parent = this;
    bber_ne->parent = this;
    es_fe->parent = this;
    es_ne->parent = this;
    esr_fe->parent = this;
    esr_ne->parent = this;
    fc_fe->parent = this;
    fc_ne->parent = this;
    lbc->parent = this;
    ses_fe->parent = this;
    ses_ne->parent = this;
    sesr_fe->parent = this;
    sesr_ne->parent = this;
    uas_fe->parent = this;
    uas_ne->parent = this;

    yang_name = "otu-second30otn-time-line-instance"; yang_parent_name = "otu-second30otn-time-line-instances"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::~OtuSecond30OtnTimeLineInstance()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::has_data() const
{
    return number.is_set
	|| index_.is_set
	|| last_clear15_min_time.is_set
	|| last_clear24_hr_time.is_set
	|| last_clear30_sec_time.is_set
	|| last_clear_time.is_set
	|| sec30_support.is_set
	|| timestamp.is_set
	|| valid.is_set
	|| (bbe_fe !=  nullptr && bbe_fe->has_data())
	|| (bbe_ne !=  nullptr && bbe_ne->has_data())
	|| (bber_fe !=  nullptr && bber_fe->has_data())
	|| (bber_ne !=  nullptr && bber_ne->has_data())
	|| (es_fe !=  nullptr && es_fe->has_data())
	|| (es_ne !=  nullptr && es_ne->has_data())
	|| (esr_fe !=  nullptr && esr_fe->has_data())
	|| (esr_ne !=  nullptr && esr_ne->has_data())
	|| (fc_fe !=  nullptr && fc_fe->has_data())
	|| (fc_ne !=  nullptr && fc_ne->has_data())
	|| (lbc !=  nullptr && lbc->has_data())
	|| (ses_fe !=  nullptr && ses_fe->has_data())
	|| (ses_ne !=  nullptr && ses_ne->has_data())
	|| (sesr_fe !=  nullptr && sesr_fe->has_data())
	|| (sesr_ne !=  nullptr && sesr_ne->has_data())
	|| (uas_fe !=  nullptr && uas_fe->has_data())
	|| (uas_ne !=  nullptr && uas_ne->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(last_clear15_min_time.yfilter)
	|| ydk::is_set(last_clear24_hr_time.yfilter)
	|| ydk::is_set(last_clear30_sec_time.yfilter)
	|| ydk::is_set(last_clear_time.yfilter)
	|| ydk::is_set(sec30_support.yfilter)
	|| ydk::is_set(timestamp.yfilter)
	|| ydk::is_set(valid.yfilter)
	|| (bbe_fe !=  nullptr && bbe_fe->has_operation())
	|| (bbe_ne !=  nullptr && bbe_ne->has_operation())
	|| (bber_fe !=  nullptr && bber_fe->has_operation())
	|| (bber_ne !=  nullptr && bber_ne->has_operation())
	|| (es_fe !=  nullptr && es_fe->has_operation())
	|| (es_ne !=  nullptr && es_ne->has_operation())
	|| (esr_fe !=  nullptr && esr_fe->has_operation())
	|| (esr_ne !=  nullptr && esr_ne->has_operation())
	|| (fc_fe !=  nullptr && fc_fe->has_operation())
	|| (fc_ne !=  nullptr && fc_ne->has_operation())
	|| (lbc !=  nullptr && lbc->has_operation())
	|| (ses_fe !=  nullptr && ses_fe->has_operation())
	|| (ses_ne !=  nullptr && ses_ne->has_operation())
	|| (sesr_fe !=  nullptr && sesr_fe->has_operation())
	|| (sesr_ne !=  nullptr && sesr_ne->has_operation())
	|| (uas_fe !=  nullptr && uas_fe->has_operation())
	|| (uas_ne !=  nullptr && uas_ne->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otu-second30otn-time-line-instance" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (last_clear15_min_time.is_set || is_set(last_clear15_min_time.yfilter)) leaf_name_data.push_back(last_clear15_min_time.get_name_leafdata());
    if (last_clear24_hr_time.is_set || is_set(last_clear24_hr_time.yfilter)) leaf_name_data.push_back(last_clear24_hr_time.get_name_leafdata());
    if (last_clear30_sec_time.is_set || is_set(last_clear30_sec_time.yfilter)) leaf_name_data.push_back(last_clear30_sec_time.get_name_leafdata());
    if (last_clear_time.is_set || is_set(last_clear_time.yfilter)) leaf_name_data.push_back(last_clear_time.get_name_leafdata());
    if (sec30_support.is_set || is_set(sec30_support.yfilter)) leaf_name_data.push_back(sec30_support.get_name_leafdata());
    if (timestamp.is_set || is_set(timestamp.yfilter)) leaf_name_data.push_back(timestamp.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bbe-fe")
    {
        if(bbe_fe == nullptr)
        {
            bbe_fe = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::BbeFe>();
        }
        return bbe_fe;
    }

    if(child_yang_name == "bbe-ne")
    {
        if(bbe_ne == nullptr)
        {
            bbe_ne = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::BbeNe>();
        }
        return bbe_ne;
    }

    if(child_yang_name == "bber-fe")
    {
        if(bber_fe == nullptr)
        {
            bber_fe = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::BberFe>();
        }
        return bber_fe;
    }

    if(child_yang_name == "bber-ne")
    {
        if(bber_ne == nullptr)
        {
            bber_ne = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::BberNe>();
        }
        return bber_ne;
    }

    if(child_yang_name == "es-fe")
    {
        if(es_fe == nullptr)
        {
            es_fe = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::EsFe>();
        }
        return es_fe;
    }

    if(child_yang_name == "es-ne")
    {
        if(es_ne == nullptr)
        {
            es_ne = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::EsNe>();
        }
        return es_ne;
    }

    if(child_yang_name == "esr-fe")
    {
        if(esr_fe == nullptr)
        {
            esr_fe = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::EsrFe>();
        }
        return esr_fe;
    }

    if(child_yang_name == "esr-ne")
    {
        if(esr_ne == nullptr)
        {
            esr_ne = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::EsrNe>();
        }
        return esr_ne;
    }

    if(child_yang_name == "fc-fe")
    {
        if(fc_fe == nullptr)
        {
            fc_fe = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::FcFe>();
        }
        return fc_fe;
    }

    if(child_yang_name == "fc-ne")
    {
        if(fc_ne == nullptr)
        {
            fc_ne = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::FcNe>();
        }
        return fc_ne;
    }

    if(child_yang_name == "lbc")
    {
        if(lbc == nullptr)
        {
            lbc = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::Lbc>();
        }
        return lbc;
    }

    if(child_yang_name == "ses-fe")
    {
        if(ses_fe == nullptr)
        {
            ses_fe = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::SesFe>();
        }
        return ses_fe;
    }

    if(child_yang_name == "ses-ne")
    {
        if(ses_ne == nullptr)
        {
            ses_ne = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::SesNe>();
        }
        return ses_ne;
    }

    if(child_yang_name == "sesr-fe")
    {
        if(sesr_fe == nullptr)
        {
            sesr_fe = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::SesrFe>();
        }
        return sesr_fe;
    }

    if(child_yang_name == "sesr-ne")
    {
        if(sesr_ne == nullptr)
        {
            sesr_ne = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::SesrNe>();
        }
        return sesr_ne;
    }

    if(child_yang_name == "uas-fe")
    {
        if(uas_fe == nullptr)
        {
            uas_fe = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::UasFe>();
        }
        return uas_fe;
    }

    if(child_yang_name == "uas-ne")
    {
        if(uas_ne == nullptr)
        {
            uas_ne = std::make_shared<PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::UasNe>();
        }
        return uas_ne;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bbe_fe != nullptr)
    {
        children["bbe-fe"] = bbe_fe;
    }

    if(bbe_ne != nullptr)
    {
        children["bbe-ne"] = bbe_ne;
    }

    if(bber_fe != nullptr)
    {
        children["bber-fe"] = bber_fe;
    }

    if(bber_ne != nullptr)
    {
        children["bber-ne"] = bber_ne;
    }

    if(es_fe != nullptr)
    {
        children["es-fe"] = es_fe;
    }

    if(es_ne != nullptr)
    {
        children["es-ne"] = es_ne;
    }

    if(esr_fe != nullptr)
    {
        children["esr-fe"] = esr_fe;
    }

    if(esr_ne != nullptr)
    {
        children["esr-ne"] = esr_ne;
    }

    if(fc_fe != nullptr)
    {
        children["fc-fe"] = fc_fe;
    }

    if(fc_ne != nullptr)
    {
        children["fc-ne"] = fc_ne;
    }

    if(lbc != nullptr)
    {
        children["lbc"] = lbc;
    }

    if(ses_fe != nullptr)
    {
        children["ses-fe"] = ses_fe;
    }

    if(ses_ne != nullptr)
    {
        children["ses-ne"] = ses_ne;
    }

    if(sesr_fe != nullptr)
    {
        children["sesr-fe"] = sesr_fe;
    }

    if(sesr_ne != nullptr)
    {
        children["sesr-ne"] = sesr_ne;
    }

    if(uas_fe != nullptr)
    {
        children["uas-fe"] = uas_fe;
    }

    if(uas_ne != nullptr)
    {
        children["uas-ne"] = uas_ne;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "last-clear30-sec-time")
    {
        last_clear30_sec_time = value;
        last_clear30_sec_time.value_namespace = name_space;
        last_clear30_sec_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-clear-time")
    {
        last_clear_time = value;
        last_clear_time.value_namespace = name_space;
        last_clear_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sec30-support")
    {
        sec30_support = value;
        sec30_support.value_namespace = name_space;
        sec30_support.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timestamp")
    {
        timestamp = value;
        timestamp.value_namespace = name_space;
        timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "last-clear15-min-time")
    {
        last_clear15_min_time.yfilter = yfilter;
    }
    if(value_path == "last-clear24-hr-time")
    {
        last_clear24_hr_time.yfilter = yfilter;
    }
    if(value_path == "last-clear30-sec-time")
    {
        last_clear30_sec_time.yfilter = yfilter;
    }
    if(value_path == "last-clear-time")
    {
        last_clear_time.yfilter = yfilter;
    }
    if(value_path == "sec30-support")
    {
        sec30_support.yfilter = yfilter;
    }
    if(value_path == "timestamp")
    {
        timestamp.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bbe-fe" || name == "bbe-ne" || name == "bber-fe" || name == "bber-ne" || name == "es-fe" || name == "es-ne" || name == "esr-fe" || name == "esr-ne" || name == "fc-fe" || name == "fc-ne" || name == "lbc" || name == "ses-fe" || name == "ses-ne" || name == "sesr-fe" || name == "sesr-ne" || name == "uas-fe" || name == "uas-ne" || name == "number" || name == "index" || name == "last-clear15-min-time" || name == "last-clear24-hr-time" || name == "last-clear30-sec-time" || name == "last-clear-time" || name == "sec30-support" || name == "timestamp" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::BbeFe::BbeFe()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{

    yang_name = "bbe-fe"; yang_parent_name = "otu-second30otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::BbeFe::~BbeFe()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::BbeFe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::BbeFe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::BbeFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bbe-fe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::BbeFe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::BbeFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::BbeFe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::BbeFe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::BbeFe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::BbeFe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::BbeNe::BbeNe()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{

    yang_name = "bbe-ne"; yang_parent_name = "otu-second30otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::BbeNe::~BbeNe()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::BbeNe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::BbeNe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::BbeNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bbe-ne";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::BbeNe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::BbeNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::BbeNe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::BbeNe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::BbeNe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::BbeNe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::BberFe::BberFe()
    :
    data{YType::str, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::str, "threshold"}
{

    yang_name = "bber-fe"; yang_parent_name = "otu-second30otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::BberFe::~BberFe()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::BberFe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::BberFe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::BberFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bber-fe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::BberFe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::BberFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::BberFe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::BberFe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::BberFe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::BberFe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::BberNe::BberNe()
    :
    data{YType::str, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::str, "threshold"}
{

    yang_name = "bber-ne"; yang_parent_name = "otu-second30otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::BberNe::~BberNe()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::BberNe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::BberNe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::BberNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bber-ne";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::BberNe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::BberNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::BberNe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::BberNe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::BberNe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::BberNe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::EsFe::EsFe()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{

    yang_name = "es-fe"; yang_parent_name = "otu-second30otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::EsFe::~EsFe()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::EsFe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::EsFe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::EsFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "es-fe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::EsFe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::EsFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::EsFe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::EsFe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::EsFe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::EsFe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::EsNe::EsNe()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{

    yang_name = "es-ne"; yang_parent_name = "otu-second30otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::EsNe::~EsNe()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::EsNe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::EsNe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::EsNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "es-ne";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::EsNe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::EsNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::EsNe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::EsNe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::EsNe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::EsNe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::EsrFe::EsrFe()
    :
    data{YType::str, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::str, "threshold"}
{

    yang_name = "esr-fe"; yang_parent_name = "otu-second30otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::EsrFe::~EsrFe()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::EsrFe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::EsrFe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::EsrFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "esr-fe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::EsrFe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::EsrFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::EsrFe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::EsrFe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::EsrFe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::EsrFe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::EsrNe::EsrNe()
    :
    data{YType::str, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::str, "threshold"}
{

    yang_name = "esr-ne"; yang_parent_name = "otu-second30otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::EsrNe::~EsrNe()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::EsrNe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::EsrNe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::EsrNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "esr-ne";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::EsrNe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::EsrNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::EsrNe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::EsrNe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::EsrNe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::EsrNe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::FcFe::FcFe()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{

    yang_name = "fc-fe"; yang_parent_name = "otu-second30otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::FcFe::~FcFe()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::FcFe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::FcFe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::FcFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fc-fe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::FcFe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::FcFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::FcFe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::FcFe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::FcFe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::FcFe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::FcNe::FcNe()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{

    yang_name = "fc-ne"; yang_parent_name = "otu-second30otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::FcNe::~FcNe()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::FcNe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::FcNe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::FcNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fc-ne";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::FcNe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::FcNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::FcNe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::FcNe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::FcNe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::FcNe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::Lbc::Lbc()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{

    yang_name = "lbc"; yang_parent_name = "otu-second30otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::Lbc::~Lbc()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::Lbc::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::Lbc::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::Lbc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lbc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::Lbc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::Lbc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::Lbc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::Lbc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::Lbc::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::Lbc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::SesFe::SesFe()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{

    yang_name = "ses-fe"; yang_parent_name = "otu-second30otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::SesFe::~SesFe()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::SesFe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::SesFe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::SesFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ses-fe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::SesFe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::SesFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::SesFe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::SesFe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::SesFe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::SesFe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::SesNe::SesNe()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{

    yang_name = "ses-ne"; yang_parent_name = "otu-second30otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::SesNe::~SesNe()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::SesNe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::SesNe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::SesNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ses-ne";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::SesNe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::SesNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::SesNe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::SesNe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::SesNe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::SesNe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::SesrFe::SesrFe()
    :
    data{YType::str, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::str, "threshold"}
{

    yang_name = "sesr-fe"; yang_parent_name = "otu-second30otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::SesrFe::~SesrFe()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::SesrFe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::SesrFe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::SesrFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sesr-fe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::SesrFe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::SesrFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::SesrFe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::SesrFe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::SesrFe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::SesrFe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::SesrNe::SesrNe()
    :
    data{YType::str, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::str, "threshold"}
{

    yang_name = "sesr-ne"; yang_parent_name = "otu-second30otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::SesrNe::~SesrNe()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::SesrNe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::SesrNe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::SesrNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sesr-ne";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::SesrNe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::SesrNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::SesrNe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::SesrNe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::SesrNe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::SesrNe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::UasFe::UasFe()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{

    yang_name = "uas-fe"; yang_parent_name = "otu-second30otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::UasFe::~UasFe()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::UasFe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::UasFe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::UasFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uas-fe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::UasFe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::UasFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::UasFe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::UasFe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::UasFe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::UasFe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::UasNe::UasNe()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{

    yang_name = "uas-ne"; yang_parent_name = "otu-second30otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::UasNe::~UasNe()
{
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::UasNe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::UasNe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::UasNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uas-ne";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::UasNe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::UasNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::UasNe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::UasNe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::UasNe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::UasNe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetHistory()
    :
    sonet_port_histories(std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories>())
{
    sonet_port_histories->parent = this;

    yang_name = "sonet-history"; yang_parent_name = "periodic"; is_top_level_class = false; has_list_ancestor = false;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::~SonetHistory()
{
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::has_data() const
{
    return (sonet_port_histories !=  nullptr && sonet_port_histories->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::has_operation() const
{
    return is_set(yfilter)
	|| (sonet_port_histories !=  nullptr && sonet_port_histories->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::SonetHistory::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-pmengine-oper:performance-management-history/global/periodic/" << get_segment_path();
    return path_buffer.str();
}

std::string PerformanceManagementHistory::Global::Periodic::SonetHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonet-history";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::SonetHistory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::SonetHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sonet-port-histories")
    {
        if(sonet_port_histories == nullptr)
        {
            sonet_port_histories = std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories>();
        }
        return sonet_port_histories;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::SonetHistory::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(sonet_port_histories != nullptr)
    {
        children["sonet-port-histories"] = sonet_port_histories;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sonet-port-histories")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistories()
{

    yang_name = "sonet-port-histories"; yang_parent_name = "sonet-history"; is_top_level_class = false; has_list_ancestor = false;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::~SonetPortHistories()
{
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::has_data() const
{
    for (std::size_t index=0; index<sonet_port_history.size(); index++)
    {
        if(sonet_port_history[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::has_operation() const
{
    for (std::size_t index=0; index<sonet_port_history.size(); index++)
    {
        if(sonet_port_history[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-pmengine-oper:performance-management-history/global/periodic/sonet-history/" << get_segment_path();
    return path_buffer.str();
}

std::string PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonet-port-histories";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sonet-port-history")
    {
        for(auto const & c : sonet_port_history)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory>();
        c->parent = this;
        sonet_port_history.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sonet_port_history)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sonet-port-history")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetPortHistory()
    :
    name{YType::str, "name"}
    	,
    sonet_hour24_history(std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History>())
	,sonet_minute15_history(std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History>())
{
    sonet_hour24_history->parent = this;
    sonet_minute15_history->parent = this;

    yang_name = "sonet-port-history"; yang_parent_name = "sonet-port-histories"; is_top_level_class = false; has_list_ancestor = false;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::~SonetPortHistory()
{
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::has_data() const
{
    return name.is_set
	|| (sonet_hour24_history !=  nullptr && sonet_hour24_history->has_data())
	|| (sonet_minute15_history !=  nullptr && sonet_minute15_history->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (sonet_hour24_history !=  nullptr && sonet_hour24_history->has_operation())
	|| (sonet_minute15_history !=  nullptr && sonet_minute15_history->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-pmengine-oper:performance-management-history/global/periodic/sonet-history/sonet-port-histories/" << get_segment_path();
    return path_buffer.str();
}

std::string PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonet-port-history" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sonet-hour24-history")
    {
        if(sonet_hour24_history == nullptr)
        {
            sonet_hour24_history = std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History>();
        }
        return sonet_hour24_history;
    }

    if(child_yang_name == "sonet-minute15-history")
    {
        if(sonet_minute15_history == nullptr)
        {
            sonet_minute15_history = std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History>();
        }
        return sonet_minute15_history;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(sonet_hour24_history != nullptr)
    {
        children["sonet-hour24-history"] = sonet_hour24_history;
    }

    if(sonet_minute15_history != nullptr)
    {
        children["sonet-minute15-history"] = sonet_minute15_history;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sonet-hour24-history" || name == "sonet-minute15-history" || name == "name")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24History()
    :
    sonet_hour24_path_histories(std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories>())
	,sonet_hour24ocn_histories(std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories>())
{
    sonet_hour24_path_histories->parent = this;
    sonet_hour24ocn_histories->parent = this;

    yang_name = "sonet-hour24-history"; yang_parent_name = "sonet-port-history"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::~SonetHour24History()
{
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::has_data() const
{
    return (sonet_hour24_path_histories !=  nullptr && sonet_hour24_path_histories->has_data())
	|| (sonet_hour24ocn_histories !=  nullptr && sonet_hour24ocn_histories->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::has_operation() const
{
    return is_set(yfilter)
	|| (sonet_hour24_path_histories !=  nullptr && sonet_hour24_path_histories->has_operation())
	|| (sonet_hour24ocn_histories !=  nullptr && sonet_hour24ocn_histories->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonet-hour24-history";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sonet-hour24-path-histories")
    {
        if(sonet_hour24_path_histories == nullptr)
        {
            sonet_hour24_path_histories = std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories>();
        }
        return sonet_hour24_path_histories;
    }

    if(child_yang_name == "sonet-hour24ocn-histories")
    {
        if(sonet_hour24ocn_histories == nullptr)
        {
            sonet_hour24ocn_histories = std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories>();
        }
        return sonet_hour24ocn_histories;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(sonet_hour24_path_histories != nullptr)
    {
        children["sonet-hour24-path-histories"] = sonet_hour24_path_histories;
    }

    if(sonet_hour24ocn_histories != nullptr)
    {
        children["sonet-hour24ocn-histories"] = sonet_hour24ocn_histories;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sonet-hour24-path-histories" || name == "sonet-hour24ocn-histories")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistories()
{

    yang_name = "sonet-hour24ocn-histories"; yang_parent_name = "sonet-hour24-history"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::~SonetHour24OcnHistories()
{
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::has_data() const
{
    for (std::size_t index=0; index<sonet_hour24ocn_history.size(); index++)
    {
        if(sonet_hour24ocn_history[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::has_operation() const
{
    for (std::size_t index=0; index<sonet_hour24ocn_history.size(); index++)
    {
        if(sonet_hour24ocn_history[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonet-hour24ocn-histories";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sonet-hour24ocn-history")
    {
        for(auto const & c : sonet_hour24ocn_history)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory>();
        c->parent = this;
        sonet_hour24ocn_history.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sonet_hour24ocn_history)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sonet-hour24ocn-history")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnHistory()
    :
    number{YType::int32, "number"}
    	,
    sonet_hour24ocn_time_line_instances(std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances>())
{
    sonet_hour24ocn_time_line_instances->parent = this;

    yang_name = "sonet-hour24ocn-history"; yang_parent_name = "sonet-hour24ocn-histories"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::~SonetHour24OcnHistory()
{
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::has_data() const
{
    return number.is_set
	|| (sonet_hour24ocn_time_line_instances !=  nullptr && sonet_hour24ocn_time_line_instances->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| (sonet_hour24ocn_time_line_instances !=  nullptr && sonet_hour24ocn_time_line_instances->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonet-hour24ocn-history" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sonet-hour24ocn-time-line-instances")
    {
        if(sonet_hour24ocn_time_line_instances == nullptr)
        {
            sonet_hour24ocn_time_line_instances = std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances>();
        }
        return sonet_hour24ocn_time_line_instances;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(sonet_hour24ocn_time_line_instances != nullptr)
    {
        children["sonet-hour24ocn-time-line-instances"] = sonet_hour24ocn_time_line_instances;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sonet-hour24ocn-time-line-instances" || name == "number")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstances()
{

    yang_name = "sonet-hour24ocn-time-line-instances"; yang_parent_name = "sonet-hour24ocn-history"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::~SonetHour24OcnTimeLineInstances()
{
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::has_data() const
{
    for (std::size_t index=0; index<sonet_hour24ocn_time_line_instance.size(); index++)
    {
        if(sonet_hour24ocn_time_line_instance[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::has_operation() const
{
    for (std::size_t index=0; index<sonet_hour24ocn_time_line_instance.size(); index++)
    {
        if(sonet_hour24ocn_time_line_instance[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonet-hour24ocn-time-line-instances";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sonet-hour24ocn-time-line-instance")
    {
        for(auto const & c : sonet_hour24ocn_time_line_instance)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance>();
        c->parent = this;
        sonet_hour24ocn_time_line_instance.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sonet_hour24ocn_time_line_instance)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sonet-hour24ocn-time-line-instance")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::SonetHour24OcnTimeLineInstance()
    :
    number{YType::int32, "number"},
    index_{YType::uint32, "index"},
    last_clear15_min_time{YType::str, "last-clear15-min-time"},
    last_clear24_hr_time{YType::str, "last-clear24-hr-time"},
    last_clear_time{YType::str, "last-clear-time"},
    timestamp{YType::str, "timestamp"},
    valid{YType::boolean, "valid"}
    	,
    fe_line(std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::FeLine>())
	,line(std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::Line>())
	,section(std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::Section>())
{
    fe_line->parent = this;
    line->parent = this;
    section->parent = this;

    yang_name = "sonet-hour24ocn-time-line-instance"; yang_parent_name = "sonet-hour24ocn-time-line-instances"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::~SonetHour24OcnTimeLineInstance()
{
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::has_data() const
{
    return number.is_set
	|| index_.is_set
	|| last_clear15_min_time.is_set
	|| last_clear24_hr_time.is_set
	|| last_clear_time.is_set
	|| timestamp.is_set
	|| valid.is_set
	|| (fe_line !=  nullptr && fe_line->has_data())
	|| (line !=  nullptr && line->has_data())
	|| (section !=  nullptr && section->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(last_clear15_min_time.yfilter)
	|| ydk::is_set(last_clear24_hr_time.yfilter)
	|| ydk::is_set(last_clear_time.yfilter)
	|| ydk::is_set(timestamp.yfilter)
	|| ydk::is_set(valid.yfilter)
	|| (fe_line !=  nullptr && fe_line->has_operation())
	|| (line !=  nullptr && line->has_operation())
	|| (section !=  nullptr && section->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonet-hour24ocn-time-line-instance" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (last_clear15_min_time.is_set || is_set(last_clear15_min_time.yfilter)) leaf_name_data.push_back(last_clear15_min_time.get_name_leafdata());
    if (last_clear24_hr_time.is_set || is_set(last_clear24_hr_time.yfilter)) leaf_name_data.push_back(last_clear24_hr_time.get_name_leafdata());
    if (last_clear_time.is_set || is_set(last_clear_time.yfilter)) leaf_name_data.push_back(last_clear_time.get_name_leafdata());
    if (timestamp.is_set || is_set(timestamp.yfilter)) leaf_name_data.push_back(timestamp.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fe-line")
    {
        if(fe_line == nullptr)
        {
            fe_line = std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::FeLine>();
        }
        return fe_line;
    }

    if(child_yang_name == "line")
    {
        if(line == nullptr)
        {
            line = std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::Line>();
        }
        return line;
    }

    if(child_yang_name == "section")
    {
        if(section == nullptr)
        {
            section = std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::Section>();
        }
        return section;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(fe_line != nullptr)
    {
        children["fe-line"] = fe_line;
    }

    if(line != nullptr)
    {
        children["line"] = line;
    }

    if(section != nullptr)
    {
        children["section"] = section;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "last-clear-time")
    {
        last_clear_time = value;
        last_clear_time.value_namespace = name_space;
        last_clear_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timestamp")
    {
        timestamp = value;
        timestamp.value_namespace = name_space;
        timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "last-clear15-min-time")
    {
        last_clear15_min_time.yfilter = yfilter;
    }
    if(value_path == "last-clear24-hr-time")
    {
        last_clear24_hr_time.yfilter = yfilter;
    }
    if(value_path == "last-clear-time")
    {
        last_clear_time.yfilter = yfilter;
    }
    if(value_path == "timestamp")
    {
        timestamp.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fe-line" || name == "line" || name == "section" || name == "number" || name == "index" || name == "last-clear15-min-time" || name == "last-clear24-hr-time" || name == "last-clear-time" || name == "timestamp" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::FeLine::FeLine()
    :
    far_end_line_c_vs(std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::FeLine::FarEndLineCVs>())
	,far_end_line_e_ss(std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::FeLine::FarEndLineESs>())
	,far_end_line_fc_ls(std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::FeLine::FarEndLineFcLs>())
	,far_end_line_se_ss(std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::FeLine::FarEndLineSeSs>())
	,far_end_line_ua_ss(std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::FeLine::FarEndLineUaSs>())
{
    far_end_line_c_vs->parent = this;
    far_end_line_e_ss->parent = this;
    far_end_line_fc_ls->parent = this;
    far_end_line_se_ss->parent = this;
    far_end_line_ua_ss->parent = this;

    yang_name = "fe-line"; yang_parent_name = "sonet-hour24ocn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::FeLine::~FeLine()
{
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::FeLine::has_data() const
{
    return (far_end_line_c_vs !=  nullptr && far_end_line_c_vs->has_data())
	|| (far_end_line_e_ss !=  nullptr && far_end_line_e_ss->has_data())
	|| (far_end_line_fc_ls !=  nullptr && far_end_line_fc_ls->has_data())
	|| (far_end_line_se_ss !=  nullptr && far_end_line_se_ss->has_data())
	|| (far_end_line_ua_ss !=  nullptr && far_end_line_ua_ss->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::FeLine::has_operation() const
{
    return is_set(yfilter)
	|| (far_end_line_c_vs !=  nullptr && far_end_line_c_vs->has_operation())
	|| (far_end_line_e_ss !=  nullptr && far_end_line_e_ss->has_operation())
	|| (far_end_line_fc_ls !=  nullptr && far_end_line_fc_ls->has_operation())
	|| (far_end_line_se_ss !=  nullptr && far_end_line_se_ss->has_operation())
	|| (far_end_line_ua_ss !=  nullptr && far_end_line_ua_ss->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::FeLine::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fe-line";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::FeLine::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::FeLine::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "far-end-line-c-vs")
    {
        if(far_end_line_c_vs == nullptr)
        {
            far_end_line_c_vs = std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::FeLine::FarEndLineCVs>();
        }
        return far_end_line_c_vs;
    }

    if(child_yang_name == "far-end-line-e-ss")
    {
        if(far_end_line_e_ss == nullptr)
        {
            far_end_line_e_ss = std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::FeLine::FarEndLineESs>();
        }
        return far_end_line_e_ss;
    }

    if(child_yang_name == "far-end-line-fc-ls")
    {
        if(far_end_line_fc_ls == nullptr)
        {
            far_end_line_fc_ls = std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::FeLine::FarEndLineFcLs>();
        }
        return far_end_line_fc_ls;
    }

    if(child_yang_name == "far-end-line-se-ss")
    {
        if(far_end_line_se_ss == nullptr)
        {
            far_end_line_se_ss = std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::FeLine::FarEndLineSeSs>();
        }
        return far_end_line_se_ss;
    }

    if(child_yang_name == "far-end-line-ua-ss")
    {
        if(far_end_line_ua_ss == nullptr)
        {
            far_end_line_ua_ss = std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::FeLine::FarEndLineUaSs>();
        }
        return far_end_line_ua_ss;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::FeLine::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(far_end_line_c_vs != nullptr)
    {
        children["far-end-line-c-vs"] = far_end_line_c_vs;
    }

    if(far_end_line_e_ss != nullptr)
    {
        children["far-end-line-e-ss"] = far_end_line_e_ss;
    }

    if(far_end_line_fc_ls != nullptr)
    {
        children["far-end-line-fc-ls"] = far_end_line_fc_ls;
    }

    if(far_end_line_se_ss != nullptr)
    {
        children["far-end-line-se-ss"] = far_end_line_se_ss;
    }

    if(far_end_line_ua_ss != nullptr)
    {
        children["far-end-line-ua-ss"] = far_end_line_ua_ss;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::FeLine::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::FeLine::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::FeLine::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "far-end-line-c-vs" || name == "far-end-line-e-ss" || name == "far-end-line-fc-ls" || name == "far-end-line-se-ss" || name == "far-end-line-ua-ss")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::FeLine::FarEndLineCVs::FarEndLineCVs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "far-end-line-c-vs"; yang_parent_name = "fe-line"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::FeLine::FarEndLineCVs::~FarEndLineCVs()
{
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::FeLine::FarEndLineCVs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::FeLine::FarEndLineCVs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::FeLine::FarEndLineCVs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "far-end-line-c-vs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::FeLine::FarEndLineCVs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::FeLine::FarEndLineCVs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::FeLine::FarEndLineCVs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::FeLine::FarEndLineCVs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::FeLine::FarEndLineCVs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::FeLine::FarEndLineCVs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::FeLine::FarEndLineESs::FarEndLineESs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "far-end-line-e-ss"; yang_parent_name = "fe-line"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::FeLine::FarEndLineESs::~FarEndLineESs()
{
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::FeLine::FarEndLineESs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::FeLine::FarEndLineESs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::FeLine::FarEndLineESs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "far-end-line-e-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::FeLine::FarEndLineESs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::FeLine::FarEndLineESs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::FeLine::FarEndLineESs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::FeLine::FarEndLineESs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::FeLine::FarEndLineESs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::FeLine::FarEndLineESs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::FeLine::FarEndLineFcLs::FarEndLineFcLs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "far-end-line-fc-ls"; yang_parent_name = "fe-line"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::FeLine::FarEndLineFcLs::~FarEndLineFcLs()
{
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::FeLine::FarEndLineFcLs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::FeLine::FarEndLineFcLs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::FeLine::FarEndLineFcLs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "far-end-line-fc-ls";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::FeLine::FarEndLineFcLs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::FeLine::FarEndLineFcLs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::FeLine::FarEndLineFcLs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::FeLine::FarEndLineFcLs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::FeLine::FarEndLineFcLs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::FeLine::FarEndLineFcLs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::FeLine::FarEndLineSeSs::FarEndLineSeSs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "far-end-line-se-ss"; yang_parent_name = "fe-line"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::FeLine::FarEndLineSeSs::~FarEndLineSeSs()
{
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::FeLine::FarEndLineSeSs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::FeLine::FarEndLineSeSs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::FeLine::FarEndLineSeSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "far-end-line-se-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::FeLine::FarEndLineSeSs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::FeLine::FarEndLineSeSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::FeLine::FarEndLineSeSs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::FeLine::FarEndLineSeSs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::FeLine::FarEndLineSeSs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::FeLine::FarEndLineSeSs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::FeLine::FarEndLineUaSs::FarEndLineUaSs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "far-end-line-ua-ss"; yang_parent_name = "fe-line"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::FeLine::FarEndLineUaSs::~FarEndLineUaSs()
{
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::FeLine::FarEndLineUaSs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::FeLine::FarEndLineUaSs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::FeLine::FarEndLineUaSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "far-end-line-ua-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::FeLine::FarEndLineUaSs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::FeLine::FarEndLineUaSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::FeLine::FarEndLineUaSs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::FeLine::FarEndLineUaSs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::FeLine::FarEndLineUaSs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::FeLine::FarEndLineUaSs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::Line::Line()
    :
    line_status{YType::int32, "line-status"}
    	,
    line_c_vs(std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::Line::LineCVs>())
	,line_e_ss(std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::Line::LineESs>())
	,line_fc_ls(std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::Line::LineFcLs>())
	,line_se_ss(std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::Line::LineSeSs>())
	,line_ua_ss(std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::Line::LineUaSs>())
{
    line_c_vs->parent = this;
    line_e_ss->parent = this;
    line_fc_ls->parent = this;
    line_se_ss->parent = this;
    line_ua_ss->parent = this;

    yang_name = "line"; yang_parent_name = "sonet-hour24ocn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::Line::~Line()
{
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::Line::has_data() const
{
    return line_status.is_set
	|| (line_c_vs !=  nullptr && line_c_vs->has_data())
	|| (line_e_ss !=  nullptr && line_e_ss->has_data())
	|| (line_fc_ls !=  nullptr && line_fc_ls->has_data())
	|| (line_se_ss !=  nullptr && line_se_ss->has_data())
	|| (line_ua_ss !=  nullptr && line_ua_ss->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::Line::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(line_status.yfilter)
	|| (line_c_vs !=  nullptr && line_c_vs->has_operation())
	|| (line_e_ss !=  nullptr && line_e_ss->has_operation())
	|| (line_fc_ls !=  nullptr && line_fc_ls->has_operation())
	|| (line_se_ss !=  nullptr && line_se_ss->has_operation())
	|| (line_ua_ss !=  nullptr && line_ua_ss->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::Line::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::Line::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (line_status.is_set || is_set(line_status.yfilter)) leaf_name_data.push_back(line_status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::Line::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "line-c-vs")
    {
        if(line_c_vs == nullptr)
        {
            line_c_vs = std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::Line::LineCVs>();
        }
        return line_c_vs;
    }

    if(child_yang_name == "line-e-ss")
    {
        if(line_e_ss == nullptr)
        {
            line_e_ss = std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::Line::LineESs>();
        }
        return line_e_ss;
    }

    if(child_yang_name == "line-fc-ls")
    {
        if(line_fc_ls == nullptr)
        {
            line_fc_ls = std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::Line::LineFcLs>();
        }
        return line_fc_ls;
    }

    if(child_yang_name == "line-se-ss")
    {
        if(line_se_ss == nullptr)
        {
            line_se_ss = std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::Line::LineSeSs>();
        }
        return line_se_ss;
    }

    if(child_yang_name == "line-ua-ss")
    {
        if(line_ua_ss == nullptr)
        {
            line_ua_ss = std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::Line::LineUaSs>();
        }
        return line_ua_ss;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::Line::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(line_c_vs != nullptr)
    {
        children["line-c-vs"] = line_c_vs;
    }

    if(line_e_ss != nullptr)
    {
        children["line-e-ss"] = line_e_ss;
    }

    if(line_fc_ls != nullptr)
    {
        children["line-fc-ls"] = line_fc_ls;
    }

    if(line_se_ss != nullptr)
    {
        children["line-se-ss"] = line_se_ss;
    }

    if(line_ua_ss != nullptr)
    {
        children["line-ua-ss"] = line_ua_ss;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::Line::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "line-status")
    {
        line_status = value;
        line_status.value_namespace = name_space;
        line_status.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::Line::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "line-status")
    {
        line_status.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::Line::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "line-c-vs" || name == "line-e-ss" || name == "line-fc-ls" || name == "line-se-ss" || name == "line-ua-ss" || name == "line-status")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::Line::LineCVs::LineCVs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "line-c-vs"; yang_parent_name = "line"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::Line::LineCVs::~LineCVs()
{
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::Line::LineCVs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::Line::LineCVs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::Line::LineCVs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line-c-vs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::Line::LineCVs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::Line::LineCVs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::Line::LineCVs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::Line::LineCVs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::Line::LineCVs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::Line::LineCVs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::Line::LineESs::LineESs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "line-e-ss"; yang_parent_name = "line"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::Line::LineESs::~LineESs()
{
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::Line::LineESs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::Line::LineESs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::Line::LineESs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line-e-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::Line::LineESs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::Line::LineESs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::Line::LineESs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::Line::LineESs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::Line::LineESs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::Line::LineESs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::Line::LineFcLs::LineFcLs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "line-fc-ls"; yang_parent_name = "line"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::Line::LineFcLs::~LineFcLs()
{
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::Line::LineFcLs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::Line::LineFcLs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::Line::LineFcLs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line-fc-ls";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::Line::LineFcLs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::Line::LineFcLs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::Line::LineFcLs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::Line::LineFcLs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::Line::LineFcLs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::Line::LineFcLs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::Line::LineSeSs::LineSeSs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "line-se-ss"; yang_parent_name = "line"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::Line::LineSeSs::~LineSeSs()
{
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::Line::LineSeSs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::Line::LineSeSs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::Line::LineSeSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line-se-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::Line::LineSeSs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::Line::LineSeSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::Line::LineSeSs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::Line::LineSeSs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::Line::LineSeSs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::Line::LineSeSs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::Line::LineUaSs::LineUaSs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "line-ua-ss"; yang_parent_name = "line"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::Line::LineUaSs::~LineUaSs()
{
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::Line::LineUaSs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::Line::LineUaSs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::Line::LineUaSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line-ua-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::Line::LineUaSs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::Line::LineUaSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::Line::LineUaSs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::Line::LineUaSs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::Line::LineUaSs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::Line::LineUaSs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::Section::Section()
    :
    section_status{YType::int32, "section-status"}
    	,
    section_c_vs(std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::Section::SectionCVs>())
	,section_e_ss(std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::Section::SectionESs>())
	,section_se_ss(std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::Section::SectionSeSs>())
	,section_sef_ss(std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::Section::SectionSefSs>())
{
    section_c_vs->parent = this;
    section_e_ss->parent = this;
    section_se_ss->parent = this;
    section_sef_ss->parent = this;

    yang_name = "section"; yang_parent_name = "sonet-hour24ocn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::Section::~Section()
{
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::Section::has_data() const
{
    return section_status.is_set
	|| (section_c_vs !=  nullptr && section_c_vs->has_data())
	|| (section_e_ss !=  nullptr && section_e_ss->has_data())
	|| (section_se_ss !=  nullptr && section_se_ss->has_data())
	|| (section_sef_ss !=  nullptr && section_sef_ss->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::Section::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(section_status.yfilter)
	|| (section_c_vs !=  nullptr && section_c_vs->has_operation())
	|| (section_e_ss !=  nullptr && section_e_ss->has_operation())
	|| (section_se_ss !=  nullptr && section_se_ss->has_operation())
	|| (section_sef_ss !=  nullptr && section_sef_ss->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::Section::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "section";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::Section::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (section_status.is_set || is_set(section_status.yfilter)) leaf_name_data.push_back(section_status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::Section::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "section-c-vs")
    {
        if(section_c_vs == nullptr)
        {
            section_c_vs = std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::Section::SectionCVs>();
        }
        return section_c_vs;
    }

    if(child_yang_name == "section-e-ss")
    {
        if(section_e_ss == nullptr)
        {
            section_e_ss = std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::Section::SectionESs>();
        }
        return section_e_ss;
    }

    if(child_yang_name == "section-se-ss")
    {
        if(section_se_ss == nullptr)
        {
            section_se_ss = std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::Section::SectionSeSs>();
        }
        return section_se_ss;
    }

    if(child_yang_name == "section-sef-ss")
    {
        if(section_sef_ss == nullptr)
        {
            section_sef_ss = std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::Section::SectionSefSs>();
        }
        return section_sef_ss;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::Section::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(section_c_vs != nullptr)
    {
        children["section-c-vs"] = section_c_vs;
    }

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

    return children;
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::Section::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "section-status")
    {
        section_status = value;
        section_status.value_namespace = name_space;
        section_status.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::Section::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "section-status")
    {
        section_status.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::Section::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "section-c-vs" || name == "section-e-ss" || name == "section-se-ss" || name == "section-sef-ss" || name == "section-status")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::Section::SectionCVs::SectionCVs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "section-c-vs"; yang_parent_name = "section"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::Section::SectionCVs::~SectionCVs()
{
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::Section::SectionCVs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::Section::SectionCVs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::Section::SectionCVs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "section-c-vs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::Section::SectionCVs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::Section::SectionCVs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::Section::SectionCVs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::Section::SectionCVs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::Section::SectionCVs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::Section::SectionCVs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::Section::SectionESs::SectionESs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "section-e-ss"; yang_parent_name = "section"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::Section::SectionESs::~SectionESs()
{
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::Section::SectionESs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::Section::SectionESs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::Section::SectionESs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "section-e-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::Section::SectionESs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::Section::SectionESs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::Section::SectionESs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::Section::SectionESs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::Section::SectionESs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::Section::SectionESs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::Section::SectionSeSs::SectionSeSs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "section-se-ss"; yang_parent_name = "section"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::Section::SectionSeSs::~SectionSeSs()
{
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::Section::SectionSeSs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::Section::SectionSeSs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::Section::SectionSeSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "section-se-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::Section::SectionSeSs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::Section::SectionSeSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::Section::SectionSeSs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::Section::SectionSeSs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::Section::SectionSeSs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::Section::SectionSeSs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::Section::SectionSefSs::SectionSefSs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "section-sef-ss"; yang_parent_name = "section"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::Section::SectionSefSs::~SectionSefSs()
{
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::Section::SectionSefSs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::Section::SectionSefSs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::Section::SectionSefSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "section-sef-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::Section::SectionSefSs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::Section::SectionSefSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::Section::SectionSefSs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::Section::SectionSefSs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::Section::SectionSefSs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::Section::SectionSefSs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistories()
{

    yang_name = "sonet-hour24-path-histories"; yang_parent_name = "sonet-hour24-history"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::~SonetHour24PathHistories()
{
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::has_data() const
{
    for (std::size_t index=0; index<sonet_hour24_path_history.size(); index++)
    {
        if(sonet_hour24_path_history[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::has_operation() const
{
    for (std::size_t index=0; index<sonet_hour24_path_history.size(); index++)
    {
        if(sonet_hour24_path_history[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonet-hour24-path-histories";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sonet-hour24-path-history")
    {
        for(auto const & c : sonet_hour24_path_history)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory>();
        c->parent = this;
        sonet_hour24_path_history.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sonet_hour24_path_history)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sonet-hour24-path-history")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathHistory()
    :
    number{YType::int32, "number"}
    	,
    sonet_hour24_path_time_line_instances(std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances>())
{
    sonet_hour24_path_time_line_instances->parent = this;

    yang_name = "sonet-hour24-path-history"; yang_parent_name = "sonet-hour24-path-histories"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::~SonetHour24PathHistory()
{
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::has_data() const
{
    return number.is_set
	|| (sonet_hour24_path_time_line_instances !=  nullptr && sonet_hour24_path_time_line_instances->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| (sonet_hour24_path_time_line_instances !=  nullptr && sonet_hour24_path_time_line_instances->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonet-hour24-path-history" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sonet-hour24-path-time-line-instances")
    {
        if(sonet_hour24_path_time_line_instances == nullptr)
        {
            sonet_hour24_path_time_line_instances = std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances>();
        }
        return sonet_hour24_path_time_line_instances;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(sonet_hour24_path_time_line_instances != nullptr)
    {
        children["sonet-hour24-path-time-line-instances"] = sonet_hour24_path_time_line_instances;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sonet-hour24-path-time-line-instances" || name == "number")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstances()
{

    yang_name = "sonet-hour24-path-time-line-instances"; yang_parent_name = "sonet-hour24-path-history"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::~SonetHour24PathTimeLineInstances()
{
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::has_data() const
{
    for (std::size_t index=0; index<sonet_hour24_path_time_line_instance.size(); index++)
    {
        if(sonet_hour24_path_time_line_instance[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::has_operation() const
{
    for (std::size_t index=0; index<sonet_hour24_path_time_line_instance.size(); index++)
    {
        if(sonet_hour24_path_time_line_instance[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonet-hour24-path-time-line-instances";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sonet-hour24-path-time-line-instance")
    {
        for(auto const & c : sonet_hour24_path_time_line_instance)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance>();
        c->parent = this;
        sonet_hour24_path_time_line_instance.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sonet_hour24_path_time_line_instance)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sonet-hour24-path-time-line-instance")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::SonetHour24PathTimeLineInstance()
    :
    number{YType::int32, "number"},
    index_{YType::uint32, "index"},
    last_clear15_min_time{YType::str, "last-clear15-min-time"},
    last_clear24_hr_time{YType::str, "last-clear24-hr-time"},
    last_clear_time{YType::str, "last-clear-time"},
    timestamp{YType::str, "timestamp"},
    valid{YType::boolean, "valid"}
    	,
    fe_path(std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::FePath>())
	,path(std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::Path>())
{
    fe_path->parent = this;
    path->parent = this;

    yang_name = "sonet-hour24-path-time-line-instance"; yang_parent_name = "sonet-hour24-path-time-line-instances"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::~SonetHour24PathTimeLineInstance()
{
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::has_data() const
{
    return number.is_set
	|| index_.is_set
	|| last_clear15_min_time.is_set
	|| last_clear24_hr_time.is_set
	|| last_clear_time.is_set
	|| timestamp.is_set
	|| valid.is_set
	|| (fe_path !=  nullptr && fe_path->has_data())
	|| (path !=  nullptr && path->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(last_clear15_min_time.yfilter)
	|| ydk::is_set(last_clear24_hr_time.yfilter)
	|| ydk::is_set(last_clear_time.yfilter)
	|| ydk::is_set(timestamp.yfilter)
	|| ydk::is_set(valid.yfilter)
	|| (fe_path !=  nullptr && fe_path->has_operation())
	|| (path !=  nullptr && path->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonet-hour24-path-time-line-instance" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (last_clear15_min_time.is_set || is_set(last_clear15_min_time.yfilter)) leaf_name_data.push_back(last_clear15_min_time.get_name_leafdata());
    if (last_clear24_hr_time.is_set || is_set(last_clear24_hr_time.yfilter)) leaf_name_data.push_back(last_clear24_hr_time.get_name_leafdata());
    if (last_clear_time.is_set || is_set(last_clear_time.yfilter)) leaf_name_data.push_back(last_clear_time.get_name_leafdata());
    if (timestamp.is_set || is_set(timestamp.yfilter)) leaf_name_data.push_back(timestamp.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fe-path")
    {
        if(fe_path == nullptr)
        {
            fe_path = std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::FePath>();
        }
        return fe_path;
    }

    if(child_yang_name == "path")
    {
        if(path == nullptr)
        {
            path = std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::Path>();
        }
        return path;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(fe_path != nullptr)
    {
        children["fe-path"] = fe_path;
    }

    if(path != nullptr)
    {
        children["path"] = path;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "last-clear-time")
    {
        last_clear_time = value;
        last_clear_time.value_namespace = name_space;
        last_clear_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timestamp")
    {
        timestamp = value;
        timestamp.value_namespace = name_space;
        timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "last-clear15-min-time")
    {
        last_clear15_min_time.yfilter = yfilter;
    }
    if(value_path == "last-clear24-hr-time")
    {
        last_clear24_hr_time.yfilter = yfilter;
    }
    if(value_path == "last-clear-time")
    {
        last_clear_time.yfilter = yfilter;
    }
    if(value_path == "timestamp")
    {
        timestamp.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fe-path" || name == "path" || name == "number" || name == "index" || name == "last-clear15-min-time" || name == "last-clear24-hr-time" || name == "last-clear-time" || name == "timestamp" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::FePath::FePath()
    :
    far_end_path_c_vs{YType::uint32, "far-end-path-c-vs"},
    far_end_path_e_ss{YType::uint32, "far-end-path-e-ss"},
    far_end_path_se_ss{YType::uint32, "far-end-path-se-ss"},
    far_end_path_ua_ss{YType::uint32, "far-end-path-ua-ss"}
{

    yang_name = "fe-path"; yang_parent_name = "sonet-hour24-path-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::FePath::~FePath()
{
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::FePath::has_data() const
{
    return far_end_path_c_vs.is_set
	|| far_end_path_e_ss.is_set
	|| far_end_path_se_ss.is_set
	|| far_end_path_ua_ss.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::FePath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(far_end_path_c_vs.yfilter)
	|| ydk::is_set(far_end_path_e_ss.yfilter)
	|| ydk::is_set(far_end_path_se_ss.yfilter)
	|| ydk::is_set(far_end_path_ua_ss.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::FePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fe-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::FePath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (far_end_path_c_vs.is_set || is_set(far_end_path_c_vs.yfilter)) leaf_name_data.push_back(far_end_path_c_vs.get_name_leafdata());
    if (far_end_path_e_ss.is_set || is_set(far_end_path_e_ss.yfilter)) leaf_name_data.push_back(far_end_path_e_ss.get_name_leafdata());
    if (far_end_path_se_ss.is_set || is_set(far_end_path_se_ss.yfilter)) leaf_name_data.push_back(far_end_path_se_ss.get_name_leafdata());
    if (far_end_path_ua_ss.is_set || is_set(far_end_path_ua_ss.yfilter)) leaf_name_data.push_back(far_end_path_ua_ss.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::FePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::FePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::FePath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "far-end-path-c-vs")
    {
        far_end_path_c_vs = value;
        far_end_path_c_vs.value_namespace = name_space;
        far_end_path_c_vs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "far-end-path-e-ss")
    {
        far_end_path_e_ss = value;
        far_end_path_e_ss.value_namespace = name_space;
        far_end_path_e_ss.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "far-end-path-se-ss")
    {
        far_end_path_se_ss = value;
        far_end_path_se_ss.value_namespace = name_space;
        far_end_path_se_ss.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "far-end-path-ua-ss")
    {
        far_end_path_ua_ss = value;
        far_end_path_ua_ss.value_namespace = name_space;
        far_end_path_ua_ss.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::FePath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "far-end-path-c-vs")
    {
        far_end_path_c_vs.yfilter = yfilter;
    }
    if(value_path == "far-end-path-e-ss")
    {
        far_end_path_e_ss.yfilter = yfilter;
    }
    if(value_path == "far-end-path-se-ss")
    {
        far_end_path_se_ss.yfilter = yfilter;
    }
    if(value_path == "far-end-path-ua-ss")
    {
        far_end_path_ua_ss.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::FePath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "far-end-path-c-vs" || name == "far-end-path-e-ss" || name == "far-end-path-se-ss" || name == "far-end-path-ua-ss")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::Path::Path()
    :
    path_status{YType::int32, "path-status"},
    path_width{YType::enumeration, "path-width"}
    	,
    path_c_vs(std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::Path::PathCVs>())
	,path_e_ss(std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::Path::PathESs>())
	,path_se_ss(std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::Path::PathSeSs>())
	,path_ua_ss(std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::Path::PathUaSs>())
{
    path_c_vs->parent = this;
    path_e_ss->parent = this;
    path_se_ss->parent = this;
    path_ua_ss->parent = this;

    yang_name = "path"; yang_parent_name = "sonet-hour24-path-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::Path::~Path()
{
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::Path::has_data() const
{
    return path_status.is_set
	|| path_width.is_set
	|| (path_c_vs !=  nullptr && path_c_vs->has_data())
	|| (path_e_ss !=  nullptr && path_e_ss->has_data())
	|| (path_se_ss !=  nullptr && path_se_ss->has_data())
	|| (path_ua_ss !=  nullptr && path_ua_ss->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::Path::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path_status.yfilter)
	|| ydk::is_set(path_width.yfilter)
	|| (path_c_vs !=  nullptr && path_c_vs->has_operation())
	|| (path_e_ss !=  nullptr && path_e_ss->has_operation())
	|| (path_se_ss !=  nullptr && path_se_ss->has_operation())
	|| (path_ua_ss !=  nullptr && path_ua_ss->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::Path::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::Path::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path_status.is_set || is_set(path_status.yfilter)) leaf_name_data.push_back(path_status.get_name_leafdata());
    if (path_width.is_set || is_set(path_width.yfilter)) leaf_name_data.push_back(path_width.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::Path::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path-c-vs")
    {
        if(path_c_vs == nullptr)
        {
            path_c_vs = std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::Path::PathCVs>();
        }
        return path_c_vs;
    }

    if(child_yang_name == "path-e-ss")
    {
        if(path_e_ss == nullptr)
        {
            path_e_ss = std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::Path::PathESs>();
        }
        return path_e_ss;
    }

    if(child_yang_name == "path-se-ss")
    {
        if(path_se_ss == nullptr)
        {
            path_se_ss = std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::Path::PathSeSs>();
        }
        return path_se_ss;
    }

    if(child_yang_name == "path-ua-ss")
    {
        if(path_ua_ss == nullptr)
        {
            path_ua_ss = std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::Path::PathUaSs>();
        }
        return path_ua_ss;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::Path::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(path_c_vs != nullptr)
    {
        children["path-c-vs"] = path_c_vs;
    }

    if(path_e_ss != nullptr)
    {
        children["path-e-ss"] = path_e_ss;
    }

    if(path_se_ss != nullptr)
    {
        children["path-se-ss"] = path_se_ss;
    }

    if(path_ua_ss != nullptr)
    {
        children["path-ua-ss"] = path_ua_ss;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::Path::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path-status")
    {
        path_status = value;
        path_status.value_namespace = name_space;
        path_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-width")
    {
        path_width = value;
        path_width.value_namespace = name_space;
        path_width.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::Path::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path-status")
    {
        path_status.yfilter = yfilter;
    }
    if(value_path == "path-width")
    {
        path_width.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::Path::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-c-vs" || name == "path-e-ss" || name == "path-se-ss" || name == "path-ua-ss" || name == "path-status" || name == "path-width")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::Path::PathCVs::PathCVs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "path-c-vs"; yang_parent_name = "path"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::Path::PathCVs::~PathCVs()
{
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::Path::PathCVs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::Path::PathCVs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::Path::PathCVs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-c-vs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::Path::PathCVs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::Path::PathCVs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::Path::PathCVs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::Path::PathCVs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::Path::PathCVs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::Path::PathCVs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::Path::PathESs::PathESs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "path-e-ss"; yang_parent_name = "path"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::Path::PathESs::~PathESs()
{
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::Path::PathESs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::Path::PathESs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::Path::PathESs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-e-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::Path::PathESs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::Path::PathESs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::Path::PathESs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::Path::PathESs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::Path::PathESs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::Path::PathESs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::Path::PathSeSs::PathSeSs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "path-se-ss"; yang_parent_name = "path"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::Path::PathSeSs::~PathSeSs()
{
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::Path::PathSeSs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::Path::PathSeSs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::Path::PathSeSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-se-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::Path::PathSeSs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::Path::PathSeSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::Path::PathSeSs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::Path::PathSeSs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::Path::PathSeSs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::Path::PathSeSs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::Path::PathUaSs::PathUaSs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "path-ua-ss"; yang_parent_name = "path"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::Path::PathUaSs::~PathUaSs()
{
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::Path::PathUaSs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::Path::PathUaSs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::Path::PathUaSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-ua-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::Path::PathUaSs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::Path::PathUaSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::Path::PathUaSs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::Path::PathUaSs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::Path::PathUaSs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::Path::PathUaSs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15History()
    :
    sonet_minute15_path_histories(std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories>())
	,sonet_minute15ocn_histories(std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories>())
{
    sonet_minute15_path_histories->parent = this;
    sonet_minute15ocn_histories->parent = this;

    yang_name = "sonet-minute15-history"; yang_parent_name = "sonet-port-history"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::~SonetMinute15History()
{
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::has_data() const
{
    return (sonet_minute15_path_histories !=  nullptr && sonet_minute15_path_histories->has_data())
	|| (sonet_minute15ocn_histories !=  nullptr && sonet_minute15ocn_histories->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::has_operation() const
{
    return is_set(yfilter)
	|| (sonet_minute15_path_histories !=  nullptr && sonet_minute15_path_histories->has_operation())
	|| (sonet_minute15ocn_histories !=  nullptr && sonet_minute15ocn_histories->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonet-minute15-history";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sonet-minute15-path-histories")
    {
        if(sonet_minute15_path_histories == nullptr)
        {
            sonet_minute15_path_histories = std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories>();
        }
        return sonet_minute15_path_histories;
    }

    if(child_yang_name == "sonet-minute15ocn-histories")
    {
        if(sonet_minute15ocn_histories == nullptr)
        {
            sonet_minute15ocn_histories = std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories>();
        }
        return sonet_minute15ocn_histories;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(sonet_minute15_path_histories != nullptr)
    {
        children["sonet-minute15-path-histories"] = sonet_minute15_path_histories;
    }

    if(sonet_minute15ocn_histories != nullptr)
    {
        children["sonet-minute15ocn-histories"] = sonet_minute15ocn_histories;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sonet-minute15-path-histories" || name == "sonet-minute15ocn-histories")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistories()
{

    yang_name = "sonet-minute15ocn-histories"; yang_parent_name = "sonet-minute15-history"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::~SonetMinute15OcnHistories()
{
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::has_data() const
{
    for (std::size_t index=0; index<sonet_minute15ocn_history.size(); index++)
    {
        if(sonet_minute15ocn_history[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::has_operation() const
{
    for (std::size_t index=0; index<sonet_minute15ocn_history.size(); index++)
    {
        if(sonet_minute15ocn_history[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonet-minute15ocn-histories";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sonet-minute15ocn-history")
    {
        for(auto const & c : sonet_minute15ocn_history)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory>();
        c->parent = this;
        sonet_minute15ocn_history.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sonet_minute15ocn_history)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sonet-minute15ocn-history")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnHistory()
    :
    number{YType::int32, "number"}
    	,
    sonet_minute15ocn_time_line_instances(std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances>())
{
    sonet_minute15ocn_time_line_instances->parent = this;

    yang_name = "sonet-minute15ocn-history"; yang_parent_name = "sonet-minute15ocn-histories"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::~SonetMinute15OcnHistory()
{
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::has_data() const
{
    return number.is_set
	|| (sonet_minute15ocn_time_line_instances !=  nullptr && sonet_minute15ocn_time_line_instances->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| (sonet_minute15ocn_time_line_instances !=  nullptr && sonet_minute15ocn_time_line_instances->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonet-minute15ocn-history" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sonet-minute15ocn-time-line-instances")
    {
        if(sonet_minute15ocn_time_line_instances == nullptr)
        {
            sonet_minute15ocn_time_line_instances = std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances>();
        }
        return sonet_minute15ocn_time_line_instances;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(sonet_minute15ocn_time_line_instances != nullptr)
    {
        children["sonet-minute15ocn-time-line-instances"] = sonet_minute15ocn_time_line_instances;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sonet-minute15ocn-time-line-instances" || name == "number")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstances()
{

    yang_name = "sonet-minute15ocn-time-line-instances"; yang_parent_name = "sonet-minute15ocn-history"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::~SonetMinute15OcnTimeLineInstances()
{
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::has_data() const
{
    for (std::size_t index=0; index<sonet_minute15ocn_time_line_instance.size(); index++)
    {
        if(sonet_minute15ocn_time_line_instance[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::has_operation() const
{
    for (std::size_t index=0; index<sonet_minute15ocn_time_line_instance.size(); index++)
    {
        if(sonet_minute15ocn_time_line_instance[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonet-minute15ocn-time-line-instances";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sonet-minute15ocn-time-line-instance")
    {
        for(auto const & c : sonet_minute15ocn_time_line_instance)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance>();
        c->parent = this;
        sonet_minute15ocn_time_line_instance.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sonet_minute15ocn_time_line_instance)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sonet-minute15ocn-time-line-instance")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::SonetMinute15OcnTimeLineInstance()
    :
    number{YType::int32, "number"},
    index_{YType::uint32, "index"},
    last_clear15_min_time{YType::str, "last-clear15-min-time"},
    last_clear24_hr_time{YType::str, "last-clear24-hr-time"},
    last_clear_time{YType::str, "last-clear-time"},
    timestamp{YType::str, "timestamp"},
    valid{YType::boolean, "valid"}
    	,
    fe_line(std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::FeLine>())
	,line(std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::Line>())
	,section(std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::Section>())
{
    fe_line->parent = this;
    line->parent = this;
    section->parent = this;

    yang_name = "sonet-minute15ocn-time-line-instance"; yang_parent_name = "sonet-minute15ocn-time-line-instances"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::~SonetMinute15OcnTimeLineInstance()
{
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::has_data() const
{
    return number.is_set
	|| index_.is_set
	|| last_clear15_min_time.is_set
	|| last_clear24_hr_time.is_set
	|| last_clear_time.is_set
	|| timestamp.is_set
	|| valid.is_set
	|| (fe_line !=  nullptr && fe_line->has_data())
	|| (line !=  nullptr && line->has_data())
	|| (section !=  nullptr && section->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(last_clear15_min_time.yfilter)
	|| ydk::is_set(last_clear24_hr_time.yfilter)
	|| ydk::is_set(last_clear_time.yfilter)
	|| ydk::is_set(timestamp.yfilter)
	|| ydk::is_set(valid.yfilter)
	|| (fe_line !=  nullptr && fe_line->has_operation())
	|| (line !=  nullptr && line->has_operation())
	|| (section !=  nullptr && section->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonet-minute15ocn-time-line-instance" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (last_clear15_min_time.is_set || is_set(last_clear15_min_time.yfilter)) leaf_name_data.push_back(last_clear15_min_time.get_name_leafdata());
    if (last_clear24_hr_time.is_set || is_set(last_clear24_hr_time.yfilter)) leaf_name_data.push_back(last_clear24_hr_time.get_name_leafdata());
    if (last_clear_time.is_set || is_set(last_clear_time.yfilter)) leaf_name_data.push_back(last_clear_time.get_name_leafdata());
    if (timestamp.is_set || is_set(timestamp.yfilter)) leaf_name_data.push_back(timestamp.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fe-line")
    {
        if(fe_line == nullptr)
        {
            fe_line = std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::FeLine>();
        }
        return fe_line;
    }

    if(child_yang_name == "line")
    {
        if(line == nullptr)
        {
            line = std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::Line>();
        }
        return line;
    }

    if(child_yang_name == "section")
    {
        if(section == nullptr)
        {
            section = std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::Section>();
        }
        return section;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(fe_line != nullptr)
    {
        children["fe-line"] = fe_line;
    }

    if(line != nullptr)
    {
        children["line"] = line;
    }

    if(section != nullptr)
    {
        children["section"] = section;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "last-clear-time")
    {
        last_clear_time = value;
        last_clear_time.value_namespace = name_space;
        last_clear_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timestamp")
    {
        timestamp = value;
        timestamp.value_namespace = name_space;
        timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "last-clear15-min-time")
    {
        last_clear15_min_time.yfilter = yfilter;
    }
    if(value_path == "last-clear24-hr-time")
    {
        last_clear24_hr_time.yfilter = yfilter;
    }
    if(value_path == "last-clear-time")
    {
        last_clear_time.yfilter = yfilter;
    }
    if(value_path == "timestamp")
    {
        timestamp.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fe-line" || name == "line" || name == "section" || name == "number" || name == "index" || name == "last-clear15-min-time" || name == "last-clear24-hr-time" || name == "last-clear-time" || name == "timestamp" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::FeLine::FeLine()
    :
    far_end_line_c_vs(std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::FeLine::FarEndLineCVs>())
	,far_end_line_e_ss(std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::FeLine::FarEndLineESs>())
	,far_end_line_fc_ls(std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::FeLine::FarEndLineFcLs>())
	,far_end_line_se_ss(std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::FeLine::FarEndLineSeSs>())
	,far_end_line_ua_ss(std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::FeLine::FarEndLineUaSs>())
{
    far_end_line_c_vs->parent = this;
    far_end_line_e_ss->parent = this;
    far_end_line_fc_ls->parent = this;
    far_end_line_se_ss->parent = this;
    far_end_line_ua_ss->parent = this;

    yang_name = "fe-line"; yang_parent_name = "sonet-minute15ocn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::FeLine::~FeLine()
{
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::FeLine::has_data() const
{
    return (far_end_line_c_vs !=  nullptr && far_end_line_c_vs->has_data())
	|| (far_end_line_e_ss !=  nullptr && far_end_line_e_ss->has_data())
	|| (far_end_line_fc_ls !=  nullptr && far_end_line_fc_ls->has_data())
	|| (far_end_line_se_ss !=  nullptr && far_end_line_se_ss->has_data())
	|| (far_end_line_ua_ss !=  nullptr && far_end_line_ua_ss->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::FeLine::has_operation() const
{
    return is_set(yfilter)
	|| (far_end_line_c_vs !=  nullptr && far_end_line_c_vs->has_operation())
	|| (far_end_line_e_ss !=  nullptr && far_end_line_e_ss->has_operation())
	|| (far_end_line_fc_ls !=  nullptr && far_end_line_fc_ls->has_operation())
	|| (far_end_line_se_ss !=  nullptr && far_end_line_se_ss->has_operation())
	|| (far_end_line_ua_ss !=  nullptr && far_end_line_ua_ss->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::FeLine::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fe-line";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::FeLine::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::FeLine::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "far-end-line-c-vs")
    {
        if(far_end_line_c_vs == nullptr)
        {
            far_end_line_c_vs = std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::FeLine::FarEndLineCVs>();
        }
        return far_end_line_c_vs;
    }

    if(child_yang_name == "far-end-line-e-ss")
    {
        if(far_end_line_e_ss == nullptr)
        {
            far_end_line_e_ss = std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::FeLine::FarEndLineESs>();
        }
        return far_end_line_e_ss;
    }

    if(child_yang_name == "far-end-line-fc-ls")
    {
        if(far_end_line_fc_ls == nullptr)
        {
            far_end_line_fc_ls = std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::FeLine::FarEndLineFcLs>();
        }
        return far_end_line_fc_ls;
    }

    if(child_yang_name == "far-end-line-se-ss")
    {
        if(far_end_line_se_ss == nullptr)
        {
            far_end_line_se_ss = std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::FeLine::FarEndLineSeSs>();
        }
        return far_end_line_se_ss;
    }

    if(child_yang_name == "far-end-line-ua-ss")
    {
        if(far_end_line_ua_ss == nullptr)
        {
            far_end_line_ua_ss = std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::FeLine::FarEndLineUaSs>();
        }
        return far_end_line_ua_ss;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::FeLine::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(far_end_line_c_vs != nullptr)
    {
        children["far-end-line-c-vs"] = far_end_line_c_vs;
    }

    if(far_end_line_e_ss != nullptr)
    {
        children["far-end-line-e-ss"] = far_end_line_e_ss;
    }

    if(far_end_line_fc_ls != nullptr)
    {
        children["far-end-line-fc-ls"] = far_end_line_fc_ls;
    }

    if(far_end_line_se_ss != nullptr)
    {
        children["far-end-line-se-ss"] = far_end_line_se_ss;
    }

    if(far_end_line_ua_ss != nullptr)
    {
        children["far-end-line-ua-ss"] = far_end_line_ua_ss;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::FeLine::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::FeLine::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::FeLine::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "far-end-line-c-vs" || name == "far-end-line-e-ss" || name == "far-end-line-fc-ls" || name == "far-end-line-se-ss" || name == "far-end-line-ua-ss")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::FeLine::FarEndLineCVs::FarEndLineCVs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "far-end-line-c-vs"; yang_parent_name = "fe-line"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::FeLine::FarEndLineCVs::~FarEndLineCVs()
{
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::FeLine::FarEndLineCVs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::FeLine::FarEndLineCVs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::FeLine::FarEndLineCVs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "far-end-line-c-vs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::FeLine::FarEndLineCVs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::FeLine::FarEndLineCVs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::FeLine::FarEndLineCVs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::FeLine::FarEndLineCVs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::FeLine::FarEndLineCVs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::FeLine::FarEndLineCVs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::FeLine::FarEndLineESs::FarEndLineESs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "far-end-line-e-ss"; yang_parent_name = "fe-line"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::FeLine::FarEndLineESs::~FarEndLineESs()
{
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::FeLine::FarEndLineESs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::FeLine::FarEndLineESs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::FeLine::FarEndLineESs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "far-end-line-e-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::FeLine::FarEndLineESs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::FeLine::FarEndLineESs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::FeLine::FarEndLineESs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::FeLine::FarEndLineESs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::FeLine::FarEndLineESs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::FeLine::FarEndLineESs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::FeLine::FarEndLineFcLs::FarEndLineFcLs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "far-end-line-fc-ls"; yang_parent_name = "fe-line"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::FeLine::FarEndLineFcLs::~FarEndLineFcLs()
{
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::FeLine::FarEndLineFcLs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::FeLine::FarEndLineFcLs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::FeLine::FarEndLineFcLs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "far-end-line-fc-ls";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::FeLine::FarEndLineFcLs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::FeLine::FarEndLineFcLs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::FeLine::FarEndLineFcLs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::FeLine::FarEndLineFcLs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::FeLine::FarEndLineFcLs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::FeLine::FarEndLineFcLs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::FeLine::FarEndLineSeSs::FarEndLineSeSs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "far-end-line-se-ss"; yang_parent_name = "fe-line"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::FeLine::FarEndLineSeSs::~FarEndLineSeSs()
{
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::FeLine::FarEndLineSeSs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::FeLine::FarEndLineSeSs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::FeLine::FarEndLineSeSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "far-end-line-se-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::FeLine::FarEndLineSeSs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::FeLine::FarEndLineSeSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::FeLine::FarEndLineSeSs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::FeLine::FarEndLineSeSs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::FeLine::FarEndLineSeSs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::FeLine::FarEndLineSeSs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::FeLine::FarEndLineUaSs::FarEndLineUaSs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "far-end-line-ua-ss"; yang_parent_name = "fe-line"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::FeLine::FarEndLineUaSs::~FarEndLineUaSs()
{
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::FeLine::FarEndLineUaSs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::FeLine::FarEndLineUaSs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::FeLine::FarEndLineUaSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "far-end-line-ua-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::FeLine::FarEndLineUaSs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::FeLine::FarEndLineUaSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::FeLine::FarEndLineUaSs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::FeLine::FarEndLineUaSs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::FeLine::FarEndLineUaSs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::FeLine::FarEndLineUaSs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::Line::Line()
    :
    line_status{YType::int32, "line-status"}
    	,
    line_c_vs(std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::Line::LineCVs>())
	,line_e_ss(std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::Line::LineESs>())
	,line_fc_ls(std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::Line::LineFcLs>())
	,line_se_ss(std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::Line::LineSeSs>())
	,line_ua_ss(std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::Line::LineUaSs>())
{
    line_c_vs->parent = this;
    line_e_ss->parent = this;
    line_fc_ls->parent = this;
    line_se_ss->parent = this;
    line_ua_ss->parent = this;

    yang_name = "line"; yang_parent_name = "sonet-minute15ocn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::Line::~Line()
{
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::Line::has_data() const
{
    return line_status.is_set
	|| (line_c_vs !=  nullptr && line_c_vs->has_data())
	|| (line_e_ss !=  nullptr && line_e_ss->has_data())
	|| (line_fc_ls !=  nullptr && line_fc_ls->has_data())
	|| (line_se_ss !=  nullptr && line_se_ss->has_data())
	|| (line_ua_ss !=  nullptr && line_ua_ss->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::Line::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(line_status.yfilter)
	|| (line_c_vs !=  nullptr && line_c_vs->has_operation())
	|| (line_e_ss !=  nullptr && line_e_ss->has_operation())
	|| (line_fc_ls !=  nullptr && line_fc_ls->has_operation())
	|| (line_se_ss !=  nullptr && line_se_ss->has_operation())
	|| (line_ua_ss !=  nullptr && line_ua_ss->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::Line::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::Line::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (line_status.is_set || is_set(line_status.yfilter)) leaf_name_data.push_back(line_status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::Line::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "line-c-vs")
    {
        if(line_c_vs == nullptr)
        {
            line_c_vs = std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::Line::LineCVs>();
        }
        return line_c_vs;
    }

    if(child_yang_name == "line-e-ss")
    {
        if(line_e_ss == nullptr)
        {
            line_e_ss = std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::Line::LineESs>();
        }
        return line_e_ss;
    }

    if(child_yang_name == "line-fc-ls")
    {
        if(line_fc_ls == nullptr)
        {
            line_fc_ls = std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::Line::LineFcLs>();
        }
        return line_fc_ls;
    }

    if(child_yang_name == "line-se-ss")
    {
        if(line_se_ss == nullptr)
        {
            line_se_ss = std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::Line::LineSeSs>();
        }
        return line_se_ss;
    }

    if(child_yang_name == "line-ua-ss")
    {
        if(line_ua_ss == nullptr)
        {
            line_ua_ss = std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::Line::LineUaSs>();
        }
        return line_ua_ss;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::Line::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(line_c_vs != nullptr)
    {
        children["line-c-vs"] = line_c_vs;
    }

    if(line_e_ss != nullptr)
    {
        children["line-e-ss"] = line_e_ss;
    }

    if(line_fc_ls != nullptr)
    {
        children["line-fc-ls"] = line_fc_ls;
    }

    if(line_se_ss != nullptr)
    {
        children["line-se-ss"] = line_se_ss;
    }

    if(line_ua_ss != nullptr)
    {
        children["line-ua-ss"] = line_ua_ss;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::Line::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "line-status")
    {
        line_status = value;
        line_status.value_namespace = name_space;
        line_status.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::Line::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "line-status")
    {
        line_status.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::Line::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "line-c-vs" || name == "line-e-ss" || name == "line-fc-ls" || name == "line-se-ss" || name == "line-ua-ss" || name == "line-status")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::Line::LineCVs::LineCVs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "line-c-vs"; yang_parent_name = "line"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::Line::LineCVs::~LineCVs()
{
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::Line::LineCVs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::Line::LineCVs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::Line::LineCVs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line-c-vs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::Line::LineCVs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::Line::LineCVs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::Line::LineCVs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::Line::LineCVs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::Line::LineCVs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::Line::LineCVs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}


}
}

