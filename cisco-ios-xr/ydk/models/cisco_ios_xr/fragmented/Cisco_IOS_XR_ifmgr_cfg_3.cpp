
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

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24pcs::Hour24pcsReports::Hour24pcsReport::Hour24pcsReport()
    :
    pcs_report{YType::enumeration, "pcs-report"},
    enable{YType::enumeration, "enable"}
{

    yang_name = "hour24pcs-report"; yang_parent_name = "hour24pcs-reports"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24pcs::Hour24pcsReports::Hour24pcsReport::~Hour24pcsReport()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24pcs::Hour24pcsReports::Hour24pcsReport::has_data() const
{
    if (is_presence_container) return true;
    return pcs_report.is_set
	|| enable.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24pcs::Hour24pcsReports::Hour24pcsReport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pcs_report.yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24pcs::Hour24pcsReports::Hour24pcsReport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24pcs-report";
    ADD_KEY_TOKEN(pcs_report, "pcs-report");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24pcs::Hour24pcsReports::Hour24pcsReport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pcs_report.is_set || is_set(pcs_report.yfilter)) leaf_name_data.push_back(pcs_report.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24pcs::Hour24pcsReports::Hour24pcsReport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24pcs::Hour24pcsReports::Hour24pcsReport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24pcs::Hour24pcsReports::Hour24pcsReport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pcs-report")
    {
        pcs_report = value;
        pcs_report.value_namespace = name_space;
        pcs_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24pcs::Hour24pcsReports::Hour24pcsReport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pcs-report")
    {
        pcs_report.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24pcs::Hour24pcsReports::Hour24pcsReport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pcs-report" || name == "enable")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24fec::Hour24fec()
    :
    hour24fec_thresholds(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24fec::Hour24fecThresholds>())
    , hour24fec_reports(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24fec::Hour24fecReports>())
{
    hour24fec_thresholds->parent = this;
    hour24fec_reports->parent = this;

    yang_name = "hour24fec"; yang_parent_name = "hour24"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24fec::~Hour24fec()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24fec::has_data() const
{
    if (is_presence_container) return true;
    return (hour24fec_thresholds !=  nullptr && hour24fec_thresholds->has_data())
	|| (hour24fec_reports !=  nullptr && hour24fec_reports->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24fec::has_operation() const
{
    return is_set(yfilter)
	|| (hour24fec_thresholds !=  nullptr && hour24fec_thresholds->has_operation())
	|| (hour24fec_reports !=  nullptr && hour24fec_reports->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24fec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24fec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24fec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24fec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hour24fec-thresholds")
    {
        if(hour24fec_thresholds == nullptr)
        {
            hour24fec_thresholds = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24fec::Hour24fecThresholds>();
        }
        return hour24fec_thresholds;
    }

    if(child_yang_name == "hour24fec-reports")
    {
        if(hour24fec_reports == nullptr)
        {
            hour24fec_reports = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24fec::Hour24fecReports>();
        }
        return hour24fec_reports;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24fec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(hour24fec_thresholds != nullptr)
    {
        children["hour24fec-thresholds"] = hour24fec_thresholds;
    }

    if(hour24fec_reports != nullptr)
    {
        children["hour24fec-reports"] = hour24fec_reports;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24fec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24fec::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24fec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hour24fec-thresholds" || name == "hour24fec-reports")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24fec::Hour24fecThresholds::Hour24fecThresholds()
    :
    hour24fec_threshold(this, {"fec_threshold"})
{

    yang_name = "hour24fec-thresholds"; yang_parent_name = "hour24fec"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24fec::Hour24fecThresholds::~Hour24fecThresholds()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24fec::Hour24fecThresholds::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<hour24fec_threshold.len(); index++)
    {
        if(hour24fec_threshold[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24fec::Hour24fecThresholds::has_operation() const
{
    for (std::size_t index=0; index<hour24fec_threshold.len(); index++)
    {
        if(hour24fec_threshold[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24fec::Hour24fecThresholds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24fec-thresholds";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24fec::Hour24fecThresholds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24fec::Hour24fecThresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hour24fec-threshold")
    {
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24fec::Hour24fecThresholds::Hour24fecThreshold>();
        c->parent = this;
        hour24fec_threshold.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24fec::Hour24fecThresholds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : hour24fec_threshold.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24fec::Hour24fecThresholds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24fec::Hour24fecThresholds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24fec::Hour24fecThresholds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hour24fec-threshold")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24fec::Hour24fecThresholds::Hour24fecThreshold::Hour24fecThreshold()
    :
    fec_threshold{YType::enumeration, "fec-threshold"},
    fec_threshold_value{YType::str, "fec-threshold-value"}
{

    yang_name = "hour24fec-threshold"; yang_parent_name = "hour24fec-thresholds"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24fec::Hour24fecThresholds::Hour24fecThreshold::~Hour24fecThreshold()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24fec::Hour24fecThresholds::Hour24fecThreshold::has_data() const
{
    if (is_presence_container) return true;
    return fec_threshold.is_set
	|| fec_threshold_value.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24fec::Hour24fecThresholds::Hour24fecThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fec_threshold.yfilter)
	|| ydk::is_set(fec_threshold_value.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24fec::Hour24fecThresholds::Hour24fecThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24fec-threshold";
    ADD_KEY_TOKEN(fec_threshold, "fec-threshold");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24fec::Hour24fecThresholds::Hour24fecThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fec_threshold.is_set || is_set(fec_threshold.yfilter)) leaf_name_data.push_back(fec_threshold.get_name_leafdata());
    if (fec_threshold_value.is_set || is_set(fec_threshold_value.yfilter)) leaf_name_data.push_back(fec_threshold_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24fec::Hour24fecThresholds::Hour24fecThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24fec::Hour24fecThresholds::Hour24fecThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24fec::Hour24fecThresholds::Hour24fecThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24fec::Hour24fecThresholds::Hour24fecThreshold::set_filter(const std::string & value_path, YFilter yfilter)
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

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24fec::Hour24fecThresholds::Hour24fecThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fec-threshold" || name == "fec-threshold-value")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24fec::Hour24fecReports::Hour24fecReports()
    :
    hour24fec_report(this, {"fec_report"})
{

    yang_name = "hour24fec-reports"; yang_parent_name = "hour24fec"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24fec::Hour24fecReports::~Hour24fecReports()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24fec::Hour24fecReports::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<hour24fec_report.len(); index++)
    {
        if(hour24fec_report[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24fec::Hour24fecReports::has_operation() const
{
    for (std::size_t index=0; index<hour24fec_report.len(); index++)
    {
        if(hour24fec_report[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24fec::Hour24fecReports::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24fec-reports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24fec::Hour24fecReports::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24fec::Hour24fecReports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hour24fec-report")
    {
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24fec::Hour24fecReports::Hour24fecReport>();
        c->parent = this;
        hour24fec_report.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24fec::Hour24fecReports::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : hour24fec_report.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24fec::Hour24fecReports::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24fec::Hour24fecReports::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24fec::Hour24fecReports::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hour24fec-report")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24fec::Hour24fecReports::Hour24fecReport::Hour24fecReport()
    :
    fec_report{YType::enumeration, "fec-report"},
    enable{YType::enumeration, "enable"}
{

    yang_name = "hour24fec-report"; yang_parent_name = "hour24fec-reports"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24fec::Hour24fecReports::Hour24fecReport::~Hour24fecReport()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24fec::Hour24fecReports::Hour24fecReport::has_data() const
{
    if (is_presence_container) return true;
    return fec_report.is_set
	|| enable.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24fec::Hour24fecReports::Hour24fecReport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fec_report.yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24fec::Hour24fecReports::Hour24fecReport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24fec-report";
    ADD_KEY_TOKEN(fec_report, "fec-report");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24fec::Hour24fecReports::Hour24fecReport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fec_report.is_set || is_set(fec_report.yfilter)) leaf_name_data.push_back(fec_report.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24fec::Hour24fecReports::Hour24fecReport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24fec::Hour24fecReports::Hour24fecReport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24fec::Hour24fecReports::Hour24fecReport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24fec::Hour24fecReports::Hour24fecReport::set_filter(const std::string & value_path, YFilter yfilter)
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

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24fec::Hour24fecReports::Hour24fecReport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fec-report" || name == "enable")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secyif::Hour24secyif()
    :
    hour24secyif_reports(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secyif::Hour24secyifReports>())
    , hour24secyif_thresholds(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secyif::Hour24secyifThresholds>())
{
    hour24secyif_reports->parent = this;
    hour24secyif_thresholds->parent = this;

    yang_name = "hour24secyif"; yang_parent_name = "hour24"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secyif::~Hour24secyif()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secyif::has_data() const
{
    if (is_presence_container) return true;
    return (hour24secyif_reports !=  nullptr && hour24secyif_reports->has_data())
	|| (hour24secyif_thresholds !=  nullptr && hour24secyif_thresholds->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secyif::has_operation() const
{
    return is_set(yfilter)
	|| (hour24secyif_reports !=  nullptr && hour24secyif_reports->has_operation())
	|| (hour24secyif_thresholds !=  nullptr && hour24secyif_thresholds->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secyif::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24secyif";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secyif::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secyif::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hour24secyif-reports")
    {
        if(hour24secyif_reports == nullptr)
        {
            hour24secyif_reports = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secyif::Hour24secyifReports>();
        }
        return hour24secyif_reports;
    }

    if(child_yang_name == "hour24secyif-thresholds")
    {
        if(hour24secyif_thresholds == nullptr)
        {
            hour24secyif_thresholds = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secyif::Hour24secyifThresholds>();
        }
        return hour24secyif_thresholds;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secyif::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(hour24secyif_reports != nullptr)
    {
        children["hour24secyif-reports"] = hour24secyif_reports;
    }

    if(hour24secyif_thresholds != nullptr)
    {
        children["hour24secyif-thresholds"] = hour24secyif_thresholds;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secyif::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secyif::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secyif::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hour24secyif-reports" || name == "hour24secyif-thresholds")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secyif::Hour24secyifReports::Hour24secyifReports()
    :
    hour24secyif_report(this, {"secyif_report"})
{

    yang_name = "hour24secyif-reports"; yang_parent_name = "hour24secyif"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secyif::Hour24secyifReports::~Hour24secyifReports()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secyif::Hour24secyifReports::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<hour24secyif_report.len(); index++)
    {
        if(hour24secyif_report[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secyif::Hour24secyifReports::has_operation() const
{
    for (std::size_t index=0; index<hour24secyif_report.len(); index++)
    {
        if(hour24secyif_report[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secyif::Hour24secyifReports::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24secyif-reports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secyif::Hour24secyifReports::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secyif::Hour24secyifReports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hour24secyif-report")
    {
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secyif::Hour24secyifReports::Hour24secyifReport>();
        c->parent = this;
        hour24secyif_report.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secyif::Hour24secyifReports::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : hour24secyif_report.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secyif::Hour24secyifReports::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secyif::Hour24secyifReports::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secyif::Hour24secyifReports::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hour24secyif-report")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secyif::Hour24secyifReports::Hour24secyifReport::Hour24secyifReport()
    :
    secyif_report{YType::enumeration, "secyif-report"},
    enable{YType::enumeration, "enable"}
{

    yang_name = "hour24secyif-report"; yang_parent_name = "hour24secyif-reports"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secyif::Hour24secyifReports::Hour24secyifReport::~Hour24secyifReport()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secyif::Hour24secyifReports::Hour24secyifReport::has_data() const
{
    if (is_presence_container) return true;
    return secyif_report.is_set
	|| enable.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secyif::Hour24secyifReports::Hour24secyifReport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(secyif_report.yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secyif::Hour24secyifReports::Hour24secyifReport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24secyif-report";
    ADD_KEY_TOKEN(secyif_report, "secyif-report");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secyif::Hour24secyifReports::Hour24secyifReport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (secyif_report.is_set || is_set(secyif_report.yfilter)) leaf_name_data.push_back(secyif_report.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secyif::Hour24secyifReports::Hour24secyifReport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secyif::Hour24secyifReports::Hour24secyifReport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secyif::Hour24secyifReports::Hour24secyifReport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secyif::Hour24secyifReports::Hour24secyifReport::set_filter(const std::string & value_path, YFilter yfilter)
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

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secyif::Hour24secyifReports::Hour24secyifReport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "secyif-report" || name == "enable")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secyif::Hour24secyifThresholds::Hour24secyifThresholds()
    :
    hour24secyif_threshold(this, {"secyif_threshold"})
{

    yang_name = "hour24secyif-thresholds"; yang_parent_name = "hour24secyif"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secyif::Hour24secyifThresholds::~Hour24secyifThresholds()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secyif::Hour24secyifThresholds::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<hour24secyif_threshold.len(); index++)
    {
        if(hour24secyif_threshold[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secyif::Hour24secyifThresholds::has_operation() const
{
    for (std::size_t index=0; index<hour24secyif_threshold.len(); index++)
    {
        if(hour24secyif_threshold[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secyif::Hour24secyifThresholds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24secyif-thresholds";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secyif::Hour24secyifThresholds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secyif::Hour24secyifThresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hour24secyif-threshold")
    {
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secyif::Hour24secyifThresholds::Hour24secyifThreshold>();
        c->parent = this;
        hour24secyif_threshold.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secyif::Hour24secyifThresholds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : hour24secyif_threshold.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secyif::Hour24secyifThresholds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secyif::Hour24secyifThresholds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secyif::Hour24secyifThresholds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hour24secyif-threshold")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secyif::Hour24secyifThresholds::Hour24secyifThreshold::Hour24secyifThreshold()
    :
    secyif_threshold{YType::enumeration, "secyif-threshold"},
    secyif_threshold_value{YType::uint32, "secyif-threshold-value"}
{

    yang_name = "hour24secyif-threshold"; yang_parent_name = "hour24secyif-thresholds"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secyif::Hour24secyifThresholds::Hour24secyifThreshold::~Hour24secyifThreshold()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secyif::Hour24secyifThresholds::Hour24secyifThreshold::has_data() const
{
    if (is_presence_container) return true;
    return secyif_threshold.is_set
	|| secyif_threshold_value.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secyif::Hour24secyifThresholds::Hour24secyifThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(secyif_threshold.yfilter)
	|| ydk::is_set(secyif_threshold_value.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secyif::Hour24secyifThresholds::Hour24secyifThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24secyif-threshold";
    ADD_KEY_TOKEN(secyif_threshold, "secyif-threshold");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secyif::Hour24secyifThresholds::Hour24secyifThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (secyif_threshold.is_set || is_set(secyif_threshold.yfilter)) leaf_name_data.push_back(secyif_threshold.get_name_leafdata());
    if (secyif_threshold_value.is_set || is_set(secyif_threshold_value.yfilter)) leaf_name_data.push_back(secyif_threshold_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secyif::Hour24secyifThresholds::Hour24secyifThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secyif::Hour24secyifThresholds::Hour24secyifThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secyif::Hour24secyifThresholds::Hour24secyifThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secyif::Hour24secyifThresholds::Hour24secyifThreshold::set_filter(const std::string & value_path, YFilter yfilter)
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

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secyif::Hour24secyifThresholds::Hour24secyifThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "secyif-threshold" || name == "secyif-threshold-value")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secyrx::Hour24secyrx()
    :
    hour24secyrx_reports(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secyrx::Hour24secyrxReports>())
    , hour24secyrx_thresholds(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secyrx::Hour24secyrxThresholds>())
{
    hour24secyrx_reports->parent = this;
    hour24secyrx_thresholds->parent = this;

    yang_name = "hour24secyrx"; yang_parent_name = "hour24"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secyrx::~Hour24secyrx()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secyrx::has_data() const
{
    if (is_presence_container) return true;
    return (hour24secyrx_reports !=  nullptr && hour24secyrx_reports->has_data())
	|| (hour24secyrx_thresholds !=  nullptr && hour24secyrx_thresholds->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secyrx::has_operation() const
{
    return is_set(yfilter)
	|| (hour24secyrx_reports !=  nullptr && hour24secyrx_reports->has_operation())
	|| (hour24secyrx_thresholds !=  nullptr && hour24secyrx_thresholds->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secyrx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24secyrx";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secyrx::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secyrx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hour24secyrx-reports")
    {
        if(hour24secyrx_reports == nullptr)
        {
            hour24secyrx_reports = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secyrx::Hour24secyrxReports>();
        }
        return hour24secyrx_reports;
    }

    if(child_yang_name == "hour24secyrx-thresholds")
    {
        if(hour24secyrx_thresholds == nullptr)
        {
            hour24secyrx_thresholds = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secyrx::Hour24secyrxThresholds>();
        }
        return hour24secyrx_thresholds;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secyrx::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(hour24secyrx_reports != nullptr)
    {
        children["hour24secyrx-reports"] = hour24secyrx_reports;
    }

    if(hour24secyrx_thresholds != nullptr)
    {
        children["hour24secyrx-thresholds"] = hour24secyrx_thresholds;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secyrx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secyrx::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secyrx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hour24secyrx-reports" || name == "hour24secyrx-thresholds")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secyrx::Hour24secyrxReports::Hour24secyrxReports()
    :
    hour24secyrx_report(this, {"secyrx_report"})
{

    yang_name = "hour24secyrx-reports"; yang_parent_name = "hour24secyrx"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secyrx::Hour24secyrxReports::~Hour24secyrxReports()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secyrx::Hour24secyrxReports::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<hour24secyrx_report.len(); index++)
    {
        if(hour24secyrx_report[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secyrx::Hour24secyrxReports::has_operation() const
{
    for (std::size_t index=0; index<hour24secyrx_report.len(); index++)
    {
        if(hour24secyrx_report[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secyrx::Hour24secyrxReports::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24secyrx-reports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secyrx::Hour24secyrxReports::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secyrx::Hour24secyrxReports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hour24secyrx-report")
    {
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secyrx::Hour24secyrxReports::Hour24secyrxReport>();
        c->parent = this;
        hour24secyrx_report.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secyrx::Hour24secyrxReports::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : hour24secyrx_report.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secyrx::Hour24secyrxReports::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secyrx::Hour24secyrxReports::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secyrx::Hour24secyrxReports::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hour24secyrx-report")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secyrx::Hour24secyrxReports::Hour24secyrxReport::Hour24secyrxReport()
    :
    secyrx_report{YType::enumeration, "secyrx-report"},
    enable{YType::enumeration, "enable"}
{

    yang_name = "hour24secyrx-report"; yang_parent_name = "hour24secyrx-reports"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secyrx::Hour24secyrxReports::Hour24secyrxReport::~Hour24secyrxReport()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secyrx::Hour24secyrxReports::Hour24secyrxReport::has_data() const
{
    if (is_presence_container) return true;
    return secyrx_report.is_set
	|| enable.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secyrx::Hour24secyrxReports::Hour24secyrxReport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(secyrx_report.yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secyrx::Hour24secyrxReports::Hour24secyrxReport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24secyrx-report";
    ADD_KEY_TOKEN(secyrx_report, "secyrx-report");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secyrx::Hour24secyrxReports::Hour24secyrxReport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (secyrx_report.is_set || is_set(secyrx_report.yfilter)) leaf_name_data.push_back(secyrx_report.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secyrx::Hour24secyrxReports::Hour24secyrxReport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secyrx::Hour24secyrxReports::Hour24secyrxReport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secyrx::Hour24secyrxReports::Hour24secyrxReport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secyrx::Hour24secyrxReports::Hour24secyrxReport::set_filter(const std::string & value_path, YFilter yfilter)
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

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secyrx::Hour24secyrxReports::Hour24secyrxReport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "secyrx-report" || name == "enable")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secyrx::Hour24secyrxThresholds::Hour24secyrxThresholds()
    :
    hour24secyrx_threshold(this, {"secyrx_threshold"})
{

    yang_name = "hour24secyrx-thresholds"; yang_parent_name = "hour24secyrx"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secyrx::Hour24secyrxThresholds::~Hour24secyrxThresholds()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secyrx::Hour24secyrxThresholds::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<hour24secyrx_threshold.len(); index++)
    {
        if(hour24secyrx_threshold[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secyrx::Hour24secyrxThresholds::has_operation() const
{
    for (std::size_t index=0; index<hour24secyrx_threshold.len(); index++)
    {
        if(hour24secyrx_threshold[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secyrx::Hour24secyrxThresholds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24secyrx-thresholds";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secyrx::Hour24secyrxThresholds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secyrx::Hour24secyrxThresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hour24secyrx-threshold")
    {
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secyrx::Hour24secyrxThresholds::Hour24secyrxThreshold>();
        c->parent = this;
        hour24secyrx_threshold.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secyrx::Hour24secyrxThresholds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : hour24secyrx_threshold.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secyrx::Hour24secyrxThresholds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secyrx::Hour24secyrxThresholds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secyrx::Hour24secyrxThresholds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hour24secyrx-threshold")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secyrx::Hour24secyrxThresholds::Hour24secyrxThreshold::Hour24secyrxThreshold()
    :
    secyrx_threshold{YType::enumeration, "secyrx-threshold"},
    secyrx_threshold_value{YType::uint32, "secyrx-threshold-value"}
{

    yang_name = "hour24secyrx-threshold"; yang_parent_name = "hour24secyrx-thresholds"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secyrx::Hour24secyrxThresholds::Hour24secyrxThreshold::~Hour24secyrxThreshold()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secyrx::Hour24secyrxThresholds::Hour24secyrxThreshold::has_data() const
{
    if (is_presence_container) return true;
    return secyrx_threshold.is_set
	|| secyrx_threshold_value.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secyrx::Hour24secyrxThresholds::Hour24secyrxThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(secyrx_threshold.yfilter)
	|| ydk::is_set(secyrx_threshold_value.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secyrx::Hour24secyrxThresholds::Hour24secyrxThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24secyrx-threshold";
    ADD_KEY_TOKEN(secyrx_threshold, "secyrx-threshold");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secyrx::Hour24secyrxThresholds::Hour24secyrxThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (secyrx_threshold.is_set || is_set(secyrx_threshold.yfilter)) leaf_name_data.push_back(secyrx_threshold.get_name_leafdata());
    if (secyrx_threshold_value.is_set || is_set(secyrx_threshold_value.yfilter)) leaf_name_data.push_back(secyrx_threshold_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secyrx::Hour24secyrxThresholds::Hour24secyrxThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secyrx::Hour24secyrxThresholds::Hour24secyrxThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secyrx::Hour24secyrxThresholds::Hour24secyrxThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secyrx::Hour24secyrxThresholds::Hour24secyrxThreshold::set_filter(const std::string & value_path, YFilter yfilter)
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

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secyrx::Hour24secyrxThresholds::Hour24secyrxThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "secyrx-threshold" || name == "secyrx-threshold-value")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secytx::Hour24secytx()
    :
    hour24secytx_thresholds(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secytx::Hour24secytxThresholds>())
    , hour24secytx_reports(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secytx::Hour24secytxReports>())
{
    hour24secytx_thresholds->parent = this;
    hour24secytx_reports->parent = this;

    yang_name = "hour24secytx"; yang_parent_name = "hour24"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secytx::~Hour24secytx()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secytx::has_data() const
{
    if (is_presence_container) return true;
    return (hour24secytx_thresholds !=  nullptr && hour24secytx_thresholds->has_data())
	|| (hour24secytx_reports !=  nullptr && hour24secytx_reports->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secytx::has_operation() const
{
    return is_set(yfilter)
	|| (hour24secytx_thresholds !=  nullptr && hour24secytx_thresholds->has_operation())
	|| (hour24secytx_reports !=  nullptr && hour24secytx_reports->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secytx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24secytx";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secytx::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secytx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hour24secytx-thresholds")
    {
        if(hour24secytx_thresholds == nullptr)
        {
            hour24secytx_thresholds = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secytx::Hour24secytxThresholds>();
        }
        return hour24secytx_thresholds;
    }

    if(child_yang_name == "hour24secytx-reports")
    {
        if(hour24secytx_reports == nullptr)
        {
            hour24secytx_reports = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secytx::Hour24secytxReports>();
        }
        return hour24secytx_reports;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secytx::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(hour24secytx_thresholds != nullptr)
    {
        children["hour24secytx-thresholds"] = hour24secytx_thresholds;
    }

    if(hour24secytx_reports != nullptr)
    {
        children["hour24secytx-reports"] = hour24secytx_reports;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secytx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secytx::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secytx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hour24secytx-thresholds" || name == "hour24secytx-reports")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secytx::Hour24secytxThresholds::Hour24secytxThresholds()
    :
    hour24secytx_threshold(this, {"secytx_threshold"})
{

    yang_name = "hour24secytx-thresholds"; yang_parent_name = "hour24secytx"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secytx::Hour24secytxThresholds::~Hour24secytxThresholds()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secytx::Hour24secytxThresholds::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<hour24secytx_threshold.len(); index++)
    {
        if(hour24secytx_threshold[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secytx::Hour24secytxThresholds::has_operation() const
{
    for (std::size_t index=0; index<hour24secytx_threshold.len(); index++)
    {
        if(hour24secytx_threshold[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secytx::Hour24secytxThresholds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24secytx-thresholds";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secytx::Hour24secytxThresholds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secytx::Hour24secytxThresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hour24secytx-threshold")
    {
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secytx::Hour24secytxThresholds::Hour24secytxThreshold>();
        c->parent = this;
        hour24secytx_threshold.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secytx::Hour24secytxThresholds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : hour24secytx_threshold.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secytx::Hour24secytxThresholds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secytx::Hour24secytxThresholds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secytx::Hour24secytxThresholds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hour24secytx-threshold")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secytx::Hour24secytxThresholds::Hour24secytxThreshold::Hour24secytxThreshold()
    :
    secytx_threshold{YType::enumeration, "secytx-threshold"},
    secytx_threshold_value{YType::uint32, "secytx-threshold-value"}
{

    yang_name = "hour24secytx-threshold"; yang_parent_name = "hour24secytx-thresholds"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secytx::Hour24secytxThresholds::Hour24secytxThreshold::~Hour24secytxThreshold()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secytx::Hour24secytxThresholds::Hour24secytxThreshold::has_data() const
{
    if (is_presence_container) return true;
    return secytx_threshold.is_set
	|| secytx_threshold_value.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secytx::Hour24secytxThresholds::Hour24secytxThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(secytx_threshold.yfilter)
	|| ydk::is_set(secytx_threshold_value.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secytx::Hour24secytxThresholds::Hour24secytxThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24secytx-threshold";
    ADD_KEY_TOKEN(secytx_threshold, "secytx-threshold");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secytx::Hour24secytxThresholds::Hour24secytxThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (secytx_threshold.is_set || is_set(secytx_threshold.yfilter)) leaf_name_data.push_back(secytx_threshold.get_name_leafdata());
    if (secytx_threshold_value.is_set || is_set(secytx_threshold_value.yfilter)) leaf_name_data.push_back(secytx_threshold_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secytx::Hour24secytxThresholds::Hour24secytxThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secytx::Hour24secytxThresholds::Hour24secytxThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secytx::Hour24secytxThresholds::Hour24secytxThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secytx::Hour24secytxThresholds::Hour24secytxThreshold::set_filter(const std::string & value_path, YFilter yfilter)
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

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secytx::Hour24secytxThresholds::Hour24secytxThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "secytx-threshold" || name == "secytx-threshold-value")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secytx::Hour24secytxReports::Hour24secytxReports()
    :
    hour24secytx_report(this, {"secytx_report"})
{

    yang_name = "hour24secytx-reports"; yang_parent_name = "hour24secytx"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secytx::Hour24secytxReports::~Hour24secytxReports()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secytx::Hour24secytxReports::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<hour24secytx_report.len(); index++)
    {
        if(hour24secytx_report[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secytx::Hour24secytxReports::has_operation() const
{
    for (std::size_t index=0; index<hour24secytx_report.len(); index++)
    {
        if(hour24secytx_report[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secytx::Hour24secytxReports::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24secytx-reports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secytx::Hour24secytxReports::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secytx::Hour24secytxReports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hour24secytx-report")
    {
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secytx::Hour24secytxReports::Hour24secytxReport>();
        c->parent = this;
        hour24secytx_report.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secytx::Hour24secytxReports::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : hour24secytx_report.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secytx::Hour24secytxReports::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secytx::Hour24secytxReports::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secytx::Hour24secytxReports::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hour24secytx-report")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secytx::Hour24secytxReports::Hour24secytxReport::Hour24secytxReport()
    :
    secytx_report{YType::enumeration, "secytx-report"},
    enable{YType::enumeration, "enable"}
{

    yang_name = "hour24secytx-report"; yang_parent_name = "hour24secytx-reports"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secytx::Hour24secytxReports::Hour24secytxReport::~Hour24secytxReport()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secytx::Hour24secytxReports::Hour24secytxReport::has_data() const
{
    if (is_presence_container) return true;
    return secytx_report.is_set
	|| enable.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secytx::Hour24secytxReports::Hour24secytxReport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(secytx_report.yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secytx::Hour24secytxReports::Hour24secytxReport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24secytx-report";
    ADD_KEY_TOKEN(secytx_report, "secytx-report");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secytx::Hour24secytxReports::Hour24secytxReport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (secytx_report.is_set || is_set(secytx_report.yfilter)) leaf_name_data.push_back(secytx_report.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secytx::Hour24secytxReports::Hour24secytxReport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secytx::Hour24secytxReports::Hour24secytxReport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secytx::Hour24secytxReports::Hour24secytxReport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secytx::Hour24secytxReports::Hour24secytxReport::set_filter(const std::string & value_path, YFilter yfilter)
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

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secytx::Hour24secytxReports::Hour24secytxReport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "secytx-report" || name == "enable")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15()
    :
    ho_vc_minute15ho_vc(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15hoVc>())
{
    ho_vc_minute15ho_vc->parent = this;

    yang_name = "ho-vc-minute15"; yang_parent_name = "performance-management"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::~HoVcMinute15()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::has_data() const
{
    if (is_presence_container) return true;
    return (ho_vc_minute15ho_vc !=  nullptr && ho_vc_minute15ho_vc->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::has_operation() const
{
    return is_set(yfilter)
	|| (ho_vc_minute15ho_vc !=  nullptr && ho_vc_minute15ho_vc->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ho-vc-minute15";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ho-vc-minute15ho-vc")
    {
        if(ho_vc_minute15ho_vc == nullptr)
        {
            ho_vc_minute15ho_vc = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15hoVc>();
        }
        return ho_vc_minute15ho_vc;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ho_vc_minute15ho_vc != nullptr)
    {
        children["ho-vc-minute15ho-vc"] = ho_vc_minute15ho_vc;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ho-vc-minute15ho-vc")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15hoVc::HoVcMinute15hoVc()
    :
    ho_vc_minute15ho_vc_reports(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15hoVc::HoVcMinute15hoVcReports>())
    , ho_vc_minute15ho_vc_thresholds(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15hoVc::HoVcMinute15hoVcThresholds>())
{
    ho_vc_minute15ho_vc_reports->parent = this;
    ho_vc_minute15ho_vc_thresholds->parent = this;

    yang_name = "ho-vc-minute15ho-vc"; yang_parent_name = "ho-vc-minute15"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15hoVc::~HoVcMinute15hoVc()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15hoVc::has_data() const
{
    if (is_presence_container) return true;
    return (ho_vc_minute15ho_vc_reports !=  nullptr && ho_vc_minute15ho_vc_reports->has_data())
	|| (ho_vc_minute15ho_vc_thresholds !=  nullptr && ho_vc_minute15ho_vc_thresholds->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15hoVc::has_operation() const
{
    return is_set(yfilter)
	|| (ho_vc_minute15ho_vc_reports !=  nullptr && ho_vc_minute15ho_vc_reports->has_operation())
	|| (ho_vc_minute15ho_vc_thresholds !=  nullptr && ho_vc_minute15ho_vc_thresholds->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15hoVc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ho-vc-minute15ho-vc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15hoVc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15hoVc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ho-vc-minute15ho-vc-reports")
    {
        if(ho_vc_minute15ho_vc_reports == nullptr)
        {
            ho_vc_minute15ho_vc_reports = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15hoVc::HoVcMinute15hoVcReports>();
        }
        return ho_vc_minute15ho_vc_reports;
    }

    if(child_yang_name == "ho-vc-minute15ho-vc-thresholds")
    {
        if(ho_vc_minute15ho_vc_thresholds == nullptr)
        {
            ho_vc_minute15ho_vc_thresholds = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15hoVc::HoVcMinute15hoVcThresholds>();
        }
        return ho_vc_minute15ho_vc_thresholds;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15hoVc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ho_vc_minute15ho_vc_reports != nullptr)
    {
        children["ho-vc-minute15ho-vc-reports"] = ho_vc_minute15ho_vc_reports;
    }

    if(ho_vc_minute15ho_vc_thresholds != nullptr)
    {
        children["ho-vc-minute15ho-vc-thresholds"] = ho_vc_minute15ho_vc_thresholds;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15hoVc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15hoVc::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15hoVc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ho-vc-minute15ho-vc-reports" || name == "ho-vc-minute15ho-vc-thresholds")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15hoVc::HoVcMinute15hoVcReports::HoVcMinute15hoVcReports()
    :
    ho_vc_minute15ho_vc_report(this, {"ho_vc_report"})
{

    yang_name = "ho-vc-minute15ho-vc-reports"; yang_parent_name = "ho-vc-minute15ho-vc"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15hoVc::HoVcMinute15hoVcReports::~HoVcMinute15hoVcReports()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15hoVc::HoVcMinute15hoVcReports::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ho_vc_minute15ho_vc_report.len(); index++)
    {
        if(ho_vc_minute15ho_vc_report[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15hoVc::HoVcMinute15hoVcReports::has_operation() const
{
    for (std::size_t index=0; index<ho_vc_minute15ho_vc_report.len(); index++)
    {
        if(ho_vc_minute15ho_vc_report[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15hoVc::HoVcMinute15hoVcReports::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ho-vc-minute15ho-vc-reports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15hoVc::HoVcMinute15hoVcReports::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15hoVc::HoVcMinute15hoVcReports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ho-vc-minute15ho-vc-report")
    {
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15hoVc::HoVcMinute15hoVcReports::HoVcMinute15hoVcReport>();
        c->parent = this;
        ho_vc_minute15ho_vc_report.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15hoVc::HoVcMinute15hoVcReports::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ho_vc_minute15ho_vc_report.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15hoVc::HoVcMinute15hoVcReports::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15hoVc::HoVcMinute15hoVcReports::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15hoVc::HoVcMinute15hoVcReports::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ho-vc-minute15ho-vc-report")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15hoVc::HoVcMinute15hoVcReports::HoVcMinute15hoVcReport::HoVcMinute15hoVcReport()
    :
    ho_vc_report{YType::enumeration, "ho-vc-report"},
    enable{YType::enumeration, "enable"}
{

    yang_name = "ho-vc-minute15ho-vc-report"; yang_parent_name = "ho-vc-minute15ho-vc-reports"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15hoVc::HoVcMinute15hoVcReports::HoVcMinute15hoVcReport::~HoVcMinute15hoVcReport()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15hoVc::HoVcMinute15hoVcReports::HoVcMinute15hoVcReport::has_data() const
{
    if (is_presence_container) return true;
    return ho_vc_report.is_set
	|| enable.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15hoVc::HoVcMinute15hoVcReports::HoVcMinute15hoVcReport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ho_vc_report.yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15hoVc::HoVcMinute15hoVcReports::HoVcMinute15hoVcReport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ho-vc-minute15ho-vc-report";
    ADD_KEY_TOKEN(ho_vc_report, "ho-vc-report");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15hoVc::HoVcMinute15hoVcReports::HoVcMinute15hoVcReport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ho_vc_report.is_set || is_set(ho_vc_report.yfilter)) leaf_name_data.push_back(ho_vc_report.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15hoVc::HoVcMinute15hoVcReports::HoVcMinute15hoVcReport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15hoVc::HoVcMinute15hoVcReports::HoVcMinute15hoVcReport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15hoVc::HoVcMinute15hoVcReports::HoVcMinute15hoVcReport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ho-vc-report")
    {
        ho_vc_report = value;
        ho_vc_report.value_namespace = name_space;
        ho_vc_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15hoVc::HoVcMinute15hoVcReports::HoVcMinute15hoVcReport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ho-vc-report")
    {
        ho_vc_report.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15hoVc::HoVcMinute15hoVcReports::HoVcMinute15hoVcReport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ho-vc-report" || name == "enable")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15hoVc::HoVcMinute15hoVcThresholds::HoVcMinute15hoVcThresholds()
    :
    ho_vc_minute15ho_vc_threshold(this, {"ho_vc_threshold"})
{

    yang_name = "ho-vc-minute15ho-vc-thresholds"; yang_parent_name = "ho-vc-minute15ho-vc"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15hoVc::HoVcMinute15hoVcThresholds::~HoVcMinute15hoVcThresholds()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15hoVc::HoVcMinute15hoVcThresholds::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ho_vc_minute15ho_vc_threshold.len(); index++)
    {
        if(ho_vc_minute15ho_vc_threshold[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15hoVc::HoVcMinute15hoVcThresholds::has_operation() const
{
    for (std::size_t index=0; index<ho_vc_minute15ho_vc_threshold.len(); index++)
    {
        if(ho_vc_minute15ho_vc_threshold[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15hoVc::HoVcMinute15hoVcThresholds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ho-vc-minute15ho-vc-thresholds";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15hoVc::HoVcMinute15hoVcThresholds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15hoVc::HoVcMinute15hoVcThresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ho-vc-minute15ho-vc-threshold")
    {
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15hoVc::HoVcMinute15hoVcThresholds::HoVcMinute15hoVcThreshold>();
        c->parent = this;
        ho_vc_minute15ho_vc_threshold.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15hoVc::HoVcMinute15hoVcThresholds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ho_vc_minute15ho_vc_threshold.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15hoVc::HoVcMinute15hoVcThresholds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15hoVc::HoVcMinute15hoVcThresholds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15hoVc::HoVcMinute15hoVcThresholds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ho-vc-minute15ho-vc-threshold")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15hoVc::HoVcMinute15hoVcThresholds::HoVcMinute15hoVcThreshold::HoVcMinute15hoVcThreshold()
    :
    ho_vc_threshold{YType::enumeration, "ho-vc-threshold"},
    ho_vc_threshold_value{YType::uint32, "ho-vc-threshold-value"}
{

    yang_name = "ho-vc-minute15ho-vc-threshold"; yang_parent_name = "ho-vc-minute15ho-vc-thresholds"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15hoVc::HoVcMinute15hoVcThresholds::HoVcMinute15hoVcThreshold::~HoVcMinute15hoVcThreshold()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15hoVc::HoVcMinute15hoVcThresholds::HoVcMinute15hoVcThreshold::has_data() const
{
    if (is_presence_container) return true;
    return ho_vc_threshold.is_set
	|| ho_vc_threshold_value.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15hoVc::HoVcMinute15hoVcThresholds::HoVcMinute15hoVcThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ho_vc_threshold.yfilter)
	|| ydk::is_set(ho_vc_threshold_value.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15hoVc::HoVcMinute15hoVcThresholds::HoVcMinute15hoVcThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ho-vc-minute15ho-vc-threshold";
    ADD_KEY_TOKEN(ho_vc_threshold, "ho-vc-threshold");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15hoVc::HoVcMinute15hoVcThresholds::HoVcMinute15hoVcThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ho_vc_threshold.is_set || is_set(ho_vc_threshold.yfilter)) leaf_name_data.push_back(ho_vc_threshold.get_name_leafdata());
    if (ho_vc_threshold_value.is_set || is_set(ho_vc_threshold_value.yfilter)) leaf_name_data.push_back(ho_vc_threshold_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15hoVc::HoVcMinute15hoVcThresholds::HoVcMinute15hoVcThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15hoVc::HoVcMinute15hoVcThresholds::HoVcMinute15hoVcThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15hoVc::HoVcMinute15hoVcThresholds::HoVcMinute15hoVcThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ho-vc-threshold")
    {
        ho_vc_threshold = value;
        ho_vc_threshold.value_namespace = name_space;
        ho_vc_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ho-vc-threshold-value")
    {
        ho_vc_threshold_value = value;
        ho_vc_threshold_value.value_namespace = name_space;
        ho_vc_threshold_value.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15hoVc::HoVcMinute15hoVcThresholds::HoVcMinute15hoVcThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ho-vc-threshold")
    {
        ho_vc_threshold.yfilter = yfilter;
    }
    if(value_path == "ho-vc-threshold-value")
    {
        ho_vc_threshold_value.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15hoVc::HoVcMinute15hoVcThresholds::HoVcMinute15hoVcThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ho-vc-threshold" || name == "ho-vc-threshold-value")
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
    if (is_presence_container) return true;
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
    char count=0;
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
    sts_hour24_path_thresholds(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24::StsHour24Path::StsHour24PathThresholds>())
    , sts_hour24_path_reports(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24::StsHour24Path::StsHour24PathReports>())
{
    sts_hour24_path_thresholds->parent = this;
    sts_hour24_path_reports->parent = this;

    yang_name = "sts-hour24-path"; yang_parent_name = "sts-hour24"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24::StsHour24Path::~StsHour24Path()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24::StsHour24Path::has_data() const
{
    if (is_presence_container) return true;
    return (sts_hour24_path_thresholds !=  nullptr && sts_hour24_path_thresholds->has_data())
	|| (sts_hour24_path_reports !=  nullptr && sts_hour24_path_reports->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24::StsHour24Path::has_operation() const
{
    return is_set(yfilter)
	|| (sts_hour24_path_thresholds !=  nullptr && sts_hour24_path_thresholds->has_operation())
	|| (sts_hour24_path_reports !=  nullptr && sts_hour24_path_reports->has_operation());
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
    if(child_yang_name == "sts-hour24-path-thresholds")
    {
        if(sts_hour24_path_thresholds == nullptr)
        {
            sts_hour24_path_thresholds = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24::StsHour24Path::StsHour24PathThresholds>();
        }
        return sts_hour24_path_thresholds;
    }

    if(child_yang_name == "sts-hour24-path-reports")
    {
        if(sts_hour24_path_reports == nullptr)
        {
            sts_hour24_path_reports = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24::StsHour24Path::StsHour24PathReports>();
        }
        return sts_hour24_path_reports;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24::StsHour24Path::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(sts_hour24_path_thresholds != nullptr)
    {
        children["sts-hour24-path-thresholds"] = sts_hour24_path_thresholds;
    }

    if(sts_hour24_path_reports != nullptr)
    {
        children["sts-hour24-path-reports"] = sts_hour24_path_reports;
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
    if(name == "sts-hour24-path-thresholds" || name == "sts-hour24-path-reports")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24::StsHour24Path::StsHour24PathThresholds::StsHour24PathThresholds()
    :
    sts_hour24_path_threshold(this, {"path_threshold"})
{

    yang_name = "sts-hour24-path-thresholds"; yang_parent_name = "sts-hour24-path"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24::StsHour24Path::StsHour24PathThresholds::~StsHour24PathThresholds()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24::StsHour24Path::StsHour24PathThresholds::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sts_hour24_path_threshold.len(); index++)
    {
        if(sts_hour24_path_threshold[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24::StsHour24Path::StsHour24PathThresholds::has_operation() const
{
    for (std::size_t index=0; index<sts_hour24_path_threshold.len(); index++)
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
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24::StsHour24Path::StsHour24PathThresholds::StsHour24PathThreshold>();
        c->parent = this;
        sts_hour24_path_threshold.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24::StsHour24Path::StsHour24PathThresholds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : sts_hour24_path_threshold.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
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
    path_threshold_value{YType::uint32, "path-threshold-value"}
{

    yang_name = "sts-hour24-path-threshold"; yang_parent_name = "sts-hour24-path-thresholds"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24::StsHour24Path::StsHour24PathThresholds::StsHour24PathThreshold::~StsHour24PathThreshold()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24::StsHour24Path::StsHour24PathThresholds::StsHour24PathThreshold::has_data() const
{
    if (is_presence_container) return true;
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
    path_buffer << "sts-hour24-path-threshold";
    ADD_KEY_TOKEN(path_threshold, "path-threshold");
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
    char count=0;
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

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24::StsHour24Path::StsHour24PathReports::StsHour24PathReports()
    :
    sts_hour24_path_report(this, {"path_report"})
{

    yang_name = "sts-hour24-path-reports"; yang_parent_name = "sts-hour24-path"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24::StsHour24Path::StsHour24PathReports::~StsHour24PathReports()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24::StsHour24Path::StsHour24PathReports::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sts_hour24_path_report.len(); index++)
    {
        if(sts_hour24_path_report[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24::StsHour24Path::StsHour24PathReports::has_operation() const
{
    for (std::size_t index=0; index<sts_hour24_path_report.len(); index++)
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
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24::StsHour24Path::StsHour24PathReports::StsHour24PathReport>();
        c->parent = this;
        sts_hour24_path_report.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24::StsHour24Path::StsHour24PathReports::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : sts_hour24_path_report.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
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
    if (is_presence_container) return true;
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
    path_buffer << "sts-hour24-path-report";
    ADD_KEY_TOKEN(path_report, "path-report");
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
    char count=0;
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
    if (is_presence_container) return true;
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
    char count=0;
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
    , stm_minute15_stm_thresholds(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15::StmMinute15Stm::StmMinute15StmThresholds>())
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
    if (is_presence_container) return true;
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
    char count=0;
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
    :
    stm_minute15_stm_report(this, {"stm_report"})
{

    yang_name = "stm-minute15-stm-reports"; yang_parent_name = "stm-minute15-stm"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15::StmMinute15Stm::StmMinute15StmReports::~StmMinute15StmReports()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15::StmMinute15Stm::StmMinute15StmReports::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<stm_minute15_stm_report.len(); index++)
    {
        if(stm_minute15_stm_report[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15::StmMinute15Stm::StmMinute15StmReports::has_operation() const
{
    for (std::size_t index=0; index<stm_minute15_stm_report.len(); index++)
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
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15::StmMinute15Stm::StmMinute15StmReports::StmMinute15StmReport>();
        c->parent = this;
        stm_minute15_stm_report.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15::StmMinute15Stm::StmMinute15StmReports::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : stm_minute15_stm_report.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
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
    if (is_presence_container) return true;
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
    path_buffer << "stm-minute15-stm-report";
    ADD_KEY_TOKEN(stm_report, "stm-report");
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
    char count=0;
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
    :
    stm_minute15_stm_threshold(this, {"stm_threshold"})
{

    yang_name = "stm-minute15-stm-thresholds"; yang_parent_name = "stm-minute15-stm"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15::StmMinute15Stm::StmMinute15StmThresholds::~StmMinute15StmThresholds()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15::StmMinute15Stm::StmMinute15StmThresholds::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<stm_minute15_stm_threshold.len(); index++)
    {
        if(stm_minute15_stm_threshold[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15::StmMinute15Stm::StmMinute15StmThresholds::has_operation() const
{
    for (std::size_t index=0; index<stm_minute15_stm_threshold.len(); index++)
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
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15::StmMinute15Stm::StmMinute15StmThresholds::StmMinute15StmThreshold>();
        c->parent = this;
        stm_minute15_stm_threshold.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15::StmMinute15Stm::StmMinute15StmThresholds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : stm_minute15_stm_threshold.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
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
    stm_threshold_value{YType::uint32, "stm-threshold-value"}
{

    yang_name = "stm-minute15-stm-threshold"; yang_parent_name = "stm-minute15-stm-thresholds"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15::StmMinute15Stm::StmMinute15StmThresholds::StmMinute15StmThreshold::~StmMinute15StmThreshold()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15::StmMinute15Stm::StmMinute15StmThresholds::StmMinute15StmThreshold::has_data() const
{
    if (is_presence_container) return true;
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
    path_buffer << "stm-minute15-stm-threshold";
    ADD_KEY_TOKEN(stm_threshold, "stm-threshold");
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
    char count=0;
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

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24()
    :
    sonet_hour24_path(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Path>())
    , sonet_hour24_ocn(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Ocn>())
{
    sonet_hour24_path->parent = this;
    sonet_hour24_ocn->parent = this;

    yang_name = "sonet-hour24"; yang_parent_name = "performance-management"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::~SonetHour24()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::has_data() const
{
    if (is_presence_container) return true;
    return (sonet_hour24_path !=  nullptr && sonet_hour24_path->has_data())
	|| (sonet_hour24_ocn !=  nullptr && sonet_hour24_ocn->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::has_operation() const
{
    return is_set(yfilter)
	|| (sonet_hour24_path !=  nullptr && sonet_hour24_path->has_operation())
	|| (sonet_hour24_ocn !=  nullptr && sonet_hour24_ocn->has_operation());
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
    if(child_yang_name == "sonet-hour24-path")
    {
        if(sonet_hour24_path == nullptr)
        {
            sonet_hour24_path = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Path>();
        }
        return sonet_hour24_path;
    }

    if(child_yang_name == "sonet-hour24-ocn")
    {
        if(sonet_hour24_ocn == nullptr)
        {
            sonet_hour24_ocn = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Ocn>();
        }
        return sonet_hour24_ocn;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(sonet_hour24_path != nullptr)
    {
        children["sonet-hour24-path"] = sonet_hour24_path;
    }

    if(sonet_hour24_ocn != nullptr)
    {
        children["sonet-hour24-ocn"] = sonet_hour24_ocn;
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
    if(name == "sonet-hour24-path" || name == "sonet-hour24-ocn")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Path::SonetHour24Path()
    :
    sonet_hour24_path_thresholds(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Path::SonetHour24PathThresholds>())
    , sonet_hour24_path_reports(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Path::SonetHour24PathReports>())
{
    sonet_hour24_path_thresholds->parent = this;
    sonet_hour24_path_reports->parent = this;

    yang_name = "sonet-hour24-path"; yang_parent_name = "sonet-hour24"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Path::~SonetHour24Path()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Path::has_data() const
{
    if (is_presence_container) return true;
    return (sonet_hour24_path_thresholds !=  nullptr && sonet_hour24_path_thresholds->has_data())
	|| (sonet_hour24_path_reports !=  nullptr && sonet_hour24_path_reports->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Path::has_operation() const
{
    return is_set(yfilter)
	|| (sonet_hour24_path_thresholds !=  nullptr && sonet_hour24_path_thresholds->has_operation())
	|| (sonet_hour24_path_reports !=  nullptr && sonet_hour24_path_reports->has_operation());
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
    if(child_yang_name == "sonet-hour24-path-thresholds")
    {
        if(sonet_hour24_path_thresholds == nullptr)
        {
            sonet_hour24_path_thresholds = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Path::SonetHour24PathThresholds>();
        }
        return sonet_hour24_path_thresholds;
    }

    if(child_yang_name == "sonet-hour24-path-reports")
    {
        if(sonet_hour24_path_reports == nullptr)
        {
            sonet_hour24_path_reports = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Path::SonetHour24PathReports>();
        }
        return sonet_hour24_path_reports;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Path::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(sonet_hour24_path_thresholds != nullptr)
    {
        children["sonet-hour24-path-thresholds"] = sonet_hour24_path_thresholds;
    }

    if(sonet_hour24_path_reports != nullptr)
    {
        children["sonet-hour24-path-reports"] = sonet_hour24_path_reports;
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
    if(name == "sonet-hour24-path-thresholds" || name == "sonet-hour24-path-reports")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Path::SonetHour24PathThresholds::SonetHour24PathThresholds()
    :
    sonet_hour24_path_threshold(this, {"path_threshold"})
{

    yang_name = "sonet-hour24-path-thresholds"; yang_parent_name = "sonet-hour24-path"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Path::SonetHour24PathThresholds::~SonetHour24PathThresholds()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Path::SonetHour24PathThresholds::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sonet_hour24_path_threshold.len(); index++)
    {
        if(sonet_hour24_path_threshold[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Path::SonetHour24PathThresholds::has_operation() const
{
    for (std::size_t index=0; index<sonet_hour24_path_threshold.len(); index++)
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
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Path::SonetHour24PathThresholds::SonetHour24PathThreshold>();
        c->parent = this;
        sonet_hour24_path_threshold.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Path::SonetHour24PathThresholds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : sonet_hour24_path_threshold.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
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
    path_threshold_value{YType::uint32, "path-threshold-value"}
{

    yang_name = "sonet-hour24-path-threshold"; yang_parent_name = "sonet-hour24-path-thresholds"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Path::SonetHour24PathThresholds::SonetHour24PathThreshold::~SonetHour24PathThreshold()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Path::SonetHour24PathThresholds::SonetHour24PathThreshold::has_data() const
{
    if (is_presence_container) return true;
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
    path_buffer << "sonet-hour24-path-threshold";
    ADD_KEY_TOKEN(path_threshold, "path-threshold");
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
    char count=0;
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

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Path::SonetHour24PathReports::SonetHour24PathReports()
    :
    sonet_hour24_path_report(this, {"path_report"})
{

    yang_name = "sonet-hour24-path-reports"; yang_parent_name = "sonet-hour24-path"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Path::SonetHour24PathReports::~SonetHour24PathReports()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Path::SonetHour24PathReports::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sonet_hour24_path_report.len(); index++)
    {
        if(sonet_hour24_path_report[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Path::SonetHour24PathReports::has_operation() const
{
    for (std::size_t index=0; index<sonet_hour24_path_report.len(); index++)
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
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Path::SonetHour24PathReports::SonetHour24PathReport>();
        c->parent = this;
        sonet_hour24_path_report.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Path::SonetHour24PathReports::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : sonet_hour24_path_report.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
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
    if (is_presence_container) return true;
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
    path_buffer << "sonet-hour24-path-report";
    ADD_KEY_TOKEN(path_report, "path-report");
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
    char count=0;
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

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Ocn::SonetHour24Ocn()
    :
    sonet_hour24_ocn_thresholds(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Ocn::SonetHour24OcnThresholds>())
    , sonet_hour24_ocn_reports(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Ocn::SonetHour24OcnReports>())
{
    sonet_hour24_ocn_thresholds->parent = this;
    sonet_hour24_ocn_reports->parent = this;

    yang_name = "sonet-hour24-ocn"; yang_parent_name = "sonet-hour24"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Ocn::~SonetHour24Ocn()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Ocn::has_data() const
{
    if (is_presence_container) return true;
    return (sonet_hour24_ocn_thresholds !=  nullptr && sonet_hour24_ocn_thresholds->has_data())
	|| (sonet_hour24_ocn_reports !=  nullptr && sonet_hour24_ocn_reports->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Ocn::has_operation() const
{
    return is_set(yfilter)
	|| (sonet_hour24_ocn_thresholds !=  nullptr && sonet_hour24_ocn_thresholds->has_operation())
	|| (sonet_hour24_ocn_reports !=  nullptr && sonet_hour24_ocn_reports->has_operation());
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
    if(child_yang_name == "sonet-hour24-ocn-thresholds")
    {
        if(sonet_hour24_ocn_thresholds == nullptr)
        {
            sonet_hour24_ocn_thresholds = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Ocn::SonetHour24OcnThresholds>();
        }
        return sonet_hour24_ocn_thresholds;
    }

    if(child_yang_name == "sonet-hour24-ocn-reports")
    {
        if(sonet_hour24_ocn_reports == nullptr)
        {
            sonet_hour24_ocn_reports = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Ocn::SonetHour24OcnReports>();
        }
        return sonet_hour24_ocn_reports;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Ocn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(sonet_hour24_ocn_thresholds != nullptr)
    {
        children["sonet-hour24-ocn-thresholds"] = sonet_hour24_ocn_thresholds;
    }

    if(sonet_hour24_ocn_reports != nullptr)
    {
        children["sonet-hour24-ocn-reports"] = sonet_hour24_ocn_reports;
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
    if(name == "sonet-hour24-ocn-thresholds" || name == "sonet-hour24-ocn-reports")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Ocn::SonetHour24OcnThresholds::SonetHour24OcnThresholds()
    :
    sonet_hour24_ocn_threshold(this, {"ocn_threshold"})
{

    yang_name = "sonet-hour24-ocn-thresholds"; yang_parent_name = "sonet-hour24-ocn"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Ocn::SonetHour24OcnThresholds::~SonetHour24OcnThresholds()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Ocn::SonetHour24OcnThresholds::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sonet_hour24_ocn_threshold.len(); index++)
    {
        if(sonet_hour24_ocn_threshold[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Ocn::SonetHour24OcnThresholds::has_operation() const
{
    for (std::size_t index=0; index<sonet_hour24_ocn_threshold.len(); index++)
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
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Ocn::SonetHour24OcnThresholds::SonetHour24OcnThreshold>();
        c->parent = this;
        sonet_hour24_ocn_threshold.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Ocn::SonetHour24OcnThresholds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : sonet_hour24_ocn_threshold.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
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
    ocn_threshold_value{YType::uint32, "ocn-threshold-value"}
{

    yang_name = "sonet-hour24-ocn-threshold"; yang_parent_name = "sonet-hour24-ocn-thresholds"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Ocn::SonetHour24OcnThresholds::SonetHour24OcnThreshold::~SonetHour24OcnThreshold()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Ocn::SonetHour24OcnThresholds::SonetHour24OcnThreshold::has_data() const
{
    if (is_presence_container) return true;
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
    path_buffer << "sonet-hour24-ocn-threshold";
    ADD_KEY_TOKEN(ocn_threshold, "ocn-threshold");
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
    char count=0;
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

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Ocn::SonetHour24OcnReports::SonetHour24OcnReports()
    :
    sonet_hour24_ocn_report(this, {"ocn_report"})
{

    yang_name = "sonet-hour24-ocn-reports"; yang_parent_name = "sonet-hour24-ocn"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Ocn::SonetHour24OcnReports::~SonetHour24OcnReports()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Ocn::SonetHour24OcnReports::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sonet_hour24_ocn_report.len(); index++)
    {
        if(sonet_hour24_ocn_report[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Ocn::SonetHour24OcnReports::has_operation() const
{
    for (std::size_t index=0; index<sonet_hour24_ocn_report.len(); index++)
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
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Ocn::SonetHour24OcnReports::SonetHour24OcnReport>();
        c->parent = this;
        sonet_hour24_ocn_report.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Ocn::SonetHour24OcnReports::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : sonet_hour24_ocn_report.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
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
    if (is_presence_container) return true;
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
    path_buffer << "sonet-hour24-ocn-report";
    ADD_KEY_TOKEN(ocn_report, "ocn-report");
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
    char count=0;
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

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15Path()
    :
    minute15otn_path(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15otnPath>())
{
    minute15otn_path->parent = this;

    yang_name = "minute15-path"; yang_parent_name = "performance-management"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::~Minute15Path()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::has_data() const
{
    if (is_presence_container) return true;
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
            minute15otn_path = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15otnPath>();
        }
        return minute15otn_path;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
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

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15otnPath::Minute15otnPath()
    :
    minute15otn_path_reports(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15otnPath::Minute15otnPathReports>())
    , min15_otn_path_threshes(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15otnPath::Min15OtnPathThreshes>())
{
    minute15otn_path_reports->parent = this;
    min15_otn_path_threshes->parent = this;

    yang_name = "minute15otn-path"; yang_parent_name = "minute15-path"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15otnPath::~Minute15otnPath()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15otnPath::has_data() const
{
    if (is_presence_container) return true;
    return (minute15otn_path_reports !=  nullptr && minute15otn_path_reports->has_data())
	|| (min15_otn_path_threshes !=  nullptr && min15_otn_path_threshes->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15otnPath::has_operation() const
{
    return is_set(yfilter)
	|| (minute15otn_path_reports !=  nullptr && minute15otn_path_reports->has_operation())
	|| (min15_otn_path_threshes !=  nullptr && min15_otn_path_threshes->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15otnPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15otn-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15otnPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15otnPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "minute15otn-path-reports")
    {
        if(minute15otn_path_reports == nullptr)
        {
            minute15otn_path_reports = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15otnPath::Minute15otnPathReports>();
        }
        return minute15otn_path_reports;
    }

    if(child_yang_name == "min15-otn-path-threshes")
    {
        if(min15_otn_path_threshes == nullptr)
        {
            min15_otn_path_threshes = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15otnPath::Min15OtnPathThreshes>();
        }
        return min15_otn_path_threshes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15otnPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(minute15otn_path_reports != nullptr)
    {
        children["minute15otn-path-reports"] = minute15otn_path_reports;
    }

    if(min15_otn_path_threshes != nullptr)
    {
        children["min15-otn-path-threshes"] = min15_otn_path_threshes;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15otnPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15otnPath::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15otnPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minute15otn-path-reports" || name == "min15-otn-path-threshes")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15otnPath::Minute15otnPathReports::Minute15otnPathReports()
    :
    minute15otn_path_report(this, {"otn_report"})
{

    yang_name = "minute15otn-path-reports"; yang_parent_name = "minute15otn-path"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15otnPath::Minute15otnPathReports::~Minute15otnPathReports()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15otnPath::Minute15otnPathReports::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<minute15otn_path_report.len(); index++)
    {
        if(minute15otn_path_report[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15otnPath::Minute15otnPathReports::has_operation() const
{
    for (std::size_t index=0; index<minute15otn_path_report.len(); index++)
    {
        if(minute15otn_path_report[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15otnPath::Minute15otnPathReports::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15otn-path-reports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15otnPath::Minute15otnPathReports::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15otnPath::Minute15otnPathReports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "minute15otn-path-report")
    {
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15otnPath::Minute15otnPathReports::Minute15otnPathReport>();
        c->parent = this;
        minute15otn_path_report.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15otnPath::Minute15otnPathReports::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : minute15otn_path_report.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15otnPath::Minute15otnPathReports::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15otnPath::Minute15otnPathReports::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15otnPath::Minute15otnPathReports::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minute15otn-path-report")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15otnPath::Minute15otnPathReports::Minute15otnPathReport::Minute15otnPathReport()
    :
    otn_report{YType::enumeration, "otn-report"},
    enable{YType::enumeration, "enable"}
{

    yang_name = "minute15otn-path-report"; yang_parent_name = "minute15otn-path-reports"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15otnPath::Minute15otnPathReports::Minute15otnPathReport::~Minute15otnPathReport()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15otnPath::Minute15otnPathReports::Minute15otnPathReport::has_data() const
{
    if (is_presence_container) return true;
    return otn_report.is_set
	|| enable.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15otnPath::Minute15otnPathReports::Minute15otnPathReport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(otn_report.yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15otnPath::Minute15otnPathReports::Minute15otnPathReport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15otn-path-report";
    ADD_KEY_TOKEN(otn_report, "otn-report");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15otnPath::Minute15otnPathReports::Minute15otnPathReport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (otn_report.is_set || is_set(otn_report.yfilter)) leaf_name_data.push_back(otn_report.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15otnPath::Minute15otnPathReports::Minute15otnPathReport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15otnPath::Minute15otnPathReports::Minute15otnPathReport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15otnPath::Minute15otnPathReports::Minute15otnPathReport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15otnPath::Minute15otnPathReports::Minute15otnPathReport::set_filter(const std::string & value_path, YFilter yfilter)
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

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15otnPath::Minute15otnPathReports::Minute15otnPathReport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "otn-report" || name == "enable")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15otnPath::Min15OtnPathThreshes::Min15OtnPathThreshes()
    :
    min15_otn_path_thresh(this, {"otn_threshold"})
{

    yang_name = "min15-otn-path-threshes"; yang_parent_name = "minute15otn-path"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15otnPath::Min15OtnPathThreshes::~Min15OtnPathThreshes()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15otnPath::Min15OtnPathThreshes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<min15_otn_path_thresh.len(); index++)
    {
        if(min15_otn_path_thresh[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15otnPath::Min15OtnPathThreshes::has_operation() const
{
    for (std::size_t index=0; index<min15_otn_path_thresh.len(); index++)
    {
        if(min15_otn_path_thresh[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15otnPath::Min15OtnPathThreshes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "min15-otn-path-threshes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15otnPath::Min15OtnPathThreshes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15otnPath::Min15OtnPathThreshes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "min15-otn-path-thresh")
    {
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15otnPath::Min15OtnPathThreshes::Min15OtnPathThresh>();
        c->parent = this;
        min15_otn_path_thresh.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15otnPath::Min15OtnPathThreshes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : min15_otn_path_thresh.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15otnPath::Min15OtnPathThreshes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15otnPath::Min15OtnPathThreshes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15otnPath::Min15OtnPathThreshes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "min15-otn-path-thresh")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15otnPath::Min15OtnPathThreshes::Min15OtnPathThresh::Min15OtnPathThresh()
    :
    otn_threshold{YType::enumeration, "otn-threshold"},
    otn_threshold_value{YType::uint32, "otn-threshold-value"}
{

    yang_name = "min15-otn-path-thresh"; yang_parent_name = "min15-otn-path-threshes"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15otnPath::Min15OtnPathThreshes::Min15OtnPathThresh::~Min15OtnPathThresh()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15otnPath::Min15OtnPathThreshes::Min15OtnPathThresh::has_data() const
{
    if (is_presence_container) return true;
    return otn_threshold.is_set
	|| otn_threshold_value.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15otnPath::Min15OtnPathThreshes::Min15OtnPathThresh::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(otn_threshold.yfilter)
	|| ydk::is_set(otn_threshold_value.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15otnPath::Min15OtnPathThreshes::Min15OtnPathThresh::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "min15-otn-path-thresh";
    ADD_KEY_TOKEN(otn_threshold, "otn-threshold");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15otnPath::Min15OtnPathThreshes::Min15OtnPathThresh::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (otn_threshold.is_set || is_set(otn_threshold.yfilter)) leaf_name_data.push_back(otn_threshold.get_name_leafdata());
    if (otn_threshold_value.is_set || is_set(otn_threshold_value.yfilter)) leaf_name_data.push_back(otn_threshold_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15otnPath::Min15OtnPathThreshes::Min15OtnPathThresh::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15otnPath::Min15OtnPathThreshes::Min15OtnPathThresh::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15otnPath::Min15OtnPathThreshes::Min15OtnPathThresh::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15otnPath::Min15OtnPathThreshes::Min15OtnPathThresh::set_filter(const std::string & value_path, YFilter yfilter)
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

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15otnPath::Min15OtnPathThreshes::Min15OtnPathThresh::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "otn-threshold" || name == "otn-threshold-value")
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
    if (is_presence_container) return true;
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
    char count=0;
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
    , oc_minute15_ocn_thresholds(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15::OcMinute15Ocn::OcMinute15OcnThresholds>())
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
    if (is_presence_container) return true;
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
    char count=0;
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
    :
    oc_minute15_ocn_report(this, {"ocn_report"})
{

    yang_name = "oc-minute15-ocn-reports"; yang_parent_name = "oc-minute15-ocn"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15::OcMinute15Ocn::OcMinute15OcnReports::~OcMinute15OcnReports()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15::OcMinute15Ocn::OcMinute15OcnReports::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<oc_minute15_ocn_report.len(); index++)
    {
        if(oc_minute15_ocn_report[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15::OcMinute15Ocn::OcMinute15OcnReports::has_operation() const
{
    for (std::size_t index=0; index<oc_minute15_ocn_report.len(); index++)
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
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15::OcMinute15Ocn::OcMinute15OcnReports::OcMinute15OcnReport>();
        c->parent = this;
        oc_minute15_ocn_report.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15::OcMinute15Ocn::OcMinute15OcnReports::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : oc_minute15_ocn_report.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
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
    if (is_presence_container) return true;
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
    path_buffer << "oc-minute15-ocn-report";
    ADD_KEY_TOKEN(ocn_report, "ocn-report");
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
    char count=0;
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
    :
    oc_minute15_ocn_threshold(this, {"ocn_threshold"})
{

    yang_name = "oc-minute15-ocn-thresholds"; yang_parent_name = "oc-minute15-ocn"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15::OcMinute15Ocn::OcMinute15OcnThresholds::~OcMinute15OcnThresholds()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15::OcMinute15Ocn::OcMinute15OcnThresholds::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<oc_minute15_ocn_threshold.len(); index++)
    {
        if(oc_minute15_ocn_threshold[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15::OcMinute15Ocn::OcMinute15OcnThresholds::has_operation() const
{
    for (std::size_t index=0; index<oc_minute15_ocn_threshold.len(); index++)
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
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15::OcMinute15Ocn::OcMinute15OcnThresholds::OcMinute15OcnThreshold>();
        c->parent = this;
        oc_minute15_ocn_threshold.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15::OcMinute15Ocn::OcMinute15OcnThresholds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : oc_minute15_ocn_threshold.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
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
    ocn_threshold_value{YType::uint32, "ocn-threshold-value"}
{

    yang_name = "oc-minute15-ocn-threshold"; yang_parent_name = "oc-minute15-ocn-thresholds"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15::OcMinute15Ocn::OcMinute15OcnThresholds::OcMinute15OcnThreshold::~OcMinute15OcnThreshold()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15::OcMinute15Ocn::OcMinute15OcnThresholds::OcMinute15OcnThreshold::has_data() const
{
    if (is_presence_container) return true;
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
    path_buffer << "oc-minute15-ocn-threshold";
    ADD_KEY_TOKEN(ocn_threshold, "ocn-threshold");
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
    char count=0;
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

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::EthernetSecond30()
    :
    second30_ether(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether>())
{
    second30_ether->parent = this;

    yang_name = "ethernet-second30"; yang_parent_name = "performance-management"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::~EthernetSecond30()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::has_data() const
{
    if (is_presence_container) return true;
    return (second30_ether !=  nullptr && second30_ether->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::has_operation() const
{
    return is_set(yfilter)
	|| (second30_ether !=  nullptr && second30_ether->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ethernet-second30";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "second30-ether")
    {
        if(second30_ether == nullptr)
        {
            second30_ether = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether>();
        }
        return second30_ether;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(second30_ether != nullptr)
    {
        children["second30-ether"] = second30_ether;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second30-ether")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30Ether()
    :
    second30_ether_thresholds(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30EtherThresholds>())
    , second30_ether_reports(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30EtherReports>())
{
    second30_ether_thresholds->parent = this;
    second30_ether_reports->parent = this;

    yang_name = "second30-ether"; yang_parent_name = "ethernet-second30"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::~Second30Ether()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::has_data() const
{
    if (is_presence_container) return true;
    return (second30_ether_thresholds !=  nullptr && second30_ether_thresholds->has_data())
	|| (second30_ether_reports !=  nullptr && second30_ether_reports->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::has_operation() const
{
    return is_set(yfilter)
	|| (second30_ether_thresholds !=  nullptr && second30_ether_thresholds->has_operation())
	|| (second30_ether_reports !=  nullptr && second30_ether_reports->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "second30-ether";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "second30-ether-thresholds")
    {
        if(second30_ether_thresholds == nullptr)
        {
            second30_ether_thresholds = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30EtherThresholds>();
        }
        return second30_ether_thresholds;
    }

    if(child_yang_name == "second30-ether-reports")
    {
        if(second30_ether_reports == nullptr)
        {
            second30_ether_reports = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30EtherReports>();
        }
        return second30_ether_reports;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(second30_ether_thresholds != nullptr)
    {
        children["second30-ether-thresholds"] = second30_ether_thresholds;
    }

    if(second30_ether_reports != nullptr)
    {
        children["second30-ether-reports"] = second30_ether_reports;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second30-ether-thresholds" || name == "second30-ether-reports")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30EtherThresholds::Second30EtherThresholds()
    :
    second30_ether_threshold(this, {"ether_threshold"})
{

    yang_name = "second30-ether-thresholds"; yang_parent_name = "second30-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30EtherThresholds::~Second30EtherThresholds()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30EtherThresholds::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<second30_ether_threshold.len(); index++)
    {
        if(second30_ether_threshold[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30EtherThresholds::has_operation() const
{
    for (std::size_t index=0; index<second30_ether_threshold.len(); index++)
    {
        if(second30_ether_threshold[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30EtherThresholds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "second30-ether-thresholds";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30EtherThresholds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30EtherThresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "second30-ether-threshold")
    {
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30EtherThresholds::Second30EtherThreshold>();
        c->parent = this;
        second30_ether_threshold.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30EtherThresholds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : second30_ether_threshold.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30EtherThresholds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30EtherThresholds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30EtherThresholds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second30-ether-threshold")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30EtherThresholds::Second30EtherThreshold::Second30EtherThreshold()
    :
    ether_threshold{YType::enumeration, "ether-threshold"},
    ether_threshold_value{YType::uint32, "ether-threshold-value"}
{

    yang_name = "second30-ether-threshold"; yang_parent_name = "second30-ether-thresholds"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30EtherThresholds::Second30EtherThreshold::~Second30EtherThreshold()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30EtherThresholds::Second30EtherThreshold::has_data() const
{
    if (is_presence_container) return true;
    return ether_threshold.is_set
	|| ether_threshold_value.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30EtherThresholds::Second30EtherThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ether_threshold.yfilter)
	|| ydk::is_set(ether_threshold_value.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30EtherThresholds::Second30EtherThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "second30-ether-threshold";
    ADD_KEY_TOKEN(ether_threshold, "ether-threshold");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30EtherThresholds::Second30EtherThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ether_threshold.is_set || is_set(ether_threshold.yfilter)) leaf_name_data.push_back(ether_threshold.get_name_leafdata());
    if (ether_threshold_value.is_set || is_set(ether_threshold_value.yfilter)) leaf_name_data.push_back(ether_threshold_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30EtherThresholds::Second30EtherThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30EtherThresholds::Second30EtherThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30EtherThresholds::Second30EtherThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ether-threshold")
    {
        ether_threshold = value;
        ether_threshold.value_namespace = name_space;
        ether_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ether-threshold-value")
    {
        ether_threshold_value = value;
        ether_threshold_value.value_namespace = name_space;
        ether_threshold_value.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30EtherThresholds::Second30EtherThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ether-threshold")
    {
        ether_threshold.yfilter = yfilter;
    }
    if(value_path == "ether-threshold-value")
    {
        ether_threshold_value.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30EtherThresholds::Second30EtherThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ether-threshold" || name == "ether-threshold-value")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30EtherReports::Second30EtherReports()
    :
    second30_ether_report(this, {"ether_report"})
{

    yang_name = "second30-ether-reports"; yang_parent_name = "second30-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30EtherReports::~Second30EtherReports()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30EtherReports::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<second30_ether_report.len(); index++)
    {
        if(second30_ether_report[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30EtherReports::has_operation() const
{
    for (std::size_t index=0; index<second30_ether_report.len(); index++)
    {
        if(second30_ether_report[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30EtherReports::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "second30-ether-reports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30EtherReports::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30EtherReports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "second30-ether-report")
    {
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30EtherReports::Second30EtherReport>();
        c->parent = this;
        second30_ether_report.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30EtherReports::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : second30_ether_report.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30EtherReports::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30EtherReports::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30EtherReports::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second30-ether-report")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30EtherReports::Second30EtherReport::Second30EtherReport()
    :
    ether_report{YType::enumeration, "ether-report"}
{

    yang_name = "second30-ether-report"; yang_parent_name = "second30-ether-reports"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30EtherReports::Second30EtherReport::~Second30EtherReport()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30EtherReports::Second30EtherReport::has_data() const
{
    if (is_presence_container) return true;
    return ether_report.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30EtherReports::Second30EtherReport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ether_report.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30EtherReports::Second30EtherReport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "second30-ether-report";
    ADD_KEY_TOKEN(ether_report, "ether-report");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30EtherReports::Second30EtherReport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ether_report.is_set || is_set(ether_report.yfilter)) leaf_name_data.push_back(ether_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30EtherReports::Second30EtherReport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30EtherReports::Second30EtherReport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30EtherReports::Second30EtherReport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ether-report")
    {
        ether_report = value;
        ether_report.value_namespace = name_space;
        ether_report.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30EtherReports::Second30EtherReport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ether-report")
    {
        ether_report.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30EtherReports::Second30EtherReport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ether-report")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24Path()
    :
    hour24otn_path(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24otnPath>())
{
    hour24otn_path->parent = this;

    yang_name = "hour24-path"; yang_parent_name = "performance-management"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::~Hour24Path()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::has_data() const
{
    if (is_presence_container) return true;
    return (hour24otn_path !=  nullptr && hour24otn_path->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::has_operation() const
{
    return is_set(yfilter)
	|| (hour24otn_path !=  nullptr && hour24otn_path->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hour24otn-path")
    {
        if(hour24otn_path == nullptr)
        {
            hour24otn_path = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24otnPath>();
        }
        return hour24otn_path;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(hour24otn_path != nullptr)
    {
        children["hour24otn-path"] = hour24otn_path;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hour24otn-path")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24otnPath::Hour24otnPath()
    :
    hour24otn_path_reports(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24otnPath::Hour24otnPathReports>())
    , hour24otn_path_thresholds(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24otnPath::Hour24otnPathThresholds>())
{
    hour24otn_path_reports->parent = this;
    hour24otn_path_thresholds->parent = this;

    yang_name = "hour24otn-path"; yang_parent_name = "hour24-path"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24otnPath::~Hour24otnPath()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24otnPath::has_data() const
{
    if (is_presence_container) return true;
    return (hour24otn_path_reports !=  nullptr && hour24otn_path_reports->has_data())
	|| (hour24otn_path_thresholds !=  nullptr && hour24otn_path_thresholds->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24otnPath::has_operation() const
{
    return is_set(yfilter)
	|| (hour24otn_path_reports !=  nullptr && hour24otn_path_reports->has_operation())
	|| (hour24otn_path_thresholds !=  nullptr && hour24otn_path_thresholds->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24otnPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24otn-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24otnPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24otnPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hour24otn-path-reports")
    {
        if(hour24otn_path_reports == nullptr)
        {
            hour24otn_path_reports = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24otnPath::Hour24otnPathReports>();
        }
        return hour24otn_path_reports;
    }

    if(child_yang_name == "hour24otn-path-thresholds")
    {
        if(hour24otn_path_thresholds == nullptr)
        {
            hour24otn_path_thresholds = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24otnPath::Hour24otnPathThresholds>();
        }
        return hour24otn_path_thresholds;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24otnPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(hour24otn_path_reports != nullptr)
    {
        children["hour24otn-path-reports"] = hour24otn_path_reports;
    }

    if(hour24otn_path_thresholds != nullptr)
    {
        children["hour24otn-path-thresholds"] = hour24otn_path_thresholds;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24otnPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24otnPath::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24otnPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hour24otn-path-reports" || name == "hour24otn-path-thresholds")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24otnPath::Hour24otnPathReports::Hour24otnPathReports()
    :
    hour24otn_path_report(this, {"otn_report"})
{

    yang_name = "hour24otn-path-reports"; yang_parent_name = "hour24otn-path"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24otnPath::Hour24otnPathReports::~Hour24otnPathReports()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24otnPath::Hour24otnPathReports::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<hour24otn_path_report.len(); index++)
    {
        if(hour24otn_path_report[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24otnPath::Hour24otnPathReports::has_operation() const
{
    for (std::size_t index=0; index<hour24otn_path_report.len(); index++)
    {
        if(hour24otn_path_report[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24otnPath::Hour24otnPathReports::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24otn-path-reports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24otnPath::Hour24otnPathReports::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24otnPath::Hour24otnPathReports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hour24otn-path-report")
    {
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24otnPath::Hour24otnPathReports::Hour24otnPathReport>();
        c->parent = this;
        hour24otn_path_report.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24otnPath::Hour24otnPathReports::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : hour24otn_path_report.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24otnPath::Hour24otnPathReports::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24otnPath::Hour24otnPathReports::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24otnPath::Hour24otnPathReports::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hour24otn-path-report")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24otnPath::Hour24otnPathReports::Hour24otnPathReport::Hour24otnPathReport()
    :
    otn_report{YType::enumeration, "otn-report"},
    enable{YType::enumeration, "enable"}
{

    yang_name = "hour24otn-path-report"; yang_parent_name = "hour24otn-path-reports"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24otnPath::Hour24otnPathReports::Hour24otnPathReport::~Hour24otnPathReport()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24otnPath::Hour24otnPathReports::Hour24otnPathReport::has_data() const
{
    if (is_presence_container) return true;
    return otn_report.is_set
	|| enable.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24otnPath::Hour24otnPathReports::Hour24otnPathReport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(otn_report.yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24otnPath::Hour24otnPathReports::Hour24otnPathReport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24otn-path-report";
    ADD_KEY_TOKEN(otn_report, "otn-report");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24otnPath::Hour24otnPathReports::Hour24otnPathReport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (otn_report.is_set || is_set(otn_report.yfilter)) leaf_name_data.push_back(otn_report.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24otnPath::Hour24otnPathReports::Hour24otnPathReport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24otnPath::Hour24otnPathReports::Hour24otnPathReport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24otnPath::Hour24otnPathReports::Hour24otnPathReport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24otnPath::Hour24otnPathReports::Hour24otnPathReport::set_filter(const std::string & value_path, YFilter yfilter)
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

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24otnPath::Hour24otnPathReports::Hour24otnPathReport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "otn-report" || name == "enable")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24otnPath::Hour24otnPathThresholds::Hour24otnPathThresholds()
    :
    hour24otn_path_threshold(this, {"otn_threshold"})
{

    yang_name = "hour24otn-path-thresholds"; yang_parent_name = "hour24otn-path"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24otnPath::Hour24otnPathThresholds::~Hour24otnPathThresholds()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24otnPath::Hour24otnPathThresholds::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<hour24otn_path_threshold.len(); index++)
    {
        if(hour24otn_path_threshold[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24otnPath::Hour24otnPathThresholds::has_operation() const
{
    for (std::size_t index=0; index<hour24otn_path_threshold.len(); index++)
    {
        if(hour24otn_path_threshold[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24otnPath::Hour24otnPathThresholds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24otn-path-thresholds";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24otnPath::Hour24otnPathThresholds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24otnPath::Hour24otnPathThresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hour24otn-path-threshold")
    {
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24otnPath::Hour24otnPathThresholds::Hour24otnPathThreshold>();
        c->parent = this;
        hour24otn_path_threshold.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24otnPath::Hour24otnPathThresholds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : hour24otn_path_threshold.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24otnPath::Hour24otnPathThresholds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24otnPath::Hour24otnPathThresholds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24otnPath::Hour24otnPathThresholds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hour24otn-path-threshold")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24otnPath::Hour24otnPathThresholds::Hour24otnPathThreshold::Hour24otnPathThreshold()
    :
    otn_threshold{YType::enumeration, "otn-threshold"},
    otn_threshold_value{YType::uint32, "otn-threshold-value"}
{

    yang_name = "hour24otn-path-threshold"; yang_parent_name = "hour24otn-path-thresholds"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24otnPath::Hour24otnPathThresholds::Hour24otnPathThreshold::~Hour24otnPathThreshold()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24otnPath::Hour24otnPathThresholds::Hour24otnPathThreshold::has_data() const
{
    if (is_presence_container) return true;
    return otn_threshold.is_set
	|| otn_threshold_value.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24otnPath::Hour24otnPathThresholds::Hour24otnPathThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(otn_threshold.yfilter)
	|| ydk::is_set(otn_threshold_value.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24otnPath::Hour24otnPathThresholds::Hour24otnPathThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24otn-path-threshold";
    ADD_KEY_TOKEN(otn_threshold, "otn-threshold");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24otnPath::Hour24otnPathThresholds::Hour24otnPathThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (otn_threshold.is_set || is_set(otn_threshold.yfilter)) leaf_name_data.push_back(otn_threshold.get_name_leafdata());
    if (otn_threshold_value.is_set || is_set(otn_threshold_value.yfilter)) leaf_name_data.push_back(otn_threshold_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24otnPath::Hour24otnPathThresholds::Hour24otnPathThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24otnPath::Hour24otnPathThresholds::Hour24otnPathThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24otnPath::Hour24otnPathThresholds::Hour24otnPathThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24otnPath::Hour24otnPathThresholds::Hour24otnPathThreshold::set_filter(const std::string & value_path, YFilter yfilter)
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

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24otnPath::Hour24otnPathThresholds::Hour24otnPathThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "otn-threshold" || name == "otn-threshold-value")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15()
    :
    minute15_optics(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics>())
    , minute15secyif(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secyif>())
    , minute15secyrx(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secyrx>())
    , minute15pcs(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15pcs>())
    , minute15fec(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15fec>())
    , minute15secytx(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secytx>())
    , minute15otn(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15otn>())
{
    minute15_optics->parent = this;
    minute15secyif->parent = this;
    minute15secyrx->parent = this;
    minute15pcs->parent = this;
    minute15fec->parent = this;
    minute15secytx->parent = this;
    minute15otn->parent = this;

    yang_name = "minute15"; yang_parent_name = "performance-management"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::~Minute15()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::has_data() const
{
    if (is_presence_container) return true;
    return (minute15_optics !=  nullptr && minute15_optics->has_data())
	|| (minute15secyif !=  nullptr && minute15secyif->has_data())
	|| (minute15secyrx !=  nullptr && minute15secyrx->has_data())
	|| (minute15pcs !=  nullptr && minute15pcs->has_data())
	|| (minute15fec !=  nullptr && minute15fec->has_data())
	|| (minute15secytx !=  nullptr && minute15secytx->has_data())
	|| (minute15otn !=  nullptr && minute15otn->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::has_operation() const
{
    return is_set(yfilter)
	|| (minute15_optics !=  nullptr && minute15_optics->has_operation())
	|| (minute15secyif !=  nullptr && minute15secyif->has_operation())
	|| (minute15secyrx !=  nullptr && minute15secyrx->has_operation())
	|| (minute15pcs !=  nullptr && minute15pcs->has_operation())
	|| (minute15fec !=  nullptr && minute15fec->has_operation())
	|| (minute15secytx !=  nullptr && minute15secytx->has_operation())
	|| (minute15otn !=  nullptr && minute15otn->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "minute15-optics")
    {
        if(minute15_optics == nullptr)
        {
            minute15_optics = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics>();
        }
        return minute15_optics;
    }

    if(child_yang_name == "minute15secyif")
    {
        if(minute15secyif == nullptr)
        {
            minute15secyif = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secyif>();
        }
        return minute15secyif;
    }

    if(child_yang_name == "minute15secyrx")
    {
        if(minute15secyrx == nullptr)
        {
            minute15secyrx = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secyrx>();
        }
        return minute15secyrx;
    }

    if(child_yang_name == "minute15pcs")
    {
        if(minute15pcs == nullptr)
        {
            minute15pcs = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15pcs>();
        }
        return minute15pcs;
    }

    if(child_yang_name == "minute15fec")
    {
        if(minute15fec == nullptr)
        {
            minute15fec = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15fec>();
        }
        return minute15fec;
    }

    if(child_yang_name == "minute15secytx")
    {
        if(minute15secytx == nullptr)
        {
            minute15secytx = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secytx>();
        }
        return minute15secytx;
    }

    if(child_yang_name == "minute15otn")
    {
        if(minute15otn == nullptr)
        {
            minute15otn = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15otn>();
        }
        return minute15otn;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(minute15_optics != nullptr)
    {
        children["minute15-optics"] = minute15_optics;
    }

    if(minute15secyif != nullptr)
    {
        children["minute15secyif"] = minute15secyif;
    }

    if(minute15secyrx != nullptr)
    {
        children["minute15secyrx"] = minute15secyrx;
    }

    if(minute15pcs != nullptr)
    {
        children["minute15pcs"] = minute15pcs;
    }

    if(minute15fec != nullptr)
    {
        children["minute15fec"] = minute15fec;
    }

    if(minute15secytx != nullptr)
    {
        children["minute15secytx"] = minute15secytx;
    }

    if(minute15otn != nullptr)
    {
        children["minute15otn"] = minute15otn;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minute15-optics" || name == "minute15secyif" || name == "minute15secyrx" || name == "minute15pcs" || name == "minute15fec" || name == "minute15secytx" || name == "minute15otn")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::Minute15Optics()
    :
    minute15_optics_thresholds(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::Minute15OpticsThresholds>())
    , minute15_optics_reports(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::Minute15OpticsReports>())
{
    minute15_optics_thresholds->parent = this;
    minute15_optics_reports->parent = this;

    yang_name = "minute15-optics"; yang_parent_name = "minute15"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::~Minute15Optics()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::has_data() const
{
    if (is_presence_container) return true;
    return (minute15_optics_thresholds !=  nullptr && minute15_optics_thresholds->has_data())
	|| (minute15_optics_reports !=  nullptr && minute15_optics_reports->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::has_operation() const
{
    return is_set(yfilter)
	|| (minute15_optics_thresholds !=  nullptr && minute15_optics_thresholds->has_operation())
	|| (minute15_optics_reports !=  nullptr && minute15_optics_reports->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15-optics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "minute15-optics-thresholds")
    {
        if(minute15_optics_thresholds == nullptr)
        {
            minute15_optics_thresholds = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::Minute15OpticsThresholds>();
        }
        return minute15_optics_thresholds;
    }

    if(child_yang_name == "minute15-optics-reports")
    {
        if(minute15_optics_reports == nullptr)
        {
            minute15_optics_reports = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::Minute15OpticsReports>();
        }
        return minute15_optics_reports;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(minute15_optics_thresholds != nullptr)
    {
        children["minute15-optics-thresholds"] = minute15_optics_thresholds;
    }

    if(minute15_optics_reports != nullptr)
    {
        children["minute15-optics-reports"] = minute15_optics_reports;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minute15-optics-thresholds" || name == "minute15-optics-reports")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::Minute15OpticsThresholds::Minute15OpticsThresholds()
    :
    minute15_optics_threshold(this, {"optics_threshold"})
{

    yang_name = "minute15-optics-thresholds"; yang_parent_name = "minute15-optics"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::Minute15OpticsThresholds::~Minute15OpticsThresholds()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::Minute15OpticsThresholds::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<minute15_optics_threshold.len(); index++)
    {
        if(minute15_optics_threshold[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::Minute15OpticsThresholds::has_operation() const
{
    for (std::size_t index=0; index<minute15_optics_threshold.len(); index++)
    {
        if(minute15_optics_threshold[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::Minute15OpticsThresholds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15-optics-thresholds";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::Minute15OpticsThresholds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::Minute15OpticsThresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "minute15-optics-threshold")
    {
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::Minute15OpticsThresholds::Minute15OpticsThreshold>();
        c->parent = this;
        minute15_optics_threshold.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::Minute15OpticsThresholds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : minute15_optics_threshold.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::Minute15OpticsThresholds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::Minute15OpticsThresholds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::Minute15OpticsThresholds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minute15-optics-threshold")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::Minute15OpticsThresholds::Minute15OpticsThreshold::Minute15OpticsThreshold()
    :
    optics_threshold{YType::enumeration, "optics-threshold"},
    optics_threshold_value{YType::int32, "optics-threshold-value"},
    dbm{YType::uint32, "dbm"}
{

    yang_name = "minute15-optics-threshold"; yang_parent_name = "minute15-optics-thresholds"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::Minute15OpticsThresholds::Minute15OpticsThreshold::~Minute15OpticsThreshold()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::Minute15OpticsThresholds::Minute15OpticsThreshold::has_data() const
{
    if (is_presence_container) return true;
    return optics_threshold.is_set
	|| optics_threshold_value.is_set
	|| dbm.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::Minute15OpticsThresholds::Minute15OpticsThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(optics_threshold.yfilter)
	|| ydk::is_set(optics_threshold_value.yfilter)
	|| ydk::is_set(dbm.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::Minute15OpticsThresholds::Minute15OpticsThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15-optics-threshold";
    ADD_KEY_TOKEN(optics_threshold, "optics-threshold");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::Minute15OpticsThresholds::Minute15OpticsThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (optics_threshold.is_set || is_set(optics_threshold.yfilter)) leaf_name_data.push_back(optics_threshold.get_name_leafdata());
    if (optics_threshold_value.is_set || is_set(optics_threshold_value.yfilter)) leaf_name_data.push_back(optics_threshold_value.get_name_leafdata());
    if (dbm.is_set || is_set(dbm.yfilter)) leaf_name_data.push_back(dbm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::Minute15OpticsThresholds::Minute15OpticsThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::Minute15OpticsThresholds::Minute15OpticsThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::Minute15OpticsThresholds::Minute15OpticsThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "optics-threshold")
    {
        optics_threshold = value;
        optics_threshold.value_namespace = name_space;
        optics_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "optics-threshold-value")
    {
        optics_threshold_value = value;
        optics_threshold_value.value_namespace = name_space;
        optics_threshold_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dbm")
    {
        dbm = value;
        dbm.value_namespace = name_space;
        dbm.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::Minute15OpticsThresholds::Minute15OpticsThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "optics-threshold")
    {
        optics_threshold.yfilter = yfilter;
    }
    if(value_path == "optics-threshold-value")
    {
        optics_threshold_value.yfilter = yfilter;
    }
    if(value_path == "dbm")
    {
        dbm.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::Minute15OpticsThresholds::Minute15OpticsThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "optics-threshold" || name == "optics-threshold-value" || name == "dbm")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::Minute15OpticsReports::Minute15OpticsReports()
    :
    minute15_optics_report(this, {"optics_report"})
{

    yang_name = "minute15-optics-reports"; yang_parent_name = "minute15-optics"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::Minute15OpticsReports::~Minute15OpticsReports()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::Minute15OpticsReports::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<minute15_optics_report.len(); index++)
    {
        if(minute15_optics_report[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::Minute15OpticsReports::has_operation() const
{
    for (std::size_t index=0; index<minute15_optics_report.len(); index++)
    {
        if(minute15_optics_report[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::Minute15OpticsReports::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15-optics-reports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::Minute15OpticsReports::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::Minute15OpticsReports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "minute15-optics-report")
    {
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::Minute15OpticsReports::Minute15OpticsReport>();
        c->parent = this;
        minute15_optics_report.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::Minute15OpticsReports::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : minute15_optics_report.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::Minute15OpticsReports::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::Minute15OpticsReports::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::Minute15OpticsReports::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minute15-optics-report")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::Minute15OpticsReports::Minute15OpticsReport::Minute15OpticsReport()
    :
    optics_report{YType::enumeration, "optics-report"}
{

    yang_name = "minute15-optics-report"; yang_parent_name = "minute15-optics-reports"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::Minute15OpticsReports::Minute15OpticsReport::~Minute15OpticsReport()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::Minute15OpticsReports::Minute15OpticsReport::has_data() const
{
    if (is_presence_container) return true;
    return optics_report.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::Minute15OpticsReports::Minute15OpticsReport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(optics_report.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::Minute15OpticsReports::Minute15OpticsReport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15-optics-report";
    ADD_KEY_TOKEN(optics_report, "optics-report");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::Minute15OpticsReports::Minute15OpticsReport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (optics_report.is_set || is_set(optics_report.yfilter)) leaf_name_data.push_back(optics_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::Minute15OpticsReports::Minute15OpticsReport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::Minute15OpticsReports::Minute15OpticsReport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::Minute15OpticsReports::Minute15OpticsReport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "optics-report")
    {
        optics_report = value;
        optics_report.value_namespace = name_space;
        optics_report.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::Minute15OpticsReports::Minute15OpticsReport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "optics-report")
    {
        optics_report.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::Minute15OpticsReports::Minute15OpticsReport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "optics-report")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secyif::Minute15secyif()
    :
    minute15secyif_reports(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secyif::Minute15secyifReports>())
    , minute15secyif_thresholds(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secyif::Minute15secyifThresholds>())
{
    minute15secyif_reports->parent = this;
    minute15secyif_thresholds->parent = this;

    yang_name = "minute15secyif"; yang_parent_name = "minute15"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secyif::~Minute15secyif()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secyif::has_data() const
{
    if (is_presence_container) return true;
    return (minute15secyif_reports !=  nullptr && minute15secyif_reports->has_data())
	|| (minute15secyif_thresholds !=  nullptr && minute15secyif_thresholds->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secyif::has_operation() const
{
    return is_set(yfilter)
	|| (minute15secyif_reports !=  nullptr && minute15secyif_reports->has_operation())
	|| (minute15secyif_thresholds !=  nullptr && minute15secyif_thresholds->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secyif::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15secyif";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secyif::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secyif::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "minute15secyif-reports")
    {
        if(minute15secyif_reports == nullptr)
        {
            minute15secyif_reports = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secyif::Minute15secyifReports>();
        }
        return minute15secyif_reports;
    }

    if(child_yang_name == "minute15secyif-thresholds")
    {
        if(minute15secyif_thresholds == nullptr)
        {
            minute15secyif_thresholds = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secyif::Minute15secyifThresholds>();
        }
        return minute15secyif_thresholds;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secyif::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
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

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secyif::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secyif::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secyif::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minute15secyif-reports" || name == "minute15secyif-thresholds")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secyif::Minute15secyifReports::Minute15secyifReports()
    :
    minute15secyif_report(this, {"secyif_report"})
{

    yang_name = "minute15secyif-reports"; yang_parent_name = "minute15secyif"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secyif::Minute15secyifReports::~Minute15secyifReports()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secyif::Minute15secyifReports::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<minute15secyif_report.len(); index++)
    {
        if(minute15secyif_report[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secyif::Minute15secyifReports::has_operation() const
{
    for (std::size_t index=0; index<minute15secyif_report.len(); index++)
    {
        if(minute15secyif_report[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secyif::Minute15secyifReports::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15secyif-reports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secyif::Minute15secyifReports::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secyif::Minute15secyifReports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "minute15secyif-report")
    {
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secyif::Minute15secyifReports::Minute15secyifReport>();
        c->parent = this;
        minute15secyif_report.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secyif::Minute15secyifReports::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : minute15secyif_report.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secyif::Minute15secyifReports::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secyif::Minute15secyifReports::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secyif::Minute15secyifReports::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minute15secyif-report")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secyif::Minute15secyifReports::Minute15secyifReport::Minute15secyifReport()
    :
    secyif_report{YType::enumeration, "secyif-report"},
    enable{YType::enumeration, "enable"}
{

    yang_name = "minute15secyif-report"; yang_parent_name = "minute15secyif-reports"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secyif::Minute15secyifReports::Minute15secyifReport::~Minute15secyifReport()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secyif::Minute15secyifReports::Minute15secyifReport::has_data() const
{
    if (is_presence_container) return true;
    return secyif_report.is_set
	|| enable.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secyif::Minute15secyifReports::Minute15secyifReport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(secyif_report.yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secyif::Minute15secyifReports::Minute15secyifReport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15secyif-report";
    ADD_KEY_TOKEN(secyif_report, "secyif-report");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secyif::Minute15secyifReports::Minute15secyifReport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (secyif_report.is_set || is_set(secyif_report.yfilter)) leaf_name_data.push_back(secyif_report.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secyif::Minute15secyifReports::Minute15secyifReport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secyif::Minute15secyifReports::Minute15secyifReport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secyif::Minute15secyifReports::Minute15secyifReport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secyif::Minute15secyifReports::Minute15secyifReport::set_filter(const std::string & value_path, YFilter yfilter)
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

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secyif::Minute15secyifReports::Minute15secyifReport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "secyif-report" || name == "enable")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secyif::Minute15secyifThresholds::Minute15secyifThresholds()
    :
    minute15secyif_threshold(this, {"secyif_threshold"})
{

    yang_name = "minute15secyif-thresholds"; yang_parent_name = "minute15secyif"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secyif::Minute15secyifThresholds::~Minute15secyifThresholds()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secyif::Minute15secyifThresholds::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<minute15secyif_threshold.len(); index++)
    {
        if(minute15secyif_threshold[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secyif::Minute15secyifThresholds::has_operation() const
{
    for (std::size_t index=0; index<minute15secyif_threshold.len(); index++)
    {
        if(minute15secyif_threshold[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secyif::Minute15secyifThresholds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15secyif-thresholds";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secyif::Minute15secyifThresholds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secyif::Minute15secyifThresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "minute15secyif-threshold")
    {
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secyif::Minute15secyifThresholds::Minute15secyifThreshold>();
        c->parent = this;
        minute15secyif_threshold.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secyif::Minute15secyifThresholds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : minute15secyif_threshold.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secyif::Minute15secyifThresholds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secyif::Minute15secyifThresholds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secyif::Minute15secyifThresholds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minute15secyif-threshold")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secyif::Minute15secyifThresholds::Minute15secyifThreshold::Minute15secyifThreshold()
    :
    secyif_threshold{YType::enumeration, "secyif-threshold"},
    secyif_threshold_value{YType::uint32, "secyif-threshold-value"}
{

    yang_name = "minute15secyif-threshold"; yang_parent_name = "minute15secyif-thresholds"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secyif::Minute15secyifThresholds::Minute15secyifThreshold::~Minute15secyifThreshold()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secyif::Minute15secyifThresholds::Minute15secyifThreshold::has_data() const
{
    if (is_presence_container) return true;
    return secyif_threshold.is_set
	|| secyif_threshold_value.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secyif::Minute15secyifThresholds::Minute15secyifThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(secyif_threshold.yfilter)
	|| ydk::is_set(secyif_threshold_value.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secyif::Minute15secyifThresholds::Minute15secyifThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15secyif-threshold";
    ADD_KEY_TOKEN(secyif_threshold, "secyif-threshold");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secyif::Minute15secyifThresholds::Minute15secyifThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (secyif_threshold.is_set || is_set(secyif_threshold.yfilter)) leaf_name_data.push_back(secyif_threshold.get_name_leafdata());
    if (secyif_threshold_value.is_set || is_set(secyif_threshold_value.yfilter)) leaf_name_data.push_back(secyif_threshold_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secyif::Minute15secyifThresholds::Minute15secyifThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secyif::Minute15secyifThresholds::Minute15secyifThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secyif::Minute15secyifThresholds::Minute15secyifThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secyif::Minute15secyifThresholds::Minute15secyifThreshold::set_filter(const std::string & value_path, YFilter yfilter)
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

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secyif::Minute15secyifThresholds::Minute15secyifThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "secyif-threshold" || name == "secyif-threshold-value")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secyrx::Minute15secyrx()
    :
    minute15secyrx_reports(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secyrx::Minute15secyrxReports>())
    , minute15secyrx_thresholds(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secyrx::Minute15secyrxThresholds>())
{
    minute15secyrx_reports->parent = this;
    minute15secyrx_thresholds->parent = this;

    yang_name = "minute15secyrx"; yang_parent_name = "minute15"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secyrx::~Minute15secyrx()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secyrx::has_data() const
{
    if (is_presence_container) return true;
    return (minute15secyrx_reports !=  nullptr && minute15secyrx_reports->has_data())
	|| (minute15secyrx_thresholds !=  nullptr && minute15secyrx_thresholds->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secyrx::has_operation() const
{
    return is_set(yfilter)
	|| (minute15secyrx_reports !=  nullptr && minute15secyrx_reports->has_operation())
	|| (minute15secyrx_thresholds !=  nullptr && minute15secyrx_thresholds->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secyrx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15secyrx";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secyrx::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secyrx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "minute15secyrx-reports")
    {
        if(minute15secyrx_reports == nullptr)
        {
            minute15secyrx_reports = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secyrx::Minute15secyrxReports>();
        }
        return minute15secyrx_reports;
    }

    if(child_yang_name == "minute15secyrx-thresholds")
    {
        if(minute15secyrx_thresholds == nullptr)
        {
            minute15secyrx_thresholds = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secyrx::Minute15secyrxThresholds>();
        }
        return minute15secyrx_thresholds;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secyrx::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
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

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secyrx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secyrx::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secyrx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minute15secyrx-reports" || name == "minute15secyrx-thresholds")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secyrx::Minute15secyrxReports::Minute15secyrxReports()
    :
    minute15secyrx_report(this, {"secyrx_report"})
{

    yang_name = "minute15secyrx-reports"; yang_parent_name = "minute15secyrx"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secyrx::Minute15secyrxReports::~Minute15secyrxReports()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secyrx::Minute15secyrxReports::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<minute15secyrx_report.len(); index++)
    {
        if(minute15secyrx_report[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secyrx::Minute15secyrxReports::has_operation() const
{
    for (std::size_t index=0; index<minute15secyrx_report.len(); index++)
    {
        if(minute15secyrx_report[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secyrx::Minute15secyrxReports::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15secyrx-reports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secyrx::Minute15secyrxReports::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secyrx::Minute15secyrxReports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "minute15secyrx-report")
    {
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secyrx::Minute15secyrxReports::Minute15secyrxReport>();
        c->parent = this;
        minute15secyrx_report.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secyrx::Minute15secyrxReports::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : minute15secyrx_report.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secyrx::Minute15secyrxReports::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secyrx::Minute15secyrxReports::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secyrx::Minute15secyrxReports::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minute15secyrx-report")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secyrx::Minute15secyrxReports::Minute15secyrxReport::Minute15secyrxReport()
    :
    secyrx_report{YType::enumeration, "secyrx-report"},
    enable{YType::enumeration, "enable"}
{

    yang_name = "minute15secyrx-report"; yang_parent_name = "minute15secyrx-reports"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secyrx::Minute15secyrxReports::Minute15secyrxReport::~Minute15secyrxReport()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secyrx::Minute15secyrxReports::Minute15secyrxReport::has_data() const
{
    if (is_presence_container) return true;
    return secyrx_report.is_set
	|| enable.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secyrx::Minute15secyrxReports::Minute15secyrxReport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(secyrx_report.yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secyrx::Minute15secyrxReports::Minute15secyrxReport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15secyrx-report";
    ADD_KEY_TOKEN(secyrx_report, "secyrx-report");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secyrx::Minute15secyrxReports::Minute15secyrxReport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (secyrx_report.is_set || is_set(secyrx_report.yfilter)) leaf_name_data.push_back(secyrx_report.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secyrx::Minute15secyrxReports::Minute15secyrxReport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secyrx::Minute15secyrxReports::Minute15secyrxReport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secyrx::Minute15secyrxReports::Minute15secyrxReport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secyrx::Minute15secyrxReports::Minute15secyrxReport::set_filter(const std::string & value_path, YFilter yfilter)
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

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secyrx::Minute15secyrxReports::Minute15secyrxReport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "secyrx-report" || name == "enable")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secyrx::Minute15secyrxThresholds::Minute15secyrxThresholds()
    :
    minute15secyrx_threshold(this, {"secyrx_threshold"})
{

    yang_name = "minute15secyrx-thresholds"; yang_parent_name = "minute15secyrx"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secyrx::Minute15secyrxThresholds::~Minute15secyrxThresholds()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secyrx::Minute15secyrxThresholds::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<minute15secyrx_threshold.len(); index++)
    {
        if(minute15secyrx_threshold[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secyrx::Minute15secyrxThresholds::has_operation() const
{
    for (std::size_t index=0; index<minute15secyrx_threshold.len(); index++)
    {
        if(minute15secyrx_threshold[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secyrx::Minute15secyrxThresholds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15secyrx-thresholds";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secyrx::Minute15secyrxThresholds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secyrx::Minute15secyrxThresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "minute15secyrx-threshold")
    {
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secyrx::Minute15secyrxThresholds::Minute15secyrxThreshold>();
        c->parent = this;
        minute15secyrx_threshold.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secyrx::Minute15secyrxThresholds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : minute15secyrx_threshold.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secyrx::Minute15secyrxThresholds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secyrx::Minute15secyrxThresholds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secyrx::Minute15secyrxThresholds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minute15secyrx-threshold")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secyrx::Minute15secyrxThresholds::Minute15secyrxThreshold::Minute15secyrxThreshold()
    :
    secyrx_threshold{YType::enumeration, "secyrx-threshold"},
    secyrx_threshold_value{YType::uint32, "secyrx-threshold-value"}
{

    yang_name = "minute15secyrx-threshold"; yang_parent_name = "minute15secyrx-thresholds"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secyrx::Minute15secyrxThresholds::Minute15secyrxThreshold::~Minute15secyrxThreshold()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secyrx::Minute15secyrxThresholds::Minute15secyrxThreshold::has_data() const
{
    if (is_presence_container) return true;
    return secyrx_threshold.is_set
	|| secyrx_threshold_value.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secyrx::Minute15secyrxThresholds::Minute15secyrxThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(secyrx_threshold.yfilter)
	|| ydk::is_set(secyrx_threshold_value.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secyrx::Minute15secyrxThresholds::Minute15secyrxThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15secyrx-threshold";
    ADD_KEY_TOKEN(secyrx_threshold, "secyrx-threshold");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secyrx::Minute15secyrxThresholds::Minute15secyrxThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (secyrx_threshold.is_set || is_set(secyrx_threshold.yfilter)) leaf_name_data.push_back(secyrx_threshold.get_name_leafdata());
    if (secyrx_threshold_value.is_set || is_set(secyrx_threshold_value.yfilter)) leaf_name_data.push_back(secyrx_threshold_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secyrx::Minute15secyrxThresholds::Minute15secyrxThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secyrx::Minute15secyrxThresholds::Minute15secyrxThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secyrx::Minute15secyrxThresholds::Minute15secyrxThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secyrx::Minute15secyrxThresholds::Minute15secyrxThreshold::set_filter(const std::string & value_path, YFilter yfilter)
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

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secyrx::Minute15secyrxThresholds::Minute15secyrxThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "secyrx-threshold" || name == "secyrx-threshold-value")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15pcs::Minute15pcs()
    :
    minute15pcs_reports(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15pcs::Minute15pcsReports>())
    , minute15pcs_thresholds(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15pcs::Minute15pcsThresholds>())
{
    minute15pcs_reports->parent = this;
    minute15pcs_thresholds->parent = this;

    yang_name = "minute15pcs"; yang_parent_name = "minute15"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15pcs::~Minute15pcs()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15pcs::has_data() const
{
    if (is_presence_container) return true;
    return (minute15pcs_reports !=  nullptr && minute15pcs_reports->has_data())
	|| (minute15pcs_thresholds !=  nullptr && minute15pcs_thresholds->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15pcs::has_operation() const
{
    return is_set(yfilter)
	|| (minute15pcs_reports !=  nullptr && minute15pcs_reports->has_operation())
	|| (minute15pcs_thresholds !=  nullptr && minute15pcs_thresholds->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15pcs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15pcs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15pcs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15pcs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "minute15pcs-reports")
    {
        if(minute15pcs_reports == nullptr)
        {
            minute15pcs_reports = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15pcs::Minute15pcsReports>();
        }
        return minute15pcs_reports;
    }

    if(child_yang_name == "minute15pcs-thresholds")
    {
        if(minute15pcs_thresholds == nullptr)
        {
            minute15pcs_thresholds = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15pcs::Minute15pcsThresholds>();
        }
        return minute15pcs_thresholds;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15pcs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(minute15pcs_reports != nullptr)
    {
        children["minute15pcs-reports"] = minute15pcs_reports;
    }

    if(minute15pcs_thresholds != nullptr)
    {
        children["minute15pcs-thresholds"] = minute15pcs_thresholds;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15pcs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15pcs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15pcs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minute15pcs-reports" || name == "minute15pcs-thresholds")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15pcs::Minute15pcsReports::Minute15pcsReports()
    :
    minute15pcs_report(this, {"pcs_report"})
{

    yang_name = "minute15pcs-reports"; yang_parent_name = "minute15pcs"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15pcs::Minute15pcsReports::~Minute15pcsReports()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15pcs::Minute15pcsReports::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<minute15pcs_report.len(); index++)
    {
        if(minute15pcs_report[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15pcs::Minute15pcsReports::has_operation() const
{
    for (std::size_t index=0; index<minute15pcs_report.len(); index++)
    {
        if(minute15pcs_report[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15pcs::Minute15pcsReports::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15pcs-reports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15pcs::Minute15pcsReports::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15pcs::Minute15pcsReports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "minute15pcs-report")
    {
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15pcs::Minute15pcsReports::Minute15pcsReport>();
        c->parent = this;
        minute15pcs_report.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15pcs::Minute15pcsReports::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : minute15pcs_report.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15pcs::Minute15pcsReports::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15pcs::Minute15pcsReports::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15pcs::Minute15pcsReports::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minute15pcs-report")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15pcs::Minute15pcsReports::Minute15pcsReport::Minute15pcsReport()
    :
    pcs_report{YType::enumeration, "pcs-report"},
    enable{YType::enumeration, "enable"}
{

    yang_name = "minute15pcs-report"; yang_parent_name = "minute15pcs-reports"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15pcs::Minute15pcsReports::Minute15pcsReport::~Minute15pcsReport()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15pcs::Minute15pcsReports::Minute15pcsReport::has_data() const
{
    if (is_presence_container) return true;
    return pcs_report.is_set
	|| enable.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15pcs::Minute15pcsReports::Minute15pcsReport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pcs_report.yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15pcs::Minute15pcsReports::Minute15pcsReport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15pcs-report";
    ADD_KEY_TOKEN(pcs_report, "pcs-report");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15pcs::Minute15pcsReports::Minute15pcsReport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pcs_report.is_set || is_set(pcs_report.yfilter)) leaf_name_data.push_back(pcs_report.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15pcs::Minute15pcsReports::Minute15pcsReport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15pcs::Minute15pcsReports::Minute15pcsReport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15pcs::Minute15pcsReports::Minute15pcsReport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pcs-report")
    {
        pcs_report = value;
        pcs_report.value_namespace = name_space;
        pcs_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15pcs::Minute15pcsReports::Minute15pcsReport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pcs-report")
    {
        pcs_report.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15pcs::Minute15pcsReports::Minute15pcsReport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pcs-report" || name == "enable")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15pcs::Minute15pcsThresholds::Minute15pcsThresholds()
    :
    minute15pcs_threshold(this, {"pcs_threshold"})
{

    yang_name = "minute15pcs-thresholds"; yang_parent_name = "minute15pcs"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15pcs::Minute15pcsThresholds::~Minute15pcsThresholds()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15pcs::Minute15pcsThresholds::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<minute15pcs_threshold.len(); index++)
    {
        if(minute15pcs_threshold[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15pcs::Minute15pcsThresholds::has_operation() const
{
    for (std::size_t index=0; index<minute15pcs_threshold.len(); index++)
    {
        if(minute15pcs_threshold[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15pcs::Minute15pcsThresholds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15pcs-thresholds";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15pcs::Minute15pcsThresholds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15pcs::Minute15pcsThresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "minute15pcs-threshold")
    {
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15pcs::Minute15pcsThresholds::Minute15pcsThreshold>();
        c->parent = this;
        minute15pcs_threshold.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15pcs::Minute15pcsThresholds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : minute15pcs_threshold.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15pcs::Minute15pcsThresholds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15pcs::Minute15pcsThresholds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15pcs::Minute15pcsThresholds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minute15pcs-threshold")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15pcs::Minute15pcsThresholds::Minute15pcsThreshold::Minute15pcsThreshold()
    :
    pcs_threshold{YType::enumeration, "pcs-threshold"},
    pcs_threshold_value{YType::str, "pcs-threshold-value"}
{

    yang_name = "minute15pcs-threshold"; yang_parent_name = "minute15pcs-thresholds"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15pcs::Minute15pcsThresholds::Minute15pcsThreshold::~Minute15pcsThreshold()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15pcs::Minute15pcsThresholds::Minute15pcsThreshold::has_data() const
{
    if (is_presence_container) return true;
    return pcs_threshold.is_set
	|| pcs_threshold_value.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15pcs::Minute15pcsThresholds::Minute15pcsThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pcs_threshold.yfilter)
	|| ydk::is_set(pcs_threshold_value.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15pcs::Minute15pcsThresholds::Minute15pcsThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15pcs-threshold";
    ADD_KEY_TOKEN(pcs_threshold, "pcs-threshold");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15pcs::Minute15pcsThresholds::Minute15pcsThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pcs_threshold.is_set || is_set(pcs_threshold.yfilter)) leaf_name_data.push_back(pcs_threshold.get_name_leafdata());
    if (pcs_threshold_value.is_set || is_set(pcs_threshold_value.yfilter)) leaf_name_data.push_back(pcs_threshold_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15pcs::Minute15pcsThresholds::Minute15pcsThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15pcs::Minute15pcsThresholds::Minute15pcsThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15pcs::Minute15pcsThresholds::Minute15pcsThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pcs-threshold")
    {
        pcs_threshold = value;
        pcs_threshold.value_namespace = name_space;
        pcs_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcs-threshold-value")
    {
        pcs_threshold_value = value;
        pcs_threshold_value.value_namespace = name_space;
        pcs_threshold_value.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15pcs::Minute15pcsThresholds::Minute15pcsThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pcs-threshold")
    {
        pcs_threshold.yfilter = yfilter;
    }
    if(value_path == "pcs-threshold-value")
    {
        pcs_threshold_value.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15pcs::Minute15pcsThresholds::Minute15pcsThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pcs-threshold" || name == "pcs-threshold-value")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15fec::Minute15fec()
    :
    minute15fec_thresholds(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15fec::Minute15fecThresholds>())
    , minute15fec_reports(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15fec::Minute15fecReports>())
{
    minute15fec_thresholds->parent = this;
    minute15fec_reports->parent = this;

    yang_name = "minute15fec"; yang_parent_name = "minute15"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15fec::~Minute15fec()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15fec::has_data() const
{
    if (is_presence_container) return true;
    return (minute15fec_thresholds !=  nullptr && minute15fec_thresholds->has_data())
	|| (minute15fec_reports !=  nullptr && minute15fec_reports->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15fec::has_operation() const
{
    return is_set(yfilter)
	|| (minute15fec_thresholds !=  nullptr && minute15fec_thresholds->has_operation())
	|| (minute15fec_reports !=  nullptr && minute15fec_reports->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15fec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15fec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15fec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15fec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "minute15fec-thresholds")
    {
        if(minute15fec_thresholds == nullptr)
        {
            minute15fec_thresholds = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15fec::Minute15fecThresholds>();
        }
        return minute15fec_thresholds;
    }

    if(child_yang_name == "minute15fec-reports")
    {
        if(minute15fec_reports == nullptr)
        {
            minute15fec_reports = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15fec::Minute15fecReports>();
        }
        return minute15fec_reports;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15fec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(minute15fec_thresholds != nullptr)
    {
        children["minute15fec-thresholds"] = minute15fec_thresholds;
    }

    if(minute15fec_reports != nullptr)
    {
        children["minute15fec-reports"] = minute15fec_reports;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15fec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15fec::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15fec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minute15fec-thresholds" || name == "minute15fec-reports")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15fec::Minute15fecThresholds::Minute15fecThresholds()
    :
    minute15fec_threshold(this, {"fec_threshold"})
{

    yang_name = "minute15fec-thresholds"; yang_parent_name = "minute15fec"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15fec::Minute15fecThresholds::~Minute15fecThresholds()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15fec::Minute15fecThresholds::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<minute15fec_threshold.len(); index++)
    {
        if(minute15fec_threshold[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15fec::Minute15fecThresholds::has_operation() const
{
    for (std::size_t index=0; index<minute15fec_threshold.len(); index++)
    {
        if(minute15fec_threshold[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15fec::Minute15fecThresholds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15fec-thresholds";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15fec::Minute15fecThresholds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15fec::Minute15fecThresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "minute15fec-threshold")
    {
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15fec::Minute15fecThresholds::Minute15fecThreshold>();
        c->parent = this;
        minute15fec_threshold.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15fec::Minute15fecThresholds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : minute15fec_threshold.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15fec::Minute15fecThresholds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15fec::Minute15fecThresholds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15fec::Minute15fecThresholds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minute15fec-threshold")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15fec::Minute15fecThresholds::Minute15fecThreshold::Minute15fecThreshold()
    :
    fec_threshold{YType::enumeration, "fec-threshold"},
    fec_threshold_value{YType::str, "fec-threshold-value"}
{

    yang_name = "minute15fec-threshold"; yang_parent_name = "minute15fec-thresholds"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15fec::Minute15fecThresholds::Minute15fecThreshold::~Minute15fecThreshold()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15fec::Minute15fecThresholds::Minute15fecThreshold::has_data() const
{
    if (is_presence_container) return true;
    return fec_threshold.is_set
	|| fec_threshold_value.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15fec::Minute15fecThresholds::Minute15fecThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fec_threshold.yfilter)
	|| ydk::is_set(fec_threshold_value.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15fec::Minute15fecThresholds::Minute15fecThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15fec-threshold";
    ADD_KEY_TOKEN(fec_threshold, "fec-threshold");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15fec::Minute15fecThresholds::Minute15fecThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fec_threshold.is_set || is_set(fec_threshold.yfilter)) leaf_name_data.push_back(fec_threshold.get_name_leafdata());
    if (fec_threshold_value.is_set || is_set(fec_threshold_value.yfilter)) leaf_name_data.push_back(fec_threshold_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15fec::Minute15fecThresholds::Minute15fecThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15fec::Minute15fecThresholds::Minute15fecThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15fec::Minute15fecThresholds::Minute15fecThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15fec::Minute15fecThresholds::Minute15fecThreshold::set_filter(const std::string & value_path, YFilter yfilter)
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

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15fec::Minute15fecThresholds::Minute15fecThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fec-threshold" || name == "fec-threshold-value")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15fec::Minute15fecReports::Minute15fecReports()
    :
    minute15fec_report(this, {"fec_report"})
{

    yang_name = "minute15fec-reports"; yang_parent_name = "minute15fec"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15fec::Minute15fecReports::~Minute15fecReports()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15fec::Minute15fecReports::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<minute15fec_report.len(); index++)
    {
        if(minute15fec_report[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15fec::Minute15fecReports::has_operation() const
{
    for (std::size_t index=0; index<minute15fec_report.len(); index++)
    {
        if(minute15fec_report[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15fec::Minute15fecReports::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15fec-reports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15fec::Minute15fecReports::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15fec::Minute15fecReports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "minute15fec-report")
    {
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15fec::Minute15fecReports::Minute15fecReport>();
        c->parent = this;
        minute15fec_report.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15fec::Minute15fecReports::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : minute15fec_report.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15fec::Minute15fecReports::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15fec::Minute15fecReports::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15fec::Minute15fecReports::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minute15fec-report")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15fec::Minute15fecReports::Minute15fecReport::Minute15fecReport()
    :
    fec_report{YType::enumeration, "fec-report"},
    enable{YType::enumeration, "enable"}
{

    yang_name = "minute15fec-report"; yang_parent_name = "minute15fec-reports"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15fec::Minute15fecReports::Minute15fecReport::~Minute15fecReport()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15fec::Minute15fecReports::Minute15fecReport::has_data() const
{
    if (is_presence_container) return true;
    return fec_report.is_set
	|| enable.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15fec::Minute15fecReports::Minute15fecReport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fec_report.yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15fec::Minute15fecReports::Minute15fecReport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15fec-report";
    ADD_KEY_TOKEN(fec_report, "fec-report");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15fec::Minute15fecReports::Minute15fecReport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fec_report.is_set || is_set(fec_report.yfilter)) leaf_name_data.push_back(fec_report.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15fec::Minute15fecReports::Minute15fecReport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15fec::Minute15fecReports::Minute15fecReport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15fec::Minute15fecReports::Minute15fecReport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15fec::Minute15fecReports::Minute15fecReport::set_filter(const std::string & value_path, YFilter yfilter)
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

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15fec::Minute15fecReports::Minute15fecReport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fec-report" || name == "enable")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secytx::Minute15secytx()
    :
    minute15secytx_reports(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secytx::Minute15secytxReports>())
    , minute15secytx_thresholds(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secytx::Minute15secytxThresholds>())
{
    minute15secytx_reports->parent = this;
    minute15secytx_thresholds->parent = this;

    yang_name = "minute15secytx"; yang_parent_name = "minute15"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secytx::~Minute15secytx()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secytx::has_data() const
{
    if (is_presence_container) return true;
    return (minute15secytx_reports !=  nullptr && minute15secytx_reports->has_data())
	|| (minute15secytx_thresholds !=  nullptr && minute15secytx_thresholds->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secytx::has_operation() const
{
    return is_set(yfilter)
	|| (minute15secytx_reports !=  nullptr && minute15secytx_reports->has_operation())
	|| (minute15secytx_thresholds !=  nullptr && minute15secytx_thresholds->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secytx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15secytx";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secytx::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secytx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "minute15secytx-reports")
    {
        if(minute15secytx_reports == nullptr)
        {
            minute15secytx_reports = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secytx::Minute15secytxReports>();
        }
        return minute15secytx_reports;
    }

    if(child_yang_name == "minute15secytx-thresholds")
    {
        if(minute15secytx_thresholds == nullptr)
        {
            minute15secytx_thresholds = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secytx::Minute15secytxThresholds>();
        }
        return minute15secytx_thresholds;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secytx::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
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

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secytx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secytx::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secytx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minute15secytx-reports" || name == "minute15secytx-thresholds")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secytx::Minute15secytxReports::Minute15secytxReports()
    :
    minute15secytx_report(this, {"secytx_report"})
{

    yang_name = "minute15secytx-reports"; yang_parent_name = "minute15secytx"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secytx::Minute15secytxReports::~Minute15secytxReports()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secytx::Minute15secytxReports::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<minute15secytx_report.len(); index++)
    {
        if(minute15secytx_report[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secytx::Minute15secytxReports::has_operation() const
{
    for (std::size_t index=0; index<minute15secytx_report.len(); index++)
    {
        if(minute15secytx_report[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secytx::Minute15secytxReports::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15secytx-reports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secytx::Minute15secytxReports::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secytx::Minute15secytxReports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "minute15secytx-report")
    {
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secytx::Minute15secytxReports::Minute15secytxReport>();
        c->parent = this;
        minute15secytx_report.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secytx::Minute15secytxReports::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : minute15secytx_report.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secytx::Minute15secytxReports::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secytx::Minute15secytxReports::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secytx::Minute15secytxReports::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minute15secytx-report")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secytx::Minute15secytxReports::Minute15secytxReport::Minute15secytxReport()
    :
    secytx_report{YType::enumeration, "secytx-report"},
    enable{YType::enumeration, "enable"}
{

    yang_name = "minute15secytx-report"; yang_parent_name = "minute15secytx-reports"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secytx::Minute15secytxReports::Minute15secytxReport::~Minute15secytxReport()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secytx::Minute15secytxReports::Minute15secytxReport::has_data() const
{
    if (is_presence_container) return true;
    return secytx_report.is_set
	|| enable.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secytx::Minute15secytxReports::Minute15secytxReport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(secytx_report.yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secytx::Minute15secytxReports::Minute15secytxReport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15secytx-report";
    ADD_KEY_TOKEN(secytx_report, "secytx-report");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secytx::Minute15secytxReports::Minute15secytxReport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (secytx_report.is_set || is_set(secytx_report.yfilter)) leaf_name_data.push_back(secytx_report.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secytx::Minute15secytxReports::Minute15secytxReport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secytx::Minute15secytxReports::Minute15secytxReport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secytx::Minute15secytxReports::Minute15secytxReport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secytx::Minute15secytxReports::Minute15secytxReport::set_filter(const std::string & value_path, YFilter yfilter)
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

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secytx::Minute15secytxReports::Minute15secytxReport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "secytx-report" || name == "enable")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secytx::Minute15secytxThresholds::Minute15secytxThresholds()
    :
    minute15secytx_threshold(this, {"secytx_threshold"})
{

    yang_name = "minute15secytx-thresholds"; yang_parent_name = "minute15secytx"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secytx::Minute15secytxThresholds::~Minute15secytxThresholds()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secytx::Minute15secytxThresholds::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<minute15secytx_threshold.len(); index++)
    {
        if(minute15secytx_threshold[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secytx::Minute15secytxThresholds::has_operation() const
{
    for (std::size_t index=0; index<minute15secytx_threshold.len(); index++)
    {
        if(minute15secytx_threshold[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secytx::Minute15secytxThresholds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15secytx-thresholds";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secytx::Minute15secytxThresholds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secytx::Minute15secytxThresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "minute15secytx-threshold")
    {
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secytx::Minute15secytxThresholds::Minute15secytxThreshold>();
        c->parent = this;
        minute15secytx_threshold.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secytx::Minute15secytxThresholds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : minute15secytx_threshold.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secytx::Minute15secytxThresholds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secytx::Minute15secytxThresholds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secytx::Minute15secytxThresholds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minute15secytx-threshold")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secytx::Minute15secytxThresholds::Minute15secytxThreshold::Minute15secytxThreshold()
    :
    secytx_threshold{YType::enumeration, "secytx-threshold"},
    secytx_threshold_value{YType::uint32, "secytx-threshold-value"}
{

    yang_name = "minute15secytx-threshold"; yang_parent_name = "minute15secytx-thresholds"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secytx::Minute15secytxThresholds::Minute15secytxThreshold::~Minute15secytxThreshold()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secytx::Minute15secytxThresholds::Minute15secytxThreshold::has_data() const
{
    if (is_presence_container) return true;
    return secytx_threshold.is_set
	|| secytx_threshold_value.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secytx::Minute15secytxThresholds::Minute15secytxThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(secytx_threshold.yfilter)
	|| ydk::is_set(secytx_threshold_value.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secytx::Minute15secytxThresholds::Minute15secytxThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15secytx-threshold";
    ADD_KEY_TOKEN(secytx_threshold, "secytx-threshold");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secytx::Minute15secytxThresholds::Minute15secytxThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (secytx_threshold.is_set || is_set(secytx_threshold.yfilter)) leaf_name_data.push_back(secytx_threshold.get_name_leafdata());
    if (secytx_threshold_value.is_set || is_set(secytx_threshold_value.yfilter)) leaf_name_data.push_back(secytx_threshold_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secytx::Minute15secytxThresholds::Minute15secytxThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secytx::Minute15secytxThresholds::Minute15secytxThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secytx::Minute15secytxThresholds::Minute15secytxThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secytx::Minute15secytxThresholds::Minute15secytxThreshold::set_filter(const std::string & value_path, YFilter yfilter)
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

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secytx::Minute15secytxThresholds::Minute15secytxThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "secytx-threshold" || name == "secytx-threshold-value")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15otn::Minute15otn()
    :
    min15_otn_threshes(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15otn::Min15OtnThreshes>())
    , minute15otn_reports(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15otn::Minute15otnReports>())
{
    min15_otn_threshes->parent = this;
    minute15otn_reports->parent = this;

    yang_name = "minute15otn"; yang_parent_name = "minute15"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15otn::~Minute15otn()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15otn::has_data() const
{
    if (is_presence_container) return true;
    return (min15_otn_threshes !=  nullptr && min15_otn_threshes->has_data())
	|| (minute15otn_reports !=  nullptr && minute15otn_reports->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15otn::has_operation() const
{
    return is_set(yfilter)
	|| (min15_otn_threshes !=  nullptr && min15_otn_threshes->has_operation())
	|| (minute15otn_reports !=  nullptr && minute15otn_reports->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15otn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15otn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15otn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15otn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "min15-otn-threshes")
    {
        if(min15_otn_threshes == nullptr)
        {
            min15_otn_threshes = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15otn::Min15OtnThreshes>();
        }
        return min15_otn_threshes;
    }

    if(child_yang_name == "minute15otn-reports")
    {
        if(minute15otn_reports == nullptr)
        {
            minute15otn_reports = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15otn::Minute15otnReports>();
        }
        return minute15otn_reports;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15otn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
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

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15otn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15otn::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15otn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "min15-otn-threshes" || name == "minute15otn-reports")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15otn::Min15OtnThreshes::Min15OtnThreshes()
    :
    min15_otn_thresh(this, {"otn_threshold"})
{

    yang_name = "min15-otn-threshes"; yang_parent_name = "minute15otn"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15otn::Min15OtnThreshes::~Min15OtnThreshes()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15otn::Min15OtnThreshes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<min15_otn_thresh.len(); index++)
    {
        if(min15_otn_thresh[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15otn::Min15OtnThreshes::has_operation() const
{
    for (std::size_t index=0; index<min15_otn_thresh.len(); index++)
    {
        if(min15_otn_thresh[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15otn::Min15OtnThreshes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "min15-otn-threshes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15otn::Min15OtnThreshes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15otn::Min15OtnThreshes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "min15-otn-thresh")
    {
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15otn::Min15OtnThreshes::Min15OtnThresh>();
        c->parent = this;
        min15_otn_thresh.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15otn::Min15OtnThreshes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : min15_otn_thresh.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15otn::Min15OtnThreshes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15otn::Min15OtnThreshes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15otn::Min15OtnThreshes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "min15-otn-thresh")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15otn::Min15OtnThreshes::Min15OtnThresh::Min15OtnThresh()
    :
    otn_threshold{YType::enumeration, "otn-threshold"},
    otn_threshold_value{YType::uint32, "otn-threshold-value"}
{

    yang_name = "min15-otn-thresh"; yang_parent_name = "min15-otn-threshes"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15otn::Min15OtnThreshes::Min15OtnThresh::~Min15OtnThresh()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15otn::Min15OtnThreshes::Min15OtnThresh::has_data() const
{
    if (is_presence_container) return true;
    return otn_threshold.is_set
	|| otn_threshold_value.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15otn::Min15OtnThreshes::Min15OtnThresh::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(otn_threshold.yfilter)
	|| ydk::is_set(otn_threshold_value.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15otn::Min15OtnThreshes::Min15OtnThresh::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "min15-otn-thresh";
    ADD_KEY_TOKEN(otn_threshold, "otn-threshold");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15otn::Min15OtnThreshes::Min15OtnThresh::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (otn_threshold.is_set || is_set(otn_threshold.yfilter)) leaf_name_data.push_back(otn_threshold.get_name_leafdata());
    if (otn_threshold_value.is_set || is_set(otn_threshold_value.yfilter)) leaf_name_data.push_back(otn_threshold_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15otn::Min15OtnThreshes::Min15OtnThresh::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15otn::Min15OtnThreshes::Min15OtnThresh::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15otn::Min15OtnThreshes::Min15OtnThresh::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15otn::Min15OtnThreshes::Min15OtnThresh::set_filter(const std::string & value_path, YFilter yfilter)
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

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15otn::Min15OtnThreshes::Min15OtnThresh::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "otn-threshold" || name == "otn-threshold-value")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15otn::Minute15otnReports::Minute15otnReports()
    :
    minute15otn_report(this, {"otn_report"})
{

    yang_name = "minute15otn-reports"; yang_parent_name = "minute15otn"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15otn::Minute15otnReports::~Minute15otnReports()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15otn::Minute15otnReports::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<minute15otn_report.len(); index++)
    {
        if(minute15otn_report[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15otn::Minute15otnReports::has_operation() const
{
    for (std::size_t index=0; index<minute15otn_report.len(); index++)
    {
        if(minute15otn_report[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15otn::Minute15otnReports::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15otn-reports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15otn::Minute15otnReports::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15otn::Minute15otnReports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "minute15otn-report")
    {
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15otn::Minute15otnReports::Minute15otnReport>();
        c->parent = this;
        minute15otn_report.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15otn::Minute15otnReports::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : minute15otn_report.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15otn::Minute15otnReports::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15otn::Minute15otnReports::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15otn::Minute15otnReports::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minute15otn-report")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15otn::Minute15otnReports::Minute15otnReport::Minute15otnReport()
    :
    otn_report{YType::enumeration, "otn-report"},
    enable{YType::enumeration, "enable"}
{

    yang_name = "minute15otn-report"; yang_parent_name = "minute15otn-reports"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15otn::Minute15otnReports::Minute15otnReport::~Minute15otnReport()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15otn::Minute15otnReports::Minute15otnReport::has_data() const
{
    if (is_presence_container) return true;
    return otn_report.is_set
	|| enable.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15otn::Minute15otnReports::Minute15otnReport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(otn_report.yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15otn::Minute15otnReports::Minute15otnReport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15otn-report";
    ADD_KEY_TOKEN(otn_report, "otn-report");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15otn::Minute15otnReports::Minute15otnReport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (otn_report.is_set || is_set(otn_report.yfilter)) leaf_name_data.push_back(otn_report.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15otn::Minute15otnReports::Minute15otnReport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15otn::Minute15otnReports::Minute15otnReport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15otn::Minute15otnReports::Minute15otnReport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15otn::Minute15otnReports::Minute15otnReport::set_filter(const std::string & value_path, YFilter yfilter)
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

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15otn::Minute15otnReports::Minute15otnReport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "otn-report" || name == "enable")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagrs()
    :
    dagr(this, {"ip_addr"})
{

    yang_name = "dagrs"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Dagrs::~Dagrs()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Dagrs::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<dagr.len(); index++)
    {
        if(dagr[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::Dagrs::has_operation() const
{
    for (std::size_t index=0; index<dagr.len(); index++)
    {
        if(dagr[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Dagrs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-arp-cfg:dagrs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Dagrs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Dagrs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dagr")
    {
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr>();
        c->parent = this;
        dagr.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Dagrs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : dagr.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Dagrs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::Dagrs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Dagrs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dagr")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Dagr()
    :
    ip_addr{YType::str, "ip-addr"},
    enter{YType::empty, "enter"}
        ,
    sub(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub>())
{
    sub->parent = this;

    yang_name = "dagr"; yang_parent_name = "dagrs"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::~Dagr()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::has_data() const
{
    if (is_presence_container) return true;
    return ip_addr.is_set
	|| enter.is_set
	|| (sub !=  nullptr && sub->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_addr.yfilter)
	|| ydk::is_set(enter.yfilter)
	|| (sub !=  nullptr && sub->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dagr";
    ADD_KEY_TOKEN(ip_addr, "ip-addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_addr.is_set || is_set(ip_addr.yfilter)) leaf_name_data.push_back(ip_addr.get_name_leafdata());
    if (enter.is_set || is_set(enter.yfilter)) leaf_name_data.push_back(enter.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sub")
    {
        if(sub == nullptr)
        {
            sub = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub>();
        }
        return sub;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(sub != nullptr)
    {
        children["sub"] = sub;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-addr")
    {
        ip_addr = value;
        ip_addr.value_namespace = name_space;
        ip_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enter")
    {
        enter = value;
        enter.value_namespace = name_space;
        enter.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-addr")
    {
        ip_addr.yfilter = yfilter;
    }
    if(value_path == "enter")
    {
        enter.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sub" || name == "ip-addr" || name == "enter")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Sub()
    :
    priority_timeout{YType::uint32, "priority-timeout"}
        ,
    metric(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Metric>())
    , timers(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Timers>())
    , distance(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Distance>())
{
    metric->parent = this;
    timers->parent = this;
    distance->parent = this;

    yang_name = "sub"; yang_parent_name = "dagr"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::~Sub()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::has_data() const
{
    if (is_presence_container) return true;
    return priority_timeout.is_set
	|| (metric !=  nullptr && metric->has_data())
	|| (timers !=  nullptr && timers->has_data())
	|| (distance !=  nullptr && distance->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(priority_timeout.yfilter)
	|| (metric !=  nullptr && metric->has_operation())
	|| (timers !=  nullptr && timers->has_operation())
	|| (distance !=  nullptr && distance->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sub";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority_timeout.is_set || is_set(priority_timeout.yfilter)) leaf_name_data.push_back(priority_timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Metric>();
        }
        return metric;
    }

    if(child_yang_name == "timers")
    {
        if(timers == nullptr)
        {
            timers = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Timers>();
        }
        return timers;
    }

    if(child_yang_name == "distance")
    {
        if(distance == nullptr)
        {
            distance = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Distance>();
        }
        return distance;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(metric != nullptr)
    {
        children["metric"] = metric;
    }

    if(timers != nullptr)
    {
        children["timers"] = timers;
    }

    if(distance != nullptr)
    {
        children["distance"] = distance;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "priority-timeout")
    {
        priority_timeout = value;
        priority_timeout.value_namespace = name_space;
        priority_timeout.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "priority-timeout")
    {
        priority_timeout.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "timers" || name == "distance" || name == "priority-timeout")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Metric::Metric()
    :
    metric_norm{YType::uint32, "metric-norm"},
    metric_prio{YType::uint32, "metric-prio"}
{

    yang_name = "metric"; yang_parent_name = "sub"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Metric::~Metric()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Metric::has_data() const
{
    if (is_presence_container) return true;
    return metric_norm.is_set
	|| metric_prio.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Metric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric_norm.yfilter)
	|| ydk::is_set(metric_prio.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Metric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric_norm.is_set || is_set(metric_norm.yfilter)) leaf_name_data.push_back(metric_norm.get_name_leafdata());
    if (metric_prio.is_set || is_set(metric_prio.yfilter)) leaf_name_data.push_back(metric_prio.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Metric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric-norm")
    {
        metric_norm = value;
        metric_norm.value_namespace = name_space;
        metric_norm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-prio")
    {
        metric_prio = value;
        metric_prio.value_namespace = name_space;
        metric_prio.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Metric::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric-norm")
    {
        metric_norm.yfilter = yfilter;
    }
    if(value_path == "metric-prio")
    {
        metric_prio.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Metric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric-norm" || name == "metric-prio")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Timers::Timers()
    :
    query_time{YType::uint32, "query-time"},
    sby_time{YType::uint32, "sby-time"}
{

    yang_name = "timers"; yang_parent_name = "sub"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Timers::~Timers()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Timers::has_data() const
{
    if (is_presence_container) return true;
    return query_time.is_set
	|| sby_time.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Timers::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(query_time.yfilter)
	|| ydk::is_set(sby_time.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Timers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Timers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (query_time.is_set || is_set(query_time.yfilter)) leaf_name_data.push_back(query_time.get_name_leafdata());
    if (sby_time.is_set || is_set(sby_time.yfilter)) leaf_name_data.push_back(sby_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Timers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Timers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Timers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "query-time")
    {
        query_time = value;
        query_time.value_namespace = name_space;
        query_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sby-time")
    {
        sby_time = value;
        sby_time.value_namespace = name_space;
        sby_time.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Timers::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "query-time")
    {
        query_time.yfilter = yfilter;
    }
    if(value_path == "sby-time")
    {
        sby_time.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Timers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "query-time" || name == "sby-time")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Distance::Distance()
    :
    dist_norm{YType::uint32, "dist-norm"},
    dist_prio{YType::uint32, "dist-prio"}
{

    yang_name = "distance"; yang_parent_name = "sub"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Distance::~Distance()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Distance::has_data() const
{
    if (is_presence_container) return true;
    return dist_norm.is_set
	|| dist_prio.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Distance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dist_norm.yfilter)
	|| ydk::is_set(dist_prio.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Distance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "distance";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Distance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dist_norm.is_set || is_set(dist_norm.yfilter)) leaf_name_data.push_back(dist_norm.get_name_leafdata());
    if (dist_prio.is_set || is_set(dist_prio.yfilter)) leaf_name_data.push_back(dist_prio.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Distance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Distance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Distance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dist-norm")
    {
        dist_norm = value;
        dist_norm.value_namespace = name_space;
        dist_norm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dist-prio")
    {
        dist_prio = value;
        dist_prio.value_namespace = name_space;
        dist_prio.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Distance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dist-norm")
    {
        dist_norm.yfilter = yfilter;
    }
    if(value_path == "dist-prio")
    {
        dist_prio.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Distance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dist-norm" || name == "dist-prio")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4arp::Ipv4arp()
    :
    learning_local{YType::empty, "learning-local"},
    learning_solicited{YType::empty, "learning-solicited"},
    gratuitous_ignore{YType::empty, "gratuitous-ignore"},
    proxy_arp{YType::empty, "proxy-arp"},
    purge_delay{YType::uint32, "purge-delay"},
    learning_disable{YType::empty, "learning-disable"},
    local_proxy_arp{YType::empty, "local-proxy-arp"},
    timeout{YType::uint32, "timeout"}
{

    yang_name = "ipv4arp"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4arp::~Ipv4arp()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4arp::has_data() const
{
    if (is_presence_container) return true;
    return learning_local.is_set
	|| learning_solicited.is_set
	|| gratuitous_ignore.is_set
	|| proxy_arp.is_set
	|| purge_delay.is_set
	|| learning_disable.is_set
	|| local_proxy_arp.is_set
	|| timeout.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4arp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(learning_local.yfilter)
	|| ydk::is_set(learning_solicited.yfilter)
	|| ydk::is_set(gratuitous_ignore.yfilter)
	|| ydk::is_set(proxy_arp.yfilter)
	|| ydk::is_set(purge_delay.yfilter)
	|| ydk::is_set(learning_disable.yfilter)
	|| ydk::is_set(local_proxy_arp.yfilter)
	|| ydk::is_set(timeout.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv4arp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-arp-cfg:ipv4arp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ipv4arp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (learning_local.is_set || is_set(learning_local.yfilter)) leaf_name_data.push_back(learning_local.get_name_leafdata());
    if (learning_solicited.is_set || is_set(learning_solicited.yfilter)) leaf_name_data.push_back(learning_solicited.get_name_leafdata());
    if (gratuitous_ignore.is_set || is_set(gratuitous_ignore.yfilter)) leaf_name_data.push_back(gratuitous_ignore.get_name_leafdata());
    if (proxy_arp.is_set || is_set(proxy_arp.yfilter)) leaf_name_data.push_back(proxy_arp.get_name_leafdata());
    if (purge_delay.is_set || is_set(purge_delay.yfilter)) leaf_name_data.push_back(purge_delay.get_name_leafdata());
    if (learning_disable.is_set || is_set(learning_disable.yfilter)) leaf_name_data.push_back(learning_disable.get_name_leafdata());
    if (local_proxy_arp.is_set || is_set(local_proxy_arp.yfilter)) leaf_name_data.push_back(local_proxy_arp.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv4arp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv4arp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4arp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "learning-local")
    {
        learning_local = value;
        learning_local.value_namespace = name_space;
        learning_local.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "learning-solicited")
    {
        learning_solicited = value;
        learning_solicited.value_namespace = name_space;
        learning_solicited.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gratuitous-ignore")
    {
        gratuitous_ignore = value;
        gratuitous_ignore.value_namespace = name_space;
        gratuitous_ignore.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "proxy-arp")
    {
        proxy_arp = value;
        proxy_arp.value_namespace = name_space;
        proxy_arp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "purge-delay")
    {
        purge_delay = value;
        purge_delay.value_namespace = name_space;
        purge_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "learning-disable")
    {
        learning_disable = value;
        learning_disable.value_namespace = name_space;
        learning_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-proxy-arp")
    {
        local_proxy_arp = value;
        local_proxy_arp.value_namespace = name_space;
        local_proxy_arp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4arp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "learning-local")
    {
        learning_local.yfilter = yfilter;
    }
    if(value_path == "learning-solicited")
    {
        learning_solicited.yfilter = yfilter;
    }
    if(value_path == "gratuitous-ignore")
    {
        gratuitous_ignore.yfilter = yfilter;
    }
    if(value_path == "proxy-arp")
    {
        proxy_arp.yfilter = yfilter;
    }
    if(value_path == "purge-delay")
    {
        purge_delay.yfilter = yfilter;
    }
    if(value_path == "learning-disable")
    {
        learning_disable.yfilter = yfilter;
    }
    if(value_path == "local-proxy-arp")
    {
        local_proxy_arp.yfilter = yfilter;
    }
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4arp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "learning-local" || name == "learning-solicited" || name == "gratuitous-ignore" || name == "proxy-arp" || name == "purge-delay" || name == "learning-disable" || name == "local-proxy-arp" || name == "timeout")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::NetFlow()
    :
    data_link_frame_section(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection>())
    , mpls(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls>())
    , ipv6(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6>())
    , ipv4(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4>())
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
    if (is_presence_container) return true;
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
    char count=0;
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
    if (is_presence_container) return true;
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
    char count=0;
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
    , egress(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Egress>())
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
    if (is_presence_container) return true;
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
    char count=0;
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
    :
    flow_monitor_name(this, {"monitor_map_name"})
{

    yang_name = "ingress"; yang_parent_name = "flow-monitor-map"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Ingress::~Ingress()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Ingress::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<flow_monitor_name.len(); index++)
    {
        if(flow_monitor_name[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Ingress::has_operation() const
{
    for (std::size_t index=0; index<flow_monitor_name.len(); index++)
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
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Ingress::FlowMonitorName>();
        c->parent = this;
        flow_monitor_name.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Ingress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : flow_monitor_name.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
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
    if (is_presence_container) return true;
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
    path_buffer << "flow-monitor-name";
    ADD_KEY_TOKEN(monitor_map_name, "monitor-map-name");
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
    char count=0;
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
    :
    flow_monitor_name(this, {"monitor_map_name"})
{

    yang_name = "egress"; yang_parent_name = "flow-monitor-map"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Egress::~Egress()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Egress::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<flow_monitor_name.len(); index++)
    {
        if(flow_monitor_name[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Egress::has_operation() const
{
    for (std::size_t index=0; index<flow_monitor_name.len(); index++)
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
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Egress::FlowMonitorName>();
        c->parent = this;
        flow_monitor_name.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Egress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : flow_monitor_name.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
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
    if (is_presence_container) return true;
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
    path_buffer << "flow-monitor-name";
    ADD_KEY_TOKEN(monitor_map_name, "monitor-map-name");
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
    char count=0;
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
    if (is_presence_container) return true;
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
    char count=0;
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
    , egress(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Egress>())
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
    if (is_presence_container) return true;
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
    char count=0;
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
    :
    flow_monitor_name(this, {"monitor_map_name"})
{

    yang_name = "ingress"; yang_parent_name = "flow-monitor-map"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Ingress::~Ingress()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Ingress::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<flow_monitor_name.len(); index++)
    {
        if(flow_monitor_name[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Ingress::has_operation() const
{
    for (std::size_t index=0; index<flow_monitor_name.len(); index++)
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
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Ingress::FlowMonitorName>();
        c->parent = this;
        flow_monitor_name.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Ingress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : flow_monitor_name.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
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
    if (is_presence_container) return true;
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
    path_buffer << "flow-monitor-name";
    ADD_KEY_TOKEN(monitor_map_name, "monitor-map-name");
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
    char count=0;
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
    :
    flow_monitor_name(this, {"monitor_map_name"})
{

    yang_name = "egress"; yang_parent_name = "flow-monitor-map"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Egress::~Egress()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Egress::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<flow_monitor_name.len(); index++)
    {
        if(flow_monitor_name[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Egress::has_operation() const
{
    for (std::size_t index=0; index<flow_monitor_name.len(); index++)
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
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Egress::FlowMonitorName>();
        c->parent = this;
        flow_monitor_name.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Egress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : flow_monitor_name.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
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
    if (is_presence_container) return true;
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
    path_buffer << "flow-monitor-name";
    ADD_KEY_TOKEN(monitor_map_name, "monitor-map-name");
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
    char count=0;
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
    if (is_presence_container) return true;
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
    char count=0;
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
    , egress(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Egress>())
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
    if (is_presence_container) return true;
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
    char count=0;
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
    :
    flow_monitor_name(this, {"monitor_map_name"})
{

    yang_name = "ingress"; yang_parent_name = "flow-monitor-map"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Ingress::~Ingress()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Ingress::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<flow_monitor_name.len(); index++)
    {
        if(flow_monitor_name[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Ingress::has_operation() const
{
    for (std::size_t index=0; index<flow_monitor_name.len(); index++)
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
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Ingress::FlowMonitorName>();
        c->parent = this;
        flow_monitor_name.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Ingress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : flow_monitor_name.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
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
    if (is_presence_container) return true;
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
    path_buffer << "flow-monitor-name";
    ADD_KEY_TOKEN(monitor_map_name, "monitor-map-name");
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
    char count=0;
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
    :
    flow_monitor_name(this, {"monitor_map_name"})
{

    yang_name = "egress"; yang_parent_name = "flow-monitor-map"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Egress::~Egress()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Egress::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<flow_monitor_name.len(); index++)
    {
        if(flow_monitor_name[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Egress::has_operation() const
{
    for (std::size_t index=0; index<flow_monitor_name.len(); index++)
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
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Egress::FlowMonitorName>();
        c->parent = this;
        flow_monitor_name.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Egress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : flow_monitor_name.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
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
    if (is_presence_container) return true;
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
    path_buffer << "flow-monitor-name";
    ADD_KEY_TOKEN(monitor_map_name, "monitor-map-name");
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
    char count=0;
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
    if (is_presence_container) return true;
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
    char count=0;
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
    , egress(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Egress>())
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
    if (is_presence_container) return true;
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
    char count=0;
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
    :
    flow_monitor_name(this, {"monitor_map_name"})
{

    yang_name = "ingress"; yang_parent_name = "flow-monitor-map"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Ingress::~Ingress()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Ingress::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<flow_monitor_name.len(); index++)
    {
        if(flow_monitor_name[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Ingress::has_operation() const
{
    for (std::size_t index=0; index<flow_monitor_name.len(); index++)
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
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Ingress::FlowMonitorName>();
        c->parent = this;
        flow_monitor_name.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Ingress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : flow_monitor_name.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
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
    if (is_presence_container) return true;
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
    path_buffer << "flow-monitor-name";
    ADD_KEY_TOKEN(monitor_map_name, "monitor-map-name");
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
    char count=0;
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
    :
    flow_monitor_name(this, {"monitor_map_name"})
{

    yang_name = "egress"; yang_parent_name = "flow-monitor-map"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Egress::~Egress()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Egress::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<flow_monitor_name.len(); index++)
    {
        if(flow_monitor_name[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Egress::has_operation() const
{
    for (std::size_t index=0; index<flow_monitor_name.len(); index++)
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
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Egress::FlowMonitorName>();
        c->parent = this;
        flow_monitor_name.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Egress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : flow_monitor_name.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
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
    if (is_presence_container) return true;
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
    path_buffer << "flow-monitor-name";
    ADD_KEY_TOKEN(monitor_map_name, "monitor-map-name");
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
    char count=0;
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

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::TunnelTeAttributes()
    :
    forward_class{YType::uint32, "forward-class"},
    destination{YType::str, "destination"},
    record_route{YType::empty, "record-route"},
    path_selection_metric{YType::enumeration, "path-selection-metric"},
    soft_preemption{YType::empty, "soft-preemption"},
    load_share{YType::uint32, "load-share"},
    signalled_name{YType::str, "signalled-name"}
        ,
    backup_bandwidth(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BackupBandwidth>())
    , bfd_over_lsp(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BfdOverLsp>())
    , binding_segment_id_mpls(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BindingSegmentIdMpls>())
    , tunnel_path_protection(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::TunnelPathProtection>())
    , path_option_protects(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects>())
    , bidirectional(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional>())
    , admin_mode(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AdminMode>())
    , switching(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching>())
    , pce(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Pce>())
    , tunnel_path_selection(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::TunnelPathSelection>())
    , auto_bandwidth(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth>())
    , priority(nullptr) // presence node
    , affinity_mask(nullptr) // presence node
    , forwarding_adjacency(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::ForwardingAdjacency>())
    , logging(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Logging>())
    , bandwidth(nullptr) // presence node
    , autoroute(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute>())
    , policy_classes(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PolicyClasses>())
    , new_style_affinity_affinity_types(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes>())
    , fast_reroute(nullptr) // presence node
{
    backup_bandwidth->parent = this;
    bfd_over_lsp->parent = this;
    binding_segment_id_mpls->parent = this;
    tunnel_path_protection->parent = this;
    path_option_protects->parent = this;
    bidirectional->parent = this;
    admin_mode->parent = this;
    switching->parent = this;
    pce->parent = this;
    tunnel_path_selection->parent = this;
    auto_bandwidth->parent = this;
    forwarding_adjacency->parent = this;
    logging->parent = this;
    autoroute->parent = this;
    policy_classes->parent = this;
    new_style_affinity_affinity_types->parent = this;

    yang_name = "tunnel-te-attributes"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::~TunnelTeAttributes()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::has_data() const
{
    if (is_presence_container) return true;
    return forward_class.is_set
	|| destination.is_set
	|| record_route.is_set
	|| path_selection_metric.is_set
	|| soft_preemption.is_set
	|| load_share.is_set
	|| signalled_name.is_set
	|| (backup_bandwidth !=  nullptr && backup_bandwidth->has_data())
	|| (bfd_over_lsp !=  nullptr && bfd_over_lsp->has_data())
	|| (binding_segment_id_mpls !=  nullptr && binding_segment_id_mpls->has_data())
	|| (tunnel_path_protection !=  nullptr && tunnel_path_protection->has_data())
	|| (path_option_protects !=  nullptr && path_option_protects->has_data())
	|| (bidirectional !=  nullptr && bidirectional->has_data())
	|| (admin_mode !=  nullptr && admin_mode->has_data())
	|| (switching !=  nullptr && switching->has_data())
	|| (pce !=  nullptr && pce->has_data())
	|| (tunnel_path_selection !=  nullptr && tunnel_path_selection->has_data())
	|| (auto_bandwidth !=  nullptr && auto_bandwidth->has_data())
	|| (priority !=  nullptr && priority->has_data())
	|| (affinity_mask !=  nullptr && affinity_mask->has_data())
	|| (forwarding_adjacency !=  nullptr && forwarding_adjacency->has_data())
	|| (logging !=  nullptr && logging->has_data())
	|| (bandwidth !=  nullptr && bandwidth->has_data())
	|| (autoroute !=  nullptr && autoroute->has_data())
	|| (policy_classes !=  nullptr && policy_classes->has_data())
	|| (new_style_affinity_affinity_types !=  nullptr && new_style_affinity_affinity_types->has_data())
	|| (fast_reroute !=  nullptr && fast_reroute->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(forward_class.yfilter)
	|| ydk::is_set(destination.yfilter)
	|| ydk::is_set(record_route.yfilter)
	|| ydk::is_set(path_selection_metric.yfilter)
	|| ydk::is_set(soft_preemption.yfilter)
	|| ydk::is_set(load_share.yfilter)
	|| ydk::is_set(signalled_name.yfilter)
	|| (backup_bandwidth !=  nullptr && backup_bandwidth->has_operation())
	|| (bfd_over_lsp !=  nullptr && bfd_over_lsp->has_operation())
	|| (binding_segment_id_mpls !=  nullptr && binding_segment_id_mpls->has_operation())
	|| (tunnel_path_protection !=  nullptr && tunnel_path_protection->has_operation())
	|| (path_option_protects !=  nullptr && path_option_protects->has_operation())
	|| (bidirectional !=  nullptr && bidirectional->has_operation())
	|| (admin_mode !=  nullptr && admin_mode->has_operation())
	|| (switching !=  nullptr && switching->has_operation())
	|| (pce !=  nullptr && pce->has_operation())
	|| (tunnel_path_selection !=  nullptr && tunnel_path_selection->has_operation())
	|| (auto_bandwidth !=  nullptr && auto_bandwidth->has_operation())
	|| (priority !=  nullptr && priority->has_operation())
	|| (affinity_mask !=  nullptr && affinity_mask->has_operation())
	|| (forwarding_adjacency !=  nullptr && forwarding_adjacency->has_operation())
	|| (logging !=  nullptr && logging->has_operation())
	|| (bandwidth !=  nullptr && bandwidth->has_operation())
	|| (autoroute !=  nullptr && autoroute->has_operation())
	|| (policy_classes !=  nullptr && policy_classes->has_operation())
	|| (new_style_affinity_affinity_types !=  nullptr && new_style_affinity_affinity_types->has_operation())
	|| (fast_reroute !=  nullptr && fast_reroute->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:tunnel-te-attributes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (forward_class.is_set || is_set(forward_class.yfilter)) leaf_name_data.push_back(forward_class.get_name_leafdata());
    if (destination.is_set || is_set(destination.yfilter)) leaf_name_data.push_back(destination.get_name_leafdata());
    if (record_route.is_set || is_set(record_route.yfilter)) leaf_name_data.push_back(record_route.get_name_leafdata());
    if (path_selection_metric.is_set || is_set(path_selection_metric.yfilter)) leaf_name_data.push_back(path_selection_metric.get_name_leafdata());
    if (soft_preemption.is_set || is_set(soft_preemption.yfilter)) leaf_name_data.push_back(soft_preemption.get_name_leafdata());
    if (load_share.is_set || is_set(load_share.yfilter)) leaf_name_data.push_back(load_share.get_name_leafdata());
    if (signalled_name.is_set || is_set(signalled_name.yfilter)) leaf_name_data.push_back(signalled_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup-bandwidth")
    {
        if(backup_bandwidth == nullptr)
        {
            backup_bandwidth = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BackupBandwidth>();
        }
        return backup_bandwidth;
    }

    if(child_yang_name == "bfd-over-lsp")
    {
        if(bfd_over_lsp == nullptr)
        {
            bfd_over_lsp = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BfdOverLsp>();
        }
        return bfd_over_lsp;
    }

    if(child_yang_name == "binding-segment-id-mpls")
    {
        if(binding_segment_id_mpls == nullptr)
        {
            binding_segment_id_mpls = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BindingSegmentIdMpls>();
        }
        return binding_segment_id_mpls;
    }

    if(child_yang_name == "tunnel-path-protection")
    {
        if(tunnel_path_protection == nullptr)
        {
            tunnel_path_protection = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::TunnelPathProtection>();
        }
        return tunnel_path_protection;
    }

    if(child_yang_name == "path-option-protects")
    {
        if(path_option_protects == nullptr)
        {
            path_option_protects = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects>();
        }
        return path_option_protects;
    }

    if(child_yang_name == "bidirectional")
    {
        if(bidirectional == nullptr)
        {
            bidirectional = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional>();
        }
        return bidirectional;
    }

    if(child_yang_name == "admin-mode")
    {
        if(admin_mode == nullptr)
        {
            admin_mode = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AdminMode>();
        }
        return admin_mode;
    }

    if(child_yang_name == "switching")
    {
        if(switching == nullptr)
        {
            switching = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching>();
        }
        return switching;
    }

    if(child_yang_name == "pce")
    {
        if(pce == nullptr)
        {
            pce = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Pce>();
        }
        return pce;
    }

    if(child_yang_name == "tunnel-path-selection")
    {
        if(tunnel_path_selection == nullptr)
        {
            tunnel_path_selection = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::TunnelPathSelection>();
        }
        return tunnel_path_selection;
    }

    if(child_yang_name == "auto-bandwidth")
    {
        if(auto_bandwidth == nullptr)
        {
            auto_bandwidth = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth>();
        }
        return auto_bandwidth;
    }

    if(child_yang_name == "priority")
    {
        if(priority == nullptr)
        {
            priority = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Priority>();
        }
        return priority;
    }

    if(child_yang_name == "affinity-mask")
    {
        if(affinity_mask == nullptr)
        {
            affinity_mask = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AffinityMask>();
        }
        return affinity_mask;
    }

    if(child_yang_name == "forwarding-adjacency")
    {
        if(forwarding_adjacency == nullptr)
        {
            forwarding_adjacency = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::ForwardingAdjacency>();
        }
        return forwarding_adjacency;
    }

    if(child_yang_name == "logging")
    {
        if(logging == nullptr)
        {
            logging = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Logging>();
        }
        return logging;
    }

    if(child_yang_name == "bandwidth")
    {
        if(bandwidth == nullptr)
        {
            bandwidth = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bandwidth>();
        }
        return bandwidth;
    }

    if(child_yang_name == "autoroute")
    {
        if(autoroute == nullptr)
        {
            autoroute = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute>();
        }
        return autoroute;
    }

    if(child_yang_name == "policy-classes")
    {
        if(policy_classes == nullptr)
        {
            policy_classes = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PolicyClasses>();
        }
        return policy_classes;
    }

    if(child_yang_name == "new-style-affinity-affinity-types")
    {
        if(new_style_affinity_affinity_types == nullptr)
        {
            new_style_affinity_affinity_types = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes>();
        }
        return new_style_affinity_affinity_types;
    }

    if(child_yang_name == "fast-reroute")
    {
        if(fast_reroute == nullptr)
        {
            fast_reroute = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::FastReroute>();
        }
        return fast_reroute;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(backup_bandwidth != nullptr)
    {
        children["backup-bandwidth"] = backup_bandwidth;
    }

    if(bfd_over_lsp != nullptr)
    {
        children["bfd-over-lsp"] = bfd_over_lsp;
    }

    if(binding_segment_id_mpls != nullptr)
    {
        children["binding-segment-id-mpls"] = binding_segment_id_mpls;
    }

    if(tunnel_path_protection != nullptr)
    {
        children["tunnel-path-protection"] = tunnel_path_protection;
    }

    if(path_option_protects != nullptr)
    {
        children["path-option-protects"] = path_option_protects;
    }

    if(bidirectional != nullptr)
    {
        children["bidirectional"] = bidirectional;
    }

    if(admin_mode != nullptr)
    {
        children["admin-mode"] = admin_mode;
    }

    if(switching != nullptr)
    {
        children["switching"] = switching;
    }

    if(pce != nullptr)
    {
        children["pce"] = pce;
    }

    if(tunnel_path_selection != nullptr)
    {
        children["tunnel-path-selection"] = tunnel_path_selection;
    }

    if(auto_bandwidth != nullptr)
    {
        children["auto-bandwidth"] = auto_bandwidth;
    }

    if(priority != nullptr)
    {
        children["priority"] = priority;
    }

    if(affinity_mask != nullptr)
    {
        children["affinity-mask"] = affinity_mask;
    }

    if(forwarding_adjacency != nullptr)
    {
        children["forwarding-adjacency"] = forwarding_adjacency;
    }

    if(logging != nullptr)
    {
        children["logging"] = logging;
    }

    if(bandwidth != nullptr)
    {
        children["bandwidth"] = bandwidth;
    }

    if(autoroute != nullptr)
    {
        children["autoroute"] = autoroute;
    }

    if(policy_classes != nullptr)
    {
        children["policy-classes"] = policy_classes;
    }

    if(new_style_affinity_affinity_types != nullptr)
    {
        children["new-style-affinity-affinity-types"] = new_style_affinity_affinity_types;
    }

    if(fast_reroute != nullptr)
    {
        children["fast-reroute"] = fast_reroute;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "forward-class")
    {
        forward_class = value;
        forward_class.value_namespace = name_space;
        forward_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination")
    {
        destination = value;
        destination.value_namespace = name_space;
        destination.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "record-route")
    {
        record_route = value;
        record_route.value_namespace = name_space;
        record_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-selection-metric")
    {
        path_selection_metric = value;
        path_selection_metric.value_namespace = name_space;
        path_selection_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "soft-preemption")
    {
        soft_preemption = value;
        soft_preemption.value_namespace = name_space;
        soft_preemption.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-share")
    {
        load_share = value;
        load_share.value_namespace = name_space;
        load_share.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "signalled-name")
    {
        signalled_name = value;
        signalled_name.value_namespace = name_space;
        signalled_name.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "forward-class")
    {
        forward_class.yfilter = yfilter;
    }
    if(value_path == "destination")
    {
        destination.yfilter = yfilter;
    }
    if(value_path == "record-route")
    {
        record_route.yfilter = yfilter;
    }
    if(value_path == "path-selection-metric")
    {
        path_selection_metric.yfilter = yfilter;
    }
    if(value_path == "soft-preemption")
    {
        soft_preemption.yfilter = yfilter;
    }
    if(value_path == "load-share")
    {
        load_share.yfilter = yfilter;
    }
    if(value_path == "signalled-name")
    {
        signalled_name.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backup-bandwidth" || name == "bfd-over-lsp" || name == "binding-segment-id-mpls" || name == "tunnel-path-protection" || name == "path-option-protects" || name == "bidirectional" || name == "admin-mode" || name == "switching" || name == "pce" || name == "tunnel-path-selection" || name == "auto-bandwidth" || name == "priority" || name == "affinity-mask" || name == "forwarding-adjacency" || name == "logging" || name == "bandwidth" || name == "autoroute" || name == "policy-classes" || name == "new-style-affinity-affinity-types" || name == "fast-reroute" || name == "forward-class" || name == "destination" || name == "record-route" || name == "path-selection-metric" || name == "soft-preemption" || name == "load-share" || name == "signalled-name")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BackupBandwidth::BackupBandwidth()
    :
    dste_type{YType::enumeration, "dste-type"},
    pool_type{YType::enumeration, "pool-type"},
    class_type{YType::enumeration, "class-type"},
    limit_type{YType::enumeration, "limit-type"},
    backup_bandwidth{YType::uint32, "backup-bandwidth"}
{

    yang_name = "backup-bandwidth"; yang_parent_name = "tunnel-te-attributes"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BackupBandwidth::~BackupBandwidth()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BackupBandwidth::has_data() const
{
    if (is_presence_container) return true;
    return dste_type.is_set
	|| pool_type.is_set
	|| class_type.is_set
	|| limit_type.is_set
	|| backup_bandwidth.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BackupBandwidth::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dste_type.yfilter)
	|| ydk::is_set(pool_type.yfilter)
	|| ydk::is_set(class_type.yfilter)
	|| ydk::is_set(limit_type.yfilter)
	|| ydk::is_set(backup_bandwidth.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BackupBandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-bandwidth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BackupBandwidth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dste_type.is_set || is_set(dste_type.yfilter)) leaf_name_data.push_back(dste_type.get_name_leafdata());
    if (pool_type.is_set || is_set(pool_type.yfilter)) leaf_name_data.push_back(pool_type.get_name_leafdata());
    if (class_type.is_set || is_set(class_type.yfilter)) leaf_name_data.push_back(class_type.get_name_leafdata());
    if (limit_type.is_set || is_set(limit_type.yfilter)) leaf_name_data.push_back(limit_type.get_name_leafdata());
    if (backup_bandwidth.is_set || is_set(backup_bandwidth.yfilter)) leaf_name_data.push_back(backup_bandwidth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BackupBandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BackupBandwidth::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BackupBandwidth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dste-type")
    {
        dste_type = value;
        dste_type.value_namespace = name_space;
        dste_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pool-type")
    {
        pool_type = value;
        pool_type.value_namespace = name_space;
        pool_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "class-type")
    {
        class_type = value;
        class_type.value_namespace = name_space;
        class_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "limit-type")
    {
        limit_type = value;
        limit_type.value_namespace = name_space;
        limit_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-bandwidth")
    {
        backup_bandwidth = value;
        backup_bandwidth.value_namespace = name_space;
        backup_bandwidth.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BackupBandwidth::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dste-type")
    {
        dste_type.yfilter = yfilter;
    }
    if(value_path == "pool-type")
    {
        pool_type.yfilter = yfilter;
    }
    if(value_path == "class-type")
    {
        class_type.yfilter = yfilter;
    }
    if(value_path == "limit-type")
    {
        limit_type.yfilter = yfilter;
    }
    if(value_path == "backup-bandwidth")
    {
        backup_bandwidth.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BackupBandwidth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dste-type" || name == "pool-type" || name == "class-type" || name == "limit-type" || name == "backup-bandwidth")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BfdOverLsp::BfdOverLsp()
    :
    dampening_initial_wait{YType::uint32, "dampening-initial-wait"},
    fast_detect{YType::enumeration, "fast-detect"},
    enable{YType::empty, "enable"},
    multiplier{YType::uint32, "multiplier"},
    bringup_timeout{YType::uint32, "bringup-timeout"},
    periodic_ping_disable{YType::empty, "periodic-ping-disable"},
    dampening_secondary_wait{YType::uint32, "dampening-secondary-wait"},
    periodic_ping_interval{YType::uint32, "periodic-ping-interval"},
    dampening_maximum_wait{YType::uint32, "dampening-maximum-wait"},
    minimum_interval{YType::uint32, "minimum-interval"},
    encap_mode{YType::uint32, "encap-mode"}
{

    yang_name = "bfd-over-lsp"; yang_parent_name = "tunnel-te-attributes"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BfdOverLsp::~BfdOverLsp()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BfdOverLsp::has_data() const
{
    if (is_presence_container) return true;
    return dampening_initial_wait.is_set
	|| fast_detect.is_set
	|| enable.is_set
	|| multiplier.is_set
	|| bringup_timeout.is_set
	|| periodic_ping_disable.is_set
	|| dampening_secondary_wait.is_set
	|| periodic_ping_interval.is_set
	|| dampening_maximum_wait.is_set
	|| minimum_interval.is_set
	|| encap_mode.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BfdOverLsp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dampening_initial_wait.yfilter)
	|| ydk::is_set(fast_detect.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(multiplier.yfilter)
	|| ydk::is_set(bringup_timeout.yfilter)
	|| ydk::is_set(periodic_ping_disable.yfilter)
	|| ydk::is_set(dampening_secondary_wait.yfilter)
	|| ydk::is_set(periodic_ping_interval.yfilter)
	|| ydk::is_set(dampening_maximum_wait.yfilter)
	|| ydk::is_set(minimum_interval.yfilter)
	|| ydk::is_set(encap_mode.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BfdOverLsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd-over-lsp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BfdOverLsp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dampening_initial_wait.is_set || is_set(dampening_initial_wait.yfilter)) leaf_name_data.push_back(dampening_initial_wait.get_name_leafdata());
    if (fast_detect.is_set || is_set(fast_detect.yfilter)) leaf_name_data.push_back(fast_detect.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (multiplier.is_set || is_set(multiplier.yfilter)) leaf_name_data.push_back(multiplier.get_name_leafdata());
    if (bringup_timeout.is_set || is_set(bringup_timeout.yfilter)) leaf_name_data.push_back(bringup_timeout.get_name_leafdata());
    if (periodic_ping_disable.is_set || is_set(periodic_ping_disable.yfilter)) leaf_name_data.push_back(periodic_ping_disable.get_name_leafdata());
    if (dampening_secondary_wait.is_set || is_set(dampening_secondary_wait.yfilter)) leaf_name_data.push_back(dampening_secondary_wait.get_name_leafdata());
    if (periodic_ping_interval.is_set || is_set(periodic_ping_interval.yfilter)) leaf_name_data.push_back(periodic_ping_interval.get_name_leafdata());
    if (dampening_maximum_wait.is_set || is_set(dampening_maximum_wait.yfilter)) leaf_name_data.push_back(dampening_maximum_wait.get_name_leafdata());
    if (minimum_interval.is_set || is_set(minimum_interval.yfilter)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (encap_mode.is_set || is_set(encap_mode.yfilter)) leaf_name_data.push_back(encap_mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BfdOverLsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BfdOverLsp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BfdOverLsp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dampening-initial-wait")
    {
        dampening_initial_wait = value;
        dampening_initial_wait.value_namespace = name_space;
        dampening_initial_wait.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fast-detect")
    {
        fast_detect = value;
        fast_detect.value_namespace = name_space;
        fast_detect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multiplier")
    {
        multiplier = value;
        multiplier.value_namespace = name_space;
        multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bringup-timeout")
    {
        bringup_timeout = value;
        bringup_timeout.value_namespace = name_space;
        bringup_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "periodic-ping-disable")
    {
        periodic_ping_disable = value;
        periodic_ping_disable.value_namespace = name_space;
        periodic_ping_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dampening-secondary-wait")
    {
        dampening_secondary_wait = value;
        dampening_secondary_wait.value_namespace = name_space;
        dampening_secondary_wait.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "periodic-ping-interval")
    {
        periodic_ping_interval = value;
        periodic_ping_interval.value_namespace = name_space;
        periodic_ping_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dampening-maximum-wait")
    {
        dampening_maximum_wait = value;
        dampening_maximum_wait.value_namespace = name_space;
        dampening_maximum_wait.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
        minimum_interval.value_namespace = name_space;
        minimum_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encap-mode")
    {
        encap_mode = value;
        encap_mode.value_namespace = name_space;
        encap_mode.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BfdOverLsp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dampening-initial-wait")
    {
        dampening_initial_wait.yfilter = yfilter;
    }
    if(value_path == "fast-detect")
    {
        fast_detect.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "multiplier")
    {
        multiplier.yfilter = yfilter;
    }
    if(value_path == "bringup-timeout")
    {
        bringup_timeout.yfilter = yfilter;
    }
    if(value_path == "periodic-ping-disable")
    {
        periodic_ping_disable.yfilter = yfilter;
    }
    if(value_path == "dampening-secondary-wait")
    {
        dampening_secondary_wait.yfilter = yfilter;
    }
    if(value_path == "periodic-ping-interval")
    {
        periodic_ping_interval.yfilter = yfilter;
    }
    if(value_path == "dampening-maximum-wait")
    {
        dampening_maximum_wait.yfilter = yfilter;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval.yfilter = yfilter;
    }
    if(value_path == "encap-mode")
    {
        encap_mode.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BfdOverLsp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dampening-initial-wait" || name == "fast-detect" || name == "enable" || name == "multiplier" || name == "bringup-timeout" || name == "periodic-ping-disable" || name == "dampening-secondary-wait" || name == "periodic-ping-interval" || name == "dampening-maximum-wait" || name == "minimum-interval" || name == "encap-mode")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BindingSegmentIdMpls::BindingSegmentIdMpls()
    :
    segment_id_type{YType::enumeration, "segment-id-type"},
    label_value{YType::uint32, "label-value"}
{

    yang_name = "binding-segment-id-mpls"; yang_parent_name = "tunnel-te-attributes"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BindingSegmentIdMpls::~BindingSegmentIdMpls()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BindingSegmentIdMpls::has_data() const
{
    if (is_presence_container) return true;
    return segment_id_type.is_set
	|| label_value.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BindingSegmentIdMpls::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(segment_id_type.yfilter)
	|| ydk::is_set(label_value.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BindingSegmentIdMpls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "binding-segment-id-mpls";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BindingSegmentIdMpls::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (segment_id_type.is_set || is_set(segment_id_type.yfilter)) leaf_name_data.push_back(segment_id_type.get_name_leafdata());
    if (label_value.is_set || is_set(label_value.yfilter)) leaf_name_data.push_back(label_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BindingSegmentIdMpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BindingSegmentIdMpls::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BindingSegmentIdMpls::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "segment-id-type")
    {
        segment_id_type = value;
        segment_id_type.value_namespace = name_space;
        segment_id_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-value")
    {
        label_value = value;
        label_value.value_namespace = name_space;
        label_value.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BindingSegmentIdMpls::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "segment-id-type")
    {
        segment_id_type.yfilter = yfilter;
    }
    if(value_path == "label-value")
    {
        label_value.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BindingSegmentIdMpls::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "segment-id-type" || name == "label-value")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::TunnelPathProtection::TunnelPathProtection()
    :
    enable{YType::empty, "enable"}
{

    yang_name = "tunnel-path-protection"; yang_parent_name = "tunnel-te-attributes"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::TunnelPathProtection::~TunnelPathProtection()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::TunnelPathProtection::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::TunnelPathProtection::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::TunnelPathProtection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-path-protection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::TunnelPathProtection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::TunnelPathProtection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::TunnelPathProtection::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::TunnelPathProtection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::TunnelPathProtection::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::TunnelPathProtection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtects()
    :
    path_option_protect(this, {"protection"})
{

    yang_name = "path-option-protects"; yang_parent_name = "tunnel-te-attributes"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::~PathOptionProtects()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<path_option_protect.len(); index++)
    {
        if(path_option_protect[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::has_operation() const
{
    for (std::size_t index=0; index<path_option_protect.len(); index++)
    {
        if(path_option_protect[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-option-protects";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path-option-protect")
    {
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect>();
        c->parent = this;
        path_option_protect.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : path_option_protect.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-option-protect")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::PathOptionProtect()
    :
    protection{YType::enumeration, "protection"}
        ,
    path_options(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::PathOptions>())
{
    path_options->parent = this;

    yang_name = "path-option-protect"; yang_parent_name = "path-option-protects"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::~PathOptionProtect()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::has_data() const
{
    if (is_presence_container) return true;
    return protection.is_set
	|| (path_options !=  nullptr && path_options->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(protection.yfilter)
	|| (path_options !=  nullptr && path_options->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-option-protect";
    ADD_KEY_TOKEN(protection, "protection");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protection.is_set || is_set(protection.yfilter)) leaf_name_data.push_back(protection.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path-options")
    {
        if(path_options == nullptr)
        {
            path_options = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::PathOptions>();
        }
        return path_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(path_options != nullptr)
    {
        children["path-options"] = path_options;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protection")
    {
        protection = value;
        protection.value_namespace = name_space;
        protection.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protection")
    {
        protection.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-options" || name == "protection")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::PathOptions::PathOptions()
    :
    path_option(this, {"preference_level"})
{

    yang_name = "path-options"; yang_parent_name = "path-option-protect"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::PathOptions::~PathOptions()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::PathOptions::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<path_option.len(); index++)
    {
        if(path_option[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::PathOptions::has_operation() const
{
    for (std::size_t index=0; index<path_option.len(); index++)
    {
        if(path_option[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::PathOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::PathOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::PathOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path-option")
    {
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::PathOptions::PathOption>();
        c->parent = this;
        path_option.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::PathOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : path_option.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::PathOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::PathOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::PathOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-option")
        return true;
    return false;
}


}
}

