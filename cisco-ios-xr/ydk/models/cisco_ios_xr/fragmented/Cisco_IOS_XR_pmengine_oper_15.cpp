
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_pmengine_oper_15.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_pmengine_oper {

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::OpticsHour24FecTimeLineInstances::OpticsHour24FecTimeLineInstance::EcBits::EcBits()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "ec-bits"; yang_parent_name = "optics-hour24fec-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::OpticsHour24FecTimeLineInstances::OpticsHour24FecTimeLineInstance::EcBits::~EcBits()
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::OpticsHour24FecTimeLineInstances::OpticsHour24FecTimeLineInstance::EcBits::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::OpticsHour24FecTimeLineInstances::OpticsHour24FecTimeLineInstance::EcBits::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::OpticsHour24FecTimeLineInstances::OpticsHour24FecTimeLineInstance::EcBits::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ec-bits";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::OpticsHour24FecTimeLineInstances::OpticsHour24FecTimeLineInstance::EcBits::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::OpticsHour24FecTimeLineInstances::OpticsHour24FecTimeLineInstance::EcBits::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::OpticsHour24FecTimeLineInstances::OpticsHour24FecTimeLineInstance::EcBits::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::OpticsHour24FecTimeLineInstances::OpticsHour24FecTimeLineInstance::EcBits::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::OpticsHour24FecTimeLineInstances::OpticsHour24FecTimeLineInstance::EcBits::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::OpticsHour24FecTimeLineInstances::OpticsHour24FecTimeLineInstance::EcBits::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::OpticsHour24FecTimeLineInstances::OpticsHour24FecTimeLineInstance::UcWords::UcWords()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "uc-words"; yang_parent_name = "optics-hour24fec-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::OpticsHour24FecTimeLineInstances::OpticsHour24FecTimeLineInstance::UcWords::~UcWords()
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::OpticsHour24FecTimeLineInstances::OpticsHour24FecTimeLineInstance::UcWords::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::OpticsHour24FecTimeLineInstances::OpticsHour24FecTimeLineInstance::UcWords::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::OpticsHour24FecTimeLineInstances::OpticsHour24FecTimeLineInstance::UcWords::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uc-words";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::OpticsHour24FecTimeLineInstances::OpticsHour24FecTimeLineInstance::UcWords::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::OpticsHour24FecTimeLineInstances::OpticsHour24FecTimeLineInstance::UcWords::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::OpticsHour24FecTimeLineInstances::OpticsHour24FecTimeLineInstance::UcWords::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::OpticsHour24FecTimeLineInstances::OpticsHour24FecTimeLineInstance::UcWords::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::OpticsHour24FecTimeLineInstances::OpticsHour24FecTimeLineInstance::UcWords::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::OpticsHour24FecTimeLineInstances::OpticsHour24FecTimeLineInstance::UcWords::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::OpticsHour24FecTimeLineInstances::OpticsHour24FecTimeLineInstance::PreFecBer::PreFecBer()
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

    yang_name = "pre-fec-ber"; yang_parent_name = "optics-hour24fec-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::OpticsHour24FecTimeLineInstances::OpticsHour24FecTimeLineInstance::PreFecBer::~PreFecBer()
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::OpticsHour24FecTimeLineInstances::OpticsHour24FecTimeLineInstance::PreFecBer::has_data() const
{
    return minimum.is_set
	|| average.is_set
	|| maximum.is_set
	|| minimum_threshold.is_set
	|| minimum_tca_report.is_set
	|| maximum_threshold.is_set
	|| maximum_tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::OpticsHour24FecTimeLineInstances::OpticsHour24FecTimeLineInstance::PreFecBer::has_operation() const
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

std::string PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::OpticsHour24FecTimeLineInstances::OpticsHour24FecTimeLineInstance::PreFecBer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pre-fec-ber";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::OpticsHour24FecTimeLineInstances::OpticsHour24FecTimeLineInstance::PreFecBer::get_name_leaf_data() const
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

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::OpticsHour24FecTimeLineInstances::OpticsHour24FecTimeLineInstance::PreFecBer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::OpticsHour24FecTimeLineInstances::OpticsHour24FecTimeLineInstance::PreFecBer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::OpticsHour24FecTimeLineInstances::OpticsHour24FecTimeLineInstance::PreFecBer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::OpticsHour24FecTimeLineInstances::OpticsHour24FecTimeLineInstance::PreFecBer::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::OpticsHour24FecTimeLineInstances::OpticsHour24FecTimeLineInstance::PreFecBer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minimum" || name == "average" || name == "maximum" || name == "minimum-threshold" || name == "minimum-tca-report" || name == "maximum-threshold" || name == "maximum-tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::OpticsHour24FecTimeLineInstances::OpticsHour24FecTimeLineInstance::PostFecBer::PostFecBer()
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

    yang_name = "post-fec-ber"; yang_parent_name = "optics-hour24fec-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::OpticsHour24FecTimeLineInstances::OpticsHour24FecTimeLineInstance::PostFecBer::~PostFecBer()
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::OpticsHour24FecTimeLineInstances::OpticsHour24FecTimeLineInstance::PostFecBer::has_data() const
{
    return minimum.is_set
	|| average.is_set
	|| maximum.is_set
	|| minimum_threshold.is_set
	|| minimum_tca_report.is_set
	|| maximum_threshold.is_set
	|| maximum_tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::OpticsHour24FecTimeLineInstances::OpticsHour24FecTimeLineInstance::PostFecBer::has_operation() const
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

std::string PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::OpticsHour24FecTimeLineInstances::OpticsHour24FecTimeLineInstance::PostFecBer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "post-fec-ber";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::OpticsHour24FecTimeLineInstances::OpticsHour24FecTimeLineInstance::PostFecBer::get_name_leaf_data() const
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

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::OpticsHour24FecTimeLineInstances::OpticsHour24FecTimeLineInstance::PostFecBer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::OpticsHour24FecTimeLineInstances::OpticsHour24FecTimeLineInstance::PostFecBer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::OpticsHour24FecTimeLineInstances::OpticsHour24FecTimeLineInstance::PostFecBer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::OpticsHour24FecTimeLineInstances::OpticsHour24FecTimeLineInstance::PostFecBer::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::OpticsHour24FecTimeLineInstances::OpticsHour24FecTimeLineInstance::PostFecBer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minimum" || name == "average" || name == "maximum" || name == "minimum-threshold" || name == "minimum-tca-report" || name == "maximum-threshold" || name == "maximum-tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::OpticsHour24FecTimeLineInstances::OpticsHour24FecTimeLineInstance::Q::Q()
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

    yang_name = "q"; yang_parent_name = "optics-hour24fec-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::OpticsHour24FecTimeLineInstances::OpticsHour24FecTimeLineInstance::Q::~Q()
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::OpticsHour24FecTimeLineInstances::OpticsHour24FecTimeLineInstance::Q::has_data() const
{
    return minimum.is_set
	|| average.is_set
	|| maximum.is_set
	|| minimum_threshold.is_set
	|| minimum_tca_report.is_set
	|| maximum_threshold.is_set
	|| maximum_tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::OpticsHour24FecTimeLineInstances::OpticsHour24FecTimeLineInstance::Q::has_operation() const
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

std::string PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::OpticsHour24FecTimeLineInstances::OpticsHour24FecTimeLineInstance::Q::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "q";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::OpticsHour24FecTimeLineInstances::OpticsHour24FecTimeLineInstance::Q::get_name_leaf_data() const
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

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::OpticsHour24FecTimeLineInstances::OpticsHour24FecTimeLineInstance::Q::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::OpticsHour24FecTimeLineInstances::OpticsHour24FecTimeLineInstance::Q::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::OpticsHour24FecTimeLineInstances::OpticsHour24FecTimeLineInstance::Q::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::OpticsHour24FecTimeLineInstances::OpticsHour24FecTimeLineInstance::Q::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::OpticsHour24FecTimeLineInstances::OpticsHour24FecTimeLineInstance::Q::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minimum" || name == "average" || name == "maximum" || name == "minimum-threshold" || name == "minimum-tca-report" || name == "maximum-threshold" || name == "maximum-tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::OpticsHour24FecTimeLineInstances::OpticsHour24FecTimeLineInstance::Qmargin::Qmargin()
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

    yang_name = "qmargin"; yang_parent_name = "optics-hour24fec-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::OpticsHour24FecTimeLineInstances::OpticsHour24FecTimeLineInstance::Qmargin::~Qmargin()
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::OpticsHour24FecTimeLineInstances::OpticsHour24FecTimeLineInstance::Qmargin::has_data() const
{
    return minimum.is_set
	|| average.is_set
	|| maximum.is_set
	|| minimum_threshold.is_set
	|| minimum_tca_report.is_set
	|| maximum_threshold.is_set
	|| maximum_tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::OpticsHour24FecTimeLineInstances::OpticsHour24FecTimeLineInstance::Qmargin::has_operation() const
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

std::string PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::OpticsHour24FecTimeLineInstances::OpticsHour24FecTimeLineInstance::Qmargin::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qmargin";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::OpticsHour24FecTimeLineInstances::OpticsHour24FecTimeLineInstance::Qmargin::get_name_leaf_data() const
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

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::OpticsHour24FecTimeLineInstances::OpticsHour24FecTimeLineInstance::Qmargin::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::OpticsHour24FecTimeLineInstances::OpticsHour24FecTimeLineInstance::Qmargin::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::OpticsHour24FecTimeLineInstances::OpticsHour24FecTimeLineInstance::Qmargin::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::OpticsHour24FecTimeLineInstances::OpticsHour24FecTimeLineInstance::Qmargin::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::OpticsHour24FecTimeLineInstances::OpticsHour24FecTimeLineInstance::Qmargin::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minimum" || name == "average" || name == "maximum" || name == "minimum-threshold" || name == "minimum-tca-report" || name == "maximum-threshold" || name == "maximum-tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30History()
    :
    optics_second30_optics_histories(std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories>())
	,optics_second30fec_histories(std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories>())
{
    optics_second30_optics_histories->parent = this;
    optics_second30fec_histories->parent = this;

    yang_name = "optics-second30-history"; yang_parent_name = "optics-port-history"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::~OpticsSecond30History()
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::has_data() const
{
    return (optics_second30_optics_histories !=  nullptr && optics_second30_optics_histories->has_data())
	|| (optics_second30fec_histories !=  nullptr && optics_second30fec_histories->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::has_operation() const
{
    return is_set(yfilter)
	|| (optics_second30_optics_histories !=  nullptr && optics_second30_optics_histories->has_operation())
	|| (optics_second30fec_histories !=  nullptr && optics_second30fec_histories->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optics-second30-history";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "optics-second30-optics-histories")
    {
        if(optics_second30_optics_histories == nullptr)
        {
            optics_second30_optics_histories = std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories>();
        }
        return optics_second30_optics_histories;
    }

    if(child_yang_name == "optics-second30fec-histories")
    {
        if(optics_second30fec_histories == nullptr)
        {
            optics_second30fec_histories = std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories>();
        }
        return optics_second30fec_histories;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(optics_second30_optics_histories != nullptr)
    {
        children["optics-second30-optics-histories"] = optics_second30_optics_histories;
    }

    if(optics_second30fec_histories != nullptr)
    {
        children["optics-second30fec-histories"] = optics_second30fec_histories;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "optics-second30-optics-histories" || name == "optics-second30fec-histories")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistories()
{

    yang_name = "optics-second30-optics-histories"; yang_parent_name = "optics-second30-history"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::~OpticsSecond30OpticsHistories()
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::has_data() const
{
    for (std::size_t index=0; index<optics_second30_optics_history.size(); index++)
    {
        if(optics_second30_optics_history[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::has_operation() const
{
    for (std::size_t index=0; index<optics_second30_optics_history.size(); index++)
    {
        if(optics_second30_optics_history[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optics-second30-optics-histories";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "optics-second30-optics-history")
    {
        for(auto const & c : optics_second30_optics_history)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory>();
        c->parent = this;
        optics_second30_optics_history.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : optics_second30_optics_history)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "optics-second30-optics-history")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsHistory()
    :
    number{YType::int32, "number"}
    	,
    optics_second30_optics_time_line_instances(std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances>())
{
    optics_second30_optics_time_line_instances->parent = this;

    yang_name = "optics-second30-optics-history"; yang_parent_name = "optics-second30-optics-histories"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::~OpticsSecond30OpticsHistory()
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::has_data() const
{
    return number.is_set
	|| (optics_second30_optics_time_line_instances !=  nullptr && optics_second30_optics_time_line_instances->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| (optics_second30_optics_time_line_instances !=  nullptr && optics_second30_optics_time_line_instances->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optics-second30-optics-history" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "optics-second30-optics-time-line-instances")
    {
        if(optics_second30_optics_time_line_instances == nullptr)
        {
            optics_second30_optics_time_line_instances = std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances>();
        }
        return optics_second30_optics_time_line_instances;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(optics_second30_optics_time_line_instances != nullptr)
    {
        children["optics-second30-optics-time-line-instances"] = optics_second30_optics_time_line_instances;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "optics-second30-optics-time-line-instances" || name == "number")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstances()
{

    yang_name = "optics-second30-optics-time-line-instances"; yang_parent_name = "optics-second30-optics-history"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::~OpticsSecond30OpticsTimeLineInstances()
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::has_data() const
{
    for (std::size_t index=0; index<optics_second30_optics_time_line_instance.size(); index++)
    {
        if(optics_second30_optics_time_line_instance[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::has_operation() const
{
    for (std::size_t index=0; index<optics_second30_optics_time_line_instance.size(); index++)
    {
        if(optics_second30_optics_time_line_instance[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optics-second30-optics-time-line-instances";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "optics-second30-optics-time-line-instance")
    {
        for(auto const & c : optics_second30_optics_time_line_instance)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance>();
        c->parent = this;
        optics_second30_optics_time_line_instance.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : optics_second30_optics_time_line_instance)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "optics-second30-optics-time-line-instance")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::OpticsSecond30OpticsTimeLineInstance()
    :
    number{YType::int32, "number"},
    index_{YType::uint32, "index"},
    valid{YType::boolean, "valid"},
    timestamp{YType::str, "timestamp"},
    last_clear_time{YType::str, "last-clear-time"},
    last_clear15_min_time{YType::str, "last-clear15-min-time"},
    last_clear30_sec_time{YType::str, "last-clear30-sec-time"},
    last_clear24_hr_time{YType::str, "last-clear24-hr-time"},
    sec30_support{YType::boolean, "sec30-support"}
    	,
    lbc(std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Lbc>())
	,lbc_pc(std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::LbcPc>())
	,opt(std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Opt>())
	,opr(std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Opr>())
	,cd(std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Cd>())
	,dgd(std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Dgd>())
	,pmd(std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Pmd>())
	,osnr(std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Osnr>())
	,center_wavelength(std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::CenterWavelength>())
	,pdl(std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Pdl>())
	,pcr(std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Pcr>())
	,pn(std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Pn>())
	,rx_sig_pow(std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::RxSigPow>())
	,low_sig_freq_off(std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::LowSigFreqOff>())
{
    lbc->parent = this;
    lbc_pc->parent = this;
    opt->parent = this;
    opr->parent = this;
    cd->parent = this;
    dgd->parent = this;
    pmd->parent = this;
    osnr->parent = this;
    center_wavelength->parent = this;
    pdl->parent = this;
    pcr->parent = this;
    pn->parent = this;
    rx_sig_pow->parent = this;
    low_sig_freq_off->parent = this;

    yang_name = "optics-second30-optics-time-line-instance"; yang_parent_name = "optics-second30-optics-time-line-instances"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::~OpticsSecond30OpticsTimeLineInstance()
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::has_data() const
{
    return number.is_set
	|| index_.is_set
	|| valid.is_set
	|| timestamp.is_set
	|| last_clear_time.is_set
	|| last_clear15_min_time.is_set
	|| last_clear30_sec_time.is_set
	|| last_clear24_hr_time.is_set
	|| sec30_support.is_set
	|| (lbc !=  nullptr && lbc->has_data())
	|| (lbc_pc !=  nullptr && lbc_pc->has_data())
	|| (opt !=  nullptr && opt->has_data())
	|| (opr !=  nullptr && opr->has_data())
	|| (cd !=  nullptr && cd->has_data())
	|| (dgd !=  nullptr && dgd->has_data())
	|| (pmd !=  nullptr && pmd->has_data())
	|| (osnr !=  nullptr && osnr->has_data())
	|| (center_wavelength !=  nullptr && center_wavelength->has_data())
	|| (pdl !=  nullptr && pdl->has_data())
	|| (pcr !=  nullptr && pcr->has_data())
	|| (pn !=  nullptr && pn->has_data())
	|| (rx_sig_pow !=  nullptr && rx_sig_pow->has_data())
	|| (low_sig_freq_off !=  nullptr && low_sig_freq_off->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::has_operation() const
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
	|| (lbc !=  nullptr && lbc->has_operation())
	|| (lbc_pc !=  nullptr && lbc_pc->has_operation())
	|| (opt !=  nullptr && opt->has_operation())
	|| (opr !=  nullptr && opr->has_operation())
	|| (cd !=  nullptr && cd->has_operation())
	|| (dgd !=  nullptr && dgd->has_operation())
	|| (pmd !=  nullptr && pmd->has_operation())
	|| (osnr !=  nullptr && osnr->has_operation())
	|| (center_wavelength !=  nullptr && center_wavelength->has_operation())
	|| (pdl !=  nullptr && pdl->has_operation())
	|| (pcr !=  nullptr && pcr->has_operation())
	|| (pn !=  nullptr && pn->has_operation())
	|| (rx_sig_pow !=  nullptr && rx_sig_pow->has_operation())
	|| (low_sig_freq_off !=  nullptr && low_sig_freq_off->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optics-second30-optics-time-line-instance" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::get_name_leaf_data() const
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

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lbc")
    {
        if(lbc == nullptr)
        {
            lbc = std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Lbc>();
        }
        return lbc;
    }

    if(child_yang_name == "lbc-pc")
    {
        if(lbc_pc == nullptr)
        {
            lbc_pc = std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::LbcPc>();
        }
        return lbc_pc;
    }

    if(child_yang_name == "opt")
    {
        if(opt == nullptr)
        {
            opt = std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Opt>();
        }
        return opt;
    }

    if(child_yang_name == "opr")
    {
        if(opr == nullptr)
        {
            opr = std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Opr>();
        }
        return opr;
    }

    if(child_yang_name == "cd")
    {
        if(cd == nullptr)
        {
            cd = std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Cd>();
        }
        return cd;
    }

    if(child_yang_name == "dgd")
    {
        if(dgd == nullptr)
        {
            dgd = std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Dgd>();
        }
        return dgd;
    }

    if(child_yang_name == "pmd")
    {
        if(pmd == nullptr)
        {
            pmd = std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Pmd>();
        }
        return pmd;
    }

    if(child_yang_name == "osnr")
    {
        if(osnr == nullptr)
        {
            osnr = std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Osnr>();
        }
        return osnr;
    }

    if(child_yang_name == "center-wavelength")
    {
        if(center_wavelength == nullptr)
        {
            center_wavelength = std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::CenterWavelength>();
        }
        return center_wavelength;
    }

    if(child_yang_name == "pdl")
    {
        if(pdl == nullptr)
        {
            pdl = std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Pdl>();
        }
        return pdl;
    }

    if(child_yang_name == "pcr")
    {
        if(pcr == nullptr)
        {
            pcr = std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Pcr>();
        }
        return pcr;
    }

    if(child_yang_name == "pn")
    {
        if(pn == nullptr)
        {
            pn = std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Pn>();
        }
        return pn;
    }

    if(child_yang_name == "rx-sig-pow")
    {
        if(rx_sig_pow == nullptr)
        {
            rx_sig_pow = std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::RxSigPow>();
        }
        return rx_sig_pow;
    }

    if(child_yang_name == "low-sig-freq-off")
    {
        if(low_sig_freq_off == nullptr)
        {
            low_sig_freq_off = std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::LowSigFreqOff>();
        }
        return low_sig_freq_off;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(lbc != nullptr)
    {
        children["lbc"] = lbc;
    }

    if(lbc_pc != nullptr)
    {
        children["lbc-pc"] = lbc_pc;
    }

    if(opt != nullptr)
    {
        children["opt"] = opt;
    }

    if(opr != nullptr)
    {
        children["opr"] = opr;
    }

    if(cd != nullptr)
    {
        children["cd"] = cd;
    }

    if(dgd != nullptr)
    {
        children["dgd"] = dgd;
    }

    if(pmd != nullptr)
    {
        children["pmd"] = pmd;
    }

    if(osnr != nullptr)
    {
        children["osnr"] = osnr;
    }

    if(center_wavelength != nullptr)
    {
        children["center-wavelength"] = center_wavelength;
    }

    if(pdl != nullptr)
    {
        children["pdl"] = pdl;
    }

    if(pcr != nullptr)
    {
        children["pcr"] = pcr;
    }

    if(pn != nullptr)
    {
        children["pn"] = pn;
    }

    if(rx_sig_pow != nullptr)
    {
        children["rx-sig-pow"] = rx_sig_pow;
    }

    if(low_sig_freq_off != nullptr)
    {
        children["low-sig-freq-off"] = low_sig_freq_off;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lbc" || name == "lbc-pc" || name == "opt" || name == "opr" || name == "cd" || name == "dgd" || name == "pmd" || name == "osnr" || name == "center-wavelength" || name == "pdl" || name == "pcr" || name == "pn" || name == "rx-sig-pow" || name == "low-sig-freq-off" || name == "number" || name == "index" || name == "valid" || name == "timestamp" || name == "last-clear-time" || name == "last-clear15-min-time" || name == "last-clear30-sec-time" || name == "last-clear24-hr-time" || name == "sec30-support")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Lbc::Lbc()
    :
    valid{YType::boolean, "valid"},
    minimum{YType::int32, "minimum"},
    average{YType::int32, "average"},
    maximum{YType::int32, "maximum"},
    minimum_threshold{YType::int32, "minimum-threshold"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    maximum_threshold{YType::int32, "maximum-threshold"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"}
{

    yang_name = "lbc"; yang_parent_name = "optics-second30-optics-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Lbc::~Lbc()
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Lbc::has_data() const
{
    return valid.is_set
	|| minimum.is_set
	|| average.is_set
	|| maximum.is_set
	|| minimum_threshold.is_set
	|| minimum_tca_report.is_set
	|| maximum_threshold.is_set
	|| maximum_tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Lbc::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(valid.yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(minimum_threshold.yfilter)
	|| ydk::is_set(minimum_tca_report.yfilter)
	|| ydk::is_set(maximum_threshold.yfilter)
	|| ydk::is_set(maximum_tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Lbc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lbc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Lbc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.yfilter)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.yfilter)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.yfilter)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.yfilter)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Lbc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Lbc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Lbc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Lbc::set_filter(const std::string & value_path, YFilter yfilter)
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
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Lbc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "valid" || name == "minimum" || name == "average" || name == "maximum" || name == "minimum-threshold" || name == "minimum-tca-report" || name == "maximum-threshold" || name == "maximum-tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::LbcPc::LbcPc()
    :
    valid{YType::boolean, "valid"},
    minimum{YType::str, "minimum"},
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    minimum_threshold{YType::str, "minimum-threshold"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"}
{

    yang_name = "lbc-pc"; yang_parent_name = "optics-second30-optics-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::LbcPc::~LbcPc()
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::LbcPc::has_data() const
{
    return valid.is_set
	|| minimum.is_set
	|| average.is_set
	|| maximum.is_set
	|| minimum_threshold.is_set
	|| minimum_tca_report.is_set
	|| maximum_threshold.is_set
	|| maximum_tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::LbcPc::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(valid.yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(minimum_threshold.yfilter)
	|| ydk::is_set(minimum_tca_report.yfilter)
	|| ydk::is_set(maximum_threshold.yfilter)
	|| ydk::is_set(maximum_tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::LbcPc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lbc-pc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::LbcPc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.yfilter)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.yfilter)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.yfilter)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.yfilter)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::LbcPc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::LbcPc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::LbcPc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::LbcPc::set_filter(const std::string & value_path, YFilter yfilter)
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
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::LbcPc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "valid" || name == "minimum" || name == "average" || name == "maximum" || name == "minimum-threshold" || name == "minimum-tca-report" || name == "maximum-threshold" || name == "maximum-tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Opt::Opt()
    :
    valid{YType::boolean, "valid"},
    minimum{YType::str, "minimum"},
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    minimum_threshold{YType::str, "minimum-threshold"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"}
{

    yang_name = "opt"; yang_parent_name = "optics-second30-optics-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Opt::~Opt()
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Opt::has_data() const
{
    return valid.is_set
	|| minimum.is_set
	|| average.is_set
	|| maximum.is_set
	|| minimum_threshold.is_set
	|| minimum_tca_report.is_set
	|| maximum_threshold.is_set
	|| maximum_tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Opt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(valid.yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(minimum_threshold.yfilter)
	|| ydk::is_set(minimum_tca_report.yfilter)
	|| ydk::is_set(maximum_threshold.yfilter)
	|| ydk::is_set(maximum_tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Opt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "opt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Opt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.yfilter)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.yfilter)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.yfilter)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.yfilter)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Opt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Opt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Opt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Opt::set_filter(const std::string & value_path, YFilter yfilter)
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
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Opt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "valid" || name == "minimum" || name == "average" || name == "maximum" || name == "minimum-threshold" || name == "minimum-tca-report" || name == "maximum-threshold" || name == "maximum-tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Opr::Opr()
    :
    valid{YType::boolean, "valid"},
    minimum{YType::str, "minimum"},
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    minimum_threshold{YType::str, "minimum-threshold"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"}
{

    yang_name = "opr"; yang_parent_name = "optics-second30-optics-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Opr::~Opr()
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Opr::has_data() const
{
    return valid.is_set
	|| minimum.is_set
	|| average.is_set
	|| maximum.is_set
	|| minimum_threshold.is_set
	|| minimum_tca_report.is_set
	|| maximum_threshold.is_set
	|| maximum_tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Opr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(valid.yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(minimum_threshold.yfilter)
	|| ydk::is_set(minimum_tca_report.yfilter)
	|| ydk::is_set(maximum_threshold.yfilter)
	|| ydk::is_set(maximum_tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Opr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "opr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Opr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.yfilter)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.yfilter)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.yfilter)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.yfilter)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Opr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Opr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Opr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Opr::set_filter(const std::string & value_path, YFilter yfilter)
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
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Opr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "valid" || name == "minimum" || name == "average" || name == "maximum" || name == "minimum-threshold" || name == "minimum-tca-report" || name == "maximum-threshold" || name == "maximum-tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Cd::Cd()
    :
    valid{YType::boolean, "valid"},
    minimum{YType::int32, "minimum"},
    average{YType::int32, "average"},
    maximum{YType::int32, "maximum"},
    minimum_threshold{YType::int32, "minimum-threshold"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    maximum_threshold{YType::int32, "maximum-threshold"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"}
{

    yang_name = "cd"; yang_parent_name = "optics-second30-optics-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Cd::~Cd()
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Cd::has_data() const
{
    return valid.is_set
	|| minimum.is_set
	|| average.is_set
	|| maximum.is_set
	|| minimum_threshold.is_set
	|| minimum_tca_report.is_set
	|| maximum_threshold.is_set
	|| maximum_tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Cd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(valid.yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(minimum_threshold.yfilter)
	|| ydk::is_set(minimum_tca_report.yfilter)
	|| ydk::is_set(maximum_threshold.yfilter)
	|| ydk::is_set(maximum_tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Cd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Cd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.yfilter)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.yfilter)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.yfilter)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.yfilter)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Cd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Cd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Cd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Cd::set_filter(const std::string & value_path, YFilter yfilter)
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
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Cd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "valid" || name == "minimum" || name == "average" || name == "maximum" || name == "minimum-threshold" || name == "minimum-tca-report" || name == "maximum-threshold" || name == "maximum-tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Dgd::Dgd()
    :
    valid{YType::boolean, "valid"},
    minimum{YType::str, "minimum"},
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    minimum_threshold{YType::str, "minimum-threshold"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"}
{

    yang_name = "dgd"; yang_parent_name = "optics-second30-optics-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Dgd::~Dgd()
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Dgd::has_data() const
{
    return valid.is_set
	|| minimum.is_set
	|| average.is_set
	|| maximum.is_set
	|| minimum_threshold.is_set
	|| minimum_tca_report.is_set
	|| maximum_threshold.is_set
	|| maximum_tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Dgd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(valid.yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(minimum_threshold.yfilter)
	|| ydk::is_set(minimum_tca_report.yfilter)
	|| ydk::is_set(maximum_threshold.yfilter)
	|| ydk::is_set(maximum_tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Dgd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dgd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Dgd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.yfilter)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.yfilter)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.yfilter)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.yfilter)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Dgd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Dgd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Dgd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Dgd::set_filter(const std::string & value_path, YFilter yfilter)
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
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Dgd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "valid" || name == "minimum" || name == "average" || name == "maximum" || name == "minimum-threshold" || name == "minimum-tca-report" || name == "maximum-threshold" || name == "maximum-tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Pmd::Pmd()
    :
    valid{YType::boolean, "valid"},
    minimum{YType::str, "minimum"},
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    minimum_threshold{YType::str, "minimum-threshold"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"}
{

    yang_name = "pmd"; yang_parent_name = "optics-second30-optics-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Pmd::~Pmd()
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Pmd::has_data() const
{
    return valid.is_set
	|| minimum.is_set
	|| average.is_set
	|| maximum.is_set
	|| minimum_threshold.is_set
	|| minimum_tca_report.is_set
	|| maximum_threshold.is_set
	|| maximum_tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Pmd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(valid.yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(minimum_threshold.yfilter)
	|| ydk::is_set(minimum_tca_report.yfilter)
	|| ydk::is_set(maximum_threshold.yfilter)
	|| ydk::is_set(maximum_tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Pmd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pmd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Pmd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.yfilter)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.yfilter)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.yfilter)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.yfilter)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Pmd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Pmd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Pmd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Pmd::set_filter(const std::string & value_path, YFilter yfilter)
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
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Pmd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "valid" || name == "minimum" || name == "average" || name == "maximum" || name == "minimum-threshold" || name == "minimum-tca-report" || name == "maximum-threshold" || name == "maximum-tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Osnr::Osnr()
    :
    valid{YType::boolean, "valid"},
    minimum{YType::str, "minimum"},
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    minimum_threshold{YType::str, "minimum-threshold"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"}
{

    yang_name = "osnr"; yang_parent_name = "optics-second30-optics-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Osnr::~Osnr()
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Osnr::has_data() const
{
    return valid.is_set
	|| minimum.is_set
	|| average.is_set
	|| maximum.is_set
	|| minimum_threshold.is_set
	|| minimum_tca_report.is_set
	|| maximum_threshold.is_set
	|| maximum_tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Osnr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(valid.yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(minimum_threshold.yfilter)
	|| ydk::is_set(minimum_tca_report.yfilter)
	|| ydk::is_set(maximum_threshold.yfilter)
	|| ydk::is_set(maximum_tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Osnr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "osnr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Osnr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.yfilter)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.yfilter)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.yfilter)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.yfilter)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Osnr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Osnr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Osnr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Osnr::set_filter(const std::string & value_path, YFilter yfilter)
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
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Osnr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "valid" || name == "minimum" || name == "average" || name == "maximum" || name == "minimum-threshold" || name == "minimum-tca-report" || name == "maximum-threshold" || name == "maximum-tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::CenterWavelength::CenterWavelength()
    :
    valid{YType::boolean, "valid"},
    minimum{YType::str, "minimum"},
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    minimum_threshold{YType::str, "minimum-threshold"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"}
{

    yang_name = "center-wavelength"; yang_parent_name = "optics-second30-optics-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::CenterWavelength::~CenterWavelength()
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::CenterWavelength::has_data() const
{
    return valid.is_set
	|| minimum.is_set
	|| average.is_set
	|| maximum.is_set
	|| minimum_threshold.is_set
	|| minimum_tca_report.is_set
	|| maximum_threshold.is_set
	|| maximum_tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::CenterWavelength::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(valid.yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(minimum_threshold.yfilter)
	|| ydk::is_set(minimum_tca_report.yfilter)
	|| ydk::is_set(maximum_threshold.yfilter)
	|| ydk::is_set(maximum_tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::CenterWavelength::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "center-wavelength";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::CenterWavelength::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.yfilter)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.yfilter)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.yfilter)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.yfilter)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::CenterWavelength::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::CenterWavelength::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::CenterWavelength::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::CenterWavelength::set_filter(const std::string & value_path, YFilter yfilter)
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
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::CenterWavelength::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "valid" || name == "minimum" || name == "average" || name == "maximum" || name == "minimum-threshold" || name == "minimum-tca-report" || name == "maximum-threshold" || name == "maximum-tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Pdl::Pdl()
    :
    valid{YType::boolean, "valid"},
    minimum{YType::str, "minimum"},
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    minimum_threshold{YType::str, "minimum-threshold"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"}
{

    yang_name = "pdl"; yang_parent_name = "optics-second30-optics-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Pdl::~Pdl()
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Pdl::has_data() const
{
    return valid.is_set
	|| minimum.is_set
	|| average.is_set
	|| maximum.is_set
	|| minimum_threshold.is_set
	|| minimum_tca_report.is_set
	|| maximum_threshold.is_set
	|| maximum_tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Pdl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(valid.yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(minimum_threshold.yfilter)
	|| ydk::is_set(minimum_tca_report.yfilter)
	|| ydk::is_set(maximum_threshold.yfilter)
	|| ydk::is_set(maximum_tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Pdl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pdl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Pdl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.yfilter)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.yfilter)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.yfilter)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.yfilter)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Pdl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Pdl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Pdl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Pdl::set_filter(const std::string & value_path, YFilter yfilter)
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
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Pdl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "valid" || name == "minimum" || name == "average" || name == "maximum" || name == "minimum-threshold" || name == "minimum-tca-report" || name == "maximum-threshold" || name == "maximum-tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Pcr::Pcr()
    :
    valid{YType::boolean, "valid"},
    minimum{YType::str, "minimum"},
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    minimum_threshold{YType::str, "minimum-threshold"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"}
{

    yang_name = "pcr"; yang_parent_name = "optics-second30-optics-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Pcr::~Pcr()
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Pcr::has_data() const
{
    return valid.is_set
	|| minimum.is_set
	|| average.is_set
	|| maximum.is_set
	|| minimum_threshold.is_set
	|| minimum_tca_report.is_set
	|| maximum_threshold.is_set
	|| maximum_tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Pcr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(valid.yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(minimum_threshold.yfilter)
	|| ydk::is_set(minimum_tca_report.yfilter)
	|| ydk::is_set(maximum_threshold.yfilter)
	|| ydk::is_set(maximum_tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Pcr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pcr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Pcr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.yfilter)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.yfilter)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.yfilter)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.yfilter)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Pcr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Pcr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Pcr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Pcr::set_filter(const std::string & value_path, YFilter yfilter)
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
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Pcr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "valid" || name == "minimum" || name == "average" || name == "maximum" || name == "minimum-threshold" || name == "minimum-tca-report" || name == "maximum-threshold" || name == "maximum-tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Pn::Pn()
    :
    valid{YType::boolean, "valid"},
    minimum{YType::str, "minimum"},
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    minimum_threshold{YType::str, "minimum-threshold"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"}
{

    yang_name = "pn"; yang_parent_name = "optics-second30-optics-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Pn::~Pn()
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Pn::has_data() const
{
    return valid.is_set
	|| minimum.is_set
	|| average.is_set
	|| maximum.is_set
	|| minimum_threshold.is_set
	|| minimum_tca_report.is_set
	|| maximum_threshold.is_set
	|| maximum_tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Pn::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(valid.yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(minimum_threshold.yfilter)
	|| ydk::is_set(minimum_tca_report.yfilter)
	|| ydk::is_set(maximum_threshold.yfilter)
	|| ydk::is_set(maximum_tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Pn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Pn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.yfilter)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.yfilter)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.yfilter)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.yfilter)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Pn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Pn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Pn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Pn::set_filter(const std::string & value_path, YFilter yfilter)
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
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Pn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "valid" || name == "minimum" || name == "average" || name == "maximum" || name == "minimum-threshold" || name == "minimum-tca-report" || name == "maximum-threshold" || name == "maximum-tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::RxSigPow::RxSigPow()
    :
    valid{YType::boolean, "valid"},
    minimum{YType::str, "minimum"},
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    minimum_threshold{YType::str, "minimum-threshold"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"}
{

    yang_name = "rx-sig-pow"; yang_parent_name = "optics-second30-optics-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::RxSigPow::~RxSigPow()
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::RxSigPow::has_data() const
{
    return valid.is_set
	|| minimum.is_set
	|| average.is_set
	|| maximum.is_set
	|| minimum_threshold.is_set
	|| minimum_tca_report.is_set
	|| maximum_threshold.is_set
	|| maximum_tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::RxSigPow::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(valid.yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(minimum_threshold.yfilter)
	|| ydk::is_set(minimum_tca_report.yfilter)
	|| ydk::is_set(maximum_threshold.yfilter)
	|| ydk::is_set(maximum_tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::RxSigPow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rx-sig-pow";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::RxSigPow::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.yfilter)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.yfilter)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.yfilter)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.yfilter)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::RxSigPow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::RxSigPow::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::RxSigPow::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::RxSigPow::set_filter(const std::string & value_path, YFilter yfilter)
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
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::RxSigPow::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "valid" || name == "minimum" || name == "average" || name == "maximum" || name == "minimum-threshold" || name == "minimum-tca-report" || name == "maximum-threshold" || name == "maximum-tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::LowSigFreqOff::LowSigFreqOff()
    :
    valid{YType::boolean, "valid"},
    minimum{YType::int32, "minimum"},
    average{YType::int32, "average"},
    maximum{YType::int32, "maximum"},
    minimum_threshold{YType::int32, "minimum-threshold"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    maximum_threshold{YType::int32, "maximum-threshold"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"}
{

    yang_name = "low-sig-freq-off"; yang_parent_name = "optics-second30-optics-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::LowSigFreqOff::~LowSigFreqOff()
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::LowSigFreqOff::has_data() const
{
    return valid.is_set
	|| minimum.is_set
	|| average.is_set
	|| maximum.is_set
	|| minimum_threshold.is_set
	|| minimum_tca_report.is_set
	|| maximum_threshold.is_set
	|| maximum_tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::LowSigFreqOff::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(valid.yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(minimum_threshold.yfilter)
	|| ydk::is_set(minimum_tca_report.yfilter)
	|| ydk::is_set(maximum_threshold.yfilter)
	|| ydk::is_set(maximum_tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::LowSigFreqOff::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "low-sig-freq-off";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::LowSigFreqOff::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.yfilter)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.yfilter)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.yfilter)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.yfilter)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::LowSigFreqOff::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::LowSigFreqOff::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::LowSigFreqOff::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::LowSigFreqOff::set_filter(const std::string & value_path, YFilter yfilter)
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
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::LowSigFreqOff::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "valid" || name == "minimum" || name == "average" || name == "maximum" || name == "minimum-threshold" || name == "minimum-tca-report" || name == "maximum-threshold" || name == "maximum-tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistories()
{

    yang_name = "optics-second30fec-histories"; yang_parent_name = "optics-second30-history"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::~OpticsSecond30FecHistories()
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::has_data() const
{
    for (std::size_t index=0; index<optics_second30fec_history.size(); index++)
    {
        if(optics_second30fec_history[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::has_operation() const
{
    for (std::size_t index=0; index<optics_second30fec_history.size(); index++)
    {
        if(optics_second30fec_history[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optics-second30fec-histories";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "optics-second30fec-history")
    {
        for(auto const & c : optics_second30fec_history)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory>();
        c->parent = this;
        optics_second30fec_history.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : optics_second30fec_history)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "optics-second30fec-history")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecHistory()
    :
    number{YType::int32, "number"}
    	,
    optics_second30fec_time_line_instances(std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances>())
{
    optics_second30fec_time_line_instances->parent = this;

    yang_name = "optics-second30fec-history"; yang_parent_name = "optics-second30fec-histories"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::~OpticsSecond30FecHistory()
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::has_data() const
{
    return number.is_set
	|| (optics_second30fec_time_line_instances !=  nullptr && optics_second30fec_time_line_instances->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| (optics_second30fec_time_line_instances !=  nullptr && optics_second30fec_time_line_instances->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optics-second30fec-history" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "optics-second30fec-time-line-instances")
    {
        if(optics_second30fec_time_line_instances == nullptr)
        {
            optics_second30fec_time_line_instances = std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances>();
        }
        return optics_second30fec_time_line_instances;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(optics_second30fec_time_line_instances != nullptr)
    {
        children["optics-second30fec-time-line-instances"] = optics_second30fec_time_line_instances;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "optics-second30fec-time-line-instances" || name == "number")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstances()
{

    yang_name = "optics-second30fec-time-line-instances"; yang_parent_name = "optics-second30fec-history"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::~OpticsSecond30FecTimeLineInstances()
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::has_data() const
{
    for (std::size_t index=0; index<optics_second30fec_time_line_instance.size(); index++)
    {
        if(optics_second30fec_time_line_instance[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::has_operation() const
{
    for (std::size_t index=0; index<optics_second30fec_time_line_instance.size(); index++)
    {
        if(optics_second30fec_time_line_instance[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optics-second30fec-time-line-instances";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "optics-second30fec-time-line-instance")
    {
        for(auto const & c : optics_second30fec_time_line_instance)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance>();
        c->parent = this;
        optics_second30fec_time_line_instance.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : optics_second30fec_time_line_instance)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "optics-second30fec-time-line-instance")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance::OpticsSecond30FecTimeLineInstance()
    :
    number{YType::int32, "number"},
    index_{YType::uint32, "index"},
    valid{YType::boolean, "valid"},
    timestamp{YType::str, "timestamp"},
    last_clear_time{YType::str, "last-clear-time"},
    last_clear15_min_time{YType::str, "last-clear15-min-time"},
    last_clear30_sec_time{YType::str, "last-clear30-sec-time"},
    last_clear24_hr_time{YType::str, "last-clear24-hr-time"},
    sec30_support{YType::boolean, "sec30-support"}
    	,
    ec_bits(std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance::EcBits>())
	,uc_words(std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance::UcWords>())
	,pre_fec_ber(std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance::PreFecBer>())
	,post_fec_ber(std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance::PostFecBer>())
	,q(std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance::Q>())
	,qmargin(std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance::Qmargin>())
{
    ec_bits->parent = this;
    uc_words->parent = this;
    pre_fec_ber->parent = this;
    post_fec_ber->parent = this;
    q->parent = this;
    qmargin->parent = this;

    yang_name = "optics-second30fec-time-line-instance"; yang_parent_name = "optics-second30fec-time-line-instances"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance::~OpticsSecond30FecTimeLineInstance()
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance::has_data() const
{
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

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance::has_operation() const
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

std::string PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optics-second30fec-time-line-instance" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance::get_name_leaf_data() const
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

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ec-bits")
    {
        if(ec_bits == nullptr)
        {
            ec_bits = std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance::EcBits>();
        }
        return ec_bits;
    }

    if(child_yang_name == "uc-words")
    {
        if(uc_words == nullptr)
        {
            uc_words = std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance::UcWords>();
        }
        return uc_words;
    }

    if(child_yang_name == "pre-fec-ber")
    {
        if(pre_fec_ber == nullptr)
        {
            pre_fec_ber = std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance::PreFecBer>();
        }
        return pre_fec_ber;
    }

    if(child_yang_name == "post-fec-ber")
    {
        if(post_fec_ber == nullptr)
        {
            post_fec_ber = std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance::PostFecBer>();
        }
        return post_fec_ber;
    }

    if(child_yang_name == "q")
    {
        if(q == nullptr)
        {
            q = std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance::Q>();
        }
        return q;
    }

    if(child_yang_name == "qmargin")
    {
        if(qmargin == nullptr)
        {
            qmargin = std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance::Qmargin>();
        }
        return qmargin;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ec-bits" || name == "uc-words" || name == "pre-fec-ber" || name == "post-fec-ber" || name == "q" || name == "qmargin" || name == "number" || name == "index" || name == "valid" || name == "timestamp" || name == "last-clear-time" || name == "last-clear15-min-time" || name == "last-clear30-sec-time" || name == "last-clear24-hr-time" || name == "sec30-support")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance::EcBits::EcBits()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "ec-bits"; yang_parent_name = "optics-second30fec-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance::EcBits::~EcBits()
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance::EcBits::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance::EcBits::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance::EcBits::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ec-bits";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance::EcBits::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance::EcBits::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance::EcBits::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance::EcBits::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance::EcBits::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance::EcBits::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance::UcWords::UcWords()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "uc-words"; yang_parent_name = "optics-second30fec-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance::UcWords::~UcWords()
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance::UcWords::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance::UcWords::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance::UcWords::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uc-words";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance::UcWords::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance::UcWords::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance::UcWords::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance::UcWords::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance::UcWords::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance::UcWords::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance::PreFecBer::PreFecBer()
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

    yang_name = "pre-fec-ber"; yang_parent_name = "optics-second30fec-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance::PreFecBer::~PreFecBer()
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance::PreFecBer::has_data() const
{
    return minimum.is_set
	|| average.is_set
	|| maximum.is_set
	|| minimum_threshold.is_set
	|| minimum_tca_report.is_set
	|| maximum_threshold.is_set
	|| maximum_tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance::PreFecBer::has_operation() const
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

std::string PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance::PreFecBer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pre-fec-ber";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance::PreFecBer::get_name_leaf_data() const
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

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance::PreFecBer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance::PreFecBer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance::PreFecBer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance::PreFecBer::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance::PreFecBer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minimum" || name == "average" || name == "maximum" || name == "minimum-threshold" || name == "minimum-tca-report" || name == "maximum-threshold" || name == "maximum-tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance::PostFecBer::PostFecBer()
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

    yang_name = "post-fec-ber"; yang_parent_name = "optics-second30fec-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance::PostFecBer::~PostFecBer()
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance::PostFecBer::has_data() const
{
    return minimum.is_set
	|| average.is_set
	|| maximum.is_set
	|| minimum_threshold.is_set
	|| minimum_tca_report.is_set
	|| maximum_threshold.is_set
	|| maximum_tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance::PostFecBer::has_operation() const
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

std::string PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance::PostFecBer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "post-fec-ber";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance::PostFecBer::get_name_leaf_data() const
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

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance::PostFecBer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance::PostFecBer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance::PostFecBer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance::PostFecBer::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance::PostFecBer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minimum" || name == "average" || name == "maximum" || name == "minimum-threshold" || name == "minimum-tca-report" || name == "maximum-threshold" || name == "maximum-tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance::Q::Q()
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

    yang_name = "q"; yang_parent_name = "optics-second30fec-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance::Q::~Q()
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance::Q::has_data() const
{
    return minimum.is_set
	|| average.is_set
	|| maximum.is_set
	|| minimum_threshold.is_set
	|| minimum_tca_report.is_set
	|| maximum_threshold.is_set
	|| maximum_tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance::Q::has_operation() const
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

std::string PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance::Q::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "q";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance::Q::get_name_leaf_data() const
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

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance::Q::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance::Q::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance::Q::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance::Q::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance::Q::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minimum" || name == "average" || name == "maximum" || name == "minimum-threshold" || name == "minimum-tca-report" || name == "maximum-threshold" || name == "maximum-tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance::Qmargin::Qmargin()
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

    yang_name = "qmargin"; yang_parent_name = "optics-second30fec-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance::Qmargin::~Qmargin()
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance::Qmargin::has_data() const
{
    return minimum.is_set
	|| average.is_set
	|| maximum.is_set
	|| minimum_threshold.is_set
	|| minimum_tca_report.is_set
	|| maximum_threshold.is_set
	|| maximum_tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance::Qmargin::has_operation() const
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

std::string PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance::Qmargin::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qmargin";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance::Qmargin::get_name_leaf_data() const
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

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance::Qmargin::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance::Qmargin::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance::Qmargin::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance::Qmargin::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance::Qmargin::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minimum" || name == "average" || name == "maximum" || name == "minimum-threshold" || name == "minimum-tca-report" || name == "maximum-threshold" || name == "maximum-tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15History()
    :
    optics_minute15_optics_histories(std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories>())
	,optics_minute15fec_histories(std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories>())
{
    optics_minute15_optics_histories->parent = this;
    optics_minute15fec_histories->parent = this;

    yang_name = "optics-minute15-history"; yang_parent_name = "optics-port-history"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::~OpticsMinute15History()
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::has_data() const
{
    return (optics_minute15_optics_histories !=  nullptr && optics_minute15_optics_histories->has_data())
	|| (optics_minute15fec_histories !=  nullptr && optics_minute15fec_histories->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::has_operation() const
{
    return is_set(yfilter)
	|| (optics_minute15_optics_histories !=  nullptr && optics_minute15_optics_histories->has_operation())
	|| (optics_minute15fec_histories !=  nullptr && optics_minute15fec_histories->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optics-minute15-history";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "optics-minute15-optics-histories")
    {
        if(optics_minute15_optics_histories == nullptr)
        {
            optics_minute15_optics_histories = std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories>();
        }
        return optics_minute15_optics_histories;
    }

    if(child_yang_name == "optics-minute15fec-histories")
    {
        if(optics_minute15fec_histories == nullptr)
        {
            optics_minute15fec_histories = std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories>();
        }
        return optics_minute15fec_histories;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(optics_minute15_optics_histories != nullptr)
    {
        children["optics-minute15-optics-histories"] = optics_minute15_optics_histories;
    }

    if(optics_minute15fec_histories != nullptr)
    {
        children["optics-minute15fec-histories"] = optics_minute15fec_histories;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "optics-minute15-optics-histories" || name == "optics-minute15fec-histories")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistories()
{

    yang_name = "optics-minute15-optics-histories"; yang_parent_name = "optics-minute15-history"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::~OpticsMinute15OpticsHistories()
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::has_data() const
{
    for (std::size_t index=0; index<optics_minute15_optics_history.size(); index++)
    {
        if(optics_minute15_optics_history[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::has_operation() const
{
    for (std::size_t index=0; index<optics_minute15_optics_history.size(); index++)
    {
        if(optics_minute15_optics_history[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optics-minute15-optics-histories";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "optics-minute15-optics-history")
    {
        for(auto const & c : optics_minute15_optics_history)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory>();
        c->parent = this;
        optics_minute15_optics_history.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : optics_minute15_optics_history)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "optics-minute15-optics-history")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsHistory()
    :
    number{YType::int32, "number"}
    	,
    optics_minute15_optics_time_line_instances(std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances>())
{
    optics_minute15_optics_time_line_instances->parent = this;

    yang_name = "optics-minute15-optics-history"; yang_parent_name = "optics-minute15-optics-histories"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::~OpticsMinute15OpticsHistory()
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::has_data() const
{
    return number.is_set
	|| (optics_minute15_optics_time_line_instances !=  nullptr && optics_minute15_optics_time_line_instances->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| (optics_minute15_optics_time_line_instances !=  nullptr && optics_minute15_optics_time_line_instances->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optics-minute15-optics-history" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "optics-minute15-optics-time-line-instances")
    {
        if(optics_minute15_optics_time_line_instances == nullptr)
        {
            optics_minute15_optics_time_line_instances = std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances>();
        }
        return optics_minute15_optics_time_line_instances;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(optics_minute15_optics_time_line_instances != nullptr)
    {
        children["optics-minute15-optics-time-line-instances"] = optics_minute15_optics_time_line_instances;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "optics-minute15-optics-time-line-instances" || name == "number")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstances()
{

    yang_name = "optics-minute15-optics-time-line-instances"; yang_parent_name = "optics-minute15-optics-history"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::~OpticsMinute15OpticsTimeLineInstances()
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::has_data() const
{
    for (std::size_t index=0; index<optics_minute15_optics_time_line_instance.size(); index++)
    {
        if(optics_minute15_optics_time_line_instance[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::has_operation() const
{
    for (std::size_t index=0; index<optics_minute15_optics_time_line_instance.size(); index++)
    {
        if(optics_minute15_optics_time_line_instance[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optics-minute15-optics-time-line-instances";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "optics-minute15-optics-time-line-instance")
    {
        for(auto const & c : optics_minute15_optics_time_line_instance)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance>();
        c->parent = this;
        optics_minute15_optics_time_line_instance.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : optics_minute15_optics_time_line_instance)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "optics-minute15-optics-time-line-instance")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::OpticsMinute15OpticsTimeLineInstance()
    :
    number{YType::int32, "number"},
    index_{YType::uint32, "index"},
    valid{YType::boolean, "valid"},
    timestamp{YType::str, "timestamp"},
    last_clear_time{YType::str, "last-clear-time"},
    last_clear15_min_time{YType::str, "last-clear15-min-time"},
    last_clear30_sec_time{YType::str, "last-clear30-sec-time"},
    last_clear24_hr_time{YType::str, "last-clear24-hr-time"},
    sec30_support{YType::boolean, "sec30-support"}
    	,
    lbc(std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Lbc>())
	,lbc_pc(std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::LbcPc>())
	,opt(std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Opt>())
	,opr(std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Opr>())
	,cd(std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Cd>())
	,dgd(std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Dgd>())
	,pmd(std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Pmd>())
	,osnr(std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Osnr>())
	,center_wavelength(std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::CenterWavelength>())
	,pdl(std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Pdl>())
	,pcr(std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Pcr>())
	,pn(std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Pn>())
	,rx_sig_pow(std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::RxSigPow>())
	,low_sig_freq_off(std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::LowSigFreqOff>())
{
    lbc->parent = this;
    lbc_pc->parent = this;
    opt->parent = this;
    opr->parent = this;
    cd->parent = this;
    dgd->parent = this;
    pmd->parent = this;
    osnr->parent = this;
    center_wavelength->parent = this;
    pdl->parent = this;
    pcr->parent = this;
    pn->parent = this;
    rx_sig_pow->parent = this;
    low_sig_freq_off->parent = this;

    yang_name = "optics-minute15-optics-time-line-instance"; yang_parent_name = "optics-minute15-optics-time-line-instances"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::~OpticsMinute15OpticsTimeLineInstance()
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::has_data() const
{
    return number.is_set
	|| index_.is_set
	|| valid.is_set
	|| timestamp.is_set
	|| last_clear_time.is_set
	|| last_clear15_min_time.is_set
	|| last_clear30_sec_time.is_set
	|| last_clear24_hr_time.is_set
	|| sec30_support.is_set
	|| (lbc !=  nullptr && lbc->has_data())
	|| (lbc_pc !=  nullptr && lbc_pc->has_data())
	|| (opt !=  nullptr && opt->has_data())
	|| (opr !=  nullptr && opr->has_data())
	|| (cd !=  nullptr && cd->has_data())
	|| (dgd !=  nullptr && dgd->has_data())
	|| (pmd !=  nullptr && pmd->has_data())
	|| (osnr !=  nullptr && osnr->has_data())
	|| (center_wavelength !=  nullptr && center_wavelength->has_data())
	|| (pdl !=  nullptr && pdl->has_data())
	|| (pcr !=  nullptr && pcr->has_data())
	|| (pn !=  nullptr && pn->has_data())
	|| (rx_sig_pow !=  nullptr && rx_sig_pow->has_data())
	|| (low_sig_freq_off !=  nullptr && low_sig_freq_off->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::has_operation() const
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
	|| (lbc !=  nullptr && lbc->has_operation())
	|| (lbc_pc !=  nullptr && lbc_pc->has_operation())
	|| (opt !=  nullptr && opt->has_operation())
	|| (opr !=  nullptr && opr->has_operation())
	|| (cd !=  nullptr && cd->has_operation())
	|| (dgd !=  nullptr && dgd->has_operation())
	|| (pmd !=  nullptr && pmd->has_operation())
	|| (osnr !=  nullptr && osnr->has_operation())
	|| (center_wavelength !=  nullptr && center_wavelength->has_operation())
	|| (pdl !=  nullptr && pdl->has_operation())
	|| (pcr !=  nullptr && pcr->has_operation())
	|| (pn !=  nullptr && pn->has_operation())
	|| (rx_sig_pow !=  nullptr && rx_sig_pow->has_operation())
	|| (low_sig_freq_off !=  nullptr && low_sig_freq_off->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optics-minute15-optics-time-line-instance" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::get_name_leaf_data() const
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

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lbc")
    {
        if(lbc == nullptr)
        {
            lbc = std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Lbc>();
        }
        return lbc;
    }

    if(child_yang_name == "lbc-pc")
    {
        if(lbc_pc == nullptr)
        {
            lbc_pc = std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::LbcPc>();
        }
        return lbc_pc;
    }

    if(child_yang_name == "opt")
    {
        if(opt == nullptr)
        {
            opt = std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Opt>();
        }
        return opt;
    }

    if(child_yang_name == "opr")
    {
        if(opr == nullptr)
        {
            opr = std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Opr>();
        }
        return opr;
    }

    if(child_yang_name == "cd")
    {
        if(cd == nullptr)
        {
            cd = std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Cd>();
        }
        return cd;
    }

    if(child_yang_name == "dgd")
    {
        if(dgd == nullptr)
        {
            dgd = std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Dgd>();
        }
        return dgd;
    }

    if(child_yang_name == "pmd")
    {
        if(pmd == nullptr)
        {
            pmd = std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Pmd>();
        }
        return pmd;
    }

    if(child_yang_name == "osnr")
    {
        if(osnr == nullptr)
        {
            osnr = std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Osnr>();
        }
        return osnr;
    }

    if(child_yang_name == "center-wavelength")
    {
        if(center_wavelength == nullptr)
        {
            center_wavelength = std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::CenterWavelength>();
        }
        return center_wavelength;
    }

    if(child_yang_name == "pdl")
    {
        if(pdl == nullptr)
        {
            pdl = std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Pdl>();
        }
        return pdl;
    }

    if(child_yang_name == "pcr")
    {
        if(pcr == nullptr)
        {
            pcr = std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Pcr>();
        }
        return pcr;
    }

    if(child_yang_name == "pn")
    {
        if(pn == nullptr)
        {
            pn = std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Pn>();
        }
        return pn;
    }

    if(child_yang_name == "rx-sig-pow")
    {
        if(rx_sig_pow == nullptr)
        {
            rx_sig_pow = std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::RxSigPow>();
        }
        return rx_sig_pow;
    }

    if(child_yang_name == "low-sig-freq-off")
    {
        if(low_sig_freq_off == nullptr)
        {
            low_sig_freq_off = std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::LowSigFreqOff>();
        }
        return low_sig_freq_off;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(lbc != nullptr)
    {
        children["lbc"] = lbc;
    }

    if(lbc_pc != nullptr)
    {
        children["lbc-pc"] = lbc_pc;
    }

    if(opt != nullptr)
    {
        children["opt"] = opt;
    }

    if(opr != nullptr)
    {
        children["opr"] = opr;
    }

    if(cd != nullptr)
    {
        children["cd"] = cd;
    }

    if(dgd != nullptr)
    {
        children["dgd"] = dgd;
    }

    if(pmd != nullptr)
    {
        children["pmd"] = pmd;
    }

    if(osnr != nullptr)
    {
        children["osnr"] = osnr;
    }

    if(center_wavelength != nullptr)
    {
        children["center-wavelength"] = center_wavelength;
    }

    if(pdl != nullptr)
    {
        children["pdl"] = pdl;
    }

    if(pcr != nullptr)
    {
        children["pcr"] = pcr;
    }

    if(pn != nullptr)
    {
        children["pn"] = pn;
    }

    if(rx_sig_pow != nullptr)
    {
        children["rx-sig-pow"] = rx_sig_pow;
    }

    if(low_sig_freq_off != nullptr)
    {
        children["low-sig-freq-off"] = low_sig_freq_off;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lbc" || name == "lbc-pc" || name == "opt" || name == "opr" || name == "cd" || name == "dgd" || name == "pmd" || name == "osnr" || name == "center-wavelength" || name == "pdl" || name == "pcr" || name == "pn" || name == "rx-sig-pow" || name == "low-sig-freq-off" || name == "number" || name == "index" || name == "valid" || name == "timestamp" || name == "last-clear-time" || name == "last-clear15-min-time" || name == "last-clear30-sec-time" || name == "last-clear24-hr-time" || name == "sec30-support")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Lbc::Lbc()
    :
    valid{YType::boolean, "valid"},
    minimum{YType::int32, "minimum"},
    average{YType::int32, "average"},
    maximum{YType::int32, "maximum"},
    minimum_threshold{YType::int32, "minimum-threshold"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    maximum_threshold{YType::int32, "maximum-threshold"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"}
{

    yang_name = "lbc"; yang_parent_name = "optics-minute15-optics-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Lbc::~Lbc()
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Lbc::has_data() const
{
    return valid.is_set
	|| minimum.is_set
	|| average.is_set
	|| maximum.is_set
	|| minimum_threshold.is_set
	|| minimum_tca_report.is_set
	|| maximum_threshold.is_set
	|| maximum_tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Lbc::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(valid.yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(minimum_threshold.yfilter)
	|| ydk::is_set(minimum_tca_report.yfilter)
	|| ydk::is_set(maximum_threshold.yfilter)
	|| ydk::is_set(maximum_tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Lbc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lbc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Lbc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.yfilter)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.yfilter)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.yfilter)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.yfilter)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Lbc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Lbc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Lbc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Lbc::set_filter(const std::string & value_path, YFilter yfilter)
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
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Lbc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "valid" || name == "minimum" || name == "average" || name == "maximum" || name == "minimum-threshold" || name == "minimum-tca-report" || name == "maximum-threshold" || name == "maximum-tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::LbcPc::LbcPc()
    :
    valid{YType::boolean, "valid"},
    minimum{YType::str, "minimum"},
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    minimum_threshold{YType::str, "minimum-threshold"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"}
{

    yang_name = "lbc-pc"; yang_parent_name = "optics-minute15-optics-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::LbcPc::~LbcPc()
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::LbcPc::has_data() const
{
    return valid.is_set
	|| minimum.is_set
	|| average.is_set
	|| maximum.is_set
	|| minimum_threshold.is_set
	|| minimum_tca_report.is_set
	|| maximum_threshold.is_set
	|| maximum_tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::LbcPc::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(valid.yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(minimum_threshold.yfilter)
	|| ydk::is_set(minimum_tca_report.yfilter)
	|| ydk::is_set(maximum_threshold.yfilter)
	|| ydk::is_set(maximum_tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::LbcPc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lbc-pc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::LbcPc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.yfilter)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.yfilter)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.yfilter)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.yfilter)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::LbcPc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::LbcPc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::LbcPc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::LbcPc::set_filter(const std::string & value_path, YFilter yfilter)
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
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::LbcPc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "valid" || name == "minimum" || name == "average" || name == "maximum" || name == "minimum-threshold" || name == "minimum-tca-report" || name == "maximum-threshold" || name == "maximum-tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Opt::Opt()
    :
    valid{YType::boolean, "valid"},
    minimum{YType::str, "minimum"},
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    minimum_threshold{YType::str, "minimum-threshold"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"}
{

    yang_name = "opt"; yang_parent_name = "optics-minute15-optics-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Opt::~Opt()
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Opt::has_data() const
{
    return valid.is_set
	|| minimum.is_set
	|| average.is_set
	|| maximum.is_set
	|| minimum_threshold.is_set
	|| minimum_tca_report.is_set
	|| maximum_threshold.is_set
	|| maximum_tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Opt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(valid.yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(minimum_threshold.yfilter)
	|| ydk::is_set(minimum_tca_report.yfilter)
	|| ydk::is_set(maximum_threshold.yfilter)
	|| ydk::is_set(maximum_tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Opt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "opt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Opt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.yfilter)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.yfilter)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.yfilter)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.yfilter)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Opt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Opt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Opt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Opt::set_filter(const std::string & value_path, YFilter yfilter)
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
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Opt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "valid" || name == "minimum" || name == "average" || name == "maximum" || name == "minimum-threshold" || name == "minimum-tca-report" || name == "maximum-threshold" || name == "maximum-tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Opr::Opr()
    :
    valid{YType::boolean, "valid"},
    minimum{YType::str, "minimum"},
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    minimum_threshold{YType::str, "minimum-threshold"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"}
{

    yang_name = "opr"; yang_parent_name = "optics-minute15-optics-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Opr::~Opr()
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Opr::has_data() const
{
    return valid.is_set
	|| minimum.is_set
	|| average.is_set
	|| maximum.is_set
	|| minimum_threshold.is_set
	|| minimum_tca_report.is_set
	|| maximum_threshold.is_set
	|| maximum_tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Opr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(valid.yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(minimum_threshold.yfilter)
	|| ydk::is_set(minimum_tca_report.yfilter)
	|| ydk::is_set(maximum_threshold.yfilter)
	|| ydk::is_set(maximum_tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Opr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "opr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Opr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.yfilter)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.yfilter)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.yfilter)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.yfilter)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Opr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Opr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Opr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Opr::set_filter(const std::string & value_path, YFilter yfilter)
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
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Opr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "valid" || name == "minimum" || name == "average" || name == "maximum" || name == "minimum-threshold" || name == "minimum-tca-report" || name == "maximum-threshold" || name == "maximum-tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Cd::Cd()
    :
    valid{YType::boolean, "valid"},
    minimum{YType::int32, "minimum"},
    average{YType::int32, "average"},
    maximum{YType::int32, "maximum"},
    minimum_threshold{YType::int32, "minimum-threshold"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    maximum_threshold{YType::int32, "maximum-threshold"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"}
{

    yang_name = "cd"; yang_parent_name = "optics-minute15-optics-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Cd::~Cd()
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Cd::has_data() const
{
    return valid.is_set
	|| minimum.is_set
	|| average.is_set
	|| maximum.is_set
	|| minimum_threshold.is_set
	|| minimum_tca_report.is_set
	|| maximum_threshold.is_set
	|| maximum_tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Cd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(valid.yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(minimum_threshold.yfilter)
	|| ydk::is_set(minimum_tca_report.yfilter)
	|| ydk::is_set(maximum_threshold.yfilter)
	|| ydk::is_set(maximum_tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Cd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Cd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.yfilter)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.yfilter)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.yfilter)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.yfilter)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Cd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Cd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Cd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Cd::set_filter(const std::string & value_path, YFilter yfilter)
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
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Cd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "valid" || name == "minimum" || name == "average" || name == "maximum" || name == "minimum-threshold" || name == "minimum-tca-report" || name == "maximum-threshold" || name == "maximum-tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Dgd::Dgd()
    :
    valid{YType::boolean, "valid"},
    minimum{YType::str, "minimum"},
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    minimum_threshold{YType::str, "minimum-threshold"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"}
{

    yang_name = "dgd"; yang_parent_name = "optics-minute15-optics-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Dgd::~Dgd()
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Dgd::has_data() const
{
    return valid.is_set
	|| minimum.is_set
	|| average.is_set
	|| maximum.is_set
	|| minimum_threshold.is_set
	|| minimum_tca_report.is_set
	|| maximum_threshold.is_set
	|| maximum_tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Dgd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(valid.yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(minimum_threshold.yfilter)
	|| ydk::is_set(minimum_tca_report.yfilter)
	|| ydk::is_set(maximum_threshold.yfilter)
	|| ydk::is_set(maximum_tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Dgd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dgd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Dgd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.yfilter)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.yfilter)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.yfilter)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.yfilter)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Dgd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Dgd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Dgd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Dgd::set_filter(const std::string & value_path, YFilter yfilter)
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
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Dgd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "valid" || name == "minimum" || name == "average" || name == "maximum" || name == "minimum-threshold" || name == "minimum-tca-report" || name == "maximum-threshold" || name == "maximum-tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Pmd::Pmd()
    :
    valid{YType::boolean, "valid"},
    minimum{YType::str, "minimum"},
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    minimum_threshold{YType::str, "minimum-threshold"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"}
{

    yang_name = "pmd"; yang_parent_name = "optics-minute15-optics-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Pmd::~Pmd()
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Pmd::has_data() const
{
    return valid.is_set
	|| minimum.is_set
	|| average.is_set
	|| maximum.is_set
	|| minimum_threshold.is_set
	|| minimum_tca_report.is_set
	|| maximum_threshold.is_set
	|| maximum_tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Pmd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(valid.yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(minimum_threshold.yfilter)
	|| ydk::is_set(minimum_tca_report.yfilter)
	|| ydk::is_set(maximum_threshold.yfilter)
	|| ydk::is_set(maximum_tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Pmd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pmd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Pmd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.yfilter)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.yfilter)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.yfilter)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.yfilter)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Pmd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Pmd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Pmd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Pmd::set_filter(const std::string & value_path, YFilter yfilter)
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
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Pmd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "valid" || name == "minimum" || name == "average" || name == "maximum" || name == "minimum-threshold" || name == "minimum-tca-report" || name == "maximum-threshold" || name == "maximum-tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Osnr::Osnr()
    :
    valid{YType::boolean, "valid"},
    minimum{YType::str, "minimum"},
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    minimum_threshold{YType::str, "minimum-threshold"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"}
{

    yang_name = "osnr"; yang_parent_name = "optics-minute15-optics-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Osnr::~Osnr()
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Osnr::has_data() const
{
    return valid.is_set
	|| minimum.is_set
	|| average.is_set
	|| maximum.is_set
	|| minimum_threshold.is_set
	|| minimum_tca_report.is_set
	|| maximum_threshold.is_set
	|| maximum_tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Osnr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(valid.yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(minimum_threshold.yfilter)
	|| ydk::is_set(minimum_tca_report.yfilter)
	|| ydk::is_set(maximum_threshold.yfilter)
	|| ydk::is_set(maximum_tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Osnr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "osnr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Osnr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.yfilter)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.yfilter)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.yfilter)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.yfilter)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Osnr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Osnr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Osnr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Osnr::set_filter(const std::string & value_path, YFilter yfilter)
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
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Osnr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "valid" || name == "minimum" || name == "average" || name == "maximum" || name == "minimum-threshold" || name == "minimum-tca-report" || name == "maximum-threshold" || name == "maximum-tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::CenterWavelength::CenterWavelength()
    :
    valid{YType::boolean, "valid"},
    minimum{YType::str, "minimum"},
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    minimum_threshold{YType::str, "minimum-threshold"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"}
{

    yang_name = "center-wavelength"; yang_parent_name = "optics-minute15-optics-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::CenterWavelength::~CenterWavelength()
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::CenterWavelength::has_data() const
{
    return valid.is_set
	|| minimum.is_set
	|| average.is_set
	|| maximum.is_set
	|| minimum_threshold.is_set
	|| minimum_tca_report.is_set
	|| maximum_threshold.is_set
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
	|| ydk::is_set(minimum_tca_report.yfilter)
	|| ydk::is_set(maximum_threshold.yfilter)
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
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.yfilter)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.yfilter)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
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
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::CenterWavelength::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "valid" || name == "minimum" || name == "average" || name == "maximum" || name == "minimum-threshold" || name == "minimum-tca-report" || name == "maximum-threshold" || name == "maximum-tca-report")
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
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"}
{

    yang_name = "pdl"; yang_parent_name = "optics-minute15-optics-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Pdl::~Pdl()
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Pdl::has_data() const
{
    return valid.is_set
	|| minimum.is_set
	|| average.is_set
	|| maximum.is_set
	|| minimum_threshold.is_set
	|| minimum_tca_report.is_set
	|| maximum_threshold.is_set
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
	|| ydk::is_set(minimum_tca_report.yfilter)
	|| ydk::is_set(maximum_threshold.yfilter)
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
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.yfilter)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.yfilter)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
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
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Pdl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "valid" || name == "minimum" || name == "average" || name == "maximum" || name == "minimum-threshold" || name == "minimum-tca-report" || name == "maximum-threshold" || name == "maximum-tca-report")
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
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"}
{

    yang_name = "pcr"; yang_parent_name = "optics-minute15-optics-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Pcr::~Pcr()
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Pcr::has_data() const
{
    return valid.is_set
	|| minimum.is_set
	|| average.is_set
	|| maximum.is_set
	|| minimum_threshold.is_set
	|| minimum_tca_report.is_set
	|| maximum_threshold.is_set
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
	|| ydk::is_set(minimum_tca_report.yfilter)
	|| ydk::is_set(maximum_threshold.yfilter)
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
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.yfilter)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.yfilter)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
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
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Pcr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "valid" || name == "minimum" || name == "average" || name == "maximum" || name == "minimum-threshold" || name == "minimum-tca-report" || name == "maximum-threshold" || name == "maximum-tca-report")
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
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"}
{

    yang_name = "pn"; yang_parent_name = "optics-minute15-optics-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Pn::~Pn()
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Pn::has_data() const
{
    return valid.is_set
	|| minimum.is_set
	|| average.is_set
	|| maximum.is_set
	|| minimum_threshold.is_set
	|| minimum_tca_report.is_set
	|| maximum_threshold.is_set
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
	|| ydk::is_set(minimum_tca_report.yfilter)
	|| ydk::is_set(maximum_threshold.yfilter)
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
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.yfilter)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.yfilter)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
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
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Pn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "valid" || name == "minimum" || name == "average" || name == "maximum" || name == "minimum-threshold" || name == "minimum-tca-report" || name == "maximum-threshold" || name == "maximum-tca-report")
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
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"}
{

    yang_name = "rx-sig-pow"; yang_parent_name = "optics-minute15-optics-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::RxSigPow::~RxSigPow()
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::RxSigPow::has_data() const
{
    return valid.is_set
	|| minimum.is_set
	|| average.is_set
	|| maximum.is_set
	|| minimum_threshold.is_set
	|| minimum_tca_report.is_set
	|| maximum_threshold.is_set
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
	|| ydk::is_set(minimum_tca_report.yfilter)
	|| ydk::is_set(maximum_threshold.yfilter)
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
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.yfilter)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.yfilter)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
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
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::RxSigPow::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "valid" || name == "minimum" || name == "average" || name == "maximum" || name == "minimum-threshold" || name == "minimum-tca-report" || name == "maximum-threshold" || name == "maximum-tca-report")
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
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    maximum_threshold{YType::int32, "maximum-threshold"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"}
{

    yang_name = "low-sig-freq-off"; yang_parent_name = "optics-minute15-optics-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::LowSigFreqOff::~LowSigFreqOff()
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::LowSigFreqOff::has_data() const
{
    return valid.is_set
	|| minimum.is_set
	|| average.is_set
	|| maximum.is_set
	|| minimum_threshold.is_set
	|| minimum_tca_report.is_set
	|| maximum_threshold.is_set
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
	|| ydk::is_set(minimum_tca_report.yfilter)
	|| ydk::is_set(maximum_threshold.yfilter)
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
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.yfilter)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.yfilter)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
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
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::LowSigFreqOff::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "valid" || name == "minimum" || name == "average" || name == "maximum" || name == "minimum-threshold" || name == "minimum-tca-report" || name == "maximum-threshold" || name == "maximum-tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistories()
{

    yang_name = "optics-minute15fec-histories"; yang_parent_name = "optics-minute15-history"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::~OpticsMinute15FecHistories()
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::has_data() const
{
    for (std::size_t index=0; index<optics_minute15fec_history.size(); index++)
    {
        if(optics_minute15fec_history[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::has_operation() const
{
    for (std::size_t index=0; index<optics_minute15fec_history.size(); index++)
    {
        if(optics_minute15fec_history[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optics-minute15fec-histories";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "optics-minute15fec-history")
    {
        for(auto const & c : optics_minute15fec_history)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory>();
        c->parent = this;
        optics_minute15fec_history.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : optics_minute15fec_history)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "optics-minute15fec-history")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecHistory()
    :
    number{YType::int32, "number"}
    	,
    optics_minute15fec_time_line_instances(std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances>())
{
    optics_minute15fec_time_line_instances->parent = this;

    yang_name = "optics-minute15fec-history"; yang_parent_name = "optics-minute15fec-histories"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::~OpticsMinute15FecHistory()
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::has_data() const
{
    return number.is_set
	|| (optics_minute15fec_time_line_instances !=  nullptr && optics_minute15fec_time_line_instances->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| (optics_minute15fec_time_line_instances !=  nullptr && optics_minute15fec_time_line_instances->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optics-minute15fec-history" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "optics-minute15fec-time-line-instances")
    {
        if(optics_minute15fec_time_line_instances == nullptr)
        {
            optics_minute15fec_time_line_instances = std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances>();
        }
        return optics_minute15fec_time_line_instances;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(optics_minute15fec_time_line_instances != nullptr)
    {
        children["optics-minute15fec-time-line-instances"] = optics_minute15fec_time_line_instances;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "optics-minute15fec-time-line-instances" || name == "number")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstances()
{

    yang_name = "optics-minute15fec-time-line-instances"; yang_parent_name = "optics-minute15fec-history"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::~OpticsMinute15FecTimeLineInstances()
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::has_data() const
{
    for (std::size_t index=0; index<optics_minute15fec_time_line_instance.size(); index++)
    {
        if(optics_minute15fec_time_line_instance[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::has_operation() const
{
    for (std::size_t index=0; index<optics_minute15fec_time_line_instance.size(); index++)
    {
        if(optics_minute15fec_time_line_instance[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optics-minute15fec-time-line-instances";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "optics-minute15fec-time-line-instance")
    {
        for(auto const & c : optics_minute15fec_time_line_instance)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance>();
        c->parent = this;
        optics_minute15fec_time_line_instance.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : optics_minute15fec_time_line_instance)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "optics-minute15fec-time-line-instance")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance::OpticsMinute15FecTimeLineInstance()
    :
    number{YType::int32, "number"},
    index_{YType::uint32, "index"},
    valid{YType::boolean, "valid"},
    timestamp{YType::str, "timestamp"},
    last_clear_time{YType::str, "last-clear-time"},
    last_clear15_min_time{YType::str, "last-clear15-min-time"},
    last_clear30_sec_time{YType::str, "last-clear30-sec-time"},
    last_clear24_hr_time{YType::str, "last-clear24-hr-time"},
    sec30_support{YType::boolean, "sec30-support"}
    	,
    ec_bits(std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance::EcBits>())
	,uc_words(std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance::UcWords>())
	,pre_fec_ber(std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance::PreFecBer>())
	,post_fec_ber(std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance::PostFecBer>())
	,q(std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance::Q>())
	,qmargin(std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance::Qmargin>())
{
    ec_bits->parent = this;
    uc_words->parent = this;
    pre_fec_ber->parent = this;
    post_fec_ber->parent = this;
    q->parent = this;
    qmargin->parent = this;

    yang_name = "optics-minute15fec-time-line-instance"; yang_parent_name = "optics-minute15fec-time-line-instances"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance::~OpticsMinute15FecTimeLineInstance()
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance::has_data() const
{
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

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance::has_operation() const
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

std::string PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optics-minute15fec-time-line-instance" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance::get_name_leaf_data() const
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

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ec-bits")
    {
        if(ec_bits == nullptr)
        {
            ec_bits = std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance::EcBits>();
        }
        return ec_bits;
    }

    if(child_yang_name == "uc-words")
    {
        if(uc_words == nullptr)
        {
            uc_words = std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance::UcWords>();
        }
        return uc_words;
    }

    if(child_yang_name == "pre-fec-ber")
    {
        if(pre_fec_ber == nullptr)
        {
            pre_fec_ber = std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance::PreFecBer>();
        }
        return pre_fec_ber;
    }

    if(child_yang_name == "post-fec-ber")
    {
        if(post_fec_ber == nullptr)
        {
            post_fec_ber = std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance::PostFecBer>();
        }
        return post_fec_ber;
    }

    if(child_yang_name == "q")
    {
        if(q == nullptr)
        {
            q = std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance::Q>();
        }
        return q;
    }

    if(child_yang_name == "qmargin")
    {
        if(qmargin == nullptr)
        {
            qmargin = std::make_shared<PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance::Qmargin>();
        }
        return qmargin;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ec-bits" || name == "uc-words" || name == "pre-fec-ber" || name == "post-fec-ber" || name == "q" || name == "qmargin" || name == "number" || name == "index" || name == "valid" || name == "timestamp" || name == "last-clear-time" || name == "last-clear15-min-time" || name == "last-clear30-sec-time" || name == "last-clear24-hr-time" || name == "sec30-support")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance::EcBits::EcBits()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "ec-bits"; yang_parent_name = "optics-minute15fec-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance::EcBits::~EcBits()
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance::EcBits::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance::EcBits::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance::EcBits::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ec-bits";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance::EcBits::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance::EcBits::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance::EcBits::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance::EcBits::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance::EcBits::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance::EcBits::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance::UcWords::UcWords()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "uc-words"; yang_parent_name = "optics-minute15fec-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance::UcWords::~UcWords()
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance::UcWords::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance::UcWords::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance::UcWords::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uc-words";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance::UcWords::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance::UcWords::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance::UcWords::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance::UcWords::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance::UcWords::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance::UcWords::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance::PreFecBer::PreFecBer()
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

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance::PreFecBer::~PreFecBer()
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance::PreFecBer::has_data() const
{
    return minimum.is_set
	|| average.is_set
	|| maximum.is_set
	|| minimum_threshold.is_set
	|| minimum_tca_report.is_set
	|| maximum_threshold.is_set
	|| maximum_tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance::PreFecBer::has_operation() const
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

std::string PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance::PreFecBer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pre-fec-ber";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance::PreFecBer::get_name_leaf_data() const
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

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance::PreFecBer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance::PreFecBer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance::PreFecBer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance::PreFecBer::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance::PreFecBer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minimum" || name == "average" || name == "maximum" || name == "minimum-threshold" || name == "minimum-tca-report" || name == "maximum-threshold" || name == "maximum-tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance::PostFecBer::PostFecBer()
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

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance::PostFecBer::~PostFecBer()
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance::PostFecBer::has_data() const
{
    return minimum.is_set
	|| average.is_set
	|| maximum.is_set
	|| minimum_threshold.is_set
	|| minimum_tca_report.is_set
	|| maximum_threshold.is_set
	|| maximum_tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance::PostFecBer::has_operation() const
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

std::string PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance::PostFecBer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "post-fec-ber";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance::PostFecBer::get_name_leaf_data() const
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

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance::PostFecBer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance::PostFecBer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance::PostFecBer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance::PostFecBer::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance::PostFecBer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minimum" || name == "average" || name == "maximum" || name == "minimum-threshold" || name == "minimum-tca-report" || name == "maximum-threshold" || name == "maximum-tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance::Q::Q()
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

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance::Q::~Q()
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance::Q::has_data() const
{
    return minimum.is_set
	|| average.is_set
	|| maximum.is_set
	|| minimum_threshold.is_set
	|| minimum_tca_report.is_set
	|| maximum_threshold.is_set
	|| maximum_tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance::Q::has_operation() const
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

std::string PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance::Q::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "q";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance::Q::get_name_leaf_data() const
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

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance::Q::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance::Q::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance::Q::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance::Q::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance::Q::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minimum" || name == "average" || name == "maximum" || name == "minimum-threshold" || name == "minimum-tca-report" || name == "maximum-threshold" || name == "maximum-tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance::Qmargin::Qmargin()
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

PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance::Qmargin::~Qmargin()
{
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance::Qmargin::has_data() const
{
    return minimum.is_set
	|| average.is_set
	|| maximum.is_set
	|| minimum_threshold.is_set
	|| minimum_tca_report.is_set
	|| maximum_threshold.is_set
	|| maximum_tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance::Qmargin::has_operation() const
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

std::string PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance::Qmargin::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qmargin";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance::Qmargin::get_name_leaf_data() const
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

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance::Qmargin::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance::Qmargin::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance::Qmargin::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance::Qmargin::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance::Qmargin::has_leaf_or_child_of_name(const std::string & name) const
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
{

    yang_name = "oc-port-histories"; yang_parent_name = "oc-history"; is_top_level_class = false; has_list_ancestor = false;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::~OcPortHistories()
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::has_data() const
{
    for (std::size_t index=0; index<oc_port_history.size(); index++)
    {
        if(oc_port_history[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::has_operation() const
{
    for (std::size_t index=0; index<oc_port_history.size(); index++)
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
        for(auto const & c : oc_port_history)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory>();
        c->parent = this;
        oc_port_history.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : oc_port_history)
    {
        children[c->get_segment_path()] = c;
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
	,oc_minute15_history(std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History>())
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
    path_buffer << "oc-port-history" <<"[name='" <<name <<"']";
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
    oc_hour24ocn_histories(std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories>())
{
    oc_hour24ocn_histories->parent = this;

    yang_name = "oc-hour24-history"; yang_parent_name = "oc-port-history"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::~OcHour24History()
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::has_data() const
{
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
            oc_hour24ocn_histories = std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories>();
        }
        return oc_hour24ocn_histories;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistories()
{

    yang_name = "oc-hour24ocn-histories"; yang_parent_name = "oc-hour24-history"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::~OcHour24OcnHistories()
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::has_data() const
{
    for (std::size_t index=0; index<oc_hour24ocn_history.size(); index++)
    {
        if(oc_hour24ocn_history[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::has_operation() const
{
    for (std::size_t index=0; index<oc_hour24ocn_history.size(); index++)
    {
        if(oc_hour24ocn_history[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oc-hour24ocn-histories";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "oc-hour24ocn-history")
    {
        for(auto const & c : oc_hour24ocn_history)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory>();
        c->parent = this;
        oc_hour24ocn_history.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : oc_hour24ocn_history)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "oc-hour24ocn-history")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnHistory()
    :
    number{YType::int32, "number"}
    	,
    oc_hour24ocn_time_line_instances(std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances>())
{
    oc_hour24ocn_time_line_instances->parent = this;

    yang_name = "oc-hour24ocn-history"; yang_parent_name = "oc-hour24ocn-histories"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::~OcHour24OcnHistory()
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::has_data() const
{
    return number.is_set
	|| (oc_hour24ocn_time_line_instances !=  nullptr && oc_hour24ocn_time_line_instances->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| (oc_hour24ocn_time_line_instances !=  nullptr && oc_hour24ocn_time_line_instances->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oc-hour24ocn-history" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "oc-hour24ocn-time-line-instances")
    {
        if(oc_hour24ocn_time_line_instances == nullptr)
        {
            oc_hour24ocn_time_line_instances = std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances>();
        }
        return oc_hour24ocn_time_line_instances;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(oc_hour24ocn_time_line_instances != nullptr)
    {
        children["oc-hour24ocn-time-line-instances"] = oc_hour24ocn_time_line_instances;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "oc-hour24ocn-time-line-instances" || name == "number")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstances()
{

    yang_name = "oc-hour24ocn-time-line-instances"; yang_parent_name = "oc-hour24ocn-history"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::~OcHour24OcnTimeLineInstances()
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::has_data() const
{
    for (std::size_t index=0; index<oc_hour24ocn_time_line_instance.size(); index++)
    {
        if(oc_hour24ocn_time_line_instance[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::has_operation() const
{
    for (std::size_t index=0; index<oc_hour24ocn_time_line_instance.size(); index++)
    {
        if(oc_hour24ocn_time_line_instance[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oc-hour24ocn-time-line-instances";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "oc-hour24ocn-time-line-instance")
    {
        for(auto const & c : oc_hour24ocn_time_line_instance)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance>();
        c->parent = this;
        oc_hour24ocn_time_line_instance.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : oc_hour24ocn_time_line_instance)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "oc-hour24ocn-time-line-instance")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::OcHour24OcnTimeLineInstance()
    :
    number{YType::int32, "number"},
    index_{YType::uint32, "index"},
    valid{YType::boolean, "valid"},
    timestamp{YType::str, "timestamp"},
    last_clear_time{YType::str, "last-clear-time"},
    last_clear15_min_time{YType::str, "last-clear15-min-time"},
    last_clear24_hr_time{YType::str, "last-clear24-hr-time"}
    	,
    section(std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section>())
	,line(std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line>())
	,fe_line(std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine>())
{
    section->parent = this;
    line->parent = this;
    fe_line->parent = this;

    yang_name = "oc-hour24ocn-time-line-instance"; yang_parent_name = "oc-hour24ocn-time-line-instances"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::~OcHour24OcnTimeLineInstance()
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::has_data() const
{
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

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::has_operation() const
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

std::string PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oc-hour24ocn-time-line-instance" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::get_name_leaf_data() const
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

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "section")
    {
        if(section == nullptr)
        {
            section = std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section>();
        }
        return section;
    }

    if(child_yang_name == "line")
    {
        if(line == nullptr)
        {
            line = std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line>();
        }
        return line;
    }

    if(child_yang_name == "fe-line")
    {
        if(fe_line == nullptr)
        {
            fe_line = std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine>();
        }
        return fe_line;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "section" || name == "line" || name == "fe-line" || name == "number" || name == "index" || name == "valid" || name == "timestamp" || name == "last-clear-time" || name == "last-clear15-min-time" || name == "last-clear24-hr-time")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::Section()
    :
    section_status{YType::int32, "section-status"}
    	,
    section_e_ss(std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::SectionESs>())
	,section_se_ss(std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::SectionSeSs>())
	,section_sef_ss(std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::SectionSefSs>())
	,section_c_vs(std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::SectionCVs>())
{
    section_e_ss->parent = this;
    section_se_ss->parent = this;
    section_sef_ss->parent = this;
    section_c_vs->parent = this;

    yang_name = "section"; yang_parent_name = "oc-hour24ocn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::~Section()
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::has_data() const
{
    return section_status.is_set
	|| (section_e_ss !=  nullptr && section_e_ss->has_data())
	|| (section_se_ss !=  nullptr && section_se_ss->has_data())
	|| (section_sef_ss !=  nullptr && section_sef_ss->has_data())
	|| (section_c_vs !=  nullptr && section_c_vs->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(section_status.yfilter)
	|| (section_e_ss !=  nullptr && section_e_ss->has_operation())
	|| (section_se_ss !=  nullptr && section_se_ss->has_operation())
	|| (section_sef_ss !=  nullptr && section_sef_ss->has_operation())
	|| (section_c_vs !=  nullptr && section_c_vs->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "section";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (section_status.is_set || is_set(section_status.yfilter)) leaf_name_data.push_back(section_status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "section-e-ss")
    {
        if(section_e_ss == nullptr)
        {
            section_e_ss = std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::SectionESs>();
        }
        return section_e_ss;
    }

    if(child_yang_name == "section-se-ss")
    {
        if(section_se_ss == nullptr)
        {
            section_se_ss = std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::SectionSeSs>();
        }
        return section_se_ss;
    }

    if(child_yang_name == "section-sef-ss")
    {
        if(section_sef_ss == nullptr)
        {
            section_sef_ss = std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::SectionSefSs>();
        }
        return section_sef_ss;
    }

    if(child_yang_name == "section-c-vs")
    {
        if(section_c_vs == nullptr)
        {
            section_c_vs = std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::SectionCVs>();
        }
        return section_c_vs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "section-status")
    {
        section_status = value;
        section_status.value_namespace = name_space;
        section_status.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "section-status")
    {
        section_status.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "section-e-ss" || name == "section-se-ss" || name == "section-sef-ss" || name == "section-c-vs" || name == "section-status")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::SectionESs::SectionESs()
    :
    data{YType::uint32, "data"},
    threshold{YType::uint32, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "section-e-ss"; yang_parent_name = "section"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::SectionESs::~SectionESs()
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::SectionESs::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::SectionESs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::SectionESs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "section-e-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::SectionESs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::SectionESs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::SectionESs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::SectionESs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::SectionESs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::SectionESs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::SectionSeSs::SectionSeSs()
    :
    data{YType::uint32, "data"},
    threshold{YType::uint32, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "section-se-ss"; yang_parent_name = "section"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::SectionSeSs::~SectionSeSs()
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::SectionSeSs::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::SectionSeSs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::SectionSeSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "section-se-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::SectionSeSs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::SectionSeSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::SectionSeSs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::SectionSeSs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::SectionSeSs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::SectionSeSs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::SectionSefSs::SectionSefSs()
    :
    data{YType::uint32, "data"},
    threshold{YType::uint32, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "section-sef-ss"; yang_parent_name = "section"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::SectionSefSs::~SectionSefSs()
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::SectionSefSs::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::SectionSefSs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::SectionSefSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "section-sef-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::SectionSefSs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::SectionSefSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::SectionSefSs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::SectionSefSs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::SectionSefSs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::SectionSefSs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::SectionCVs::SectionCVs()
    :
    data{YType::uint32, "data"},
    threshold{YType::uint32, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "section-c-vs"; yang_parent_name = "section"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::SectionCVs::~SectionCVs()
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::SectionCVs::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::SectionCVs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::SectionCVs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "section-c-vs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::SectionCVs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::SectionCVs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::SectionCVs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::SectionCVs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::SectionCVs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Section::SectionCVs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::Line()
    :
    line_status{YType::int32, "line-status"}
    	,
    line_e_ss(std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineESs>())
	,line_se_ss(std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineSeSs>())
	,line_c_vs(std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineCVs>())
	,line_ua_ss(std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineUaSs>())
	,line_fc_ls(std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineFcLs>())
{
    line_e_ss->parent = this;
    line_se_ss->parent = this;
    line_c_vs->parent = this;
    line_ua_ss->parent = this;
    line_fc_ls->parent = this;

    yang_name = "line"; yang_parent_name = "oc-hour24ocn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::~Line()
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::has_data() const
{
    return line_status.is_set
	|| (line_e_ss !=  nullptr && line_e_ss->has_data())
	|| (line_se_ss !=  nullptr && line_se_ss->has_data())
	|| (line_c_vs !=  nullptr && line_c_vs->has_data())
	|| (line_ua_ss !=  nullptr && line_ua_ss->has_data())
	|| (line_fc_ls !=  nullptr && line_fc_ls->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(line_status.yfilter)
	|| (line_e_ss !=  nullptr && line_e_ss->has_operation())
	|| (line_se_ss !=  nullptr && line_se_ss->has_operation())
	|| (line_c_vs !=  nullptr && line_c_vs->has_operation())
	|| (line_ua_ss !=  nullptr && line_ua_ss->has_operation())
	|| (line_fc_ls !=  nullptr && line_fc_ls->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (line_status.is_set || is_set(line_status.yfilter)) leaf_name_data.push_back(line_status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "line-e-ss")
    {
        if(line_e_ss == nullptr)
        {
            line_e_ss = std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineESs>();
        }
        return line_e_ss;
    }

    if(child_yang_name == "line-se-ss")
    {
        if(line_se_ss == nullptr)
        {
            line_se_ss = std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineSeSs>();
        }
        return line_se_ss;
    }

    if(child_yang_name == "line-c-vs")
    {
        if(line_c_vs == nullptr)
        {
            line_c_vs = std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineCVs>();
        }
        return line_c_vs;
    }

    if(child_yang_name == "line-ua-ss")
    {
        if(line_ua_ss == nullptr)
        {
            line_ua_ss = std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineUaSs>();
        }
        return line_ua_ss;
    }

    if(child_yang_name == "line-fc-ls")
    {
        if(line_fc_ls == nullptr)
        {
            line_fc_ls = std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineFcLs>();
        }
        return line_fc_ls;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "line-status")
    {
        line_status = value;
        line_status.value_namespace = name_space;
        line_status.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "line-status")
    {
        line_status.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "line-e-ss" || name == "line-se-ss" || name == "line-c-vs" || name == "line-ua-ss" || name == "line-fc-ls" || name == "line-status")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineESs::LineESs()
    :
    data{YType::uint32, "data"},
    threshold{YType::uint32, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "line-e-ss"; yang_parent_name = "line"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineESs::~LineESs()
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineESs::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineESs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineESs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line-e-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineESs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineESs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineESs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineESs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineESs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineESs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineSeSs::LineSeSs()
    :
    data{YType::uint32, "data"},
    threshold{YType::uint32, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "line-se-ss"; yang_parent_name = "line"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineSeSs::~LineSeSs()
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineSeSs::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineSeSs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineSeSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line-se-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineSeSs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineSeSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineSeSs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineSeSs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineSeSs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineSeSs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineCVs::LineCVs()
    :
    data{YType::uint32, "data"},
    threshold{YType::uint32, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "line-c-vs"; yang_parent_name = "line"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineCVs::~LineCVs()
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineCVs::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineCVs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineCVs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line-c-vs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineCVs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineCVs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineCVs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineCVs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineCVs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineCVs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineUaSs::LineUaSs()
    :
    data{YType::uint32, "data"},
    threshold{YType::uint32, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "line-ua-ss"; yang_parent_name = "line"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineUaSs::~LineUaSs()
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineUaSs::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineUaSs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineUaSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line-ua-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineUaSs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineUaSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineUaSs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineUaSs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineUaSs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineUaSs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineFcLs::LineFcLs()
    :
    data{YType::uint32, "data"},
    threshold{YType::uint32, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "line-fc-ls"; yang_parent_name = "line"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineFcLs::~LineFcLs()
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineFcLs::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineFcLs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineFcLs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line-fc-ls";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineFcLs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineFcLs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineFcLs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineFcLs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineFcLs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::Line::LineFcLs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FeLine()
    :
    far_end_line_e_ss(std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineESs>())
	,far_end_line_se_ss(std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineSeSs>())
	,far_end_line_c_vs(std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineCVs>())
	,far_end_line_ua_ss(std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineUaSs>())
	,far_end_line_fc_ls(std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineFcLs>())
{
    far_end_line_e_ss->parent = this;
    far_end_line_se_ss->parent = this;
    far_end_line_c_vs->parent = this;
    far_end_line_ua_ss->parent = this;
    far_end_line_fc_ls->parent = this;

    yang_name = "fe-line"; yang_parent_name = "oc-hour24ocn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::~FeLine()
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::has_data() const
{
    return (far_end_line_e_ss !=  nullptr && far_end_line_e_ss->has_data())
	|| (far_end_line_se_ss !=  nullptr && far_end_line_se_ss->has_data())
	|| (far_end_line_c_vs !=  nullptr && far_end_line_c_vs->has_data())
	|| (far_end_line_ua_ss !=  nullptr && far_end_line_ua_ss->has_data())
	|| (far_end_line_fc_ls !=  nullptr && far_end_line_fc_ls->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::has_operation() const
{
    return is_set(yfilter)
	|| (far_end_line_e_ss !=  nullptr && far_end_line_e_ss->has_operation())
	|| (far_end_line_se_ss !=  nullptr && far_end_line_se_ss->has_operation())
	|| (far_end_line_c_vs !=  nullptr && far_end_line_c_vs->has_operation())
	|| (far_end_line_ua_ss !=  nullptr && far_end_line_ua_ss->has_operation())
	|| (far_end_line_fc_ls !=  nullptr && far_end_line_fc_ls->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fe-line";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "far-end-line-e-ss")
    {
        if(far_end_line_e_ss == nullptr)
        {
            far_end_line_e_ss = std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineESs>();
        }
        return far_end_line_e_ss;
    }

    if(child_yang_name == "far-end-line-se-ss")
    {
        if(far_end_line_se_ss == nullptr)
        {
            far_end_line_se_ss = std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineSeSs>();
        }
        return far_end_line_se_ss;
    }

    if(child_yang_name == "far-end-line-c-vs")
    {
        if(far_end_line_c_vs == nullptr)
        {
            far_end_line_c_vs = std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineCVs>();
        }
        return far_end_line_c_vs;
    }

    if(child_yang_name == "far-end-line-ua-ss")
    {
        if(far_end_line_ua_ss == nullptr)
        {
            far_end_line_ua_ss = std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineUaSs>();
        }
        return far_end_line_ua_ss;
    }

    if(child_yang_name == "far-end-line-fc-ls")
    {
        if(far_end_line_fc_ls == nullptr)
        {
            far_end_line_fc_ls = std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineFcLs>();
        }
        return far_end_line_fc_ls;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "far-end-line-e-ss" || name == "far-end-line-se-ss" || name == "far-end-line-c-vs" || name == "far-end-line-ua-ss" || name == "far-end-line-fc-ls")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineESs::FarEndLineESs()
    :
    data{YType::uint32, "data"},
    threshold{YType::uint32, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "far-end-line-e-ss"; yang_parent_name = "fe-line"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineESs::~FarEndLineESs()
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineESs::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineESs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineESs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "far-end-line-e-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineESs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineESs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineESs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineESs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineESs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineESs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineSeSs::FarEndLineSeSs()
    :
    data{YType::uint32, "data"},
    threshold{YType::uint32, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "far-end-line-se-ss"; yang_parent_name = "fe-line"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineSeSs::~FarEndLineSeSs()
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineSeSs::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineSeSs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineSeSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "far-end-line-se-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineSeSs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineSeSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineSeSs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineSeSs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineSeSs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineSeSs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineCVs::FarEndLineCVs()
    :
    data{YType::uint32, "data"},
    threshold{YType::uint32, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "far-end-line-c-vs"; yang_parent_name = "fe-line"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineCVs::~FarEndLineCVs()
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineCVs::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineCVs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineCVs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "far-end-line-c-vs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineCVs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineCVs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineCVs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineCVs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineCVs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineCVs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineUaSs::FarEndLineUaSs()
    :
    data{YType::uint32, "data"},
    threshold{YType::uint32, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "far-end-line-ua-ss"; yang_parent_name = "fe-line"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineUaSs::~FarEndLineUaSs()
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineUaSs::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineUaSs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineUaSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "far-end-line-ua-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineUaSs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineUaSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineUaSs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineUaSs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineUaSs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineUaSs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineFcLs::FarEndLineFcLs()
    :
    data{YType::uint32, "data"},
    threshold{YType::uint32, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "far-end-line-fc-ls"; yang_parent_name = "fe-line"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineFcLs::~FarEndLineFcLs()
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineFcLs::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineFcLs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineFcLs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "far-end-line-fc-ls";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineFcLs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineFcLs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineFcLs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineFcLs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineFcLs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcHour24History::OcHour24OcnHistories::OcHour24OcnHistory::OcHour24OcnTimeLineInstances::OcHour24OcnTimeLineInstance::FeLine::FarEndLineFcLs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15History()
    :
    oc_minute15ocn_histories(std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories>())
{
    oc_minute15ocn_histories->parent = this;

    yang_name = "oc-minute15-history"; yang_parent_name = "oc-port-history"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::~OcMinute15History()
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::has_data() const
{
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
            oc_minute15ocn_histories = std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories>();
        }
        return oc_minute15ocn_histories;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistories()
{

    yang_name = "oc-minute15ocn-histories"; yang_parent_name = "oc-minute15-history"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::~OcMinute15OcnHistories()
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::has_data() const
{
    for (std::size_t index=0; index<oc_minute15ocn_history.size(); index++)
    {
        if(oc_minute15ocn_history[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::has_operation() const
{
    for (std::size_t index=0; index<oc_minute15ocn_history.size(); index++)
    {
        if(oc_minute15ocn_history[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oc-minute15ocn-histories";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "oc-minute15ocn-history")
    {
        for(auto const & c : oc_minute15ocn_history)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory>();
        c->parent = this;
        oc_minute15ocn_history.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : oc_minute15ocn_history)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "oc-minute15ocn-history")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnHistory()
    :
    number{YType::int32, "number"}
    	,
    oc_minute15ocn_time_line_instances(std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances>())
{
    oc_minute15ocn_time_line_instances->parent = this;

    yang_name = "oc-minute15ocn-history"; yang_parent_name = "oc-minute15ocn-histories"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::~OcMinute15OcnHistory()
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::has_data() const
{
    return number.is_set
	|| (oc_minute15ocn_time_line_instances !=  nullptr && oc_minute15ocn_time_line_instances->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| (oc_minute15ocn_time_line_instances !=  nullptr && oc_minute15ocn_time_line_instances->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oc-minute15ocn-history" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "oc-minute15ocn-time-line-instances")
    {
        if(oc_minute15ocn_time_line_instances == nullptr)
        {
            oc_minute15ocn_time_line_instances = std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances>();
        }
        return oc_minute15ocn_time_line_instances;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(oc_minute15ocn_time_line_instances != nullptr)
    {
        children["oc-minute15ocn-time-line-instances"] = oc_minute15ocn_time_line_instances;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "oc-minute15ocn-time-line-instances" || name == "number")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstances()
{

    yang_name = "oc-minute15ocn-time-line-instances"; yang_parent_name = "oc-minute15ocn-history"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::~OcMinute15OcnTimeLineInstances()
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::has_data() const
{
    for (std::size_t index=0; index<oc_minute15ocn_time_line_instance.size(); index++)
    {
        if(oc_minute15ocn_time_line_instance[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::has_operation() const
{
    for (std::size_t index=0; index<oc_minute15ocn_time_line_instance.size(); index++)
    {
        if(oc_minute15ocn_time_line_instance[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oc-minute15ocn-time-line-instances";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "oc-minute15ocn-time-line-instance")
    {
        for(auto const & c : oc_minute15ocn_time_line_instance)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance>();
        c->parent = this;
        oc_minute15ocn_time_line_instance.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : oc_minute15ocn_time_line_instance)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "oc-minute15ocn-time-line-instance")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::OcMinute15OcnTimeLineInstance()
    :
    number{YType::int32, "number"},
    index_{YType::uint32, "index"},
    valid{YType::boolean, "valid"},
    timestamp{YType::str, "timestamp"},
    last_clear_time{YType::str, "last-clear-time"},
    last_clear15_min_time{YType::str, "last-clear15-min-time"},
    last_clear24_hr_time{YType::str, "last-clear24-hr-time"}
    	,
    section(std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section>())
	,line(std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line>())
	,fe_line(std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine>())
{
    section->parent = this;
    line->parent = this;
    fe_line->parent = this;

    yang_name = "oc-minute15ocn-time-line-instance"; yang_parent_name = "oc-minute15ocn-time-line-instances"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::~OcMinute15OcnTimeLineInstance()
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::has_data() const
{
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

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::has_operation() const
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

std::string PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oc-minute15ocn-time-line-instance" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::get_name_leaf_data() const
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

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "section")
    {
        if(section == nullptr)
        {
            section = std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section>();
        }
        return section;
    }

    if(child_yang_name == "line")
    {
        if(line == nullptr)
        {
            line = std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line>();
        }
        return line;
    }

    if(child_yang_name == "fe-line")
    {
        if(fe_line == nullptr)
        {
            fe_line = std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine>();
        }
        return fe_line;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "section" || name == "line" || name == "fe-line" || name == "number" || name == "index" || name == "valid" || name == "timestamp" || name == "last-clear-time" || name == "last-clear15-min-time" || name == "last-clear24-hr-time")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::Section()
    :
    section_status{YType::int32, "section-status"}
    	,
    section_e_ss(std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::SectionESs>())
	,section_se_ss(std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::SectionSeSs>())
	,section_sef_ss(std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::SectionSefSs>())
	,section_c_vs(std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::SectionCVs>())
{
    section_e_ss->parent = this;
    section_se_ss->parent = this;
    section_sef_ss->parent = this;
    section_c_vs->parent = this;

    yang_name = "section"; yang_parent_name = "oc-minute15ocn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::~Section()
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::has_data() const
{
    return section_status.is_set
	|| (section_e_ss !=  nullptr && section_e_ss->has_data())
	|| (section_se_ss !=  nullptr && section_se_ss->has_data())
	|| (section_sef_ss !=  nullptr && section_sef_ss->has_data())
	|| (section_c_vs !=  nullptr && section_c_vs->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(section_status.yfilter)
	|| (section_e_ss !=  nullptr && section_e_ss->has_operation())
	|| (section_se_ss !=  nullptr && section_se_ss->has_operation())
	|| (section_sef_ss !=  nullptr && section_sef_ss->has_operation())
	|| (section_c_vs !=  nullptr && section_c_vs->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "section";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (section_status.is_set || is_set(section_status.yfilter)) leaf_name_data.push_back(section_status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "section-e-ss")
    {
        if(section_e_ss == nullptr)
        {
            section_e_ss = std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::SectionESs>();
        }
        return section_e_ss;
    }

    if(child_yang_name == "section-se-ss")
    {
        if(section_se_ss == nullptr)
        {
            section_se_ss = std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::SectionSeSs>();
        }
        return section_se_ss;
    }

    if(child_yang_name == "section-sef-ss")
    {
        if(section_sef_ss == nullptr)
        {
            section_sef_ss = std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::SectionSefSs>();
        }
        return section_sef_ss;
    }

    if(child_yang_name == "section-c-vs")
    {
        if(section_c_vs == nullptr)
        {
            section_c_vs = std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::SectionCVs>();
        }
        return section_c_vs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "section-status")
    {
        section_status = value;
        section_status.value_namespace = name_space;
        section_status.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "section-status")
    {
        section_status.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "section-e-ss" || name == "section-se-ss" || name == "section-sef-ss" || name == "section-c-vs" || name == "section-status")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::SectionESs::SectionESs()
    :
    data{YType::uint32, "data"},
    threshold{YType::uint32, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "section-e-ss"; yang_parent_name = "section"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::SectionESs::~SectionESs()
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::SectionESs::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::SectionESs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::SectionESs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "section-e-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::SectionESs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::SectionESs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::SectionESs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::SectionESs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::SectionESs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::SectionESs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::SectionSeSs::SectionSeSs()
    :
    data{YType::uint32, "data"},
    threshold{YType::uint32, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "section-se-ss"; yang_parent_name = "section"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::SectionSeSs::~SectionSeSs()
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::SectionSeSs::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::SectionSeSs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::SectionSeSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "section-se-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::SectionSeSs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::SectionSeSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::SectionSeSs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::SectionSeSs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::SectionSeSs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::SectionSeSs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::SectionSefSs::SectionSefSs()
    :
    data{YType::uint32, "data"},
    threshold{YType::uint32, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "section-sef-ss"; yang_parent_name = "section"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::SectionSefSs::~SectionSefSs()
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::SectionSefSs::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::SectionSefSs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::SectionSefSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "section-sef-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::SectionSefSs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::SectionSefSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::SectionSefSs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::SectionSefSs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::SectionSefSs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::SectionSefSs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::SectionCVs::SectionCVs()
    :
    data{YType::uint32, "data"},
    threshold{YType::uint32, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "section-c-vs"; yang_parent_name = "section"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::SectionCVs::~SectionCVs()
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::SectionCVs::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::SectionCVs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::SectionCVs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "section-c-vs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::SectionCVs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::SectionCVs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::SectionCVs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::SectionCVs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::SectionCVs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Section::SectionCVs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::Line()
    :
    line_status{YType::int32, "line-status"}
    	,
    line_e_ss(std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineESs>())
	,line_se_ss(std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineSeSs>())
	,line_c_vs(std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineCVs>())
	,line_ua_ss(std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineUaSs>())
	,line_fc_ls(std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineFcLs>())
{
    line_e_ss->parent = this;
    line_se_ss->parent = this;
    line_c_vs->parent = this;
    line_ua_ss->parent = this;
    line_fc_ls->parent = this;

    yang_name = "line"; yang_parent_name = "oc-minute15ocn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::~Line()
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::has_data() const
{
    return line_status.is_set
	|| (line_e_ss !=  nullptr && line_e_ss->has_data())
	|| (line_se_ss !=  nullptr && line_se_ss->has_data())
	|| (line_c_vs !=  nullptr && line_c_vs->has_data())
	|| (line_ua_ss !=  nullptr && line_ua_ss->has_data())
	|| (line_fc_ls !=  nullptr && line_fc_ls->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(line_status.yfilter)
	|| (line_e_ss !=  nullptr && line_e_ss->has_operation())
	|| (line_se_ss !=  nullptr && line_se_ss->has_operation())
	|| (line_c_vs !=  nullptr && line_c_vs->has_operation())
	|| (line_ua_ss !=  nullptr && line_ua_ss->has_operation())
	|| (line_fc_ls !=  nullptr && line_fc_ls->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (line_status.is_set || is_set(line_status.yfilter)) leaf_name_data.push_back(line_status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "line-e-ss")
    {
        if(line_e_ss == nullptr)
        {
            line_e_ss = std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineESs>();
        }
        return line_e_ss;
    }

    if(child_yang_name == "line-se-ss")
    {
        if(line_se_ss == nullptr)
        {
            line_se_ss = std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineSeSs>();
        }
        return line_se_ss;
    }

    if(child_yang_name == "line-c-vs")
    {
        if(line_c_vs == nullptr)
        {
            line_c_vs = std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineCVs>();
        }
        return line_c_vs;
    }

    if(child_yang_name == "line-ua-ss")
    {
        if(line_ua_ss == nullptr)
        {
            line_ua_ss = std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineUaSs>();
        }
        return line_ua_ss;
    }

    if(child_yang_name == "line-fc-ls")
    {
        if(line_fc_ls == nullptr)
        {
            line_fc_ls = std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineFcLs>();
        }
        return line_fc_ls;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "line-status")
    {
        line_status = value;
        line_status.value_namespace = name_space;
        line_status.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "line-status")
    {
        line_status.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "line-e-ss" || name == "line-se-ss" || name == "line-c-vs" || name == "line-ua-ss" || name == "line-fc-ls" || name == "line-status")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineESs::LineESs()
    :
    data{YType::uint32, "data"},
    threshold{YType::uint32, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "line-e-ss"; yang_parent_name = "line"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineESs::~LineESs()
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineESs::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineESs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineESs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line-e-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineESs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineESs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineESs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineESs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineESs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineESs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineSeSs::LineSeSs()
    :
    data{YType::uint32, "data"},
    threshold{YType::uint32, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "line-se-ss"; yang_parent_name = "line"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineSeSs::~LineSeSs()
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineSeSs::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineSeSs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineSeSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line-se-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineSeSs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineSeSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineSeSs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineSeSs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineSeSs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineSeSs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineCVs::LineCVs()
    :
    data{YType::uint32, "data"},
    threshold{YType::uint32, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "line-c-vs"; yang_parent_name = "line"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineCVs::~LineCVs()
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineCVs::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineCVs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineCVs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line-c-vs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineCVs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineCVs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineCVs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineCVs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineCVs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineCVs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineUaSs::LineUaSs()
    :
    data{YType::uint32, "data"},
    threshold{YType::uint32, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "line-ua-ss"; yang_parent_name = "line"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineUaSs::~LineUaSs()
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineUaSs::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineUaSs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineUaSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line-ua-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineUaSs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineUaSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineUaSs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineUaSs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineUaSs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineUaSs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineFcLs::LineFcLs()
    :
    data{YType::uint32, "data"},
    threshold{YType::uint32, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "line-fc-ls"; yang_parent_name = "line"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineFcLs::~LineFcLs()
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineFcLs::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineFcLs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineFcLs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line-fc-ls";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineFcLs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineFcLs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineFcLs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineFcLs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineFcLs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::Line::LineFcLs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FeLine()
    :
    far_end_line_e_ss(std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineESs>())
	,far_end_line_se_ss(std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineSeSs>())
	,far_end_line_c_vs(std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineCVs>())
	,far_end_line_ua_ss(std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineUaSs>())
	,far_end_line_fc_ls(std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineFcLs>())
{
    far_end_line_e_ss->parent = this;
    far_end_line_se_ss->parent = this;
    far_end_line_c_vs->parent = this;
    far_end_line_ua_ss->parent = this;
    far_end_line_fc_ls->parent = this;

    yang_name = "fe-line"; yang_parent_name = "oc-minute15ocn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::~FeLine()
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::has_data() const
{
    return (far_end_line_e_ss !=  nullptr && far_end_line_e_ss->has_data())
	|| (far_end_line_se_ss !=  nullptr && far_end_line_se_ss->has_data())
	|| (far_end_line_c_vs !=  nullptr && far_end_line_c_vs->has_data())
	|| (far_end_line_ua_ss !=  nullptr && far_end_line_ua_ss->has_data())
	|| (far_end_line_fc_ls !=  nullptr && far_end_line_fc_ls->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::has_operation() const
{
    return is_set(yfilter)
	|| (far_end_line_e_ss !=  nullptr && far_end_line_e_ss->has_operation())
	|| (far_end_line_se_ss !=  nullptr && far_end_line_se_ss->has_operation())
	|| (far_end_line_c_vs !=  nullptr && far_end_line_c_vs->has_operation())
	|| (far_end_line_ua_ss !=  nullptr && far_end_line_ua_ss->has_operation())
	|| (far_end_line_fc_ls !=  nullptr && far_end_line_fc_ls->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fe-line";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "far-end-line-e-ss")
    {
        if(far_end_line_e_ss == nullptr)
        {
            far_end_line_e_ss = std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineESs>();
        }
        return far_end_line_e_ss;
    }

    if(child_yang_name == "far-end-line-se-ss")
    {
        if(far_end_line_se_ss == nullptr)
        {
            far_end_line_se_ss = std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineSeSs>();
        }
        return far_end_line_se_ss;
    }

    if(child_yang_name == "far-end-line-c-vs")
    {
        if(far_end_line_c_vs == nullptr)
        {
            far_end_line_c_vs = std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineCVs>();
        }
        return far_end_line_c_vs;
    }

    if(child_yang_name == "far-end-line-ua-ss")
    {
        if(far_end_line_ua_ss == nullptr)
        {
            far_end_line_ua_ss = std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineUaSs>();
        }
        return far_end_line_ua_ss;
    }

    if(child_yang_name == "far-end-line-fc-ls")
    {
        if(far_end_line_fc_ls == nullptr)
        {
            far_end_line_fc_ls = std::make_shared<PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineFcLs>();
        }
        return far_end_line_fc_ls;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "far-end-line-e-ss" || name == "far-end-line-se-ss" || name == "far-end-line-c-vs" || name == "far-end-line-ua-ss" || name == "far-end-line-fc-ls")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineESs::FarEndLineESs()
    :
    data{YType::uint32, "data"},
    threshold{YType::uint32, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "far-end-line-e-ss"; yang_parent_name = "fe-line"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineESs::~FarEndLineESs()
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineESs::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineESs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineESs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "far-end-line-e-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineESs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineESs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineESs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineESs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineESs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineESs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineSeSs::FarEndLineSeSs()
    :
    data{YType::uint32, "data"},
    threshold{YType::uint32, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "far-end-line-se-ss"; yang_parent_name = "fe-line"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineSeSs::~FarEndLineSeSs()
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineSeSs::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineSeSs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineSeSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "far-end-line-se-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineSeSs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineSeSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineSeSs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineSeSs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineSeSs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineSeSs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineCVs::FarEndLineCVs()
    :
    data{YType::uint32, "data"},
    threshold{YType::uint32, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "far-end-line-c-vs"; yang_parent_name = "fe-line"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineCVs::~FarEndLineCVs()
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineCVs::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineCVs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineCVs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "far-end-line-c-vs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineCVs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineCVs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineCVs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineCVs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineCVs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineCVs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineUaSs::FarEndLineUaSs()
    :
    data{YType::uint32, "data"},
    threshold{YType::uint32, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "far-end-line-ua-ss"; yang_parent_name = "fe-line"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineUaSs::~FarEndLineUaSs()
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineUaSs::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineUaSs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineUaSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "far-end-line-ua-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineUaSs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineUaSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineUaSs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineUaSs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineUaSs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineUaSs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineFcLs::FarEndLineFcLs()
    :
    data{YType::uint32, "data"},
    threshold{YType::uint32, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "far-end-line-fc-ls"; yang_parent_name = "fe-line"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineFcLs::~FarEndLineFcLs()
{
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineFcLs::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineFcLs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineFcLs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "far-end-line-fc-ls";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineFcLs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineFcLs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineFcLs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineFcLs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineFcLs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::OcHistory::OcPortHistories::OcPortHistory::OcMinute15History::OcMinute15OcnHistories::OcMinute15OcnHistory::OcMinute15OcnTimeLineInstances::OcMinute15OcnTimeLineInstance::FeLine::FarEndLineFcLs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}


}
}

