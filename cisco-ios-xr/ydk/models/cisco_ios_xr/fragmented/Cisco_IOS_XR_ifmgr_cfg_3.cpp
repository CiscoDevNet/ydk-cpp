
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

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::HoVcHour24HoVcReports::HoVcHour24HoVcReport::HoVcHour24HoVcReport()
    :
    ho_vc_report{YType::enumeration, "ho-vc-report"},
    enable{YType::enumeration, "enable"}
{

    yang_name = "ho-vc-hour24ho-vc-report"; yang_parent_name = "ho-vc-hour24ho-vc-reports"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::HoVcHour24HoVcReports::HoVcHour24HoVcReport::~HoVcHour24HoVcReport()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::HoVcHour24HoVcReports::HoVcHour24HoVcReport::has_data() const
{
    return ho_vc_report.is_set
	|| enable.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::HoVcHour24HoVcReports::HoVcHour24HoVcReport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ho_vc_report.yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::HoVcHour24HoVcReports::HoVcHour24HoVcReport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ho-vc-hour24ho-vc-report" <<"[ho-vc-report='" <<ho_vc_report <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::HoVcHour24HoVcReports::HoVcHour24HoVcReport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ho_vc_report.is_set || is_set(ho_vc_report.yfilter)) leaf_name_data.push_back(ho_vc_report.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::HoVcHour24HoVcReports::HoVcHour24HoVcReport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::HoVcHour24HoVcReports::HoVcHour24HoVcReport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::HoVcHour24HoVcReports::HoVcHour24HoVcReport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::HoVcHour24HoVcReports::HoVcHour24HoVcReport::set_filter(const std::string & value_path, YFilter yfilter)
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

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::HoVcHour24HoVcReports::HoVcHour24HoVcReport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ho-vc-report" || name == "enable")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::HoVcHour24HoVcThresholds::HoVcHour24HoVcThresholds()
{

    yang_name = "ho-vc-hour24ho-vc-thresholds"; yang_parent_name = "ho-vc-hour24ho-vc"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::HoVcHour24HoVcThresholds::~HoVcHour24HoVcThresholds()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::HoVcHour24HoVcThresholds::has_data() const
{
    for (std::size_t index=0; index<ho_vc_hour24ho_vc_threshold.size(); index++)
    {
        if(ho_vc_hour24ho_vc_threshold[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::HoVcHour24HoVcThresholds::has_operation() const
{
    for (std::size_t index=0; index<ho_vc_hour24ho_vc_threshold.size(); index++)
    {
        if(ho_vc_hour24ho_vc_threshold[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::HoVcHour24HoVcThresholds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ho-vc-hour24ho-vc-thresholds";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::HoVcHour24HoVcThresholds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::HoVcHour24HoVcThresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ho-vc-hour24ho-vc-threshold")
    {
        for(auto const & c : ho_vc_hour24ho_vc_threshold)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::HoVcHour24HoVcThresholds::HoVcHour24HoVcThreshold>();
        c->parent = this;
        ho_vc_hour24ho_vc_threshold.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::HoVcHour24HoVcThresholds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ho_vc_hour24ho_vc_threshold)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::HoVcHour24HoVcThresholds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::HoVcHour24HoVcThresholds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::HoVcHour24HoVcThresholds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ho-vc-hour24ho-vc-threshold")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::HoVcHour24HoVcThresholds::HoVcHour24HoVcThreshold::HoVcHour24HoVcThreshold()
    :
    ho_vc_threshold{YType::enumeration, "ho-vc-threshold"},
    ho_vc_threshold_value{YType::int32, "ho-vc-threshold-value"}
{

    yang_name = "ho-vc-hour24ho-vc-threshold"; yang_parent_name = "ho-vc-hour24ho-vc-thresholds"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::HoVcHour24HoVcThresholds::HoVcHour24HoVcThreshold::~HoVcHour24HoVcThreshold()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::HoVcHour24HoVcThresholds::HoVcHour24HoVcThreshold::has_data() const
{
    return ho_vc_threshold.is_set
	|| ho_vc_threshold_value.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::HoVcHour24HoVcThresholds::HoVcHour24HoVcThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ho_vc_threshold.yfilter)
	|| ydk::is_set(ho_vc_threshold_value.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::HoVcHour24HoVcThresholds::HoVcHour24HoVcThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ho-vc-hour24ho-vc-threshold" <<"[ho-vc-threshold='" <<ho_vc_threshold <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::HoVcHour24HoVcThresholds::HoVcHour24HoVcThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ho_vc_threshold.is_set || is_set(ho_vc_threshold.yfilter)) leaf_name_data.push_back(ho_vc_threshold.get_name_leafdata());
    if (ho_vc_threshold_value.is_set || is_set(ho_vc_threshold_value.yfilter)) leaf_name_data.push_back(ho_vc_threshold_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::HoVcHour24HoVcThresholds::HoVcHour24HoVcThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::HoVcHour24HoVcThresholds::HoVcHour24HoVcThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::HoVcHour24HoVcThresholds::HoVcHour24HoVcThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::HoVcHour24HoVcThresholds::HoVcHour24HoVcThreshold::set_filter(const std::string & value_path, YFilter yfilter)
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

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::HoVcHour24HoVcThresholds::HoVcHour24HoVcThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ho-vc-threshold" || name == "ho-vc-threshold-value")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30()
    :
    second30fec(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Fec>())
	,second30_optics(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics>())
	,second30secyif(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secyif>())
	,second30secyrx(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secyrx>())
	,second30otn(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Otn>())
	,second30secytx(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secytx>())
{
    second30fec->parent = this;
    second30_optics->parent = this;
    second30secyif->parent = this;
    second30secyrx->parent = this;
    second30otn->parent = this;
    second30secytx->parent = this;

    yang_name = "second30"; yang_parent_name = "performance-management"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::~Second30()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::has_data() const
{
    return (second30fec !=  nullptr && second30fec->has_data())
	|| (second30_optics !=  nullptr && second30_optics->has_data())
	|| (second30secyif !=  nullptr && second30secyif->has_data())
	|| (second30secyrx !=  nullptr && second30secyrx->has_data())
	|| (second30otn !=  nullptr && second30otn->has_data())
	|| (second30secytx !=  nullptr && second30secytx->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::has_operation() const
{
    return is_set(yfilter)
	|| (second30fec !=  nullptr && second30fec->has_operation())
	|| (second30_optics !=  nullptr && second30_optics->has_operation())
	|| (second30secyif !=  nullptr && second30secyif->has_operation())
	|| (second30secyrx !=  nullptr && second30secyrx->has_operation())
	|| (second30otn !=  nullptr && second30otn->has_operation())
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
    if(child_yang_name == "second30fec")
    {
        if(second30fec == nullptr)
        {
            second30fec = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Fec>();
        }
        return second30fec;
    }

    if(child_yang_name == "second30-optics")
    {
        if(second30_optics == nullptr)
        {
            second30_optics = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics>();
        }
        return second30_optics;
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

    if(child_yang_name == "second30otn")
    {
        if(second30otn == nullptr)
        {
            second30otn = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Otn>();
        }
        return second30otn;
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
    if(second30fec != nullptr)
    {
        children["second30fec"] = second30fec;
    }

    if(second30_optics != nullptr)
    {
        children["second30-optics"] = second30_optics;
    }

    if(second30secyif != nullptr)
    {
        children["second30secyif"] = second30secyif;
    }

    if(second30secyrx != nullptr)
    {
        children["second30secyrx"] = second30secyrx;
    }

    if(second30otn != nullptr)
    {
        children["second30otn"] = second30otn;
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
    if(name == "second30fec" || name == "second30-optics" || name == "second30secyif" || name == "second30secyrx" || name == "second30otn" || name == "second30secytx")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Fec::Second30Fec()
    :
    second30fec_thresholds(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Fec::Second30FecThresholds>())
	,second30fec_reports(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Fec::Second30FecReports>())
{
    second30fec_thresholds->parent = this;
    second30fec_reports->parent = this;

    yang_name = "second30fec"; yang_parent_name = "second30"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Fec::~Second30Fec()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Fec::has_data() const
{
    return (second30fec_thresholds !=  nullptr && second30fec_thresholds->has_data())
	|| (second30fec_reports !=  nullptr && second30fec_reports->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Fec::has_operation() const
{
    return is_set(yfilter)
	|| (second30fec_thresholds !=  nullptr && second30fec_thresholds->has_operation())
	|| (second30fec_reports !=  nullptr && second30fec_reports->has_operation());
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
    if(child_yang_name == "second30fec-thresholds")
    {
        if(second30fec_thresholds == nullptr)
        {
            second30fec_thresholds = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Fec::Second30FecThresholds>();
        }
        return second30fec_thresholds;
    }

    if(child_yang_name == "second30fec-reports")
    {
        if(second30fec_reports == nullptr)
        {
            second30fec_reports = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Fec::Second30FecReports>();
        }
        return second30fec_reports;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Fec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(second30fec_thresholds != nullptr)
    {
        children["second30fec-thresholds"] = second30fec_thresholds;
    }

    if(second30fec_reports != nullptr)
    {
        children["second30fec-reports"] = second30fec_reports;
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
    if(name == "second30fec-thresholds" || name == "second30fec-reports")
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
    optics_threshold_value{YType::int32, "optics-threshold-value"},
    dbm{YType::int32, "dbm"}
{

    yang_name = "second30-optics-threshold"; yang_parent_name = "second30-optics-thresholds"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsThresholds::Second30OpticsThreshold::~Second30OpticsThreshold()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsThresholds::Second30OpticsThreshold::has_data() const
{
    return optics_threshold.is_set
	|| optics_threshold_value.is_set
	|| dbm.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsThresholds::Second30OpticsThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(optics_threshold.yfilter)
	|| ydk::is_set(optics_threshold_value.yfilter)
	|| ydk::is_set(dbm.yfilter);
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
    if (optics_threshold_value.is_set || is_set(optics_threshold_value.yfilter)) leaf_name_data.push_back(optics_threshold_value.get_name_leafdata());
    if (dbm.is_set || is_set(dbm.yfilter)) leaf_name_data.push_back(dbm.get_name_leafdata());

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

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsThresholds::Second30OpticsThreshold::set_filter(const std::string & value_path, YFilter yfilter)
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

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsThresholds::Second30OpticsThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "optics-threshold" || name == "optics-threshold-value" || name == "dbm")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secyif::Second30Secyif()
    :
    second30secyif_thresholds(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secyif::Second30SecyifThresholds>())
	,second30secyif_reports(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secyif::Second30SecyifReports>())
{
    second30secyif_thresholds->parent = this;
    second30secyif_reports->parent = this;

    yang_name = "second30secyif"; yang_parent_name = "second30"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secyif::~Second30Secyif()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secyif::has_data() const
{
    return (second30secyif_thresholds !=  nullptr && second30secyif_thresholds->has_data())
	|| (second30secyif_reports !=  nullptr && second30secyif_reports->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secyif::has_operation() const
{
    return is_set(yfilter)
	|| (second30secyif_thresholds !=  nullptr && second30secyif_thresholds->has_operation())
	|| (second30secyif_reports !=  nullptr && second30secyif_reports->has_operation());
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
    if(child_yang_name == "second30secyif-thresholds")
    {
        if(second30secyif_thresholds == nullptr)
        {
            second30secyif_thresholds = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secyif::Second30SecyifThresholds>();
        }
        return second30secyif_thresholds;
    }

    if(child_yang_name == "second30secyif-reports")
    {
        if(second30secyif_reports == nullptr)
        {
            second30secyif_reports = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secyif::Second30SecyifReports>();
        }
        return second30secyif_reports;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secyif::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(second30secyif_thresholds != nullptr)
    {
        children["second30secyif-thresholds"] = second30secyif_thresholds;
    }

    if(second30secyif_reports != nullptr)
    {
        children["second30secyif-reports"] = second30secyif_reports;
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
    if(name == "second30secyif-thresholds" || name == "second30secyif-reports")
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

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secyrx::Second30Secyrx()
    :
    second30secyrx_thresholds(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secyrx::Second30SecyrxThresholds>())
	,second30secyrx_reports(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secyrx::Second30SecyrxReports>())
{
    second30secyrx_thresholds->parent = this;
    second30secyrx_reports->parent = this;

    yang_name = "second30secyrx"; yang_parent_name = "second30"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secyrx::~Second30Secyrx()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secyrx::has_data() const
{
    return (second30secyrx_thresholds !=  nullptr && second30secyrx_thresholds->has_data())
	|| (second30secyrx_reports !=  nullptr && second30secyrx_reports->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secyrx::has_operation() const
{
    return is_set(yfilter)
	|| (second30secyrx_thresholds !=  nullptr && second30secyrx_thresholds->has_operation())
	|| (second30secyrx_reports !=  nullptr && second30secyrx_reports->has_operation());
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
    if(child_yang_name == "second30secyrx-thresholds")
    {
        if(second30secyrx_thresholds == nullptr)
        {
            second30secyrx_thresholds = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secyrx::Second30SecyrxThresholds>();
        }
        return second30secyrx_thresholds;
    }

    if(child_yang_name == "second30secyrx-reports")
    {
        if(second30secyrx_reports == nullptr)
        {
            second30secyrx_reports = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secyrx::Second30SecyrxReports>();
        }
        return second30secyrx_reports;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secyrx::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(second30secyrx_thresholds != nullptr)
    {
        children["second30secyrx-thresholds"] = second30secyrx_thresholds;
    }

    if(second30secyrx_reports != nullptr)
    {
        children["second30secyrx-reports"] = second30secyrx_reports;
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
    if(name == "second30secyrx-thresholds" || name == "second30secyrx-reports")
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

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secytx::Second30Secytx()
    :
    second30secytx_thresholds(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secytx::Second30SecytxThresholds>())
	,second30secytx_reports(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secytx::Second30SecytxReports>())
{
    second30secytx_thresholds->parent = this;
    second30secytx_reports->parent = this;

    yang_name = "second30secytx"; yang_parent_name = "second30"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secytx::~Second30Secytx()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secytx::has_data() const
{
    return (second30secytx_thresholds !=  nullptr && second30secytx_thresholds->has_data())
	|| (second30secytx_reports !=  nullptr && second30secytx_reports->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secytx::has_operation() const
{
    return is_set(yfilter)
	|| (second30secytx_thresholds !=  nullptr && second30secytx_thresholds->has_operation())
	|| (second30secytx_reports !=  nullptr && second30secytx_reports->has_operation());
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
    if(child_yang_name == "second30secytx-thresholds")
    {
        if(second30secytx_thresholds == nullptr)
        {
            second30secytx_thresholds = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secytx::Second30SecytxThresholds>();
        }
        return second30secytx_thresholds;
    }

    if(child_yang_name == "second30secytx-reports")
    {
        if(second30secytx_reports == nullptr)
        {
            second30secytx_reports = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secytx::Second30SecytxReports>();
        }
        return second30secytx_reports;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Secytx::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(second30secytx_thresholds != nullptr)
    {
        children["second30secytx-thresholds"] = second30secytx_thresholds;
    }

    if(second30secytx_reports != nullptr)
    {
        children["second30secytx-reports"] = second30secytx_reports;
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
    if(name == "second30secytx-thresholds" || name == "second30secytx-reports")
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

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcms()
{

    yang_name = "hour24otn-tcms"; yang_parent_name = "performance-management"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::~Hour24OtnTcms()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::has_data() const
{
    for (std::size_t index=0; index<hour24otn_tcm.size(); index++)
    {
        if(hour24otn_tcm[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::has_operation() const
{
    for (std::size_t index=0; index<hour24otn_tcm.size(); index++)
    {
        if(hour24otn_tcm[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24otn-tcms";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hour24otn-tcm")
    {
        for(auto const & c : hour24otn_tcm)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm>();
        c->parent = this;
        hour24otn_tcm.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : hour24otn_tcm)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hour24otn-tcm")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::Hour24OtnTcm()
    :
    tcm_number{YType::int32, "tcm-number"}
    	,
    hour24otn_tcm_thresholds(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::Hour24OtnTcmThresholds>())
	,hour24otn_tcm_reports(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::Hour24OtnTcmReports>())
{
    hour24otn_tcm_thresholds->parent = this;
    hour24otn_tcm_reports->parent = this;

    yang_name = "hour24otn-tcm"; yang_parent_name = "hour24otn-tcms"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::~Hour24OtnTcm()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::has_data() const
{
    return tcm_number.is_set
	|| (hour24otn_tcm_thresholds !=  nullptr && hour24otn_tcm_thresholds->has_data())
	|| (hour24otn_tcm_reports !=  nullptr && hour24otn_tcm_reports->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tcm_number.yfilter)
	|| (hour24otn_tcm_thresholds !=  nullptr && hour24otn_tcm_thresholds->has_operation())
	|| (hour24otn_tcm_reports !=  nullptr && hour24otn_tcm_reports->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24otn-tcm" <<"[tcm-number='" <<tcm_number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tcm_number.is_set || is_set(tcm_number.yfilter)) leaf_name_data.push_back(tcm_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hour24otn-tcm-thresholds")
    {
        if(hour24otn_tcm_thresholds == nullptr)
        {
            hour24otn_tcm_thresholds = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::Hour24OtnTcmThresholds>();
        }
        return hour24otn_tcm_thresholds;
    }

    if(child_yang_name == "hour24otn-tcm-reports")
    {
        if(hour24otn_tcm_reports == nullptr)
        {
            hour24otn_tcm_reports = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::Hour24OtnTcmReports>();
        }
        return hour24otn_tcm_reports;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(hour24otn_tcm_thresholds != nullptr)
    {
        children["hour24otn-tcm-thresholds"] = hour24otn_tcm_thresholds;
    }

    if(hour24otn_tcm_reports != nullptr)
    {
        children["hour24otn-tcm-reports"] = hour24otn_tcm_reports;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tcm-number")
    {
        tcm_number = value;
        tcm_number.value_namespace = name_space;
        tcm_number.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tcm-number")
    {
        tcm_number.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hour24otn-tcm-thresholds" || name == "hour24otn-tcm-reports" || name == "tcm-number")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::Hour24OtnTcmThresholds::Hour24OtnTcmThresholds()
{

    yang_name = "hour24otn-tcm-thresholds"; yang_parent_name = "hour24otn-tcm"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::Hour24OtnTcmThresholds::~Hour24OtnTcmThresholds()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::Hour24OtnTcmThresholds::has_data() const
{
    for (std::size_t index=0; index<hour24otn_tcm_threshold.size(); index++)
    {
        if(hour24otn_tcm_threshold[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::Hour24OtnTcmThresholds::has_operation() const
{
    for (std::size_t index=0; index<hour24otn_tcm_threshold.size(); index++)
    {
        if(hour24otn_tcm_threshold[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::Hour24OtnTcmThresholds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24otn-tcm-thresholds";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::Hour24OtnTcmThresholds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::Hour24OtnTcmThresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hour24otn-tcm-threshold")
    {
        for(auto const & c : hour24otn_tcm_threshold)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::Hour24OtnTcmThresholds::Hour24OtnTcmThreshold>();
        c->parent = this;
        hour24otn_tcm_threshold.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::Hour24OtnTcmThresholds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : hour24otn_tcm_threshold)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::Hour24OtnTcmThresholds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::Hour24OtnTcmThresholds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::Hour24OtnTcmThresholds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hour24otn-tcm-threshold")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::Hour24OtnTcmThresholds::Hour24OtnTcmThreshold::Hour24OtnTcmThreshold()
    :
    otn_threshold{YType::enumeration, "otn-threshold"},
    otn_threshold_value{YType::int32, "otn-threshold-value"}
{

    yang_name = "hour24otn-tcm-threshold"; yang_parent_name = "hour24otn-tcm-thresholds"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::Hour24OtnTcmThresholds::Hour24OtnTcmThreshold::~Hour24OtnTcmThreshold()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::Hour24OtnTcmThresholds::Hour24OtnTcmThreshold::has_data() const
{
    return otn_threshold.is_set
	|| otn_threshold_value.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::Hour24OtnTcmThresholds::Hour24OtnTcmThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(otn_threshold.yfilter)
	|| ydk::is_set(otn_threshold_value.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::Hour24OtnTcmThresholds::Hour24OtnTcmThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24otn-tcm-threshold" <<"[otn-threshold='" <<otn_threshold <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::Hour24OtnTcmThresholds::Hour24OtnTcmThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (otn_threshold.is_set || is_set(otn_threshold.yfilter)) leaf_name_data.push_back(otn_threshold.get_name_leafdata());
    if (otn_threshold_value.is_set || is_set(otn_threshold_value.yfilter)) leaf_name_data.push_back(otn_threshold_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::Hour24OtnTcmThresholds::Hour24OtnTcmThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::Hour24OtnTcmThresholds::Hour24OtnTcmThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::Hour24OtnTcmThresholds::Hour24OtnTcmThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::Hour24OtnTcmThresholds::Hour24OtnTcmThreshold::set_filter(const std::string & value_path, YFilter yfilter)
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

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::Hour24OtnTcmThresholds::Hour24OtnTcmThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "otn-threshold" || name == "otn-threshold-value")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::Hour24OtnTcmReports::Hour24OtnTcmReports()
{

    yang_name = "hour24otn-tcm-reports"; yang_parent_name = "hour24otn-tcm"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::Hour24OtnTcmReports::~Hour24OtnTcmReports()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::Hour24OtnTcmReports::has_data() const
{
    for (std::size_t index=0; index<hour24otn_tcm_report.size(); index++)
    {
        if(hour24otn_tcm_report[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::Hour24OtnTcmReports::has_operation() const
{
    for (std::size_t index=0; index<hour24otn_tcm_report.size(); index++)
    {
        if(hour24otn_tcm_report[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::Hour24OtnTcmReports::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24otn-tcm-reports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::Hour24OtnTcmReports::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::Hour24OtnTcmReports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hour24otn-tcm-report")
    {
        for(auto const & c : hour24otn_tcm_report)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::Hour24OtnTcmReports::Hour24OtnTcmReport>();
        c->parent = this;
        hour24otn_tcm_report.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::Hour24OtnTcmReports::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : hour24otn_tcm_report)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::Hour24OtnTcmReports::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::Hour24OtnTcmReports::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::Hour24OtnTcmReports::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hour24otn-tcm-report")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::Hour24OtnTcmReports::Hour24OtnTcmReport::Hour24OtnTcmReport()
    :
    otn_report{YType::enumeration, "otn-report"},
    enable{YType::enumeration, "enable"}
{

    yang_name = "hour24otn-tcm-report"; yang_parent_name = "hour24otn-tcm-reports"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::Hour24OtnTcmReports::Hour24OtnTcmReport::~Hour24OtnTcmReport()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::Hour24OtnTcmReports::Hour24OtnTcmReport::has_data() const
{
    return otn_report.is_set
	|| enable.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::Hour24OtnTcmReports::Hour24OtnTcmReport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(otn_report.yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::Hour24OtnTcmReports::Hour24OtnTcmReport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24otn-tcm-report" <<"[otn-report='" <<otn_report <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::Hour24OtnTcmReports::Hour24OtnTcmReport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (otn_report.is_set || is_set(otn_report.yfilter)) leaf_name_data.push_back(otn_report.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::Hour24OtnTcmReports::Hour24OtnTcmReport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::Hour24OtnTcmReports::Hour24OtnTcmReport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::Hour24OtnTcmReports::Hour24OtnTcmReport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::Hour24OtnTcmReports::Hour24OtnTcmReport::set_filter(const std::string & value_path, YFilter yfilter)
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

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::Hour24OtnTcmReports::Hour24OtnTcmReport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "otn-report" || name == "enable")
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

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24()
    :
    hour24otn(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn>())
	,hour24_optics(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics>())
	,hour24fec(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec>())
	,hour24secyif(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyif>())
	,hour24secyrx(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyrx>())
	,hour24secytx(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secytx>())
{
    hour24otn->parent = this;
    hour24_optics->parent = this;
    hour24fec->parent = this;
    hour24secyif->parent = this;
    hour24secyrx->parent = this;
    hour24secytx->parent = this;

    yang_name = "hour24"; yang_parent_name = "performance-management"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::~Hour24()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::has_data() const
{
    return (hour24otn !=  nullptr && hour24otn->has_data())
	|| (hour24_optics !=  nullptr && hour24_optics->has_data())
	|| (hour24fec !=  nullptr && hour24fec->has_data())
	|| (hour24secyif !=  nullptr && hour24secyif->has_data())
	|| (hour24secyrx !=  nullptr && hour24secyrx->has_data())
	|| (hour24secytx !=  nullptr && hour24secytx->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::has_operation() const
{
    return is_set(yfilter)
	|| (hour24otn !=  nullptr && hour24otn->has_operation())
	|| (hour24_optics !=  nullptr && hour24_optics->has_operation())
	|| (hour24fec !=  nullptr && hour24fec->has_operation())
	|| (hour24secyif !=  nullptr && hour24secyif->has_operation())
	|| (hour24secyrx !=  nullptr && hour24secyrx->has_operation())
	|| (hour24secytx !=  nullptr && hour24secytx->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hour24otn")
    {
        if(hour24otn == nullptr)
        {
            hour24otn = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn>();
        }
        return hour24otn;
    }

    if(child_yang_name == "hour24-optics")
    {
        if(hour24_optics == nullptr)
        {
            hour24_optics = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics>();
        }
        return hour24_optics;
    }

    if(child_yang_name == "hour24fec")
    {
        if(hour24fec == nullptr)
        {
            hour24fec = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec>();
        }
        return hour24fec;
    }

    if(child_yang_name == "hour24secyif")
    {
        if(hour24secyif == nullptr)
        {
            hour24secyif = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyif>();
        }
        return hour24secyif;
    }

    if(child_yang_name == "hour24secyrx")
    {
        if(hour24secyrx == nullptr)
        {
            hour24secyrx = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyrx>();
        }
        return hour24secyrx;
    }

    if(child_yang_name == "hour24secytx")
    {
        if(hour24secytx == nullptr)
        {
            hour24secytx = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secytx>();
        }
        return hour24secytx;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(hour24otn != nullptr)
    {
        children["hour24otn"] = hour24otn;
    }

    if(hour24_optics != nullptr)
    {
        children["hour24-optics"] = hour24_optics;
    }

    if(hour24fec != nullptr)
    {
        children["hour24fec"] = hour24fec;
    }

    if(hour24secyif != nullptr)
    {
        children["hour24secyif"] = hour24secyif;
    }

    if(hour24secyrx != nullptr)
    {
        children["hour24secyrx"] = hour24secyrx;
    }

    if(hour24secytx != nullptr)
    {
        children["hour24secytx"] = hour24secytx;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hour24otn" || name == "hour24-optics" || name == "hour24fec" || name == "hour24secyif" || name == "hour24secyrx" || name == "hour24secytx")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::Hour24Otn()
    :
    hour24otn_thresholds(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::Hour24OtnThresholds>())
	,hour24otn_reports(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::Hour24OtnReports>())
{
    hour24otn_thresholds->parent = this;
    hour24otn_reports->parent = this;

    yang_name = "hour24otn"; yang_parent_name = "hour24"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::~Hour24Otn()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::has_data() const
{
    return (hour24otn_thresholds !=  nullptr && hour24otn_thresholds->has_data())
	|| (hour24otn_reports !=  nullptr && hour24otn_reports->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::has_operation() const
{
    return is_set(yfilter)
	|| (hour24otn_thresholds !=  nullptr && hour24otn_thresholds->has_operation())
	|| (hour24otn_reports !=  nullptr && hour24otn_reports->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24otn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hour24otn-thresholds")
    {
        if(hour24otn_thresholds == nullptr)
        {
            hour24otn_thresholds = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::Hour24OtnThresholds>();
        }
        return hour24otn_thresholds;
    }

    if(child_yang_name == "hour24otn-reports")
    {
        if(hour24otn_reports == nullptr)
        {
            hour24otn_reports = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::Hour24OtnReports>();
        }
        return hour24otn_reports;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(hour24otn_thresholds != nullptr)
    {
        children["hour24otn-thresholds"] = hour24otn_thresholds;
    }

    if(hour24otn_reports != nullptr)
    {
        children["hour24otn-reports"] = hour24otn_reports;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hour24otn-thresholds" || name == "hour24otn-reports")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::Hour24OtnThresholds::Hour24OtnThresholds()
{

    yang_name = "hour24otn-thresholds"; yang_parent_name = "hour24otn"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::Hour24OtnThresholds::~Hour24OtnThresholds()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::Hour24OtnThresholds::has_data() const
{
    for (std::size_t index=0; index<hour24otn_threshold.size(); index++)
    {
        if(hour24otn_threshold[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::Hour24OtnThresholds::has_operation() const
{
    for (std::size_t index=0; index<hour24otn_threshold.size(); index++)
    {
        if(hour24otn_threshold[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::Hour24OtnThresholds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24otn-thresholds";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::Hour24OtnThresholds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::Hour24OtnThresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hour24otn-threshold")
    {
        for(auto const & c : hour24otn_threshold)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::Hour24OtnThresholds::Hour24OtnThreshold>();
        c->parent = this;
        hour24otn_threshold.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::Hour24OtnThresholds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : hour24otn_threshold)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::Hour24OtnThresholds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::Hour24OtnThresholds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::Hour24OtnThresholds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hour24otn-threshold")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::Hour24OtnThresholds::Hour24OtnThreshold::Hour24OtnThreshold()
    :
    otn_threshold{YType::enumeration, "otn-threshold"},
    otn_threshold_value{YType::int32, "otn-threshold-value"}
{

    yang_name = "hour24otn-threshold"; yang_parent_name = "hour24otn-thresholds"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::Hour24OtnThresholds::Hour24OtnThreshold::~Hour24OtnThreshold()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::Hour24OtnThresholds::Hour24OtnThreshold::has_data() const
{
    return otn_threshold.is_set
	|| otn_threshold_value.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::Hour24OtnThresholds::Hour24OtnThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(otn_threshold.yfilter)
	|| ydk::is_set(otn_threshold_value.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::Hour24OtnThresholds::Hour24OtnThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24otn-threshold" <<"[otn-threshold='" <<otn_threshold <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::Hour24OtnThresholds::Hour24OtnThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (otn_threshold.is_set || is_set(otn_threshold.yfilter)) leaf_name_data.push_back(otn_threshold.get_name_leafdata());
    if (otn_threshold_value.is_set || is_set(otn_threshold_value.yfilter)) leaf_name_data.push_back(otn_threshold_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::Hour24OtnThresholds::Hour24OtnThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::Hour24OtnThresholds::Hour24OtnThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::Hour24OtnThresholds::Hour24OtnThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::Hour24OtnThresholds::Hour24OtnThreshold::set_filter(const std::string & value_path, YFilter yfilter)
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

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::Hour24OtnThresholds::Hour24OtnThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "otn-threshold" || name == "otn-threshold-value")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::Hour24OtnReports::Hour24OtnReports()
{

    yang_name = "hour24otn-reports"; yang_parent_name = "hour24otn"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::Hour24OtnReports::~Hour24OtnReports()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::Hour24OtnReports::has_data() const
{
    for (std::size_t index=0; index<hour24otn_report.size(); index++)
    {
        if(hour24otn_report[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::Hour24OtnReports::has_operation() const
{
    for (std::size_t index=0; index<hour24otn_report.size(); index++)
    {
        if(hour24otn_report[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::Hour24OtnReports::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24otn-reports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::Hour24OtnReports::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::Hour24OtnReports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hour24otn-report")
    {
        for(auto const & c : hour24otn_report)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::Hour24OtnReports::Hour24OtnReport>();
        c->parent = this;
        hour24otn_report.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::Hour24OtnReports::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : hour24otn_report)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::Hour24OtnReports::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::Hour24OtnReports::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::Hour24OtnReports::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hour24otn-report")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::Hour24OtnReports::Hour24OtnReport::Hour24OtnReport()
    :
    otn_report{YType::enumeration, "otn-report"},
    enable{YType::enumeration, "enable"}
{

    yang_name = "hour24otn-report"; yang_parent_name = "hour24otn-reports"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::Hour24OtnReports::Hour24OtnReport::~Hour24OtnReport()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::Hour24OtnReports::Hour24OtnReport::has_data() const
{
    return otn_report.is_set
	|| enable.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::Hour24OtnReports::Hour24OtnReport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(otn_report.yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::Hour24OtnReports::Hour24OtnReport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24otn-report" <<"[otn-report='" <<otn_report <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::Hour24OtnReports::Hour24OtnReport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (otn_report.is_set || is_set(otn_report.yfilter)) leaf_name_data.push_back(otn_report.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::Hour24OtnReports::Hour24OtnReport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::Hour24OtnReports::Hour24OtnReport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::Hour24OtnReports::Hour24OtnReport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::Hour24OtnReports::Hour24OtnReport::set_filter(const std::string & value_path, YFilter yfilter)
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

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::Hour24OtnReports::Hour24OtnReport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "otn-report" || name == "enable")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24Optics()
    :
    hour24_optics_thresholds(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsThresholds>())
	,hour24_optics_reports(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsReports>())
{
    hour24_optics_thresholds->parent = this;
    hour24_optics_reports->parent = this;

    yang_name = "hour24-optics"; yang_parent_name = "hour24"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::~Hour24Optics()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::has_data() const
{
    return (hour24_optics_thresholds !=  nullptr && hour24_optics_thresholds->has_data())
	|| (hour24_optics_reports !=  nullptr && hour24_optics_reports->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::has_operation() const
{
    return is_set(yfilter)
	|| (hour24_optics_thresholds !=  nullptr && hour24_optics_thresholds->has_operation())
	|| (hour24_optics_reports !=  nullptr && hour24_optics_reports->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24-optics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hour24-optics-thresholds")
    {
        if(hour24_optics_thresholds == nullptr)
        {
            hour24_optics_thresholds = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsThresholds>();
        }
        return hour24_optics_thresholds;
    }

    if(child_yang_name == "hour24-optics-reports")
    {
        if(hour24_optics_reports == nullptr)
        {
            hour24_optics_reports = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsReports>();
        }
        return hour24_optics_reports;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(hour24_optics_thresholds != nullptr)
    {
        children["hour24-optics-thresholds"] = hour24_optics_thresholds;
    }

    if(hour24_optics_reports != nullptr)
    {
        children["hour24-optics-reports"] = hour24_optics_reports;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hour24-optics-thresholds" || name == "hour24-optics-reports")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsThresholds::Hour24OpticsThresholds()
{

    yang_name = "hour24-optics-thresholds"; yang_parent_name = "hour24-optics"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsThresholds::~Hour24OpticsThresholds()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsThresholds::has_data() const
{
    for (std::size_t index=0; index<hour24_optics_threshold.size(); index++)
    {
        if(hour24_optics_threshold[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsThresholds::has_operation() const
{
    for (std::size_t index=0; index<hour24_optics_threshold.size(); index++)
    {
        if(hour24_optics_threshold[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsThresholds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24-optics-thresholds";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsThresholds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsThresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hour24-optics-threshold")
    {
        for(auto const & c : hour24_optics_threshold)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsThresholds::Hour24OpticsThreshold>();
        c->parent = this;
        hour24_optics_threshold.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsThresholds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : hour24_optics_threshold)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsThresholds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsThresholds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsThresholds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hour24-optics-threshold")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsThresholds::Hour24OpticsThreshold::Hour24OpticsThreshold()
    :
    optics_threshold{YType::enumeration, "optics-threshold"},
    optics_threshold_value{YType::int32, "optics-threshold-value"},
    dbm{YType::int32, "dbm"}
{

    yang_name = "hour24-optics-threshold"; yang_parent_name = "hour24-optics-thresholds"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsThresholds::Hour24OpticsThreshold::~Hour24OpticsThreshold()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsThresholds::Hour24OpticsThreshold::has_data() const
{
    return optics_threshold.is_set
	|| optics_threshold_value.is_set
	|| dbm.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsThresholds::Hour24OpticsThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(optics_threshold.yfilter)
	|| ydk::is_set(optics_threshold_value.yfilter)
	|| ydk::is_set(dbm.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsThresholds::Hour24OpticsThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24-optics-threshold" <<"[optics-threshold='" <<optics_threshold <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsThresholds::Hour24OpticsThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (optics_threshold.is_set || is_set(optics_threshold.yfilter)) leaf_name_data.push_back(optics_threshold.get_name_leafdata());
    if (optics_threshold_value.is_set || is_set(optics_threshold_value.yfilter)) leaf_name_data.push_back(optics_threshold_value.get_name_leafdata());
    if (dbm.is_set || is_set(dbm.yfilter)) leaf_name_data.push_back(dbm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsThresholds::Hour24OpticsThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsThresholds::Hour24OpticsThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsThresholds::Hour24OpticsThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsThresholds::Hour24OpticsThreshold::set_filter(const std::string & value_path, YFilter yfilter)
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

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsThresholds::Hour24OpticsThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "optics-threshold" || name == "optics-threshold-value" || name == "dbm")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsReports::Hour24OpticsReports()
{

    yang_name = "hour24-optics-reports"; yang_parent_name = "hour24-optics"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsReports::~Hour24OpticsReports()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsReports::has_data() const
{
    for (std::size_t index=0; index<hour24_optics_report.size(); index++)
    {
        if(hour24_optics_report[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsReports::has_operation() const
{
    for (std::size_t index=0; index<hour24_optics_report.size(); index++)
    {
        if(hour24_optics_report[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsReports::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24-optics-reports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsReports::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsReports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hour24-optics-report")
    {
        for(auto const & c : hour24_optics_report)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsReports::Hour24OpticsReport>();
        c->parent = this;
        hour24_optics_report.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsReports::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : hour24_optics_report)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsReports::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsReports::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsReports::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hour24-optics-report")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsReports::Hour24OpticsReport::Hour24OpticsReport()
    :
    optics_report{YType::enumeration, "optics-report"}
{

    yang_name = "hour24-optics-report"; yang_parent_name = "hour24-optics-reports"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsReports::Hour24OpticsReport::~Hour24OpticsReport()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsReports::Hour24OpticsReport::has_data() const
{
    return optics_report.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsReports::Hour24OpticsReport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(optics_report.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsReports::Hour24OpticsReport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24-optics-report" <<"[optics-report='" <<optics_report <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsReports::Hour24OpticsReport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (optics_report.is_set || is_set(optics_report.yfilter)) leaf_name_data.push_back(optics_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsReports::Hour24OpticsReport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsReports::Hour24OpticsReport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsReports::Hour24OpticsReport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "optics-report")
    {
        optics_report = value;
        optics_report.value_namespace = name_space;
        optics_report.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsReports::Hour24OpticsReport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "optics-report")
    {
        optics_report.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsReports::Hour24OpticsReport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "optics-report")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::Hour24Fec()
    :
    hour24fec_thresholds(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::Hour24FecThresholds>())
	,hour24fec_reports(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::Hour24FecReports>())
{
    hour24fec_thresholds->parent = this;
    hour24fec_reports->parent = this;

    yang_name = "hour24fec"; yang_parent_name = "hour24"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::~Hour24Fec()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::has_data() const
{
    return (hour24fec_thresholds !=  nullptr && hour24fec_thresholds->has_data())
	|| (hour24fec_reports !=  nullptr && hour24fec_reports->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::has_operation() const
{
    return is_set(yfilter)
	|| (hour24fec_thresholds !=  nullptr && hour24fec_thresholds->has_operation())
	|| (hour24fec_reports !=  nullptr && hour24fec_reports->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24fec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hour24fec-thresholds")
    {
        if(hour24fec_thresholds == nullptr)
        {
            hour24fec_thresholds = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::Hour24FecThresholds>();
        }
        return hour24fec_thresholds;
    }

    if(child_yang_name == "hour24fec-reports")
    {
        if(hour24fec_reports == nullptr)
        {
            hour24fec_reports = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::Hour24FecReports>();
        }
        return hour24fec_reports;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hour24fec-thresholds" || name == "hour24fec-reports")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::Hour24FecThresholds::Hour24FecThresholds()
{

    yang_name = "hour24fec-thresholds"; yang_parent_name = "hour24fec"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::Hour24FecThresholds::~Hour24FecThresholds()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::Hour24FecThresholds::has_data() const
{
    for (std::size_t index=0; index<hour24fec_threshold.size(); index++)
    {
        if(hour24fec_threshold[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::Hour24FecThresholds::has_operation() const
{
    for (std::size_t index=0; index<hour24fec_threshold.size(); index++)
    {
        if(hour24fec_threshold[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::Hour24FecThresholds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24fec-thresholds";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::Hour24FecThresholds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::Hour24FecThresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hour24fec-threshold")
    {
        for(auto const & c : hour24fec_threshold)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::Hour24FecThresholds::Hour24FecThreshold>();
        c->parent = this;
        hour24fec_threshold.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::Hour24FecThresholds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : hour24fec_threshold)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::Hour24FecThresholds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::Hour24FecThresholds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::Hour24FecThresholds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hour24fec-threshold")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::Hour24FecThresholds::Hour24FecThreshold::Hour24FecThreshold()
    :
    fec_threshold{YType::enumeration, "fec-threshold"},
    fec_threshold_value{YType::str, "fec-threshold-value"}
{

    yang_name = "hour24fec-threshold"; yang_parent_name = "hour24fec-thresholds"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::Hour24FecThresholds::Hour24FecThreshold::~Hour24FecThreshold()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::Hour24FecThresholds::Hour24FecThreshold::has_data() const
{
    return fec_threshold.is_set
	|| fec_threshold_value.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::Hour24FecThresholds::Hour24FecThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fec_threshold.yfilter)
	|| ydk::is_set(fec_threshold_value.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::Hour24FecThresholds::Hour24FecThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24fec-threshold" <<"[fec-threshold='" <<fec_threshold <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::Hour24FecThresholds::Hour24FecThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fec_threshold.is_set || is_set(fec_threshold.yfilter)) leaf_name_data.push_back(fec_threshold.get_name_leafdata());
    if (fec_threshold_value.is_set || is_set(fec_threshold_value.yfilter)) leaf_name_data.push_back(fec_threshold_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::Hour24FecThresholds::Hour24FecThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::Hour24FecThresholds::Hour24FecThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::Hour24FecThresholds::Hour24FecThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::Hour24FecThresholds::Hour24FecThreshold::set_filter(const std::string & value_path, YFilter yfilter)
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

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::Hour24FecThresholds::Hour24FecThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fec-threshold" || name == "fec-threshold-value")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::Hour24FecReports::Hour24FecReports()
{

    yang_name = "hour24fec-reports"; yang_parent_name = "hour24fec"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::Hour24FecReports::~Hour24FecReports()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::Hour24FecReports::has_data() const
{
    for (std::size_t index=0; index<hour24fec_report.size(); index++)
    {
        if(hour24fec_report[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::Hour24FecReports::has_operation() const
{
    for (std::size_t index=0; index<hour24fec_report.size(); index++)
    {
        if(hour24fec_report[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::Hour24FecReports::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24fec-reports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::Hour24FecReports::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::Hour24FecReports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hour24fec-report")
    {
        for(auto const & c : hour24fec_report)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::Hour24FecReports::Hour24FecReport>();
        c->parent = this;
        hour24fec_report.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::Hour24FecReports::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : hour24fec_report)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::Hour24FecReports::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::Hour24FecReports::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::Hour24FecReports::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hour24fec-report")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::Hour24FecReports::Hour24FecReport::Hour24FecReport()
    :
    fec_report{YType::enumeration, "fec-report"},
    enable{YType::enumeration, "enable"}
{

    yang_name = "hour24fec-report"; yang_parent_name = "hour24fec-reports"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::Hour24FecReports::Hour24FecReport::~Hour24FecReport()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::Hour24FecReports::Hour24FecReport::has_data() const
{
    return fec_report.is_set
	|| enable.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::Hour24FecReports::Hour24FecReport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fec_report.yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::Hour24FecReports::Hour24FecReport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24fec-report" <<"[fec-report='" <<fec_report <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::Hour24FecReports::Hour24FecReport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fec_report.is_set || is_set(fec_report.yfilter)) leaf_name_data.push_back(fec_report.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::Hour24FecReports::Hour24FecReport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::Hour24FecReports::Hour24FecReport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::Hour24FecReports::Hour24FecReport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::Hour24FecReports::Hour24FecReport::set_filter(const std::string & value_path, YFilter yfilter)
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

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::Hour24FecReports::Hour24FecReport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fec-report" || name == "enable")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyif::Hour24Secyif()
    :
    hour24secyif_reports(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyif::Hour24SecyifReports>())
	,hour24secyif_thresholds(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyif::Hour24SecyifThresholds>())
{
    hour24secyif_reports->parent = this;
    hour24secyif_thresholds->parent = this;

    yang_name = "hour24secyif"; yang_parent_name = "hour24"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyif::~Hour24Secyif()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyif::has_data() const
{
    return (hour24secyif_reports !=  nullptr && hour24secyif_reports->has_data())
	|| (hour24secyif_thresholds !=  nullptr && hour24secyif_thresholds->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyif::has_operation() const
{
    return is_set(yfilter)
	|| (hour24secyif_reports !=  nullptr && hour24secyif_reports->has_operation())
	|| (hour24secyif_thresholds !=  nullptr && hour24secyif_thresholds->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyif::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24secyif";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyif::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyif::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hour24secyif-reports")
    {
        if(hour24secyif_reports == nullptr)
        {
            hour24secyif_reports = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyif::Hour24SecyifReports>();
        }
        return hour24secyif_reports;
    }

    if(child_yang_name == "hour24secyif-thresholds")
    {
        if(hour24secyif_thresholds == nullptr)
        {
            hour24secyif_thresholds = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyif::Hour24SecyifThresholds>();
        }
        return hour24secyif_thresholds;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyif::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyif::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyif::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyif::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hour24secyif-reports" || name == "hour24secyif-thresholds")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyif::Hour24SecyifReports::Hour24SecyifReports()
{

    yang_name = "hour24secyif-reports"; yang_parent_name = "hour24secyif"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyif::Hour24SecyifReports::~Hour24SecyifReports()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyif::Hour24SecyifReports::has_data() const
{
    for (std::size_t index=0; index<hour24secyif_report.size(); index++)
    {
        if(hour24secyif_report[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyif::Hour24SecyifReports::has_operation() const
{
    for (std::size_t index=0; index<hour24secyif_report.size(); index++)
    {
        if(hour24secyif_report[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyif::Hour24SecyifReports::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24secyif-reports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyif::Hour24SecyifReports::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyif::Hour24SecyifReports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hour24secyif-report")
    {
        for(auto const & c : hour24secyif_report)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyif::Hour24SecyifReports::Hour24SecyifReport>();
        c->parent = this;
        hour24secyif_report.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyif::Hour24SecyifReports::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : hour24secyif_report)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyif::Hour24SecyifReports::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyif::Hour24SecyifReports::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyif::Hour24SecyifReports::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hour24secyif-report")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyif::Hour24SecyifReports::Hour24SecyifReport::Hour24SecyifReport()
    :
    secyif_report{YType::enumeration, "secyif-report"},
    enable{YType::enumeration, "enable"}
{

    yang_name = "hour24secyif-report"; yang_parent_name = "hour24secyif-reports"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyif::Hour24SecyifReports::Hour24SecyifReport::~Hour24SecyifReport()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyif::Hour24SecyifReports::Hour24SecyifReport::has_data() const
{
    return secyif_report.is_set
	|| enable.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyif::Hour24SecyifReports::Hour24SecyifReport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(secyif_report.yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyif::Hour24SecyifReports::Hour24SecyifReport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24secyif-report" <<"[secyif-report='" <<secyif_report <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyif::Hour24SecyifReports::Hour24SecyifReport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (secyif_report.is_set || is_set(secyif_report.yfilter)) leaf_name_data.push_back(secyif_report.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyif::Hour24SecyifReports::Hour24SecyifReport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyif::Hour24SecyifReports::Hour24SecyifReport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyif::Hour24SecyifReports::Hour24SecyifReport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyif::Hour24SecyifReports::Hour24SecyifReport::set_filter(const std::string & value_path, YFilter yfilter)
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

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyif::Hour24SecyifReports::Hour24SecyifReport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "secyif-report" || name == "enable")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyif::Hour24SecyifThresholds::Hour24SecyifThresholds()
{

    yang_name = "hour24secyif-thresholds"; yang_parent_name = "hour24secyif"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyif::Hour24SecyifThresholds::~Hour24SecyifThresholds()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyif::Hour24SecyifThresholds::has_data() const
{
    for (std::size_t index=0; index<hour24secyif_threshold.size(); index++)
    {
        if(hour24secyif_threshold[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyif::Hour24SecyifThresholds::has_operation() const
{
    for (std::size_t index=0; index<hour24secyif_threshold.size(); index++)
    {
        if(hour24secyif_threshold[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyif::Hour24SecyifThresholds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24secyif-thresholds";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyif::Hour24SecyifThresholds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyif::Hour24SecyifThresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hour24secyif-threshold")
    {
        for(auto const & c : hour24secyif_threshold)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyif::Hour24SecyifThresholds::Hour24SecyifThreshold>();
        c->parent = this;
        hour24secyif_threshold.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyif::Hour24SecyifThresholds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : hour24secyif_threshold)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyif::Hour24SecyifThresholds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyif::Hour24SecyifThresholds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyif::Hour24SecyifThresholds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hour24secyif-threshold")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyif::Hour24SecyifThresholds::Hour24SecyifThreshold::Hour24SecyifThreshold()
    :
    secyif_threshold{YType::enumeration, "secyif-threshold"},
    secyif_threshold_value{YType::int32, "secyif-threshold-value"}
{

    yang_name = "hour24secyif-threshold"; yang_parent_name = "hour24secyif-thresholds"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyif::Hour24SecyifThresholds::Hour24SecyifThreshold::~Hour24SecyifThreshold()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyif::Hour24SecyifThresholds::Hour24SecyifThreshold::has_data() const
{
    return secyif_threshold.is_set
	|| secyif_threshold_value.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyif::Hour24SecyifThresholds::Hour24SecyifThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(secyif_threshold.yfilter)
	|| ydk::is_set(secyif_threshold_value.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyif::Hour24SecyifThresholds::Hour24SecyifThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24secyif-threshold" <<"[secyif-threshold='" <<secyif_threshold <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyif::Hour24SecyifThresholds::Hour24SecyifThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (secyif_threshold.is_set || is_set(secyif_threshold.yfilter)) leaf_name_data.push_back(secyif_threshold.get_name_leafdata());
    if (secyif_threshold_value.is_set || is_set(secyif_threshold_value.yfilter)) leaf_name_data.push_back(secyif_threshold_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyif::Hour24SecyifThresholds::Hour24SecyifThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyif::Hour24SecyifThresholds::Hour24SecyifThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyif::Hour24SecyifThresholds::Hour24SecyifThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyif::Hour24SecyifThresholds::Hour24SecyifThreshold::set_filter(const std::string & value_path, YFilter yfilter)
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

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyif::Hour24SecyifThresholds::Hour24SecyifThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "secyif-threshold" || name == "secyif-threshold-value")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyrx::Hour24Secyrx()
    :
    hour24secyrx_reports(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyrx::Hour24SecyrxReports>())
	,hour24secyrx_thresholds(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyrx::Hour24SecyrxThresholds>())
{
    hour24secyrx_reports->parent = this;
    hour24secyrx_thresholds->parent = this;

    yang_name = "hour24secyrx"; yang_parent_name = "hour24"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyrx::~Hour24Secyrx()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyrx::has_data() const
{
    return (hour24secyrx_reports !=  nullptr && hour24secyrx_reports->has_data())
	|| (hour24secyrx_thresholds !=  nullptr && hour24secyrx_thresholds->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyrx::has_operation() const
{
    return is_set(yfilter)
	|| (hour24secyrx_reports !=  nullptr && hour24secyrx_reports->has_operation())
	|| (hour24secyrx_thresholds !=  nullptr && hour24secyrx_thresholds->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyrx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24secyrx";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyrx::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyrx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hour24secyrx-reports")
    {
        if(hour24secyrx_reports == nullptr)
        {
            hour24secyrx_reports = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyrx::Hour24SecyrxReports>();
        }
        return hour24secyrx_reports;
    }

    if(child_yang_name == "hour24secyrx-thresholds")
    {
        if(hour24secyrx_thresholds == nullptr)
        {
            hour24secyrx_thresholds = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyrx::Hour24SecyrxThresholds>();
        }
        return hour24secyrx_thresholds;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyrx::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyrx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyrx::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyrx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hour24secyrx-reports" || name == "hour24secyrx-thresholds")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyrx::Hour24SecyrxReports::Hour24SecyrxReports()
{

    yang_name = "hour24secyrx-reports"; yang_parent_name = "hour24secyrx"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyrx::Hour24SecyrxReports::~Hour24SecyrxReports()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyrx::Hour24SecyrxReports::has_data() const
{
    for (std::size_t index=0; index<hour24secyrx_report.size(); index++)
    {
        if(hour24secyrx_report[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyrx::Hour24SecyrxReports::has_operation() const
{
    for (std::size_t index=0; index<hour24secyrx_report.size(); index++)
    {
        if(hour24secyrx_report[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyrx::Hour24SecyrxReports::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24secyrx-reports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyrx::Hour24SecyrxReports::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyrx::Hour24SecyrxReports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hour24secyrx-report")
    {
        for(auto const & c : hour24secyrx_report)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyrx::Hour24SecyrxReports::Hour24SecyrxReport>();
        c->parent = this;
        hour24secyrx_report.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyrx::Hour24SecyrxReports::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : hour24secyrx_report)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyrx::Hour24SecyrxReports::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyrx::Hour24SecyrxReports::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyrx::Hour24SecyrxReports::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hour24secyrx-report")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyrx::Hour24SecyrxReports::Hour24SecyrxReport::Hour24SecyrxReport()
    :
    secyrx_report{YType::enumeration, "secyrx-report"},
    enable{YType::enumeration, "enable"}
{

    yang_name = "hour24secyrx-report"; yang_parent_name = "hour24secyrx-reports"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyrx::Hour24SecyrxReports::Hour24SecyrxReport::~Hour24SecyrxReport()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyrx::Hour24SecyrxReports::Hour24SecyrxReport::has_data() const
{
    return secyrx_report.is_set
	|| enable.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyrx::Hour24SecyrxReports::Hour24SecyrxReport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(secyrx_report.yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyrx::Hour24SecyrxReports::Hour24SecyrxReport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24secyrx-report" <<"[secyrx-report='" <<secyrx_report <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyrx::Hour24SecyrxReports::Hour24SecyrxReport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (secyrx_report.is_set || is_set(secyrx_report.yfilter)) leaf_name_data.push_back(secyrx_report.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyrx::Hour24SecyrxReports::Hour24SecyrxReport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyrx::Hour24SecyrxReports::Hour24SecyrxReport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyrx::Hour24SecyrxReports::Hour24SecyrxReport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyrx::Hour24SecyrxReports::Hour24SecyrxReport::set_filter(const std::string & value_path, YFilter yfilter)
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

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyrx::Hour24SecyrxReports::Hour24SecyrxReport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "secyrx-report" || name == "enable")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyrx::Hour24SecyrxThresholds::Hour24SecyrxThresholds()
{

    yang_name = "hour24secyrx-thresholds"; yang_parent_name = "hour24secyrx"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyrx::Hour24SecyrxThresholds::~Hour24SecyrxThresholds()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyrx::Hour24SecyrxThresholds::has_data() const
{
    for (std::size_t index=0; index<hour24secyrx_threshold.size(); index++)
    {
        if(hour24secyrx_threshold[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyrx::Hour24SecyrxThresholds::has_operation() const
{
    for (std::size_t index=0; index<hour24secyrx_threshold.size(); index++)
    {
        if(hour24secyrx_threshold[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyrx::Hour24SecyrxThresholds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24secyrx-thresholds";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyrx::Hour24SecyrxThresholds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyrx::Hour24SecyrxThresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hour24secyrx-threshold")
    {
        for(auto const & c : hour24secyrx_threshold)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyrx::Hour24SecyrxThresholds::Hour24SecyrxThreshold>();
        c->parent = this;
        hour24secyrx_threshold.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyrx::Hour24SecyrxThresholds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : hour24secyrx_threshold)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyrx::Hour24SecyrxThresholds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyrx::Hour24SecyrxThresholds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyrx::Hour24SecyrxThresholds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hour24secyrx-threshold")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyrx::Hour24SecyrxThresholds::Hour24SecyrxThreshold::Hour24SecyrxThreshold()
    :
    secyrx_threshold{YType::enumeration, "secyrx-threshold"},
    secyrx_threshold_value{YType::int32, "secyrx-threshold-value"}
{

    yang_name = "hour24secyrx-threshold"; yang_parent_name = "hour24secyrx-thresholds"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyrx::Hour24SecyrxThresholds::Hour24SecyrxThreshold::~Hour24SecyrxThreshold()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyrx::Hour24SecyrxThresholds::Hour24SecyrxThreshold::has_data() const
{
    return secyrx_threshold.is_set
	|| secyrx_threshold_value.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyrx::Hour24SecyrxThresholds::Hour24SecyrxThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(secyrx_threshold.yfilter)
	|| ydk::is_set(secyrx_threshold_value.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyrx::Hour24SecyrxThresholds::Hour24SecyrxThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24secyrx-threshold" <<"[secyrx-threshold='" <<secyrx_threshold <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyrx::Hour24SecyrxThresholds::Hour24SecyrxThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (secyrx_threshold.is_set || is_set(secyrx_threshold.yfilter)) leaf_name_data.push_back(secyrx_threshold.get_name_leafdata());
    if (secyrx_threshold_value.is_set || is_set(secyrx_threshold_value.yfilter)) leaf_name_data.push_back(secyrx_threshold_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyrx::Hour24SecyrxThresholds::Hour24SecyrxThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyrx::Hour24SecyrxThresholds::Hour24SecyrxThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyrx::Hour24SecyrxThresholds::Hour24SecyrxThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyrx::Hour24SecyrxThresholds::Hour24SecyrxThreshold::set_filter(const std::string & value_path, YFilter yfilter)
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

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secyrx::Hour24SecyrxThresholds::Hour24SecyrxThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "secyrx-threshold" || name == "secyrx-threshold-value")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secytx::Hour24Secytx()
    :
    hour24secytx_thresholds(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secytx::Hour24SecytxThresholds>())
	,hour24secytx_reports(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secytx::Hour24SecytxReports>())
{
    hour24secytx_thresholds->parent = this;
    hour24secytx_reports->parent = this;

    yang_name = "hour24secytx"; yang_parent_name = "hour24"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secytx::~Hour24Secytx()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secytx::has_data() const
{
    return (hour24secytx_thresholds !=  nullptr && hour24secytx_thresholds->has_data())
	|| (hour24secytx_reports !=  nullptr && hour24secytx_reports->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secytx::has_operation() const
{
    return is_set(yfilter)
	|| (hour24secytx_thresholds !=  nullptr && hour24secytx_thresholds->has_operation())
	|| (hour24secytx_reports !=  nullptr && hour24secytx_reports->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secytx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24secytx";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secytx::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secytx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hour24secytx-thresholds")
    {
        if(hour24secytx_thresholds == nullptr)
        {
            hour24secytx_thresholds = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secytx::Hour24SecytxThresholds>();
        }
        return hour24secytx_thresholds;
    }

    if(child_yang_name == "hour24secytx-reports")
    {
        if(hour24secytx_reports == nullptr)
        {
            hour24secytx_reports = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secytx::Hour24SecytxReports>();
        }
        return hour24secytx_reports;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secytx::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secytx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secytx::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secytx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hour24secytx-thresholds" || name == "hour24secytx-reports")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secytx::Hour24SecytxThresholds::Hour24SecytxThresholds()
{

    yang_name = "hour24secytx-thresholds"; yang_parent_name = "hour24secytx"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secytx::Hour24SecytxThresholds::~Hour24SecytxThresholds()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secytx::Hour24SecytxThresholds::has_data() const
{
    for (std::size_t index=0; index<hour24secytx_threshold.size(); index++)
    {
        if(hour24secytx_threshold[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secytx::Hour24SecytxThresholds::has_operation() const
{
    for (std::size_t index=0; index<hour24secytx_threshold.size(); index++)
    {
        if(hour24secytx_threshold[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secytx::Hour24SecytxThresholds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24secytx-thresholds";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secytx::Hour24SecytxThresholds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secytx::Hour24SecytxThresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hour24secytx-threshold")
    {
        for(auto const & c : hour24secytx_threshold)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secytx::Hour24SecytxThresholds::Hour24SecytxThreshold>();
        c->parent = this;
        hour24secytx_threshold.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secytx::Hour24SecytxThresholds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : hour24secytx_threshold)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secytx::Hour24SecytxThresholds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secytx::Hour24SecytxThresholds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secytx::Hour24SecytxThresholds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hour24secytx-threshold")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secytx::Hour24SecytxThresholds::Hour24SecytxThreshold::Hour24SecytxThreshold()
    :
    secytx_threshold{YType::enumeration, "secytx-threshold"},
    secytx_threshold_value{YType::int32, "secytx-threshold-value"}
{

    yang_name = "hour24secytx-threshold"; yang_parent_name = "hour24secytx-thresholds"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secytx::Hour24SecytxThresholds::Hour24SecytxThreshold::~Hour24SecytxThreshold()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secytx::Hour24SecytxThresholds::Hour24SecytxThreshold::has_data() const
{
    return secytx_threshold.is_set
	|| secytx_threshold_value.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secytx::Hour24SecytxThresholds::Hour24SecytxThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(secytx_threshold.yfilter)
	|| ydk::is_set(secytx_threshold_value.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secytx::Hour24SecytxThresholds::Hour24SecytxThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24secytx-threshold" <<"[secytx-threshold='" <<secytx_threshold <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secytx::Hour24SecytxThresholds::Hour24SecytxThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (secytx_threshold.is_set || is_set(secytx_threshold.yfilter)) leaf_name_data.push_back(secytx_threshold.get_name_leafdata());
    if (secytx_threshold_value.is_set || is_set(secytx_threshold_value.yfilter)) leaf_name_data.push_back(secytx_threshold_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secytx::Hour24SecytxThresholds::Hour24SecytxThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secytx::Hour24SecytxThresholds::Hour24SecytxThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secytx::Hour24SecytxThresholds::Hour24SecytxThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secytx::Hour24SecytxThresholds::Hour24SecytxThreshold::set_filter(const std::string & value_path, YFilter yfilter)
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

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secytx::Hour24SecytxThresholds::Hour24SecytxThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "secytx-threshold" || name == "secytx-threshold-value")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secytx::Hour24SecytxReports::Hour24SecytxReports()
{

    yang_name = "hour24secytx-reports"; yang_parent_name = "hour24secytx"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secytx::Hour24SecytxReports::~Hour24SecytxReports()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secytx::Hour24SecytxReports::has_data() const
{
    for (std::size_t index=0; index<hour24secytx_report.size(); index++)
    {
        if(hour24secytx_report[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secytx::Hour24SecytxReports::has_operation() const
{
    for (std::size_t index=0; index<hour24secytx_report.size(); index++)
    {
        if(hour24secytx_report[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secytx::Hour24SecytxReports::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24secytx-reports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secytx::Hour24SecytxReports::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secytx::Hour24SecytxReports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hour24secytx-report")
    {
        for(auto const & c : hour24secytx_report)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secytx::Hour24SecytxReports::Hour24SecytxReport>();
        c->parent = this;
        hour24secytx_report.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secytx::Hour24SecytxReports::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : hour24secytx_report)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secytx::Hour24SecytxReports::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secytx::Hour24SecytxReports::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secytx::Hour24SecytxReports::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hour24secytx-report")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secytx::Hour24SecytxReports::Hour24SecytxReport::Hour24SecytxReport()
    :
    secytx_report{YType::enumeration, "secytx-report"},
    enable{YType::enumeration, "enable"}
{

    yang_name = "hour24secytx-report"; yang_parent_name = "hour24secytx-reports"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secytx::Hour24SecytxReports::Hour24SecytxReport::~Hour24SecytxReport()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secytx::Hour24SecytxReports::Hour24SecytxReport::has_data() const
{
    return secytx_report.is_set
	|| enable.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secytx::Hour24SecytxReports::Hour24SecytxReport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(secytx_report.yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secytx::Hour24SecytxReports::Hour24SecytxReport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24secytx-report" <<"[secytx-report='" <<secytx_report <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secytx::Hour24SecytxReports::Hour24SecytxReport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (secytx_report.is_set || is_set(secytx_report.yfilter)) leaf_name_data.push_back(secytx_report.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secytx::Hour24SecytxReports::Hour24SecytxReport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secytx::Hour24SecytxReports::Hour24SecytxReport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secytx::Hour24SecytxReports::Hour24SecytxReport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secytx::Hour24SecytxReports::Hour24SecytxReport::set_filter(const std::string & value_path, YFilter yfilter)
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

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Secytx::Hour24SecytxReports::Hour24SecytxReport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "secytx-report" || name == "enable")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15()
    :
    ho_vc_minute15ho_vc(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc>())
{
    ho_vc_minute15ho_vc->parent = this;

    yang_name = "ho-vc-minute15"; yang_parent_name = "performance-management"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::~HoVcMinute15()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::has_data() const
{
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
            ho_vc_minute15ho_vc = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc>();
        }
        return ho_vc_minute15ho_vc;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::HoVcMinute15HoVc()
    :
    ho_vc_minute15ho_vc_reports(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::HoVcMinute15HoVcReports>())
	,ho_vc_minute15ho_vc_thresholds(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::HoVcMinute15HoVcThresholds>())
{
    ho_vc_minute15ho_vc_reports->parent = this;
    ho_vc_minute15ho_vc_thresholds->parent = this;

    yang_name = "ho-vc-minute15ho-vc"; yang_parent_name = "ho-vc-minute15"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::~HoVcMinute15HoVc()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::has_data() const
{
    return (ho_vc_minute15ho_vc_reports !=  nullptr && ho_vc_minute15ho_vc_reports->has_data())
	|| (ho_vc_minute15ho_vc_thresholds !=  nullptr && ho_vc_minute15ho_vc_thresholds->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::has_operation() const
{
    return is_set(yfilter)
	|| (ho_vc_minute15ho_vc_reports !=  nullptr && ho_vc_minute15ho_vc_reports->has_operation())
	|| (ho_vc_minute15ho_vc_thresholds !=  nullptr && ho_vc_minute15ho_vc_thresholds->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ho-vc-minute15ho-vc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ho-vc-minute15ho-vc-reports")
    {
        if(ho_vc_minute15ho_vc_reports == nullptr)
        {
            ho_vc_minute15ho_vc_reports = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::HoVcMinute15HoVcReports>();
        }
        return ho_vc_minute15ho_vc_reports;
    }

    if(child_yang_name == "ho-vc-minute15ho-vc-thresholds")
    {
        if(ho_vc_minute15ho_vc_thresholds == nullptr)
        {
            ho_vc_minute15ho_vc_thresholds = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::HoVcMinute15HoVcThresholds>();
        }
        return ho_vc_minute15ho_vc_thresholds;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ho-vc-minute15ho-vc-reports" || name == "ho-vc-minute15ho-vc-thresholds")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::HoVcMinute15HoVcReports::HoVcMinute15HoVcReports()
{

    yang_name = "ho-vc-minute15ho-vc-reports"; yang_parent_name = "ho-vc-minute15ho-vc"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::HoVcMinute15HoVcReports::~HoVcMinute15HoVcReports()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::HoVcMinute15HoVcReports::has_data() const
{
    for (std::size_t index=0; index<ho_vc_minute15ho_vc_report.size(); index++)
    {
        if(ho_vc_minute15ho_vc_report[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::HoVcMinute15HoVcReports::has_operation() const
{
    for (std::size_t index=0; index<ho_vc_minute15ho_vc_report.size(); index++)
    {
        if(ho_vc_minute15ho_vc_report[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::HoVcMinute15HoVcReports::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ho-vc-minute15ho-vc-reports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::HoVcMinute15HoVcReports::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::HoVcMinute15HoVcReports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ho-vc-minute15ho-vc-report")
    {
        for(auto const & c : ho_vc_minute15ho_vc_report)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::HoVcMinute15HoVcReports::HoVcMinute15HoVcReport>();
        c->parent = this;
        ho_vc_minute15ho_vc_report.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::HoVcMinute15HoVcReports::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ho_vc_minute15ho_vc_report)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::HoVcMinute15HoVcReports::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::HoVcMinute15HoVcReports::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::HoVcMinute15HoVcReports::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ho-vc-minute15ho-vc-report")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::HoVcMinute15HoVcReports::HoVcMinute15HoVcReport::HoVcMinute15HoVcReport()
    :
    ho_vc_report{YType::enumeration, "ho-vc-report"},
    enable{YType::enumeration, "enable"}
{

    yang_name = "ho-vc-minute15ho-vc-report"; yang_parent_name = "ho-vc-minute15ho-vc-reports"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::HoVcMinute15HoVcReports::HoVcMinute15HoVcReport::~HoVcMinute15HoVcReport()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::HoVcMinute15HoVcReports::HoVcMinute15HoVcReport::has_data() const
{
    return ho_vc_report.is_set
	|| enable.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::HoVcMinute15HoVcReports::HoVcMinute15HoVcReport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ho_vc_report.yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::HoVcMinute15HoVcReports::HoVcMinute15HoVcReport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ho-vc-minute15ho-vc-report" <<"[ho-vc-report='" <<ho_vc_report <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::HoVcMinute15HoVcReports::HoVcMinute15HoVcReport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ho_vc_report.is_set || is_set(ho_vc_report.yfilter)) leaf_name_data.push_back(ho_vc_report.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::HoVcMinute15HoVcReports::HoVcMinute15HoVcReport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::HoVcMinute15HoVcReports::HoVcMinute15HoVcReport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::HoVcMinute15HoVcReports::HoVcMinute15HoVcReport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::HoVcMinute15HoVcReports::HoVcMinute15HoVcReport::set_filter(const std::string & value_path, YFilter yfilter)
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

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::HoVcMinute15HoVcReports::HoVcMinute15HoVcReport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ho-vc-report" || name == "enable")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::HoVcMinute15HoVcThresholds::HoVcMinute15HoVcThresholds()
{

    yang_name = "ho-vc-minute15ho-vc-thresholds"; yang_parent_name = "ho-vc-minute15ho-vc"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::HoVcMinute15HoVcThresholds::~HoVcMinute15HoVcThresholds()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::HoVcMinute15HoVcThresholds::has_data() const
{
    for (std::size_t index=0; index<ho_vc_minute15ho_vc_threshold.size(); index++)
    {
        if(ho_vc_minute15ho_vc_threshold[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::HoVcMinute15HoVcThresholds::has_operation() const
{
    for (std::size_t index=0; index<ho_vc_minute15ho_vc_threshold.size(); index++)
    {
        if(ho_vc_minute15ho_vc_threshold[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::HoVcMinute15HoVcThresholds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ho-vc-minute15ho-vc-thresholds";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::HoVcMinute15HoVcThresholds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::HoVcMinute15HoVcThresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ho-vc-minute15ho-vc-threshold")
    {
        for(auto const & c : ho_vc_minute15ho_vc_threshold)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::HoVcMinute15HoVcThresholds::HoVcMinute15HoVcThreshold>();
        c->parent = this;
        ho_vc_minute15ho_vc_threshold.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::HoVcMinute15HoVcThresholds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ho_vc_minute15ho_vc_threshold)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::HoVcMinute15HoVcThresholds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::HoVcMinute15HoVcThresholds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::HoVcMinute15HoVcThresholds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ho-vc-minute15ho-vc-threshold")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::HoVcMinute15HoVcThresholds::HoVcMinute15HoVcThreshold::HoVcMinute15HoVcThreshold()
    :
    ho_vc_threshold{YType::enumeration, "ho-vc-threshold"},
    ho_vc_threshold_value{YType::int32, "ho-vc-threshold-value"}
{

    yang_name = "ho-vc-minute15ho-vc-threshold"; yang_parent_name = "ho-vc-minute15ho-vc-thresholds"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::HoVcMinute15HoVcThresholds::HoVcMinute15HoVcThreshold::~HoVcMinute15HoVcThreshold()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::HoVcMinute15HoVcThresholds::HoVcMinute15HoVcThreshold::has_data() const
{
    return ho_vc_threshold.is_set
	|| ho_vc_threshold_value.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::HoVcMinute15HoVcThresholds::HoVcMinute15HoVcThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ho_vc_threshold.yfilter)
	|| ydk::is_set(ho_vc_threshold_value.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::HoVcMinute15HoVcThresholds::HoVcMinute15HoVcThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ho-vc-minute15ho-vc-threshold" <<"[ho-vc-threshold='" <<ho_vc_threshold <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::HoVcMinute15HoVcThresholds::HoVcMinute15HoVcThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ho_vc_threshold.is_set || is_set(ho_vc_threshold.yfilter)) leaf_name_data.push_back(ho_vc_threshold.get_name_leafdata());
    if (ho_vc_threshold_value.is_set || is_set(ho_vc_threshold_value.yfilter)) leaf_name_data.push_back(ho_vc_threshold_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::HoVcMinute15HoVcThresholds::HoVcMinute15HoVcThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::HoVcMinute15HoVcThresholds::HoVcMinute15HoVcThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::HoVcMinute15HoVcThresholds::HoVcMinute15HoVcThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::HoVcMinute15HoVcThresholds::HoVcMinute15HoVcThreshold::set_filter(const std::string & value_path, YFilter yfilter)
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

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::HoVcMinute15HoVcThresholds::HoVcMinute15HoVcThreshold::has_leaf_or_child_of_name(const std::string & name) const
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
    sts_hour24_path_thresholds(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24::StsHour24Path::StsHour24PathThresholds>())
	,sts_hour24_path_reports(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24::StsHour24Path::StsHour24PathReports>())
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

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24()
    :
    sonet_hour24_path(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Path>())
	,sonet_hour24_ocn(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Ocn>())
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
	,sonet_hour24_path_reports(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Path::SonetHour24PathReports>())
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

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Ocn::SonetHour24Ocn()
    :
    sonet_hour24_ocn_thresholds(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Ocn::SonetHour24OcnThresholds>())
	,sonet_hour24_ocn_reports(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Ocn::SonetHour24OcnReports>())
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
    minute15otn_path_reports(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15OtnPath::Minute15OtnPathReports>())
	,min15_otn_path_threshes(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15OtnPath::Min15OtnPathThreshes>())
{
    minute15otn_path_reports->parent = this;
    min15_otn_path_threshes->parent = this;

    yang_name = "minute15otn-path"; yang_parent_name = "minute15-path"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15OtnPath::~Minute15OtnPath()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15OtnPath::has_data() const
{
    return (minute15otn_path_reports !=  nullptr && minute15otn_path_reports->has_data())
	|| (min15_otn_path_threshes !=  nullptr && min15_otn_path_threshes->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15OtnPath::has_operation() const
{
    return is_set(yfilter)
	|| (minute15otn_path_reports !=  nullptr && minute15otn_path_reports->has_operation())
	|| (min15_otn_path_threshes !=  nullptr && min15_otn_path_threshes->has_operation());
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
    if(child_yang_name == "minute15otn-path-reports")
    {
        if(minute15otn_path_reports == nullptr)
        {
            minute15otn_path_reports = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15OtnPath::Minute15OtnPathReports>();
        }
        return minute15otn_path_reports;
    }

    if(child_yang_name == "min15-otn-path-threshes")
    {
        if(min15_otn_path_threshes == nullptr)
        {
            min15_otn_path_threshes = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15OtnPath::Min15OtnPathThreshes>();
        }
        return min15_otn_path_threshes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15OtnPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15OtnPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15OtnPath::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15OtnPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minute15otn-path-reports" || name == "min15-otn-path-threshes")
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
	,second30_ether_reports(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30EtherReports>())
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
{

    yang_name = "second30-ether-thresholds"; yang_parent_name = "second30-ether"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30EtherThresholds::~Second30EtherThresholds()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30EtherThresholds::has_data() const
{
    for (std::size_t index=0; index<second30_ether_threshold.size(); index++)
    {
        if(second30_ether_threshold[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30EtherThresholds::has_operation() const
{
    for (std::size_t index=0; index<second30_ether_threshold.size(); index++)
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
        for(auto const & c : second30_ether_threshold)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30EtherThresholds::Second30EtherThreshold>();
        c->parent = this;
        second30_ether_threshold.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30EtherThresholds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : second30_ether_threshold)
    {
        children[c->get_segment_path()] = c;
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
    ether_threshold_value{YType::int32, "ether-threshold-value"}
{

    yang_name = "second30-ether-threshold"; yang_parent_name = "second30-ether-thresholds"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30EtherThresholds::Second30EtherThreshold::~Second30EtherThreshold()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30EtherThresholds::Second30EtherThreshold::has_data() const
{
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
    path_buffer << "second30-ether-threshold" <<"[ether-threshold='" <<ether_threshold <<"']";
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
{

    yang_name = "second30-ether-reports"; yang_parent_name = "second30-ether"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30EtherReports::~Second30EtherReports()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30EtherReports::has_data() const
{
    for (std::size_t index=0; index<second30_ether_report.size(); index++)
    {
        if(second30_ether_report[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30EtherReports::has_operation() const
{
    for (std::size_t index=0; index<second30_ether_report.size(); index++)
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
        for(auto const & c : second30_ether_report)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30EtherReports::Second30EtherReport>();
        c->parent = this;
        second30_ether_report.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30EtherReports::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : second30_ether_report)
    {
        children[c->get_segment_path()] = c;
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
    path_buffer << "second30-ether-report" <<"[ether-report='" <<ether_report <<"']";
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
    hour24otn_path(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath>())
{
    hour24otn_path->parent = this;

    yang_name = "hour24-path"; yang_parent_name = "performance-management"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::~Hour24Path()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::has_data() const
{
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
            hour24otn_path = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath>();
        }
        return hour24otn_path;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath::Hour24OtnPath()
    :
    hour24otn_path_reports(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath::Hour24OtnPathReports>())
	,hour24otn_path_thresholds(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath::Hour24OtnPathThresholds>())
{
    hour24otn_path_reports->parent = this;
    hour24otn_path_thresholds->parent = this;

    yang_name = "hour24otn-path"; yang_parent_name = "hour24-path"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath::~Hour24OtnPath()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath::has_data() const
{
    return (hour24otn_path_reports !=  nullptr && hour24otn_path_reports->has_data())
	|| (hour24otn_path_thresholds !=  nullptr && hour24otn_path_thresholds->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath::has_operation() const
{
    return is_set(yfilter)
	|| (hour24otn_path_reports !=  nullptr && hour24otn_path_reports->has_operation())
	|| (hour24otn_path_thresholds !=  nullptr && hour24otn_path_thresholds->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24otn-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hour24otn-path-reports")
    {
        if(hour24otn_path_reports == nullptr)
        {
            hour24otn_path_reports = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath::Hour24OtnPathReports>();
        }
        return hour24otn_path_reports;
    }

    if(child_yang_name == "hour24otn-path-thresholds")
    {
        if(hour24otn_path_thresholds == nullptr)
        {
            hour24otn_path_thresholds = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath::Hour24OtnPathThresholds>();
        }
        return hour24otn_path_thresholds;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hour24otn-path-reports" || name == "hour24otn-path-thresholds")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath::Hour24OtnPathReports::Hour24OtnPathReports()
{

    yang_name = "hour24otn-path-reports"; yang_parent_name = "hour24otn-path"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath::Hour24OtnPathReports::~Hour24OtnPathReports()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath::Hour24OtnPathReports::has_data() const
{
    for (std::size_t index=0; index<hour24otn_path_report.size(); index++)
    {
        if(hour24otn_path_report[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath::Hour24OtnPathReports::has_operation() const
{
    for (std::size_t index=0; index<hour24otn_path_report.size(); index++)
    {
        if(hour24otn_path_report[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath::Hour24OtnPathReports::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24otn-path-reports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath::Hour24OtnPathReports::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath::Hour24OtnPathReports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hour24otn-path-report")
    {
        for(auto const & c : hour24otn_path_report)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath::Hour24OtnPathReports::Hour24OtnPathReport>();
        c->parent = this;
        hour24otn_path_report.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath::Hour24OtnPathReports::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : hour24otn_path_report)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath::Hour24OtnPathReports::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath::Hour24OtnPathReports::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath::Hour24OtnPathReports::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hour24otn-path-report")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath::Hour24OtnPathReports::Hour24OtnPathReport::Hour24OtnPathReport()
    :
    otn_report{YType::enumeration, "otn-report"},
    enable{YType::enumeration, "enable"}
{

    yang_name = "hour24otn-path-report"; yang_parent_name = "hour24otn-path-reports"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath::Hour24OtnPathReports::Hour24OtnPathReport::~Hour24OtnPathReport()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath::Hour24OtnPathReports::Hour24OtnPathReport::has_data() const
{
    return otn_report.is_set
	|| enable.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath::Hour24OtnPathReports::Hour24OtnPathReport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(otn_report.yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath::Hour24OtnPathReports::Hour24OtnPathReport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24otn-path-report" <<"[otn-report='" <<otn_report <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath::Hour24OtnPathReports::Hour24OtnPathReport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (otn_report.is_set || is_set(otn_report.yfilter)) leaf_name_data.push_back(otn_report.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath::Hour24OtnPathReports::Hour24OtnPathReport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath::Hour24OtnPathReports::Hour24OtnPathReport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath::Hour24OtnPathReports::Hour24OtnPathReport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath::Hour24OtnPathReports::Hour24OtnPathReport::set_filter(const std::string & value_path, YFilter yfilter)
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

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath::Hour24OtnPathReports::Hour24OtnPathReport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "otn-report" || name == "enable")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath::Hour24OtnPathThresholds::Hour24OtnPathThresholds()
{

    yang_name = "hour24otn-path-thresholds"; yang_parent_name = "hour24otn-path"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath::Hour24OtnPathThresholds::~Hour24OtnPathThresholds()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath::Hour24OtnPathThresholds::has_data() const
{
    for (std::size_t index=0; index<hour24otn_path_threshold.size(); index++)
    {
        if(hour24otn_path_threshold[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath::Hour24OtnPathThresholds::has_operation() const
{
    for (std::size_t index=0; index<hour24otn_path_threshold.size(); index++)
    {
        if(hour24otn_path_threshold[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath::Hour24OtnPathThresholds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24otn-path-thresholds";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath::Hour24OtnPathThresholds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath::Hour24OtnPathThresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hour24otn-path-threshold")
    {
        for(auto const & c : hour24otn_path_threshold)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath::Hour24OtnPathThresholds::Hour24OtnPathThreshold>();
        c->parent = this;
        hour24otn_path_threshold.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath::Hour24OtnPathThresholds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : hour24otn_path_threshold)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath::Hour24OtnPathThresholds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath::Hour24OtnPathThresholds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath::Hour24OtnPathThresholds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hour24otn-path-threshold")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath::Hour24OtnPathThresholds::Hour24OtnPathThreshold::Hour24OtnPathThreshold()
    :
    otn_threshold{YType::enumeration, "otn-threshold"},
    otn_threshold_value{YType::int32, "otn-threshold-value"}
{

    yang_name = "hour24otn-path-threshold"; yang_parent_name = "hour24otn-path-thresholds"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath::Hour24OtnPathThresholds::Hour24OtnPathThreshold::~Hour24OtnPathThreshold()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath::Hour24OtnPathThresholds::Hour24OtnPathThreshold::has_data() const
{
    return otn_threshold.is_set
	|| otn_threshold_value.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath::Hour24OtnPathThresholds::Hour24OtnPathThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(otn_threshold.yfilter)
	|| ydk::is_set(otn_threshold_value.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath::Hour24OtnPathThresholds::Hour24OtnPathThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24otn-path-threshold" <<"[otn-threshold='" <<otn_threshold <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath::Hour24OtnPathThresholds::Hour24OtnPathThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (otn_threshold.is_set || is_set(otn_threshold.yfilter)) leaf_name_data.push_back(otn_threshold.get_name_leafdata());
    if (otn_threshold_value.is_set || is_set(otn_threshold_value.yfilter)) leaf_name_data.push_back(otn_threshold_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath::Hour24OtnPathThresholds::Hour24OtnPathThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath::Hour24OtnPathThresholds::Hour24OtnPathThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath::Hour24OtnPathThresholds::Hour24OtnPathThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath::Hour24OtnPathThresholds::Hour24OtnPathThreshold::set_filter(const std::string & value_path, YFilter yfilter)
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

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath::Hour24OtnPathThresholds::Hour24OtnPathThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "otn-threshold" || name == "otn-threshold-value")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15()
    :
    minute15_optics(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics>())
	,minute15secyif(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secyif>())
	,minute15secyrx(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secyrx>())
	,minute15fec(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec>())
	,minute15secytx(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secytx>())
	,minute15otn(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Otn>())
{
    minute15_optics->parent = this;
    minute15secyif->parent = this;
    minute15secyrx->parent = this;
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
    return (minute15_optics !=  nullptr && minute15_optics->has_data())
	|| (minute15secyif !=  nullptr && minute15secyif->has_data())
	|| (minute15secyrx !=  nullptr && minute15secyrx->has_data())
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
            minute15secyif = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secyif>();
        }
        return minute15secyif;
    }

    if(child_yang_name == "minute15secyrx")
    {
        if(minute15secyrx == nullptr)
        {
            minute15secyrx = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secyrx>();
        }
        return minute15secyrx;
    }

    if(child_yang_name == "minute15fec")
    {
        if(minute15fec == nullptr)
        {
            minute15fec = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec>();
        }
        return minute15fec;
    }

    if(child_yang_name == "minute15secytx")
    {
        if(minute15secytx == nullptr)
        {
            minute15secytx = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Secytx>();
        }
        return minute15secytx;
    }

    if(child_yang_name == "minute15otn")
    {
        if(minute15otn == nullptr)
        {
            minute15otn = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Otn>();
        }
        return minute15otn;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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
    if(name == "minute15-optics" || name == "minute15secyif" || name == "minute15secyrx" || name == "minute15fec" || name == "minute15secytx" || name == "minute15otn")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::Minute15Optics()
    :
    minute15_optics_thresholds(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::Minute15OpticsThresholds>())
	,minute15_optics_reports(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::Minute15OpticsReports>())
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
{

    yang_name = "minute15-optics-thresholds"; yang_parent_name = "minute15-optics"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::Minute15OpticsThresholds::~Minute15OpticsThresholds()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::Minute15OpticsThresholds::has_data() const
{
    for (std::size_t index=0; index<minute15_optics_threshold.size(); index++)
    {
        if(minute15_optics_threshold[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::Minute15OpticsThresholds::has_operation() const
{
    for (std::size_t index=0; index<minute15_optics_threshold.size(); index++)
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
        for(auto const & c : minute15_optics_threshold)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::Minute15OpticsThresholds::Minute15OpticsThreshold>();
        c->parent = this;
        minute15_optics_threshold.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::Minute15OpticsThresholds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : minute15_optics_threshold)
    {
        children[c->get_segment_path()] = c;
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
    dbm{YType::int32, "dbm"}
{

    yang_name = "minute15-optics-threshold"; yang_parent_name = "minute15-optics-thresholds"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::Minute15OpticsThresholds::Minute15OpticsThreshold::~Minute15OpticsThreshold()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::Minute15OpticsThresholds::Minute15OpticsThreshold::has_data() const
{
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
    path_buffer << "minute15-optics-threshold" <<"[optics-threshold='" <<optics_threshold <<"']";
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
{

    yang_name = "minute15-optics-reports"; yang_parent_name = "minute15-optics"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::Minute15OpticsReports::~Minute15OpticsReports()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::Minute15OpticsReports::has_data() const
{
    for (std::size_t index=0; index<minute15_optics_report.size(); index++)
    {
        if(minute15_optics_report[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::Minute15OpticsReports::has_operation() const
{
    for (std::size_t index=0; index<minute15_optics_report.size(); index++)
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
        for(auto const & c : minute15_optics_report)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::Minute15OpticsReports::Minute15OpticsReport>();
        c->parent = this;
        minute15_optics_report.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::Minute15OpticsReports::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : minute15_optics_report)
    {
        children[c->get_segment_path()] = c;
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
    path_buffer << "minute15-optics-report" <<"[optics-report='" <<optics_report <<"']";
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

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec::Minute15Fec()
    :
    minute15fec_thresholds(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec::Minute15FecThresholds>())
	,minute15fec_reports(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec::Minute15FecReports>())
{
    minute15fec_thresholds->parent = this;
    minute15fec_reports->parent = this;

    yang_name = "minute15fec"; yang_parent_name = "minute15"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec::~Minute15Fec()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec::has_data() const
{
    return (minute15fec_thresholds !=  nullptr && minute15fec_thresholds->has_data())
	|| (minute15fec_reports !=  nullptr && minute15fec_reports->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec::has_operation() const
{
    return is_set(yfilter)
	|| (minute15fec_thresholds !=  nullptr && minute15fec_thresholds->has_operation())
	|| (minute15fec_reports !=  nullptr && minute15fec_reports->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15fec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "minute15fec-thresholds")
    {
        if(minute15fec_thresholds == nullptr)
        {
            minute15fec_thresholds = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec::Minute15FecThresholds>();
        }
        return minute15fec_thresholds;
    }

    if(child_yang_name == "minute15fec-reports")
    {
        if(minute15fec_reports == nullptr)
        {
            minute15fec_reports = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec::Minute15FecReports>();
        }
        return minute15fec_reports;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minute15fec-thresholds" || name == "minute15fec-reports")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec::Minute15FecThresholds::Minute15FecThresholds()
{

    yang_name = "minute15fec-thresholds"; yang_parent_name = "minute15fec"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec::Minute15FecThresholds::~Minute15FecThresholds()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec::Minute15FecThresholds::has_data() const
{
    for (std::size_t index=0; index<minute15fec_threshold.size(); index++)
    {
        if(minute15fec_threshold[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec::Minute15FecThresholds::has_operation() const
{
    for (std::size_t index=0; index<minute15fec_threshold.size(); index++)
    {
        if(minute15fec_threshold[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec::Minute15FecThresholds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15fec-thresholds";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec::Minute15FecThresholds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec::Minute15FecThresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "minute15fec-threshold")
    {
        for(auto const & c : minute15fec_threshold)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec::Minute15FecThresholds::Minute15FecThreshold>();
        c->parent = this;
        minute15fec_threshold.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec::Minute15FecThresholds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : minute15fec_threshold)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec::Minute15FecThresholds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec::Minute15FecThresholds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec::Minute15FecThresholds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minute15fec-threshold")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec::Minute15FecThresholds::Minute15FecThreshold::Minute15FecThreshold()
    :
    fec_threshold{YType::enumeration, "fec-threshold"},
    fec_threshold_value{YType::str, "fec-threshold-value"}
{

    yang_name = "minute15fec-threshold"; yang_parent_name = "minute15fec-thresholds"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec::Minute15FecThresholds::Minute15FecThreshold::~Minute15FecThreshold()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec::Minute15FecThresholds::Minute15FecThreshold::has_data() const
{
    return fec_threshold.is_set
	|| fec_threshold_value.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec::Minute15FecThresholds::Minute15FecThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fec_threshold.yfilter)
	|| ydk::is_set(fec_threshold_value.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec::Minute15FecThresholds::Minute15FecThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15fec-threshold" <<"[fec-threshold='" <<fec_threshold <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec::Minute15FecThresholds::Minute15FecThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fec_threshold.is_set || is_set(fec_threshold.yfilter)) leaf_name_data.push_back(fec_threshold.get_name_leafdata());
    if (fec_threshold_value.is_set || is_set(fec_threshold_value.yfilter)) leaf_name_data.push_back(fec_threshold_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec::Minute15FecThresholds::Minute15FecThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec::Minute15FecThresholds::Minute15FecThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec::Minute15FecThresholds::Minute15FecThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec::Minute15FecThresholds::Minute15FecThreshold::set_filter(const std::string & value_path, YFilter yfilter)
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

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec::Minute15FecThresholds::Minute15FecThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fec-threshold" || name == "fec-threshold-value")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec::Minute15FecReports::Minute15FecReports()
{

    yang_name = "minute15fec-reports"; yang_parent_name = "minute15fec"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec::Minute15FecReports::~Minute15FecReports()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec::Minute15FecReports::has_data() const
{
    for (std::size_t index=0; index<minute15fec_report.size(); index++)
    {
        if(minute15fec_report[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec::Minute15FecReports::has_operation() const
{
    for (std::size_t index=0; index<minute15fec_report.size(); index++)
    {
        if(minute15fec_report[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec::Minute15FecReports::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15fec-reports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec::Minute15FecReports::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec::Minute15FecReports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "minute15fec-report")
    {
        for(auto const & c : minute15fec_report)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec::Minute15FecReports::Minute15FecReport>();
        c->parent = this;
        minute15fec_report.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec::Minute15FecReports::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : minute15fec_report)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec::Minute15FecReports::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec::Minute15FecReports::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec::Minute15FecReports::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minute15fec-report")
        return true;
    return false;
}


}
}

