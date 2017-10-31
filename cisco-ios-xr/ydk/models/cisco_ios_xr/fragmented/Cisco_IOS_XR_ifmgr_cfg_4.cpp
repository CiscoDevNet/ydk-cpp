
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ifmgr_cfg_4.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ifmgr_cfg {

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec::Minute15FecReports::Minute15FecReport::Minute15FecReport()
    :
    fec_report{YType::enumeration, "fec-report"},
    enable{YType::enumeration, "enable"}
{

    yang_name = "minute15fec-report"; yang_parent_name = "minute15fec-reports"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec::Minute15FecReports::Minute15FecReport::~Minute15FecReport()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec::Minute15FecReports::Minute15FecReport::has_data() const
{
    return fec_report.is_set
	|| enable.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec::Minute15FecReports::Minute15FecReport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fec_report.yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec::Minute15FecReports::Minute15FecReport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15fec-report" <<"[fec-report='" <<fec_report <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec::Minute15FecReports::Minute15FecReport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fec_report.is_set || is_set(fec_report.yfilter)) leaf_name_data.push_back(fec_report.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec::Minute15FecReports::Minute15FecReport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec::Minute15FecReports::Minute15FecReport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec::Minute15FecReports::Minute15FecReport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fec-report")
    {
        fec_report = value;
        fec_report.value_namespace = name_space;
        fec_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec::Minute15FecReports::Minute15FecReport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fec-report")
    {
        fec_report.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec::Minute15FecReports::Minute15FecReport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fec-report" || name == "enable")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secytx::Minute15Secytx()
    :
    minute15secytx_reports(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secytx::Minute15SecytxReports>())
	,minute15secytx_thresholds(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secytx::Minute15SecytxThresholds>())
{
    minute15secytx_reports->parent = this;
    minute15secytx_thresholds->parent = this;

    yang_name = "minute15secytx"; yang_parent_name = "minute15"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secytx::~Minute15Secytx()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secytx::has_data() const
{
    return (minute15secytx_reports !=  nullptr && minute15secytx_reports->has_data())
	|| (minute15secytx_thresholds !=  nullptr && minute15secytx_thresholds->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secytx::has_operation() const
{
    return is_set(yfilter)
	|| (minute15secytx_reports !=  nullptr && minute15secytx_reports->has_operation())
	|| (minute15secytx_thresholds !=  nullptr && minute15secytx_thresholds->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secytx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15secytx";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secytx::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secytx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "minute15secytx-reports")
    {
        if(minute15secytx_reports == nullptr)
        {
            minute15secytx_reports = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secytx::Minute15SecytxReports>();
        }
        return minute15secytx_reports;
    }

    if(child_yang_name == "minute15secytx-thresholds")
    {
        if(minute15secytx_thresholds == nullptr)
        {
            minute15secytx_thresholds = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secytx::Minute15SecytxThresholds>();
        }
        return minute15secytx_thresholds;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secytx::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(minute15secytx_reports != nullptr)
    {
        children["minute15secytx-reports"] = minute15secytx_reports;
    }

    if(minute15secytx_thresholds != nullptr)
    {
        children["minute15secytx-thresholds"] = minute15secytx_thresholds;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secytx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secytx::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secytx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minute15secytx-reports" || name == "minute15secytx-thresholds")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secytx::Minute15SecytxReports::Minute15SecytxReports()
{

    yang_name = "minute15secytx-reports"; yang_parent_name = "minute15secytx"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secytx::Minute15SecytxReports::~Minute15SecytxReports()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secytx::Minute15SecytxReports::has_data() const
{
    for (std::size_t index=0; index<minute15secytx_report.size(); index++)
    {
        if(minute15secytx_report[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secytx::Minute15SecytxReports::has_operation() const
{
    for (std::size_t index=0; index<minute15secytx_report.size(); index++)
    {
        if(minute15secytx_report[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secytx::Minute15SecytxReports::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15secytx-reports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secytx::Minute15SecytxReports::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secytx::Minute15SecytxReports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "minute15secytx-report")
    {
        for(auto const & c : minute15secytx_report)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secytx::Minute15SecytxReports::Minute15SecytxReport>();
        c->parent = this;
        minute15secytx_report.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secytx::Minute15SecytxReports::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : minute15secytx_report)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secytx::Minute15SecytxReports::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secytx::Minute15SecytxReports::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secytx::Minute15SecytxReports::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minute15secytx-report")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secytx::Minute15SecytxReports::Minute15SecytxReport::Minute15SecytxReport()
    :
    secytx_report{YType::enumeration, "secytx-report"},
    enable{YType::enumeration, "enable"}
{

    yang_name = "minute15secytx-report"; yang_parent_name = "minute15secytx-reports"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secytx::Minute15SecytxReports::Minute15SecytxReport::~Minute15SecytxReport()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secytx::Minute15SecytxReports::Minute15SecytxReport::has_data() const
{
    return secytx_report.is_set
	|| enable.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secytx::Minute15SecytxReports::Minute15SecytxReport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(secytx_report.yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secytx::Minute15SecytxReports::Minute15SecytxReport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15secytx-report" <<"[secytx-report='" <<secytx_report <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secytx::Minute15SecytxReports::Minute15SecytxReport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (secytx_report.is_set || is_set(secytx_report.yfilter)) leaf_name_data.push_back(secytx_report.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secytx::Minute15SecytxReports::Minute15SecytxReport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secytx::Minute15SecytxReports::Minute15SecytxReport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secytx::Minute15SecytxReports::Minute15SecytxReport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "secytx-report")
    {
        secytx_report = value;
        secytx_report.value_namespace = name_space;
        secytx_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secytx::Minute15SecytxReports::Minute15SecytxReport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "secytx-report")
    {
        secytx_report.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secytx::Minute15SecytxReports::Minute15SecytxReport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "secytx-report" || name == "enable")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secytx::Minute15SecytxThresholds::Minute15SecytxThresholds()
{

    yang_name = "minute15secytx-thresholds"; yang_parent_name = "minute15secytx"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secytx::Minute15SecytxThresholds::~Minute15SecytxThresholds()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secytx::Minute15SecytxThresholds::has_data() const
{
    for (std::size_t index=0; index<minute15secytx_threshold.size(); index++)
    {
        if(minute15secytx_threshold[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secytx::Minute15SecytxThresholds::has_operation() const
{
    for (std::size_t index=0; index<minute15secytx_threshold.size(); index++)
    {
        if(minute15secytx_threshold[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secytx::Minute15SecytxThresholds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15secytx-thresholds";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secytx::Minute15SecytxThresholds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secytx::Minute15SecytxThresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "minute15secytx-threshold")
    {
        for(auto const & c : minute15secytx_threshold)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secytx::Minute15SecytxThresholds::Minute15SecytxThreshold>();
        c->parent = this;
        minute15secytx_threshold.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secytx::Minute15SecytxThresholds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : minute15secytx_threshold)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secytx::Minute15SecytxThresholds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secytx::Minute15SecytxThresholds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secytx::Minute15SecytxThresholds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minute15secytx-threshold")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secytx::Minute15SecytxThresholds::Minute15SecytxThreshold::Minute15SecytxThreshold()
    :
    secytx_threshold{YType::enumeration, "secytx-threshold"},
    secytx_threshold_value{YType::int32, "secytx-threshold-value"}
{

    yang_name = "minute15secytx-threshold"; yang_parent_name = "minute15secytx-thresholds"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secytx::Minute15SecytxThresholds::Minute15SecytxThreshold::~Minute15SecytxThreshold()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secytx::Minute15SecytxThresholds::Minute15SecytxThreshold::has_data() const
{
    return secytx_threshold.is_set
	|| secytx_threshold_value.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secytx::Minute15SecytxThresholds::Minute15SecytxThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(secytx_threshold.yfilter)
	|| ydk::is_set(secytx_threshold_value.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secytx::Minute15SecytxThresholds::Minute15SecytxThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15secytx-threshold" <<"[secytx-threshold='" <<secytx_threshold <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secytx::Minute15SecytxThresholds::Minute15SecytxThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (secytx_threshold.is_set || is_set(secytx_threshold.yfilter)) leaf_name_data.push_back(secytx_threshold.get_name_leafdata());
    if (secytx_threshold_value.is_set || is_set(secytx_threshold_value.yfilter)) leaf_name_data.push_back(secytx_threshold_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secytx::Minute15SecytxThresholds::Minute15SecytxThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secytx::Minute15SecytxThresholds::Minute15SecytxThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secytx::Minute15SecytxThresholds::Minute15SecytxThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "secytx-threshold")
    {
        secytx_threshold = value;
        secytx_threshold.value_namespace = name_space;
        secytx_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secytx-threshold-value")
    {
        secytx_threshold_value = value;
        secytx_threshold_value.value_namespace = name_space;
        secytx_threshold_value.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secytx::Minute15SecytxThresholds::Minute15SecytxThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "secytx-threshold")
    {
        secytx_threshold.yfilter = yfilter;
    }
    if(value_path == "secytx-threshold-value")
    {
        secytx_threshold_value.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secytx::Minute15SecytxThresholds::Minute15SecytxThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "secytx-threshold" || name == "secytx-threshold-value")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Otn::Minute15Otn()
    :
    min15_otn_threshes(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Otn::Min15OtnThreshes>())
	,minute15otn_reports(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Otn::Minute15OtnReports>())
{
    min15_otn_threshes->parent = this;
    minute15otn_reports->parent = this;

    yang_name = "minute15otn"; yang_parent_name = "minute15"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Otn::~Minute15Otn()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Otn::has_data() const
{
    return (min15_otn_threshes !=  nullptr && min15_otn_threshes->has_data())
	|| (minute15otn_reports !=  nullptr && minute15otn_reports->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Otn::has_operation() const
{
    return is_set(yfilter)
	|| (min15_otn_threshes !=  nullptr && min15_otn_threshes->has_operation())
	|| (minute15otn_reports !=  nullptr && minute15otn_reports->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Otn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15otn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Otn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Otn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "min15-otn-threshes")
    {
        if(min15_otn_threshes == nullptr)
        {
            min15_otn_threshes = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Otn::Min15OtnThreshes>();
        }
        return min15_otn_threshes;
    }

    if(child_yang_name == "minute15otn-reports")
    {
        if(minute15otn_reports == nullptr)
        {
            minute15otn_reports = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Otn::Minute15OtnReports>();
        }
        return minute15otn_reports;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Otn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(min15_otn_threshes != nullptr)
    {
        children["min15-otn-threshes"] = min15_otn_threshes;
    }

    if(minute15otn_reports != nullptr)
    {
        children["minute15otn-reports"] = minute15otn_reports;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Otn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Otn::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Otn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "min15-otn-threshes" || name == "minute15otn-reports")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Otn::Min15OtnThreshes::Min15OtnThreshes()
{

    yang_name = "min15-otn-threshes"; yang_parent_name = "minute15otn"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Otn::Min15OtnThreshes::~Min15OtnThreshes()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Otn::Min15OtnThreshes::has_data() const
{
    for (std::size_t index=0; index<min15_otn_thresh.size(); index++)
    {
        if(min15_otn_thresh[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Otn::Min15OtnThreshes::has_operation() const
{
    for (std::size_t index=0; index<min15_otn_thresh.size(); index++)
    {
        if(min15_otn_thresh[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Otn::Min15OtnThreshes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "min15-otn-threshes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Otn::Min15OtnThreshes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Otn::Min15OtnThreshes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "min15-otn-thresh")
    {
        for(auto const & c : min15_otn_thresh)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Otn::Min15OtnThreshes::Min15OtnThresh>();
        c->parent = this;
        min15_otn_thresh.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Otn::Min15OtnThreshes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : min15_otn_thresh)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Otn::Min15OtnThreshes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Otn::Min15OtnThreshes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Otn::Min15OtnThreshes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "min15-otn-thresh")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Otn::Min15OtnThreshes::Min15OtnThresh::Min15OtnThresh()
    :
    otn_threshold{YType::enumeration, "otn-threshold"},
    otn_threshold_value{YType::int32, "otn-threshold-value"}
{

    yang_name = "min15-otn-thresh"; yang_parent_name = "min15-otn-threshes"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Otn::Min15OtnThreshes::Min15OtnThresh::~Min15OtnThresh()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Otn::Min15OtnThreshes::Min15OtnThresh::has_data() const
{
    return otn_threshold.is_set
	|| otn_threshold_value.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Otn::Min15OtnThreshes::Min15OtnThresh::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(otn_threshold.yfilter)
	|| ydk::is_set(otn_threshold_value.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Otn::Min15OtnThreshes::Min15OtnThresh::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "min15-otn-thresh" <<"[otn-threshold='" <<otn_threshold <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Otn::Min15OtnThreshes::Min15OtnThresh::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (otn_threshold.is_set || is_set(otn_threshold.yfilter)) leaf_name_data.push_back(otn_threshold.get_name_leafdata());
    if (otn_threshold_value.is_set || is_set(otn_threshold_value.yfilter)) leaf_name_data.push_back(otn_threshold_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Otn::Min15OtnThreshes::Min15OtnThresh::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Otn::Min15OtnThreshes::Min15OtnThresh::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Otn::Min15OtnThreshes::Min15OtnThresh::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "otn-threshold")
    {
        otn_threshold = value;
        otn_threshold.value_namespace = name_space;
        otn_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "otn-threshold-value")
    {
        otn_threshold_value = value;
        otn_threshold_value.value_namespace = name_space;
        otn_threshold_value.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Otn::Min15OtnThreshes::Min15OtnThresh::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "otn-threshold")
    {
        otn_threshold.yfilter = yfilter;
    }
    if(value_path == "otn-threshold-value")
    {
        otn_threshold_value.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Otn::Min15OtnThreshes::Min15OtnThresh::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "otn-threshold" || name == "otn-threshold-value")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Otn::Minute15OtnReports::Minute15OtnReports()
{

    yang_name = "minute15otn-reports"; yang_parent_name = "minute15otn"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Otn::Minute15OtnReports::~Minute15OtnReports()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Otn::Minute15OtnReports::has_data() const
{
    for (std::size_t index=0; index<minute15otn_report.size(); index++)
    {
        if(minute15otn_report[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Otn::Minute15OtnReports::has_operation() const
{
    for (std::size_t index=0; index<minute15otn_report.size(); index++)
    {
        if(minute15otn_report[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Otn::Minute15OtnReports::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15otn-reports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Otn::Minute15OtnReports::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Otn::Minute15OtnReports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "minute15otn-report")
    {
        for(auto const & c : minute15otn_report)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Otn::Minute15OtnReports::Minute15OtnReport>();
        c->parent = this;
        minute15otn_report.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Otn::Minute15OtnReports::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : minute15otn_report)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Otn::Minute15OtnReports::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Otn::Minute15OtnReports::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Otn::Minute15OtnReports::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minute15otn-report")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Otn::Minute15OtnReports::Minute15OtnReport::Minute15OtnReport()
    :
    otn_report{YType::enumeration, "otn-report"},
    enable{YType::enumeration, "enable"}
{

    yang_name = "minute15otn-report"; yang_parent_name = "minute15otn-reports"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Otn::Minute15OtnReports::Minute15OtnReport::~Minute15OtnReport()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Otn::Minute15OtnReports::Minute15OtnReport::has_data() const
{
    return otn_report.is_set
	|| enable.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Otn::Minute15OtnReports::Minute15OtnReport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(otn_report.yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Otn::Minute15OtnReports::Minute15OtnReport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15otn-report" <<"[otn-report='" <<otn_report <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Otn::Minute15OtnReports::Minute15OtnReport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (otn_report.is_set || is_set(otn_report.yfilter)) leaf_name_data.push_back(otn_report.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Otn::Minute15OtnReports::Minute15OtnReport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Otn::Minute15OtnReports::Minute15OtnReport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Otn::Minute15OtnReports::Minute15OtnReport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "otn-report")
    {
        otn_report = value;
        otn_report.value_namespace = name_space;
        otn_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Otn::Minute15OtnReports::Minute15OtnReport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "otn-report")
    {
        otn_report.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Otn::Minute15OtnReports::Minute15OtnReport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "otn-report" || name == "enable")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaCfgPpp::CiscoIOSXRPppMaCfgPpp()
{

    yang_name = "Cisco-IOS-XR-ppp-ma-cfg_ppp"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaCfgPpp::~CiscoIOSXRPppMaCfgPpp()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaCfgPpp::has_data() const
{
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaCfgPpp::has_operation() const
{
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaCfgPpp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ppp-ma-cfg:Cisco-IOS-XR-ppp-ma-cfg_ppp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaCfgPpp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaCfgPpp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaCfgPpp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaCfgPpp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaCfgPpp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaCfgPpp::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaFsmCfgPpp::CiscoIOSXRPppMaFsmCfgPpp()
    :
    fsm(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaFsmCfgPpp::Fsm>())
{
    fsm->parent = this;

    yang_name = "Cisco-IOS-XR-ppp-ma-fsm-cfg_ppp"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaFsmCfgPpp::~CiscoIOSXRPppMaFsmCfgPpp()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaFsmCfgPpp::has_data() const
{
    return (fsm !=  nullptr && fsm->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaFsmCfgPpp::has_operation() const
{
    return is_set(yfilter)
	|| (fsm !=  nullptr && fsm->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaFsmCfgPpp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ppp-ma-fsm-cfg:Cisco-IOS-XR-ppp-ma-fsm-cfg_ppp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaFsmCfgPpp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaFsmCfgPpp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fsm")
    {
        if(fsm == nullptr)
        {
            fsm = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaFsmCfgPpp::Fsm>();
        }
        return fsm;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaFsmCfgPpp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(fsm != nullptr)
    {
        children["fsm"] = fsm;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaFsmCfgPpp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaFsmCfgPpp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaFsmCfgPpp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fsm")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaFsmCfgPpp::Fsm::Fsm()
    :
    retry_timeout{YType::uint32, "retry-timeout"},
    max_unacknowledged_term_requests{YType::uint32, "max-unacknowledged-term-requests"},
    max_consecutive_conf_naks{YType::uint32, "max-consecutive-conf-naks"},
    max_unacknowledged_conf_requests{YType::uint32, "max-unacknowledged-conf-requests"}
{

    yang_name = "fsm"; yang_parent_name = "Cisco-IOS-XR-ppp-ma-fsm-cfg_ppp"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaFsmCfgPpp::Fsm::~Fsm()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaFsmCfgPpp::Fsm::has_data() const
{
    return retry_timeout.is_set
	|| max_unacknowledged_term_requests.is_set
	|| max_consecutive_conf_naks.is_set
	|| max_unacknowledged_conf_requests.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaFsmCfgPpp::Fsm::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(retry_timeout.yfilter)
	|| ydk::is_set(max_unacknowledged_term_requests.yfilter)
	|| ydk::is_set(max_consecutive_conf_naks.yfilter)
	|| ydk::is_set(max_unacknowledged_conf_requests.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaFsmCfgPpp::Fsm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fsm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaFsmCfgPpp::Fsm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (retry_timeout.is_set || is_set(retry_timeout.yfilter)) leaf_name_data.push_back(retry_timeout.get_name_leafdata());
    if (max_unacknowledged_term_requests.is_set || is_set(max_unacknowledged_term_requests.yfilter)) leaf_name_data.push_back(max_unacknowledged_term_requests.get_name_leafdata());
    if (max_consecutive_conf_naks.is_set || is_set(max_consecutive_conf_naks.yfilter)) leaf_name_data.push_back(max_consecutive_conf_naks.get_name_leafdata());
    if (max_unacknowledged_conf_requests.is_set || is_set(max_unacknowledged_conf_requests.yfilter)) leaf_name_data.push_back(max_unacknowledged_conf_requests.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaFsmCfgPpp::Fsm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaFsmCfgPpp::Fsm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaFsmCfgPpp::Fsm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "retry-timeout")
    {
        retry_timeout = value;
        retry_timeout.value_namespace = name_space;
        retry_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-unacknowledged-term-requests")
    {
        max_unacknowledged_term_requests = value;
        max_unacknowledged_term_requests.value_namespace = name_space;
        max_unacknowledged_term_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-consecutive-conf-naks")
    {
        max_consecutive_conf_naks = value;
        max_consecutive_conf_naks.value_namespace = name_space;
        max_consecutive_conf_naks.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-unacknowledged-conf-requests")
    {
        max_unacknowledged_conf_requests = value;
        max_unacknowledged_conf_requests.value_namespace = name_space;
        max_unacknowledged_conf_requests.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaFsmCfgPpp::Fsm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "retry-timeout")
    {
        retry_timeout.yfilter = yfilter;
    }
    if(value_path == "max-unacknowledged-term-requests")
    {
        max_unacknowledged_term_requests.yfilter = yfilter;
    }
    if(value_path == "max-consecutive-conf-naks")
    {
        max_consecutive_conf_naks.yfilter = yfilter;
    }
    if(value_path == "max-unacknowledged-conf-requests")
    {
        max_unacknowledged_conf_requests.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaFsmCfgPpp::Fsm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "retry-timeout" || name == "max-unacknowledged-term-requests" || name == "max-consecutive-conf-naks" || name == "max-unacknowledged-conf-requests")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::CiscoIOSXRPppMaIpcpCfgPpp()
    :
    ipcp(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::Ipcp>())
{
    ipcp->parent = this;

    yang_name = "Cisco-IOS-XR-ppp-ma-ipcp-cfg_ppp"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::~CiscoIOSXRPppMaIpcpCfgPpp()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::has_data() const
{
    return (ipcp !=  nullptr && ipcp->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::has_operation() const
{
    return is_set(yfilter)
	|| (ipcp !=  nullptr && ipcp->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ppp-ma-ipcp-cfg:Cisco-IOS-XR-ppp-ma-ipcp-cfg_ppp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipcp")
    {
        if(ipcp == nullptr)
        {
            ipcp = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::Ipcp>();
        }
        return ipcp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipcp != nullptr)
    {
        children["ipcp"] = ipcp;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipcp")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::Ipcp::Ipcp()
    :
    neighbor_route_disable{YType::empty, "neighbor-route-disable"}
    	,
    peer_address(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::Ipcp::PeerAddress>())
	,dns(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::Ipcp::Dns>())
{
    peer_address->parent = this;
    dns->parent = this;

    yang_name = "ipcp"; yang_parent_name = "Cisco-IOS-XR-ppp-ma-ipcp-cfg_ppp"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::Ipcp::~Ipcp()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::Ipcp::has_data() const
{
    return neighbor_route_disable.is_set
	|| (peer_address !=  nullptr && peer_address->has_data())
	|| (dns !=  nullptr && dns->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::Ipcp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(neighbor_route_disable.yfilter)
	|| (peer_address !=  nullptr && peer_address->has_operation())
	|| (dns !=  nullptr && dns->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::Ipcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::Ipcp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_route_disable.is_set || is_set(neighbor_route_disable.yfilter)) leaf_name_data.push_back(neighbor_route_disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::Ipcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer-address")
    {
        if(peer_address == nullptr)
        {
            peer_address = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::Ipcp::PeerAddress>();
        }
        return peer_address;
    }

    if(child_yang_name == "dns")
    {
        if(dns == nullptr)
        {
            dns = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::Ipcp::Dns>();
        }
        return dns;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::Ipcp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(peer_address != nullptr)
    {
        children["peer-address"] = peer_address;
    }

    if(dns != nullptr)
    {
        children["dns"] = dns;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::Ipcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "neighbor-route-disable")
    {
        neighbor_route_disable = value;
        neighbor_route_disable.value_namespace = name_space;
        neighbor_route_disable.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::Ipcp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "neighbor-route-disable")
    {
        neighbor_route_disable.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::Ipcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-address" || name == "dns" || name == "neighbor-route-disable")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::Ipcp::PeerAddress::PeerAddress()
    :
    default_{YType::str, "default"}
{

    yang_name = "peer-address"; yang_parent_name = "ipcp"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::Ipcp::PeerAddress::~PeerAddress()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::Ipcp::PeerAddress::has_data() const
{
    return default_.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::Ipcp::PeerAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(default_.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::Ipcp::PeerAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::Ipcp::PeerAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::Ipcp::PeerAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::Ipcp::PeerAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::Ipcp::PeerAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "default")
    {
        default_ = value;
        default_.value_namespace = name_space;
        default_.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::Ipcp::PeerAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "default")
    {
        default_.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::Ipcp::PeerAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::Ipcp::Dns::Dns()
    :
    dns_addresses(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::Ipcp::Dns::DnsAddresses>())
{
    dns_addresses->parent = this;

    yang_name = "dns"; yang_parent_name = "ipcp"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::Ipcp::Dns::~Dns()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::Ipcp::Dns::has_data() const
{
    return (dns_addresses !=  nullptr && dns_addresses->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::Ipcp::Dns::has_operation() const
{
    return is_set(yfilter)
	|| (dns_addresses !=  nullptr && dns_addresses->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::Ipcp::Dns::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dns";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::Ipcp::Dns::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::Ipcp::Dns::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dns-addresses")
    {
        if(dns_addresses == nullptr)
        {
            dns_addresses = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::Ipcp::Dns::DnsAddresses>();
        }
        return dns_addresses;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::Ipcp::Dns::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dns_addresses != nullptr)
    {
        children["dns-addresses"] = dns_addresses;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::Ipcp::Dns::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::Ipcp::Dns::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::Ipcp::Dns::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dns-addresses")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::Ipcp::Dns::DnsAddresses::DnsAddresses()
    :
    primary{YType::str, "primary"},
    secondary{YType::str, "secondary"}
{

    yang_name = "dns-addresses"; yang_parent_name = "dns"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::Ipcp::Dns::DnsAddresses::~DnsAddresses()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::Ipcp::Dns::DnsAddresses::has_data() const
{
    return primary.is_set
	|| secondary.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::Ipcp::Dns::DnsAddresses::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(primary.yfilter)
	|| ydk::is_set(secondary.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::Ipcp::Dns::DnsAddresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dns-addresses";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::Ipcp::Dns::DnsAddresses::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (primary.is_set || is_set(primary.yfilter)) leaf_name_data.push_back(primary.get_name_leafdata());
    if (secondary.is_set || is_set(secondary.yfilter)) leaf_name_data.push_back(secondary.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::Ipcp::Dns::DnsAddresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::Ipcp::Dns::DnsAddresses::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::Ipcp::Dns::DnsAddresses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "primary")
    {
        primary = value;
        primary.value_namespace = name_space;
        primary.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secondary")
    {
        secondary = value;
        secondary.value_namespace = name_space;
        secondary.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::Ipcp::Dns::DnsAddresses::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "primary")
    {
        primary.yfilter = yfilter;
    }
    if(value_path == "secondary")
    {
        secondary.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::Ipcp::Dns::DnsAddresses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "primary" || name == "secondary")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpiwCfgPpp::CiscoIOSXRPppMaIpcpiwCfgPpp()
    :
    ipcpiw(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpiwCfgPpp::Ipcpiw>())
{
    ipcpiw->parent = this;

    yang_name = "Cisco-IOS-XR-ppp-ma-ipcpiw-cfg_ppp"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpiwCfgPpp::~CiscoIOSXRPppMaIpcpiwCfgPpp()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpiwCfgPpp::has_data() const
{
    return (ipcpiw !=  nullptr && ipcpiw->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpiwCfgPpp::has_operation() const
{
    return is_set(yfilter)
	|| (ipcpiw !=  nullptr && ipcpiw->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpiwCfgPpp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ppp-ma-ipcpiw-cfg:Cisco-IOS-XR-ppp-ma-ipcpiw-cfg_ppp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpiwCfgPpp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpiwCfgPpp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipcpiw")
    {
        if(ipcpiw == nullptr)
        {
            ipcpiw = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpiwCfgPpp::Ipcpiw>();
        }
        return ipcpiw;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpiwCfgPpp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipcpiw != nullptr)
    {
        children["ipcpiw"] = ipcpiw;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpiwCfgPpp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpiwCfgPpp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpiwCfgPpp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipcpiw")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpiwCfgPpp::Ipcpiw::Ipcpiw()
    :
    proxy_address{YType::str, "proxy-address"}
{

    yang_name = "ipcpiw"; yang_parent_name = "Cisco-IOS-XR-ppp-ma-ipcpiw-cfg_ppp"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpiwCfgPpp::Ipcpiw::~Ipcpiw()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpiwCfgPpp::Ipcpiw::has_data() const
{
    return proxy_address.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpiwCfgPpp::Ipcpiw::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(proxy_address.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpiwCfgPpp::Ipcpiw::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipcpiw";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpiwCfgPpp::Ipcpiw::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (proxy_address.is_set || is_set(proxy_address.yfilter)) leaf_name_data.push_back(proxy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpiwCfgPpp::Ipcpiw::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpiwCfgPpp::Ipcpiw::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpiwCfgPpp::Ipcpiw::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "proxy-address")
    {
        proxy_address = value;
        proxy_address.value_namespace = name_space;
        proxy_address.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpiwCfgPpp::Ipcpiw::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "proxy-address")
    {
        proxy_address.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpiwCfgPpp::Ipcpiw::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "proxy-address")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::CiscoIOSXRPppMaLcpCfgPpp()
    :
    mcmp(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Mcmp>())
	,lcp(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp>())
{
    mcmp->parent = this;
    lcp->parent = this;

    yang_name = "Cisco-IOS-XR-ppp-ma-lcp-cfg_ppp"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::~CiscoIOSXRPppMaLcpCfgPpp()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::has_data() const
{
    return (mcmp !=  nullptr && mcmp->has_data())
	|| (lcp !=  nullptr && lcp->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::has_operation() const
{
    return is_set(yfilter)
	|| (mcmp !=  nullptr && mcmp->has_operation())
	|| (lcp !=  nullptr && lcp->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ppp-ma-lcp-cfg:Cisco-IOS-XR-ppp-ma-lcp-cfg_ppp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mcmp")
    {
        if(mcmp == nullptr)
        {
            mcmp = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Mcmp>();
        }
        return mcmp;
    }

    if(child_yang_name == "lcp")
    {
        if(lcp == nullptr)
        {
            lcp = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp>();
        }
        return lcp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mcmp != nullptr)
    {
        children["mcmp"] = mcmp;
    }

    if(lcp != nullptr)
    {
        children["lcp"] = lcp;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mcmp" || name == "lcp")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Mcmp::Mcmp()
    :
    enable{YType::empty, "enable"},
    remote{YType::uint32, "remote"}
    	,
    local(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Mcmp::Local>())
{
    local->parent = this;

    yang_name = "mcmp"; yang_parent_name = "Cisco-IOS-XR-ppp-ma-lcp-cfg_ppp"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Mcmp::~Mcmp()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Mcmp::has_data() const
{
    return enable.is_set
	|| remote.is_set
	|| (local !=  nullptr && local->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Mcmp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(remote.yfilter)
	|| (local !=  nullptr && local->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Mcmp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mcmp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Mcmp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (remote.is_set || is_set(remote.yfilter)) leaf_name_data.push_back(remote.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Mcmp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "local")
    {
        if(local == nullptr)
        {
            local = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Mcmp::Local>();
        }
        return local;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Mcmp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(local != nullptr)
    {
        children["local"] = local;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Mcmp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote")
    {
        remote = value;
        remote.value_namespace = name_space;
        remote.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Mcmp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "remote")
    {
        remote.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Mcmp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local" || name == "enable" || name == "remote")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Mcmp::Local::Local()
    :
    initial{YType::uint32, "initial"},
    maximum{YType::uint32, "maximum"}
{

    yang_name = "local"; yang_parent_name = "mcmp"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Mcmp::Local::~Local()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Mcmp::Local::has_data() const
{
    return initial.is_set
	|| maximum.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Mcmp::Local::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(initial.yfilter)
	|| ydk::is_set(maximum.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Mcmp::Local::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Mcmp::Local::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (initial.is_set || is_set(initial.yfilter)) leaf_name_data.push_back(initial.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Mcmp::Local::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Mcmp::Local::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Mcmp::Local::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "initial")
    {
        initial = value;
        initial.value_namespace = name_space;
        initial.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Mcmp::Local::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "initial")
    {
        initial.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Mcmp::Local::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "initial" || name == "maximum")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Lcp()
    :
    service_type{YType::int32, "service-type"}
    	,
    multilink(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Multilink>())
	,pap(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Pap>())
	,loop_back(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::LoopBack>())
	,ms_chap(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::MsChap>())
	,authentication(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Authentication>())
	,chap(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Chap>())
{
    multilink->parent = this;
    pap->parent = this;
    loop_back->parent = this;
    ms_chap->parent = this;
    authentication->parent = this;
    chap->parent = this;

    yang_name = "lcp"; yang_parent_name = "Cisco-IOS-XR-ppp-ma-lcp-cfg_ppp"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::~Lcp()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::has_data() const
{
    return service_type.is_set
	|| (multilink !=  nullptr && multilink->has_data())
	|| (pap !=  nullptr && pap->has_data())
	|| (loop_back !=  nullptr && loop_back->has_data())
	|| (ms_chap !=  nullptr && ms_chap->has_data())
	|| (authentication !=  nullptr && authentication->has_data())
	|| (chap !=  nullptr && chap->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(service_type.yfilter)
	|| (multilink !=  nullptr && multilink->has_operation())
	|| (pap !=  nullptr && pap->has_operation())
	|| (loop_back !=  nullptr && loop_back->has_operation())
	|| (ms_chap !=  nullptr && ms_chap->has_operation())
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (chap !=  nullptr && chap->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service_type.is_set || is_set(service_type.yfilter)) leaf_name_data.push_back(service_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "multilink")
    {
        if(multilink == nullptr)
        {
            multilink = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Multilink>();
        }
        return multilink;
    }

    if(child_yang_name == "pap")
    {
        if(pap == nullptr)
        {
            pap = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Pap>();
        }
        return pap;
    }

    if(child_yang_name == "loop-back")
    {
        if(loop_back == nullptr)
        {
            loop_back = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::LoopBack>();
        }
        return loop_back;
    }

    if(child_yang_name == "ms-chap")
    {
        if(ms_chap == nullptr)
        {
            ms_chap = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::MsChap>();
        }
        return ms_chap;
    }

    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "chap")
    {
        if(chap == nullptr)
        {
            chap = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Chap>();
        }
        return chap;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(multilink != nullptr)
    {
        children["multilink"] = multilink;
    }

    if(pap != nullptr)
    {
        children["pap"] = pap;
    }

    if(loop_back != nullptr)
    {
        children["loop-back"] = loop_back;
    }

    if(ms_chap != nullptr)
    {
        children["ms-chap"] = ms_chap;
    }

    if(authentication != nullptr)
    {
        children["authentication"] = authentication;
    }

    if(chap != nullptr)
    {
        children["chap"] = chap;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "service-type")
    {
        service_type = value;
        service_type.value_namespace = name_space;
        service_type.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "service-type")
    {
        service_type.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "multilink" || name == "pap" || name == "loop-back" || name == "ms-chap" || name == "authentication" || name == "chap" || name == "service-type")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Multilink::Multilink()
    :
    minimum_active(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Multilink::MinimumActive>())
{
    minimum_active->parent = this;

    yang_name = "multilink"; yang_parent_name = "lcp"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Multilink::~Multilink()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Multilink::has_data() const
{
    return (minimum_active !=  nullptr && minimum_active->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Multilink::has_operation() const
{
    return is_set(yfilter)
	|| (minimum_active !=  nullptr && minimum_active->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Multilink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multilink";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Multilink::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Multilink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "minimum-active")
    {
        if(minimum_active == nullptr)
        {
            minimum_active = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Multilink::MinimumActive>();
        }
        return minimum_active;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Multilink::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(minimum_active != nullptr)
    {
        children["minimum-active"] = minimum_active;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Multilink::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Multilink::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Multilink::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minimum-active")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Multilink::MinimumActive::MinimumActive()
    :
    links{YType::uint32, "links"}
{

    yang_name = "minimum-active"; yang_parent_name = "multilink"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Multilink::MinimumActive::~MinimumActive()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Multilink::MinimumActive::has_data() const
{
    return links.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Multilink::MinimumActive::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(links.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Multilink::MinimumActive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minimum-active";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Multilink::MinimumActive::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (links.is_set || is_set(links.yfilter)) leaf_name_data.push_back(links.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Multilink::MinimumActive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Multilink::MinimumActive::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Multilink::MinimumActive::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "links")
    {
        links = value;
        links.value_namespace = name_space;
        links.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Multilink::MinimumActive::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "links")
    {
        links.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Multilink::MinimumActive::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "links")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Pap::Pap()
    :
    refuse{YType::empty, "refuse"}
    	,
    send_user_info(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Pap::SendUserInfo>())
{
    send_user_info->parent = this;

    yang_name = "pap"; yang_parent_name = "lcp"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Pap::~Pap()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Pap::has_data() const
{
    return refuse.is_set
	|| (send_user_info !=  nullptr && send_user_info->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Pap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(refuse.yfilter)
	|| (send_user_info !=  nullptr && send_user_info->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Pap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pap";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Pap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (refuse.is_set || is_set(refuse.yfilter)) leaf_name_data.push_back(refuse.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Pap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "send-user-info")
    {
        if(send_user_info == nullptr)
        {
            send_user_info = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Pap::SendUserInfo>();
        }
        return send_user_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Pap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(send_user_info != nullptr)
    {
        children["send-user-info"] = send_user_info;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Pap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "refuse")
    {
        refuse = value;
        refuse.value_namespace = name_space;
        refuse.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Pap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "refuse")
    {
        refuse.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Pap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "send-user-info" || name == "refuse")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Pap::SendUserInfo::SendUserInfo()
    :
    username{YType::str, "username"},
    password{YType::str, "password"}
{

    yang_name = "send-user-info"; yang_parent_name = "pap"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Pap::SendUserInfo::~SendUserInfo()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Pap::SendUserInfo::has_data() const
{
    return username.is_set
	|| password.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Pap::SendUserInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(username.yfilter)
	|| ydk::is_set(password.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Pap::SendUserInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "send-user-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Pap::SendUserInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (username.is_set || is_set(username.yfilter)) leaf_name_data.push_back(username.get_name_leafdata());
    if (password.is_set || is_set(password.yfilter)) leaf_name_data.push_back(password.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Pap::SendUserInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Pap::SendUserInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Pap::SendUserInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "username")
    {
        username = value;
        username.value_namespace = name_space;
        username.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "password")
    {
        password = value;
        password.value_namespace = name_space;
        password.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Pap::SendUserInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "username")
    {
        username.yfilter = yfilter;
    }
    if(value_path == "password")
    {
        password.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Pap::SendUserInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "username" || name == "password")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::LoopBack::LoopBack()
    :
    ignore{YType::empty, "ignore"}
{

    yang_name = "loop-back"; yang_parent_name = "lcp"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::LoopBack::~LoopBack()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::LoopBack::has_data() const
{
    return ignore.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::LoopBack::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ignore.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::LoopBack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "loop-back";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::LoopBack::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ignore.is_set || is_set(ignore.yfilter)) leaf_name_data.push_back(ignore.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::LoopBack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::LoopBack::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::LoopBack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ignore")
    {
        ignore = value;
        ignore.value_namespace = name_space;
        ignore.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::LoopBack::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ignore")
    {
        ignore.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::LoopBack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ignore")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::MsChap::MsChap()
    :
    password{YType::str, "password"},
    host_name{YType::str, "host-name"},
    refuse{YType::empty, "refuse"}
{

    yang_name = "ms-chap"; yang_parent_name = "lcp"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::MsChap::~MsChap()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::MsChap::has_data() const
{
    return password.is_set
	|| host_name.is_set
	|| refuse.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::MsChap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(password.yfilter)
	|| ydk::is_set(host_name.yfilter)
	|| ydk::is_set(refuse.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::MsChap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ms-chap";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::MsChap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (password.is_set || is_set(password.yfilter)) leaf_name_data.push_back(password.get_name_leafdata());
    if (host_name.is_set || is_set(host_name.yfilter)) leaf_name_data.push_back(host_name.get_name_leafdata());
    if (refuse.is_set || is_set(refuse.yfilter)) leaf_name_data.push_back(refuse.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::MsChap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::MsChap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::MsChap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "password")
    {
        password = value;
        password.value_namespace = name_space;
        password.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "host-name")
    {
        host_name = value;
        host_name.value_namespace = name_space;
        host_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "refuse")
    {
        refuse = value;
        refuse.value_namespace = name_space;
        refuse.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::MsChap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "password")
    {
        password.yfilter = yfilter;
    }
    if(value_path == "host-name")
    {
        host_name.yfilter = yfilter;
    }
    if(value_path == "refuse")
    {
        refuse.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::MsChap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "password" || name == "host-name" || name == "refuse")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Authentication::Authentication()
    :
    max_authentication_failures{YType::uint32, "max-authentication-failures"},
    timeout{YType::uint32, "timeout"}
    	,
    method(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Authentication::Method>())
{
    method->parent = this;

    yang_name = "authentication"; yang_parent_name = "lcp"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Authentication::~Authentication()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Authentication::has_data() const
{
    return max_authentication_failures.is_set
	|| timeout.is_set
	|| (method !=  nullptr && method->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_authentication_failures.yfilter)
	|| ydk::is_set(timeout.yfilter)
	|| (method !=  nullptr && method->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_authentication_failures.is_set || is_set(max_authentication_failures.yfilter)) leaf_name_data.push_back(max_authentication_failures.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "method")
    {
        if(method == nullptr)
        {
            method = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Authentication::Method>();
        }
        return method;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(method != nullptr)
    {
        children["method"] = method;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-authentication-failures")
    {
        max_authentication_failures = value;
        max_authentication_failures.value_namespace = name_space;
        max_authentication_failures.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-authentication-failures")
    {
        max_authentication_failures.yfilter = yfilter;
    }
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "method" || name == "max-authentication-failures" || name == "timeout")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Authentication::Method::Method()
    :
    name{YType::str, "name"},
    method{YType::enumeration, "method"}
{

    yang_name = "method"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Authentication::Method::~Method()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Authentication::Method::has_data() const
{
    for (auto const & leaf : method.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return name.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Authentication::Method::has_operation() const
{
    for (auto const & leaf : method.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(method.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Authentication::Method::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "method";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Authentication::Method::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    auto method_name_datas = method.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), method_name_datas.begin(), method_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Authentication::Method::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Authentication::Method::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Authentication::Method::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "method")
    {
        method.append(value);
    }
}

void InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Authentication::Method::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "method")
    {
        method.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Authentication::Method::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "method")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Chap::Chap()
    :
    password{YType::str, "password"},
    host_name{YType::str, "host-name"},
    refuse{YType::empty, "refuse"}
{

    yang_name = "chap"; yang_parent_name = "lcp"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Chap::~Chap()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Chap::has_data() const
{
    return password.is_set
	|| host_name.is_set
	|| refuse.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Chap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(password.yfilter)
	|| ydk::is_set(host_name.yfilter)
	|| ydk::is_set(refuse.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Chap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "chap";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Chap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (password.is_set || is_set(password.yfilter)) leaf_name_data.push_back(password.get_name_leafdata());
    if (host_name.is_set || is_set(host_name.yfilter)) leaf_name_data.push_back(host_name.get_name_leafdata());
    if (refuse.is_set || is_set(refuse.yfilter)) leaf_name_data.push_back(refuse.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Chap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Chap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Chap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "password")
    {
        password = value;
        password.value_namespace = name_space;
        password.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "host-name")
    {
        host_name = value;
        host_name.value_namespace = name_space;
        host_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "refuse")
    {
        refuse = value;
        refuse.value_namespace = name_space;
        refuse.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Chap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "password")
    {
        password.yfilter = yfilter;
    }
    if(value_path == "host-name")
    {
        host_name.yfilter = yfilter;
    }
    if(value_path == "refuse")
    {
        refuse.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Chap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "password" || name == "host-name" || name == "refuse")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::SsrpSession::SsrpSession()
    :
    group_id(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::SsrpSession::GroupId>())
{
    group_id->parent = this;

    yang_name = "ssrp-session"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::SsrpSession::~SsrpSession()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::SsrpSession::has_data() const
{
    return (group_id !=  nullptr && group_id->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::SsrpSession::has_operation() const
{
    return is_set(yfilter)
	|| (group_id !=  nullptr && group_id->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::SsrpSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ppp-ma-ssrp-cfg:ssrp-session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::SsrpSession::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::SsrpSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group-id")
    {
        if(group_id == nullptr)
        {
            group_id = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::SsrpSession::GroupId>();
        }
        return group_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::SsrpSession::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(group_id != nullptr)
    {
        children["group-id"] = group_id;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::SsrpSession::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::SsrpSession::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::SsrpSession::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-id")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::SsrpSession::GroupId::GroupId()
    :
    group{YType::uint32, "group"},
    id{YType::uint32, "id"}
{

    yang_name = "group-id"; yang_parent_name = "ssrp-session"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::SsrpSession::GroupId::~GroupId()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::SsrpSession::GroupId::has_data() const
{
    return group.is_set
	|| id.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::SsrpSession::GroupId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(id.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::SsrpSession::GroupId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::SsrpSession::GroupId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::SsrpSession::GroupId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::SsrpSession::GroupId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::SsrpSession::GroupId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::SsrpSession::GroupId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::SsrpSession::GroupId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group" || name == "id")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Qos::Qos()
    :
    output(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Qos::Output>())
	,input(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Qos::Input>())
{
    output->parent = this;
    input->parent = this;

    yang_name = "qos"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Qos::~Qos()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Qos::has_data() const
{
    return (output !=  nullptr && output->has_data())
	|| (input !=  nullptr && input->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Qos::has_operation() const
{
    return is_set(yfilter)
	|| (output !=  nullptr && output->has_operation())
	|| (input !=  nullptr && input->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Qos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-qos-ma-cfg:qos";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Qos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Qos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Qos::Output>();
        }
        return output;
    }

    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Qos::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Qos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(output != nullptr)
    {
        children["output"] = output;
    }

    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Qos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::Qos::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Qos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "output" || name == "input")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Qos::Output::Output()
{

    yang_name = "output"; yang_parent_name = "qos"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Qos::Output::~Output()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Qos::Output::has_data() const
{
    for (std::size_t index=0; index<service_policy.size(); index++)
    {
        if(service_policy[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<service_policy_qos.size(); index++)
    {
        if(service_policy_qos[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::Qos::Output::has_operation() const
{
    for (std::size_t index=0; index<service_policy.size(); index++)
    {
        if(service_policy[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<service_policy_qos.size(); index++)
    {
        if(service_policy_qos[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Qos::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Qos::Output::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Qos::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-policy")
    {
        for(auto const & c : service_policy)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicy>();
        c->parent = this;
        service_policy.push_back(c);
        return c;
    }

    if(child_yang_name == "service-policy-qos")
    {
        for(auto const & c : service_policy_qos)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos>();
        c->parent = this;
        service_policy_qos.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Qos::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : service_policy)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : service_policy_qos)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Qos::Output::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::Qos::Output::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Qos::Output::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-policy" || name == "service-policy-qos")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicy::ServicePolicy()
    :
    service_policy_name{YType::str, "service-policy-name"},
    account_type{YType::enumeration, "account-type"},
    l1_user_defined{YType::int32, "l1-user-defined"},
    spi_name{YType::str, "spi-name"},
    subscriber_parent_policy{YType::boolean, "subscriber-parent-policy"},
    resource_id{YType::uint32, "resource-id"},
    service_fragment_parent_policy{YType::boolean, "service-fragment-parent-policy"}
{

    yang_name = "service-policy"; yang_parent_name = "output"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicy::~ServicePolicy()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicy::has_data() const
{
    return service_policy_name.is_set
	|| account_type.is_set
	|| l1_user_defined.is_set
	|| spi_name.is_set
	|| subscriber_parent_policy.is_set
	|| resource_id.is_set
	|| service_fragment_parent_policy.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(service_policy_name.yfilter)
	|| ydk::is_set(account_type.yfilter)
	|| ydk::is_set(l1_user_defined.yfilter)
	|| ydk::is_set(spi_name.yfilter)
	|| ydk::is_set(subscriber_parent_policy.yfilter)
	|| ydk::is_set(resource_id.yfilter)
	|| ydk::is_set(service_fragment_parent_policy.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-policy" <<"[service-policy-name='" <<service_policy_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service_policy_name.is_set || is_set(service_policy_name.yfilter)) leaf_name_data.push_back(service_policy_name.get_name_leafdata());
    if (account_type.is_set || is_set(account_type.yfilter)) leaf_name_data.push_back(account_type.get_name_leafdata());
    if (l1_user_defined.is_set || is_set(l1_user_defined.yfilter)) leaf_name_data.push_back(l1_user_defined.get_name_leafdata());
    if (spi_name.is_set || is_set(spi_name.yfilter)) leaf_name_data.push_back(spi_name.get_name_leafdata());
    if (subscriber_parent_policy.is_set || is_set(subscriber_parent_policy.yfilter)) leaf_name_data.push_back(subscriber_parent_policy.get_name_leafdata());
    if (resource_id.is_set || is_set(resource_id.yfilter)) leaf_name_data.push_back(resource_id.get_name_leafdata());
    if (service_fragment_parent_policy.is_set || is_set(service_fragment_parent_policy.yfilter)) leaf_name_data.push_back(service_fragment_parent_policy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "service-policy-name")
    {
        service_policy_name = value;
        service_policy_name.value_namespace = name_space;
        service_policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "account-type")
    {
        account_type = value;
        account_type.value_namespace = name_space;
        account_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l1-user-defined")
    {
        l1_user_defined = value;
        l1_user_defined.value_namespace = name_space;
        l1_user_defined.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spi-name")
    {
        spi_name = value;
        spi_name.value_namespace = name_space;
        spi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subscriber-parent-policy")
    {
        subscriber_parent_policy = value;
        subscriber_parent_policy.value_namespace = name_space;
        subscriber_parent_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resource-id")
    {
        resource_id = value;
        resource_id.value_namespace = name_space;
        resource_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service-fragment-parent-policy")
    {
        service_fragment_parent_policy = value;
        service_fragment_parent_policy.value_namespace = name_space;
        service_fragment_parent_policy.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "service-policy-name")
    {
        service_policy_name.yfilter = yfilter;
    }
    if(value_path == "account-type")
    {
        account_type.yfilter = yfilter;
    }
    if(value_path == "l1-user-defined")
    {
        l1_user_defined.yfilter = yfilter;
    }
    if(value_path == "spi-name")
    {
        spi_name.yfilter = yfilter;
    }
    if(value_path == "subscriber-parent-policy")
    {
        subscriber_parent_policy.yfilter = yfilter;
    }
    if(value_path == "resource-id")
    {
        resource_id.yfilter = yfilter;
    }
    if(value_path == "service-fragment-parent-policy")
    {
        service_fragment_parent_policy.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-policy-name" || name == "account-type" || name == "l1-user-defined" || name == "spi-name" || name == "subscriber-parent-policy" || name == "resource-id" || name == "service-fragment-parent-policy")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::ServicePolicyQos()
    :
    service_policy_name{YType::str, "service-policy-name"}
    	,
    subscriber_group_names(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::SubscriberGroupNames>())
	,subscriber_parent(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::SubscriberParent>())
{
    subscriber_group_names->parent = this;
    subscriber_parent->parent = this;

    yang_name = "service-policy-qos"; yang_parent_name = "output"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::~ServicePolicyQos()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::has_data() const
{
    return service_policy_name.is_set
	|| (subscriber_group_names !=  nullptr && subscriber_group_names->has_data())
	|| (subscriber_parent !=  nullptr && subscriber_parent->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(service_policy_name.yfilter)
	|| (subscriber_group_names !=  nullptr && subscriber_group_names->has_operation())
	|| (subscriber_parent !=  nullptr && subscriber_parent->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-policy-qos" <<"[service-policy-name='" <<service_policy_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service_policy_name.is_set || is_set(service_policy_name.yfilter)) leaf_name_data.push_back(service_policy_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "subscriber-group-names")
    {
        if(subscriber_group_names == nullptr)
        {
            subscriber_group_names = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::SubscriberGroupNames>();
        }
        return subscriber_group_names;
    }

    if(child_yang_name == "subscriber-parent")
    {
        if(subscriber_parent == nullptr)
        {
            subscriber_parent = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::SubscriberParent>();
        }
        return subscriber_parent;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(subscriber_group_names != nullptr)
    {
        children["subscriber-group-names"] = subscriber_group_names;
    }

    if(subscriber_parent != nullptr)
    {
        children["subscriber-parent"] = subscriber_parent;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "service-policy-name")
    {
        service_policy_name = value;
        service_policy_name.value_namespace = name_space;
        service_policy_name.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "service-policy-name")
    {
        service_policy_name.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subscriber-group-names" || name == "subscriber-parent" || name == "service-policy-name")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupNames()
{

    yang_name = "subscriber-group-names"; yang_parent_name = "service-policy-qos"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::SubscriberGroupNames::~SubscriberGroupNames()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::SubscriberGroupNames::has_data() const
{
    for (std::size_t index=0; index<subscriber_group_name.size(); index++)
    {
        if(subscriber_group_name[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::SubscriberGroupNames::has_operation() const
{
    for (std::size_t index=0; index<subscriber_group_name.size(); index++)
    {
        if(subscriber_group_name[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::SubscriberGroupNames::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subscriber-group-names";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::SubscriberGroupNames::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::SubscriberGroupNames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "subscriber-group-name")
    {
        for(auto const & c : subscriber_group_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName>();
        c->parent = this;
        subscriber_group_name.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::SubscriberGroupNames::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : subscriber_group_name)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::SubscriberGroupNames::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::SubscriberGroupNames::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::SubscriberGroupNames::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subscriber-group-name")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::SubscriberGroupName()
    :
    subscriber_group_string{YType::str, "subscriber-group-string"},
    account_type{YType::enumeration, "account-type"},
    l1_user_defined{YType::int32, "l1-user-defined"},
    spi_name{YType::str, "spi-name"},
    policy_merge{YType::enumeration, "policy-merge"},
    subscriber_parent_policy{YType::boolean, "subscriber-parent-policy"},
    resource_id{YType::uint32, "resource-id"},
    service_fragment_parent_policy{YType::boolean, "service-fragment-parent-policy"}
{

    yang_name = "subscriber-group-name"; yang_parent_name = "subscriber-group-names"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::~SubscriberGroupName()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::has_data() const
{
    return subscriber_group_string.is_set
	|| account_type.is_set
	|| l1_user_defined.is_set
	|| spi_name.is_set
	|| policy_merge.is_set
	|| subscriber_parent_policy.is_set
	|| resource_id.is_set
	|| service_fragment_parent_policy.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(subscriber_group_string.yfilter)
	|| ydk::is_set(account_type.yfilter)
	|| ydk::is_set(l1_user_defined.yfilter)
	|| ydk::is_set(spi_name.yfilter)
	|| ydk::is_set(policy_merge.yfilter)
	|| ydk::is_set(subscriber_parent_policy.yfilter)
	|| ydk::is_set(resource_id.yfilter)
	|| ydk::is_set(service_fragment_parent_policy.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subscriber-group-name" <<"[subscriber-group-string='" <<subscriber_group_string <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subscriber_group_string.is_set || is_set(subscriber_group_string.yfilter)) leaf_name_data.push_back(subscriber_group_string.get_name_leafdata());
    if (account_type.is_set || is_set(account_type.yfilter)) leaf_name_data.push_back(account_type.get_name_leafdata());
    if (l1_user_defined.is_set || is_set(l1_user_defined.yfilter)) leaf_name_data.push_back(l1_user_defined.get_name_leafdata());
    if (spi_name.is_set || is_set(spi_name.yfilter)) leaf_name_data.push_back(spi_name.get_name_leafdata());
    if (policy_merge.is_set || is_set(policy_merge.yfilter)) leaf_name_data.push_back(policy_merge.get_name_leafdata());
    if (subscriber_parent_policy.is_set || is_set(subscriber_parent_policy.yfilter)) leaf_name_data.push_back(subscriber_parent_policy.get_name_leafdata());
    if (resource_id.is_set || is_set(resource_id.yfilter)) leaf_name_data.push_back(resource_id.get_name_leafdata());
    if (service_fragment_parent_policy.is_set || is_set(service_fragment_parent_policy.yfilter)) leaf_name_data.push_back(service_fragment_parent_policy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "subscriber-group-string")
    {
        subscriber_group_string = value;
        subscriber_group_string.value_namespace = name_space;
        subscriber_group_string.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "account-type")
    {
        account_type = value;
        account_type.value_namespace = name_space;
        account_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l1-user-defined")
    {
        l1_user_defined = value;
        l1_user_defined.value_namespace = name_space;
        l1_user_defined.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spi-name")
    {
        spi_name = value;
        spi_name.value_namespace = name_space;
        spi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-merge")
    {
        policy_merge = value;
        policy_merge.value_namespace = name_space;
        policy_merge.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subscriber-parent-policy")
    {
        subscriber_parent_policy = value;
        subscriber_parent_policy.value_namespace = name_space;
        subscriber_parent_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resource-id")
    {
        resource_id = value;
        resource_id.value_namespace = name_space;
        resource_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service-fragment-parent-policy")
    {
        service_fragment_parent_policy = value;
        service_fragment_parent_policy.value_namespace = name_space;
        service_fragment_parent_policy.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "subscriber-group-string")
    {
        subscriber_group_string.yfilter = yfilter;
    }
    if(value_path == "account-type")
    {
        account_type.yfilter = yfilter;
    }
    if(value_path == "l1-user-defined")
    {
        l1_user_defined.yfilter = yfilter;
    }
    if(value_path == "spi-name")
    {
        spi_name.yfilter = yfilter;
    }
    if(value_path == "policy-merge")
    {
        policy_merge.yfilter = yfilter;
    }
    if(value_path == "subscriber-parent-policy")
    {
        subscriber_parent_policy.yfilter = yfilter;
    }
    if(value_path == "resource-id")
    {
        resource_id.yfilter = yfilter;
    }
    if(value_path == "service-fragment-parent-policy")
    {
        service_fragment_parent_policy.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subscriber-group-string" || name == "account-type" || name == "l1-user-defined" || name == "spi-name" || name == "policy-merge" || name == "subscriber-parent-policy" || name == "resource-id" || name == "service-fragment-parent-policy")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::SubscriberParent::SubscriberParent()
    :
    account_type{YType::enumeration, "account-type"},
    l1_user_defined{YType::int32, "l1-user-defined"},
    spi_name{YType::str, "spi-name"},
    policy_merge{YType::enumeration, "policy-merge"},
    subscriber_parent_policy{YType::boolean, "subscriber-parent-policy"},
    resource_id{YType::uint32, "resource-id"},
    service_fragment_parent_policy{YType::boolean, "service-fragment-parent-policy"}
{

    yang_name = "subscriber-parent"; yang_parent_name = "service-policy-qos"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::SubscriberParent::~SubscriberParent()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::SubscriberParent::has_data() const
{
    return account_type.is_set
	|| l1_user_defined.is_set
	|| spi_name.is_set
	|| policy_merge.is_set
	|| subscriber_parent_policy.is_set
	|| resource_id.is_set
	|| service_fragment_parent_policy.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::SubscriberParent::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(account_type.yfilter)
	|| ydk::is_set(l1_user_defined.yfilter)
	|| ydk::is_set(spi_name.yfilter)
	|| ydk::is_set(policy_merge.yfilter)
	|| ydk::is_set(subscriber_parent_policy.yfilter)
	|| ydk::is_set(resource_id.yfilter)
	|| ydk::is_set(service_fragment_parent_policy.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::SubscriberParent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subscriber-parent";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::SubscriberParent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (account_type.is_set || is_set(account_type.yfilter)) leaf_name_data.push_back(account_type.get_name_leafdata());
    if (l1_user_defined.is_set || is_set(l1_user_defined.yfilter)) leaf_name_data.push_back(l1_user_defined.get_name_leafdata());
    if (spi_name.is_set || is_set(spi_name.yfilter)) leaf_name_data.push_back(spi_name.get_name_leafdata());
    if (policy_merge.is_set || is_set(policy_merge.yfilter)) leaf_name_data.push_back(policy_merge.get_name_leafdata());
    if (subscriber_parent_policy.is_set || is_set(subscriber_parent_policy.yfilter)) leaf_name_data.push_back(subscriber_parent_policy.get_name_leafdata());
    if (resource_id.is_set || is_set(resource_id.yfilter)) leaf_name_data.push_back(resource_id.get_name_leafdata());
    if (service_fragment_parent_policy.is_set || is_set(service_fragment_parent_policy.yfilter)) leaf_name_data.push_back(service_fragment_parent_policy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::SubscriberParent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::SubscriberParent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::SubscriberParent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "account-type")
    {
        account_type = value;
        account_type.value_namespace = name_space;
        account_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l1-user-defined")
    {
        l1_user_defined = value;
        l1_user_defined.value_namespace = name_space;
        l1_user_defined.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spi-name")
    {
        spi_name = value;
        spi_name.value_namespace = name_space;
        spi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-merge")
    {
        policy_merge = value;
        policy_merge.value_namespace = name_space;
        policy_merge.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subscriber-parent-policy")
    {
        subscriber_parent_policy = value;
        subscriber_parent_policy.value_namespace = name_space;
        subscriber_parent_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resource-id")
    {
        resource_id = value;
        resource_id.value_namespace = name_space;
        resource_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service-fragment-parent-policy")
    {
        service_fragment_parent_policy = value;
        service_fragment_parent_policy.value_namespace = name_space;
        service_fragment_parent_policy.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::SubscriberParent::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "account-type")
    {
        account_type.yfilter = yfilter;
    }
    if(value_path == "l1-user-defined")
    {
        l1_user_defined.yfilter = yfilter;
    }
    if(value_path == "spi-name")
    {
        spi_name.yfilter = yfilter;
    }
    if(value_path == "policy-merge")
    {
        policy_merge.yfilter = yfilter;
    }
    if(value_path == "subscriber-parent-policy")
    {
        subscriber_parent_policy.yfilter = yfilter;
    }
    if(value_path == "resource-id")
    {
        resource_id.yfilter = yfilter;
    }
    if(value_path == "service-fragment-parent-policy")
    {
        service_fragment_parent_policy.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::SubscriberParent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "account-type" || name == "l1-user-defined" || name == "spi-name" || name == "policy-merge" || name == "subscriber-parent-policy" || name == "resource-id" || name == "service-fragment-parent-policy")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Qos::Input::Input()
{

    yang_name = "input"; yang_parent_name = "qos"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Qos::Input::~Input()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Qos::Input::has_data() const
{
    for (std::size_t index=0; index<service_policy.size(); index++)
    {
        if(service_policy[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<service_policy_qos.size(); index++)
    {
        if(service_policy_qos[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::Qos::Input::has_operation() const
{
    for (std::size_t index=0; index<service_policy.size(); index++)
    {
        if(service_policy[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<service_policy_qos.size(); index++)
    {
        if(service_policy_qos[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Qos::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Qos::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Qos::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-policy")
    {
        for(auto const & c : service_policy)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicy>();
        c->parent = this;
        service_policy.push_back(c);
        return c;
    }

    if(child_yang_name == "service-policy-qos")
    {
        for(auto const & c : service_policy_qos)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos>();
        c->parent = this;
        service_policy_qos.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Qos::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : service_policy)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : service_policy_qos)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Qos::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::Qos::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Qos::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-policy" || name == "service-policy-qos")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicy::ServicePolicy()
    :
    service_policy_name{YType::str, "service-policy-name"},
    account_type{YType::enumeration, "account-type"},
    l1_user_defined{YType::int32, "l1-user-defined"},
    spi_name{YType::str, "spi-name"},
    subscriber_parent_policy{YType::boolean, "subscriber-parent-policy"},
    resource_id{YType::uint32, "resource-id"},
    service_fragment_parent_policy{YType::boolean, "service-fragment-parent-policy"}
{

    yang_name = "service-policy"; yang_parent_name = "input"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicy::~ServicePolicy()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicy::has_data() const
{
    return service_policy_name.is_set
	|| account_type.is_set
	|| l1_user_defined.is_set
	|| spi_name.is_set
	|| subscriber_parent_policy.is_set
	|| resource_id.is_set
	|| service_fragment_parent_policy.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(service_policy_name.yfilter)
	|| ydk::is_set(account_type.yfilter)
	|| ydk::is_set(l1_user_defined.yfilter)
	|| ydk::is_set(spi_name.yfilter)
	|| ydk::is_set(subscriber_parent_policy.yfilter)
	|| ydk::is_set(resource_id.yfilter)
	|| ydk::is_set(service_fragment_parent_policy.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-policy" <<"[service-policy-name='" <<service_policy_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service_policy_name.is_set || is_set(service_policy_name.yfilter)) leaf_name_data.push_back(service_policy_name.get_name_leafdata());
    if (account_type.is_set || is_set(account_type.yfilter)) leaf_name_data.push_back(account_type.get_name_leafdata());
    if (l1_user_defined.is_set || is_set(l1_user_defined.yfilter)) leaf_name_data.push_back(l1_user_defined.get_name_leafdata());
    if (spi_name.is_set || is_set(spi_name.yfilter)) leaf_name_data.push_back(spi_name.get_name_leafdata());
    if (subscriber_parent_policy.is_set || is_set(subscriber_parent_policy.yfilter)) leaf_name_data.push_back(subscriber_parent_policy.get_name_leafdata());
    if (resource_id.is_set || is_set(resource_id.yfilter)) leaf_name_data.push_back(resource_id.get_name_leafdata());
    if (service_fragment_parent_policy.is_set || is_set(service_fragment_parent_policy.yfilter)) leaf_name_data.push_back(service_fragment_parent_policy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "service-policy-name")
    {
        service_policy_name = value;
        service_policy_name.value_namespace = name_space;
        service_policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "account-type")
    {
        account_type = value;
        account_type.value_namespace = name_space;
        account_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l1-user-defined")
    {
        l1_user_defined = value;
        l1_user_defined.value_namespace = name_space;
        l1_user_defined.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spi-name")
    {
        spi_name = value;
        spi_name.value_namespace = name_space;
        spi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subscriber-parent-policy")
    {
        subscriber_parent_policy = value;
        subscriber_parent_policy.value_namespace = name_space;
        subscriber_parent_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resource-id")
    {
        resource_id = value;
        resource_id.value_namespace = name_space;
        resource_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service-fragment-parent-policy")
    {
        service_fragment_parent_policy = value;
        service_fragment_parent_policy.value_namespace = name_space;
        service_fragment_parent_policy.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "service-policy-name")
    {
        service_policy_name.yfilter = yfilter;
    }
    if(value_path == "account-type")
    {
        account_type.yfilter = yfilter;
    }
    if(value_path == "l1-user-defined")
    {
        l1_user_defined.yfilter = yfilter;
    }
    if(value_path == "spi-name")
    {
        spi_name.yfilter = yfilter;
    }
    if(value_path == "subscriber-parent-policy")
    {
        subscriber_parent_policy.yfilter = yfilter;
    }
    if(value_path == "resource-id")
    {
        resource_id.yfilter = yfilter;
    }
    if(value_path == "service-fragment-parent-policy")
    {
        service_fragment_parent_policy.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-policy-name" || name == "account-type" || name == "l1-user-defined" || name == "spi-name" || name == "subscriber-parent-policy" || name == "resource-id" || name == "service-fragment-parent-policy")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::ServicePolicyQos()
    :
    service_policy_name{YType::str, "service-policy-name"}
    	,
    subscriber_group_names(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::SubscriberGroupNames>())
	,subscriber_parent(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::SubscriberParent>())
{
    subscriber_group_names->parent = this;
    subscriber_parent->parent = this;

    yang_name = "service-policy-qos"; yang_parent_name = "input"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::~ServicePolicyQos()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::has_data() const
{
    return service_policy_name.is_set
	|| (subscriber_group_names !=  nullptr && subscriber_group_names->has_data())
	|| (subscriber_parent !=  nullptr && subscriber_parent->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(service_policy_name.yfilter)
	|| (subscriber_group_names !=  nullptr && subscriber_group_names->has_operation())
	|| (subscriber_parent !=  nullptr && subscriber_parent->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-policy-qos" <<"[service-policy-name='" <<service_policy_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service_policy_name.is_set || is_set(service_policy_name.yfilter)) leaf_name_data.push_back(service_policy_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "subscriber-group-names")
    {
        if(subscriber_group_names == nullptr)
        {
            subscriber_group_names = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::SubscriberGroupNames>();
        }
        return subscriber_group_names;
    }

    if(child_yang_name == "subscriber-parent")
    {
        if(subscriber_parent == nullptr)
        {
            subscriber_parent = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::SubscriberParent>();
        }
        return subscriber_parent;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(subscriber_group_names != nullptr)
    {
        children["subscriber-group-names"] = subscriber_group_names;
    }

    if(subscriber_parent != nullptr)
    {
        children["subscriber-parent"] = subscriber_parent;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "service-policy-name")
    {
        service_policy_name = value;
        service_policy_name.value_namespace = name_space;
        service_policy_name.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "service-policy-name")
    {
        service_policy_name.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subscriber-group-names" || name == "subscriber-parent" || name == "service-policy-name")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupNames()
{

    yang_name = "subscriber-group-names"; yang_parent_name = "service-policy-qos"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::SubscriberGroupNames::~SubscriberGroupNames()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::SubscriberGroupNames::has_data() const
{
    for (std::size_t index=0; index<subscriber_group_name.size(); index++)
    {
        if(subscriber_group_name[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::SubscriberGroupNames::has_operation() const
{
    for (std::size_t index=0; index<subscriber_group_name.size(); index++)
    {
        if(subscriber_group_name[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::SubscriberGroupNames::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subscriber-group-names";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::SubscriberGroupNames::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::SubscriberGroupNames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "subscriber-group-name")
    {
        for(auto const & c : subscriber_group_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName>();
        c->parent = this;
        subscriber_group_name.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::SubscriberGroupNames::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : subscriber_group_name)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::SubscriberGroupNames::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::SubscriberGroupNames::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::SubscriberGroupNames::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subscriber-group-name")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::SubscriberGroupName()
    :
    subscriber_group_string{YType::str, "subscriber-group-string"},
    account_type{YType::enumeration, "account-type"},
    l1_user_defined{YType::int32, "l1-user-defined"},
    spi_name{YType::str, "spi-name"},
    policy_merge{YType::enumeration, "policy-merge"},
    subscriber_parent_policy{YType::boolean, "subscriber-parent-policy"},
    resource_id{YType::uint32, "resource-id"},
    service_fragment_parent_policy{YType::boolean, "service-fragment-parent-policy"}
{

    yang_name = "subscriber-group-name"; yang_parent_name = "subscriber-group-names"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::~SubscriberGroupName()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::has_data() const
{
    return subscriber_group_string.is_set
	|| account_type.is_set
	|| l1_user_defined.is_set
	|| spi_name.is_set
	|| policy_merge.is_set
	|| subscriber_parent_policy.is_set
	|| resource_id.is_set
	|| service_fragment_parent_policy.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(subscriber_group_string.yfilter)
	|| ydk::is_set(account_type.yfilter)
	|| ydk::is_set(l1_user_defined.yfilter)
	|| ydk::is_set(spi_name.yfilter)
	|| ydk::is_set(policy_merge.yfilter)
	|| ydk::is_set(subscriber_parent_policy.yfilter)
	|| ydk::is_set(resource_id.yfilter)
	|| ydk::is_set(service_fragment_parent_policy.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subscriber-group-name" <<"[subscriber-group-string='" <<subscriber_group_string <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subscriber_group_string.is_set || is_set(subscriber_group_string.yfilter)) leaf_name_data.push_back(subscriber_group_string.get_name_leafdata());
    if (account_type.is_set || is_set(account_type.yfilter)) leaf_name_data.push_back(account_type.get_name_leafdata());
    if (l1_user_defined.is_set || is_set(l1_user_defined.yfilter)) leaf_name_data.push_back(l1_user_defined.get_name_leafdata());
    if (spi_name.is_set || is_set(spi_name.yfilter)) leaf_name_data.push_back(spi_name.get_name_leafdata());
    if (policy_merge.is_set || is_set(policy_merge.yfilter)) leaf_name_data.push_back(policy_merge.get_name_leafdata());
    if (subscriber_parent_policy.is_set || is_set(subscriber_parent_policy.yfilter)) leaf_name_data.push_back(subscriber_parent_policy.get_name_leafdata());
    if (resource_id.is_set || is_set(resource_id.yfilter)) leaf_name_data.push_back(resource_id.get_name_leafdata());
    if (service_fragment_parent_policy.is_set || is_set(service_fragment_parent_policy.yfilter)) leaf_name_data.push_back(service_fragment_parent_policy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "subscriber-group-string")
    {
        subscriber_group_string = value;
        subscriber_group_string.value_namespace = name_space;
        subscriber_group_string.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "account-type")
    {
        account_type = value;
        account_type.value_namespace = name_space;
        account_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l1-user-defined")
    {
        l1_user_defined = value;
        l1_user_defined.value_namespace = name_space;
        l1_user_defined.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spi-name")
    {
        spi_name = value;
        spi_name.value_namespace = name_space;
        spi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-merge")
    {
        policy_merge = value;
        policy_merge.value_namespace = name_space;
        policy_merge.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subscriber-parent-policy")
    {
        subscriber_parent_policy = value;
        subscriber_parent_policy.value_namespace = name_space;
        subscriber_parent_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resource-id")
    {
        resource_id = value;
        resource_id.value_namespace = name_space;
        resource_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service-fragment-parent-policy")
    {
        service_fragment_parent_policy = value;
        service_fragment_parent_policy.value_namespace = name_space;
        service_fragment_parent_policy.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "subscriber-group-string")
    {
        subscriber_group_string.yfilter = yfilter;
    }
    if(value_path == "account-type")
    {
        account_type.yfilter = yfilter;
    }
    if(value_path == "l1-user-defined")
    {
        l1_user_defined.yfilter = yfilter;
    }
    if(value_path == "spi-name")
    {
        spi_name.yfilter = yfilter;
    }
    if(value_path == "policy-merge")
    {
        policy_merge.yfilter = yfilter;
    }
    if(value_path == "subscriber-parent-policy")
    {
        subscriber_parent_policy.yfilter = yfilter;
    }
    if(value_path == "resource-id")
    {
        resource_id.yfilter = yfilter;
    }
    if(value_path == "service-fragment-parent-policy")
    {
        service_fragment_parent_policy.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subscriber-group-string" || name == "account-type" || name == "l1-user-defined" || name == "spi-name" || name == "policy-merge" || name == "subscriber-parent-policy" || name == "resource-id" || name == "service-fragment-parent-policy")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::SubscriberParent::SubscriberParent()
    :
    account_type{YType::enumeration, "account-type"},
    l1_user_defined{YType::int32, "l1-user-defined"},
    spi_name{YType::str, "spi-name"},
    policy_merge{YType::enumeration, "policy-merge"},
    subscriber_parent_policy{YType::boolean, "subscriber-parent-policy"},
    resource_id{YType::uint32, "resource-id"},
    service_fragment_parent_policy{YType::boolean, "service-fragment-parent-policy"}
{

    yang_name = "subscriber-parent"; yang_parent_name = "service-policy-qos"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::SubscriberParent::~SubscriberParent()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::SubscriberParent::has_data() const
{
    return account_type.is_set
	|| l1_user_defined.is_set
	|| spi_name.is_set
	|| policy_merge.is_set
	|| subscriber_parent_policy.is_set
	|| resource_id.is_set
	|| service_fragment_parent_policy.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::SubscriberParent::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(account_type.yfilter)
	|| ydk::is_set(l1_user_defined.yfilter)
	|| ydk::is_set(spi_name.yfilter)
	|| ydk::is_set(policy_merge.yfilter)
	|| ydk::is_set(subscriber_parent_policy.yfilter)
	|| ydk::is_set(resource_id.yfilter)
	|| ydk::is_set(service_fragment_parent_policy.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::SubscriberParent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subscriber-parent";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::SubscriberParent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (account_type.is_set || is_set(account_type.yfilter)) leaf_name_data.push_back(account_type.get_name_leafdata());
    if (l1_user_defined.is_set || is_set(l1_user_defined.yfilter)) leaf_name_data.push_back(l1_user_defined.get_name_leafdata());
    if (spi_name.is_set || is_set(spi_name.yfilter)) leaf_name_data.push_back(spi_name.get_name_leafdata());
    if (policy_merge.is_set || is_set(policy_merge.yfilter)) leaf_name_data.push_back(policy_merge.get_name_leafdata());
    if (subscriber_parent_policy.is_set || is_set(subscriber_parent_policy.yfilter)) leaf_name_data.push_back(subscriber_parent_policy.get_name_leafdata());
    if (resource_id.is_set || is_set(resource_id.yfilter)) leaf_name_data.push_back(resource_id.get_name_leafdata());
    if (service_fragment_parent_policy.is_set || is_set(service_fragment_parent_policy.yfilter)) leaf_name_data.push_back(service_fragment_parent_policy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::SubscriberParent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::SubscriberParent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::SubscriberParent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "account-type")
    {
        account_type = value;
        account_type.value_namespace = name_space;
        account_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l1-user-defined")
    {
        l1_user_defined = value;
        l1_user_defined.value_namespace = name_space;
        l1_user_defined.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spi-name")
    {
        spi_name = value;
        spi_name.value_namespace = name_space;
        spi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-merge")
    {
        policy_merge = value;
        policy_merge.value_namespace = name_space;
        policy_merge.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subscriber-parent-policy")
    {
        subscriber_parent_policy = value;
        subscriber_parent_policy.value_namespace = name_space;
        subscriber_parent_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resource-id")
    {
        resource_id = value;
        resource_id.value_namespace = name_space;
        resource_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service-fragment-parent-policy")
    {
        service_fragment_parent_policy = value;
        service_fragment_parent_policy.value_namespace = name_space;
        service_fragment_parent_policy.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::SubscriberParent::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "account-type")
    {
        account_type.yfilter = yfilter;
    }
    if(value_path == "l1-user-defined")
    {
        l1_user_defined.yfilter = yfilter;
    }
    if(value_path == "spi-name")
    {
        spi_name.yfilter = yfilter;
    }
    if(value_path == "policy-merge")
    {
        policy_merge.yfilter = yfilter;
    }
    if(value_path == "subscriber-parent-policy")
    {
        subscriber_parent_policy.yfilter = yfilter;
    }
    if(value_path == "resource-id")
    {
        resource_id.yfilter = yfilter;
    }
    if(value_path == "service-fragment-parent-policy")
    {
        service_fragment_parent_policy.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::SubscriberParent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "account-type" || name == "l1-user-defined" || name == "spi-name" || name == "policy-merge" || name == "subscriber-parent-policy" || name == "resource-id" || name == "service-fragment-parent-policy")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Subscriber::Subscriber()
    :
    ip_subscriber(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber>())
{
    ip_subscriber->parent = this;

    yang_name = "subscriber"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Subscriber::~Subscriber()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Subscriber::has_data() const
{
    return (ip_subscriber !=  nullptr && ip_subscriber->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Subscriber::has_operation() const
{
    return is_set(yfilter)
	|| (ip_subscriber !=  nullptr && ip_subscriber->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Subscriber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-subscriber-ipsub-cfg:subscriber";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Subscriber::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Subscriber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip-subscriber")
    {
        if(ip_subscriber == nullptr)
        {
            ip_subscriber = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber>();
        }
        return ip_subscriber;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Subscriber::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ip_subscriber != nullptr)
    {
        children["ip-subscriber"] = ip_subscriber;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Subscriber::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::Subscriber::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Subscriber::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-subscriber")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::IpSubscriber()
    :
    subscriber_templates{YType::uint32, "subscriber-templates"},
    interface{YType::empty, "interface"}
    	,
    ipv4(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4>())
	,session_limit(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::SessionLimit>())
	,ipv6(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6>())
{
    ipv4->parent = this;
    session_limit->parent = this;
    ipv6->parent = this;

    yang_name = "ip-subscriber"; yang_parent_name = "subscriber"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::~IpSubscriber()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::has_data() const
{
    return subscriber_templates.is_set
	|| interface.is_set
	|| (ipv4 !=  nullptr && ipv4->has_data())
	|| (session_limit !=  nullptr && session_limit->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(subscriber_templates.yfilter)
	|| ydk::is_set(interface.yfilter)
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (session_limit !=  nullptr && session_limit->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subscriber_templates.is_set || is_set(subscriber_templates.yfilter)) leaf_name_data.push_back(subscriber_templates.get_name_leafdata());
    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4>();
        }
        return ipv4;
    }

    if(child_yang_name == "session-limit")
    {
        if(session_limit == nullptr)
        {
            session_limit = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::SessionLimit>();
        }
        return session_limit;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6>();
        }
        return ipv6;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4 != nullptr)
    {
        children["ipv4"] = ipv4;
    }

    if(session_limit != nullptr)
    {
        children["session-limit"] = session_limit;
    }

    if(ipv6 != nullptr)
    {
        children["ipv6"] = ipv6;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "subscriber-templates")
    {
        subscriber_templates = value;
        subscriber_templates.value_namespace = name_space;
        subscriber_templates.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "subscriber-templates")
    {
        subscriber_templates.yfilter = yfilter;
    }
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "session-limit" || name == "ipv6" || name == "subscriber-templates" || name == "interface")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::Ipv4()
    :
    l2_connected(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::L2Connected>())
	,routed(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::Routed>())
{
    l2_connected->parent = this;
    routed->parent = this;

    yang_name = "ipv4"; yang_parent_name = "ip-subscriber"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::~Ipv4()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::has_data() const
{
    return (l2_connected !=  nullptr && l2_connected->has_data())
	|| (routed !=  nullptr && routed->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| (l2_connected !=  nullptr && l2_connected->has_operation())
	|| (routed !=  nullptr && routed->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2-connected")
    {
        if(l2_connected == nullptr)
        {
            l2_connected = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::L2Connected>();
        }
        return l2_connected;
    }

    if(child_yang_name == "routed")
    {
        if(routed == nullptr)
        {
            routed = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::Routed>();
        }
        return routed;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(l2_connected != nullptr)
    {
        children["l2-connected"] = l2_connected;
    }

    if(routed != nullptr)
    {
        children["routed"] = routed;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2-connected" || name == "routed")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::L2Connected::L2Connected()
    :
    initiator(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::L2Connected::Initiator>())
{
    initiator->parent = this;

    yang_name = "l2-connected"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::L2Connected::~L2Connected()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::L2Connected::has_data() const
{
    return (initiator !=  nullptr && initiator->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::L2Connected::has_operation() const
{
    return is_set(yfilter)
	|| (initiator !=  nullptr && initiator->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::L2Connected::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2-connected";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::L2Connected::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::L2Connected::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "initiator")
    {
        if(initiator == nullptr)
        {
            initiator = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::L2Connected::Initiator>();
        }
        return initiator;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::L2Connected::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(initiator != nullptr)
    {
        children["initiator"] = initiator;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::L2Connected::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::L2Connected::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::L2Connected::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "initiator")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::L2Connected::Initiator::Initiator()
    :
    dhcp{YType::empty, "dhcp"}
    	,
    unclassified_source_fsol(nullptr) // presence node
{

    yang_name = "initiator"; yang_parent_name = "l2-connected"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::L2Connected::Initiator::~Initiator()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::L2Connected::Initiator::has_data() const
{
    return dhcp.is_set
	|| (unclassified_source_fsol !=  nullptr && unclassified_source_fsol->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::L2Connected::Initiator::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dhcp.yfilter)
	|| (unclassified_source_fsol !=  nullptr && unclassified_source_fsol->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::L2Connected::Initiator::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "initiator";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::L2Connected::Initiator::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dhcp.is_set || is_set(dhcp.yfilter)) leaf_name_data.push_back(dhcp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::L2Connected::Initiator::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "unclassified-source-fsol")
    {
        if(unclassified_source_fsol == nullptr)
        {
            unclassified_source_fsol = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::L2Connected::Initiator::UnclassifiedSourceFsol>();
        }
        return unclassified_source_fsol;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::L2Connected::Initiator::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(unclassified_source_fsol != nullptr)
    {
        children["unclassified-source-fsol"] = unclassified_source_fsol;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::L2Connected::Initiator::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dhcp")
    {
        dhcp = value;
        dhcp.value_namespace = name_space;
        dhcp.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::L2Connected::Initiator::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dhcp")
    {
        dhcp.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::L2Connected::Initiator::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unclassified-source-fsol" || name == "dhcp")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::L2Connected::Initiator::UnclassifiedSourceFsol::UnclassifiedSourceFsol()
    :
    enable{YType::empty, "enable"},
    address_unique{YType::boolean, "address-unique"}
{

    yang_name = "unclassified-source-fsol"; yang_parent_name = "initiator"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::L2Connected::Initiator::UnclassifiedSourceFsol::~UnclassifiedSourceFsol()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::L2Connected::Initiator::UnclassifiedSourceFsol::has_data() const
{
    return enable.is_set
	|| address_unique.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::L2Connected::Initiator::UnclassifiedSourceFsol::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(address_unique.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::L2Connected::Initiator::UnclassifiedSourceFsol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unclassified-source-fsol";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::L2Connected::Initiator::UnclassifiedSourceFsol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (address_unique.is_set || is_set(address_unique.yfilter)) leaf_name_data.push_back(address_unique.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::L2Connected::Initiator::UnclassifiedSourceFsol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::L2Connected::Initiator::UnclassifiedSourceFsol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::L2Connected::Initiator::UnclassifiedSourceFsol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address-unique")
    {
        address_unique = value;
        address_unique.value_namespace = name_space;
        address_unique.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::L2Connected::Initiator::UnclassifiedSourceFsol::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "address-unique")
    {
        address_unique.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::L2Connected::Initiator::UnclassifiedSourceFsol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "address-unique")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::Routed::Routed()
    :
    initiator(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::Routed::Initiator>())
{
    initiator->parent = this;

    yang_name = "routed"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::Routed::~Routed()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::Routed::has_data() const
{
    return (initiator !=  nullptr && initiator->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::Routed::has_operation() const
{
    return is_set(yfilter)
	|| (initiator !=  nullptr && initiator->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::Routed::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "routed";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::Routed::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::Routed::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "initiator")
    {
        if(initiator == nullptr)
        {
            initiator = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::Routed::Initiator>();
        }
        return initiator;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::Routed::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(initiator != nullptr)
    {
        children["initiator"] = initiator;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::Routed::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::Routed::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::Routed::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "initiator")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::Routed::Initiator::Initiator()
    :
    unclassified_ip{YType::empty, "unclassified-ip"},
    dhcp{YType::empty, "dhcp"},
    dhcp_snoop{YType::empty, "dhcp-snoop"}
{

    yang_name = "initiator"; yang_parent_name = "routed"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::Routed::Initiator::~Initiator()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::Routed::Initiator::has_data() const
{
    return unclassified_ip.is_set
	|| dhcp.is_set
	|| dhcp_snoop.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::Routed::Initiator::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unclassified_ip.yfilter)
	|| ydk::is_set(dhcp.yfilter)
	|| ydk::is_set(dhcp_snoop.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::Routed::Initiator::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "initiator";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::Routed::Initiator::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unclassified_ip.is_set || is_set(unclassified_ip.yfilter)) leaf_name_data.push_back(unclassified_ip.get_name_leafdata());
    if (dhcp.is_set || is_set(dhcp.yfilter)) leaf_name_data.push_back(dhcp.get_name_leafdata());
    if (dhcp_snoop.is_set || is_set(dhcp_snoop.yfilter)) leaf_name_data.push_back(dhcp_snoop.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::Routed::Initiator::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::Routed::Initiator::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::Routed::Initiator::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unclassified-ip")
    {
        unclassified_ip = value;
        unclassified_ip.value_namespace = name_space;
        unclassified_ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dhcp")
    {
        dhcp = value;
        dhcp.value_namespace = name_space;
        dhcp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dhcp-snoop")
    {
        dhcp_snoop = value;
        dhcp_snoop.value_namespace = name_space;
        dhcp_snoop.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::Routed::Initiator::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unclassified-ip")
    {
        unclassified_ip.yfilter = yfilter;
    }
    if(value_path == "dhcp")
    {
        dhcp.yfilter = yfilter;
    }
    if(value_path == "dhcp-snoop")
    {
        dhcp_snoop.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::Routed::Initiator::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unclassified-ip" || name == "dhcp" || name == "dhcp-snoop")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::SessionLimit::SessionLimit()
    :
    total(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::SessionLimit::Total>())
	,unclassified_source(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::SessionLimit::UnclassifiedSource>())
{
    total->parent = this;
    unclassified_source->parent = this;

    yang_name = "session-limit"; yang_parent_name = "ip-subscriber"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::SessionLimit::~SessionLimit()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::SessionLimit::has_data() const
{
    return (total !=  nullptr && total->has_data())
	|| (unclassified_source !=  nullptr && unclassified_source->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::SessionLimit::has_operation() const
{
    return is_set(yfilter)
	|| (total !=  nullptr && total->has_operation())
	|| (unclassified_source !=  nullptr && unclassified_source->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::SessionLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::SessionLimit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::SessionLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "total")
    {
        if(total == nullptr)
        {
            total = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::SessionLimit::Total>();
        }
        return total;
    }

    if(child_yang_name == "unclassified-source")
    {
        if(unclassified_source == nullptr)
        {
            unclassified_source = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::SessionLimit::UnclassifiedSource>();
        }
        return unclassified_source;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::SessionLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(total != nullptr)
    {
        children["total"] = total;
    }

    if(unclassified_source != nullptr)
    {
        children["unclassified-source"] = unclassified_source;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::SessionLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::SessionLimit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::SessionLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "total" || name == "unclassified-source")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::SessionLimit::Total::Total()
    :
    per_vlan{YType::int32, "per-vlan"}
{

    yang_name = "total"; yang_parent_name = "session-limit"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::SessionLimit::Total::~Total()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::SessionLimit::Total::has_data() const
{
    return per_vlan.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::SessionLimit::Total::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(per_vlan.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::SessionLimit::Total::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "total";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::SessionLimit::Total::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (per_vlan.is_set || is_set(per_vlan.yfilter)) leaf_name_data.push_back(per_vlan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::SessionLimit::Total::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::SessionLimit::Total::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::SessionLimit::Total::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "per-vlan")
    {
        per_vlan = value;
        per_vlan.value_namespace = name_space;
        per_vlan.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::SessionLimit::Total::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "per-vlan")
    {
        per_vlan.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::SessionLimit::Total::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "per-vlan")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::SessionLimit::UnclassifiedSource::UnclassifiedSource()
    :
    per_vlan{YType::int32, "per-vlan"}
{

    yang_name = "unclassified-source"; yang_parent_name = "session-limit"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::SessionLimit::UnclassifiedSource::~UnclassifiedSource()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::SessionLimit::UnclassifiedSource::has_data() const
{
    return per_vlan.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::SessionLimit::UnclassifiedSource::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(per_vlan.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::SessionLimit::UnclassifiedSource::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unclassified-source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::SessionLimit::UnclassifiedSource::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (per_vlan.is_set || is_set(per_vlan.yfilter)) leaf_name_data.push_back(per_vlan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::SessionLimit::UnclassifiedSource::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::SessionLimit::UnclassifiedSource::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::SessionLimit::UnclassifiedSource::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "per-vlan")
    {
        per_vlan = value;
        per_vlan.value_namespace = name_space;
        per_vlan.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::SessionLimit::UnclassifiedSource::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "per-vlan")
    {
        per_vlan.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::SessionLimit::UnclassifiedSource::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "per-vlan")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::Ipv6()
    :
    l2_connected(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::L2Connected>())
	,routed(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::Routed>())
{
    l2_connected->parent = this;
    routed->parent = this;

    yang_name = "ipv6"; yang_parent_name = "ip-subscriber"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::~Ipv6()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::has_data() const
{
    return (l2_connected !=  nullptr && l2_connected->has_data())
	|| (routed !=  nullptr && routed->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::has_operation() const
{
    return is_set(yfilter)
	|| (l2_connected !=  nullptr && l2_connected->has_operation())
	|| (routed !=  nullptr && routed->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2-connected")
    {
        if(l2_connected == nullptr)
        {
            l2_connected = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::L2Connected>();
        }
        return l2_connected;
    }

    if(child_yang_name == "routed")
    {
        if(routed == nullptr)
        {
            routed = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::Routed>();
        }
        return routed;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(l2_connected != nullptr)
    {
        children["l2-connected"] = l2_connected;
    }

    if(routed != nullptr)
    {
        children["routed"] = routed;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2-connected" || name == "routed")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::L2Connected::L2Connected()
    :
    initiator(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::L2Connected::Initiator>())
{
    initiator->parent = this;

    yang_name = "l2-connected"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::L2Connected::~L2Connected()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::L2Connected::has_data() const
{
    return (initiator !=  nullptr && initiator->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::L2Connected::has_operation() const
{
    return is_set(yfilter)
	|| (initiator !=  nullptr && initiator->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::L2Connected::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2-connected";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::L2Connected::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::L2Connected::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "initiator")
    {
        if(initiator == nullptr)
        {
            initiator = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::L2Connected::Initiator>();
        }
        return initiator;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::L2Connected::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(initiator != nullptr)
    {
        children["initiator"] = initiator;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::L2Connected::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::L2Connected::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::L2Connected::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "initiator")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::L2Connected::Initiator::Initiator()
    :
    dhcp{YType::empty, "dhcp"}
    	,
    unclassified_source_fsol(nullptr) // presence node
{

    yang_name = "initiator"; yang_parent_name = "l2-connected"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::L2Connected::Initiator::~Initiator()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::L2Connected::Initiator::has_data() const
{
    return dhcp.is_set
	|| (unclassified_source_fsol !=  nullptr && unclassified_source_fsol->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::L2Connected::Initiator::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dhcp.yfilter)
	|| (unclassified_source_fsol !=  nullptr && unclassified_source_fsol->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::L2Connected::Initiator::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "initiator";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::L2Connected::Initiator::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dhcp.is_set || is_set(dhcp.yfilter)) leaf_name_data.push_back(dhcp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::L2Connected::Initiator::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "unclassified-source-fsol")
    {
        if(unclassified_source_fsol == nullptr)
        {
            unclassified_source_fsol = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::L2Connected::Initiator::UnclassifiedSourceFsol>();
        }
        return unclassified_source_fsol;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::L2Connected::Initiator::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(unclassified_source_fsol != nullptr)
    {
        children["unclassified-source-fsol"] = unclassified_source_fsol;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::L2Connected::Initiator::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dhcp")
    {
        dhcp = value;
        dhcp.value_namespace = name_space;
        dhcp.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::L2Connected::Initiator::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dhcp")
    {
        dhcp.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::L2Connected::Initiator::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unclassified-source-fsol" || name == "dhcp")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::L2Connected::Initiator::UnclassifiedSourceFsol::UnclassifiedSourceFsol()
    :
    enable{YType::empty, "enable"},
    address_unique{YType::boolean, "address-unique"}
{

    yang_name = "unclassified-source-fsol"; yang_parent_name = "initiator"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::L2Connected::Initiator::UnclassifiedSourceFsol::~UnclassifiedSourceFsol()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::L2Connected::Initiator::UnclassifiedSourceFsol::has_data() const
{
    return enable.is_set
	|| address_unique.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::L2Connected::Initiator::UnclassifiedSourceFsol::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(address_unique.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::L2Connected::Initiator::UnclassifiedSourceFsol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unclassified-source-fsol";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::L2Connected::Initiator::UnclassifiedSourceFsol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (address_unique.is_set || is_set(address_unique.yfilter)) leaf_name_data.push_back(address_unique.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::L2Connected::Initiator::UnclassifiedSourceFsol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::L2Connected::Initiator::UnclassifiedSourceFsol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::L2Connected::Initiator::UnclassifiedSourceFsol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address-unique")
    {
        address_unique = value;
        address_unique.value_namespace = name_space;
        address_unique.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::L2Connected::Initiator::UnclassifiedSourceFsol::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "address-unique")
    {
        address_unique.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::L2Connected::Initiator::UnclassifiedSourceFsol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "address-unique")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::Routed::Routed()
    :
    initiator(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::Routed::Initiator>())
{
    initiator->parent = this;

    yang_name = "routed"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::Routed::~Routed()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::Routed::has_data() const
{
    return (initiator !=  nullptr && initiator->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::Routed::has_operation() const
{
    return is_set(yfilter)
	|| (initiator !=  nullptr && initiator->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::Routed::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "routed";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::Routed::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::Routed::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "initiator")
    {
        if(initiator == nullptr)
        {
            initiator = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::Routed::Initiator>();
        }
        return initiator;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::Routed::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(initiator != nullptr)
    {
        children["initiator"] = initiator;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::Routed::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::Routed::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::Routed::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "initiator")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::Routed::Initiator::Initiator()
    :
    unclassified_ip{YType::uint32, "unclassified-ip"},
    dhcp{YType::uint32, "dhcp"},
    dhcp_snoop{YType::uint32, "dhcp-snoop"}
{

    yang_name = "initiator"; yang_parent_name = "routed"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::Routed::Initiator::~Initiator()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::Routed::Initiator::has_data() const
{
    return unclassified_ip.is_set
	|| dhcp.is_set
	|| dhcp_snoop.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::Routed::Initiator::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unclassified_ip.yfilter)
	|| ydk::is_set(dhcp.yfilter)
	|| ydk::is_set(dhcp_snoop.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::Routed::Initiator::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "initiator";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::Routed::Initiator::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unclassified_ip.is_set || is_set(unclassified_ip.yfilter)) leaf_name_data.push_back(unclassified_ip.get_name_leafdata());
    if (dhcp.is_set || is_set(dhcp.yfilter)) leaf_name_data.push_back(dhcp.get_name_leafdata());
    if (dhcp_snoop.is_set || is_set(dhcp_snoop.yfilter)) leaf_name_data.push_back(dhcp_snoop.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::Routed::Initiator::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::Routed::Initiator::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::Routed::Initiator::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unclassified-ip")
    {
        unclassified_ip = value;
        unclassified_ip.value_namespace = name_space;
        unclassified_ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dhcp")
    {
        dhcp = value;
        dhcp.value_namespace = name_space;
        dhcp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dhcp-snoop")
    {
        dhcp_snoop = value;
        dhcp_snoop.value_namespace = name_space;
        dhcp_snoop.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::Routed::Initiator::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unclassified-ip")
    {
        unclassified_ip.yfilter = yfilter;
    }
    if(value_path == "dhcp")
    {
        dhcp.yfilter = yfilter;
    }
    if(value_path == "dhcp-snoop")
    {
        dhcp_snoop.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::Routed::Initiator::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unclassified-ip" || name == "dhcp" || name == "dhcp-snoop")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Pppoe::Pppoe()
    :
    enable_bba_group(nullptr) // presence node
{

    yang_name = "pppoe"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Pppoe::~Pppoe()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Pppoe::has_data() const
{
    return (enable_bba_group !=  nullptr && enable_bba_group->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Pppoe::has_operation() const
{
    return is_set(yfilter)
	|| (enable_bba_group !=  nullptr && enable_bba_group->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Pppoe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-subscriber-pppoe-ma-cmd-cfg:pppoe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Pppoe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Pppoe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "enable-bba-group")
    {
        if(enable_bba_group == nullptr)
        {
            enable_bba_group = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Pppoe::EnableBbaGroup>();
        }
        return enable_bba_group;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Pppoe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(enable_bba_group != nullptr)
    {
        children["enable-bba-group"] = enable_bba_group;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Pppoe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::Pppoe::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Pppoe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable-bba-group")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Pppoe::EnableBbaGroup::EnableBbaGroup()
    :
    enable{YType::boolean, "enable"},
    bba_group_name{YType::str, "bba-group-name"}
{

    yang_name = "enable-bba-group"; yang_parent_name = "pppoe"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Pppoe::EnableBbaGroup::~EnableBbaGroup()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Pppoe::EnableBbaGroup::has_data() const
{
    return enable.is_set
	|| bba_group_name.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Pppoe::EnableBbaGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(bba_group_name.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Pppoe::EnableBbaGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "enable-bba-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Pppoe::EnableBbaGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (bba_group_name.is_set || is_set(bba_group_name.yfilter)) leaf_name_data.push_back(bba_group_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Pppoe::EnableBbaGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Pppoe::EnableBbaGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Pppoe::EnableBbaGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bba-group-name")
    {
        bba_group_name = value;
        bba_group_name.value_namespace = name_space;
        bba_group_name.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Pppoe::EnableBbaGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "bba-group-name")
    {
        bba_group_name.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Pppoe::EnableBbaGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "bba-group-name")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::NetFlow()
    :
    data_link_frame_section(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection>())
	,mpls(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls>())
	,ipv6(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6>())
	,ipv4(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4>())
{
    data_link_frame_section->parent = this;
    mpls->parent = this;
    ipv6->parent = this;
    ipv4->parent = this;

    yang_name = "net-flow"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::~NetFlow()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::has_data() const
{
    return (data_link_frame_section !=  nullptr && data_link_frame_section->has_data())
	|| (mpls !=  nullptr && mpls->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data())
	|| (ipv4 !=  nullptr && ipv4->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::has_operation() const
{
    return is_set(yfilter)
	|| (data_link_frame_section !=  nullptr && data_link_frame_section->has_operation())
	|| (mpls !=  nullptr && mpls->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation())
	|| (ipv4 !=  nullptr && ipv4->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::NetFlow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-traffmon-netflow-cfg:net-flow";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::NetFlow::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::NetFlow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data-link-frame-section")
    {
        if(data_link_frame_section == nullptr)
        {
            data_link_frame_section = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection>();
        }
        return data_link_frame_section;
    }

    if(child_yang_name == "mpls")
    {
        if(mpls == nullptr)
        {
            mpls = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls>();
        }
        return mpls;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6>();
        }
        return ipv6;
    }

    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4>();
        }
        return ipv4;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::NetFlow::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(data_link_frame_section != nullptr)
    {
        children["data-link-frame-section"] = data_link_frame_section;
    }

    if(mpls != nullptr)
    {
        children["mpls"] = mpls;
    }

    if(ipv6 != nullptr)
    {
        children["ipv6"] = ipv6;
    }

    if(ipv4 != nullptr)
    {
        children["ipv4"] = ipv4;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::NetFlow::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::NetFlow::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data-link-frame-section" || name == "mpls" || name == "ipv6" || name == "ipv4")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::DataLinkFrameSection()
    :
    flow_monitor_map(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap>())
{
    flow_monitor_map->parent = this;

    yang_name = "data-link-frame-section"; yang_parent_name = "net-flow"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::~DataLinkFrameSection()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::has_data() const
{
    return (flow_monitor_map !=  nullptr && flow_monitor_map->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::has_operation() const
{
    return is_set(yfilter)
	|| (flow_monitor_map !=  nullptr && flow_monitor_map->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data-link-frame-section";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flow-monitor-map")
    {
        if(flow_monitor_map == nullptr)
        {
            flow_monitor_map = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap>();
        }
        return flow_monitor_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(flow_monitor_map != nullptr)
    {
        children["flow-monitor-map"] = flow_monitor_map;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flow-monitor-map")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::FlowMonitorMap()
    :
    ingress(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Ingress>())
	,egress(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Egress>())
{
    ingress->parent = this;
    egress->parent = this;

    yang_name = "flow-monitor-map"; yang_parent_name = "data-link-frame-section"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::~FlowMonitorMap()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::has_data() const
{
    return (ingress !=  nullptr && ingress->has_data())
	|| (egress !=  nullptr && egress->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::has_operation() const
{
    return is_set(yfilter)
	|| (ingress !=  nullptr && ingress->has_operation())
	|| (egress !=  nullptr && egress->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow-monitor-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ingress")
    {
        if(ingress == nullptr)
        {
            ingress = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Ingress>();
        }
        return ingress;
    }

    if(child_yang_name == "egress")
    {
        if(egress == nullptr)
        {
            egress = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Egress>();
        }
        return egress;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ingress != nullptr)
    {
        children["ingress"] = ingress;
    }

    if(egress != nullptr)
    {
        children["egress"] = egress;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ingress" || name == "egress")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Ingress::Ingress()
{

    yang_name = "ingress"; yang_parent_name = "flow-monitor-map"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Ingress::~Ingress()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Ingress::has_data() const
{
    for (std::size_t index=0; index<flow_monitor_name.size(); index++)
    {
        if(flow_monitor_name[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Ingress::has_operation() const
{
    for (std::size_t index=0; index<flow_monitor_name.size(); index++)
    {
        if(flow_monitor_name[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Ingress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ingress";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Ingress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Ingress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flow-monitor-name")
    {
        for(auto const & c : flow_monitor_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Ingress::FlowMonitorName>();
        c->parent = this;
        flow_monitor_name.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Ingress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : flow_monitor_name)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Ingress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Ingress::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Ingress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flow-monitor-name")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Ingress::FlowMonitorName::FlowMonitorName()
    :
    monitor_map_name{YType::str, "monitor-map-name"},
    sampler_map_name{YType::str, "sampler-map-name"}
{

    yang_name = "flow-monitor-name"; yang_parent_name = "ingress"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Ingress::FlowMonitorName::~FlowMonitorName()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Ingress::FlowMonitorName::has_data() const
{
    return monitor_map_name.is_set
	|| sampler_map_name.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Ingress::FlowMonitorName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(monitor_map_name.yfilter)
	|| ydk::is_set(sampler_map_name.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Ingress::FlowMonitorName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow-monitor-name" <<"[monitor-map-name='" <<monitor_map_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Ingress::FlowMonitorName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (monitor_map_name.is_set || is_set(monitor_map_name.yfilter)) leaf_name_data.push_back(monitor_map_name.get_name_leafdata());
    if (sampler_map_name.is_set || is_set(sampler_map_name.yfilter)) leaf_name_data.push_back(sampler_map_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Ingress::FlowMonitorName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Ingress::FlowMonitorName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Ingress::FlowMonitorName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "monitor-map-name")
    {
        monitor_map_name = value;
        monitor_map_name.value_namespace = name_space;
        monitor_map_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sampler-map-name")
    {
        sampler_map_name = value;
        sampler_map_name.value_namespace = name_space;
        sampler_map_name.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Ingress::FlowMonitorName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "monitor-map-name")
    {
        monitor_map_name.yfilter = yfilter;
    }
    if(value_path == "sampler-map-name")
    {
        sampler_map_name.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Ingress::FlowMonitorName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "monitor-map-name" || name == "sampler-map-name")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Egress::Egress()
{

    yang_name = "egress"; yang_parent_name = "flow-monitor-map"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Egress::~Egress()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Egress::has_data() const
{
    for (std::size_t index=0; index<flow_monitor_name.size(); index++)
    {
        if(flow_monitor_name[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Egress::has_operation() const
{
    for (std::size_t index=0; index<flow_monitor_name.size(); index++)
    {
        if(flow_monitor_name[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Egress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "egress";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Egress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Egress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flow-monitor-name")
    {
        for(auto const & c : flow_monitor_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Egress::FlowMonitorName>();
        c->parent = this;
        flow_monitor_name.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Egress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : flow_monitor_name)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Egress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Egress::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Egress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flow-monitor-name")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Egress::FlowMonitorName::FlowMonitorName()
    :
    monitor_map_name{YType::str, "monitor-map-name"},
    sampler_map_name{YType::str, "sampler-map-name"}
{

    yang_name = "flow-monitor-name"; yang_parent_name = "egress"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Egress::FlowMonitorName::~FlowMonitorName()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Egress::FlowMonitorName::has_data() const
{
    return monitor_map_name.is_set
	|| sampler_map_name.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Egress::FlowMonitorName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(monitor_map_name.yfilter)
	|| ydk::is_set(sampler_map_name.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Egress::FlowMonitorName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow-monitor-name" <<"[monitor-map-name='" <<monitor_map_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Egress::FlowMonitorName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (monitor_map_name.is_set || is_set(monitor_map_name.yfilter)) leaf_name_data.push_back(monitor_map_name.get_name_leafdata());
    if (sampler_map_name.is_set || is_set(sampler_map_name.yfilter)) leaf_name_data.push_back(sampler_map_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Egress::FlowMonitorName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Egress::FlowMonitorName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Egress::FlowMonitorName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "monitor-map-name")
    {
        monitor_map_name = value;
        monitor_map_name.value_namespace = name_space;
        monitor_map_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sampler-map-name")
    {
        sampler_map_name = value;
        sampler_map_name.value_namespace = name_space;
        sampler_map_name.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Egress::FlowMonitorName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "monitor-map-name")
    {
        monitor_map_name.yfilter = yfilter;
    }
    if(value_path == "sampler-map-name")
    {
        sampler_map_name.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Egress::FlowMonitorName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "monitor-map-name" || name == "sampler-map-name")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::Mpls()
    :
    flow_monitor_map(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap>())
{
    flow_monitor_map->parent = this;

    yang_name = "mpls"; yang_parent_name = "net-flow"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::~Mpls()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::has_data() const
{
    return (flow_monitor_map !=  nullptr && flow_monitor_map->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::has_operation() const
{
    return is_set(yfilter)
	|| (flow_monitor_map !=  nullptr && flow_monitor_map->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flow-monitor-map")
    {
        if(flow_monitor_map == nullptr)
        {
            flow_monitor_map = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap>();
        }
        return flow_monitor_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(flow_monitor_map != nullptr)
    {
        children["flow-monitor-map"] = flow_monitor_map;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flow-monitor-map")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::FlowMonitorMap()
    :
    ingress(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Ingress>())
	,egress(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Egress>())
{
    ingress->parent = this;
    egress->parent = this;

    yang_name = "flow-monitor-map"; yang_parent_name = "mpls"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::~FlowMonitorMap()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::has_data() const
{
    return (ingress !=  nullptr && ingress->has_data())
	|| (egress !=  nullptr && egress->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::has_operation() const
{
    return is_set(yfilter)
	|| (ingress !=  nullptr && ingress->has_operation())
	|| (egress !=  nullptr && egress->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow-monitor-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ingress")
    {
        if(ingress == nullptr)
        {
            ingress = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Ingress>();
        }
        return ingress;
    }

    if(child_yang_name == "egress")
    {
        if(egress == nullptr)
        {
            egress = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Egress>();
        }
        return egress;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ingress != nullptr)
    {
        children["ingress"] = ingress;
    }

    if(egress != nullptr)
    {
        children["egress"] = egress;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ingress" || name == "egress")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Ingress::Ingress()
{

    yang_name = "ingress"; yang_parent_name = "flow-monitor-map"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Ingress::~Ingress()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Ingress::has_data() const
{
    for (std::size_t index=0; index<flow_monitor_name.size(); index++)
    {
        if(flow_monitor_name[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Ingress::has_operation() const
{
    for (std::size_t index=0; index<flow_monitor_name.size(); index++)
    {
        if(flow_monitor_name[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Ingress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ingress";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Ingress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Ingress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flow-monitor-name")
    {
        for(auto const & c : flow_monitor_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Ingress::FlowMonitorName>();
        c->parent = this;
        flow_monitor_name.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Ingress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : flow_monitor_name)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Ingress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Ingress::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Ingress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flow-monitor-name")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Ingress::FlowMonitorName::FlowMonitorName()
    :
    monitor_map_name{YType::str, "monitor-map-name"},
    sampler_map_name{YType::str, "sampler-map-name"}
{

    yang_name = "flow-monitor-name"; yang_parent_name = "ingress"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Ingress::FlowMonitorName::~FlowMonitorName()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Ingress::FlowMonitorName::has_data() const
{
    return monitor_map_name.is_set
	|| sampler_map_name.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Ingress::FlowMonitorName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(monitor_map_name.yfilter)
	|| ydk::is_set(sampler_map_name.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Ingress::FlowMonitorName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow-monitor-name" <<"[monitor-map-name='" <<monitor_map_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Ingress::FlowMonitorName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (monitor_map_name.is_set || is_set(monitor_map_name.yfilter)) leaf_name_data.push_back(monitor_map_name.get_name_leafdata());
    if (sampler_map_name.is_set || is_set(sampler_map_name.yfilter)) leaf_name_data.push_back(sampler_map_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Ingress::FlowMonitorName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Ingress::FlowMonitorName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Ingress::FlowMonitorName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "monitor-map-name")
    {
        monitor_map_name = value;
        monitor_map_name.value_namespace = name_space;
        monitor_map_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sampler-map-name")
    {
        sampler_map_name = value;
        sampler_map_name.value_namespace = name_space;
        sampler_map_name.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Ingress::FlowMonitorName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "monitor-map-name")
    {
        monitor_map_name.yfilter = yfilter;
    }
    if(value_path == "sampler-map-name")
    {
        sampler_map_name.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Ingress::FlowMonitorName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "monitor-map-name" || name == "sampler-map-name")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Egress::Egress()
{

    yang_name = "egress"; yang_parent_name = "flow-monitor-map"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Egress::~Egress()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Egress::has_data() const
{
    for (std::size_t index=0; index<flow_monitor_name.size(); index++)
    {
        if(flow_monitor_name[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Egress::has_operation() const
{
    for (std::size_t index=0; index<flow_monitor_name.size(); index++)
    {
        if(flow_monitor_name[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Egress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "egress";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Egress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Egress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flow-monitor-name")
    {
        for(auto const & c : flow_monitor_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Egress::FlowMonitorName>();
        c->parent = this;
        flow_monitor_name.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Egress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : flow_monitor_name)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Egress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Egress::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Egress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flow-monitor-name")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Egress::FlowMonitorName::FlowMonitorName()
    :
    monitor_map_name{YType::str, "monitor-map-name"},
    sampler_map_name{YType::str, "sampler-map-name"}
{

    yang_name = "flow-monitor-name"; yang_parent_name = "egress"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Egress::FlowMonitorName::~FlowMonitorName()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Egress::FlowMonitorName::has_data() const
{
    return monitor_map_name.is_set
	|| sampler_map_name.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Egress::FlowMonitorName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(monitor_map_name.yfilter)
	|| ydk::is_set(sampler_map_name.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Egress::FlowMonitorName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow-monitor-name" <<"[monitor-map-name='" <<monitor_map_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Egress::FlowMonitorName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (monitor_map_name.is_set || is_set(monitor_map_name.yfilter)) leaf_name_data.push_back(monitor_map_name.get_name_leafdata());
    if (sampler_map_name.is_set || is_set(sampler_map_name.yfilter)) leaf_name_data.push_back(sampler_map_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Egress::FlowMonitorName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Egress::FlowMonitorName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Egress::FlowMonitorName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "monitor-map-name")
    {
        monitor_map_name = value;
        monitor_map_name.value_namespace = name_space;
        monitor_map_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sampler-map-name")
    {
        sampler_map_name = value;
        sampler_map_name.value_namespace = name_space;
        sampler_map_name.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Egress::FlowMonitorName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "monitor-map-name")
    {
        monitor_map_name.yfilter = yfilter;
    }
    if(value_path == "sampler-map-name")
    {
        sampler_map_name.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Egress::FlowMonitorName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "monitor-map-name" || name == "sampler-map-name")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::Ipv6()
    :
    flow_monitor_map(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap>())
{
    flow_monitor_map->parent = this;

    yang_name = "ipv6"; yang_parent_name = "net-flow"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::~Ipv6()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::has_data() const
{
    return (flow_monitor_map !=  nullptr && flow_monitor_map->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::has_operation() const
{
    return is_set(yfilter)
	|| (flow_monitor_map !=  nullptr && flow_monitor_map->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flow-monitor-map")
    {
        if(flow_monitor_map == nullptr)
        {
            flow_monitor_map = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap>();
        }
        return flow_monitor_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(flow_monitor_map != nullptr)
    {
        children["flow-monitor-map"] = flow_monitor_map;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flow-monitor-map")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::FlowMonitorMap()
    :
    ingress(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Ingress>())
	,egress(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Egress>())
{
    ingress->parent = this;
    egress->parent = this;

    yang_name = "flow-monitor-map"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::~FlowMonitorMap()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::has_data() const
{
    return (ingress !=  nullptr && ingress->has_data())
	|| (egress !=  nullptr && egress->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::has_operation() const
{
    return is_set(yfilter)
	|| (ingress !=  nullptr && ingress->has_operation())
	|| (egress !=  nullptr && egress->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow-monitor-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ingress")
    {
        if(ingress == nullptr)
        {
            ingress = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Ingress>();
        }
        return ingress;
    }

    if(child_yang_name == "egress")
    {
        if(egress == nullptr)
        {
            egress = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Egress>();
        }
        return egress;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ingress != nullptr)
    {
        children["ingress"] = ingress;
    }

    if(egress != nullptr)
    {
        children["egress"] = egress;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ingress" || name == "egress")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Ingress::Ingress()
{

    yang_name = "ingress"; yang_parent_name = "flow-monitor-map"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Ingress::~Ingress()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Ingress::has_data() const
{
    for (std::size_t index=0; index<flow_monitor_name.size(); index++)
    {
        if(flow_monitor_name[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Ingress::has_operation() const
{
    for (std::size_t index=0; index<flow_monitor_name.size(); index++)
    {
        if(flow_monitor_name[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Ingress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ingress";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Ingress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Ingress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flow-monitor-name")
    {
        for(auto const & c : flow_monitor_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Ingress::FlowMonitorName>();
        c->parent = this;
        flow_monitor_name.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Ingress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : flow_monitor_name)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Ingress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Ingress::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Ingress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flow-monitor-name")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Ingress::FlowMonitorName::FlowMonitorName()
    :
    monitor_map_name{YType::str, "monitor-map-name"},
    sampler_map_name{YType::str, "sampler-map-name"}
{

    yang_name = "flow-monitor-name"; yang_parent_name = "ingress"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Ingress::FlowMonitorName::~FlowMonitorName()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Ingress::FlowMonitorName::has_data() const
{
    return monitor_map_name.is_set
	|| sampler_map_name.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Ingress::FlowMonitorName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(monitor_map_name.yfilter)
	|| ydk::is_set(sampler_map_name.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Ingress::FlowMonitorName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow-monitor-name" <<"[monitor-map-name='" <<monitor_map_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Ingress::FlowMonitorName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (monitor_map_name.is_set || is_set(monitor_map_name.yfilter)) leaf_name_data.push_back(monitor_map_name.get_name_leafdata());
    if (sampler_map_name.is_set || is_set(sampler_map_name.yfilter)) leaf_name_data.push_back(sampler_map_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Ingress::FlowMonitorName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Ingress::FlowMonitorName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Ingress::FlowMonitorName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "monitor-map-name")
    {
        monitor_map_name = value;
        monitor_map_name.value_namespace = name_space;
        monitor_map_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sampler-map-name")
    {
        sampler_map_name = value;
        sampler_map_name.value_namespace = name_space;
        sampler_map_name.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Ingress::FlowMonitorName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "monitor-map-name")
    {
        monitor_map_name.yfilter = yfilter;
    }
    if(value_path == "sampler-map-name")
    {
        sampler_map_name.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Ingress::FlowMonitorName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "monitor-map-name" || name == "sampler-map-name")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Egress::Egress()
{

    yang_name = "egress"; yang_parent_name = "flow-monitor-map"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Egress::~Egress()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Egress::has_data() const
{
    for (std::size_t index=0; index<flow_monitor_name.size(); index++)
    {
        if(flow_monitor_name[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Egress::has_operation() const
{
    for (std::size_t index=0; index<flow_monitor_name.size(); index++)
    {
        if(flow_monitor_name[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Egress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "egress";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Egress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Egress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flow-monitor-name")
    {
        for(auto const & c : flow_monitor_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Egress::FlowMonitorName>();
        c->parent = this;
        flow_monitor_name.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Egress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : flow_monitor_name)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Egress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Egress::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Egress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flow-monitor-name")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Egress::FlowMonitorName::FlowMonitorName()
    :
    monitor_map_name{YType::str, "monitor-map-name"},
    sampler_map_name{YType::str, "sampler-map-name"}
{

    yang_name = "flow-monitor-name"; yang_parent_name = "egress"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Egress::FlowMonitorName::~FlowMonitorName()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Egress::FlowMonitorName::has_data() const
{
    return monitor_map_name.is_set
	|| sampler_map_name.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Egress::FlowMonitorName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(monitor_map_name.yfilter)
	|| ydk::is_set(sampler_map_name.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Egress::FlowMonitorName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow-monitor-name" <<"[monitor-map-name='" <<monitor_map_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Egress::FlowMonitorName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (monitor_map_name.is_set || is_set(monitor_map_name.yfilter)) leaf_name_data.push_back(monitor_map_name.get_name_leafdata());
    if (sampler_map_name.is_set || is_set(sampler_map_name.yfilter)) leaf_name_data.push_back(sampler_map_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Egress::FlowMonitorName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Egress::FlowMonitorName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Egress::FlowMonitorName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "monitor-map-name")
    {
        monitor_map_name = value;
        monitor_map_name.value_namespace = name_space;
        monitor_map_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sampler-map-name")
    {
        sampler_map_name = value;
        sampler_map_name.value_namespace = name_space;
        sampler_map_name.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Egress::FlowMonitorName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "monitor-map-name")
    {
        monitor_map_name.yfilter = yfilter;
    }
    if(value_path == "sampler-map-name")
    {
        sampler_map_name.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Egress::FlowMonitorName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "monitor-map-name" || name == "sampler-map-name")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::Ipv4()
    :
    flow_monitor_map(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap>())
{
    flow_monitor_map->parent = this;

    yang_name = "ipv4"; yang_parent_name = "net-flow"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::~Ipv4()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::has_data() const
{
    return (flow_monitor_map !=  nullptr && flow_monitor_map->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| (flow_monitor_map !=  nullptr && flow_monitor_map->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flow-monitor-map")
    {
        if(flow_monitor_map == nullptr)
        {
            flow_monitor_map = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap>();
        }
        return flow_monitor_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(flow_monitor_map != nullptr)
    {
        children["flow-monitor-map"] = flow_monitor_map;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flow-monitor-map")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::FlowMonitorMap()
    :
    ingress(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Ingress>())
	,egress(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Egress>())
{
    ingress->parent = this;
    egress->parent = this;

    yang_name = "flow-monitor-map"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::~FlowMonitorMap()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::has_data() const
{
    return (ingress !=  nullptr && ingress->has_data())
	|| (egress !=  nullptr && egress->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::has_operation() const
{
    return is_set(yfilter)
	|| (ingress !=  nullptr && ingress->has_operation())
	|| (egress !=  nullptr && egress->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow-monitor-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ingress")
    {
        if(ingress == nullptr)
        {
            ingress = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Ingress>();
        }
        return ingress;
    }

    if(child_yang_name == "egress")
    {
        if(egress == nullptr)
        {
            egress = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Egress>();
        }
        return egress;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ingress != nullptr)
    {
        children["ingress"] = ingress;
    }

    if(egress != nullptr)
    {
        children["egress"] = egress;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ingress" || name == "egress")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Ingress::Ingress()
{

    yang_name = "ingress"; yang_parent_name = "flow-monitor-map"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Ingress::~Ingress()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Ingress::has_data() const
{
    for (std::size_t index=0; index<flow_monitor_name.size(); index++)
    {
        if(flow_monitor_name[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Ingress::has_operation() const
{
    for (std::size_t index=0; index<flow_monitor_name.size(); index++)
    {
        if(flow_monitor_name[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Ingress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ingress";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Ingress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Ingress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flow-monitor-name")
    {
        for(auto const & c : flow_monitor_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Ingress::FlowMonitorName>();
        c->parent = this;
        flow_monitor_name.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Ingress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : flow_monitor_name)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Ingress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Ingress::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Ingress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flow-monitor-name")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Ingress::FlowMonitorName::FlowMonitorName()
    :
    monitor_map_name{YType::str, "monitor-map-name"},
    sampler_map_name{YType::str, "sampler-map-name"}
{

    yang_name = "flow-monitor-name"; yang_parent_name = "ingress"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Ingress::FlowMonitorName::~FlowMonitorName()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Ingress::FlowMonitorName::has_data() const
{
    return monitor_map_name.is_set
	|| sampler_map_name.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Ingress::FlowMonitorName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(monitor_map_name.yfilter)
	|| ydk::is_set(sampler_map_name.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Ingress::FlowMonitorName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow-monitor-name" <<"[monitor-map-name='" <<monitor_map_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Ingress::FlowMonitorName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (monitor_map_name.is_set || is_set(monitor_map_name.yfilter)) leaf_name_data.push_back(monitor_map_name.get_name_leafdata());
    if (sampler_map_name.is_set || is_set(sampler_map_name.yfilter)) leaf_name_data.push_back(sampler_map_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Ingress::FlowMonitorName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Ingress::FlowMonitorName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Ingress::FlowMonitorName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "monitor-map-name")
    {
        monitor_map_name = value;
        monitor_map_name.value_namespace = name_space;
        monitor_map_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sampler-map-name")
    {
        sampler_map_name = value;
        sampler_map_name.value_namespace = name_space;
        sampler_map_name.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Ingress::FlowMonitorName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "monitor-map-name")
    {
        monitor_map_name.yfilter = yfilter;
    }
    if(value_path == "sampler-map-name")
    {
        sampler_map_name.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Ingress::FlowMonitorName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "monitor-map-name" || name == "sampler-map-name")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Egress::Egress()
{

    yang_name = "egress"; yang_parent_name = "flow-monitor-map"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Egress::~Egress()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Egress::has_data() const
{
    for (std::size_t index=0; index<flow_monitor_name.size(); index++)
    {
        if(flow_monitor_name[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Egress::has_operation() const
{
    for (std::size_t index=0; index<flow_monitor_name.size(); index++)
    {
        if(flow_monitor_name[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Egress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "egress";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Egress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Egress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flow-monitor-name")
    {
        for(auto const & c : flow_monitor_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Egress::FlowMonitorName>();
        c->parent = this;
        flow_monitor_name.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Egress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : flow_monitor_name)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Egress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Egress::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Egress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flow-monitor-name")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Egress::FlowMonitorName::FlowMonitorName()
    :
    monitor_map_name{YType::str, "monitor-map-name"},
    sampler_map_name{YType::str, "sampler-map-name"}
{

    yang_name = "flow-monitor-name"; yang_parent_name = "egress"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Egress::FlowMonitorName::~FlowMonitorName()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Egress::FlowMonitorName::has_data() const
{
    return monitor_map_name.is_set
	|| sampler_map_name.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Egress::FlowMonitorName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(monitor_map_name.yfilter)
	|| ydk::is_set(sampler_map_name.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Egress::FlowMonitorName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow-monitor-name" <<"[monitor-map-name='" <<monitor_map_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Egress::FlowMonitorName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (monitor_map_name.is_set || is_set(monitor_map_name.yfilter)) leaf_name_data.push_back(monitor_map_name.get_name_leafdata());
    if (sampler_map_name.is_set || is_set(sampler_map_name.yfilter)) leaf_name_data.push_back(sampler_map_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Egress::FlowMonitorName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Egress::FlowMonitorName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Egress::FlowMonitorName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "monitor-map-name")
    {
        monitor_map_name = value;
        monitor_map_name.value_namespace = name_space;
        monitor_map_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sampler-map-name")
    {
        sampler_map_name = value;
        sampler_map_name.value_namespace = name_space;
        sampler_map_name.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Egress::FlowMonitorName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "monitor-map-name")
    {
        monitor_map_name.yfilter = yfilter;
    }
    if(value_path == "sampler-map-name")
    {
        sampler_map_name.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Egress::FlowMonitorName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "monitor-map-name" || name == "sampler-map-name")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelIp::TunnelIp()
    :
    allow_key{YType::empty, "allow-key"},
    ttl{YType::uint32, "ttl"},
    tunnel_vrf{YType::str, "tunnel-vrf"},
    tos{YType::uint32, "tos"},
    disable{YType::int32, "disable"}
    	,
    mode(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Mode>())
	,source(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Source>())
	,key(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Key>())
	,keepalive(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Keepalive>())
	,destination(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Destination>())
{
    mode->parent = this;
    source->parent = this;
    key->parent = this;
    keepalive->parent = this;
    destination->parent = this;

    yang_name = "tunnel-ip"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelIp::~TunnelIp()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelIp::has_data() const
{
    return allow_key.is_set
	|| ttl.is_set
	|| tunnel_vrf.is_set
	|| tos.is_set
	|| disable.is_set
	|| (mode !=  nullptr && mode->has_data())
	|| (source !=  nullptr && source->has_data())
	|| (key !=  nullptr && key->has_data())
	|| (keepalive !=  nullptr && keepalive->has_data())
	|| (destination !=  nullptr && destination->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelIp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(allow_key.yfilter)
	|| ydk::is_set(ttl.yfilter)
	|| ydk::is_set(tunnel_vrf.yfilter)
	|| ydk::is_set(tos.yfilter)
	|| ydk::is_set(disable.yfilter)
	|| (mode !=  nullptr && mode->has_operation())
	|| (source !=  nullptr && source->has_operation())
	|| (key !=  nullptr && key->has_operation())
	|| (keepalive !=  nullptr && keepalive->has_operation())
	|| (destination !=  nullptr && destination->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelIp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-tunnel-gre-cfg:tunnel-ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TunnelIp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (allow_key.is_set || is_set(allow_key.yfilter)) leaf_name_data.push_back(allow_key.get_name_leafdata());
    if (ttl.is_set || is_set(ttl.yfilter)) leaf_name_data.push_back(ttl.get_name_leafdata());
    if (tunnel_vrf.is_set || is_set(tunnel_vrf.yfilter)) leaf_name_data.push_back(tunnel_vrf.get_name_leafdata());
    if (tos.is_set || is_set(tos.yfilter)) leaf_name_data.push_back(tos.get_name_leafdata());
    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelIp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mode")
    {
        if(mode == nullptr)
        {
            mode = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Mode>();
        }
        return mode;
    }

    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Source>();
        }
        return source;
    }

    if(child_yang_name == "key")
    {
        if(key == nullptr)
        {
            key = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Key>();
        }
        return key;
    }

    if(child_yang_name == "keepalive")
    {
        if(keepalive == nullptr)
        {
            keepalive = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Keepalive>();
        }
        return keepalive;
    }

    if(child_yang_name == "destination")
    {
        if(destination == nullptr)
        {
            destination = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Destination>();
        }
        return destination;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::TunnelIp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mode != nullptr)
    {
        children["mode"] = mode;
    }

    if(source != nullptr)
    {
        children["source"] = source;
    }

    if(key != nullptr)
    {
        children["key"] = key;
    }

    if(keepalive != nullptr)
    {
        children["keepalive"] = keepalive;
    }

    if(destination != nullptr)
    {
        children["destination"] = destination;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelIp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "allow-key")
    {
        allow_key = value;
        allow_key.value_namespace = name_space;
        allow_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ttl")
    {
        ttl = value;
        ttl.value_namespace = name_space;
        ttl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-vrf")
    {
        tunnel_vrf = value;
        tunnel_vrf.value_namespace = name_space;
        tunnel_vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tos")
    {
        tos = value;
        tos.value_namespace = name_space;
        tos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelIp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "allow-key")
    {
        allow_key.yfilter = yfilter;
    }
    if(value_path == "ttl")
    {
        ttl.yfilter = yfilter;
    }
    if(value_path == "tunnel-vrf")
    {
        tunnel_vrf.yfilter = yfilter;
    }
    if(value_path == "tos")
    {
        tos.yfilter = yfilter;
    }
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelIp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mode" || name == "source" || name == "key" || name == "keepalive" || name == "destination" || name == "allow-key" || name == "ttl" || name == "tunnel-vrf" || name == "tos" || name == "disable")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Mode::Mode()
    :
    value_{YType::int32, "value"},
    mode_direction{YType::enumeration, "mode-direction"}
{

    yang_name = "mode"; yang_parent_name = "tunnel-ip"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Mode::~Mode()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Mode::has_data() const
{
    return value_.is_set
	|| mode_direction.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Mode::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(mode_direction.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Mode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mode";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Mode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (mode_direction.is_set || is_set(mode_direction.yfilter)) leaf_name_data.push_back(mode_direction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Mode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Mode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Mode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode-direction")
    {
        mode_direction = value;
        mode_direction.value_namespace = name_space;
        mode_direction.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Mode::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "mode-direction")
    {
        mode_direction.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Mode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value" || name == "mode-direction")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Source::Source()
    :
    type{YType::int32, "type"},
    address{YType::str, "address"},
    interface_name{YType::str, "interface-name"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "source"; yang_parent_name = "tunnel-ip"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Source::~Source()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Source::has_data() const
{
    return type.is_set
	|| address.is_set
	|| interface_name.is_set
	|| ipv6_address.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Source::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Source::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Source::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Source::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Source::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "address" || name == "interface-name" || name == "ipv6-address")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Key::Key()
    :
    entropy{YType::empty, "entropy"},
    value_{YType::uint32, "value"}
{

    yang_name = "key"; yang_parent_name = "tunnel-ip"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Key::~Key()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Key::has_data() const
{
    return entropy.is_set
	|| value_.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Key::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entropy.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Key::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Key::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entropy.is_set || is_set(entropy.yfilter)) leaf_name_data.push_back(entropy.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Key::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Key::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Key::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entropy")
    {
        entropy = value;
        entropy.value_namespace = name_space;
        entropy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Key::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entropy")
    {
        entropy.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Key::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entropy" || name == "value")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Keepalive::Keepalive()
    :
    keep_alive_period{YType::uint32, "keep-alive-period"},
    keep_alive_retries{YType::uint32, "keep-alive-retries"}
{

    yang_name = "keepalive"; yang_parent_name = "tunnel-ip"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Keepalive::~Keepalive()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Keepalive::has_data() const
{
    return keep_alive_period.is_set
	|| keep_alive_retries.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Keepalive::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(keep_alive_period.yfilter)
	|| ydk::is_set(keep_alive_retries.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Keepalive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "keepalive";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Keepalive::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (keep_alive_period.is_set || is_set(keep_alive_period.yfilter)) leaf_name_data.push_back(keep_alive_period.get_name_leafdata());
    if (keep_alive_retries.is_set || is_set(keep_alive_retries.yfilter)) leaf_name_data.push_back(keep_alive_retries.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Keepalive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Keepalive::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Keepalive::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "keep-alive-period")
    {
        keep_alive_period = value;
        keep_alive_period.value_namespace = name_space;
        keep_alive_period.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keep-alive-retries")
    {
        keep_alive_retries = value;
        keep_alive_retries.value_namespace = name_space;
        keep_alive_retries.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Keepalive::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "keep-alive-period")
    {
        keep_alive_period.yfilter = yfilter;
    }
    if(value_path == "keep-alive-retries")
    {
        keep_alive_retries.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Keepalive::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "keep-alive-period" || name == "keep-alive-retries")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Destination::Destination()
    :
    type{YType::int32, "type"},
    address{YType::str, "address"},
    ipv6_address{YType::str, "ipv6-address"},
    address_mask{YType::str, "address-mask"},
    prefix_list_name{YType::str, "prefix-list-name"}
{

    yang_name = "destination"; yang_parent_name = "tunnel-ip"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Destination::~Destination()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Destination::has_data() const
{
    return type.is_set
	|| address.is_set
	|| ipv6_address.is_set
	|| address_mask.is_set
	|| prefix_list_name.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Destination::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter)
	|| ydk::is_set(address_mask.yfilter)
	|| ydk::is_set(prefix_list_name.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Destination::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Destination::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (address_mask.is_set || is_set(address_mask.yfilter)) leaf_name_data.push_back(address_mask.get_name_leafdata());
    if (prefix_list_name.is_set || is_set(prefix_list_name.yfilter)) leaf_name_data.push_back(prefix_list_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Destination::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Destination::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Destination::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address-mask")
    {
        address_mask = value;
        address_mask.value_namespace = name_space;
        address_mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-list-name")
    {
        prefix_list_name = value;
        prefix_list_name.value_namespace = name_space;
        prefix_list_name.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Destination::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
    if(value_path == "address-mask")
    {
        address_mask.yfilter = yfilter;
    }
    if(value_path == "prefix-list-name")
    {
        prefix_list_name.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Destination::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "address" || name == "ipv6-address" || name == "address-mask" || name == "prefix-list-name")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Nve::Nve()
    :
    vx_lan_udp_port{YType::enumeration, "vx-lan-udp-port"},
    overlay_encapsulation{YType::enumeration, "overlay-encapsulation"},
    source_interface{YType::str, "source-interface"},
    ingress_replication_protocol{YType::enumeration, "ingress-replication-protocol"}
    	,
    anycast(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Nve::Anycast>())
	,redundancy(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Nve::Redundancy>())
	,member_vnis(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Nve::MemberVnis>())
{
    anycast->parent = this;
    redundancy->parent = this;
    member_vnis->parent = this;

    yang_name = "nve"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Nve::~Nve()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Nve::has_data() const
{
    return vx_lan_udp_port.is_set
	|| overlay_encapsulation.is_set
	|| source_interface.is_set
	|| ingress_replication_protocol.is_set
	|| (anycast !=  nullptr && anycast->has_data())
	|| (redundancy !=  nullptr && redundancy->has_data())
	|| (member_vnis !=  nullptr && member_vnis->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Nve::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vx_lan_udp_port.yfilter)
	|| ydk::is_set(overlay_encapsulation.yfilter)
	|| ydk::is_set(source_interface.yfilter)
	|| ydk::is_set(ingress_replication_protocol.yfilter)
	|| (anycast !=  nullptr && anycast->has_operation())
	|| (redundancy !=  nullptr && redundancy->has_operation())
	|| (member_vnis !=  nullptr && member_vnis->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Nve::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-tunnel-nve-cfg:nve";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Nve::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vx_lan_udp_port.is_set || is_set(vx_lan_udp_port.yfilter)) leaf_name_data.push_back(vx_lan_udp_port.get_name_leafdata());
    if (overlay_encapsulation.is_set || is_set(overlay_encapsulation.yfilter)) leaf_name_data.push_back(overlay_encapsulation.get_name_leafdata());
    if (source_interface.is_set || is_set(source_interface.yfilter)) leaf_name_data.push_back(source_interface.get_name_leafdata());
    if (ingress_replication_protocol.is_set || is_set(ingress_replication_protocol.yfilter)) leaf_name_data.push_back(ingress_replication_protocol.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Nve::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "anycast")
    {
        if(anycast == nullptr)
        {
            anycast = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Nve::Anycast>();
        }
        return anycast;
    }

    if(child_yang_name == "redundancy")
    {
        if(redundancy == nullptr)
        {
            redundancy = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Nve::Redundancy>();
        }
        return redundancy;
    }

    if(child_yang_name == "member-vnis")
    {
        if(member_vnis == nullptr)
        {
            member_vnis = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Nve::MemberVnis>();
        }
        return member_vnis;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Nve::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(anycast != nullptr)
    {
        children["anycast"] = anycast;
    }

    if(redundancy != nullptr)
    {
        children["redundancy"] = redundancy;
    }

    if(member_vnis != nullptr)
    {
        children["member-vnis"] = member_vnis;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Nve::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vx-lan-udp-port")
    {
        vx_lan_udp_port = value;
        vx_lan_udp_port.value_namespace = name_space;
        vx_lan_udp_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "overlay-encapsulation")
    {
        overlay_encapsulation = value;
        overlay_encapsulation.value_namespace = name_space;
        overlay_encapsulation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-interface")
    {
        source_interface = value;
        source_interface.value_namespace = name_space;
        source_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ingress-replication-protocol")
    {
        ingress_replication_protocol = value;
        ingress_replication_protocol.value_namespace = name_space;
        ingress_replication_protocol.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Nve::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vx-lan-udp-port")
    {
        vx_lan_udp_port.yfilter = yfilter;
    }
    if(value_path == "overlay-encapsulation")
    {
        overlay_encapsulation.yfilter = yfilter;
    }
    if(value_path == "source-interface")
    {
        source_interface.yfilter = yfilter;
    }
    if(value_path == "ingress-replication-protocol")
    {
        ingress_replication_protocol.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Nve::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "anycast" || name == "redundancy" || name == "member-vnis" || name == "vx-lan-udp-port" || name == "overlay-encapsulation" || name == "source-interface" || name == "ingress-replication-protocol")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Nve::Anycast::Anycast()
    :
    source_interface{YType::str, "source-interface"},
    sync_group{YType::str, "sync-group"}
{

    yang_name = "anycast"; yang_parent_name = "nve"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Nve::Anycast::~Anycast()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Nve::Anycast::has_data() const
{
    return source_interface.is_set
	|| sync_group.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Nve::Anycast::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_interface.yfilter)
	|| ydk::is_set(sync_group.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Nve::Anycast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "anycast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Nve::Anycast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_interface.is_set || is_set(source_interface.yfilter)) leaf_name_data.push_back(source_interface.get_name_leafdata());
    if (sync_group.is_set || is_set(sync_group.yfilter)) leaf_name_data.push_back(sync_group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Nve::Anycast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Nve::Anycast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Nve::Anycast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-interface")
    {
        source_interface = value;
        source_interface.value_namespace = name_space;
        source_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sync-group")
    {
        sync_group = value;
        sync_group.value_namespace = name_space;
        sync_group.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Nve::Anycast::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-interface")
    {
        source_interface.yfilter = yfilter;
    }
    if(value_path == "sync-group")
    {
        sync_group.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Nve::Anycast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-interface" || name == "sync-group")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Nve::Redundancy::Redundancy()
    :
    enable{YType::empty, "enable"}
    	,
    backbone_vx_lan(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Nve::Redundancy::BackboneVxLan>())
	,backbone_mpls(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Nve::Redundancy::BackboneMpls>())
{
    backbone_vx_lan->parent = this;
    backbone_mpls->parent = this;

    yang_name = "redundancy"; yang_parent_name = "nve"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Nve::Redundancy::~Redundancy()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Nve::Redundancy::has_data() const
{
    return enable.is_set
	|| (backbone_vx_lan !=  nullptr && backbone_vx_lan->has_data())
	|| (backbone_mpls !=  nullptr && backbone_mpls->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Nve::Redundancy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (backbone_vx_lan !=  nullptr && backbone_vx_lan->has_operation())
	|| (backbone_mpls !=  nullptr && backbone_mpls->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Nve::Redundancy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redundancy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Nve::Redundancy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Nve::Redundancy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backbone-vx-lan")
    {
        if(backbone_vx_lan == nullptr)
        {
            backbone_vx_lan = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Nve::Redundancy::BackboneVxLan>();
        }
        return backbone_vx_lan;
    }

    if(child_yang_name == "backbone-mpls")
    {
        if(backbone_mpls == nullptr)
        {
            backbone_mpls = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Nve::Redundancy::BackboneMpls>();
        }
        return backbone_mpls;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Nve::Redundancy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(backbone_vx_lan != nullptr)
    {
        children["backbone-vx-lan"] = backbone_vx_lan;
    }

    if(backbone_mpls != nullptr)
    {
        children["backbone-mpls"] = backbone_mpls;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Nve::Redundancy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Nve::Redundancy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Nve::Redundancy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backbone-vx-lan" || name == "backbone-mpls" || name == "enable")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Nve::Redundancy::BackboneVxLan::BackboneVxLan()
    :
    enable{YType::empty, "enable"},
    backbone_vx_laniccp{YType::int32, "backbone-vx-laniccp"}
{

    yang_name = "backbone-vx-lan"; yang_parent_name = "redundancy"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Nve::Redundancy::BackboneVxLan::~BackboneVxLan()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Nve::Redundancy::BackboneVxLan::has_data() const
{
    return enable.is_set
	|| backbone_vx_laniccp.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Nve::Redundancy::BackboneVxLan::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(backbone_vx_laniccp.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Nve::Redundancy::BackboneVxLan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backbone-vx-lan";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Nve::Redundancy::BackboneVxLan::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (backbone_vx_laniccp.is_set || is_set(backbone_vx_laniccp.yfilter)) leaf_name_data.push_back(backbone_vx_laniccp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Nve::Redundancy::BackboneVxLan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Nve::Redundancy::BackboneVxLan::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Nve::Redundancy::BackboneVxLan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backbone-vx-laniccp")
    {
        backbone_vx_laniccp = value;
        backbone_vx_laniccp.value_namespace = name_space;
        backbone_vx_laniccp.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Nve::Redundancy::BackboneVxLan::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "backbone-vx-laniccp")
    {
        backbone_vx_laniccp.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Nve::Redundancy::BackboneVxLan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "backbone-vx-laniccp")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Nve::Redundancy::BackboneMpls::BackboneMpls()
    :
    backbone_mplsiccp{YType::int32, "backbone-mplsiccp"},
    enable{YType::empty, "enable"}
{

    yang_name = "backbone-mpls"; yang_parent_name = "redundancy"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Nve::Redundancy::BackboneMpls::~BackboneMpls()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Nve::Redundancy::BackboneMpls::has_data() const
{
    return backbone_mplsiccp.is_set
	|| enable.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Nve::Redundancy::BackboneMpls::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(backbone_mplsiccp.yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Nve::Redundancy::BackboneMpls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backbone-mpls";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Nve::Redundancy::BackboneMpls::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backbone_mplsiccp.is_set || is_set(backbone_mplsiccp.yfilter)) leaf_name_data.push_back(backbone_mplsiccp.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Nve::Redundancy::BackboneMpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Nve::Redundancy::BackboneMpls::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Nve::Redundancy::BackboneMpls::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "backbone-mplsiccp")
    {
        backbone_mplsiccp = value;
        backbone_mplsiccp.value_namespace = name_space;
        backbone_mplsiccp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Nve::Redundancy::BackboneMpls::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "backbone-mplsiccp")
    {
        backbone_mplsiccp.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Nve::Redundancy::BackboneMpls::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backbone-mplsiccp" || name == "enable")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Nve::MemberVnis::MemberVnis()
{

    yang_name = "member-vnis"; yang_parent_name = "nve"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Nve::MemberVnis::~MemberVnis()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Nve::MemberVnis::has_data() const
{
    for (std::size_t index=0; index<member_vni.size(); index++)
    {
        if(member_vni[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::Nve::MemberVnis::has_operation() const
{
    for (std::size_t index=0; index<member_vni.size(); index++)
    {
        if(member_vni[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Nve::MemberVnis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member-vnis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Nve::MemberVnis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Nve::MemberVnis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "member-vni")
    {
        for(auto const & c : member_vni)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Nve::MemberVnis::MemberVni>();
        c->parent = this;
        member_vni.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Nve::MemberVnis::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : member_vni)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Nve::MemberVnis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::Nve::MemberVnis::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Nve::MemberVnis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "member-vni")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Nve::MemberVnis::MemberVni::MemberVni()
    :
    vni_start{YType::uint32, "vni-start"},
    vni_end{YType::uint32, "vni-end"},
    host_reachability{YType::enumeration, "host-reachability"},
    vrf{YType::str, "vrf"},
    unknown_unicast_flooding{YType::enumeration, "unknown-unicast-flooding"},
    load_balance_per_evi{YType::enumeration, "load-balance-per-evi"},
    enable{YType::empty, "enable"}
    	,
    multicast(nullptr) // presence node
{

    yang_name = "member-vni"; yang_parent_name = "member-vnis"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Nve::MemberVnis::MemberVni::~MemberVni()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Nve::MemberVnis::MemberVni::has_data() const
{
    return vni_start.is_set
	|| vni_end.is_set
	|| host_reachability.is_set
	|| vrf.is_set
	|| unknown_unicast_flooding.is_set
	|| load_balance_per_evi.is_set
	|| enable.is_set
	|| (multicast !=  nullptr && multicast->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Nve::MemberVnis::MemberVni::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vni_start.yfilter)
	|| ydk::is_set(vni_end.yfilter)
	|| ydk::is_set(host_reachability.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| ydk::is_set(unknown_unicast_flooding.yfilter)
	|| ydk::is_set(load_balance_per_evi.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (multicast !=  nullptr && multicast->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Nve::MemberVnis::MemberVni::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member-vni" <<"[vni-start='" <<vni_start <<"']" <<"[vni-end='" <<vni_end <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Nve::MemberVnis::MemberVni::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vni_start.is_set || is_set(vni_start.yfilter)) leaf_name_data.push_back(vni_start.get_name_leafdata());
    if (vni_end.is_set || is_set(vni_end.yfilter)) leaf_name_data.push_back(vni_end.get_name_leafdata());
    if (host_reachability.is_set || is_set(host_reachability.yfilter)) leaf_name_data.push_back(host_reachability.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());
    if (unknown_unicast_flooding.is_set || is_set(unknown_unicast_flooding.yfilter)) leaf_name_data.push_back(unknown_unicast_flooding.get_name_leafdata());
    if (load_balance_per_evi.is_set || is_set(load_balance_per_evi.yfilter)) leaf_name_data.push_back(load_balance_per_evi.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Nve::MemberVnis::MemberVni::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "multicast")
    {
        if(multicast == nullptr)
        {
            multicast = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Nve::MemberVnis::MemberVni::Multicast>();
        }
        return multicast;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Nve::MemberVnis::MemberVni::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(multicast != nullptr)
    {
        children["multicast"] = multicast;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Nve::MemberVnis::MemberVni::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vni-start")
    {
        vni_start = value;
        vni_start.value_namespace = name_space;
        vni_start.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vni-end")
    {
        vni_end = value;
        vni_end.value_namespace = name_space;
        vni_end.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "host-reachability")
    {
        host_reachability = value;
        host_reachability.value_namespace = name_space;
        host_reachability.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknown-unicast-flooding")
    {
        unknown_unicast_flooding = value;
        unknown_unicast_flooding.value_namespace = name_space;
        unknown_unicast_flooding.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-balance-per-evi")
    {
        load_balance_per_evi = value;
        load_balance_per_evi.value_namespace = name_space;
        load_balance_per_evi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Nve::MemberVnis::MemberVni::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vni-start")
    {
        vni_start.yfilter = yfilter;
    }
    if(value_path == "vni-end")
    {
        vni_end.yfilter = yfilter;
    }
    if(value_path == "host-reachability")
    {
        host_reachability.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
    if(value_path == "unknown-unicast-flooding")
    {
        unknown_unicast_flooding.yfilter = yfilter;
    }
    if(value_path == "load-balance-per-evi")
    {
        load_balance_per_evi.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Nve::MemberVnis::MemberVni::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "multicast" || name == "vni-start" || name == "vni-end" || name == "host-reachability" || name == "vrf" || name == "unknown-unicast-flooding" || name == "load-balance-per-evi" || name == "enable")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Nve::MemberVnis::MemberVni::Multicast::Multicast()
    :
    multicast_group_min{YType::str, "multicast-group-min"},
    multicast_group_max{YType::str, "multicast-group-max"}
{

    yang_name = "multicast"; yang_parent_name = "member-vni"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Nve::MemberVnis::MemberVni::Multicast::~Multicast()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Nve::MemberVnis::MemberVni::Multicast::has_data() const
{
    return multicast_group_min.is_set
	|| multicast_group_max.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Nve::MemberVnis::MemberVni::Multicast::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(multicast_group_min.yfilter)
	|| ydk::is_set(multicast_group_max.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Nve::MemberVnis::MemberVni::Multicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Nve::MemberVnis::MemberVni::Multicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (multicast_group_min.is_set || is_set(multicast_group_min.yfilter)) leaf_name_data.push_back(multicast_group_min.get_name_leafdata());
    if (multicast_group_max.is_set || is_set(multicast_group_max.yfilter)) leaf_name_data.push_back(multicast_group_max.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Nve::MemberVnis::MemberVni::Multicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Nve::MemberVnis::MemberVni::Multicast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Nve::MemberVnis::MemberVni::Multicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "multicast-group-min")
    {
        multicast_group_min = value;
        multicast_group_min.value_namespace = name_space;
        multicast_group_min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-group-max")
    {
        multicast_group_max = value;
        multicast_group_max.value_namespace = name_space;
        multicast_group_max.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Nve::MemberVnis::MemberVni::Multicast::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "multicast-group-min")
    {
        multicast_group_min.yfilter = yfilter;
    }
    if(value_path == "multicast-group-max")
    {
        multicast_group_max.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Nve::MemberVnis::MemberVni::Multicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "multicast-group-min" || name == "multicast-group-max")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Wanphy::Wanphy()
    :
    report_path_rdi{YType::empty, "report-path-rdi"},
    report_los{YType::empty, "report-los"},
    report_path_lcd{YType::empty, "report-path-lcd"},
    report_path_fe_plm{YType::empty, "report-path-fe-plm"},
    lan_mode{YType::enumeration, "lan-mode"},
    report_path_plm{YType::empty, "report-path-plm"},
    report_path_fe_ais{YType::empty, "report-path-fe-ais"},
    report_path_ais{YType::empty, "report-path-ais"},
    report_line_ais{YType::empty, "report-line-ais"},
    report_lof{YType::empty, "report-lof"},
    report_lop{YType::empty, "report-lop"},
    report_rdi{YType::empty, "report-rdi"},
    report_sd_ber{YType::empty, "report-sd-ber"},
    threshold_sd_ber{YType::uint32, "threshold-sd-ber"},
    report_sf_ber{YType::empty, "report-sf-ber"},
    threshold_sf_ber{YType::uint32, "threshold-sf-ber"},
    wan_mode{YType::enumeration, "wan-mode"}
{

    yang_name = "wanphy"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Wanphy::~Wanphy()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Wanphy::has_data() const
{
    return report_path_rdi.is_set
	|| report_los.is_set
	|| report_path_lcd.is_set
	|| report_path_fe_plm.is_set
	|| lan_mode.is_set
	|| report_path_plm.is_set
	|| report_path_fe_ais.is_set
	|| report_path_ais.is_set
	|| report_line_ais.is_set
	|| report_lof.is_set
	|| report_lop.is_set
	|| report_rdi.is_set
	|| report_sd_ber.is_set
	|| threshold_sd_ber.is_set
	|| report_sf_ber.is_set
	|| threshold_sf_ber.is_set
	|| wan_mode.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Wanphy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(report_path_rdi.yfilter)
	|| ydk::is_set(report_los.yfilter)
	|| ydk::is_set(report_path_lcd.yfilter)
	|| ydk::is_set(report_path_fe_plm.yfilter)
	|| ydk::is_set(lan_mode.yfilter)
	|| ydk::is_set(report_path_plm.yfilter)
	|| ydk::is_set(report_path_fe_ais.yfilter)
	|| ydk::is_set(report_path_ais.yfilter)
	|| ydk::is_set(report_line_ais.yfilter)
	|| ydk::is_set(report_lof.yfilter)
	|| ydk::is_set(report_lop.yfilter)
	|| ydk::is_set(report_rdi.yfilter)
	|| ydk::is_set(report_sd_ber.yfilter)
	|| ydk::is_set(threshold_sd_ber.yfilter)
	|| ydk::is_set(report_sf_ber.yfilter)
	|| ydk::is_set(threshold_sf_ber.yfilter)
	|| ydk::is_set(wan_mode.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Wanphy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-wanphy-ui-cfg:wanphy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Wanphy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (report_path_rdi.is_set || is_set(report_path_rdi.yfilter)) leaf_name_data.push_back(report_path_rdi.get_name_leafdata());
    if (report_los.is_set || is_set(report_los.yfilter)) leaf_name_data.push_back(report_los.get_name_leafdata());
    if (report_path_lcd.is_set || is_set(report_path_lcd.yfilter)) leaf_name_data.push_back(report_path_lcd.get_name_leafdata());
    if (report_path_fe_plm.is_set || is_set(report_path_fe_plm.yfilter)) leaf_name_data.push_back(report_path_fe_plm.get_name_leafdata());
    if (lan_mode.is_set || is_set(lan_mode.yfilter)) leaf_name_data.push_back(lan_mode.get_name_leafdata());
    if (report_path_plm.is_set || is_set(report_path_plm.yfilter)) leaf_name_data.push_back(report_path_plm.get_name_leafdata());
    if (report_path_fe_ais.is_set || is_set(report_path_fe_ais.yfilter)) leaf_name_data.push_back(report_path_fe_ais.get_name_leafdata());
    if (report_path_ais.is_set || is_set(report_path_ais.yfilter)) leaf_name_data.push_back(report_path_ais.get_name_leafdata());
    if (report_line_ais.is_set || is_set(report_line_ais.yfilter)) leaf_name_data.push_back(report_line_ais.get_name_leafdata());
    if (report_lof.is_set || is_set(report_lof.yfilter)) leaf_name_data.push_back(report_lof.get_name_leafdata());
    if (report_lop.is_set || is_set(report_lop.yfilter)) leaf_name_data.push_back(report_lop.get_name_leafdata());
    if (report_rdi.is_set || is_set(report_rdi.yfilter)) leaf_name_data.push_back(report_rdi.get_name_leafdata());
    if (report_sd_ber.is_set || is_set(report_sd_ber.yfilter)) leaf_name_data.push_back(report_sd_ber.get_name_leafdata());
    if (threshold_sd_ber.is_set || is_set(threshold_sd_ber.yfilter)) leaf_name_data.push_back(threshold_sd_ber.get_name_leafdata());
    if (report_sf_ber.is_set || is_set(report_sf_ber.yfilter)) leaf_name_data.push_back(report_sf_ber.get_name_leafdata());
    if (threshold_sf_ber.is_set || is_set(threshold_sf_ber.yfilter)) leaf_name_data.push_back(threshold_sf_ber.get_name_leafdata());
    if (wan_mode.is_set || is_set(wan_mode.yfilter)) leaf_name_data.push_back(wan_mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Wanphy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Wanphy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Wanphy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "report-path-rdi")
    {
        report_path_rdi = value;
        report_path_rdi.value_namespace = name_space;
        report_path_rdi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "report-los")
    {
        report_los = value;
        report_los.value_namespace = name_space;
        report_los.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "report-path-lcd")
    {
        report_path_lcd = value;
        report_path_lcd.value_namespace = name_space;
        report_path_lcd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "report-path-fe-plm")
    {
        report_path_fe_plm = value;
        report_path_fe_plm.value_namespace = name_space;
        report_path_fe_plm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lan-mode")
    {
        lan_mode = value;
        lan_mode.value_namespace = name_space;
        lan_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "report-path-plm")
    {
        report_path_plm = value;
        report_path_plm.value_namespace = name_space;
        report_path_plm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "report-path-fe-ais")
    {
        report_path_fe_ais = value;
        report_path_fe_ais.value_namespace = name_space;
        report_path_fe_ais.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "report-path-ais")
    {
        report_path_ais = value;
        report_path_ais.value_namespace = name_space;
        report_path_ais.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "report-line-ais")
    {
        report_line_ais = value;
        report_line_ais.value_namespace = name_space;
        report_line_ais.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "report-lof")
    {
        report_lof = value;
        report_lof.value_namespace = name_space;
        report_lof.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "report-lop")
    {
        report_lop = value;
        report_lop.value_namespace = name_space;
        report_lop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "report-rdi")
    {
        report_rdi = value;
        report_rdi.value_namespace = name_space;
        report_rdi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "report-sd-ber")
    {
        report_sd_ber = value;
        report_sd_ber.value_namespace = name_space;
        report_sd_ber.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-sd-ber")
    {
        threshold_sd_ber = value;
        threshold_sd_ber.value_namespace = name_space;
        threshold_sd_ber.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "report-sf-ber")
    {
        report_sf_ber = value;
        report_sf_ber.value_namespace = name_space;
        report_sf_ber.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-sf-ber")
    {
        threshold_sf_ber = value;
        threshold_sf_ber.value_namespace = name_space;
        threshold_sf_ber.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wan-mode")
    {
        wan_mode = value;
        wan_mode.value_namespace = name_space;
        wan_mode.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Wanphy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "report-path-rdi")
    {
        report_path_rdi.yfilter = yfilter;
    }
    if(value_path == "report-los")
    {
        report_los.yfilter = yfilter;
    }
    if(value_path == "report-path-lcd")
    {
        report_path_lcd.yfilter = yfilter;
    }
    if(value_path == "report-path-fe-plm")
    {
        report_path_fe_plm.yfilter = yfilter;
    }
    if(value_path == "lan-mode")
    {
        lan_mode.yfilter = yfilter;
    }
    if(value_path == "report-path-plm")
    {
        report_path_plm.yfilter = yfilter;
    }
    if(value_path == "report-path-fe-ais")
    {
        report_path_fe_ais.yfilter = yfilter;
    }
    if(value_path == "report-path-ais")
    {
        report_path_ais.yfilter = yfilter;
    }
    if(value_path == "report-line-ais")
    {
        report_line_ais.yfilter = yfilter;
    }
    if(value_path == "report-lof")
    {
        report_lof.yfilter = yfilter;
    }
    if(value_path == "report-lop")
    {
        report_lop.yfilter = yfilter;
    }
    if(value_path == "report-rdi")
    {
        report_rdi.yfilter = yfilter;
    }
    if(value_path == "report-sd-ber")
    {
        report_sd_ber.yfilter = yfilter;
    }
    if(value_path == "threshold-sd-ber")
    {
        threshold_sd_ber.yfilter = yfilter;
    }
    if(value_path == "report-sf-ber")
    {
        report_sf_ber.yfilter = yfilter;
    }
    if(value_path == "threshold-sf-ber")
    {
        threshold_sf_ber.yfilter = yfilter;
    }
    if(value_path == "wan-mode")
    {
        wan_mode.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Wanphy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "report-path-rdi" || name == "report-los" || name == "report-path-lcd" || name == "report-path-fe-plm" || name == "lan-mode" || name == "report-path-plm" || name == "report-path-fe-ais" || name == "report-path-ais" || name == "report-line-ais" || name == "report-lof" || name == "report-lop" || name == "report-rdi" || name == "report-sd-ber" || name == "threshold-sd-ber" || name == "report-sf-ber" || name == "threshold-sf-ber" || name == "wan-mode")
        return true;
    return false;
}


}
}

