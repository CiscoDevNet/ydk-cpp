
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ifmgr_cfg_3.hpp"
#include "Cisco_IOS_XR_ifmgr_cfg_4.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ifmgr_cfg {

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

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secyif::Minute15Secyif()
    :
    minute15secyif_reports(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secyif::Minute15SecyifReports>())
	,minute15secyif_thresholds(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secyif::Minute15SecyifThresholds>())
{
    minute15secyif_reports->parent = this;
    minute15secyif_thresholds->parent = this;

    yang_name = "minute15secyif"; yang_parent_name = "minute15"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secyif::~Minute15Secyif()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secyif::has_data() const
{
    return (minute15secyif_reports !=  nullptr && minute15secyif_reports->has_data())
	|| (minute15secyif_thresholds !=  nullptr && minute15secyif_thresholds->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secyif::has_operation() const
{
    return is_set(yfilter)
	|| (minute15secyif_reports !=  nullptr && minute15secyif_reports->has_operation())
	|| (minute15secyif_thresholds !=  nullptr && minute15secyif_thresholds->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secyif::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15secyif";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secyif::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secyif::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "minute15secyif-reports")
    {
        if(minute15secyif_reports == nullptr)
        {
            minute15secyif_reports = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secyif::Minute15SecyifReports>();
        }
        return minute15secyif_reports;
    }

    if(child_yang_name == "minute15secyif-thresholds")
    {
        if(minute15secyif_thresholds == nullptr)
        {
            minute15secyif_thresholds = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secyif::Minute15SecyifThresholds>();
        }
        return minute15secyif_thresholds;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secyif::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(minute15secyif_reports != nullptr)
    {
        children["minute15secyif-reports"] = minute15secyif_reports;
    }

    if(minute15secyif_thresholds != nullptr)
    {
        children["minute15secyif-thresholds"] = minute15secyif_thresholds;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secyif::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secyif::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secyif::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minute15secyif-reports" || name == "minute15secyif-thresholds")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secyif::Minute15SecyifReports::Minute15SecyifReports()
{

    yang_name = "minute15secyif-reports"; yang_parent_name = "minute15secyif"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secyif::Minute15SecyifReports::~Minute15SecyifReports()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secyif::Minute15SecyifReports::has_data() const
{
    for (std::size_t index=0; index<minute15secyif_report.size(); index++)
    {
        if(minute15secyif_report[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secyif::Minute15SecyifReports::has_operation() const
{
    for (std::size_t index=0; index<minute15secyif_report.size(); index++)
    {
        if(minute15secyif_report[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secyif::Minute15SecyifReports::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15secyif-reports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secyif::Minute15SecyifReports::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secyif::Minute15SecyifReports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "minute15secyif-report")
    {
        for(auto const & c : minute15secyif_report)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secyif::Minute15SecyifReports::Minute15SecyifReport>();
        c->parent = this;
        minute15secyif_report.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secyif::Minute15SecyifReports::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : minute15secyif_report)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secyif::Minute15SecyifReports::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secyif::Minute15SecyifReports::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secyif::Minute15SecyifReports::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minute15secyif-report")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secyif::Minute15SecyifReports::Minute15SecyifReport::Minute15SecyifReport()
    :
    secyif_report{YType::enumeration, "secyif-report"},
    enable{YType::enumeration, "enable"}
{

    yang_name = "minute15secyif-report"; yang_parent_name = "minute15secyif-reports"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secyif::Minute15SecyifReports::Minute15SecyifReport::~Minute15SecyifReport()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secyif::Minute15SecyifReports::Minute15SecyifReport::has_data() const
{
    return secyif_report.is_set
	|| enable.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secyif::Minute15SecyifReports::Minute15SecyifReport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(secyif_report.yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secyif::Minute15SecyifReports::Minute15SecyifReport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15secyif-report" <<"[secyif-report='" <<secyif_report <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secyif::Minute15SecyifReports::Minute15SecyifReport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (secyif_report.is_set || is_set(secyif_report.yfilter)) leaf_name_data.push_back(secyif_report.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secyif::Minute15SecyifReports::Minute15SecyifReport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secyif::Minute15SecyifReports::Minute15SecyifReport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secyif::Minute15SecyifReports::Minute15SecyifReport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "secyif-report")
    {
        secyif_report = value;
        secyif_report.value_namespace = name_space;
        secyif_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secyif::Minute15SecyifReports::Minute15SecyifReport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "secyif-report")
    {
        secyif_report.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secyif::Minute15SecyifReports::Minute15SecyifReport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "secyif-report" || name == "enable")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secyif::Minute15SecyifThresholds::Minute15SecyifThresholds()
{

    yang_name = "minute15secyif-thresholds"; yang_parent_name = "minute15secyif"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secyif::Minute15SecyifThresholds::~Minute15SecyifThresholds()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secyif::Minute15SecyifThresholds::has_data() const
{
    for (std::size_t index=0; index<minute15secyif_threshold.size(); index++)
    {
        if(minute15secyif_threshold[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secyif::Minute15SecyifThresholds::has_operation() const
{
    for (std::size_t index=0; index<minute15secyif_threshold.size(); index++)
    {
        if(minute15secyif_threshold[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secyif::Minute15SecyifThresholds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15secyif-thresholds";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secyif::Minute15SecyifThresholds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secyif::Minute15SecyifThresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "minute15secyif-threshold")
    {
        for(auto const & c : minute15secyif_threshold)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secyif::Minute15SecyifThresholds::Minute15SecyifThreshold>();
        c->parent = this;
        minute15secyif_threshold.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secyif::Minute15SecyifThresholds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : minute15secyif_threshold)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secyif::Minute15SecyifThresholds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secyif::Minute15SecyifThresholds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secyif::Minute15SecyifThresholds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minute15secyif-threshold")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secyif::Minute15SecyifThresholds::Minute15SecyifThreshold::Minute15SecyifThreshold()
    :
    secyif_threshold{YType::enumeration, "secyif-threshold"},
    secyif_threshold_value{YType::int32, "secyif-threshold-value"}
{

    yang_name = "minute15secyif-threshold"; yang_parent_name = "minute15secyif-thresholds"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secyif::Minute15SecyifThresholds::Minute15SecyifThreshold::~Minute15SecyifThreshold()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secyif::Minute15SecyifThresholds::Minute15SecyifThreshold::has_data() const
{
    return secyif_threshold.is_set
	|| secyif_threshold_value.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secyif::Minute15SecyifThresholds::Minute15SecyifThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(secyif_threshold.yfilter)
	|| ydk::is_set(secyif_threshold_value.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secyif::Minute15SecyifThresholds::Minute15SecyifThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15secyif-threshold" <<"[secyif-threshold='" <<secyif_threshold <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secyif::Minute15SecyifThresholds::Minute15SecyifThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (secyif_threshold.is_set || is_set(secyif_threshold.yfilter)) leaf_name_data.push_back(secyif_threshold.get_name_leafdata());
    if (secyif_threshold_value.is_set || is_set(secyif_threshold_value.yfilter)) leaf_name_data.push_back(secyif_threshold_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secyif::Minute15SecyifThresholds::Minute15SecyifThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secyif::Minute15SecyifThresholds::Minute15SecyifThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secyif::Minute15SecyifThresholds::Minute15SecyifThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "secyif-threshold")
    {
        secyif_threshold = value;
        secyif_threshold.value_namespace = name_space;
        secyif_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secyif-threshold-value")
    {
        secyif_threshold_value = value;
        secyif_threshold_value.value_namespace = name_space;
        secyif_threshold_value.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secyif::Minute15SecyifThresholds::Minute15SecyifThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "secyif-threshold")
    {
        secyif_threshold.yfilter = yfilter;
    }
    if(value_path == "secyif-threshold-value")
    {
        secyif_threshold_value.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secyif::Minute15SecyifThresholds::Minute15SecyifThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "secyif-threshold" || name == "secyif-threshold-value")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secyrx::Minute15Secyrx()
    :
    minute15secyrx_reports(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secyrx::Minute15SecyrxReports>())
	,minute15secyrx_thresholds(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secyrx::Minute15SecyrxThresholds>())
{
    minute15secyrx_reports->parent = this;
    minute15secyrx_thresholds->parent = this;

    yang_name = "minute15secyrx"; yang_parent_name = "minute15"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secyrx::~Minute15Secyrx()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secyrx::has_data() const
{
    return (minute15secyrx_reports !=  nullptr && minute15secyrx_reports->has_data())
	|| (minute15secyrx_thresholds !=  nullptr && minute15secyrx_thresholds->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secyrx::has_operation() const
{
    return is_set(yfilter)
	|| (minute15secyrx_reports !=  nullptr && minute15secyrx_reports->has_operation())
	|| (minute15secyrx_thresholds !=  nullptr && minute15secyrx_thresholds->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secyrx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15secyrx";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secyrx::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secyrx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "minute15secyrx-reports")
    {
        if(minute15secyrx_reports == nullptr)
        {
            minute15secyrx_reports = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secyrx::Minute15SecyrxReports>();
        }
        return minute15secyrx_reports;
    }

    if(child_yang_name == "minute15secyrx-thresholds")
    {
        if(minute15secyrx_thresholds == nullptr)
        {
            minute15secyrx_thresholds = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secyrx::Minute15SecyrxThresholds>();
        }
        return minute15secyrx_thresholds;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secyrx::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(minute15secyrx_reports != nullptr)
    {
        children["minute15secyrx-reports"] = minute15secyrx_reports;
    }

    if(minute15secyrx_thresholds != nullptr)
    {
        children["minute15secyrx-thresholds"] = minute15secyrx_thresholds;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secyrx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secyrx::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secyrx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minute15secyrx-reports" || name == "minute15secyrx-thresholds")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secyrx::Minute15SecyrxReports::Minute15SecyrxReports()
{

    yang_name = "minute15secyrx-reports"; yang_parent_name = "minute15secyrx"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secyrx::Minute15SecyrxReports::~Minute15SecyrxReports()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secyrx::Minute15SecyrxReports::has_data() const
{
    for (std::size_t index=0; index<minute15secyrx_report.size(); index++)
    {
        if(minute15secyrx_report[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secyrx::Minute15SecyrxReports::has_operation() const
{
    for (std::size_t index=0; index<minute15secyrx_report.size(); index++)
    {
        if(minute15secyrx_report[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secyrx::Minute15SecyrxReports::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15secyrx-reports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secyrx::Minute15SecyrxReports::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secyrx::Minute15SecyrxReports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "minute15secyrx-report")
    {
        for(auto const & c : minute15secyrx_report)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secyrx::Minute15SecyrxReports::Minute15SecyrxReport>();
        c->parent = this;
        minute15secyrx_report.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secyrx::Minute15SecyrxReports::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : minute15secyrx_report)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secyrx::Minute15SecyrxReports::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secyrx::Minute15SecyrxReports::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secyrx::Minute15SecyrxReports::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minute15secyrx-report")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secyrx::Minute15SecyrxReports::Minute15SecyrxReport::Minute15SecyrxReport()
    :
    secyrx_report{YType::enumeration, "secyrx-report"},
    enable{YType::enumeration, "enable"}
{

    yang_name = "minute15secyrx-report"; yang_parent_name = "minute15secyrx-reports"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secyrx::Minute15SecyrxReports::Minute15SecyrxReport::~Minute15SecyrxReport()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secyrx::Minute15SecyrxReports::Minute15SecyrxReport::has_data() const
{
    return secyrx_report.is_set
	|| enable.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secyrx::Minute15SecyrxReports::Minute15SecyrxReport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(secyrx_report.yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secyrx::Minute15SecyrxReports::Minute15SecyrxReport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15secyrx-report" <<"[secyrx-report='" <<secyrx_report <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secyrx::Minute15SecyrxReports::Minute15SecyrxReport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (secyrx_report.is_set || is_set(secyrx_report.yfilter)) leaf_name_data.push_back(secyrx_report.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secyrx::Minute15SecyrxReports::Minute15SecyrxReport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secyrx::Minute15SecyrxReports::Minute15SecyrxReport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secyrx::Minute15SecyrxReports::Minute15SecyrxReport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "secyrx-report")
    {
        secyrx_report = value;
        secyrx_report.value_namespace = name_space;
        secyrx_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secyrx::Minute15SecyrxReports::Minute15SecyrxReport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "secyrx-report")
    {
        secyrx_report.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secyrx::Minute15SecyrxReports::Minute15SecyrxReport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "secyrx-report" || name == "enable")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secyrx::Minute15SecyrxThresholds::Minute15SecyrxThresholds()
{

    yang_name = "minute15secyrx-thresholds"; yang_parent_name = "minute15secyrx"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secyrx::Minute15SecyrxThresholds::~Minute15SecyrxThresholds()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secyrx::Minute15SecyrxThresholds::has_data() const
{
    for (std::size_t index=0; index<minute15secyrx_threshold.size(); index++)
    {
        if(minute15secyrx_threshold[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secyrx::Minute15SecyrxThresholds::has_operation() const
{
    for (std::size_t index=0; index<minute15secyrx_threshold.size(); index++)
    {
        if(minute15secyrx_threshold[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secyrx::Minute15SecyrxThresholds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15secyrx-thresholds";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secyrx::Minute15SecyrxThresholds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secyrx::Minute15SecyrxThresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "minute15secyrx-threshold")
    {
        for(auto const & c : minute15secyrx_threshold)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secyrx::Minute15SecyrxThresholds::Minute15SecyrxThreshold>();
        c->parent = this;
        minute15secyrx_threshold.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secyrx::Minute15SecyrxThresholds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : minute15secyrx_threshold)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secyrx::Minute15SecyrxThresholds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secyrx::Minute15SecyrxThresholds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secyrx::Minute15SecyrxThresholds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minute15secyrx-threshold")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secyrx::Minute15SecyrxThresholds::Minute15SecyrxThreshold::Minute15SecyrxThreshold()
    :
    secyrx_threshold{YType::enumeration, "secyrx-threshold"},
    secyrx_threshold_value{YType::int32, "secyrx-threshold-value"}
{

    yang_name = "minute15secyrx-threshold"; yang_parent_name = "minute15secyrx-thresholds"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secyrx::Minute15SecyrxThresholds::Minute15SecyrxThreshold::~Minute15SecyrxThreshold()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secyrx::Minute15SecyrxThresholds::Minute15SecyrxThreshold::has_data() const
{
    return secyrx_threshold.is_set
	|| secyrx_threshold_value.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secyrx::Minute15SecyrxThresholds::Minute15SecyrxThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(secyrx_threshold.yfilter)
	|| ydk::is_set(secyrx_threshold_value.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secyrx::Minute15SecyrxThresholds::Minute15SecyrxThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15secyrx-threshold" <<"[secyrx-threshold='" <<secyrx_threshold <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secyrx::Minute15SecyrxThresholds::Minute15SecyrxThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (secyrx_threshold.is_set || is_set(secyrx_threshold.yfilter)) leaf_name_data.push_back(secyrx_threshold.get_name_leafdata());
    if (secyrx_threshold_value.is_set || is_set(secyrx_threshold_value.yfilter)) leaf_name_data.push_back(secyrx_threshold_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secyrx::Minute15SecyrxThresholds::Minute15SecyrxThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secyrx::Minute15SecyrxThresholds::Minute15SecyrxThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secyrx::Minute15SecyrxThresholds::Minute15SecyrxThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "secyrx-threshold")
    {
        secyrx_threshold = value;
        secyrx_threshold.value_namespace = name_space;
        secyrx_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secyrx-threshold-value")
    {
        secyrx_threshold_value = value;
        secyrx_threshold_value.value_namespace = name_space;
        secyrx_threshold_value.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secyrx::Minute15SecyrxThresholds::Minute15SecyrxThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "secyrx-threshold")
    {
        secyrx_threshold.yfilter = yfilter;
    }
    if(value_path == "secyrx-threshold-value")
    {
        secyrx_threshold_value.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secyrx::Minute15SecyrxThresholds::Minute15SecyrxThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "secyrx-threshold" || name == "secyrx-threshold-value")
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

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp()
    :
    minute15_gfp(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_>())
{
    minute15_gfp->parent = this;

    yang_name = "minute15-gfp"; yang_parent_name = "performance-management"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::~Minute15Gfp()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::has_data() const
{
    return (minute15_gfp !=  nullptr && minute15_gfp->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::has_operation() const
{
    return is_set(yfilter)
	|| (minute15_gfp !=  nullptr && minute15_gfp->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15-gfp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "minute15-gfp")
    {
        if(minute15_gfp == nullptr)
        {
            minute15_gfp = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_>();
        }
        return minute15_gfp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(minute15_gfp != nullptr)
    {
        children["minute15-gfp"] = minute15_gfp;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minute15-gfp")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15Gfp_()
    :
    minute15_gfp_reports(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpReports>())
	,minute15_gfp_thresholds(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpThresholds>())
{
    minute15_gfp_reports->parent = this;
    minute15_gfp_thresholds->parent = this;

    yang_name = "minute15-gfp"; yang_parent_name = "minute15-gfp"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::~Minute15Gfp_()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::has_data() const
{
    return (minute15_gfp_reports !=  nullptr && minute15_gfp_reports->has_data())
	|| (minute15_gfp_thresholds !=  nullptr && minute15_gfp_thresholds->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::has_operation() const
{
    return is_set(yfilter)
	|| (minute15_gfp_reports !=  nullptr && minute15_gfp_reports->has_operation())
	|| (minute15_gfp_thresholds !=  nullptr && minute15_gfp_thresholds->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15-gfp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "minute15-gfp-reports")
    {
        if(minute15_gfp_reports == nullptr)
        {
            minute15_gfp_reports = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpReports>();
        }
        return minute15_gfp_reports;
    }

    if(child_yang_name == "minute15-gfp-thresholds")
    {
        if(minute15_gfp_thresholds == nullptr)
        {
            minute15_gfp_thresholds = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpThresholds>();
        }
        return minute15_gfp_thresholds;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(minute15_gfp_reports != nullptr)
    {
        children["minute15-gfp-reports"] = minute15_gfp_reports;
    }

    if(minute15_gfp_thresholds != nullptr)
    {
        children["minute15-gfp-thresholds"] = minute15_gfp_thresholds;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minute15-gfp-reports" || name == "minute15-gfp-thresholds")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpReports::Minute15GfpReports()
{

    yang_name = "minute15-gfp-reports"; yang_parent_name = "minute15-gfp"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpReports::~Minute15GfpReports()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpReports::has_data() const
{
    for (std::size_t index=0; index<minute15_gfp_report.size(); index++)
    {
        if(minute15_gfp_report[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpReports::has_operation() const
{
    for (std::size_t index=0; index<minute15_gfp_report.size(); index++)
    {
        if(minute15_gfp_report[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpReports::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15-gfp-reports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpReports::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpReports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "minute15-gfp-report")
    {
        for(auto const & c : minute15_gfp_report)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpReports::Minute15GfpReport>();
        c->parent = this;
        minute15_gfp_report.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpReports::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : minute15_gfp_report)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpReports::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpReports::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpReports::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minute15-gfp-report")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpReports::Minute15GfpReport::Minute15GfpReport()
    :
    gfp_report{YType::enumeration, "gfp-report"}
{

    yang_name = "minute15-gfp-report"; yang_parent_name = "minute15-gfp-reports"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpReports::Minute15GfpReport::~Minute15GfpReport()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpReports::Minute15GfpReport::has_data() const
{
    return gfp_report.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpReports::Minute15GfpReport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(gfp_report.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpReports::Minute15GfpReport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15-gfp-report" <<"[gfp-report='" <<gfp_report <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpReports::Minute15GfpReport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (gfp_report.is_set || is_set(gfp_report.yfilter)) leaf_name_data.push_back(gfp_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpReports::Minute15GfpReport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpReports::Minute15GfpReport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpReports::Minute15GfpReport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "gfp-report")
    {
        gfp_report = value;
        gfp_report.value_namespace = name_space;
        gfp_report.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpReports::Minute15GfpReport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "gfp-report")
    {
        gfp_report.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpReports::Minute15GfpReport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "gfp-report")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpThresholds::Minute15GfpThresholds()
{

    yang_name = "minute15-gfp-thresholds"; yang_parent_name = "minute15-gfp"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpThresholds::~Minute15GfpThresholds()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpThresholds::has_data() const
{
    for (std::size_t index=0; index<minute15_gfp_threshold.size(); index++)
    {
        if(minute15_gfp_threshold[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpThresholds::has_operation() const
{
    for (std::size_t index=0; index<minute15_gfp_threshold.size(); index++)
    {
        if(minute15_gfp_threshold[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpThresholds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15-gfp-thresholds";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpThresholds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpThresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "minute15-gfp-threshold")
    {
        for(auto const & c : minute15_gfp_threshold)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpThresholds::Minute15GfpThreshold>();
        c->parent = this;
        minute15_gfp_threshold.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpThresholds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : minute15_gfp_threshold)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpThresholds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpThresholds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpThresholds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minute15-gfp-threshold")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpThresholds::Minute15GfpThreshold::Minute15GfpThreshold()
    :
    gfp_threshold{YType::enumeration, "gfp-threshold"},
    gfp_threshold_value{YType::int32, "gfp-threshold-value"}
{

    yang_name = "minute15-gfp-threshold"; yang_parent_name = "minute15-gfp-thresholds"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpThresholds::Minute15GfpThreshold::~Minute15GfpThreshold()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpThresholds::Minute15GfpThreshold::has_data() const
{
    return gfp_threshold.is_set
	|| gfp_threshold_value.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpThresholds::Minute15GfpThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(gfp_threshold.yfilter)
	|| ydk::is_set(gfp_threshold_value.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpThresholds::Minute15GfpThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15-gfp-threshold" <<"[gfp-threshold='" <<gfp_threshold <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpThresholds::Minute15GfpThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (gfp_threshold.is_set || is_set(gfp_threshold.yfilter)) leaf_name_data.push_back(gfp_threshold.get_name_leafdata());
    if (gfp_threshold_value.is_set || is_set(gfp_threshold_value.yfilter)) leaf_name_data.push_back(gfp_threshold_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpThresholds::Minute15GfpThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpThresholds::Minute15GfpThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpThresholds::Minute15GfpThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "gfp-threshold")
    {
        gfp_threshold = value;
        gfp_threshold.value_namespace = name_space;
        gfp_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gfp-threshold-value")
    {
        gfp_threshold_value = value;
        gfp_threshold_value.value_namespace = name_space;
        gfp_threshold_value.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpThresholds::Minute15GfpThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "gfp-threshold")
    {
        gfp_threshold.yfilter = yfilter;
    }
    if(value_path == "gfp-threshold-value")
    {
        gfp_threshold_value.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpThresholds::Minute15GfpThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "gfp-threshold" || name == "gfp-threshold-value")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcms()
{

    yang_name = "minute15otn-tcms"; yang_parent_name = "performance-management"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::~Minute15OtnTcms()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::has_data() const
{
    for (std::size_t index=0; index<minute15otn_tcm.size(); index++)
    {
        if(minute15otn_tcm[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::has_operation() const
{
    for (std::size_t index=0; index<minute15otn_tcm.size(); index++)
    {
        if(minute15otn_tcm[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15otn-tcms";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "minute15otn-tcm")
    {
        for(auto const & c : minute15otn_tcm)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm>();
        c->parent = this;
        minute15otn_tcm.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : minute15otn_tcm)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minute15otn-tcm")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::Minute15OtnTcm()
    :
    tcm_number{YType::int32, "tcm-number"}
    	,
    min15_otn_tcm_threshes(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::Min15OtnTcmThreshes>())
	,minute15otn_tcm_reports(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::Minute15OtnTcmReports>())
{
    min15_otn_tcm_threshes->parent = this;
    minute15otn_tcm_reports->parent = this;

    yang_name = "minute15otn-tcm"; yang_parent_name = "minute15otn-tcms"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::~Minute15OtnTcm()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::has_data() const
{
    return tcm_number.is_set
	|| (min15_otn_tcm_threshes !=  nullptr && min15_otn_tcm_threshes->has_data())
	|| (minute15otn_tcm_reports !=  nullptr && minute15otn_tcm_reports->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tcm_number.yfilter)
	|| (min15_otn_tcm_threshes !=  nullptr && min15_otn_tcm_threshes->has_operation())
	|| (minute15otn_tcm_reports !=  nullptr && minute15otn_tcm_reports->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15otn-tcm" <<"[tcm-number='" <<tcm_number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tcm_number.is_set || is_set(tcm_number.yfilter)) leaf_name_data.push_back(tcm_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "min15-otn-tcm-threshes")
    {
        if(min15_otn_tcm_threshes == nullptr)
        {
            min15_otn_tcm_threshes = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::Min15OtnTcmThreshes>();
        }
        return min15_otn_tcm_threshes;
    }

    if(child_yang_name == "minute15otn-tcm-reports")
    {
        if(minute15otn_tcm_reports == nullptr)
        {
            minute15otn_tcm_reports = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::Minute15OtnTcmReports>();
        }
        return minute15otn_tcm_reports;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(min15_otn_tcm_threshes != nullptr)
    {
        children["min15-otn-tcm-threshes"] = min15_otn_tcm_threshes;
    }

    if(minute15otn_tcm_reports != nullptr)
    {
        children["minute15otn-tcm-reports"] = minute15otn_tcm_reports;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tcm-number")
    {
        tcm_number = value;
        tcm_number.value_namespace = name_space;
        tcm_number.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tcm-number")
    {
        tcm_number.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "min15-otn-tcm-threshes" || name == "minute15otn-tcm-reports" || name == "tcm-number")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::Min15OtnTcmThreshes::Min15OtnTcmThreshes()
{

    yang_name = "min15-otn-tcm-threshes"; yang_parent_name = "minute15otn-tcm"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::Min15OtnTcmThreshes::~Min15OtnTcmThreshes()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::Min15OtnTcmThreshes::has_data() const
{
    for (std::size_t index=0; index<min15_otn_tcm_thresh.size(); index++)
    {
        if(min15_otn_tcm_thresh[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::Min15OtnTcmThreshes::has_operation() const
{
    for (std::size_t index=0; index<min15_otn_tcm_thresh.size(); index++)
    {
        if(min15_otn_tcm_thresh[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::Min15OtnTcmThreshes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "min15-otn-tcm-threshes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::Min15OtnTcmThreshes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::Min15OtnTcmThreshes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "min15-otn-tcm-thresh")
    {
        for(auto const & c : min15_otn_tcm_thresh)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::Min15OtnTcmThreshes::Min15OtnTcmThresh>();
        c->parent = this;
        min15_otn_tcm_thresh.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::Min15OtnTcmThreshes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : min15_otn_tcm_thresh)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::Min15OtnTcmThreshes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::Min15OtnTcmThreshes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::Min15OtnTcmThreshes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "min15-otn-tcm-thresh")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::Min15OtnTcmThreshes::Min15OtnTcmThresh::Min15OtnTcmThresh()
    :
    otn_threshold{YType::enumeration, "otn-threshold"},
    otn_threshold_value{YType::int32, "otn-threshold-value"}
{

    yang_name = "min15-otn-tcm-thresh"; yang_parent_name = "min15-otn-tcm-threshes"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::Min15OtnTcmThreshes::Min15OtnTcmThresh::~Min15OtnTcmThresh()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::Min15OtnTcmThreshes::Min15OtnTcmThresh::has_data() const
{
    return otn_threshold.is_set
	|| otn_threshold_value.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::Min15OtnTcmThreshes::Min15OtnTcmThresh::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(otn_threshold.yfilter)
	|| ydk::is_set(otn_threshold_value.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::Min15OtnTcmThreshes::Min15OtnTcmThresh::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "min15-otn-tcm-thresh" <<"[otn-threshold='" <<otn_threshold <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::Min15OtnTcmThreshes::Min15OtnTcmThresh::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (otn_threshold.is_set || is_set(otn_threshold.yfilter)) leaf_name_data.push_back(otn_threshold.get_name_leafdata());
    if (otn_threshold_value.is_set || is_set(otn_threshold_value.yfilter)) leaf_name_data.push_back(otn_threshold_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::Min15OtnTcmThreshes::Min15OtnTcmThresh::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::Min15OtnTcmThreshes::Min15OtnTcmThresh::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::Min15OtnTcmThreshes::Min15OtnTcmThresh::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::Min15OtnTcmThreshes::Min15OtnTcmThresh::set_filter(const std::string & value_path, YFilter yfilter)
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

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::Min15OtnTcmThreshes::Min15OtnTcmThresh::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "otn-threshold" || name == "otn-threshold-value")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::Minute15OtnTcmReports::Minute15OtnTcmReports()
{

    yang_name = "minute15otn-tcm-reports"; yang_parent_name = "minute15otn-tcm"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::Minute15OtnTcmReports::~Minute15OtnTcmReports()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::Minute15OtnTcmReports::has_data() const
{
    for (std::size_t index=0; index<minute15otn_tcm_report.size(); index++)
    {
        if(minute15otn_tcm_report[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::Minute15OtnTcmReports::has_operation() const
{
    for (std::size_t index=0; index<minute15otn_tcm_report.size(); index++)
    {
        if(minute15otn_tcm_report[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::Minute15OtnTcmReports::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15otn-tcm-reports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::Minute15OtnTcmReports::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::Minute15OtnTcmReports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "minute15otn-tcm-report")
    {
        for(auto const & c : minute15otn_tcm_report)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::Minute15OtnTcmReports::Minute15OtnTcmReport>();
        c->parent = this;
        minute15otn_tcm_report.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::Minute15OtnTcmReports::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : minute15otn_tcm_report)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::Minute15OtnTcmReports::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::Minute15OtnTcmReports::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::Minute15OtnTcmReports::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minute15otn-tcm-report")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::Minute15OtnTcmReports::Minute15OtnTcmReport::Minute15OtnTcmReport()
    :
    otn_report{YType::enumeration, "otn-report"},
    enable{YType::enumeration, "enable"}
{

    yang_name = "minute15otn-tcm-report"; yang_parent_name = "minute15otn-tcm-reports"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::Minute15OtnTcmReports::Minute15OtnTcmReport::~Minute15OtnTcmReport()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::Minute15OtnTcmReports::Minute15OtnTcmReport::has_data() const
{
    return otn_report.is_set
	|| enable.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::Minute15OtnTcmReports::Minute15OtnTcmReport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(otn_report.yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::Minute15OtnTcmReports::Minute15OtnTcmReport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15otn-tcm-report" <<"[otn-report='" <<otn_report <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::Minute15OtnTcmReports::Minute15OtnTcmReport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (otn_report.is_set || is_set(otn_report.yfilter)) leaf_name_data.push_back(otn_report.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::Minute15OtnTcmReports::Minute15OtnTcmReport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::Minute15OtnTcmReports::Minute15OtnTcmReport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::Minute15OtnTcmReports::Minute15OtnTcmReport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::Minute15OtnTcmReports::Minute15OtnTcmReport::set_filter(const std::string & value_path, YFilter yfilter)
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

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::Minute15OtnTcmReports::Minute15OtnTcmReport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "otn-report" || name == "enable")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15Path()
    :
    minute15otn_path(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15OtnPath>())
{
    minute15otn_path->parent = this;

    yang_name = "minute15-path"; yang_parent_name = "performance-management"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::~Minute15Path()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::has_data() const
{
    return (minute15otn_path !=  nullptr && minute15otn_path->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::has_operation() const
{
    return is_set(yfilter)
	|| (minute15otn_path !=  nullptr && minute15otn_path->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "minute15otn-path")
    {
        if(minute15otn_path == nullptr)
        {
            minute15otn_path = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15OtnPath>();
        }
        return minute15otn_path;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(minute15otn_path != nullptr)
    {
        children["minute15otn-path"] = minute15otn_path;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minute15otn-path")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15OtnPath::Minute15OtnPath()
    :
    min15_otn_path_threshes(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15OtnPath::Min15OtnPathThreshes>())
	,minute15otn_path_reports(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15OtnPath::Minute15OtnPathReports>())
{
    min15_otn_path_threshes->parent = this;
    minute15otn_path_reports->parent = this;

    yang_name = "minute15otn-path"; yang_parent_name = "minute15-path"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15OtnPath::~Minute15OtnPath()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15OtnPath::has_data() const
{
    return (min15_otn_path_threshes !=  nullptr && min15_otn_path_threshes->has_data())
	|| (minute15otn_path_reports !=  nullptr && minute15otn_path_reports->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15OtnPath::has_operation() const
{
    return is_set(yfilter)
	|| (min15_otn_path_threshes !=  nullptr && min15_otn_path_threshes->has_operation())
	|| (minute15otn_path_reports !=  nullptr && minute15otn_path_reports->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15OtnPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15otn-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15OtnPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15OtnPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "min15-otn-path-threshes")
    {
        if(min15_otn_path_threshes == nullptr)
        {
            min15_otn_path_threshes = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15OtnPath::Min15OtnPathThreshes>();
        }
        return min15_otn_path_threshes;
    }

    if(child_yang_name == "minute15otn-path-reports")
    {
        if(minute15otn_path_reports == nullptr)
        {
            minute15otn_path_reports = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15OtnPath::Minute15OtnPathReports>();
        }
        return minute15otn_path_reports;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15OtnPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(min15_otn_path_threshes != nullptr)
    {
        children["min15-otn-path-threshes"] = min15_otn_path_threshes;
    }

    if(minute15otn_path_reports != nullptr)
    {
        children["minute15otn-path-reports"] = minute15otn_path_reports;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15OtnPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15OtnPath::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15OtnPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "min15-otn-path-threshes" || name == "minute15otn-path-reports")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15OtnPath::Min15OtnPathThreshes::Min15OtnPathThreshes()
{

    yang_name = "min15-otn-path-threshes"; yang_parent_name = "minute15otn-path"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15OtnPath::Min15OtnPathThreshes::~Min15OtnPathThreshes()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15OtnPath::Min15OtnPathThreshes::has_data() const
{
    for (std::size_t index=0; index<min15_otn_path_thresh.size(); index++)
    {
        if(min15_otn_path_thresh[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15OtnPath::Min15OtnPathThreshes::has_operation() const
{
    for (std::size_t index=0; index<min15_otn_path_thresh.size(); index++)
    {
        if(min15_otn_path_thresh[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15OtnPath::Min15OtnPathThreshes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "min15-otn-path-threshes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15OtnPath::Min15OtnPathThreshes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15OtnPath::Min15OtnPathThreshes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "min15-otn-path-thresh")
    {
        for(auto const & c : min15_otn_path_thresh)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15OtnPath::Min15OtnPathThreshes::Min15OtnPathThresh>();
        c->parent = this;
        min15_otn_path_thresh.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15OtnPath::Min15OtnPathThreshes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : min15_otn_path_thresh)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15OtnPath::Min15OtnPathThreshes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15OtnPath::Min15OtnPathThreshes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15OtnPath::Min15OtnPathThreshes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "min15-otn-path-thresh")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15OtnPath::Min15OtnPathThreshes::Min15OtnPathThresh::Min15OtnPathThresh()
    :
    otn_threshold{YType::enumeration, "otn-threshold"},
    otn_threshold_value{YType::int32, "otn-threshold-value"}
{

    yang_name = "min15-otn-path-thresh"; yang_parent_name = "min15-otn-path-threshes"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15OtnPath::Min15OtnPathThreshes::Min15OtnPathThresh::~Min15OtnPathThresh()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15OtnPath::Min15OtnPathThreshes::Min15OtnPathThresh::has_data() const
{
    return otn_threshold.is_set
	|| otn_threshold_value.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15OtnPath::Min15OtnPathThreshes::Min15OtnPathThresh::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(otn_threshold.yfilter)
	|| ydk::is_set(otn_threshold_value.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15OtnPath::Min15OtnPathThreshes::Min15OtnPathThresh::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "min15-otn-path-thresh" <<"[otn-threshold='" <<otn_threshold <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15OtnPath::Min15OtnPathThreshes::Min15OtnPathThresh::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (otn_threshold.is_set || is_set(otn_threshold.yfilter)) leaf_name_data.push_back(otn_threshold.get_name_leafdata());
    if (otn_threshold_value.is_set || is_set(otn_threshold_value.yfilter)) leaf_name_data.push_back(otn_threshold_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15OtnPath::Min15OtnPathThreshes::Min15OtnPathThresh::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15OtnPath::Min15OtnPathThreshes::Min15OtnPathThresh::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15OtnPath::Min15OtnPathThreshes::Min15OtnPathThresh::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15OtnPath::Min15OtnPathThreshes::Min15OtnPathThresh::set_filter(const std::string & value_path, YFilter yfilter)
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

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15OtnPath::Min15OtnPathThreshes::Min15OtnPathThresh::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "otn-threshold" || name == "otn-threshold-value")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15OtnPath::Minute15OtnPathReports::Minute15OtnPathReports()
{

    yang_name = "minute15otn-path-reports"; yang_parent_name = "minute15otn-path"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15OtnPath::Minute15OtnPathReports::~Minute15OtnPathReports()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15OtnPath::Minute15OtnPathReports::has_data() const
{
    for (std::size_t index=0; index<minute15otn_path_report.size(); index++)
    {
        if(minute15otn_path_report[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15OtnPath::Minute15OtnPathReports::has_operation() const
{
    for (std::size_t index=0; index<minute15otn_path_report.size(); index++)
    {
        if(minute15otn_path_report[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15OtnPath::Minute15OtnPathReports::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15otn-path-reports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15OtnPath::Minute15OtnPathReports::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15OtnPath::Minute15OtnPathReports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "minute15otn-path-report")
    {
        for(auto const & c : minute15otn_path_report)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15OtnPath::Minute15OtnPathReports::Minute15OtnPathReport>();
        c->parent = this;
        minute15otn_path_report.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15OtnPath::Minute15OtnPathReports::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : minute15otn_path_report)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15OtnPath::Minute15OtnPathReports::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15OtnPath::Minute15OtnPathReports::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15OtnPath::Minute15OtnPathReports::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minute15otn-path-report")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15OtnPath::Minute15OtnPathReports::Minute15OtnPathReport::Minute15OtnPathReport()
    :
    otn_report{YType::enumeration, "otn-report"},
    enable{YType::enumeration, "enable"}
{

    yang_name = "minute15otn-path-report"; yang_parent_name = "minute15otn-path-reports"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15OtnPath::Minute15OtnPathReports::Minute15OtnPathReport::~Minute15OtnPathReport()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15OtnPath::Minute15OtnPathReports::Minute15OtnPathReport::has_data() const
{
    return otn_report.is_set
	|| enable.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15OtnPath::Minute15OtnPathReports::Minute15OtnPathReport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(otn_report.yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15OtnPath::Minute15OtnPathReports::Minute15OtnPathReport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15otn-path-report" <<"[otn-report='" <<otn_report <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15OtnPath::Minute15OtnPathReports::Minute15OtnPathReport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (otn_report.is_set || is_set(otn_report.yfilter)) leaf_name_data.push_back(otn_report.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15OtnPath::Minute15OtnPathReports::Minute15OtnPathReport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15OtnPath::Minute15OtnPathReports::Minute15OtnPathReport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15OtnPath::Minute15OtnPathReports::Minute15OtnPathReport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15OtnPath::Minute15OtnPathReports::Minute15OtnPathReport::set_filter(const std::string & value_path, YFilter yfilter)
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

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15OtnPath::Minute15OtnPathReports::Minute15OtnPathReport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "otn-report" || name == "enable")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24()
    :
    oc_hour24_ocn(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn>())
{
    oc_hour24_ocn->parent = this;

    yang_name = "oc-hour24"; yang_parent_name = "performance-management"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::~OcHour24()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::has_data() const
{
    return (oc_hour24_ocn !=  nullptr && oc_hour24_ocn->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::has_operation() const
{
    return is_set(yfilter)
	|| (oc_hour24_ocn !=  nullptr && oc_hour24_ocn->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oc-hour24";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "oc-hour24-ocn")
    {
        if(oc_hour24_ocn == nullptr)
        {
            oc_hour24_ocn = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn>();
        }
        return oc_hour24_ocn;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(oc_hour24_ocn != nullptr)
    {
        children["oc-hour24-ocn"] = oc_hour24_ocn;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "oc-hour24-ocn")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24Ocn()
    :
    oc_hour24_ocn_reports(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnReports>())
	,oc_hour24_ocn_thresholds(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnThresholds>())
{
    oc_hour24_ocn_reports->parent = this;
    oc_hour24_ocn_thresholds->parent = this;

    yang_name = "oc-hour24-ocn"; yang_parent_name = "oc-hour24"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::~OcHour24Ocn()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::has_data() const
{
    return (oc_hour24_ocn_reports !=  nullptr && oc_hour24_ocn_reports->has_data())
	|| (oc_hour24_ocn_thresholds !=  nullptr && oc_hour24_ocn_thresholds->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::has_operation() const
{
    return is_set(yfilter)
	|| (oc_hour24_ocn_reports !=  nullptr && oc_hour24_ocn_reports->has_operation())
	|| (oc_hour24_ocn_thresholds !=  nullptr && oc_hour24_ocn_thresholds->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oc-hour24-ocn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "oc-hour24-ocn-reports")
    {
        if(oc_hour24_ocn_reports == nullptr)
        {
            oc_hour24_ocn_reports = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnReports>();
        }
        return oc_hour24_ocn_reports;
    }

    if(child_yang_name == "oc-hour24-ocn-thresholds")
    {
        if(oc_hour24_ocn_thresholds == nullptr)
        {
            oc_hour24_ocn_thresholds = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnThresholds>();
        }
        return oc_hour24_ocn_thresholds;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(oc_hour24_ocn_reports != nullptr)
    {
        children["oc-hour24-ocn-reports"] = oc_hour24_ocn_reports;
    }

    if(oc_hour24_ocn_thresholds != nullptr)
    {
        children["oc-hour24-ocn-thresholds"] = oc_hour24_ocn_thresholds;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "oc-hour24-ocn-reports" || name == "oc-hour24-ocn-thresholds")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnReports::OcHour24OcnReports()
{

    yang_name = "oc-hour24-ocn-reports"; yang_parent_name = "oc-hour24-ocn"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnReports::~OcHour24OcnReports()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnReports::has_data() const
{
    for (std::size_t index=0; index<oc_hour24_ocn_report.size(); index++)
    {
        if(oc_hour24_ocn_report[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnReports::has_operation() const
{
    for (std::size_t index=0; index<oc_hour24_ocn_report.size(); index++)
    {
        if(oc_hour24_ocn_report[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnReports::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oc-hour24-ocn-reports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnReports::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnReports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "oc-hour24-ocn-report")
    {
        for(auto const & c : oc_hour24_ocn_report)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnReports::OcHour24OcnReport>();
        c->parent = this;
        oc_hour24_ocn_report.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnReports::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : oc_hour24_ocn_report)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnReports::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnReports::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnReports::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "oc-hour24-ocn-report")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnReports::OcHour24OcnReport::OcHour24OcnReport()
    :
    ocn_report{YType::enumeration, "ocn-report"},
    enable{YType::enumeration, "enable"}
{

    yang_name = "oc-hour24-ocn-report"; yang_parent_name = "oc-hour24-ocn-reports"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnReports::OcHour24OcnReport::~OcHour24OcnReport()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnReports::OcHour24OcnReport::has_data() const
{
    return ocn_report.is_set
	|| enable.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnReports::OcHour24OcnReport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ocn_report.yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnReports::OcHour24OcnReport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oc-hour24-ocn-report" <<"[ocn-report='" <<ocn_report <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnReports::OcHour24OcnReport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ocn_report.is_set || is_set(ocn_report.yfilter)) leaf_name_data.push_back(ocn_report.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnReports::OcHour24OcnReport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnReports::OcHour24OcnReport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnReports::OcHour24OcnReport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ocn-report")
    {
        ocn_report = value;
        ocn_report.value_namespace = name_space;
        ocn_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnReports::OcHour24OcnReport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ocn-report")
    {
        ocn_report.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnReports::OcHour24OcnReport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ocn-report" || name == "enable")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnThresholds::OcHour24OcnThresholds()
{

    yang_name = "oc-hour24-ocn-thresholds"; yang_parent_name = "oc-hour24-ocn"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnThresholds::~OcHour24OcnThresholds()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnThresholds::has_data() const
{
    for (std::size_t index=0; index<oc_hour24_ocn_threshold.size(); index++)
    {
        if(oc_hour24_ocn_threshold[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnThresholds::has_operation() const
{
    for (std::size_t index=0; index<oc_hour24_ocn_threshold.size(); index++)
    {
        if(oc_hour24_ocn_threshold[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnThresholds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oc-hour24-ocn-thresholds";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnThresholds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnThresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "oc-hour24-ocn-threshold")
    {
        for(auto const & c : oc_hour24_ocn_threshold)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnThresholds::OcHour24OcnThreshold>();
        c->parent = this;
        oc_hour24_ocn_threshold.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnThresholds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : oc_hour24_ocn_threshold)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnThresholds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnThresholds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnThresholds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "oc-hour24-ocn-threshold")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnThresholds::OcHour24OcnThreshold::OcHour24OcnThreshold()
    :
    ocn_threshold{YType::enumeration, "ocn-threshold"},
    ocn_threshold_value{YType::int32, "ocn-threshold-value"}
{

    yang_name = "oc-hour24-ocn-threshold"; yang_parent_name = "oc-hour24-ocn-thresholds"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnThresholds::OcHour24OcnThreshold::~OcHour24OcnThreshold()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnThresholds::OcHour24OcnThreshold::has_data() const
{
    return ocn_threshold.is_set
	|| ocn_threshold_value.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnThresholds::OcHour24OcnThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ocn_threshold.yfilter)
	|| ydk::is_set(ocn_threshold_value.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnThresholds::OcHour24OcnThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oc-hour24-ocn-threshold" <<"[ocn-threshold='" <<ocn_threshold <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnThresholds::OcHour24OcnThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ocn_threshold.is_set || is_set(ocn_threshold.yfilter)) leaf_name_data.push_back(ocn_threshold.get_name_leafdata());
    if (ocn_threshold_value.is_set || is_set(ocn_threshold_value.yfilter)) leaf_name_data.push_back(ocn_threshold_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnThresholds::OcHour24OcnThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnThresholds::OcHour24OcnThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnThresholds::OcHour24OcnThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ocn-threshold")
    {
        ocn_threshold = value;
        ocn_threshold.value_namespace = name_space;
        ocn_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ocn-threshold-value")
    {
        ocn_threshold_value = value;
        ocn_threshold_value.value_namespace = name_space;
        ocn_threshold_value.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnThresholds::OcHour24OcnThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ocn-threshold")
    {
        ocn_threshold.yfilter = yfilter;
    }
    if(value_path == "ocn-threshold-value")
    {
        ocn_threshold_value.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnThresholds::OcHour24OcnThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ocn-threshold" || name == "ocn-threshold-value")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15::OcMinute15()
    :
    oc_minute15_ocn(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15::OcMinute15Ocn>())
{
    oc_minute15_ocn->parent = this;

    yang_name = "oc-minute15"; yang_parent_name = "performance-management"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15::~OcMinute15()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15::has_data() const
{
    return (oc_minute15_ocn !=  nullptr && oc_minute15_ocn->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15::has_operation() const
{
    return is_set(yfilter)
	|| (oc_minute15_ocn !=  nullptr && oc_minute15_ocn->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oc-minute15";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "oc-minute15-ocn")
    {
        if(oc_minute15_ocn == nullptr)
        {
            oc_minute15_ocn = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15::OcMinute15Ocn>();
        }
        return oc_minute15_ocn;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(oc_minute15_ocn != nullptr)
    {
        children["oc-minute15-ocn"] = oc_minute15_ocn;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "oc-minute15-ocn")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15::OcMinute15Ocn::OcMinute15Ocn()
    :
    oc_minute15_ocn_reports(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15::OcMinute15Ocn::OcMinute15OcnReports>())
	,oc_minute15_ocn_thresholds(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15::OcMinute15Ocn::OcMinute15OcnThresholds>())
{
    oc_minute15_ocn_reports->parent = this;
    oc_minute15_ocn_thresholds->parent = this;

    yang_name = "oc-minute15-ocn"; yang_parent_name = "oc-minute15"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15::OcMinute15Ocn::~OcMinute15Ocn()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15::OcMinute15Ocn::has_data() const
{
    return (oc_minute15_ocn_reports !=  nullptr && oc_minute15_ocn_reports->has_data())
	|| (oc_minute15_ocn_thresholds !=  nullptr && oc_minute15_ocn_thresholds->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15::OcMinute15Ocn::has_operation() const
{
    return is_set(yfilter)
	|| (oc_minute15_ocn_reports !=  nullptr && oc_minute15_ocn_reports->has_operation())
	|| (oc_minute15_ocn_thresholds !=  nullptr && oc_minute15_ocn_thresholds->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15::OcMinute15Ocn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oc-minute15-ocn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15::OcMinute15Ocn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15::OcMinute15Ocn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "oc-minute15-ocn-reports")
    {
        if(oc_minute15_ocn_reports == nullptr)
        {
            oc_minute15_ocn_reports = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15::OcMinute15Ocn::OcMinute15OcnReports>();
        }
        return oc_minute15_ocn_reports;
    }

    if(child_yang_name == "oc-minute15-ocn-thresholds")
    {
        if(oc_minute15_ocn_thresholds == nullptr)
        {
            oc_minute15_ocn_thresholds = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15::OcMinute15Ocn::OcMinute15OcnThresholds>();
        }
        return oc_minute15_ocn_thresholds;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15::OcMinute15Ocn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(oc_minute15_ocn_reports != nullptr)
    {
        children["oc-minute15-ocn-reports"] = oc_minute15_ocn_reports;
    }

    if(oc_minute15_ocn_thresholds != nullptr)
    {
        children["oc-minute15-ocn-thresholds"] = oc_minute15_ocn_thresholds;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15::OcMinute15Ocn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15::OcMinute15Ocn::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15::OcMinute15Ocn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "oc-minute15-ocn-reports" || name == "oc-minute15-ocn-thresholds")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15::OcMinute15Ocn::OcMinute15OcnReports::OcMinute15OcnReports()
{

    yang_name = "oc-minute15-ocn-reports"; yang_parent_name = "oc-minute15-ocn"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15::OcMinute15Ocn::OcMinute15OcnReports::~OcMinute15OcnReports()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15::OcMinute15Ocn::OcMinute15OcnReports::has_data() const
{
    for (std::size_t index=0; index<oc_minute15_ocn_report.size(); index++)
    {
        if(oc_minute15_ocn_report[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15::OcMinute15Ocn::OcMinute15OcnReports::has_operation() const
{
    for (std::size_t index=0; index<oc_minute15_ocn_report.size(); index++)
    {
        if(oc_minute15_ocn_report[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15::OcMinute15Ocn::OcMinute15OcnReports::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oc-minute15-ocn-reports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15::OcMinute15Ocn::OcMinute15OcnReports::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15::OcMinute15Ocn::OcMinute15OcnReports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "oc-minute15-ocn-report")
    {
        for(auto const & c : oc_minute15_ocn_report)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15::OcMinute15Ocn::OcMinute15OcnReports::OcMinute15OcnReport>();
        c->parent = this;
        oc_minute15_ocn_report.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15::OcMinute15Ocn::OcMinute15OcnReports::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : oc_minute15_ocn_report)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15::OcMinute15Ocn::OcMinute15OcnReports::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15::OcMinute15Ocn::OcMinute15OcnReports::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15::OcMinute15Ocn::OcMinute15OcnReports::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "oc-minute15-ocn-report")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15::OcMinute15Ocn::OcMinute15OcnReports::OcMinute15OcnReport::OcMinute15OcnReport()
    :
    ocn_report{YType::enumeration, "ocn-report"},
    enable{YType::enumeration, "enable"}
{

    yang_name = "oc-minute15-ocn-report"; yang_parent_name = "oc-minute15-ocn-reports"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15::OcMinute15Ocn::OcMinute15OcnReports::OcMinute15OcnReport::~OcMinute15OcnReport()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15::OcMinute15Ocn::OcMinute15OcnReports::OcMinute15OcnReport::has_data() const
{
    return ocn_report.is_set
	|| enable.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15::OcMinute15Ocn::OcMinute15OcnReports::OcMinute15OcnReport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ocn_report.yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15::OcMinute15Ocn::OcMinute15OcnReports::OcMinute15OcnReport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oc-minute15-ocn-report" <<"[ocn-report='" <<ocn_report <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15::OcMinute15Ocn::OcMinute15OcnReports::OcMinute15OcnReport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ocn_report.is_set || is_set(ocn_report.yfilter)) leaf_name_data.push_back(ocn_report.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15::OcMinute15Ocn::OcMinute15OcnReports::OcMinute15OcnReport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15::OcMinute15Ocn::OcMinute15OcnReports::OcMinute15OcnReport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15::OcMinute15Ocn::OcMinute15OcnReports::OcMinute15OcnReport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ocn-report")
    {
        ocn_report = value;
        ocn_report.value_namespace = name_space;
        ocn_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15::OcMinute15Ocn::OcMinute15OcnReports::OcMinute15OcnReport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ocn-report")
    {
        ocn_report.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15::OcMinute15Ocn::OcMinute15OcnReports::OcMinute15OcnReport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ocn-report" || name == "enable")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15::OcMinute15Ocn::OcMinute15OcnThresholds::OcMinute15OcnThresholds()
{

    yang_name = "oc-minute15-ocn-thresholds"; yang_parent_name = "oc-minute15-ocn"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15::OcMinute15Ocn::OcMinute15OcnThresholds::~OcMinute15OcnThresholds()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15::OcMinute15Ocn::OcMinute15OcnThresholds::has_data() const
{
    for (std::size_t index=0; index<oc_minute15_ocn_threshold.size(); index++)
    {
        if(oc_minute15_ocn_threshold[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15::OcMinute15Ocn::OcMinute15OcnThresholds::has_operation() const
{
    for (std::size_t index=0; index<oc_minute15_ocn_threshold.size(); index++)
    {
        if(oc_minute15_ocn_threshold[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15::OcMinute15Ocn::OcMinute15OcnThresholds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oc-minute15-ocn-thresholds";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15::OcMinute15Ocn::OcMinute15OcnThresholds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15::OcMinute15Ocn::OcMinute15OcnThresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "oc-minute15-ocn-threshold")
    {
        for(auto const & c : oc_minute15_ocn_threshold)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15::OcMinute15Ocn::OcMinute15OcnThresholds::OcMinute15OcnThreshold>();
        c->parent = this;
        oc_minute15_ocn_threshold.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15::OcMinute15Ocn::OcMinute15OcnThresholds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : oc_minute15_ocn_threshold)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15::OcMinute15Ocn::OcMinute15OcnThresholds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15::OcMinute15Ocn::OcMinute15OcnThresholds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15::OcMinute15Ocn::OcMinute15OcnThresholds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "oc-minute15-ocn-threshold")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15::OcMinute15Ocn::OcMinute15OcnThresholds::OcMinute15OcnThreshold::OcMinute15OcnThreshold()
    :
    ocn_threshold{YType::enumeration, "ocn-threshold"},
    ocn_threshold_value{YType::int32, "ocn-threshold-value"}
{

    yang_name = "oc-minute15-ocn-threshold"; yang_parent_name = "oc-minute15-ocn-thresholds"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15::OcMinute15Ocn::OcMinute15OcnThresholds::OcMinute15OcnThreshold::~OcMinute15OcnThreshold()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15::OcMinute15Ocn::OcMinute15OcnThresholds::OcMinute15OcnThreshold::has_data() const
{
    return ocn_threshold.is_set
	|| ocn_threshold_value.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15::OcMinute15Ocn::OcMinute15OcnThresholds::OcMinute15OcnThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ocn_threshold.yfilter)
	|| ydk::is_set(ocn_threshold_value.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15::OcMinute15Ocn::OcMinute15OcnThresholds::OcMinute15OcnThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oc-minute15-ocn-threshold" <<"[ocn-threshold='" <<ocn_threshold <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15::OcMinute15Ocn::OcMinute15OcnThresholds::OcMinute15OcnThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ocn_threshold.is_set || is_set(ocn_threshold.yfilter)) leaf_name_data.push_back(ocn_threshold.get_name_leafdata());
    if (ocn_threshold_value.is_set || is_set(ocn_threshold_value.yfilter)) leaf_name_data.push_back(ocn_threshold_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15::OcMinute15Ocn::OcMinute15OcnThresholds::OcMinute15OcnThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15::OcMinute15Ocn::OcMinute15OcnThresholds::OcMinute15OcnThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15::OcMinute15Ocn::OcMinute15OcnThresholds::OcMinute15OcnThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ocn-threshold")
    {
        ocn_threshold = value;
        ocn_threshold.value_namespace = name_space;
        ocn_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ocn-threshold-value")
    {
        ocn_threshold_value = value;
        ocn_threshold_value.value_namespace = name_space;
        ocn_threshold_value.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15::OcMinute15Ocn::OcMinute15OcnThresholds::OcMinute15OcnThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ocn-threshold")
    {
        ocn_threshold.yfilter = yfilter;
    }
    if(value_path == "ocn-threshold-value")
    {
        ocn_threshold_value.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15::OcMinute15Ocn::OcMinute15OcnThresholds::OcMinute15OcnThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ocn-threshold" || name == "ocn-threshold-value")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30()
    :
    second30_optics(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics>())
	,second30fec(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Fec>())
	,second30otn(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Otn>())
	,second30secyif(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secyif>())
	,second30secyrx(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secyrx>())
	,second30secytx(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secytx>())
{
    second30_optics->parent = this;
    second30fec->parent = this;
    second30otn->parent = this;
    second30secyif->parent = this;
    second30secyrx->parent = this;
    second30secytx->parent = this;

    yang_name = "second30"; yang_parent_name = "performance-management"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::~Second30()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::has_data() const
{
    return (second30_optics !=  nullptr && second30_optics->has_data())
	|| (second30fec !=  nullptr && second30fec->has_data())
	|| (second30otn !=  nullptr && second30otn->has_data())
	|| (second30secyif !=  nullptr && second30secyif->has_data())
	|| (second30secyrx !=  nullptr && second30secyrx->has_data())
	|| (second30secytx !=  nullptr && second30secytx->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::has_operation() const
{
    return is_set(yfilter)
	|| (second30_optics !=  nullptr && second30_optics->has_operation())
	|| (second30fec !=  nullptr && second30fec->has_operation())
	|| (second30otn !=  nullptr && second30otn->has_operation())
	|| (second30secyif !=  nullptr && second30secyif->has_operation())
	|| (second30secyrx !=  nullptr && second30secyrx->has_operation())
	|| (second30secytx !=  nullptr && second30secytx->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "second30";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "second30-optics")
    {
        if(second30_optics == nullptr)
        {
            second30_optics = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics>();
        }
        return second30_optics;
    }

    if(child_yang_name == "second30fec")
    {
        if(second30fec == nullptr)
        {
            second30fec = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Fec>();
        }
        return second30fec;
    }

    if(child_yang_name == "second30otn")
    {
        if(second30otn == nullptr)
        {
            second30otn = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Otn>();
        }
        return second30otn;
    }

    if(child_yang_name == "second30secyif")
    {
        if(second30secyif == nullptr)
        {
            second30secyif = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secyif>();
        }
        return second30secyif;
    }

    if(child_yang_name == "second30secyrx")
    {
        if(second30secyrx == nullptr)
        {
            second30secyrx = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secyrx>();
        }
        return second30secyrx;
    }

    if(child_yang_name == "second30secytx")
    {
        if(second30secytx == nullptr)
        {
            second30secytx = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secytx>();
        }
        return second30secytx;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(second30_optics != nullptr)
    {
        children["second30-optics"] = second30_optics;
    }

    if(second30fec != nullptr)
    {
        children["second30fec"] = second30fec;
    }

    if(second30otn != nullptr)
    {
        children["second30otn"] = second30otn;
    }

    if(second30secyif != nullptr)
    {
        children["second30secyif"] = second30secyif;
    }

    if(second30secyrx != nullptr)
    {
        children["second30secyrx"] = second30secyrx;
    }

    if(second30secytx != nullptr)
    {
        children["second30secytx"] = second30secytx;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second30-optics" || name == "second30fec" || name == "second30otn" || name == "second30secyif" || name == "second30secyrx" || name == "second30secytx")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Fec::Second30Fec()
    :
    second30fec_reports(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Fec::Second30FecReports>())
	,second30fec_thresholds(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Fec::Second30FecThresholds>())
{
    second30fec_reports->parent = this;
    second30fec_thresholds->parent = this;

    yang_name = "second30fec"; yang_parent_name = "second30"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Fec::~Second30Fec()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Fec::has_data() const
{
    return (second30fec_reports !=  nullptr && second30fec_reports->has_data())
	|| (second30fec_thresholds !=  nullptr && second30fec_thresholds->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Fec::has_operation() const
{
    return is_set(yfilter)
	|| (second30fec_reports !=  nullptr && second30fec_reports->has_operation())
	|| (second30fec_thresholds !=  nullptr && second30fec_thresholds->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Fec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "second30fec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Fec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Fec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "second30fec-reports")
    {
        if(second30fec_reports == nullptr)
        {
            second30fec_reports = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Fec::Second30FecReports>();
        }
        return second30fec_reports;
    }

    if(child_yang_name == "second30fec-thresholds")
    {
        if(second30fec_thresholds == nullptr)
        {
            second30fec_thresholds = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Fec::Second30FecThresholds>();
        }
        return second30fec_thresholds;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Fec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(second30fec_reports != nullptr)
    {
        children["second30fec-reports"] = second30fec_reports;
    }

    if(second30fec_thresholds != nullptr)
    {
        children["second30fec-thresholds"] = second30fec_thresholds;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Fec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Fec::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Fec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second30fec-reports" || name == "second30fec-thresholds")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Fec::Second30FecReports::Second30FecReports()
{

    yang_name = "second30fec-reports"; yang_parent_name = "second30fec"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Fec::Second30FecReports::~Second30FecReports()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Fec::Second30FecReports::has_data() const
{
    for (std::size_t index=0; index<second30fec_report.size(); index++)
    {
        if(second30fec_report[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Fec::Second30FecReports::has_operation() const
{
    for (std::size_t index=0; index<second30fec_report.size(); index++)
    {
        if(second30fec_report[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Fec::Second30FecReports::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "second30fec-reports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Fec::Second30FecReports::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Fec::Second30FecReports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "second30fec-report")
    {
        for(auto const & c : second30fec_report)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Fec::Second30FecReports::Second30FecReport>();
        c->parent = this;
        second30fec_report.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Fec::Second30FecReports::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : second30fec_report)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Fec::Second30FecReports::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Fec::Second30FecReports::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Fec::Second30FecReports::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second30fec-report")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Fec::Second30FecReports::Second30FecReport::Second30FecReport()
    :
    fec_report{YType::enumeration, "fec-report"},
    enable{YType::enumeration, "enable"}
{

    yang_name = "second30fec-report"; yang_parent_name = "second30fec-reports"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Fec::Second30FecReports::Second30FecReport::~Second30FecReport()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Fec::Second30FecReports::Second30FecReport::has_data() const
{
    return fec_report.is_set
	|| enable.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Fec::Second30FecReports::Second30FecReport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fec_report.yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Fec::Second30FecReports::Second30FecReport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "second30fec-report" <<"[fec-report='" <<fec_report <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Fec::Second30FecReports::Second30FecReport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fec_report.is_set || is_set(fec_report.yfilter)) leaf_name_data.push_back(fec_report.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Fec::Second30FecReports::Second30FecReport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Fec::Second30FecReports::Second30FecReport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Fec::Second30FecReports::Second30FecReport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Fec::Second30FecReports::Second30FecReport::set_filter(const std::string & value_path, YFilter yfilter)
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

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Fec::Second30FecReports::Second30FecReport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fec-report" || name == "enable")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Fec::Second30FecThresholds::Second30FecThresholds()
{

    yang_name = "second30fec-thresholds"; yang_parent_name = "second30fec"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Fec::Second30FecThresholds::~Second30FecThresholds()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Fec::Second30FecThresholds::has_data() const
{
    for (std::size_t index=0; index<second30fec_threshold.size(); index++)
    {
        if(second30fec_threshold[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Fec::Second30FecThresholds::has_operation() const
{
    for (std::size_t index=0; index<second30fec_threshold.size(); index++)
    {
        if(second30fec_threshold[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Fec::Second30FecThresholds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "second30fec-thresholds";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Fec::Second30FecThresholds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Fec::Second30FecThresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "second30fec-threshold")
    {
        for(auto const & c : second30fec_threshold)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Fec::Second30FecThresholds::Second30FecThreshold>();
        c->parent = this;
        second30fec_threshold.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Fec::Second30FecThresholds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : second30fec_threshold)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Fec::Second30FecThresholds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Fec::Second30FecThresholds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Fec::Second30FecThresholds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second30fec-threshold")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Fec::Second30FecThresholds::Second30FecThreshold::Second30FecThreshold()
    :
    fec_threshold{YType::enumeration, "fec-threshold"},
    fec_threshold_value{YType::str, "fec-threshold-value"}
{

    yang_name = "second30fec-threshold"; yang_parent_name = "second30fec-thresholds"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Fec::Second30FecThresholds::Second30FecThreshold::~Second30FecThreshold()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Fec::Second30FecThresholds::Second30FecThreshold::has_data() const
{
    return fec_threshold.is_set
	|| fec_threshold_value.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Fec::Second30FecThresholds::Second30FecThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fec_threshold.yfilter)
	|| ydk::is_set(fec_threshold_value.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Fec::Second30FecThresholds::Second30FecThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "second30fec-threshold" <<"[fec-threshold='" <<fec_threshold <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Fec::Second30FecThresholds::Second30FecThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fec_threshold.is_set || is_set(fec_threshold.yfilter)) leaf_name_data.push_back(fec_threshold.get_name_leafdata());
    if (fec_threshold_value.is_set || is_set(fec_threshold_value.yfilter)) leaf_name_data.push_back(fec_threshold_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Fec::Second30FecThresholds::Second30FecThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Fec::Second30FecThresholds::Second30FecThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Fec::Second30FecThresholds::Second30FecThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fec-threshold")
    {
        fec_threshold = value;
        fec_threshold.value_namespace = name_space;
        fec_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fec-threshold-value")
    {
        fec_threshold_value = value;
        fec_threshold_value.value_namespace = name_space;
        fec_threshold_value.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Fec::Second30FecThresholds::Second30FecThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fec-threshold")
    {
        fec_threshold.yfilter = yfilter;
    }
    if(value_path == "fec-threshold-value")
    {
        fec_threshold_value.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Fec::Second30FecThresholds::Second30FecThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fec-threshold" || name == "fec-threshold-value")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30Optics()
    :
    second30_optics_reports(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsReports>())
	,second30_optics_thresholds(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsThresholds>())
{
    second30_optics_reports->parent = this;
    second30_optics_thresholds->parent = this;

    yang_name = "second30-optics"; yang_parent_name = "second30"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::~Second30Optics()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::has_data() const
{
    return (second30_optics_reports !=  nullptr && second30_optics_reports->has_data())
	|| (second30_optics_thresholds !=  nullptr && second30_optics_thresholds->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::has_operation() const
{
    return is_set(yfilter)
	|| (second30_optics_reports !=  nullptr && second30_optics_reports->has_operation())
	|| (second30_optics_thresholds !=  nullptr && second30_optics_thresholds->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "second30-optics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "second30-optics-reports")
    {
        if(second30_optics_reports == nullptr)
        {
            second30_optics_reports = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsReports>();
        }
        return second30_optics_reports;
    }

    if(child_yang_name == "second30-optics-thresholds")
    {
        if(second30_optics_thresholds == nullptr)
        {
            second30_optics_thresholds = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsThresholds>();
        }
        return second30_optics_thresholds;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(second30_optics_reports != nullptr)
    {
        children["second30-optics-reports"] = second30_optics_reports;
    }

    if(second30_optics_thresholds != nullptr)
    {
        children["second30-optics-thresholds"] = second30_optics_thresholds;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second30-optics-reports" || name == "second30-optics-thresholds")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsReports::Second30OpticsReports()
{

    yang_name = "second30-optics-reports"; yang_parent_name = "second30-optics"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsReports::~Second30OpticsReports()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsReports::has_data() const
{
    for (std::size_t index=0; index<second30_optics_report.size(); index++)
    {
        if(second30_optics_report[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsReports::has_operation() const
{
    for (std::size_t index=0; index<second30_optics_report.size(); index++)
    {
        if(second30_optics_report[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsReports::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "second30-optics-reports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsReports::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsReports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "second30-optics-report")
    {
        for(auto const & c : second30_optics_report)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsReports::Second30OpticsReport>();
        c->parent = this;
        second30_optics_report.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsReports::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : second30_optics_report)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsReports::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsReports::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsReports::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second30-optics-report")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsReports::Second30OpticsReport::Second30OpticsReport()
    :
    optics_report{YType::enumeration, "optics-report"}
{

    yang_name = "second30-optics-report"; yang_parent_name = "second30-optics-reports"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsReports::Second30OpticsReport::~Second30OpticsReport()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsReports::Second30OpticsReport::has_data() const
{
    return optics_report.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsReports::Second30OpticsReport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(optics_report.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsReports::Second30OpticsReport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "second30-optics-report" <<"[optics-report='" <<optics_report <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsReports::Second30OpticsReport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (optics_report.is_set || is_set(optics_report.yfilter)) leaf_name_data.push_back(optics_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsReports::Second30OpticsReport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsReports::Second30OpticsReport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsReports::Second30OpticsReport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "optics-report")
    {
        optics_report = value;
        optics_report.value_namespace = name_space;
        optics_report.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsReports::Second30OpticsReport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "optics-report")
    {
        optics_report.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsReports::Second30OpticsReport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "optics-report")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsThresholds::Second30OpticsThresholds()
{

    yang_name = "second30-optics-thresholds"; yang_parent_name = "second30-optics"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsThresholds::~Second30OpticsThresholds()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsThresholds::has_data() const
{
    for (std::size_t index=0; index<second30_optics_threshold.size(); index++)
    {
        if(second30_optics_threshold[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsThresholds::has_operation() const
{
    for (std::size_t index=0; index<second30_optics_threshold.size(); index++)
    {
        if(second30_optics_threshold[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsThresholds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "second30-optics-thresholds";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsThresholds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsThresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "second30-optics-threshold")
    {
        for(auto const & c : second30_optics_threshold)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsThresholds::Second30OpticsThreshold>();
        c->parent = this;
        second30_optics_threshold.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsThresholds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : second30_optics_threshold)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsThresholds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsThresholds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsThresholds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second30-optics-threshold")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsThresholds::Second30OpticsThreshold::Second30OpticsThreshold()
    :
    optics_threshold{YType::enumeration, "optics-threshold"},
    dbm{YType::int32, "dbm"},
    optics_threshold_value{YType::int32, "optics-threshold-value"}
{

    yang_name = "second30-optics-threshold"; yang_parent_name = "second30-optics-thresholds"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsThresholds::Second30OpticsThreshold::~Second30OpticsThreshold()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsThresholds::Second30OpticsThreshold::has_data() const
{
    return optics_threshold.is_set
	|| dbm.is_set
	|| optics_threshold_value.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsThresholds::Second30OpticsThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(optics_threshold.yfilter)
	|| ydk::is_set(dbm.yfilter)
	|| ydk::is_set(optics_threshold_value.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsThresholds::Second30OpticsThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "second30-optics-threshold" <<"[optics-threshold='" <<optics_threshold <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsThresholds::Second30OpticsThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (optics_threshold.is_set || is_set(optics_threshold.yfilter)) leaf_name_data.push_back(optics_threshold.get_name_leafdata());
    if (dbm.is_set || is_set(dbm.yfilter)) leaf_name_data.push_back(dbm.get_name_leafdata());
    if (optics_threshold_value.is_set || is_set(optics_threshold_value.yfilter)) leaf_name_data.push_back(optics_threshold_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsThresholds::Second30OpticsThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsThresholds::Second30OpticsThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsThresholds::Second30OpticsThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "optics-threshold")
    {
        optics_threshold = value;
        optics_threshold.value_namespace = name_space;
        optics_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dbm")
    {
        dbm = value;
        dbm.value_namespace = name_space;
        dbm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "optics-threshold-value")
    {
        optics_threshold_value = value;
        optics_threshold_value.value_namespace = name_space;
        optics_threshold_value.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsThresholds::Second30OpticsThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "optics-threshold")
    {
        optics_threshold.yfilter = yfilter;
    }
    if(value_path == "dbm")
    {
        dbm.yfilter = yfilter;
    }
    if(value_path == "optics-threshold-value")
    {
        optics_threshold_value.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsThresholds::Second30OpticsThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "optics-threshold" || name == "dbm" || name == "optics-threshold-value")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Otn::Second30Otn()
    :
    second30_otn_threshes(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Otn::Second30OtnThreshes>())
	,second30otn_reports(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Otn::Second30OtnReports>())
{
    second30_otn_threshes->parent = this;
    second30otn_reports->parent = this;

    yang_name = "second30otn"; yang_parent_name = "second30"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Otn::~Second30Otn()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Otn::has_data() const
{
    return (second30_otn_threshes !=  nullptr && second30_otn_threshes->has_data())
	|| (second30otn_reports !=  nullptr && second30otn_reports->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Otn::has_operation() const
{
    return is_set(yfilter)
	|| (second30_otn_threshes !=  nullptr && second30_otn_threshes->has_operation())
	|| (second30otn_reports !=  nullptr && second30otn_reports->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Otn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "second30otn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Otn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Otn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "second30-otn-threshes")
    {
        if(second30_otn_threshes == nullptr)
        {
            second30_otn_threshes = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Otn::Second30OtnThreshes>();
        }
        return second30_otn_threshes;
    }

    if(child_yang_name == "second30otn-reports")
    {
        if(second30otn_reports == nullptr)
        {
            second30otn_reports = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Otn::Second30OtnReports>();
        }
        return second30otn_reports;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Otn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(second30_otn_threshes != nullptr)
    {
        children["second30-otn-threshes"] = second30_otn_threshes;
    }

    if(second30otn_reports != nullptr)
    {
        children["second30otn-reports"] = second30otn_reports;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Otn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Otn::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Otn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second30-otn-threshes" || name == "second30otn-reports")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Otn::Second30OtnReports::Second30OtnReports()
{

    yang_name = "second30otn-reports"; yang_parent_name = "second30otn"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Otn::Second30OtnReports::~Second30OtnReports()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Otn::Second30OtnReports::has_data() const
{
    for (std::size_t index=0; index<second30otn_report.size(); index++)
    {
        if(second30otn_report[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Otn::Second30OtnReports::has_operation() const
{
    for (std::size_t index=0; index<second30otn_report.size(); index++)
    {
        if(second30otn_report[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Otn::Second30OtnReports::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "second30otn-reports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Otn::Second30OtnReports::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Otn::Second30OtnReports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "second30otn-report")
    {
        for(auto const & c : second30otn_report)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Otn::Second30OtnReports::Second30OtnReport>();
        c->parent = this;
        second30otn_report.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Otn::Second30OtnReports::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : second30otn_report)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Otn::Second30OtnReports::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Otn::Second30OtnReports::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Otn::Second30OtnReports::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second30otn-report")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Otn::Second30OtnReports::Second30OtnReport::Second30OtnReport()
    :
    otn_report{YType::enumeration, "otn-report"},
    enable{YType::enumeration, "enable"}
{

    yang_name = "second30otn-report"; yang_parent_name = "second30otn-reports"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Otn::Second30OtnReports::Second30OtnReport::~Second30OtnReport()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Otn::Second30OtnReports::Second30OtnReport::has_data() const
{
    return otn_report.is_set
	|| enable.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Otn::Second30OtnReports::Second30OtnReport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(otn_report.yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Otn::Second30OtnReports::Second30OtnReport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "second30otn-report" <<"[otn-report='" <<otn_report <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Otn::Second30OtnReports::Second30OtnReport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (otn_report.is_set || is_set(otn_report.yfilter)) leaf_name_data.push_back(otn_report.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Otn::Second30OtnReports::Second30OtnReport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Otn::Second30OtnReports::Second30OtnReport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Otn::Second30OtnReports::Second30OtnReport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Otn::Second30OtnReports::Second30OtnReport::set_filter(const std::string & value_path, YFilter yfilter)
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

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Otn::Second30OtnReports::Second30OtnReport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "otn-report" || name == "enable")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Otn::Second30OtnThreshes::Second30OtnThreshes()
{

    yang_name = "second30-otn-threshes"; yang_parent_name = "second30otn"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Otn::Second30OtnThreshes::~Second30OtnThreshes()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Otn::Second30OtnThreshes::has_data() const
{
    for (std::size_t index=0; index<second30_otn_thresh.size(); index++)
    {
        if(second30_otn_thresh[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Otn::Second30OtnThreshes::has_operation() const
{
    for (std::size_t index=0; index<second30_otn_thresh.size(); index++)
    {
        if(second30_otn_thresh[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Otn::Second30OtnThreshes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "second30-otn-threshes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Otn::Second30OtnThreshes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Otn::Second30OtnThreshes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "second30-otn-thresh")
    {
        for(auto const & c : second30_otn_thresh)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Otn::Second30OtnThreshes::Second30OtnThresh>();
        c->parent = this;
        second30_otn_thresh.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Otn::Second30OtnThreshes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : second30_otn_thresh)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Otn::Second30OtnThreshes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Otn::Second30OtnThreshes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Otn::Second30OtnThreshes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second30-otn-thresh")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Otn::Second30OtnThreshes::Second30OtnThresh::Second30OtnThresh()
    :
    otn_threshold{YType::enumeration, "otn-threshold"},
    otn_threshold_value{YType::int32, "otn-threshold-value"}
{

    yang_name = "second30-otn-thresh"; yang_parent_name = "second30-otn-threshes"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Otn::Second30OtnThreshes::Second30OtnThresh::~Second30OtnThresh()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Otn::Second30OtnThreshes::Second30OtnThresh::has_data() const
{
    return otn_threshold.is_set
	|| otn_threshold_value.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Otn::Second30OtnThreshes::Second30OtnThresh::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(otn_threshold.yfilter)
	|| ydk::is_set(otn_threshold_value.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Otn::Second30OtnThreshes::Second30OtnThresh::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "second30-otn-thresh" <<"[otn-threshold='" <<otn_threshold <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Otn::Second30OtnThreshes::Second30OtnThresh::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (otn_threshold.is_set || is_set(otn_threshold.yfilter)) leaf_name_data.push_back(otn_threshold.get_name_leafdata());
    if (otn_threshold_value.is_set || is_set(otn_threshold_value.yfilter)) leaf_name_data.push_back(otn_threshold_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Otn::Second30OtnThreshes::Second30OtnThresh::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Otn::Second30OtnThreshes::Second30OtnThresh::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Otn::Second30OtnThreshes::Second30OtnThresh::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Otn::Second30OtnThreshes::Second30OtnThresh::set_filter(const std::string & value_path, YFilter yfilter)
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

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Otn::Second30OtnThreshes::Second30OtnThresh::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "otn-threshold" || name == "otn-threshold-value")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secyif::Second30Secyif()
    :
    second30secyif_reports(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secyif::Second30SecyifReports>())
	,second30secyif_thresholds(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secyif::Second30SecyifThresholds>())
{
    second30secyif_reports->parent = this;
    second30secyif_thresholds->parent = this;

    yang_name = "second30secyif"; yang_parent_name = "second30"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secyif::~Second30Secyif()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secyif::has_data() const
{
    return (second30secyif_reports !=  nullptr && second30secyif_reports->has_data())
	|| (second30secyif_thresholds !=  nullptr && second30secyif_thresholds->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secyif::has_operation() const
{
    return is_set(yfilter)
	|| (second30secyif_reports !=  nullptr && second30secyif_reports->has_operation())
	|| (second30secyif_thresholds !=  nullptr && second30secyif_thresholds->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secyif::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "second30secyif";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secyif::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secyif::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "second30secyif-reports")
    {
        if(second30secyif_reports == nullptr)
        {
            second30secyif_reports = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secyif::Second30SecyifReports>();
        }
        return second30secyif_reports;
    }

    if(child_yang_name == "second30secyif-thresholds")
    {
        if(second30secyif_thresholds == nullptr)
        {
            second30secyif_thresholds = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secyif::Second30SecyifThresholds>();
        }
        return second30secyif_thresholds;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secyif::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(second30secyif_reports != nullptr)
    {
        children["second30secyif-reports"] = second30secyif_reports;
    }

    if(second30secyif_thresholds != nullptr)
    {
        children["second30secyif-thresholds"] = second30secyif_thresholds;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secyif::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secyif::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secyif::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second30secyif-reports" || name == "second30secyif-thresholds")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secyif::Second30SecyifReports::Second30SecyifReports()
{

    yang_name = "second30secyif-reports"; yang_parent_name = "second30secyif"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secyif::Second30SecyifReports::~Second30SecyifReports()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secyif::Second30SecyifReports::has_data() const
{
    for (std::size_t index=0; index<second30secyif_report.size(); index++)
    {
        if(second30secyif_report[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secyif::Second30SecyifReports::has_operation() const
{
    for (std::size_t index=0; index<second30secyif_report.size(); index++)
    {
        if(second30secyif_report[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secyif::Second30SecyifReports::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "second30secyif-reports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secyif::Second30SecyifReports::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secyif::Second30SecyifReports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "second30secyif-report")
    {
        for(auto const & c : second30secyif_report)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secyif::Second30SecyifReports::Second30SecyifReport>();
        c->parent = this;
        second30secyif_report.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secyif::Second30SecyifReports::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : second30secyif_report)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secyif::Second30SecyifReports::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secyif::Second30SecyifReports::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secyif::Second30SecyifReports::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second30secyif-report")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secyif::Second30SecyifReports::Second30SecyifReport::Second30SecyifReport()
    :
    secyif_report{YType::enumeration, "secyif-report"},
    enable{YType::enumeration, "enable"}
{

    yang_name = "second30secyif-report"; yang_parent_name = "second30secyif-reports"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secyif::Second30SecyifReports::Second30SecyifReport::~Second30SecyifReport()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secyif::Second30SecyifReports::Second30SecyifReport::has_data() const
{
    return secyif_report.is_set
	|| enable.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secyif::Second30SecyifReports::Second30SecyifReport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(secyif_report.yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secyif::Second30SecyifReports::Second30SecyifReport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "second30secyif-report" <<"[secyif-report='" <<secyif_report <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secyif::Second30SecyifReports::Second30SecyifReport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (secyif_report.is_set || is_set(secyif_report.yfilter)) leaf_name_data.push_back(secyif_report.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secyif::Second30SecyifReports::Second30SecyifReport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secyif::Second30SecyifReports::Second30SecyifReport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secyif::Second30SecyifReports::Second30SecyifReport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "secyif-report")
    {
        secyif_report = value;
        secyif_report.value_namespace = name_space;
        secyif_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secyif::Second30SecyifReports::Second30SecyifReport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "secyif-report")
    {
        secyif_report.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secyif::Second30SecyifReports::Second30SecyifReport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "secyif-report" || name == "enable")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secyif::Second30SecyifThresholds::Second30SecyifThresholds()
{

    yang_name = "second30secyif-thresholds"; yang_parent_name = "second30secyif"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secyif::Second30SecyifThresholds::~Second30SecyifThresholds()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secyif::Second30SecyifThresholds::has_data() const
{
    for (std::size_t index=0; index<second30secyif_threshold.size(); index++)
    {
        if(second30secyif_threshold[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secyif::Second30SecyifThresholds::has_operation() const
{
    for (std::size_t index=0; index<second30secyif_threshold.size(); index++)
    {
        if(second30secyif_threshold[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secyif::Second30SecyifThresholds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "second30secyif-thresholds";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secyif::Second30SecyifThresholds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secyif::Second30SecyifThresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "second30secyif-threshold")
    {
        for(auto const & c : second30secyif_threshold)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secyif::Second30SecyifThresholds::Second30SecyifThreshold>();
        c->parent = this;
        second30secyif_threshold.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secyif::Second30SecyifThresholds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : second30secyif_threshold)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secyif::Second30SecyifThresholds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secyif::Second30SecyifThresholds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secyif::Second30SecyifThresholds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second30secyif-threshold")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secyif::Second30SecyifThresholds::Second30SecyifThreshold::Second30SecyifThreshold()
    :
    secyif_threshold{YType::enumeration, "secyif-threshold"},
    secyif_threshold_value{YType::int32, "secyif-threshold-value"}
{

    yang_name = "second30secyif-threshold"; yang_parent_name = "second30secyif-thresholds"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secyif::Second30SecyifThresholds::Second30SecyifThreshold::~Second30SecyifThreshold()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secyif::Second30SecyifThresholds::Second30SecyifThreshold::has_data() const
{
    return secyif_threshold.is_set
	|| secyif_threshold_value.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secyif::Second30SecyifThresholds::Second30SecyifThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(secyif_threshold.yfilter)
	|| ydk::is_set(secyif_threshold_value.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secyif::Second30SecyifThresholds::Second30SecyifThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "second30secyif-threshold" <<"[secyif-threshold='" <<secyif_threshold <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secyif::Second30SecyifThresholds::Second30SecyifThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (secyif_threshold.is_set || is_set(secyif_threshold.yfilter)) leaf_name_data.push_back(secyif_threshold.get_name_leafdata());
    if (secyif_threshold_value.is_set || is_set(secyif_threshold_value.yfilter)) leaf_name_data.push_back(secyif_threshold_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secyif::Second30SecyifThresholds::Second30SecyifThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secyif::Second30SecyifThresholds::Second30SecyifThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secyif::Second30SecyifThresholds::Second30SecyifThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "secyif-threshold")
    {
        secyif_threshold = value;
        secyif_threshold.value_namespace = name_space;
        secyif_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secyif-threshold-value")
    {
        secyif_threshold_value = value;
        secyif_threshold_value.value_namespace = name_space;
        secyif_threshold_value.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secyif::Second30SecyifThresholds::Second30SecyifThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "secyif-threshold")
    {
        secyif_threshold.yfilter = yfilter;
    }
    if(value_path == "secyif-threshold-value")
    {
        secyif_threshold_value.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secyif::Second30SecyifThresholds::Second30SecyifThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "secyif-threshold" || name == "secyif-threshold-value")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secyrx::Second30Secyrx()
    :
    second30secyrx_reports(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secyrx::Second30SecyrxReports>())
	,second30secyrx_thresholds(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secyrx::Second30SecyrxThresholds>())
{
    second30secyrx_reports->parent = this;
    second30secyrx_thresholds->parent = this;

    yang_name = "second30secyrx"; yang_parent_name = "second30"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secyrx::~Second30Secyrx()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secyrx::has_data() const
{
    return (second30secyrx_reports !=  nullptr && second30secyrx_reports->has_data())
	|| (second30secyrx_thresholds !=  nullptr && second30secyrx_thresholds->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secyrx::has_operation() const
{
    return is_set(yfilter)
	|| (second30secyrx_reports !=  nullptr && second30secyrx_reports->has_operation())
	|| (second30secyrx_thresholds !=  nullptr && second30secyrx_thresholds->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secyrx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "second30secyrx";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secyrx::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secyrx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "second30secyrx-reports")
    {
        if(second30secyrx_reports == nullptr)
        {
            second30secyrx_reports = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secyrx::Second30SecyrxReports>();
        }
        return second30secyrx_reports;
    }

    if(child_yang_name == "second30secyrx-thresholds")
    {
        if(second30secyrx_thresholds == nullptr)
        {
            second30secyrx_thresholds = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secyrx::Second30SecyrxThresholds>();
        }
        return second30secyrx_thresholds;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secyrx::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(second30secyrx_reports != nullptr)
    {
        children["second30secyrx-reports"] = second30secyrx_reports;
    }

    if(second30secyrx_thresholds != nullptr)
    {
        children["second30secyrx-thresholds"] = second30secyrx_thresholds;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secyrx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secyrx::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secyrx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second30secyrx-reports" || name == "second30secyrx-thresholds")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secyrx::Second30SecyrxReports::Second30SecyrxReports()
{

    yang_name = "second30secyrx-reports"; yang_parent_name = "second30secyrx"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secyrx::Second30SecyrxReports::~Second30SecyrxReports()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secyrx::Second30SecyrxReports::has_data() const
{
    for (std::size_t index=0; index<second30secyrx_report.size(); index++)
    {
        if(second30secyrx_report[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secyrx::Second30SecyrxReports::has_operation() const
{
    for (std::size_t index=0; index<second30secyrx_report.size(); index++)
    {
        if(second30secyrx_report[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secyrx::Second30SecyrxReports::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "second30secyrx-reports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secyrx::Second30SecyrxReports::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secyrx::Second30SecyrxReports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "second30secyrx-report")
    {
        for(auto const & c : second30secyrx_report)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secyrx::Second30SecyrxReports::Second30SecyrxReport>();
        c->parent = this;
        second30secyrx_report.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secyrx::Second30SecyrxReports::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : second30secyrx_report)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secyrx::Second30SecyrxReports::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secyrx::Second30SecyrxReports::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secyrx::Second30SecyrxReports::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second30secyrx-report")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secyrx::Second30SecyrxReports::Second30SecyrxReport::Second30SecyrxReport()
    :
    secyrx_report{YType::enumeration, "secyrx-report"},
    enable{YType::enumeration, "enable"}
{

    yang_name = "second30secyrx-report"; yang_parent_name = "second30secyrx-reports"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secyrx::Second30SecyrxReports::Second30SecyrxReport::~Second30SecyrxReport()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secyrx::Second30SecyrxReports::Second30SecyrxReport::has_data() const
{
    return secyrx_report.is_set
	|| enable.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secyrx::Second30SecyrxReports::Second30SecyrxReport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(secyrx_report.yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secyrx::Second30SecyrxReports::Second30SecyrxReport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "second30secyrx-report" <<"[secyrx-report='" <<secyrx_report <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secyrx::Second30SecyrxReports::Second30SecyrxReport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (secyrx_report.is_set || is_set(secyrx_report.yfilter)) leaf_name_data.push_back(secyrx_report.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secyrx::Second30SecyrxReports::Second30SecyrxReport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secyrx::Second30SecyrxReports::Second30SecyrxReport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secyrx::Second30SecyrxReports::Second30SecyrxReport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "secyrx-report")
    {
        secyrx_report = value;
        secyrx_report.value_namespace = name_space;
        secyrx_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secyrx::Second30SecyrxReports::Second30SecyrxReport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "secyrx-report")
    {
        secyrx_report.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secyrx::Second30SecyrxReports::Second30SecyrxReport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "secyrx-report" || name == "enable")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secyrx::Second30SecyrxThresholds::Second30SecyrxThresholds()
{

    yang_name = "second30secyrx-thresholds"; yang_parent_name = "second30secyrx"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secyrx::Second30SecyrxThresholds::~Second30SecyrxThresholds()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secyrx::Second30SecyrxThresholds::has_data() const
{
    for (std::size_t index=0; index<second30secyrx_threshold.size(); index++)
    {
        if(second30secyrx_threshold[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secyrx::Second30SecyrxThresholds::has_operation() const
{
    for (std::size_t index=0; index<second30secyrx_threshold.size(); index++)
    {
        if(second30secyrx_threshold[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secyrx::Second30SecyrxThresholds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "second30secyrx-thresholds";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secyrx::Second30SecyrxThresholds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secyrx::Second30SecyrxThresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "second30secyrx-threshold")
    {
        for(auto const & c : second30secyrx_threshold)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secyrx::Second30SecyrxThresholds::Second30SecyrxThreshold>();
        c->parent = this;
        second30secyrx_threshold.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secyrx::Second30SecyrxThresholds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : second30secyrx_threshold)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secyrx::Second30SecyrxThresholds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secyrx::Second30SecyrxThresholds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secyrx::Second30SecyrxThresholds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second30secyrx-threshold")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secyrx::Second30SecyrxThresholds::Second30SecyrxThreshold::Second30SecyrxThreshold()
    :
    secyrx_threshold{YType::enumeration, "secyrx-threshold"},
    secyrx_threshold_value{YType::int32, "secyrx-threshold-value"}
{

    yang_name = "second30secyrx-threshold"; yang_parent_name = "second30secyrx-thresholds"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secyrx::Second30SecyrxThresholds::Second30SecyrxThreshold::~Second30SecyrxThreshold()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secyrx::Second30SecyrxThresholds::Second30SecyrxThreshold::has_data() const
{
    return secyrx_threshold.is_set
	|| secyrx_threshold_value.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secyrx::Second30SecyrxThresholds::Second30SecyrxThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(secyrx_threshold.yfilter)
	|| ydk::is_set(secyrx_threshold_value.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secyrx::Second30SecyrxThresholds::Second30SecyrxThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "second30secyrx-threshold" <<"[secyrx-threshold='" <<secyrx_threshold <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secyrx::Second30SecyrxThresholds::Second30SecyrxThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (secyrx_threshold.is_set || is_set(secyrx_threshold.yfilter)) leaf_name_data.push_back(secyrx_threshold.get_name_leafdata());
    if (secyrx_threshold_value.is_set || is_set(secyrx_threshold_value.yfilter)) leaf_name_data.push_back(secyrx_threshold_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secyrx::Second30SecyrxThresholds::Second30SecyrxThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secyrx::Second30SecyrxThresholds::Second30SecyrxThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secyrx::Second30SecyrxThresholds::Second30SecyrxThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "secyrx-threshold")
    {
        secyrx_threshold = value;
        secyrx_threshold.value_namespace = name_space;
        secyrx_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secyrx-threshold-value")
    {
        secyrx_threshold_value = value;
        secyrx_threshold_value.value_namespace = name_space;
        secyrx_threshold_value.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secyrx::Second30SecyrxThresholds::Second30SecyrxThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "secyrx-threshold")
    {
        secyrx_threshold.yfilter = yfilter;
    }
    if(value_path == "secyrx-threshold-value")
    {
        secyrx_threshold_value.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secyrx::Second30SecyrxThresholds::Second30SecyrxThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "secyrx-threshold" || name == "secyrx-threshold-value")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secytx::Second30Secytx()
    :
    second30secytx_reports(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secytx::Second30SecytxReports>())
	,second30secytx_thresholds(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secytx::Second30SecytxThresholds>())
{
    second30secytx_reports->parent = this;
    second30secytx_thresholds->parent = this;

    yang_name = "second30secytx"; yang_parent_name = "second30"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secytx::~Second30Secytx()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secytx::has_data() const
{
    return (second30secytx_reports !=  nullptr && second30secytx_reports->has_data())
	|| (second30secytx_thresholds !=  nullptr && second30secytx_thresholds->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secytx::has_operation() const
{
    return is_set(yfilter)
	|| (second30secytx_reports !=  nullptr && second30secytx_reports->has_operation())
	|| (second30secytx_thresholds !=  nullptr && second30secytx_thresholds->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secytx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "second30secytx";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secytx::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secytx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "second30secytx-reports")
    {
        if(second30secytx_reports == nullptr)
        {
            second30secytx_reports = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secytx::Second30SecytxReports>();
        }
        return second30secytx_reports;
    }

    if(child_yang_name == "second30secytx-thresholds")
    {
        if(second30secytx_thresholds == nullptr)
        {
            second30secytx_thresholds = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secytx::Second30SecytxThresholds>();
        }
        return second30secytx_thresholds;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secytx::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(second30secytx_reports != nullptr)
    {
        children["second30secytx-reports"] = second30secytx_reports;
    }

    if(second30secytx_thresholds != nullptr)
    {
        children["second30secytx-thresholds"] = second30secytx_thresholds;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secytx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secytx::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secytx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second30secytx-reports" || name == "second30secytx-thresholds")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secytx::Second30SecytxReports::Second30SecytxReports()
{

    yang_name = "second30secytx-reports"; yang_parent_name = "second30secytx"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secytx::Second30SecytxReports::~Second30SecytxReports()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secytx::Second30SecytxReports::has_data() const
{
    for (std::size_t index=0; index<second30secytx_report.size(); index++)
    {
        if(second30secytx_report[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secytx::Second30SecytxReports::has_operation() const
{
    for (std::size_t index=0; index<second30secytx_report.size(); index++)
    {
        if(second30secytx_report[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secytx::Second30SecytxReports::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "second30secytx-reports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secytx::Second30SecytxReports::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secytx::Second30SecytxReports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "second30secytx-report")
    {
        for(auto const & c : second30secytx_report)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secytx::Second30SecytxReports::Second30SecytxReport>();
        c->parent = this;
        second30secytx_report.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secytx::Second30SecytxReports::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : second30secytx_report)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secytx::Second30SecytxReports::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secytx::Second30SecytxReports::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secytx::Second30SecytxReports::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second30secytx-report")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secytx::Second30SecytxReports::Second30SecytxReport::Second30SecytxReport()
    :
    secytx_report{YType::enumeration, "secytx-report"},
    enable{YType::enumeration, "enable"}
{

    yang_name = "second30secytx-report"; yang_parent_name = "second30secytx-reports"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secytx::Second30SecytxReports::Second30SecytxReport::~Second30SecytxReport()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secytx::Second30SecytxReports::Second30SecytxReport::has_data() const
{
    return secytx_report.is_set
	|| enable.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secytx::Second30SecytxReports::Second30SecytxReport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(secytx_report.yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secytx::Second30SecytxReports::Second30SecytxReport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "second30secytx-report" <<"[secytx-report='" <<secytx_report <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secytx::Second30SecytxReports::Second30SecytxReport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (secytx_report.is_set || is_set(secytx_report.yfilter)) leaf_name_data.push_back(secytx_report.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secytx::Second30SecytxReports::Second30SecytxReport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secytx::Second30SecytxReports::Second30SecytxReport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secytx::Second30SecytxReports::Second30SecytxReport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secytx::Second30SecytxReports::Second30SecytxReport::set_filter(const std::string & value_path, YFilter yfilter)
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

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secytx::Second30SecytxReports::Second30SecytxReport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "secytx-report" || name == "enable")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secytx::Second30SecytxThresholds::Second30SecytxThresholds()
{

    yang_name = "second30secytx-thresholds"; yang_parent_name = "second30secytx"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secytx::Second30SecytxThresholds::~Second30SecytxThresholds()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secytx::Second30SecytxThresholds::has_data() const
{
    for (std::size_t index=0; index<second30secytx_threshold.size(); index++)
    {
        if(second30secytx_threshold[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secytx::Second30SecytxThresholds::has_operation() const
{
    for (std::size_t index=0; index<second30secytx_threshold.size(); index++)
    {
        if(second30secytx_threshold[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secytx::Second30SecytxThresholds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "second30secytx-thresholds";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secytx::Second30SecytxThresholds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secytx::Second30SecytxThresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "second30secytx-threshold")
    {
        for(auto const & c : second30secytx_threshold)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secytx::Second30SecytxThresholds::Second30SecytxThreshold>();
        c->parent = this;
        second30secytx_threshold.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secytx::Second30SecytxThresholds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : second30secytx_threshold)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secytx::Second30SecytxThresholds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secytx::Second30SecytxThresholds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secytx::Second30SecytxThresholds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second30secytx-threshold")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secytx::Second30SecytxThresholds::Second30SecytxThreshold::Second30SecytxThreshold()
    :
    secytx_threshold{YType::enumeration, "secytx-threshold"},
    secytx_threshold_value{YType::int32, "secytx-threshold-value"}
{

    yang_name = "second30secytx-threshold"; yang_parent_name = "second30secytx-thresholds"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secytx::Second30SecytxThresholds::Second30SecytxThreshold::~Second30SecytxThreshold()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secytx::Second30SecytxThresholds::Second30SecytxThreshold::has_data() const
{
    return secytx_threshold.is_set
	|| secytx_threshold_value.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secytx::Second30SecytxThresholds::Second30SecytxThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(secytx_threshold.yfilter)
	|| ydk::is_set(secytx_threshold_value.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secytx::Second30SecytxThresholds::Second30SecytxThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "second30secytx-threshold" <<"[secytx-threshold='" <<secytx_threshold <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secytx::Second30SecytxThresholds::Second30SecytxThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (secytx_threshold.is_set || is_set(secytx_threshold.yfilter)) leaf_name_data.push_back(secytx_threshold.get_name_leafdata());
    if (secytx_threshold_value.is_set || is_set(secytx_threshold_value.yfilter)) leaf_name_data.push_back(secytx_threshold_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secytx::Second30SecytxThresholds::Second30SecytxThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secytx::Second30SecytxThresholds::Second30SecytxThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secytx::Second30SecytxThresholds::Second30SecytxThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secytx::Second30SecytxThresholds::Second30SecytxThreshold::set_filter(const std::string & value_path, YFilter yfilter)
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

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secytx::Second30SecytxThresholds::Second30SecytxThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "secytx-threshold" || name == "secytx-threshold-value")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24()
    :
    sonet_hour24_ocn(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Ocn>())
	,sonet_hour24_path(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Path>())
{
    sonet_hour24_ocn->parent = this;
    sonet_hour24_path->parent = this;

    yang_name = "sonet-hour24"; yang_parent_name = "performance-management"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::~SonetHour24()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::has_data() const
{
    return (sonet_hour24_ocn !=  nullptr && sonet_hour24_ocn->has_data())
	|| (sonet_hour24_path !=  nullptr && sonet_hour24_path->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::has_operation() const
{
    return is_set(yfilter)
	|| (sonet_hour24_ocn !=  nullptr && sonet_hour24_ocn->has_operation())
	|| (sonet_hour24_path !=  nullptr && sonet_hour24_path->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonet-hour24";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sonet-hour24-ocn")
    {
        if(sonet_hour24_ocn == nullptr)
        {
            sonet_hour24_ocn = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Ocn>();
        }
        return sonet_hour24_ocn;
    }

    if(child_yang_name == "sonet-hour24-path")
    {
        if(sonet_hour24_path == nullptr)
        {
            sonet_hour24_path = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Path>();
        }
        return sonet_hour24_path;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(sonet_hour24_ocn != nullptr)
    {
        children["sonet-hour24-ocn"] = sonet_hour24_ocn;
    }

    if(sonet_hour24_path != nullptr)
    {
        children["sonet-hour24-path"] = sonet_hour24_path;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sonet-hour24-ocn" || name == "sonet-hour24-path")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Ocn::SonetHour24Ocn()
    :
    sonet_hour24_ocn_reports(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Ocn::SonetHour24OcnReports>())
	,sonet_hour24_ocn_thresholds(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Ocn::SonetHour24OcnThresholds>())
{
    sonet_hour24_ocn_reports->parent = this;
    sonet_hour24_ocn_thresholds->parent = this;

    yang_name = "sonet-hour24-ocn"; yang_parent_name = "sonet-hour24"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Ocn::~SonetHour24Ocn()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Ocn::has_data() const
{
    return (sonet_hour24_ocn_reports !=  nullptr && sonet_hour24_ocn_reports->has_data())
	|| (sonet_hour24_ocn_thresholds !=  nullptr && sonet_hour24_ocn_thresholds->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Ocn::has_operation() const
{
    return is_set(yfilter)
	|| (sonet_hour24_ocn_reports !=  nullptr && sonet_hour24_ocn_reports->has_operation())
	|| (sonet_hour24_ocn_thresholds !=  nullptr && sonet_hour24_ocn_thresholds->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Ocn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonet-hour24-ocn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Ocn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Ocn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sonet-hour24-ocn-reports")
    {
        if(sonet_hour24_ocn_reports == nullptr)
        {
            sonet_hour24_ocn_reports = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Ocn::SonetHour24OcnReports>();
        }
        return sonet_hour24_ocn_reports;
    }

    if(child_yang_name == "sonet-hour24-ocn-thresholds")
    {
        if(sonet_hour24_ocn_thresholds == nullptr)
        {
            sonet_hour24_ocn_thresholds = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Ocn::SonetHour24OcnThresholds>();
        }
        return sonet_hour24_ocn_thresholds;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Ocn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(sonet_hour24_ocn_reports != nullptr)
    {
        children["sonet-hour24-ocn-reports"] = sonet_hour24_ocn_reports;
    }

    if(sonet_hour24_ocn_thresholds != nullptr)
    {
        children["sonet-hour24-ocn-thresholds"] = sonet_hour24_ocn_thresholds;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Ocn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Ocn::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Ocn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sonet-hour24-ocn-reports" || name == "sonet-hour24-ocn-thresholds")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Ocn::SonetHour24OcnReports::SonetHour24OcnReports()
{

    yang_name = "sonet-hour24-ocn-reports"; yang_parent_name = "sonet-hour24-ocn"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Ocn::SonetHour24OcnReports::~SonetHour24OcnReports()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Ocn::SonetHour24OcnReports::has_data() const
{
    for (std::size_t index=0; index<sonet_hour24_ocn_report.size(); index++)
    {
        if(sonet_hour24_ocn_report[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Ocn::SonetHour24OcnReports::has_operation() const
{
    for (std::size_t index=0; index<sonet_hour24_ocn_report.size(); index++)
    {
        if(sonet_hour24_ocn_report[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Ocn::SonetHour24OcnReports::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonet-hour24-ocn-reports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Ocn::SonetHour24OcnReports::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Ocn::SonetHour24OcnReports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sonet-hour24-ocn-report")
    {
        for(auto const & c : sonet_hour24_ocn_report)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Ocn::SonetHour24OcnReports::SonetHour24OcnReport>();
        c->parent = this;
        sonet_hour24_ocn_report.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Ocn::SonetHour24OcnReports::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sonet_hour24_ocn_report)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Ocn::SonetHour24OcnReports::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Ocn::SonetHour24OcnReports::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Ocn::SonetHour24OcnReports::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sonet-hour24-ocn-report")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Ocn::SonetHour24OcnReports::SonetHour24OcnReport::SonetHour24OcnReport()
    :
    ocn_report{YType::enumeration, "ocn-report"}
{

    yang_name = "sonet-hour24-ocn-report"; yang_parent_name = "sonet-hour24-ocn-reports"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Ocn::SonetHour24OcnReports::SonetHour24OcnReport::~SonetHour24OcnReport()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Ocn::SonetHour24OcnReports::SonetHour24OcnReport::has_data() const
{
    return ocn_report.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Ocn::SonetHour24OcnReports::SonetHour24OcnReport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ocn_report.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Ocn::SonetHour24OcnReports::SonetHour24OcnReport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonet-hour24-ocn-report" <<"[ocn-report='" <<ocn_report <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Ocn::SonetHour24OcnReports::SonetHour24OcnReport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ocn_report.is_set || is_set(ocn_report.yfilter)) leaf_name_data.push_back(ocn_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Ocn::SonetHour24OcnReports::SonetHour24OcnReport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Ocn::SonetHour24OcnReports::SonetHour24OcnReport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Ocn::SonetHour24OcnReports::SonetHour24OcnReport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ocn-report")
    {
        ocn_report = value;
        ocn_report.value_namespace = name_space;
        ocn_report.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Ocn::SonetHour24OcnReports::SonetHour24OcnReport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ocn-report")
    {
        ocn_report.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Ocn::SonetHour24OcnReports::SonetHour24OcnReport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ocn-report")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Ocn::SonetHour24OcnThresholds::SonetHour24OcnThresholds()
{

    yang_name = "sonet-hour24-ocn-thresholds"; yang_parent_name = "sonet-hour24-ocn"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Ocn::SonetHour24OcnThresholds::~SonetHour24OcnThresholds()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Ocn::SonetHour24OcnThresholds::has_data() const
{
    for (std::size_t index=0; index<sonet_hour24_ocn_threshold.size(); index++)
    {
        if(sonet_hour24_ocn_threshold[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Ocn::SonetHour24OcnThresholds::has_operation() const
{
    for (std::size_t index=0; index<sonet_hour24_ocn_threshold.size(); index++)
    {
        if(sonet_hour24_ocn_threshold[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Ocn::SonetHour24OcnThresholds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonet-hour24-ocn-thresholds";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Ocn::SonetHour24OcnThresholds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Ocn::SonetHour24OcnThresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sonet-hour24-ocn-threshold")
    {
        for(auto const & c : sonet_hour24_ocn_threshold)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Ocn::SonetHour24OcnThresholds::SonetHour24OcnThreshold>();
        c->parent = this;
        sonet_hour24_ocn_threshold.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Ocn::SonetHour24OcnThresholds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sonet_hour24_ocn_threshold)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Ocn::SonetHour24OcnThresholds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Ocn::SonetHour24OcnThresholds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Ocn::SonetHour24OcnThresholds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sonet-hour24-ocn-threshold")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Ocn::SonetHour24OcnThresholds::SonetHour24OcnThreshold::SonetHour24OcnThreshold()
    :
    ocn_threshold{YType::enumeration, "ocn-threshold"},
    ocn_threshold_value{YType::int32, "ocn-threshold-value"}
{

    yang_name = "sonet-hour24-ocn-threshold"; yang_parent_name = "sonet-hour24-ocn-thresholds"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Ocn::SonetHour24OcnThresholds::SonetHour24OcnThreshold::~SonetHour24OcnThreshold()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Ocn::SonetHour24OcnThresholds::SonetHour24OcnThreshold::has_data() const
{
    return ocn_threshold.is_set
	|| ocn_threshold_value.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Ocn::SonetHour24OcnThresholds::SonetHour24OcnThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ocn_threshold.yfilter)
	|| ydk::is_set(ocn_threshold_value.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Ocn::SonetHour24OcnThresholds::SonetHour24OcnThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonet-hour24-ocn-threshold" <<"[ocn-threshold='" <<ocn_threshold <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Ocn::SonetHour24OcnThresholds::SonetHour24OcnThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ocn_threshold.is_set || is_set(ocn_threshold.yfilter)) leaf_name_data.push_back(ocn_threshold.get_name_leafdata());
    if (ocn_threshold_value.is_set || is_set(ocn_threshold_value.yfilter)) leaf_name_data.push_back(ocn_threshold_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Ocn::SonetHour24OcnThresholds::SonetHour24OcnThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Ocn::SonetHour24OcnThresholds::SonetHour24OcnThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Ocn::SonetHour24OcnThresholds::SonetHour24OcnThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ocn-threshold")
    {
        ocn_threshold = value;
        ocn_threshold.value_namespace = name_space;
        ocn_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ocn-threshold-value")
    {
        ocn_threshold_value = value;
        ocn_threshold_value.value_namespace = name_space;
        ocn_threshold_value.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Ocn::SonetHour24OcnThresholds::SonetHour24OcnThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ocn-threshold")
    {
        ocn_threshold.yfilter = yfilter;
    }
    if(value_path == "ocn-threshold-value")
    {
        ocn_threshold_value.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Ocn::SonetHour24OcnThresholds::SonetHour24OcnThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ocn-threshold" || name == "ocn-threshold-value")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Path::SonetHour24Path()
    :
    sonet_hour24_path_reports(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Path::SonetHour24PathReports>())
	,sonet_hour24_path_thresholds(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Path::SonetHour24PathThresholds>())
{
    sonet_hour24_path_reports->parent = this;
    sonet_hour24_path_thresholds->parent = this;

    yang_name = "sonet-hour24-path"; yang_parent_name = "sonet-hour24"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Path::~SonetHour24Path()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Path::has_data() const
{
    return (sonet_hour24_path_reports !=  nullptr && sonet_hour24_path_reports->has_data())
	|| (sonet_hour24_path_thresholds !=  nullptr && sonet_hour24_path_thresholds->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Path::has_operation() const
{
    return is_set(yfilter)
	|| (sonet_hour24_path_reports !=  nullptr && sonet_hour24_path_reports->has_operation())
	|| (sonet_hour24_path_thresholds !=  nullptr && sonet_hour24_path_thresholds->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Path::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonet-hour24-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Path::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Path::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sonet-hour24-path-reports")
    {
        if(sonet_hour24_path_reports == nullptr)
        {
            sonet_hour24_path_reports = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Path::SonetHour24PathReports>();
        }
        return sonet_hour24_path_reports;
    }

    if(child_yang_name == "sonet-hour24-path-thresholds")
    {
        if(sonet_hour24_path_thresholds == nullptr)
        {
            sonet_hour24_path_thresholds = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Path::SonetHour24PathThresholds>();
        }
        return sonet_hour24_path_thresholds;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Path::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(sonet_hour24_path_reports != nullptr)
    {
        children["sonet-hour24-path-reports"] = sonet_hour24_path_reports;
    }

    if(sonet_hour24_path_thresholds != nullptr)
    {
        children["sonet-hour24-path-thresholds"] = sonet_hour24_path_thresholds;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Path::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Path::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Path::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sonet-hour24-path-reports" || name == "sonet-hour24-path-thresholds")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Path::SonetHour24PathReports::SonetHour24PathReports()
{

    yang_name = "sonet-hour24-path-reports"; yang_parent_name = "sonet-hour24-path"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Path::SonetHour24PathReports::~SonetHour24PathReports()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Path::SonetHour24PathReports::has_data() const
{
    for (std::size_t index=0; index<sonet_hour24_path_report.size(); index++)
    {
        if(sonet_hour24_path_report[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Path::SonetHour24PathReports::has_operation() const
{
    for (std::size_t index=0; index<sonet_hour24_path_report.size(); index++)
    {
        if(sonet_hour24_path_report[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Path::SonetHour24PathReports::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonet-hour24-path-reports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Path::SonetHour24PathReports::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Path::SonetHour24PathReports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sonet-hour24-path-report")
    {
        for(auto const & c : sonet_hour24_path_report)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Path::SonetHour24PathReports::SonetHour24PathReport>();
        c->parent = this;
        sonet_hour24_path_report.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Path::SonetHour24PathReports::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sonet_hour24_path_report)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Path::SonetHour24PathReports::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Path::SonetHour24PathReports::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Path::SonetHour24PathReports::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sonet-hour24-path-report")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Path::SonetHour24PathReports::SonetHour24PathReport::SonetHour24PathReport()
    :
    path_report{YType::enumeration, "path-report"}
{

    yang_name = "sonet-hour24-path-report"; yang_parent_name = "sonet-hour24-path-reports"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Path::SonetHour24PathReports::SonetHour24PathReport::~SonetHour24PathReport()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Path::SonetHour24PathReports::SonetHour24PathReport::has_data() const
{
    return path_report.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Path::SonetHour24PathReports::SonetHour24PathReport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path_report.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Path::SonetHour24PathReports::SonetHour24PathReport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonet-hour24-path-report" <<"[path-report='" <<path_report <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Path::SonetHour24PathReports::SonetHour24PathReport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path_report.is_set || is_set(path_report.yfilter)) leaf_name_data.push_back(path_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Path::SonetHour24PathReports::SonetHour24PathReport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Path::SonetHour24PathReports::SonetHour24PathReport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Path::SonetHour24PathReports::SonetHour24PathReport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path-report")
    {
        path_report = value;
        path_report.value_namespace = name_space;
        path_report.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Path::SonetHour24PathReports::SonetHour24PathReport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path-report")
    {
        path_report.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Path::SonetHour24PathReports::SonetHour24PathReport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-report")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Path::SonetHour24PathThresholds::SonetHour24PathThresholds()
{

    yang_name = "sonet-hour24-path-thresholds"; yang_parent_name = "sonet-hour24-path"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Path::SonetHour24PathThresholds::~SonetHour24PathThresholds()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Path::SonetHour24PathThresholds::has_data() const
{
    for (std::size_t index=0; index<sonet_hour24_path_threshold.size(); index++)
    {
        if(sonet_hour24_path_threshold[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Path::SonetHour24PathThresholds::has_operation() const
{
    for (std::size_t index=0; index<sonet_hour24_path_threshold.size(); index++)
    {
        if(sonet_hour24_path_threshold[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Path::SonetHour24PathThresholds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonet-hour24-path-thresholds";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Path::SonetHour24PathThresholds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Path::SonetHour24PathThresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sonet-hour24-path-threshold")
    {
        for(auto const & c : sonet_hour24_path_threshold)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Path::SonetHour24PathThresholds::SonetHour24PathThreshold>();
        c->parent = this;
        sonet_hour24_path_threshold.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Path::SonetHour24PathThresholds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sonet_hour24_path_threshold)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Path::SonetHour24PathThresholds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Path::SonetHour24PathThresholds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Path::SonetHour24PathThresholds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sonet-hour24-path-threshold")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Path::SonetHour24PathThresholds::SonetHour24PathThreshold::SonetHour24PathThreshold()
    :
    path_threshold{YType::enumeration, "path-threshold"},
    path_threshold_value{YType::int32, "path-threshold-value"}
{

    yang_name = "sonet-hour24-path-threshold"; yang_parent_name = "sonet-hour24-path-thresholds"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Path::SonetHour24PathThresholds::SonetHour24PathThreshold::~SonetHour24PathThreshold()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Path::SonetHour24PathThresholds::SonetHour24PathThreshold::has_data() const
{
    return path_threshold.is_set
	|| path_threshold_value.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Path::SonetHour24PathThresholds::SonetHour24PathThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path_threshold.yfilter)
	|| ydk::is_set(path_threshold_value.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Path::SonetHour24PathThresholds::SonetHour24PathThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonet-hour24-path-threshold" <<"[path-threshold='" <<path_threshold <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Path::SonetHour24PathThresholds::SonetHour24PathThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path_threshold.is_set || is_set(path_threshold.yfilter)) leaf_name_data.push_back(path_threshold.get_name_leafdata());
    if (path_threshold_value.is_set || is_set(path_threshold_value.yfilter)) leaf_name_data.push_back(path_threshold_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Path::SonetHour24PathThresholds::SonetHour24PathThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Path::SonetHour24PathThresholds::SonetHour24PathThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Path::SonetHour24PathThresholds::SonetHour24PathThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path-threshold")
    {
        path_threshold = value;
        path_threshold.value_namespace = name_space;
        path_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-threshold-value")
    {
        path_threshold_value = value;
        path_threshold_value.value_namespace = name_space;
        path_threshold_value.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Path::SonetHour24PathThresholds::SonetHour24PathThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path-threshold")
    {
        path_threshold.yfilter = yfilter;
    }
    if(value_path == "path-threshold-value")
    {
        path_threshold_value.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Path::SonetHour24PathThresholds::SonetHour24PathThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-threshold" || name == "path-threshold-value")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15()
    :
    sonet_minute15_ocn(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn>())
	,sonet_minute15_path(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path>())
{
    sonet_minute15_ocn->parent = this;
    sonet_minute15_path->parent = this;

    yang_name = "sonet-minute15"; yang_parent_name = "performance-management"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::~SonetMinute15()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::has_data() const
{
    return (sonet_minute15_ocn !=  nullptr && sonet_minute15_ocn->has_data())
	|| (sonet_minute15_path !=  nullptr && sonet_minute15_path->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::has_operation() const
{
    return is_set(yfilter)
	|| (sonet_minute15_ocn !=  nullptr && sonet_minute15_ocn->has_operation())
	|| (sonet_minute15_path !=  nullptr && sonet_minute15_path->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonet-minute15";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sonet-minute15-ocn")
    {
        if(sonet_minute15_ocn == nullptr)
        {
            sonet_minute15_ocn = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn>();
        }
        return sonet_minute15_ocn;
    }

    if(child_yang_name == "sonet-minute15-path")
    {
        if(sonet_minute15_path == nullptr)
        {
            sonet_minute15_path = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path>();
        }
        return sonet_minute15_path;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(sonet_minute15_ocn != nullptr)
    {
        children["sonet-minute15-ocn"] = sonet_minute15_ocn;
    }

    if(sonet_minute15_path != nullptr)
    {
        children["sonet-minute15-path"] = sonet_minute15_path;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sonet-minute15-ocn" || name == "sonet-minute15-path")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15Ocn()
    :
    sonet_minute15_ocn_reports(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnReports>())
	,sonet_minute15_ocn_thresholds(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnThresholds>())
{
    sonet_minute15_ocn_reports->parent = this;
    sonet_minute15_ocn_thresholds->parent = this;

    yang_name = "sonet-minute15-ocn"; yang_parent_name = "sonet-minute15"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::~SonetMinute15Ocn()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::has_data() const
{
    return (sonet_minute15_ocn_reports !=  nullptr && sonet_minute15_ocn_reports->has_data())
	|| (sonet_minute15_ocn_thresholds !=  nullptr && sonet_minute15_ocn_thresholds->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::has_operation() const
{
    return is_set(yfilter)
	|| (sonet_minute15_ocn_reports !=  nullptr && sonet_minute15_ocn_reports->has_operation())
	|| (sonet_minute15_ocn_thresholds !=  nullptr && sonet_minute15_ocn_thresholds->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonet-minute15-ocn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sonet-minute15-ocn-reports")
    {
        if(sonet_minute15_ocn_reports == nullptr)
        {
            sonet_minute15_ocn_reports = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnReports>();
        }
        return sonet_minute15_ocn_reports;
    }

    if(child_yang_name == "sonet-minute15-ocn-thresholds")
    {
        if(sonet_minute15_ocn_thresholds == nullptr)
        {
            sonet_minute15_ocn_thresholds = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnThresholds>();
        }
        return sonet_minute15_ocn_thresholds;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(sonet_minute15_ocn_reports != nullptr)
    {
        children["sonet-minute15-ocn-reports"] = sonet_minute15_ocn_reports;
    }

    if(sonet_minute15_ocn_thresholds != nullptr)
    {
        children["sonet-minute15-ocn-thresholds"] = sonet_minute15_ocn_thresholds;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sonet-minute15-ocn-reports" || name == "sonet-minute15-ocn-thresholds")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnReports::SonetMinute15OcnReports()
{

    yang_name = "sonet-minute15-ocn-reports"; yang_parent_name = "sonet-minute15-ocn"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnReports::~SonetMinute15OcnReports()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnReports::has_data() const
{
    for (std::size_t index=0; index<sonet_minute15_ocn_report.size(); index++)
    {
        if(sonet_minute15_ocn_report[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnReports::has_operation() const
{
    for (std::size_t index=0; index<sonet_minute15_ocn_report.size(); index++)
    {
        if(sonet_minute15_ocn_report[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnReports::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonet-minute15-ocn-reports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnReports::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnReports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sonet-minute15-ocn-report")
    {
        for(auto const & c : sonet_minute15_ocn_report)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnReports::SonetMinute15OcnReport>();
        c->parent = this;
        sonet_minute15_ocn_report.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnReports::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sonet_minute15_ocn_report)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnReports::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnReports::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnReports::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sonet-minute15-ocn-report")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnReports::SonetMinute15OcnReport::SonetMinute15OcnReport()
    :
    ocn_report{YType::enumeration, "ocn-report"}
{

    yang_name = "sonet-minute15-ocn-report"; yang_parent_name = "sonet-minute15-ocn-reports"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnReports::SonetMinute15OcnReport::~SonetMinute15OcnReport()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnReports::SonetMinute15OcnReport::has_data() const
{
    return ocn_report.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnReports::SonetMinute15OcnReport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ocn_report.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnReports::SonetMinute15OcnReport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonet-minute15-ocn-report" <<"[ocn-report='" <<ocn_report <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnReports::SonetMinute15OcnReport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ocn_report.is_set || is_set(ocn_report.yfilter)) leaf_name_data.push_back(ocn_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnReports::SonetMinute15OcnReport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnReports::SonetMinute15OcnReport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnReports::SonetMinute15OcnReport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ocn-report")
    {
        ocn_report = value;
        ocn_report.value_namespace = name_space;
        ocn_report.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnReports::SonetMinute15OcnReport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ocn-report")
    {
        ocn_report.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnReports::SonetMinute15OcnReport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ocn-report")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnThresholds::SonetMinute15OcnThresholds()
{

    yang_name = "sonet-minute15-ocn-thresholds"; yang_parent_name = "sonet-minute15-ocn"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnThresholds::~SonetMinute15OcnThresholds()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnThresholds::has_data() const
{
    for (std::size_t index=0; index<sonet_minute15_ocn_threshold.size(); index++)
    {
        if(sonet_minute15_ocn_threshold[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnThresholds::has_operation() const
{
    for (std::size_t index=0; index<sonet_minute15_ocn_threshold.size(); index++)
    {
        if(sonet_minute15_ocn_threshold[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnThresholds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonet-minute15-ocn-thresholds";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnThresholds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnThresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sonet-minute15-ocn-threshold")
    {
        for(auto const & c : sonet_minute15_ocn_threshold)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnThresholds::SonetMinute15OcnThreshold>();
        c->parent = this;
        sonet_minute15_ocn_threshold.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnThresholds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sonet_minute15_ocn_threshold)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnThresholds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnThresholds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnThresholds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sonet-minute15-ocn-threshold")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnThresholds::SonetMinute15OcnThreshold::SonetMinute15OcnThreshold()
    :
    ocn_threshold{YType::enumeration, "ocn-threshold"},
    ocn_threshold_value{YType::int32, "ocn-threshold-value"}
{

    yang_name = "sonet-minute15-ocn-threshold"; yang_parent_name = "sonet-minute15-ocn-thresholds"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnThresholds::SonetMinute15OcnThreshold::~SonetMinute15OcnThreshold()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnThresholds::SonetMinute15OcnThreshold::has_data() const
{
    return ocn_threshold.is_set
	|| ocn_threshold_value.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnThresholds::SonetMinute15OcnThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ocn_threshold.yfilter)
	|| ydk::is_set(ocn_threshold_value.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnThresholds::SonetMinute15OcnThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonet-minute15-ocn-threshold" <<"[ocn-threshold='" <<ocn_threshold <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnThresholds::SonetMinute15OcnThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ocn_threshold.is_set || is_set(ocn_threshold.yfilter)) leaf_name_data.push_back(ocn_threshold.get_name_leafdata());
    if (ocn_threshold_value.is_set || is_set(ocn_threshold_value.yfilter)) leaf_name_data.push_back(ocn_threshold_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnThresholds::SonetMinute15OcnThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnThresholds::SonetMinute15OcnThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnThresholds::SonetMinute15OcnThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ocn-threshold")
    {
        ocn_threshold = value;
        ocn_threshold.value_namespace = name_space;
        ocn_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ocn-threshold-value")
    {
        ocn_threshold_value = value;
        ocn_threshold_value.value_namespace = name_space;
        ocn_threshold_value.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnThresholds::SonetMinute15OcnThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ocn-threshold")
    {
        ocn_threshold.yfilter = yfilter;
    }
    if(value_path == "ocn-threshold-value")
    {
        ocn_threshold_value.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnThresholds::SonetMinute15OcnThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ocn-threshold" || name == "ocn-threshold-value")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15Path()
    :
    sonet_minute15_path_reports(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathReports>())
	,sonet_minute15_path_thresholds(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathThresholds>())
{
    sonet_minute15_path_reports->parent = this;
    sonet_minute15_path_thresholds->parent = this;

    yang_name = "sonet-minute15-path"; yang_parent_name = "sonet-minute15"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::~SonetMinute15Path()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::has_data() const
{
    return (sonet_minute15_path_reports !=  nullptr && sonet_minute15_path_reports->has_data())
	|| (sonet_minute15_path_thresholds !=  nullptr && sonet_minute15_path_thresholds->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::has_operation() const
{
    return is_set(yfilter)
	|| (sonet_minute15_path_reports !=  nullptr && sonet_minute15_path_reports->has_operation())
	|| (sonet_minute15_path_thresholds !=  nullptr && sonet_minute15_path_thresholds->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonet-minute15-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sonet-minute15-path-reports")
    {
        if(sonet_minute15_path_reports == nullptr)
        {
            sonet_minute15_path_reports = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathReports>();
        }
        return sonet_minute15_path_reports;
    }

    if(child_yang_name == "sonet-minute15-path-thresholds")
    {
        if(sonet_minute15_path_thresholds == nullptr)
        {
            sonet_minute15_path_thresholds = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathThresholds>();
        }
        return sonet_minute15_path_thresholds;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(sonet_minute15_path_reports != nullptr)
    {
        children["sonet-minute15-path-reports"] = sonet_minute15_path_reports;
    }

    if(sonet_minute15_path_thresholds != nullptr)
    {
        children["sonet-minute15-path-thresholds"] = sonet_minute15_path_thresholds;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sonet-minute15-path-reports" || name == "sonet-minute15-path-thresholds")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathReports::SonetMinute15PathReports()
{

    yang_name = "sonet-minute15-path-reports"; yang_parent_name = "sonet-minute15-path"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathReports::~SonetMinute15PathReports()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathReports::has_data() const
{
    for (std::size_t index=0; index<sonet_minute15_path_report.size(); index++)
    {
        if(sonet_minute15_path_report[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathReports::has_operation() const
{
    for (std::size_t index=0; index<sonet_minute15_path_report.size(); index++)
    {
        if(sonet_minute15_path_report[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathReports::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonet-minute15-path-reports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathReports::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathReports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sonet-minute15-path-report")
    {
        for(auto const & c : sonet_minute15_path_report)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathReports::SonetMinute15PathReport>();
        c->parent = this;
        sonet_minute15_path_report.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathReports::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sonet_minute15_path_report)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathReports::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathReports::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathReports::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sonet-minute15-path-report")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathReports::SonetMinute15PathReport::SonetMinute15PathReport()
    :
    path_report{YType::enumeration, "path-report"}
{

    yang_name = "sonet-minute15-path-report"; yang_parent_name = "sonet-minute15-path-reports"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathReports::SonetMinute15PathReport::~SonetMinute15PathReport()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathReports::SonetMinute15PathReport::has_data() const
{
    return path_report.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathReports::SonetMinute15PathReport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path_report.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathReports::SonetMinute15PathReport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonet-minute15-path-report" <<"[path-report='" <<path_report <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathReports::SonetMinute15PathReport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path_report.is_set || is_set(path_report.yfilter)) leaf_name_data.push_back(path_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathReports::SonetMinute15PathReport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathReports::SonetMinute15PathReport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathReports::SonetMinute15PathReport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path-report")
    {
        path_report = value;
        path_report.value_namespace = name_space;
        path_report.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathReports::SonetMinute15PathReport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path-report")
    {
        path_report.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathReports::SonetMinute15PathReport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-report")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathThresholds::SonetMinute15PathThresholds()
{

    yang_name = "sonet-minute15-path-thresholds"; yang_parent_name = "sonet-minute15-path"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathThresholds::~SonetMinute15PathThresholds()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathThresholds::has_data() const
{
    for (std::size_t index=0; index<sonet_minute15_path_threshold.size(); index++)
    {
        if(sonet_minute15_path_threshold[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathThresholds::has_operation() const
{
    for (std::size_t index=0; index<sonet_minute15_path_threshold.size(); index++)
    {
        if(sonet_minute15_path_threshold[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathThresholds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonet-minute15-path-thresholds";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathThresholds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathThresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sonet-minute15-path-threshold")
    {
        for(auto const & c : sonet_minute15_path_threshold)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathThresholds::SonetMinute15PathThreshold>();
        c->parent = this;
        sonet_minute15_path_threshold.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathThresholds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sonet_minute15_path_threshold)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathThresholds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathThresholds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathThresholds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sonet-minute15-path-threshold")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathThresholds::SonetMinute15PathThreshold::SonetMinute15PathThreshold()
    :
    path_threshold{YType::enumeration, "path-threshold"},
    path_threshold_value{YType::int32, "path-threshold-value"}
{

    yang_name = "sonet-minute15-path-threshold"; yang_parent_name = "sonet-minute15-path-thresholds"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathThresholds::SonetMinute15PathThreshold::~SonetMinute15PathThreshold()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathThresholds::SonetMinute15PathThreshold::has_data() const
{
    return path_threshold.is_set
	|| path_threshold_value.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathThresholds::SonetMinute15PathThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path_threshold.yfilter)
	|| ydk::is_set(path_threshold_value.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathThresholds::SonetMinute15PathThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonet-minute15-path-threshold" <<"[path-threshold='" <<path_threshold <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathThresholds::SonetMinute15PathThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path_threshold.is_set || is_set(path_threshold.yfilter)) leaf_name_data.push_back(path_threshold.get_name_leafdata());
    if (path_threshold_value.is_set || is_set(path_threshold_value.yfilter)) leaf_name_data.push_back(path_threshold_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathThresholds::SonetMinute15PathThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathThresholds::SonetMinute15PathThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathThresholds::SonetMinute15PathThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path-threshold")
    {
        path_threshold = value;
        path_threshold.value_namespace = name_space;
        path_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-threshold-value")
    {
        path_threshold_value = value;
        path_threshold_value.value_namespace = name_space;
        path_threshold_value.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathThresholds::SonetMinute15PathThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path-threshold")
    {
        path_threshold.yfilter = yfilter;
    }
    if(value_path == "path-threshold-value")
    {
        path_threshold_value.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathThresholds::SonetMinute15PathThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-threshold" || name == "path-threshold-value")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24()
    :
    stm_hour24_stm(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm>())
{
    stm_hour24_stm->parent = this;

    yang_name = "stm-hour24"; yang_parent_name = "performance-management"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::~StmHour24()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::has_data() const
{
    return (stm_hour24_stm !=  nullptr && stm_hour24_stm->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::has_operation() const
{
    return is_set(yfilter)
	|| (stm_hour24_stm !=  nullptr && stm_hour24_stm->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stm-hour24";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stm-hour24-stm")
    {
        if(stm_hour24_stm == nullptr)
        {
            stm_hour24_stm = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm>();
        }
        return stm_hour24_stm;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(stm_hour24_stm != nullptr)
    {
        children["stm-hour24-stm"] = stm_hour24_stm;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stm-hour24-stm")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24Stm()
    :
    stm_hour24_stm_reports(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmReports>())
	,stm_hour24_stm_thresholds(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmThresholds>())
{
    stm_hour24_stm_reports->parent = this;
    stm_hour24_stm_thresholds->parent = this;

    yang_name = "stm-hour24-stm"; yang_parent_name = "stm-hour24"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::~StmHour24Stm()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::has_data() const
{
    return (stm_hour24_stm_reports !=  nullptr && stm_hour24_stm_reports->has_data())
	|| (stm_hour24_stm_thresholds !=  nullptr && stm_hour24_stm_thresholds->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::has_operation() const
{
    return is_set(yfilter)
	|| (stm_hour24_stm_reports !=  nullptr && stm_hour24_stm_reports->has_operation())
	|| (stm_hour24_stm_thresholds !=  nullptr && stm_hour24_stm_thresholds->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stm-hour24-stm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stm-hour24-stm-reports")
    {
        if(stm_hour24_stm_reports == nullptr)
        {
            stm_hour24_stm_reports = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmReports>();
        }
        return stm_hour24_stm_reports;
    }

    if(child_yang_name == "stm-hour24-stm-thresholds")
    {
        if(stm_hour24_stm_thresholds == nullptr)
        {
            stm_hour24_stm_thresholds = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmThresholds>();
        }
        return stm_hour24_stm_thresholds;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(stm_hour24_stm_reports != nullptr)
    {
        children["stm-hour24-stm-reports"] = stm_hour24_stm_reports;
    }

    if(stm_hour24_stm_thresholds != nullptr)
    {
        children["stm-hour24-stm-thresholds"] = stm_hour24_stm_thresholds;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stm-hour24-stm-reports" || name == "stm-hour24-stm-thresholds")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmReports::StmHour24StmReports()
{

    yang_name = "stm-hour24-stm-reports"; yang_parent_name = "stm-hour24-stm"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmReports::~StmHour24StmReports()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmReports::has_data() const
{
    for (std::size_t index=0; index<stm_hour24_stm_report.size(); index++)
    {
        if(stm_hour24_stm_report[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmReports::has_operation() const
{
    for (std::size_t index=0; index<stm_hour24_stm_report.size(); index++)
    {
        if(stm_hour24_stm_report[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmReports::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stm-hour24-stm-reports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmReports::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmReports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stm-hour24-stm-report")
    {
        for(auto const & c : stm_hour24_stm_report)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmReports::StmHour24StmReport>();
        c->parent = this;
        stm_hour24_stm_report.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmReports::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : stm_hour24_stm_report)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmReports::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmReports::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmReports::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stm-hour24-stm-report")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmReports::StmHour24StmReport::StmHour24StmReport()
    :
    stm_report{YType::enumeration, "stm-report"},
    enable{YType::enumeration, "enable"}
{

    yang_name = "stm-hour24-stm-report"; yang_parent_name = "stm-hour24-stm-reports"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmReports::StmHour24StmReport::~StmHour24StmReport()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmReports::StmHour24StmReport::has_data() const
{
    return stm_report.is_set
	|| enable.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmReports::StmHour24StmReport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(stm_report.yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmReports::StmHour24StmReport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stm-hour24-stm-report" <<"[stm-report='" <<stm_report <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmReports::StmHour24StmReport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (stm_report.is_set || is_set(stm_report.yfilter)) leaf_name_data.push_back(stm_report.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmReports::StmHour24StmReport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmReports::StmHour24StmReport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmReports::StmHour24StmReport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "stm-report")
    {
        stm_report = value;
        stm_report.value_namespace = name_space;
        stm_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmReports::StmHour24StmReport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "stm-report")
    {
        stm_report.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmReports::StmHour24StmReport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stm-report" || name == "enable")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmThresholds::StmHour24StmThresholds()
{

    yang_name = "stm-hour24-stm-thresholds"; yang_parent_name = "stm-hour24-stm"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmThresholds::~StmHour24StmThresholds()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmThresholds::has_data() const
{
    for (std::size_t index=0; index<stm_hour24_stm_threshold.size(); index++)
    {
        if(stm_hour24_stm_threshold[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmThresholds::has_operation() const
{
    for (std::size_t index=0; index<stm_hour24_stm_threshold.size(); index++)
    {
        if(stm_hour24_stm_threshold[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmThresholds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stm-hour24-stm-thresholds";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmThresholds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmThresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stm-hour24-stm-threshold")
    {
        for(auto const & c : stm_hour24_stm_threshold)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmThresholds::StmHour24StmThreshold>();
        c->parent = this;
        stm_hour24_stm_threshold.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmThresholds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : stm_hour24_stm_threshold)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmThresholds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmThresholds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmThresholds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stm-hour24-stm-threshold")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmThresholds::StmHour24StmThreshold::StmHour24StmThreshold()
    :
    stm_threshold{YType::enumeration, "stm-threshold"},
    stm_threshold_value{YType::int32, "stm-threshold-value"}
{

    yang_name = "stm-hour24-stm-threshold"; yang_parent_name = "stm-hour24-stm-thresholds"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmThresholds::StmHour24StmThreshold::~StmHour24StmThreshold()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmThresholds::StmHour24StmThreshold::has_data() const
{
    return stm_threshold.is_set
	|| stm_threshold_value.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmThresholds::StmHour24StmThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(stm_threshold.yfilter)
	|| ydk::is_set(stm_threshold_value.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmThresholds::StmHour24StmThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stm-hour24-stm-threshold" <<"[stm-threshold='" <<stm_threshold <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmThresholds::StmHour24StmThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (stm_threshold.is_set || is_set(stm_threshold.yfilter)) leaf_name_data.push_back(stm_threshold.get_name_leafdata());
    if (stm_threshold_value.is_set || is_set(stm_threshold_value.yfilter)) leaf_name_data.push_back(stm_threshold_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmThresholds::StmHour24StmThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmThresholds::StmHour24StmThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmThresholds::StmHour24StmThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "stm-threshold")
    {
        stm_threshold = value;
        stm_threshold.value_namespace = name_space;
        stm_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stm-threshold-value")
    {
        stm_threshold_value = value;
        stm_threshold_value.value_namespace = name_space;
        stm_threshold_value.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmThresholds::StmHour24StmThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "stm-threshold")
    {
        stm_threshold.yfilter = yfilter;
    }
    if(value_path == "stm-threshold-value")
    {
        stm_threshold_value.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmThresholds::StmHour24StmThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stm-threshold" || name == "stm-threshold-value")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15::StmMinute15()
    :
    stm_minute15_stm(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15::StmMinute15Stm>())
{
    stm_minute15_stm->parent = this;

    yang_name = "stm-minute15"; yang_parent_name = "performance-management"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15::~StmMinute15()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15::has_data() const
{
    return (stm_minute15_stm !=  nullptr && stm_minute15_stm->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15::has_operation() const
{
    return is_set(yfilter)
	|| (stm_minute15_stm !=  nullptr && stm_minute15_stm->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stm-minute15";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stm-minute15-stm")
    {
        if(stm_minute15_stm == nullptr)
        {
            stm_minute15_stm = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15::StmMinute15Stm>();
        }
        return stm_minute15_stm;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(stm_minute15_stm != nullptr)
    {
        children["stm-minute15-stm"] = stm_minute15_stm;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stm-minute15-stm")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15::StmMinute15Stm::StmMinute15Stm()
    :
    stm_minute15_stm_reports(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15::StmMinute15Stm::StmMinute15StmReports>())
	,stm_minute15_stm_thresholds(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15::StmMinute15Stm::StmMinute15StmThresholds>())
{
    stm_minute15_stm_reports->parent = this;
    stm_minute15_stm_thresholds->parent = this;

    yang_name = "stm-minute15-stm"; yang_parent_name = "stm-minute15"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15::StmMinute15Stm::~StmMinute15Stm()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15::StmMinute15Stm::has_data() const
{
    return (stm_minute15_stm_reports !=  nullptr && stm_minute15_stm_reports->has_data())
	|| (stm_minute15_stm_thresholds !=  nullptr && stm_minute15_stm_thresholds->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15::StmMinute15Stm::has_operation() const
{
    return is_set(yfilter)
	|| (stm_minute15_stm_reports !=  nullptr && stm_minute15_stm_reports->has_operation())
	|| (stm_minute15_stm_thresholds !=  nullptr && stm_minute15_stm_thresholds->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15::StmMinute15Stm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stm-minute15-stm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15::StmMinute15Stm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15::StmMinute15Stm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stm-minute15-stm-reports")
    {
        if(stm_minute15_stm_reports == nullptr)
        {
            stm_minute15_stm_reports = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15::StmMinute15Stm::StmMinute15StmReports>();
        }
        return stm_minute15_stm_reports;
    }

    if(child_yang_name == "stm-minute15-stm-thresholds")
    {
        if(stm_minute15_stm_thresholds == nullptr)
        {
            stm_minute15_stm_thresholds = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15::StmMinute15Stm::StmMinute15StmThresholds>();
        }
        return stm_minute15_stm_thresholds;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15::StmMinute15Stm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(stm_minute15_stm_reports != nullptr)
    {
        children["stm-minute15-stm-reports"] = stm_minute15_stm_reports;
    }

    if(stm_minute15_stm_thresholds != nullptr)
    {
        children["stm-minute15-stm-thresholds"] = stm_minute15_stm_thresholds;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15::StmMinute15Stm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15::StmMinute15Stm::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15::StmMinute15Stm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stm-minute15-stm-reports" || name == "stm-minute15-stm-thresholds")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15::StmMinute15Stm::StmMinute15StmReports::StmMinute15StmReports()
{

    yang_name = "stm-minute15-stm-reports"; yang_parent_name = "stm-minute15-stm"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15::StmMinute15Stm::StmMinute15StmReports::~StmMinute15StmReports()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15::StmMinute15Stm::StmMinute15StmReports::has_data() const
{
    for (std::size_t index=0; index<stm_minute15_stm_report.size(); index++)
    {
        if(stm_minute15_stm_report[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15::StmMinute15Stm::StmMinute15StmReports::has_operation() const
{
    for (std::size_t index=0; index<stm_minute15_stm_report.size(); index++)
    {
        if(stm_minute15_stm_report[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15::StmMinute15Stm::StmMinute15StmReports::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stm-minute15-stm-reports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15::StmMinute15Stm::StmMinute15StmReports::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15::StmMinute15Stm::StmMinute15StmReports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stm-minute15-stm-report")
    {
        for(auto const & c : stm_minute15_stm_report)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15::StmMinute15Stm::StmMinute15StmReports::StmMinute15StmReport>();
        c->parent = this;
        stm_minute15_stm_report.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15::StmMinute15Stm::StmMinute15StmReports::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : stm_minute15_stm_report)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15::StmMinute15Stm::StmMinute15StmReports::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15::StmMinute15Stm::StmMinute15StmReports::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15::StmMinute15Stm::StmMinute15StmReports::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stm-minute15-stm-report")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15::StmMinute15Stm::StmMinute15StmReports::StmMinute15StmReport::StmMinute15StmReport()
    :
    stm_report{YType::enumeration, "stm-report"},
    enable{YType::enumeration, "enable"}
{

    yang_name = "stm-minute15-stm-report"; yang_parent_name = "stm-minute15-stm-reports"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15::StmMinute15Stm::StmMinute15StmReports::StmMinute15StmReport::~StmMinute15StmReport()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15::StmMinute15Stm::StmMinute15StmReports::StmMinute15StmReport::has_data() const
{
    return stm_report.is_set
	|| enable.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15::StmMinute15Stm::StmMinute15StmReports::StmMinute15StmReport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(stm_report.yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15::StmMinute15Stm::StmMinute15StmReports::StmMinute15StmReport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stm-minute15-stm-report" <<"[stm-report='" <<stm_report <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15::StmMinute15Stm::StmMinute15StmReports::StmMinute15StmReport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (stm_report.is_set || is_set(stm_report.yfilter)) leaf_name_data.push_back(stm_report.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15::StmMinute15Stm::StmMinute15StmReports::StmMinute15StmReport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15::StmMinute15Stm::StmMinute15StmReports::StmMinute15StmReport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15::StmMinute15Stm::StmMinute15StmReports::StmMinute15StmReport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "stm-report")
    {
        stm_report = value;
        stm_report.value_namespace = name_space;
        stm_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15::StmMinute15Stm::StmMinute15StmReports::StmMinute15StmReport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "stm-report")
    {
        stm_report.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15::StmMinute15Stm::StmMinute15StmReports::StmMinute15StmReport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stm-report" || name == "enable")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15::StmMinute15Stm::StmMinute15StmThresholds::StmMinute15StmThresholds()
{

    yang_name = "stm-minute15-stm-thresholds"; yang_parent_name = "stm-minute15-stm"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15::StmMinute15Stm::StmMinute15StmThresholds::~StmMinute15StmThresholds()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15::StmMinute15Stm::StmMinute15StmThresholds::has_data() const
{
    for (std::size_t index=0; index<stm_minute15_stm_threshold.size(); index++)
    {
        if(stm_minute15_stm_threshold[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15::StmMinute15Stm::StmMinute15StmThresholds::has_operation() const
{
    for (std::size_t index=0; index<stm_minute15_stm_threshold.size(); index++)
    {
        if(stm_minute15_stm_threshold[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15::StmMinute15Stm::StmMinute15StmThresholds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stm-minute15-stm-thresholds";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15::StmMinute15Stm::StmMinute15StmThresholds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15::StmMinute15Stm::StmMinute15StmThresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stm-minute15-stm-threshold")
    {
        for(auto const & c : stm_minute15_stm_threshold)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15::StmMinute15Stm::StmMinute15StmThresholds::StmMinute15StmThreshold>();
        c->parent = this;
        stm_minute15_stm_threshold.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15::StmMinute15Stm::StmMinute15StmThresholds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : stm_minute15_stm_threshold)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15::StmMinute15Stm::StmMinute15StmThresholds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15::StmMinute15Stm::StmMinute15StmThresholds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15::StmMinute15Stm::StmMinute15StmThresholds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stm-minute15-stm-threshold")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15::StmMinute15Stm::StmMinute15StmThresholds::StmMinute15StmThreshold::StmMinute15StmThreshold()
    :
    stm_threshold{YType::enumeration, "stm-threshold"},
    stm_threshold_value{YType::int32, "stm-threshold-value"}
{

    yang_name = "stm-minute15-stm-threshold"; yang_parent_name = "stm-minute15-stm-thresholds"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15::StmMinute15Stm::StmMinute15StmThresholds::StmMinute15StmThreshold::~StmMinute15StmThreshold()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15::StmMinute15Stm::StmMinute15StmThresholds::StmMinute15StmThreshold::has_data() const
{
    return stm_threshold.is_set
	|| stm_threshold_value.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15::StmMinute15Stm::StmMinute15StmThresholds::StmMinute15StmThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(stm_threshold.yfilter)
	|| ydk::is_set(stm_threshold_value.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15::StmMinute15Stm::StmMinute15StmThresholds::StmMinute15StmThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stm-minute15-stm-threshold" <<"[stm-threshold='" <<stm_threshold <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15::StmMinute15Stm::StmMinute15StmThresholds::StmMinute15StmThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (stm_threshold.is_set || is_set(stm_threshold.yfilter)) leaf_name_data.push_back(stm_threshold.get_name_leafdata());
    if (stm_threshold_value.is_set || is_set(stm_threshold_value.yfilter)) leaf_name_data.push_back(stm_threshold_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15::StmMinute15Stm::StmMinute15StmThresholds::StmMinute15StmThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15::StmMinute15Stm::StmMinute15StmThresholds::StmMinute15StmThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15::StmMinute15Stm::StmMinute15StmThresholds::StmMinute15StmThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "stm-threshold")
    {
        stm_threshold = value;
        stm_threshold.value_namespace = name_space;
        stm_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stm-threshold-value")
    {
        stm_threshold_value = value;
        stm_threshold_value.value_namespace = name_space;
        stm_threshold_value.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15::StmMinute15Stm::StmMinute15StmThresholds::StmMinute15StmThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "stm-threshold")
    {
        stm_threshold.yfilter = yfilter;
    }
    if(value_path == "stm-threshold-value")
    {
        stm_threshold_value.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15::StmMinute15Stm::StmMinute15StmThresholds::StmMinute15StmThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stm-threshold" || name == "stm-threshold-value")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24::StsHour24()
    :
    sts_hour24_path(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24::StsHour24Path>())
{
    sts_hour24_path->parent = this;

    yang_name = "sts-hour24"; yang_parent_name = "performance-management"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24::~StsHour24()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24::has_data() const
{
    return (sts_hour24_path !=  nullptr && sts_hour24_path->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24::has_operation() const
{
    return is_set(yfilter)
	|| (sts_hour24_path !=  nullptr && sts_hour24_path->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sts-hour24";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sts-hour24-path")
    {
        if(sts_hour24_path == nullptr)
        {
            sts_hour24_path = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24::StsHour24Path>();
        }
        return sts_hour24_path;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(sts_hour24_path != nullptr)
    {
        children["sts-hour24-path"] = sts_hour24_path;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sts-hour24-path")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24::StsHour24Path::StsHour24Path()
    :
    sts_hour24_path_reports(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24::StsHour24Path::StsHour24PathReports>())
	,sts_hour24_path_thresholds(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24::StsHour24Path::StsHour24PathThresholds>())
{
    sts_hour24_path_reports->parent = this;
    sts_hour24_path_thresholds->parent = this;

    yang_name = "sts-hour24-path"; yang_parent_name = "sts-hour24"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24::StsHour24Path::~StsHour24Path()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24::StsHour24Path::has_data() const
{
    return (sts_hour24_path_reports !=  nullptr && sts_hour24_path_reports->has_data())
	|| (sts_hour24_path_thresholds !=  nullptr && sts_hour24_path_thresholds->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24::StsHour24Path::has_operation() const
{
    return is_set(yfilter)
	|| (sts_hour24_path_reports !=  nullptr && sts_hour24_path_reports->has_operation())
	|| (sts_hour24_path_thresholds !=  nullptr && sts_hour24_path_thresholds->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24::StsHour24Path::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sts-hour24-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24::StsHour24Path::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24::StsHour24Path::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sts-hour24-path-reports")
    {
        if(sts_hour24_path_reports == nullptr)
        {
            sts_hour24_path_reports = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24::StsHour24Path::StsHour24PathReports>();
        }
        return sts_hour24_path_reports;
    }

    if(child_yang_name == "sts-hour24-path-thresholds")
    {
        if(sts_hour24_path_thresholds == nullptr)
        {
            sts_hour24_path_thresholds = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24::StsHour24Path::StsHour24PathThresholds>();
        }
        return sts_hour24_path_thresholds;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24::StsHour24Path::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(sts_hour24_path_reports != nullptr)
    {
        children["sts-hour24-path-reports"] = sts_hour24_path_reports;
    }

    if(sts_hour24_path_thresholds != nullptr)
    {
        children["sts-hour24-path-thresholds"] = sts_hour24_path_thresholds;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24::StsHour24Path::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24::StsHour24Path::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24::StsHour24Path::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sts-hour24-path-reports" || name == "sts-hour24-path-thresholds")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24::StsHour24Path::StsHour24PathReports::StsHour24PathReports()
{

    yang_name = "sts-hour24-path-reports"; yang_parent_name = "sts-hour24-path"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24::StsHour24Path::StsHour24PathReports::~StsHour24PathReports()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24::StsHour24Path::StsHour24PathReports::has_data() const
{
    for (std::size_t index=0; index<sts_hour24_path_report.size(); index++)
    {
        if(sts_hour24_path_report[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24::StsHour24Path::StsHour24PathReports::has_operation() const
{
    for (std::size_t index=0; index<sts_hour24_path_report.size(); index++)
    {
        if(sts_hour24_path_report[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24::StsHour24Path::StsHour24PathReports::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sts-hour24-path-reports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24::StsHour24Path::StsHour24PathReports::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24::StsHour24Path::StsHour24PathReports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sts-hour24-path-report")
    {
        for(auto const & c : sts_hour24_path_report)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24::StsHour24Path::StsHour24PathReports::StsHour24PathReport>();
        c->parent = this;
        sts_hour24_path_report.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24::StsHour24Path::StsHour24PathReports::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sts_hour24_path_report)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24::StsHour24Path::StsHour24PathReports::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24::StsHour24Path::StsHour24PathReports::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24::StsHour24Path::StsHour24PathReports::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sts-hour24-path-report")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24::StsHour24Path::StsHour24PathReports::StsHour24PathReport::StsHour24PathReport()
    :
    path_report{YType::enumeration, "path-report"},
    enable{YType::enumeration, "enable"}
{

    yang_name = "sts-hour24-path-report"; yang_parent_name = "sts-hour24-path-reports"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24::StsHour24Path::StsHour24PathReports::StsHour24PathReport::~StsHour24PathReport()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24::StsHour24Path::StsHour24PathReports::StsHour24PathReport::has_data() const
{
    return path_report.is_set
	|| enable.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24::StsHour24Path::StsHour24PathReports::StsHour24PathReport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path_report.yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24::StsHour24Path::StsHour24PathReports::StsHour24PathReport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sts-hour24-path-report" <<"[path-report='" <<path_report <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24::StsHour24Path::StsHour24PathReports::StsHour24PathReport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path_report.is_set || is_set(path_report.yfilter)) leaf_name_data.push_back(path_report.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24::StsHour24Path::StsHour24PathReports::StsHour24PathReport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24::StsHour24Path::StsHour24PathReports::StsHour24PathReport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24::StsHour24Path::StsHour24PathReports::StsHour24PathReport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path-report")
    {
        path_report = value;
        path_report.value_namespace = name_space;
        path_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24::StsHour24Path::StsHour24PathReports::StsHour24PathReport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path-report")
    {
        path_report.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24::StsHour24Path::StsHour24PathReports::StsHour24PathReport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-report" || name == "enable")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24::StsHour24Path::StsHour24PathThresholds::StsHour24PathThresholds()
{

    yang_name = "sts-hour24-path-thresholds"; yang_parent_name = "sts-hour24-path"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24::StsHour24Path::StsHour24PathThresholds::~StsHour24PathThresholds()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24::StsHour24Path::StsHour24PathThresholds::has_data() const
{
    for (std::size_t index=0; index<sts_hour24_path_threshold.size(); index++)
    {
        if(sts_hour24_path_threshold[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24::StsHour24Path::StsHour24PathThresholds::has_operation() const
{
    for (std::size_t index=0; index<sts_hour24_path_threshold.size(); index++)
    {
        if(sts_hour24_path_threshold[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24::StsHour24Path::StsHour24PathThresholds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sts-hour24-path-thresholds";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24::StsHour24Path::StsHour24PathThresholds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24::StsHour24Path::StsHour24PathThresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sts-hour24-path-threshold")
    {
        for(auto const & c : sts_hour24_path_threshold)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24::StsHour24Path::StsHour24PathThresholds::StsHour24PathThreshold>();
        c->parent = this;
        sts_hour24_path_threshold.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24::StsHour24Path::StsHour24PathThresholds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sts_hour24_path_threshold)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24::StsHour24Path::StsHour24PathThresholds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24::StsHour24Path::StsHour24PathThresholds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24::StsHour24Path::StsHour24PathThresholds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sts-hour24-path-threshold")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24::StsHour24Path::StsHour24PathThresholds::StsHour24PathThreshold::StsHour24PathThreshold()
    :
    path_threshold{YType::enumeration, "path-threshold"},
    path_threshold_value{YType::int32, "path-threshold-value"}
{

    yang_name = "sts-hour24-path-threshold"; yang_parent_name = "sts-hour24-path-thresholds"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24::StsHour24Path::StsHour24PathThresholds::StsHour24PathThreshold::~StsHour24PathThreshold()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24::StsHour24Path::StsHour24PathThresholds::StsHour24PathThreshold::has_data() const
{
    return path_threshold.is_set
	|| path_threshold_value.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24::StsHour24Path::StsHour24PathThresholds::StsHour24PathThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path_threshold.yfilter)
	|| ydk::is_set(path_threshold_value.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24::StsHour24Path::StsHour24PathThresholds::StsHour24PathThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sts-hour24-path-threshold" <<"[path-threshold='" <<path_threshold <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24::StsHour24Path::StsHour24PathThresholds::StsHour24PathThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path_threshold.is_set || is_set(path_threshold.yfilter)) leaf_name_data.push_back(path_threshold.get_name_leafdata());
    if (path_threshold_value.is_set || is_set(path_threshold_value.yfilter)) leaf_name_data.push_back(path_threshold_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24::StsHour24Path::StsHour24PathThresholds::StsHour24PathThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24::StsHour24Path::StsHour24PathThresholds::StsHour24PathThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24::StsHour24Path::StsHour24PathThresholds::StsHour24PathThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path-threshold")
    {
        path_threshold = value;
        path_threshold.value_namespace = name_space;
        path_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-threshold-value")
    {
        path_threshold_value = value;
        path_threshold_value.value_namespace = name_space;
        path_threshold_value.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24::StsHour24Path::StsHour24PathThresholds::StsHour24PathThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path-threshold")
    {
        path_threshold.yfilter = yfilter;
    }
    if(value_path == "path-threshold-value")
    {
        path_threshold_value.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24::StsHour24Path::StsHour24PathThresholds::StsHour24PathThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-threshold" || name == "path-threshold-value")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15()
    :
    sts_minute15_path(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path>())
{
    sts_minute15_path->parent = this;

    yang_name = "sts-minute15"; yang_parent_name = "performance-management"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::~StsMinute15()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::has_data() const
{
    return (sts_minute15_path !=  nullptr && sts_minute15_path->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::has_operation() const
{
    return is_set(yfilter)
	|| (sts_minute15_path !=  nullptr && sts_minute15_path->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sts-minute15";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sts-minute15-path")
    {
        if(sts_minute15_path == nullptr)
        {
            sts_minute15_path = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path>();
        }
        return sts_minute15_path;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(sts_minute15_path != nullptr)
    {
        children["sts-minute15-path"] = sts_minute15_path;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sts-minute15-path")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15Path()
    :
    sts_minute15_path_reports(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathReports>())
	,sts_minute15_path_thresholds(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathThresholds>())
{
    sts_minute15_path_reports->parent = this;
    sts_minute15_path_thresholds->parent = this;

    yang_name = "sts-minute15-path"; yang_parent_name = "sts-minute15"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::~StsMinute15Path()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::has_data() const
{
    return (sts_minute15_path_reports !=  nullptr && sts_minute15_path_reports->has_data())
	|| (sts_minute15_path_thresholds !=  nullptr && sts_minute15_path_thresholds->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::has_operation() const
{
    return is_set(yfilter)
	|| (sts_minute15_path_reports !=  nullptr && sts_minute15_path_reports->has_operation())
	|| (sts_minute15_path_thresholds !=  nullptr && sts_minute15_path_thresholds->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sts-minute15-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sts-minute15-path-reports")
    {
        if(sts_minute15_path_reports == nullptr)
        {
            sts_minute15_path_reports = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathReports>();
        }
        return sts_minute15_path_reports;
    }

    if(child_yang_name == "sts-minute15-path-thresholds")
    {
        if(sts_minute15_path_thresholds == nullptr)
        {
            sts_minute15_path_thresholds = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathThresholds>();
        }
        return sts_minute15_path_thresholds;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(sts_minute15_path_reports != nullptr)
    {
        children["sts-minute15-path-reports"] = sts_minute15_path_reports;
    }

    if(sts_minute15_path_thresholds != nullptr)
    {
        children["sts-minute15-path-thresholds"] = sts_minute15_path_thresholds;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sts-minute15-path-reports" || name == "sts-minute15-path-thresholds")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathReports::StsMinute15PathReports()
{

    yang_name = "sts-minute15-path-reports"; yang_parent_name = "sts-minute15-path"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathReports::~StsMinute15PathReports()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathReports::has_data() const
{
    for (std::size_t index=0; index<sts_minute15_path_report.size(); index++)
    {
        if(sts_minute15_path_report[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathReports::has_operation() const
{
    for (std::size_t index=0; index<sts_minute15_path_report.size(); index++)
    {
        if(sts_minute15_path_report[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathReports::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sts-minute15-path-reports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathReports::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathReports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sts-minute15-path-report")
    {
        for(auto const & c : sts_minute15_path_report)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathReports::StsMinute15PathReport>();
        c->parent = this;
        sts_minute15_path_report.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathReports::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sts_minute15_path_report)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathReports::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathReports::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathReports::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sts-minute15-path-report")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathReports::StsMinute15PathReport::StsMinute15PathReport()
    :
    path_report{YType::enumeration, "path-report"},
    enable{YType::enumeration, "enable"}
{

    yang_name = "sts-minute15-path-report"; yang_parent_name = "sts-minute15-path-reports"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathReports::StsMinute15PathReport::~StsMinute15PathReport()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathReports::StsMinute15PathReport::has_data() const
{
    return path_report.is_set
	|| enable.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathReports::StsMinute15PathReport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path_report.yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathReports::StsMinute15PathReport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sts-minute15-path-report" <<"[path-report='" <<path_report <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathReports::StsMinute15PathReport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path_report.is_set || is_set(path_report.yfilter)) leaf_name_data.push_back(path_report.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathReports::StsMinute15PathReport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathReports::StsMinute15PathReport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathReports::StsMinute15PathReport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path-report")
    {
        path_report = value;
        path_report.value_namespace = name_space;
        path_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathReports::StsMinute15PathReport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path-report")
    {
        path_report.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathReports::StsMinute15PathReport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-report" || name == "enable")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathThresholds::StsMinute15PathThresholds()
{

    yang_name = "sts-minute15-path-thresholds"; yang_parent_name = "sts-minute15-path"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathThresholds::~StsMinute15PathThresholds()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathThresholds::has_data() const
{
    for (std::size_t index=0; index<sts_minute15_path_threshold.size(); index++)
    {
        if(sts_minute15_path_threshold[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathThresholds::has_operation() const
{
    for (std::size_t index=0; index<sts_minute15_path_threshold.size(); index++)
    {
        if(sts_minute15_path_threshold[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathThresholds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sts-minute15-path-thresholds";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathThresholds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathThresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sts-minute15-path-threshold")
    {
        for(auto const & c : sts_minute15_path_threshold)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathThresholds::StsMinute15PathThreshold>();
        c->parent = this;
        sts_minute15_path_threshold.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathThresholds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sts_minute15_path_threshold)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathThresholds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathThresholds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathThresholds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sts-minute15-path-threshold")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathThresholds::StsMinute15PathThreshold::StsMinute15PathThreshold()
    :
    path_threshold{YType::enumeration, "path-threshold"},
    path_threshold_value{YType::int32, "path-threshold-value"}
{

    yang_name = "sts-minute15-path-threshold"; yang_parent_name = "sts-minute15-path-thresholds"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathThresholds::StsMinute15PathThreshold::~StsMinute15PathThreshold()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathThresholds::StsMinute15PathThreshold::has_data() const
{
    return path_threshold.is_set
	|| path_threshold_value.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathThresholds::StsMinute15PathThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path_threshold.yfilter)
	|| ydk::is_set(path_threshold_value.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathThresholds::StsMinute15PathThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sts-minute15-path-threshold" <<"[path-threshold='" <<path_threshold <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathThresholds::StsMinute15PathThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path_threshold.is_set || is_set(path_threshold.yfilter)) leaf_name_data.push_back(path_threshold.get_name_leafdata());
    if (path_threshold_value.is_set || is_set(path_threshold_value.yfilter)) leaf_name_data.push_back(path_threshold_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathThresholds::StsMinute15PathThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathThresholds::StsMinute15PathThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathThresholds::StsMinute15PathThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path-threshold")
    {
        path_threshold = value;
        path_threshold.value_namespace = name_space;
        path_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-threshold-value")
    {
        path_threshold_value = value;
        path_threshold_value.value_namespace = name_space;
        path_threshold_value.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathThresholds::StsMinute15PathThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path-threshold")
    {
        path_threshold.yfilter = yfilter;
    }
    if(value_path == "path-threshold-value")
    {
        path_threshold_value.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathThresholds::StsMinute15PathThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-threshold" || name == "path-threshold-value")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Portmode::Portmode()
    :
    diff_sel{YType::enumeration, "diff-sel"},
    fec_sel{YType::enumeration, "fec-sel"},
    speed_sel{YType::enumeration, "speed-sel"}
{

    yang_name = "portmode"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Portmode::~Portmode()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Portmode::has_data() const
{
    return diff_sel.is_set
	|| fec_sel.is_set
	|| speed_sel.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Portmode::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(diff_sel.yfilter)
	|| ydk::is_set(fec_sel.yfilter)
	|| ydk::is_set(speed_sel.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Portmode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ncs5500-coherent-portmode-cfg:portmode";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Portmode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (diff_sel.is_set || is_set(diff_sel.yfilter)) leaf_name_data.push_back(diff_sel.get_name_leafdata());
    if (fec_sel.is_set || is_set(fec_sel.yfilter)) leaf_name_data.push_back(fec_sel.get_name_leafdata());
    if (speed_sel.is_set || is_set(speed_sel.yfilter)) leaf_name_data.push_back(speed_sel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Portmode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Portmode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Portmode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "diff-sel")
    {
        diff_sel = value;
        diff_sel.value_namespace = name_space;
        diff_sel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fec-sel")
    {
        fec_sel = value;
        fec_sel.value_namespace = name_space;
        fec_sel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "speed-sel")
    {
        speed_sel = value;
        speed_sel.value_namespace = name_space;
        speed_sel.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Portmode::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "diff-sel")
    {
        diff_sel.yfilter = yfilter;
    }
    if(value_path == "fec-sel")
    {
        fec_sel.yfilter = yfilter;
    }
    if(value_path == "speed-sel")
    {
        speed_sel.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Portmode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "diff-sel" || name == "fec-sel" || name == "speed-sel")
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
    bba_group_name{YType::str, "bba-group-name"},
    enable{YType::boolean, "enable"}
{

    yang_name = "enable-bba-group"; yang_parent_name = "pppoe"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Pppoe::EnableBbaGroup::~EnableBbaGroup()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Pppoe::EnableBbaGroup::has_data() const
{
    return bba_group_name.is_set
	|| enable.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Pppoe::EnableBbaGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bba_group_name.yfilter)
	|| ydk::is_set(enable.yfilter);
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

    if (bba_group_name.is_set || is_set(bba_group_name.yfilter)) leaf_name_data.push_back(bba_group_name.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

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
    if(value_path == "bba-group-name")
    {
        bba_group_name = value;
        bba_group_name.value_namespace = name_space;
        bba_group_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Pppoe::EnableBbaGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bba-group-name")
    {
        bba_group_name.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Pppoe::EnableBbaGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bba-group-name" || name == "enable")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PseudowireEther::PseudowireEther()
    :
    generic_interface_list{YType::str, "generic-interface-list"},
    l2_overhead{YType::uint32, "l2-overhead"}
{

    yang_name = "pseudowire-ether"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PseudowireEther::~PseudowireEther()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PseudowireEther::has_data() const
{
    return generic_interface_list.is_set
	|| l2_overhead.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PseudowireEther::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(generic_interface_list.yfilter)
	|| ydk::is_set(l2_overhead.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PseudowireEther::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-cfg:pseudowire-ether";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PseudowireEther::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (generic_interface_list.is_set || is_set(generic_interface_list.yfilter)) leaf_name_data.push_back(generic_interface_list.get_name_leafdata());
    if (l2_overhead.is_set || is_set(l2_overhead.yfilter)) leaf_name_data.push_back(l2_overhead.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PseudowireEther::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PseudowireEther::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PseudowireEther::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "generic-interface-list")
    {
        generic_interface_list = value;
        generic_interface_list.value_namespace = name_space;
        generic_interface_list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2-overhead")
    {
        l2_overhead = value;
        l2_overhead.value_namespace = name_space;
        l2_overhead.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::PseudowireEther::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "generic-interface-list")
    {
        generic_interface_list.yfilter = yfilter;
    }
    if(value_path == "l2-overhead")
    {
        l2_overhead.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::PseudowireEther::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "generic-interface-list" || name == "l2-overhead")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PseudowireIw::PseudowireIw()
    :
    generic_interface_list{YType::str, "generic-interface-list"},
    l2_overhead{YType::uint32, "l2-overhead"}
{

    yang_name = "pseudowire-iw"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PseudowireIw::~PseudowireIw()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PseudowireIw::has_data() const
{
    return generic_interface_list.is_set
	|| l2_overhead.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PseudowireIw::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(generic_interface_list.yfilter)
	|| ydk::is_set(l2_overhead.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PseudowireIw::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-cfg:pseudowire-iw";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PseudowireIw::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (generic_interface_list.is_set || is_set(generic_interface_list.yfilter)) leaf_name_data.push_back(generic_interface_list.get_name_leafdata());
    if (l2_overhead.is_set || is_set(l2_overhead.yfilter)) leaf_name_data.push_back(l2_overhead.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PseudowireIw::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PseudowireIw::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PseudowireIw::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "generic-interface-list")
    {
        generic_interface_list = value;
        generic_interface_list.value_namespace = name_space;
        generic_interface_list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2-overhead")
    {
        l2_overhead = value;
        l2_overhead.value_namespace = name_space;
        l2_overhead.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::PseudowireIw::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "generic-interface-list")
    {
        generic_interface_list.yfilter = yfilter;
    }
    if(value_path == "l2-overhead")
    {
        l2_overhead.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::PseudowireIw::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "generic-interface-list" || name == "l2-overhead")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ptp::Ptp()
    :
    announce_grant_duration{YType::uint32, "announce-grant-duration"},
    announce_timeout{YType::uint32, "announce-timeout"},
    clock_operation{YType::enumeration, "clock-operation"},
    cos{YType::uint32, "cos"},
    delay_response_grant_duration{YType::uint32, "delay-response-grant-duration"},
    delay_response_timeout{YType::uint32, "delay-response-timeout"},
    dscp{YType::uint32, "dscp"},
    enable{YType::empty, "enable"},
    event_cos{YType::uint32, "event-cos"},
    event_dscp{YType::uint32, "event-dscp"},
    general_cos{YType::uint32, "general-cos"},
    general_dscp{YType::uint32, "general-dscp"},
    local_priority{YType::uint32, "local-priority"},
    port_state{YType::enumeration, "port-state"},
    profile{YType::str, "profile"},
    sync_grant_duration{YType::uint32, "sync-grant-duration"},
    sync_timeout{YType::uint32, "sync-timeout"},
    transport{YType::enumeration, "transport"},
    unicast_grant_invalid_request{YType::enumeration, "unicast-grant-invalid-request"}
    	,
    announce_interval(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ptp::AnnounceInterval>())
	,communication(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ptp::Communication>())
	,delay_request_minimum_interval(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ptp::DelayRequestMinimumInterval>())
	,masters(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters>())
	,slaves(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ptp::Slaves>())
	,source_ipv4_address(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ptp::SourceIpv4Address>())
	,source_ipv6_address(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ptp::SourceIpv6Address>())
	,sync_interval(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ptp::SyncInterval>())
{
    announce_interval->parent = this;
    communication->parent = this;
    delay_request_minimum_interval->parent = this;
    masters->parent = this;
    slaves->parent = this;
    source_ipv4_address->parent = this;
    source_ipv6_address->parent = this;
    sync_interval->parent = this;

    yang_name = "ptp"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Ptp::~Ptp()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ptp::has_data() const
{
    return announce_grant_duration.is_set
	|| announce_timeout.is_set
	|| clock_operation.is_set
	|| cos.is_set
	|| delay_response_grant_duration.is_set
	|| delay_response_timeout.is_set
	|| dscp.is_set
	|| enable.is_set
	|| event_cos.is_set
	|| event_dscp.is_set
	|| general_cos.is_set
	|| general_dscp.is_set
	|| local_priority.is_set
	|| port_state.is_set
	|| profile.is_set
	|| sync_grant_duration.is_set
	|| sync_timeout.is_set
	|| transport.is_set
	|| unicast_grant_invalid_request.is_set
	|| (announce_interval !=  nullptr && announce_interval->has_data())
	|| (communication !=  nullptr && communication->has_data())
	|| (delay_request_minimum_interval !=  nullptr && delay_request_minimum_interval->has_data())
	|| (masters !=  nullptr && masters->has_data())
	|| (slaves !=  nullptr && slaves->has_data())
	|| (source_ipv4_address !=  nullptr && source_ipv4_address->has_data())
	|| (source_ipv6_address !=  nullptr && source_ipv6_address->has_data())
	|| (sync_interval !=  nullptr && sync_interval->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Ptp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(announce_grant_duration.yfilter)
	|| ydk::is_set(announce_timeout.yfilter)
	|| ydk::is_set(clock_operation.yfilter)
	|| ydk::is_set(cos.yfilter)
	|| ydk::is_set(delay_response_grant_duration.yfilter)
	|| ydk::is_set(delay_response_timeout.yfilter)
	|| ydk::is_set(dscp.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(event_cos.yfilter)
	|| ydk::is_set(event_dscp.yfilter)
	|| ydk::is_set(general_cos.yfilter)
	|| ydk::is_set(general_dscp.yfilter)
	|| ydk::is_set(local_priority.yfilter)
	|| ydk::is_set(port_state.yfilter)
	|| ydk::is_set(profile.yfilter)
	|| ydk::is_set(sync_grant_duration.yfilter)
	|| ydk::is_set(sync_timeout.yfilter)
	|| ydk::is_set(transport.yfilter)
	|| ydk::is_set(unicast_grant_invalid_request.yfilter)
	|| (announce_interval !=  nullptr && announce_interval->has_operation())
	|| (communication !=  nullptr && communication->has_operation())
	|| (delay_request_minimum_interval !=  nullptr && delay_request_minimum_interval->has_operation())
	|| (masters !=  nullptr && masters->has_operation())
	|| (slaves !=  nullptr && slaves->has_operation())
	|| (source_ipv4_address !=  nullptr && source_ipv4_address->has_operation())
	|| (source_ipv6_address !=  nullptr && source_ipv6_address->has_operation())
	|| (sync_interval !=  nullptr && sync_interval->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ptp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ptp-cfg:ptp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ptp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (announce_grant_duration.is_set || is_set(announce_grant_duration.yfilter)) leaf_name_data.push_back(announce_grant_duration.get_name_leafdata());
    if (announce_timeout.is_set || is_set(announce_timeout.yfilter)) leaf_name_data.push_back(announce_timeout.get_name_leafdata());
    if (clock_operation.is_set || is_set(clock_operation.yfilter)) leaf_name_data.push_back(clock_operation.get_name_leafdata());
    if (cos.is_set || is_set(cos.yfilter)) leaf_name_data.push_back(cos.get_name_leafdata());
    if (delay_response_grant_duration.is_set || is_set(delay_response_grant_duration.yfilter)) leaf_name_data.push_back(delay_response_grant_duration.get_name_leafdata());
    if (delay_response_timeout.is_set || is_set(delay_response_timeout.yfilter)) leaf_name_data.push_back(delay_response_timeout.get_name_leafdata());
    if (dscp.is_set || is_set(dscp.yfilter)) leaf_name_data.push_back(dscp.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (event_cos.is_set || is_set(event_cos.yfilter)) leaf_name_data.push_back(event_cos.get_name_leafdata());
    if (event_dscp.is_set || is_set(event_dscp.yfilter)) leaf_name_data.push_back(event_dscp.get_name_leafdata());
    if (general_cos.is_set || is_set(general_cos.yfilter)) leaf_name_data.push_back(general_cos.get_name_leafdata());
    if (general_dscp.is_set || is_set(general_dscp.yfilter)) leaf_name_data.push_back(general_dscp.get_name_leafdata());
    if (local_priority.is_set || is_set(local_priority.yfilter)) leaf_name_data.push_back(local_priority.get_name_leafdata());
    if (port_state.is_set || is_set(port_state.yfilter)) leaf_name_data.push_back(port_state.get_name_leafdata());
    if (profile.is_set || is_set(profile.yfilter)) leaf_name_data.push_back(profile.get_name_leafdata());
    if (sync_grant_duration.is_set || is_set(sync_grant_duration.yfilter)) leaf_name_data.push_back(sync_grant_duration.get_name_leafdata());
    if (sync_timeout.is_set || is_set(sync_timeout.yfilter)) leaf_name_data.push_back(sync_timeout.get_name_leafdata());
    if (transport.is_set || is_set(transport.yfilter)) leaf_name_data.push_back(transport.get_name_leafdata());
    if (unicast_grant_invalid_request.is_set || is_set(unicast_grant_invalid_request.yfilter)) leaf_name_data.push_back(unicast_grant_invalid_request.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ptp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "announce-interval")
    {
        if(announce_interval == nullptr)
        {
            announce_interval = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ptp::AnnounceInterval>();
        }
        return announce_interval;
    }

    if(child_yang_name == "communication")
    {
        if(communication == nullptr)
        {
            communication = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ptp::Communication>();
        }
        return communication;
    }

    if(child_yang_name == "delay-request-minimum-interval")
    {
        if(delay_request_minimum_interval == nullptr)
        {
            delay_request_minimum_interval = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ptp::DelayRequestMinimumInterval>();
        }
        return delay_request_minimum_interval;
    }

    if(child_yang_name == "masters")
    {
        if(masters == nullptr)
        {
            masters = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters>();
        }
        return masters;
    }

    if(child_yang_name == "slaves")
    {
        if(slaves == nullptr)
        {
            slaves = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ptp::Slaves>();
        }
        return slaves;
    }

    if(child_yang_name == "source-ipv4-address")
    {
        if(source_ipv4_address == nullptr)
        {
            source_ipv4_address = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ptp::SourceIpv4Address>();
        }
        return source_ipv4_address;
    }

    if(child_yang_name == "source-ipv6-address")
    {
        if(source_ipv6_address == nullptr)
        {
            source_ipv6_address = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ptp::SourceIpv6Address>();
        }
        return source_ipv6_address;
    }

    if(child_yang_name == "sync-interval")
    {
        if(sync_interval == nullptr)
        {
            sync_interval = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ptp::SyncInterval>();
        }
        return sync_interval;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ptp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(announce_interval != nullptr)
    {
        children["announce-interval"] = announce_interval;
    }

    if(communication != nullptr)
    {
        children["communication"] = communication;
    }

    if(delay_request_minimum_interval != nullptr)
    {
        children["delay-request-minimum-interval"] = delay_request_minimum_interval;
    }

    if(masters != nullptr)
    {
        children["masters"] = masters;
    }

    if(slaves != nullptr)
    {
        children["slaves"] = slaves;
    }

    if(source_ipv4_address != nullptr)
    {
        children["source-ipv4-address"] = source_ipv4_address;
    }

    if(source_ipv6_address != nullptr)
    {
        children["source-ipv6-address"] = source_ipv6_address;
    }

    if(sync_interval != nullptr)
    {
        children["sync-interval"] = sync_interval;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ptp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "announce-grant-duration")
    {
        announce_grant_duration = value;
        announce_grant_duration.value_namespace = name_space;
        announce_grant_duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "announce-timeout")
    {
        announce_timeout = value;
        announce_timeout.value_namespace = name_space;
        announce_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clock-operation")
    {
        clock_operation = value;
        clock_operation.value_namespace = name_space;
        clock_operation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cos")
    {
        cos = value;
        cos.value_namespace = name_space;
        cos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delay-response-grant-duration")
    {
        delay_response_grant_duration = value;
        delay_response_grant_duration.value_namespace = name_space;
        delay_response_grant_duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delay-response-timeout")
    {
        delay_response_timeout = value;
        delay_response_timeout.value_namespace = name_space;
        delay_response_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dscp")
    {
        dscp = value;
        dscp.value_namespace = name_space;
        dscp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "event-cos")
    {
        event_cos = value;
        event_cos.value_namespace = name_space;
        event_cos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "event-dscp")
    {
        event_dscp = value;
        event_dscp.value_namespace = name_space;
        event_dscp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "general-cos")
    {
        general_cos = value;
        general_cos.value_namespace = name_space;
        general_cos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "general-dscp")
    {
        general_dscp = value;
        general_dscp.value_namespace = name_space;
        general_dscp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-priority")
    {
        local_priority = value;
        local_priority.value_namespace = name_space;
        local_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-state")
    {
        port_state = value;
        port_state.value_namespace = name_space;
        port_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "profile")
    {
        profile = value;
        profile.value_namespace = name_space;
        profile.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sync-grant-duration")
    {
        sync_grant_duration = value;
        sync_grant_duration.value_namespace = name_space;
        sync_grant_duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sync-timeout")
    {
        sync_timeout = value;
        sync_timeout.value_namespace = name_space;
        sync_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transport")
    {
        transport = value;
        transport.value_namespace = name_space;
        transport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unicast-grant-invalid-request")
    {
        unicast_grant_invalid_request = value;
        unicast_grant_invalid_request.value_namespace = name_space;
        unicast_grant_invalid_request.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Ptp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "announce-grant-duration")
    {
        announce_grant_duration.yfilter = yfilter;
    }
    if(value_path == "announce-timeout")
    {
        announce_timeout.yfilter = yfilter;
    }
    if(value_path == "clock-operation")
    {
        clock_operation.yfilter = yfilter;
    }
    if(value_path == "cos")
    {
        cos.yfilter = yfilter;
    }
    if(value_path == "delay-response-grant-duration")
    {
        delay_response_grant_duration.yfilter = yfilter;
    }
    if(value_path == "delay-response-timeout")
    {
        delay_response_timeout.yfilter = yfilter;
    }
    if(value_path == "dscp")
    {
        dscp.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "event-cos")
    {
        event_cos.yfilter = yfilter;
    }
    if(value_path == "event-dscp")
    {
        event_dscp.yfilter = yfilter;
    }
    if(value_path == "general-cos")
    {
        general_cos.yfilter = yfilter;
    }
    if(value_path == "general-dscp")
    {
        general_dscp.yfilter = yfilter;
    }
    if(value_path == "local-priority")
    {
        local_priority.yfilter = yfilter;
    }
    if(value_path == "port-state")
    {
        port_state.yfilter = yfilter;
    }
    if(value_path == "profile")
    {
        profile.yfilter = yfilter;
    }
    if(value_path == "sync-grant-duration")
    {
        sync_grant_duration.yfilter = yfilter;
    }
    if(value_path == "sync-timeout")
    {
        sync_timeout.yfilter = yfilter;
    }
    if(value_path == "transport")
    {
        transport.yfilter = yfilter;
    }
    if(value_path == "unicast-grant-invalid-request")
    {
        unicast_grant_invalid_request.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Ptp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "announce-interval" || name == "communication" || name == "delay-request-minimum-interval" || name == "masters" || name == "slaves" || name == "source-ipv4-address" || name == "source-ipv6-address" || name == "sync-interval" || name == "announce-grant-duration" || name == "announce-timeout" || name == "clock-operation" || name == "cos" || name == "delay-response-grant-duration" || name == "delay-response-timeout" || name == "dscp" || name == "enable" || name == "event-cos" || name == "event-dscp" || name == "general-cos" || name == "general-dscp" || name == "local-priority" || name == "port-state" || name == "profile" || name == "sync-grant-duration" || name == "sync-timeout" || name == "transport" || name == "unicast-grant-invalid-request")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ptp::AnnounceInterval::AnnounceInterval()
    :
    time_period{YType::enumeration, "time-period"},
    time_type{YType::enumeration, "time-type"}
{

    yang_name = "announce-interval"; yang_parent_name = "ptp"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Ptp::AnnounceInterval::~AnnounceInterval()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ptp::AnnounceInterval::has_data() const
{
    return time_period.is_set
	|| time_type.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ptp::AnnounceInterval::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(time_period.yfilter)
	|| ydk::is_set(time_type.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ptp::AnnounceInterval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "announce-interval";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ptp::AnnounceInterval::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_period.is_set || is_set(time_period.yfilter)) leaf_name_data.push_back(time_period.get_name_leafdata());
    if (time_type.is_set || is_set(time_type.yfilter)) leaf_name_data.push_back(time_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ptp::AnnounceInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ptp::AnnounceInterval::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ptp::AnnounceInterval::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time-period")
    {
        time_period = value;
        time_period.value_namespace = name_space;
        time_period.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-type")
    {
        time_type = value;
        time_type.value_namespace = name_space;
        time_type.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Ptp::AnnounceInterval::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time-period")
    {
        time_period.yfilter = yfilter;
    }
    if(value_path == "time-type")
    {
        time_type.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Ptp::AnnounceInterval::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time-period" || name == "time-type")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ptp::Communication::Communication()
    :
    model{YType::enumeration, "model"},
    target_address{YType::str, "target-address"},
    target_address_set{YType::boolean, "target-address-set"}
{

    yang_name = "communication"; yang_parent_name = "ptp"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Ptp::Communication::~Communication()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ptp::Communication::has_data() const
{
    return model.is_set
	|| target_address.is_set
	|| target_address_set.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ptp::Communication::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(model.yfilter)
	|| ydk::is_set(target_address.yfilter)
	|| ydk::is_set(target_address_set.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ptp::Communication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "communication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ptp::Communication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (model.is_set || is_set(model.yfilter)) leaf_name_data.push_back(model.get_name_leafdata());
    if (target_address.is_set || is_set(target_address.yfilter)) leaf_name_data.push_back(target_address.get_name_leafdata());
    if (target_address_set.is_set || is_set(target_address_set.yfilter)) leaf_name_data.push_back(target_address_set.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ptp::Communication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ptp::Communication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ptp::Communication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "model")
    {
        model = value;
        model.value_namespace = name_space;
        model.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "target-address")
    {
        target_address = value;
        target_address.value_namespace = name_space;
        target_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "target-address-set")
    {
        target_address_set = value;
        target_address_set.value_namespace = name_space;
        target_address_set.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Ptp::Communication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "model")
    {
        model.yfilter = yfilter;
    }
    if(value_path == "target-address")
    {
        target_address.yfilter = yfilter;
    }
    if(value_path == "target-address-set")
    {
        target_address_set.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Ptp::Communication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "model" || name == "target-address" || name == "target-address-set")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ptp::DelayRequestMinimumInterval::DelayRequestMinimumInterval()
    :
    time_period{YType::enumeration, "time-period"},
    time_type{YType::enumeration, "time-type"}
{

    yang_name = "delay-request-minimum-interval"; yang_parent_name = "ptp"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Ptp::DelayRequestMinimumInterval::~DelayRequestMinimumInterval()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ptp::DelayRequestMinimumInterval::has_data() const
{
    return time_period.is_set
	|| time_type.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ptp::DelayRequestMinimumInterval::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(time_period.yfilter)
	|| ydk::is_set(time_type.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ptp::DelayRequestMinimumInterval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay-request-minimum-interval";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ptp::DelayRequestMinimumInterval::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_period.is_set || is_set(time_period.yfilter)) leaf_name_data.push_back(time_period.get_name_leafdata());
    if (time_type.is_set || is_set(time_type.yfilter)) leaf_name_data.push_back(time_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ptp::DelayRequestMinimumInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ptp::DelayRequestMinimumInterval::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ptp::DelayRequestMinimumInterval::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time-period")
    {
        time_period = value;
        time_period.value_namespace = name_space;
        time_period.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-type")
    {
        time_type = value;
        time_type.value_namespace = name_space;
        time_type.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Ptp::DelayRequestMinimumInterval::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time-period")
    {
        time_period.yfilter = yfilter;
    }
    if(value_path == "time-type")
    {
        time_type.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Ptp::DelayRequestMinimumInterval::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time-period" || name == "time-type")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Masters()
{

    yang_name = "masters"; yang_parent_name = "ptp"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::~Masters()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::has_data() const
{
    for (std::size_t index=0; index<master.size(); index++)
    {
        if(master[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::has_operation() const
{
    for (std::size_t index=0; index<master.size(); index++)
    {
        if(master[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "masters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "master")
    {
        for(auto const & c : master)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master>();
        c->parent = this;
        master.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : master)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "master")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master::Master()
    :
    transport{YType::enumeration, "transport"}
{

    yang_name = "master"; yang_parent_name = "masters"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master::~Master()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master::has_data() const
{
    for (std::size_t index=0; index<ethernet.size(); index++)
    {
        if(ethernet[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ipv4_or_ipv6.size(); index++)
    {
        if(ipv4_or_ipv6[index]->has_data())
            return true;
    }
    return transport.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master::has_operation() const
{
    for (std::size_t index=0; index<ethernet.size(); index++)
    {
        if(ethernet[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ipv4_or_ipv6.size(); index++)
    {
        if(ipv4_or_ipv6[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(transport.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "master" <<"[transport='" <<transport <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (transport.is_set || is_set(transport.yfilter)) leaf_name_data.push_back(transport.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ethernet")
    {
        for(auto const & c : ethernet)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master::Ethernet>();
        c->parent = this;
        ethernet.push_back(c);
        return c;
    }

    if(child_yang_name == "ipv4-or-ipv6")
    {
        for(auto const & c : ipv4_or_ipv6)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master::Ipv4OrIpv6>();
        c->parent = this;
        ipv4_or_ipv6.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ethernet)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : ipv4_or_ipv6)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "transport")
    {
        transport = value;
        transport.value_namespace = name_space;
        transport.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "transport")
    {
        transport.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ethernet" || name == "ipv4-or-ipv6" || name == "transport")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master::Ethernet::Ethernet()
    :
    master_mac_address{YType::str, "master-mac-address"},
    communication{YType::enumeration, "communication"},
    master_clock_class{YType::uint32, "master-clock-class"},
    non_negotiated{YType::boolean, "non-negotiated"},
    priority{YType::uint32, "priority"}
    	,
    delay_asymmetry(nullptr) // presence node
{

    yang_name = "ethernet"; yang_parent_name = "master"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master::Ethernet::~Ethernet()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master::Ethernet::has_data() const
{
    return master_mac_address.is_set
	|| communication.is_set
	|| master_clock_class.is_set
	|| non_negotiated.is_set
	|| priority.is_set
	|| (delay_asymmetry !=  nullptr && delay_asymmetry->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master::Ethernet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(master_mac_address.yfilter)
	|| ydk::is_set(communication.yfilter)
	|| ydk::is_set(master_clock_class.yfilter)
	|| ydk::is_set(non_negotiated.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| (delay_asymmetry !=  nullptr && delay_asymmetry->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master::Ethernet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ethernet" <<"[master-mac-address='" <<master_mac_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master::Ethernet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (master_mac_address.is_set || is_set(master_mac_address.yfilter)) leaf_name_data.push_back(master_mac_address.get_name_leafdata());
    if (communication.is_set || is_set(communication.yfilter)) leaf_name_data.push_back(communication.get_name_leafdata());
    if (master_clock_class.is_set || is_set(master_clock_class.yfilter)) leaf_name_data.push_back(master_clock_class.get_name_leafdata());
    if (non_negotiated.is_set || is_set(non_negotiated.yfilter)) leaf_name_data.push_back(non_negotiated.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master::Ethernet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "delay-asymmetry")
    {
        if(delay_asymmetry == nullptr)
        {
            delay_asymmetry = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master::Ethernet::DelayAsymmetry>();
        }
        return delay_asymmetry;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master::Ethernet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(delay_asymmetry != nullptr)
    {
        children["delay-asymmetry"] = delay_asymmetry;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master::Ethernet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "master-mac-address")
    {
        master_mac_address = value;
        master_mac_address.value_namespace = name_space;
        master_mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "communication")
    {
        communication = value;
        communication.value_namespace = name_space;
        communication.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "master-clock-class")
    {
        master_clock_class = value;
        master_clock_class.value_namespace = name_space;
        master_clock_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "non-negotiated")
    {
        non_negotiated = value;
        non_negotiated.value_namespace = name_space;
        non_negotiated.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master::Ethernet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "master-mac-address")
    {
        master_mac_address.yfilter = yfilter;
    }
    if(value_path == "communication")
    {
        communication.yfilter = yfilter;
    }
    if(value_path == "master-clock-class")
    {
        master_clock_class.yfilter = yfilter;
    }
    if(value_path == "non-negotiated")
    {
        non_negotiated.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master::Ethernet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "delay-asymmetry" || name == "master-mac-address" || name == "communication" || name == "master-clock-class" || name == "non-negotiated" || name == "priority")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master::Ethernet::DelayAsymmetry::DelayAsymmetry()
    :
    magnitude{YType::int32, "magnitude"},
    units{YType::enumeration, "units"}
{

    yang_name = "delay-asymmetry"; yang_parent_name = "ethernet"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master::Ethernet::DelayAsymmetry::~DelayAsymmetry()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master::Ethernet::DelayAsymmetry::has_data() const
{
    return magnitude.is_set
	|| units.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master::Ethernet::DelayAsymmetry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(magnitude.yfilter)
	|| ydk::is_set(units.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master::Ethernet::DelayAsymmetry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay-asymmetry";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master::Ethernet::DelayAsymmetry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (magnitude.is_set || is_set(magnitude.yfilter)) leaf_name_data.push_back(magnitude.get_name_leafdata());
    if (units.is_set || is_set(units.yfilter)) leaf_name_data.push_back(units.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master::Ethernet::DelayAsymmetry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master::Ethernet::DelayAsymmetry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master::Ethernet::DelayAsymmetry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "magnitude")
    {
        magnitude = value;
        magnitude.value_namespace = name_space;
        magnitude.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "units")
    {
        units = value;
        units.value_namespace = name_space;
        units.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master::Ethernet::DelayAsymmetry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "magnitude")
    {
        magnitude.yfilter = yfilter;
    }
    if(value_path == "units")
    {
        units.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master::Ethernet::DelayAsymmetry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "magnitude" || name == "units")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master::Ipv4OrIpv6::Ipv4OrIpv6()
    :
    master_ip_address{YType::str, "master-ip-address"},
    communication{YType::enumeration, "communication"},
    master_clock_class{YType::uint32, "master-clock-class"},
    non_negotiated{YType::boolean, "non-negotiated"},
    priority{YType::uint32, "priority"}
    	,
    delay_asymmetry(nullptr) // presence node
{

    yang_name = "ipv4-or-ipv6"; yang_parent_name = "master"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master::Ipv4OrIpv6::~Ipv4OrIpv6()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master::Ipv4OrIpv6::has_data() const
{
    return master_ip_address.is_set
	|| communication.is_set
	|| master_clock_class.is_set
	|| non_negotiated.is_set
	|| priority.is_set
	|| (delay_asymmetry !=  nullptr && delay_asymmetry->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master::Ipv4OrIpv6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(master_ip_address.yfilter)
	|| ydk::is_set(communication.yfilter)
	|| ydk::is_set(master_clock_class.yfilter)
	|| ydk::is_set(non_negotiated.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| (delay_asymmetry !=  nullptr && delay_asymmetry->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master::Ipv4OrIpv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-or-ipv6" <<"[master-ip-address='" <<master_ip_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master::Ipv4OrIpv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (master_ip_address.is_set || is_set(master_ip_address.yfilter)) leaf_name_data.push_back(master_ip_address.get_name_leafdata());
    if (communication.is_set || is_set(communication.yfilter)) leaf_name_data.push_back(communication.get_name_leafdata());
    if (master_clock_class.is_set || is_set(master_clock_class.yfilter)) leaf_name_data.push_back(master_clock_class.get_name_leafdata());
    if (non_negotiated.is_set || is_set(non_negotiated.yfilter)) leaf_name_data.push_back(non_negotiated.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master::Ipv4OrIpv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "delay-asymmetry")
    {
        if(delay_asymmetry == nullptr)
        {
            delay_asymmetry = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master::Ipv4OrIpv6::DelayAsymmetry>();
        }
        return delay_asymmetry;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master::Ipv4OrIpv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(delay_asymmetry != nullptr)
    {
        children["delay-asymmetry"] = delay_asymmetry;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master::Ipv4OrIpv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "master-ip-address")
    {
        master_ip_address = value;
        master_ip_address.value_namespace = name_space;
        master_ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "communication")
    {
        communication = value;
        communication.value_namespace = name_space;
        communication.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "master-clock-class")
    {
        master_clock_class = value;
        master_clock_class.value_namespace = name_space;
        master_clock_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "non-negotiated")
    {
        non_negotiated = value;
        non_negotiated.value_namespace = name_space;
        non_negotiated.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master::Ipv4OrIpv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "master-ip-address")
    {
        master_ip_address.yfilter = yfilter;
    }
    if(value_path == "communication")
    {
        communication.yfilter = yfilter;
    }
    if(value_path == "master-clock-class")
    {
        master_clock_class.yfilter = yfilter;
    }
    if(value_path == "non-negotiated")
    {
        non_negotiated.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master::Ipv4OrIpv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "delay-asymmetry" || name == "master-ip-address" || name == "communication" || name == "master-clock-class" || name == "non-negotiated" || name == "priority")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master::Ipv4OrIpv6::DelayAsymmetry::DelayAsymmetry()
    :
    magnitude{YType::int32, "magnitude"},
    units{YType::enumeration, "units"}
{

    yang_name = "delay-asymmetry"; yang_parent_name = "ipv4-or-ipv6"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master::Ipv4OrIpv6::DelayAsymmetry::~DelayAsymmetry()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master::Ipv4OrIpv6::DelayAsymmetry::has_data() const
{
    return magnitude.is_set
	|| units.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master::Ipv4OrIpv6::DelayAsymmetry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(magnitude.yfilter)
	|| ydk::is_set(units.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master::Ipv4OrIpv6::DelayAsymmetry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay-asymmetry";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master::Ipv4OrIpv6::DelayAsymmetry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (magnitude.is_set || is_set(magnitude.yfilter)) leaf_name_data.push_back(magnitude.get_name_leafdata());
    if (units.is_set || is_set(units.yfilter)) leaf_name_data.push_back(units.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master::Ipv4OrIpv6::DelayAsymmetry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master::Ipv4OrIpv6::DelayAsymmetry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master::Ipv4OrIpv6::DelayAsymmetry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "magnitude")
    {
        magnitude = value;
        magnitude.value_namespace = name_space;
        magnitude.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "units")
    {
        units = value;
        units.value_namespace = name_space;
        units.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master::Ipv4OrIpv6::DelayAsymmetry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "magnitude")
    {
        magnitude.yfilter = yfilter;
    }
    if(value_path == "units")
    {
        units.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master::Ipv4OrIpv6::DelayAsymmetry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "magnitude" || name == "units")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ptp::Slaves::Slaves()
{

    yang_name = "slaves"; yang_parent_name = "ptp"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Ptp::Slaves::~Slaves()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ptp::Slaves::has_data() const
{
    for (std::size_t index=0; index<slave.size(); index++)
    {
        if(slave[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ptp::Slaves::has_operation() const
{
    for (std::size_t index=0; index<slave.size(); index++)
    {
        if(slave[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ptp::Slaves::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "slaves";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ptp::Slaves::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ptp::Slaves::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "slave")
    {
        for(auto const & c : slave)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ptp::Slaves::Slave>();
        c->parent = this;
        slave.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ptp::Slaves::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : slave)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ptp::Slaves::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::Ptp::Slaves::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ptp::Slaves::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "slave")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ptp::Slaves::Slave::Slave()
    :
    transport{YType::enumeration, "transport"}
{

    yang_name = "slave"; yang_parent_name = "slaves"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Ptp::Slaves::Slave::~Slave()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ptp::Slaves::Slave::has_data() const
{
    for (std::size_t index=0; index<ethernet.size(); index++)
    {
        if(ethernet[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ipv4_or_ipv6.size(); index++)
    {
        if(ipv4_or_ipv6[index]->has_data())
            return true;
    }
    return transport.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ptp::Slaves::Slave::has_operation() const
{
    for (std::size_t index=0; index<ethernet.size(); index++)
    {
        if(ethernet[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ipv4_or_ipv6.size(); index++)
    {
        if(ipv4_or_ipv6[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(transport.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ptp::Slaves::Slave::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "slave" <<"[transport='" <<transport <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ptp::Slaves::Slave::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (transport.is_set || is_set(transport.yfilter)) leaf_name_data.push_back(transport.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ptp::Slaves::Slave::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ethernet")
    {
        for(auto const & c : ethernet)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ptp::Slaves::Slave::Ethernet>();
        c->parent = this;
        ethernet.push_back(c);
        return c;
    }

    if(child_yang_name == "ipv4-or-ipv6")
    {
        for(auto const & c : ipv4_or_ipv6)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ptp::Slaves::Slave::Ipv4OrIpv6>();
        c->parent = this;
        ipv4_or_ipv6.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ptp::Slaves::Slave::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ethernet)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : ipv4_or_ipv6)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ptp::Slaves::Slave::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "transport")
    {
        transport = value;
        transport.value_namespace = name_space;
        transport.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Ptp::Slaves::Slave::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "transport")
    {
        transport.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Ptp::Slaves::Slave::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ethernet" || name == "ipv4-or-ipv6" || name == "transport")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ptp::Slaves::Slave::Ethernet::Ethernet()
    :
    slave_mac_address{YType::str, "slave-mac-address"},
    non_negotiated{YType::boolean, "non-negotiated"}
{

    yang_name = "ethernet"; yang_parent_name = "slave"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Ptp::Slaves::Slave::Ethernet::~Ethernet()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ptp::Slaves::Slave::Ethernet::has_data() const
{
    return slave_mac_address.is_set
	|| non_negotiated.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ptp::Slaves::Slave::Ethernet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(slave_mac_address.yfilter)
	|| ydk::is_set(non_negotiated.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ptp::Slaves::Slave::Ethernet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ethernet" <<"[slave-mac-address='" <<slave_mac_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ptp::Slaves::Slave::Ethernet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (slave_mac_address.is_set || is_set(slave_mac_address.yfilter)) leaf_name_data.push_back(slave_mac_address.get_name_leafdata());
    if (non_negotiated.is_set || is_set(non_negotiated.yfilter)) leaf_name_data.push_back(non_negotiated.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ptp::Slaves::Slave::Ethernet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ptp::Slaves::Slave::Ethernet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ptp::Slaves::Slave::Ethernet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "slave-mac-address")
    {
        slave_mac_address = value;
        slave_mac_address.value_namespace = name_space;
        slave_mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "non-negotiated")
    {
        non_negotiated = value;
        non_negotiated.value_namespace = name_space;
        non_negotiated.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Ptp::Slaves::Slave::Ethernet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "slave-mac-address")
    {
        slave_mac_address.yfilter = yfilter;
    }
    if(value_path == "non-negotiated")
    {
        non_negotiated.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Ptp::Slaves::Slave::Ethernet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "slave-mac-address" || name == "non-negotiated")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ptp::Slaves::Slave::Ipv4OrIpv6::Ipv4OrIpv6()
    :
    slave_ip_address{YType::str, "slave-ip-address"},
    non_negotiated{YType::boolean, "non-negotiated"}
{

    yang_name = "ipv4-or-ipv6"; yang_parent_name = "slave"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Ptp::Slaves::Slave::Ipv4OrIpv6::~Ipv4OrIpv6()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ptp::Slaves::Slave::Ipv4OrIpv6::has_data() const
{
    return slave_ip_address.is_set
	|| non_negotiated.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ptp::Slaves::Slave::Ipv4OrIpv6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(slave_ip_address.yfilter)
	|| ydk::is_set(non_negotiated.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ptp::Slaves::Slave::Ipv4OrIpv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-or-ipv6" <<"[slave-ip-address='" <<slave_ip_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ptp::Slaves::Slave::Ipv4OrIpv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (slave_ip_address.is_set || is_set(slave_ip_address.yfilter)) leaf_name_data.push_back(slave_ip_address.get_name_leafdata());
    if (non_negotiated.is_set || is_set(non_negotiated.yfilter)) leaf_name_data.push_back(non_negotiated.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ptp::Slaves::Slave::Ipv4OrIpv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ptp::Slaves::Slave::Ipv4OrIpv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ptp::Slaves::Slave::Ipv4OrIpv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "slave-ip-address")
    {
        slave_ip_address = value;
        slave_ip_address.value_namespace = name_space;
        slave_ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "non-negotiated")
    {
        non_negotiated = value;
        non_negotiated.value_namespace = name_space;
        non_negotiated.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Ptp::Slaves::Slave::Ipv4OrIpv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "slave-ip-address")
    {
        slave_ip_address.yfilter = yfilter;
    }
    if(value_path == "non-negotiated")
    {
        non_negotiated.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Ptp::Slaves::Slave::Ipv4OrIpv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "slave-ip-address" || name == "non-negotiated")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ptp::SourceIpv4Address::SourceIpv4Address()
    :
    enable{YType::boolean, "enable"},
    source_ip{YType::str, "source-ip"}
{

    yang_name = "source-ipv4-address"; yang_parent_name = "ptp"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Ptp::SourceIpv4Address::~SourceIpv4Address()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ptp::SourceIpv4Address::has_data() const
{
    return enable.is_set
	|| source_ip.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ptp::SourceIpv4Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(source_ip.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ptp::SourceIpv4Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-ipv4-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ptp::SourceIpv4Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (source_ip.is_set || is_set(source_ip.yfilter)) leaf_name_data.push_back(source_ip.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ptp::SourceIpv4Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ptp::SourceIpv4Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ptp::SourceIpv4Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-ip")
    {
        source_ip = value;
        source_ip.value_namespace = name_space;
        source_ip.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Ptp::SourceIpv4Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "source-ip")
    {
        source_ip.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Ptp::SourceIpv4Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "source-ip")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ptp::SourceIpv6Address::SourceIpv6Address()
    :
    enable{YType::boolean, "enable"},
    source_ipv6{YType::str, "source-ipv6"}
{

    yang_name = "source-ipv6-address"; yang_parent_name = "ptp"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Ptp::SourceIpv6Address::~SourceIpv6Address()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ptp::SourceIpv6Address::has_data() const
{
    return enable.is_set
	|| source_ipv6.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ptp::SourceIpv6Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(source_ipv6.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ptp::SourceIpv6Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-ipv6-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ptp::SourceIpv6Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (source_ipv6.is_set || is_set(source_ipv6.yfilter)) leaf_name_data.push_back(source_ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ptp::SourceIpv6Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ptp::SourceIpv6Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ptp::SourceIpv6Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-ipv6")
    {
        source_ipv6 = value;
        source_ipv6.value_namespace = name_space;
        source_ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Ptp::SourceIpv6Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "source-ipv6")
    {
        source_ipv6.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Ptp::SourceIpv6Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "source-ipv6")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ptp::SyncInterval::SyncInterval()
    :
    time_period{YType::enumeration, "time-period"},
    time_type{YType::enumeration, "time-type"}
{

    yang_name = "sync-interval"; yang_parent_name = "ptp"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Ptp::SyncInterval::~SyncInterval()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ptp::SyncInterval::has_data() const
{
    return time_period.is_set
	|| time_type.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ptp::SyncInterval::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(time_period.yfilter)
	|| ydk::is_set(time_type.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ptp::SyncInterval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sync-interval";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ptp::SyncInterval::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_period.is_set || is_set(time_period.yfilter)) leaf_name_data.push_back(time_period.get_name_leafdata());
    if (time_type.is_set || is_set(time_type.yfilter)) leaf_name_data.push_back(time_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ptp::SyncInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ptp::SyncInterval::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ptp::SyncInterval::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time-period")
    {
        time_period = value;
        time_period.value_namespace = name_space;
        time_period.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-type")
    {
        time_type = value;
        time_type.value_namespace = name_space;
        time_type.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Ptp::SyncInterval::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time-period")
    {
        time_period.yfilter = yfilter;
    }
    if(value_path == "time-type")
    {
        time_type.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Ptp::SyncInterval::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time-period" || name == "time-type")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Qos::Qos()
    :
    input(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Qos::Input>())
	,output(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Qos::Output>())
{
    input->parent = this;
    output->parent = this;

    yang_name = "qos"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Qos::~Qos()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Qos::has_data() const
{
    return (input !=  nullptr && input->has_data())
	|| (output !=  nullptr && output->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Qos::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation())
	|| (output !=  nullptr && output->has_operation());
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
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Qos::Input>();
        }
        return input;
    }

    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Qos::Output>();
        }
        return output;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Qos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    if(output != nullptr)
    {
        children["output"] = output;
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
    if(name == "input" || name == "output")
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


}
}

