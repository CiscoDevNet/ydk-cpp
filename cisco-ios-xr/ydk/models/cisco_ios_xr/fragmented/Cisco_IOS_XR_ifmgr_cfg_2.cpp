
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ifmgr_cfg_2.hpp"
#include "Cisco_IOS_XR_ifmgr_cfg_3.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ifmgr_cfg {

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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secyrx::Minute15secyrxThresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "minute15secyrx-threshold")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secyrx::Minute15secyrxThresholds::Minute15secyrxThreshold>();
        ent_->parent = this;
        minute15secyrx_threshold.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secyrx::Minute15secyrxThresholds::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : minute15secyrx_threshold.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secyrx::Minute15secyrxThresholds::Minute15secyrxThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secyrx::Minute15secyrxThresholds::Minute15secyrxThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15pcs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15pcs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(minute15pcs_reports != nullptr)
    {
        _children["minute15pcs-reports"] = minute15pcs_reports;
    }

    if(minute15pcs_thresholds != nullptr)
    {
        _children["minute15pcs-thresholds"] = minute15pcs_thresholds;
    }

    return _children;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15pcs::Minute15pcsReports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "minute15pcs-report")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15pcs::Minute15pcsReports::Minute15pcsReport>();
        ent_->parent = this;
        minute15pcs_report.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15pcs::Minute15pcsReports::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : minute15pcs_report.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15pcs::Minute15pcsReports::Minute15pcsReport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15pcs::Minute15pcsReports::Minute15pcsReport::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15pcs::Minute15pcsThresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "minute15pcs-threshold")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15pcs::Minute15pcsThresholds::Minute15pcsThreshold>();
        ent_->parent = this;
        minute15pcs_threshold.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15pcs::Minute15pcsThresholds::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : minute15pcs_threshold.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15pcs::Minute15pcsThresholds::Minute15pcsThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15pcs::Minute15pcsThresholds::Minute15pcsThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15fec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15fec::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(minute15fec_thresholds != nullptr)
    {
        _children["minute15fec-thresholds"] = minute15fec_thresholds;
    }

    if(minute15fec_reports != nullptr)
    {
        _children["minute15fec-reports"] = minute15fec_reports;
    }

    return _children;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15fec::Minute15fecThresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "minute15fec-threshold")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15fec::Minute15fecThresholds::Minute15fecThreshold>();
        ent_->parent = this;
        minute15fec_threshold.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15fec::Minute15fecThresholds::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : minute15fec_threshold.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15fec::Minute15fecThresholds::Minute15fecThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15fec::Minute15fecThresholds::Minute15fecThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15fec::Minute15fecReports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "minute15fec-report")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15fec::Minute15fecReports::Minute15fecReport>();
        ent_->parent = this;
        minute15fec_report.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15fec::Minute15fecReports::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : minute15fec_report.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15fec::Minute15fecReports::Minute15fecReport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15fec::Minute15fecReports::Minute15fecReport::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secytx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secytx::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(minute15secytx_reports != nullptr)
    {
        _children["minute15secytx-reports"] = minute15secytx_reports;
    }

    if(minute15secytx_thresholds != nullptr)
    {
        _children["minute15secytx-thresholds"] = minute15secytx_thresholds;
    }

    return _children;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secytx::Minute15secytxReports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "minute15secytx-report")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secytx::Minute15secytxReports::Minute15secytxReport>();
        ent_->parent = this;
        minute15secytx_report.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secytx::Minute15secytxReports::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : minute15secytx_report.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secytx::Minute15secytxReports::Minute15secytxReport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secytx::Minute15secytxReports::Minute15secytxReport::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secytx::Minute15secytxThresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "minute15secytx-threshold")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secytx::Minute15secytxThresholds::Minute15secytxThreshold>();
        ent_->parent = this;
        minute15secytx_threshold.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secytx::Minute15secytxThresholds::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : minute15secytx_threshold.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secytx::Minute15secytxThresholds::Minute15secytxThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secytx::Minute15secytxThresholds::Minute15secytxThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15otn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15otn::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(min15_otn_threshes != nullptr)
    {
        _children["min15-otn-threshes"] = min15_otn_threshes;
    }

    if(minute15otn_reports != nullptr)
    {
        _children["minute15otn-reports"] = minute15otn_reports;
    }

    return _children;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15otn::Min15OtnThreshes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "min15-otn-thresh")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15otn::Min15OtnThreshes::Min15OtnThresh>();
        ent_->parent = this;
        min15_otn_thresh.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15otn::Min15OtnThreshes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : min15_otn_thresh.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15otn::Min15OtnThreshes::Min15OtnThresh::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15otn::Min15OtnThreshes::Min15OtnThresh::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15otn::Minute15otnReports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "minute15otn-report")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15otn::Minute15otnReports::Minute15otnReport>();
        ent_->parent = this;
        minute15otn_report.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15otn::Minute15otnReports::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : minute15otn_report.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15otn::Minute15otnReports::Minute15otnReport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15otn::Minute15otnReports::Minute15otnReport::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

InterfaceConfigurations::InterfaceConfiguration::Pbr::Pbr()
    :
    service_policy_in{YType::str, "service-policy-in"}
        ,
    service_policy(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Pbr::ServicePolicy>())
{
    service_policy->parent = this;

    yang_name = "pbr"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Pbr::~Pbr()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Pbr::has_data() const
{
    if (is_presence_container) return true;
    return service_policy_in.is_set
	|| (service_policy !=  nullptr && service_policy->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Pbr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(service_policy_in.yfilter)
	|| (service_policy !=  nullptr && service_policy->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Pbr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-pbr-cfg:pbr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Pbr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service_policy_in.is_set || is_set(service_policy_in.yfilter)) leaf_name_data.push_back(service_policy_in.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Pbr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-policy")
    {
        if(service_policy == nullptr)
        {
            service_policy = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Pbr::ServicePolicy>();
        }
        return service_policy;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Pbr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(service_policy != nullptr)
    {
        _children["service-policy"] = service_policy;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Pbr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "service-policy-in")
    {
        service_policy_in = value;
        service_policy_in.value_namespace = name_space;
        service_policy_in.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Pbr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "service-policy-in")
    {
        service_policy_in.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Pbr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-policy" || name == "service-policy-in")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Pbr::ServicePolicy::ServicePolicy()
    :
    input{YType::str, "input"}
{

    yang_name = "service-policy"; yang_parent_name = "pbr"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Pbr::ServicePolicy::~ServicePolicy()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Pbr::ServicePolicy::has_data() const
{
    if (is_presence_container) return true;
    return input.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Pbr::ServicePolicy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(input.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Pbr::ServicePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Pbr::ServicePolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (input.is_set || is_set(input.yfilter)) leaf_name_data.push_back(input.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Pbr::ServicePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Pbr::ServicePolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Pbr::ServicePolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "input")
    {
        input = value;
        input.value_namespace = name_space;
        input.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Pbr::ServicePolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "input")
    {
        input.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Pbr::ServicePolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelIp::TunnelIp()
    :
    allow_key{YType::empty, "allow-key"},
    ttl{YType::uint32, "ttl"},
    tunnel_vrf{YType::str, "tunnel-vrf"},
    tos{YType::uint32, "tos"},
    disable{YType::uint32, "disable"}
        ,
    mode(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Mode>())
    , source(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Source>())
    , key(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Key>())
    , keepalive(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Keepalive>())
    , bfd(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Bfd>())
    , destination(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Destination>())
{
    mode->parent = this;
    source->parent = this;
    key->parent = this;
    keepalive->parent = this;
    bfd->parent = this;
    destination->parent = this;

    yang_name = "tunnel-ip"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::TunnelIp::~TunnelIp()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelIp::has_data() const
{
    if (is_presence_container) return true;
    return allow_key.is_set
	|| ttl.is_set
	|| tunnel_vrf.is_set
	|| tos.is_set
	|| disable.is_set
	|| (mode !=  nullptr && mode->has_data())
	|| (source !=  nullptr && source->has_data())
	|| (key !=  nullptr && key->has_data())
	|| (keepalive !=  nullptr && keepalive->has_data())
	|| (bfd !=  nullptr && bfd->has_data())
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
	|| (bfd !=  nullptr && bfd->has_operation())
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelIp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

    if(child_yang_name == "bfd")
    {
        if(bfd == nullptr)
        {
            bfd = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Bfd>();
        }
        return bfd;
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

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::TunnelIp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mode != nullptr)
    {
        _children["mode"] = mode;
    }

    if(source != nullptr)
    {
        _children["source"] = source;
    }

    if(key != nullptr)
    {
        _children["key"] = key;
    }

    if(keepalive != nullptr)
    {
        _children["keepalive"] = keepalive;
    }

    if(bfd != nullptr)
    {
        _children["bfd"] = bfd;
    }

    if(destination != nullptr)
    {
        _children["destination"] = destination;
    }

    return _children;
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
    if(name == "mode" || name == "source" || name == "key" || name == "keepalive" || name == "bfd" || name == "destination" || name == "allow-key" || name == "ttl" || name == "tunnel-vrf" || name == "tos" || name == "disable")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Mode::Mode()
    :
    value_{YType::uint32, "value"},
    mode_direction{YType::enumeration, "mode-direction"}
{

    yang_name = "mode"; yang_parent_name = "tunnel-ip"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Mode::~Mode()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Mode::has_data() const
{
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Mode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Mode::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    type{YType::uint32, "type"},
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Key::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Key::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Keepalive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Keepalive::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Bfd::Bfd()
    :
    minimum_interval{YType::uint32, "minimum-interval"},
    keepalive_period{YType::uint32, "keepalive-period"},
    retry{YType::uint32, "retry"},
    multiplier{YType::uint32, "multiplier"}
        ,
    destination(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Bfd::Destination>())
{
    destination->parent = this;

    yang_name = "bfd"; yang_parent_name = "tunnel-ip"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Bfd::~Bfd()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Bfd::has_data() const
{
    if (is_presence_container) return true;
    return minimum_interval.is_set
	|| keepalive_period.is_set
	|| retry.is_set
	|| multiplier.is_set
	|| (destination !=  nullptr && destination->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Bfd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(minimum_interval.yfilter)
	|| ydk::is_set(keepalive_period.yfilter)
	|| ydk::is_set(retry.yfilter)
	|| ydk::is_set(multiplier.yfilter)
	|| (destination !=  nullptr && destination->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Bfd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Bfd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minimum_interval.is_set || is_set(minimum_interval.yfilter)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (keepalive_period.is_set || is_set(keepalive_period.yfilter)) leaf_name_data.push_back(keepalive_period.get_name_leafdata());
    if (retry.is_set || is_set(retry.yfilter)) leaf_name_data.push_back(retry.get_name_leafdata());
    if (multiplier.is_set || is_set(multiplier.yfilter)) leaf_name_data.push_back(multiplier.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Bfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "destination")
    {
        if(destination == nullptr)
        {
            destination = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Bfd::Destination>();
        }
        return destination;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Bfd::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(destination != nullptr)
    {
        _children["destination"] = destination;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Bfd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
        minimum_interval.value_namespace = name_space;
        minimum_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keepalive-period")
    {
        keepalive_period = value;
        keepalive_period.value_namespace = name_space;
        keepalive_period.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retry")
    {
        retry = value;
        retry.value_namespace = name_space;
        retry.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multiplier")
    {
        multiplier = value;
        multiplier.value_namespace = name_space;
        multiplier.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Bfd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "minimum-interval")
    {
        minimum_interval.yfilter = yfilter;
    }
    if(value_path == "keepalive-period")
    {
        keepalive_period.yfilter = yfilter;
    }
    if(value_path == "retry")
    {
        retry.yfilter = yfilter;
    }
    if(value_path == "multiplier")
    {
        multiplier.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Bfd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination" || name == "minimum-interval" || name == "keepalive-period" || name == "retry" || name == "multiplier")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Bfd::Destination::Destination()
    :
    type{YType::uint32, "type"},
    address{YType::str, "address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "destination"; yang_parent_name = "bfd"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Bfd::Destination::~Destination()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Bfd::Destination::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| address.is_set
	|| ipv6_address.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Bfd::Destination::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Bfd::Destination::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Bfd::Destination::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Bfd::Destination::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Bfd::Destination::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Bfd::Destination::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Bfd::Destination::set_filter(const std::string & value_path, YFilter yfilter)
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
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Bfd::Destination::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "address" || name == "ipv6-address")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Destination::Destination()
    :
    type{YType::uint32, "type"},
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Destination::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Destination::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

InterfaceConfigurations::InterfaceConfiguration::Optics::Optics()
    :
    optics_transmit_power{YType::int32, "optics-transmit-power"},
    optics_ots_channel_power_max_delta{YType::int32, "optics-ots-channel-power-max-delta"},
    optics_loopback{YType::enumeration, "optics-loopback"},
    optics_ots_osri{YType::boolean, "optics-ots-osri"},
    optics_ots_amplifier_gain_degrade_high_threshold{YType::uint32, "optics-ots-amplifier-gain-degrade-high-threshold"},
    optics_ots_rx_voa_attenuation{YType::uint32, "optics-ots-rx-voa-attenuation"},
    optics_fec{YType::enumeration, "optics-fec"},
    optics_dgd_high_threshold{YType::uint32, "optics-dgd-high-threshold"},
    optics_ots_amplifier_channel_power{YType::int32, "optics-ots-amplifier-channel-power"},
    optics_ots_amplifier_control_mode{YType::enumeration, "optics-ots-amplifier-control-mode"},
    optics_ots_amplifier_gain{YType::uint32, "optics-ots-amplifier-gain"},
    optics_ots_amplifier_gain_range{YType::enumeration, "optics-ots-amplifier-gain-range"},
    optics_ots_safety_control_mode{YType::enumeration, "optics-ots-safety-control-mode"},
    optics_cd_min{YType::int32, "optics-cd-min"},
    optics_ots_tx_voa_attenuation{YType::uint32, "optics-ots-tx-voa-attenuation"},
    optics_ots_amplifier_tilt{YType::int32, "optics-ots-amplifier-tilt"},
    optics_transmit_shutdown{YType::boolean, "optics-transmit-shutdown"},
    optics_baud_rate{YType::str, "optics-baud-rate"},
    optics_performance_monitoring{YType::boolean, "optics-performance-monitoring"},
    optics_cd_max{YType::int32, "optics-cd-max"},
    optics_bits_per_symbol{YType::str, "optics-bits-per-symbol"},
    optics_lbc_high_threshold{YType::uint32, "optics-lbc-high-threshold"},
    optics_cd_high_threshold{YType::int32, "optics-cd-high-threshold"},
    optics_osnr_low_threshold{YType::uint32, "optics-osnr-low-threshold"},
    optics_ots_amplifier_gain_degrade_low_threshold{YType::uint32, "optics-ots-amplifier-gain-degrade-low-threshold"},
    optics_cd_low_threshold{YType::int32, "optics-cd-low-threshold"},
    breakout{YType::str, "Cisco-IOS-XR-optics-driver-cfg:breakout"}
        ,
    rx_thresholds(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Optics::RxThresholds>())
    , optics_network_srlgs(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsNetworkSrlgs>())
    , optics_dwdm_carrier(nullptr) // presence node
    , optics_lanes(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsLanes>())
    , tx_thresholds(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Optics::TxThresholds>())
{
    rx_thresholds->parent = this;
    optics_network_srlgs->parent = this;
    optics_lanes->parent = this;
    tx_thresholds->parent = this;

    yang_name = "optics"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Optics::~Optics()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Optics::has_data() const
{
    if (is_presence_container) return true;
    return optics_transmit_power.is_set
	|| optics_ots_channel_power_max_delta.is_set
	|| optics_loopback.is_set
	|| optics_ots_osri.is_set
	|| optics_ots_amplifier_gain_degrade_high_threshold.is_set
	|| optics_ots_rx_voa_attenuation.is_set
	|| optics_fec.is_set
	|| optics_dgd_high_threshold.is_set
	|| optics_ots_amplifier_channel_power.is_set
	|| optics_ots_amplifier_control_mode.is_set
	|| optics_ots_amplifier_gain.is_set
	|| optics_ots_amplifier_gain_range.is_set
	|| optics_ots_safety_control_mode.is_set
	|| optics_cd_min.is_set
	|| optics_ots_tx_voa_attenuation.is_set
	|| optics_ots_amplifier_tilt.is_set
	|| optics_transmit_shutdown.is_set
	|| optics_baud_rate.is_set
	|| optics_performance_monitoring.is_set
	|| optics_cd_max.is_set
	|| optics_bits_per_symbol.is_set
	|| optics_lbc_high_threshold.is_set
	|| optics_cd_high_threshold.is_set
	|| optics_osnr_low_threshold.is_set
	|| optics_ots_amplifier_gain_degrade_low_threshold.is_set
	|| optics_cd_low_threshold.is_set
	|| breakout.is_set
	|| (rx_thresholds !=  nullptr && rx_thresholds->has_data())
	|| (optics_network_srlgs !=  nullptr && optics_network_srlgs->has_data())
	|| (optics_dwdm_carrier !=  nullptr && optics_dwdm_carrier->has_data())
	|| (optics_lanes !=  nullptr && optics_lanes->has_data())
	|| (tx_thresholds !=  nullptr && tx_thresholds->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Optics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(optics_transmit_power.yfilter)
	|| ydk::is_set(optics_ots_channel_power_max_delta.yfilter)
	|| ydk::is_set(optics_loopback.yfilter)
	|| ydk::is_set(optics_ots_osri.yfilter)
	|| ydk::is_set(optics_ots_amplifier_gain_degrade_high_threshold.yfilter)
	|| ydk::is_set(optics_ots_rx_voa_attenuation.yfilter)
	|| ydk::is_set(optics_fec.yfilter)
	|| ydk::is_set(optics_dgd_high_threshold.yfilter)
	|| ydk::is_set(optics_ots_amplifier_channel_power.yfilter)
	|| ydk::is_set(optics_ots_amplifier_control_mode.yfilter)
	|| ydk::is_set(optics_ots_amplifier_gain.yfilter)
	|| ydk::is_set(optics_ots_amplifier_gain_range.yfilter)
	|| ydk::is_set(optics_ots_safety_control_mode.yfilter)
	|| ydk::is_set(optics_cd_min.yfilter)
	|| ydk::is_set(optics_ots_tx_voa_attenuation.yfilter)
	|| ydk::is_set(optics_ots_amplifier_tilt.yfilter)
	|| ydk::is_set(optics_transmit_shutdown.yfilter)
	|| ydk::is_set(optics_baud_rate.yfilter)
	|| ydk::is_set(optics_performance_monitoring.yfilter)
	|| ydk::is_set(optics_cd_max.yfilter)
	|| ydk::is_set(optics_bits_per_symbol.yfilter)
	|| ydk::is_set(optics_lbc_high_threshold.yfilter)
	|| ydk::is_set(optics_cd_high_threshold.yfilter)
	|| ydk::is_set(optics_osnr_low_threshold.yfilter)
	|| ydk::is_set(optics_ots_amplifier_gain_degrade_low_threshold.yfilter)
	|| ydk::is_set(optics_cd_low_threshold.yfilter)
	|| ydk::is_set(breakout.yfilter)
	|| (rx_thresholds !=  nullptr && rx_thresholds->has_operation())
	|| (optics_network_srlgs !=  nullptr && optics_network_srlgs->has_operation())
	|| (optics_dwdm_carrier !=  nullptr && optics_dwdm_carrier->has_operation())
	|| (optics_lanes !=  nullptr && optics_lanes->has_operation())
	|| (tx_thresholds !=  nullptr && tx_thresholds->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Optics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-controller-optics-cfg:optics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Optics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (optics_transmit_power.is_set || is_set(optics_transmit_power.yfilter)) leaf_name_data.push_back(optics_transmit_power.get_name_leafdata());
    if (optics_ots_channel_power_max_delta.is_set || is_set(optics_ots_channel_power_max_delta.yfilter)) leaf_name_data.push_back(optics_ots_channel_power_max_delta.get_name_leafdata());
    if (optics_loopback.is_set || is_set(optics_loopback.yfilter)) leaf_name_data.push_back(optics_loopback.get_name_leafdata());
    if (optics_ots_osri.is_set || is_set(optics_ots_osri.yfilter)) leaf_name_data.push_back(optics_ots_osri.get_name_leafdata());
    if (optics_ots_amplifier_gain_degrade_high_threshold.is_set || is_set(optics_ots_amplifier_gain_degrade_high_threshold.yfilter)) leaf_name_data.push_back(optics_ots_amplifier_gain_degrade_high_threshold.get_name_leafdata());
    if (optics_ots_rx_voa_attenuation.is_set || is_set(optics_ots_rx_voa_attenuation.yfilter)) leaf_name_data.push_back(optics_ots_rx_voa_attenuation.get_name_leafdata());
    if (optics_fec.is_set || is_set(optics_fec.yfilter)) leaf_name_data.push_back(optics_fec.get_name_leafdata());
    if (optics_dgd_high_threshold.is_set || is_set(optics_dgd_high_threshold.yfilter)) leaf_name_data.push_back(optics_dgd_high_threshold.get_name_leafdata());
    if (optics_ots_amplifier_channel_power.is_set || is_set(optics_ots_amplifier_channel_power.yfilter)) leaf_name_data.push_back(optics_ots_amplifier_channel_power.get_name_leafdata());
    if (optics_ots_amplifier_control_mode.is_set || is_set(optics_ots_amplifier_control_mode.yfilter)) leaf_name_data.push_back(optics_ots_amplifier_control_mode.get_name_leafdata());
    if (optics_ots_amplifier_gain.is_set || is_set(optics_ots_amplifier_gain.yfilter)) leaf_name_data.push_back(optics_ots_amplifier_gain.get_name_leafdata());
    if (optics_ots_amplifier_gain_range.is_set || is_set(optics_ots_amplifier_gain_range.yfilter)) leaf_name_data.push_back(optics_ots_amplifier_gain_range.get_name_leafdata());
    if (optics_ots_safety_control_mode.is_set || is_set(optics_ots_safety_control_mode.yfilter)) leaf_name_data.push_back(optics_ots_safety_control_mode.get_name_leafdata());
    if (optics_cd_min.is_set || is_set(optics_cd_min.yfilter)) leaf_name_data.push_back(optics_cd_min.get_name_leafdata());
    if (optics_ots_tx_voa_attenuation.is_set || is_set(optics_ots_tx_voa_attenuation.yfilter)) leaf_name_data.push_back(optics_ots_tx_voa_attenuation.get_name_leafdata());
    if (optics_ots_amplifier_tilt.is_set || is_set(optics_ots_amplifier_tilt.yfilter)) leaf_name_data.push_back(optics_ots_amplifier_tilt.get_name_leafdata());
    if (optics_transmit_shutdown.is_set || is_set(optics_transmit_shutdown.yfilter)) leaf_name_data.push_back(optics_transmit_shutdown.get_name_leafdata());
    if (optics_baud_rate.is_set || is_set(optics_baud_rate.yfilter)) leaf_name_data.push_back(optics_baud_rate.get_name_leafdata());
    if (optics_performance_monitoring.is_set || is_set(optics_performance_monitoring.yfilter)) leaf_name_data.push_back(optics_performance_monitoring.get_name_leafdata());
    if (optics_cd_max.is_set || is_set(optics_cd_max.yfilter)) leaf_name_data.push_back(optics_cd_max.get_name_leafdata());
    if (optics_bits_per_symbol.is_set || is_set(optics_bits_per_symbol.yfilter)) leaf_name_data.push_back(optics_bits_per_symbol.get_name_leafdata());
    if (optics_lbc_high_threshold.is_set || is_set(optics_lbc_high_threshold.yfilter)) leaf_name_data.push_back(optics_lbc_high_threshold.get_name_leafdata());
    if (optics_cd_high_threshold.is_set || is_set(optics_cd_high_threshold.yfilter)) leaf_name_data.push_back(optics_cd_high_threshold.get_name_leafdata());
    if (optics_osnr_low_threshold.is_set || is_set(optics_osnr_low_threshold.yfilter)) leaf_name_data.push_back(optics_osnr_low_threshold.get_name_leafdata());
    if (optics_ots_amplifier_gain_degrade_low_threshold.is_set || is_set(optics_ots_amplifier_gain_degrade_low_threshold.yfilter)) leaf_name_data.push_back(optics_ots_amplifier_gain_degrade_low_threshold.get_name_leafdata());
    if (optics_cd_low_threshold.is_set || is_set(optics_cd_low_threshold.yfilter)) leaf_name_data.push_back(optics_cd_low_threshold.get_name_leafdata());
    if (breakout.is_set || is_set(breakout.yfilter)) leaf_name_data.push_back(breakout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Optics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rx-thresholds")
    {
        if(rx_thresholds == nullptr)
        {
            rx_thresholds = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Optics::RxThresholds>();
        }
        return rx_thresholds;
    }

    if(child_yang_name == "optics-network-srlgs")
    {
        if(optics_network_srlgs == nullptr)
        {
            optics_network_srlgs = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsNetworkSrlgs>();
        }
        return optics_network_srlgs;
    }

    if(child_yang_name == "optics-dwdm-carrier")
    {
        if(optics_dwdm_carrier == nullptr)
        {
            optics_dwdm_carrier = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsDwdmCarrier>();
        }
        return optics_dwdm_carrier;
    }

    if(child_yang_name == "optics-lanes")
    {
        if(optics_lanes == nullptr)
        {
            optics_lanes = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsLanes>();
        }
        return optics_lanes;
    }

    if(child_yang_name == "tx-thresholds")
    {
        if(tx_thresholds == nullptr)
        {
            tx_thresholds = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Optics::TxThresholds>();
        }
        return tx_thresholds;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Optics::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rx_thresholds != nullptr)
    {
        _children["rx-thresholds"] = rx_thresholds;
    }

    if(optics_network_srlgs != nullptr)
    {
        _children["optics-network-srlgs"] = optics_network_srlgs;
    }

    if(optics_dwdm_carrier != nullptr)
    {
        _children["optics-dwdm-carrier"] = optics_dwdm_carrier;
    }

    if(optics_lanes != nullptr)
    {
        _children["optics-lanes"] = optics_lanes;
    }

    if(tx_thresholds != nullptr)
    {
        _children["tx-thresholds"] = tx_thresholds;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Optics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "optics-transmit-power")
    {
        optics_transmit_power = value;
        optics_transmit_power.value_namespace = name_space;
        optics_transmit_power.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "optics-ots-channel-power-max-delta")
    {
        optics_ots_channel_power_max_delta = value;
        optics_ots_channel_power_max_delta.value_namespace = name_space;
        optics_ots_channel_power_max_delta.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "optics-loopback")
    {
        optics_loopback = value;
        optics_loopback.value_namespace = name_space;
        optics_loopback.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "optics-ots-osri")
    {
        optics_ots_osri = value;
        optics_ots_osri.value_namespace = name_space;
        optics_ots_osri.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "optics-ots-amplifier-gain-degrade-high-threshold")
    {
        optics_ots_amplifier_gain_degrade_high_threshold = value;
        optics_ots_amplifier_gain_degrade_high_threshold.value_namespace = name_space;
        optics_ots_amplifier_gain_degrade_high_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "optics-ots-rx-voa-attenuation")
    {
        optics_ots_rx_voa_attenuation = value;
        optics_ots_rx_voa_attenuation.value_namespace = name_space;
        optics_ots_rx_voa_attenuation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "optics-fec")
    {
        optics_fec = value;
        optics_fec.value_namespace = name_space;
        optics_fec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "optics-dgd-high-threshold")
    {
        optics_dgd_high_threshold = value;
        optics_dgd_high_threshold.value_namespace = name_space;
        optics_dgd_high_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "optics-ots-amplifier-channel-power")
    {
        optics_ots_amplifier_channel_power = value;
        optics_ots_amplifier_channel_power.value_namespace = name_space;
        optics_ots_amplifier_channel_power.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "optics-ots-amplifier-control-mode")
    {
        optics_ots_amplifier_control_mode = value;
        optics_ots_amplifier_control_mode.value_namespace = name_space;
        optics_ots_amplifier_control_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "optics-ots-amplifier-gain")
    {
        optics_ots_amplifier_gain = value;
        optics_ots_amplifier_gain.value_namespace = name_space;
        optics_ots_amplifier_gain.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "optics-ots-amplifier-gain-range")
    {
        optics_ots_amplifier_gain_range = value;
        optics_ots_amplifier_gain_range.value_namespace = name_space;
        optics_ots_amplifier_gain_range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "optics-ots-safety-control-mode")
    {
        optics_ots_safety_control_mode = value;
        optics_ots_safety_control_mode.value_namespace = name_space;
        optics_ots_safety_control_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "optics-cd-min")
    {
        optics_cd_min = value;
        optics_cd_min.value_namespace = name_space;
        optics_cd_min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "optics-ots-tx-voa-attenuation")
    {
        optics_ots_tx_voa_attenuation = value;
        optics_ots_tx_voa_attenuation.value_namespace = name_space;
        optics_ots_tx_voa_attenuation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "optics-ots-amplifier-tilt")
    {
        optics_ots_amplifier_tilt = value;
        optics_ots_amplifier_tilt.value_namespace = name_space;
        optics_ots_amplifier_tilt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "optics-transmit-shutdown")
    {
        optics_transmit_shutdown = value;
        optics_transmit_shutdown.value_namespace = name_space;
        optics_transmit_shutdown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "optics-baud-rate")
    {
        optics_baud_rate = value;
        optics_baud_rate.value_namespace = name_space;
        optics_baud_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "optics-performance-monitoring")
    {
        optics_performance_monitoring = value;
        optics_performance_monitoring.value_namespace = name_space;
        optics_performance_monitoring.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "optics-cd-max")
    {
        optics_cd_max = value;
        optics_cd_max.value_namespace = name_space;
        optics_cd_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "optics-bits-per-symbol")
    {
        optics_bits_per_symbol = value;
        optics_bits_per_symbol.value_namespace = name_space;
        optics_bits_per_symbol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "optics-lbc-high-threshold")
    {
        optics_lbc_high_threshold = value;
        optics_lbc_high_threshold.value_namespace = name_space;
        optics_lbc_high_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "optics-cd-high-threshold")
    {
        optics_cd_high_threshold = value;
        optics_cd_high_threshold.value_namespace = name_space;
        optics_cd_high_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "optics-osnr-low-threshold")
    {
        optics_osnr_low_threshold = value;
        optics_osnr_low_threshold.value_namespace = name_space;
        optics_osnr_low_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "optics-ots-amplifier-gain-degrade-low-threshold")
    {
        optics_ots_amplifier_gain_degrade_low_threshold = value;
        optics_ots_amplifier_gain_degrade_low_threshold.value_namespace = name_space;
        optics_ots_amplifier_gain_degrade_low_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "optics-cd-low-threshold")
    {
        optics_cd_low_threshold = value;
        optics_cd_low_threshold.value_namespace = name_space;
        optics_cd_low_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cisco-IOS-XR-optics-driver-cfg:breakout")
    {
        breakout = value;
        breakout.value_namespace = name_space;
        breakout.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Optics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "optics-transmit-power")
    {
        optics_transmit_power.yfilter = yfilter;
    }
    if(value_path == "optics-ots-channel-power-max-delta")
    {
        optics_ots_channel_power_max_delta.yfilter = yfilter;
    }
    if(value_path == "optics-loopback")
    {
        optics_loopback.yfilter = yfilter;
    }
    if(value_path == "optics-ots-osri")
    {
        optics_ots_osri.yfilter = yfilter;
    }
    if(value_path == "optics-ots-amplifier-gain-degrade-high-threshold")
    {
        optics_ots_amplifier_gain_degrade_high_threshold.yfilter = yfilter;
    }
    if(value_path == "optics-ots-rx-voa-attenuation")
    {
        optics_ots_rx_voa_attenuation.yfilter = yfilter;
    }
    if(value_path == "optics-fec")
    {
        optics_fec.yfilter = yfilter;
    }
    if(value_path == "optics-dgd-high-threshold")
    {
        optics_dgd_high_threshold.yfilter = yfilter;
    }
    if(value_path == "optics-ots-amplifier-channel-power")
    {
        optics_ots_amplifier_channel_power.yfilter = yfilter;
    }
    if(value_path == "optics-ots-amplifier-control-mode")
    {
        optics_ots_amplifier_control_mode.yfilter = yfilter;
    }
    if(value_path == "optics-ots-amplifier-gain")
    {
        optics_ots_amplifier_gain.yfilter = yfilter;
    }
    if(value_path == "optics-ots-amplifier-gain-range")
    {
        optics_ots_amplifier_gain_range.yfilter = yfilter;
    }
    if(value_path == "optics-ots-safety-control-mode")
    {
        optics_ots_safety_control_mode.yfilter = yfilter;
    }
    if(value_path == "optics-cd-min")
    {
        optics_cd_min.yfilter = yfilter;
    }
    if(value_path == "optics-ots-tx-voa-attenuation")
    {
        optics_ots_tx_voa_attenuation.yfilter = yfilter;
    }
    if(value_path == "optics-ots-amplifier-tilt")
    {
        optics_ots_amplifier_tilt.yfilter = yfilter;
    }
    if(value_path == "optics-transmit-shutdown")
    {
        optics_transmit_shutdown.yfilter = yfilter;
    }
    if(value_path == "optics-baud-rate")
    {
        optics_baud_rate.yfilter = yfilter;
    }
    if(value_path == "optics-performance-monitoring")
    {
        optics_performance_monitoring.yfilter = yfilter;
    }
    if(value_path == "optics-cd-max")
    {
        optics_cd_max.yfilter = yfilter;
    }
    if(value_path == "optics-bits-per-symbol")
    {
        optics_bits_per_symbol.yfilter = yfilter;
    }
    if(value_path == "optics-lbc-high-threshold")
    {
        optics_lbc_high_threshold.yfilter = yfilter;
    }
    if(value_path == "optics-cd-high-threshold")
    {
        optics_cd_high_threshold.yfilter = yfilter;
    }
    if(value_path == "optics-osnr-low-threshold")
    {
        optics_osnr_low_threshold.yfilter = yfilter;
    }
    if(value_path == "optics-ots-amplifier-gain-degrade-low-threshold")
    {
        optics_ots_amplifier_gain_degrade_low_threshold.yfilter = yfilter;
    }
    if(value_path == "optics-cd-low-threshold")
    {
        optics_cd_low_threshold.yfilter = yfilter;
    }
    if(value_path == "breakout")
    {
        breakout.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Optics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rx-thresholds" || name == "optics-network-srlgs" || name == "optics-dwdm-carrier" || name == "optics-lanes" || name == "tx-thresholds" || name == "optics-transmit-power" || name == "optics-ots-channel-power-max-delta" || name == "optics-loopback" || name == "optics-ots-osri" || name == "optics-ots-amplifier-gain-degrade-high-threshold" || name == "optics-ots-rx-voa-attenuation" || name == "optics-fec" || name == "optics-dgd-high-threshold" || name == "optics-ots-amplifier-channel-power" || name == "optics-ots-amplifier-control-mode" || name == "optics-ots-amplifier-gain" || name == "optics-ots-amplifier-gain-range" || name == "optics-ots-safety-control-mode" || name == "optics-cd-min" || name == "optics-ots-tx-voa-attenuation" || name == "optics-ots-amplifier-tilt" || name == "optics-transmit-shutdown" || name == "optics-baud-rate" || name == "optics-performance-monitoring" || name == "optics-cd-max" || name == "optics-bits-per-symbol" || name == "optics-lbc-high-threshold" || name == "optics-cd-high-threshold" || name == "optics-osnr-low-threshold" || name == "optics-ots-amplifier-gain-degrade-low-threshold" || name == "optics-cd-low-threshold" || name == "breakout")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Optics::RxThresholds::RxThresholds()
    :
    rx_threshold(this, {"rx_threshold_type"})
{

    yang_name = "rx-thresholds"; yang_parent_name = "optics"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Optics::RxThresholds::~RxThresholds()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Optics::RxThresholds::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rx_threshold.len(); index++)
    {
        if(rx_threshold[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::Optics::RxThresholds::has_operation() const
{
    for (std::size_t index=0; index<rx_threshold.len(); index++)
    {
        if(rx_threshold[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Optics::RxThresholds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rx-thresholds";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Optics::RxThresholds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Optics::RxThresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rx-threshold")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Optics::RxThresholds::RxThreshold>();
        ent_->parent = this;
        rx_threshold.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Optics::RxThresholds::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rx_threshold.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Optics::RxThresholds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::Optics::RxThresholds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Optics::RxThresholds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rx-threshold")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Optics::RxThresholds::RxThreshold::RxThreshold()
    :
    rx_threshold_type{YType::enumeration, "rx-threshold-type"},
    rx_threshold{YType::int32, "rx-threshold"}
{

    yang_name = "rx-threshold"; yang_parent_name = "rx-thresholds"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Optics::RxThresholds::RxThreshold::~RxThreshold()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Optics::RxThresholds::RxThreshold::has_data() const
{
    if (is_presence_container) return true;
    return rx_threshold_type.is_set
	|| rx_threshold.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Optics::RxThresholds::RxThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rx_threshold_type.yfilter)
	|| ydk::is_set(rx_threshold.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Optics::RxThresholds::RxThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rx-threshold";
    ADD_KEY_TOKEN(rx_threshold_type, "rx-threshold-type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Optics::RxThresholds::RxThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rx_threshold_type.is_set || is_set(rx_threshold_type.yfilter)) leaf_name_data.push_back(rx_threshold_type.get_name_leafdata());
    if (rx_threshold.is_set || is_set(rx_threshold.yfilter)) leaf_name_data.push_back(rx_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Optics::RxThresholds::RxThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Optics::RxThresholds::RxThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Optics::RxThresholds::RxThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rx-threshold-type")
    {
        rx_threshold_type = value;
        rx_threshold_type.value_namespace = name_space;
        rx_threshold_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-threshold")
    {
        rx_threshold = value;
        rx_threshold.value_namespace = name_space;
        rx_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Optics::RxThresholds::RxThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rx-threshold-type")
    {
        rx_threshold_type.yfilter = yfilter;
    }
    if(value_path == "rx-threshold")
    {
        rx_threshold.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Optics::RxThresholds::RxThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rx-threshold-type" || name == "rx-threshold")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsNetworkSrlgs::OpticsNetworkSrlgs()
    :
    optics_network_srlg(this, {"set_id"})
{

    yang_name = "optics-network-srlgs"; yang_parent_name = "optics"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsNetworkSrlgs::~OpticsNetworkSrlgs()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsNetworkSrlgs::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<optics_network_srlg.len(); index++)
    {
        if(optics_network_srlg[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsNetworkSrlgs::has_operation() const
{
    for (std::size_t index=0; index<optics_network_srlg.len(); index++)
    {
        if(optics_network_srlg[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsNetworkSrlgs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optics-network-srlgs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsNetworkSrlgs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsNetworkSrlgs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "optics-network-srlg")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsNetworkSrlgs::OpticsNetworkSrlg>();
        ent_->parent = this;
        optics_network_srlg.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsNetworkSrlgs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : optics_network_srlg.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsNetworkSrlgs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsNetworkSrlgs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsNetworkSrlgs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "optics-network-srlg")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsNetworkSrlgs::OpticsNetworkSrlg::OpticsNetworkSrlg()
    :
    set_id{YType::uint32, "set-id"},
    srlg1{YType::uint32, "srlg1"},
    srlg2{YType::uint32, "srlg2"},
    srlg3{YType::uint32, "srlg3"},
    srlg4{YType::uint32, "srlg4"},
    srlg5{YType::uint32, "srlg5"},
    srlg6{YType::uint32, "srlg6"}
{

    yang_name = "optics-network-srlg"; yang_parent_name = "optics-network-srlgs"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsNetworkSrlgs::OpticsNetworkSrlg::~OpticsNetworkSrlg()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsNetworkSrlgs::OpticsNetworkSrlg::has_data() const
{
    if (is_presence_container) return true;
    return set_id.is_set
	|| srlg1.is_set
	|| srlg2.is_set
	|| srlg3.is_set
	|| srlg4.is_set
	|| srlg5.is_set
	|| srlg6.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsNetworkSrlgs::OpticsNetworkSrlg::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_id.yfilter)
	|| ydk::is_set(srlg1.yfilter)
	|| ydk::is_set(srlg2.yfilter)
	|| ydk::is_set(srlg3.yfilter)
	|| ydk::is_set(srlg4.yfilter)
	|| ydk::is_set(srlg5.yfilter)
	|| ydk::is_set(srlg6.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsNetworkSrlgs::OpticsNetworkSrlg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optics-network-srlg";
    ADD_KEY_TOKEN(set_id, "set-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsNetworkSrlgs::OpticsNetworkSrlg::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_id.is_set || is_set(set_id.yfilter)) leaf_name_data.push_back(set_id.get_name_leafdata());
    if (srlg1.is_set || is_set(srlg1.yfilter)) leaf_name_data.push_back(srlg1.get_name_leafdata());
    if (srlg2.is_set || is_set(srlg2.yfilter)) leaf_name_data.push_back(srlg2.get_name_leafdata());
    if (srlg3.is_set || is_set(srlg3.yfilter)) leaf_name_data.push_back(srlg3.get_name_leafdata());
    if (srlg4.is_set || is_set(srlg4.yfilter)) leaf_name_data.push_back(srlg4.get_name_leafdata());
    if (srlg5.is_set || is_set(srlg5.yfilter)) leaf_name_data.push_back(srlg5.get_name_leafdata());
    if (srlg6.is_set || is_set(srlg6.yfilter)) leaf_name_data.push_back(srlg6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsNetworkSrlgs::OpticsNetworkSrlg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsNetworkSrlgs::OpticsNetworkSrlg::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsNetworkSrlgs::OpticsNetworkSrlg::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-id")
    {
        set_id = value;
        set_id.value_namespace = name_space;
        set_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlg1")
    {
        srlg1 = value;
        srlg1.value_namespace = name_space;
        srlg1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlg2")
    {
        srlg2 = value;
        srlg2.value_namespace = name_space;
        srlg2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlg3")
    {
        srlg3 = value;
        srlg3.value_namespace = name_space;
        srlg3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlg4")
    {
        srlg4 = value;
        srlg4.value_namespace = name_space;
        srlg4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlg5")
    {
        srlg5 = value;
        srlg5.value_namespace = name_space;
        srlg5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlg6")
    {
        srlg6 = value;
        srlg6.value_namespace = name_space;
        srlg6.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsNetworkSrlgs::OpticsNetworkSrlg::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-id")
    {
        set_id.yfilter = yfilter;
    }
    if(value_path == "srlg1")
    {
        srlg1.yfilter = yfilter;
    }
    if(value_path == "srlg2")
    {
        srlg2.yfilter = yfilter;
    }
    if(value_path == "srlg3")
    {
        srlg3.yfilter = yfilter;
    }
    if(value_path == "srlg4")
    {
        srlg4.yfilter = yfilter;
    }
    if(value_path == "srlg5")
    {
        srlg5.yfilter = yfilter;
    }
    if(value_path == "srlg6")
    {
        srlg6.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsNetworkSrlgs::OpticsNetworkSrlg::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-id" || name == "srlg1" || name == "srlg2" || name == "srlg3" || name == "srlg4" || name == "srlg5" || name == "srlg6")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsDwdmCarrier::OpticsDwdmCarrier()
    :
    grid_type{YType::enumeration, "grid-type"},
    param_type{YType::enumeration, "param-type"},
    param_value{YType::uint32, "param-value"}
{

    yang_name = "optics-dwdm-carrier"; yang_parent_name = "optics"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsDwdmCarrier::~OpticsDwdmCarrier()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsDwdmCarrier::has_data() const
{
    if (is_presence_container) return true;
    return grid_type.is_set
	|| param_type.is_set
	|| param_value.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsDwdmCarrier::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(grid_type.yfilter)
	|| ydk::is_set(param_type.yfilter)
	|| ydk::is_set(param_value.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsDwdmCarrier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optics-dwdm-carrier";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsDwdmCarrier::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (grid_type.is_set || is_set(grid_type.yfilter)) leaf_name_data.push_back(grid_type.get_name_leafdata());
    if (param_type.is_set || is_set(param_type.yfilter)) leaf_name_data.push_back(param_type.get_name_leafdata());
    if (param_value.is_set || is_set(param_value.yfilter)) leaf_name_data.push_back(param_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsDwdmCarrier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsDwdmCarrier::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsDwdmCarrier::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "grid-type")
    {
        grid_type = value;
        grid_type.value_namespace = name_space;
        grid_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "param-type")
    {
        param_type = value;
        param_type.value_namespace = name_space;
        param_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "param-value")
    {
        param_value = value;
        param_value.value_namespace = name_space;
        param_value.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsDwdmCarrier::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "grid-type")
    {
        grid_type.yfilter = yfilter;
    }
    if(value_path == "param-type")
    {
        param_type.yfilter = yfilter;
    }
    if(value_path == "param-value")
    {
        param_value.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsDwdmCarrier::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "grid-type" || name == "param-type" || name == "param-value")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsLanes::OpticsLanes()
    :
    optics_lane(this, {"index_"})
{

    yang_name = "optics-lanes"; yang_parent_name = "optics"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsLanes::~OpticsLanes()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsLanes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<optics_lane.len(); index++)
    {
        if(optics_lane[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsLanes::has_operation() const
{
    for (std::size_t index=0; index<optics_lane.len(); index++)
    {
        if(optics_lane[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsLanes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optics-lanes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsLanes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsLanes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "optics-lane")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsLanes::OpticsLane>();
        ent_->parent = this;
        optics_lane.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsLanes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : optics_lane.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsLanes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsLanes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsLanes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "optics-lane")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsLanes::OpticsLane::OpticsLane()
    :
    index_{YType::uint32, "index"},
    description{YType::str, "description"}
{

    yang_name = "optics-lane"; yang_parent_name = "optics-lanes"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsLanes::OpticsLane::~OpticsLane()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsLanes::OpticsLane::has_data() const
{
    if (is_presence_container) return true;
    return index_.is_set
	|| description.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsLanes::OpticsLane::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(description.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsLanes::OpticsLane::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optics-lane";
    ADD_KEY_TOKEN(index_, "index");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsLanes::OpticsLane::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsLanes::OpticsLane::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsLanes::OpticsLane::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsLanes::OpticsLane::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsLanes::OpticsLane::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsLanes::OpticsLane::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "index" || name == "description")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Optics::TxThresholds::TxThresholds()
    :
    tx_threshold(this, {"tx_threshold_type"})
{

    yang_name = "tx-thresholds"; yang_parent_name = "optics"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Optics::TxThresholds::~TxThresholds()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Optics::TxThresholds::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<tx_threshold.len(); index++)
    {
        if(tx_threshold[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::Optics::TxThresholds::has_operation() const
{
    for (std::size_t index=0; index<tx_threshold.len(); index++)
    {
        if(tx_threshold[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Optics::TxThresholds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx-thresholds";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Optics::TxThresholds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Optics::TxThresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tx-threshold")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Optics::TxThresholds::TxThreshold>();
        ent_->parent = this;
        tx_threshold.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Optics::TxThresholds::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : tx_threshold.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Optics::TxThresholds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::Optics::TxThresholds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Optics::TxThresholds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tx-threshold")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Optics::TxThresholds::TxThreshold::TxThreshold()
    :
    tx_threshold_type{YType::enumeration, "tx-threshold-type"},
    tx_threshold{YType::int32, "tx-threshold"}
{

    yang_name = "tx-threshold"; yang_parent_name = "tx-thresholds"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Optics::TxThresholds::TxThreshold::~TxThreshold()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Optics::TxThresholds::TxThreshold::has_data() const
{
    if (is_presence_container) return true;
    return tx_threshold_type.is_set
	|| tx_threshold.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Optics::TxThresholds::TxThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tx_threshold_type.yfilter)
	|| ydk::is_set(tx_threshold.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Optics::TxThresholds::TxThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx-threshold";
    ADD_KEY_TOKEN(tx_threshold_type, "tx-threshold-type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Optics::TxThresholds::TxThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tx_threshold_type.is_set || is_set(tx_threshold_type.yfilter)) leaf_name_data.push_back(tx_threshold_type.get_name_leafdata());
    if (tx_threshold.is_set || is_set(tx_threshold.yfilter)) leaf_name_data.push_back(tx_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Optics::TxThresholds::TxThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Optics::TxThresholds::TxThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Optics::TxThresholds::TxThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tx-threshold-type")
    {
        tx_threshold_type = value;
        tx_threshold_type.value_namespace = name_space;
        tx_threshold_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-threshold")
    {
        tx_threshold = value;
        tx_threshold.value_namespace = name_space;
        tx_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Optics::TxThresholds::TxThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tx-threshold-type")
    {
        tx_threshold_type.yfilter = yfilter;
    }
    if(value_path == "tx-threshold")
    {
        tx_threshold.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Optics::TxThresholds::TxThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tx-threshold-type" || name == "tx-threshold")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Loopbacks::Loopbacks()
    :
    loopback(this, {"level"})
{

    yang_name = "loopbacks"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Loopbacks::~Loopbacks()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Loopbacks::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<loopback.len(); index++)
    {
        if(loopback[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::Loopbacks::has_operation() const
{
    for (std::size_t index=0; index<loopback.len(); index++)
    {
        if(loopback[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Loopbacks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-drivers-icpe-ethernet-cfg:loopbacks";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Loopbacks::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Loopbacks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "loopback")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Loopbacks::Loopback>();
        ent_->parent = this;
        loopback.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Loopbacks::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : loopback.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Loopbacks::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::Loopbacks::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Loopbacks::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "loopback")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Loopbacks::Loopback::Loopback()
    :
    level{YType::uint32, "level"},
    loopback{YType::enumeration, "loopback"}
{

    yang_name = "loopback"; yang_parent_name = "loopbacks"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Loopbacks::Loopback::~Loopback()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Loopbacks::Loopback::has_data() const
{
    if (is_presence_container) return true;
    return level.is_set
	|| loopback.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Loopbacks::Loopback::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(loopback.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Loopbacks::Loopback::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "loopback";
    ADD_KEY_TOKEN(level, "level");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Loopbacks::Loopback::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (loopback.is_set || is_set(loopback.yfilter)) leaf_name_data.push_back(loopback.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Loopbacks::Loopback::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Loopbacks::Loopback::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Loopbacks::Loopback::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "loopback")
    {
        loopback = value;
        loopback.value_namespace = name_space;
        loopback.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Loopbacks::Loopback::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "loopback")
    {
        loopback.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Loopbacks::Loopback::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level" || name == "loopback")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ptp::Ptp()
    :
    sync_grant_duration{YType::uint32, "sync-grant-duration"},
    general_cos{YType::uint32, "general-cos"},
    enable{YType::empty, "enable"},
    sync_timeout{YType::uint32, "sync-timeout"},
    transport{YType::enumeration, "transport"},
    profile{YType::str, "profile"},
    announce_timeout{YType::uint32, "announce-timeout"},
    cos{YType::uint32, "cos"},
    ipv4ttl{YType::uint32, "ipv4ttl"},
    port_state{YType::enumeration, "port-state"},
    delay_response_timeout{YType::uint32, "delay-response-timeout"},
    local_priority{YType::uint32, "local-priority"},
    delay_response_grant_duration{YType::uint32, "delay-response-grant-duration"},
    event_cos{YType::uint32, "event-cos"},
    dscp{YType::uint32, "dscp"},
    ipv6_hop_limit{YType::uint32, "ipv6-hop-limit"},
    general_dscp{YType::uint32, "general-dscp"},
    clock_operation{YType::enumeration, "clock-operation"},
    announce_grant_duration{YType::uint32, "announce-grant-duration"},
    unicast_grant_invalid_request{YType::enumeration, "unicast-grant-invalid-request"},
    event_dscp{YType::uint32, "event-dscp"}
        ,
    source_ipv6_address(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ptp::SourceIpv6Address>())
    , announce_interval(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ptp::AnnounceInterval>())
    , interop(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop>())
    , source_ipv4_address(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ptp::SourceIpv4Address>())
    , slaves(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ptp::Slaves>())
    , sync_interval(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ptp::SyncInterval>())
    , masters(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters>())
    , communication(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ptp::Communication>())
    , delay_request_minimum_interval(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ptp::DelayRequestMinimumInterval>())
{
    source_ipv6_address->parent = this;
    announce_interval->parent = this;
    interop->parent = this;
    source_ipv4_address->parent = this;
    slaves->parent = this;
    sync_interval->parent = this;
    masters->parent = this;
    communication->parent = this;
    delay_request_minimum_interval->parent = this;

    yang_name = "ptp"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Ptp::~Ptp()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ptp::has_data() const
{
    if (is_presence_container) return true;
    return sync_grant_duration.is_set
	|| general_cos.is_set
	|| enable.is_set
	|| sync_timeout.is_set
	|| transport.is_set
	|| profile.is_set
	|| announce_timeout.is_set
	|| cos.is_set
	|| ipv4ttl.is_set
	|| port_state.is_set
	|| delay_response_timeout.is_set
	|| local_priority.is_set
	|| delay_response_grant_duration.is_set
	|| event_cos.is_set
	|| dscp.is_set
	|| ipv6_hop_limit.is_set
	|| general_dscp.is_set
	|| clock_operation.is_set
	|| announce_grant_duration.is_set
	|| unicast_grant_invalid_request.is_set
	|| event_dscp.is_set
	|| (source_ipv6_address !=  nullptr && source_ipv6_address->has_data())
	|| (announce_interval !=  nullptr && announce_interval->has_data())
	|| (interop !=  nullptr && interop->has_data())
	|| (source_ipv4_address !=  nullptr && source_ipv4_address->has_data())
	|| (slaves !=  nullptr && slaves->has_data())
	|| (sync_interval !=  nullptr && sync_interval->has_data())
	|| (masters !=  nullptr && masters->has_data())
	|| (communication !=  nullptr && communication->has_data())
	|| (delay_request_minimum_interval !=  nullptr && delay_request_minimum_interval->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Ptp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sync_grant_duration.yfilter)
	|| ydk::is_set(general_cos.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(sync_timeout.yfilter)
	|| ydk::is_set(transport.yfilter)
	|| ydk::is_set(profile.yfilter)
	|| ydk::is_set(announce_timeout.yfilter)
	|| ydk::is_set(cos.yfilter)
	|| ydk::is_set(ipv4ttl.yfilter)
	|| ydk::is_set(port_state.yfilter)
	|| ydk::is_set(delay_response_timeout.yfilter)
	|| ydk::is_set(local_priority.yfilter)
	|| ydk::is_set(delay_response_grant_duration.yfilter)
	|| ydk::is_set(event_cos.yfilter)
	|| ydk::is_set(dscp.yfilter)
	|| ydk::is_set(ipv6_hop_limit.yfilter)
	|| ydk::is_set(general_dscp.yfilter)
	|| ydk::is_set(clock_operation.yfilter)
	|| ydk::is_set(announce_grant_duration.yfilter)
	|| ydk::is_set(unicast_grant_invalid_request.yfilter)
	|| ydk::is_set(event_dscp.yfilter)
	|| (source_ipv6_address !=  nullptr && source_ipv6_address->has_operation())
	|| (announce_interval !=  nullptr && announce_interval->has_operation())
	|| (interop !=  nullptr && interop->has_operation())
	|| (source_ipv4_address !=  nullptr && source_ipv4_address->has_operation())
	|| (slaves !=  nullptr && slaves->has_operation())
	|| (sync_interval !=  nullptr && sync_interval->has_operation())
	|| (masters !=  nullptr && masters->has_operation())
	|| (communication !=  nullptr && communication->has_operation())
	|| (delay_request_minimum_interval !=  nullptr && delay_request_minimum_interval->has_operation());
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

    if (sync_grant_duration.is_set || is_set(sync_grant_duration.yfilter)) leaf_name_data.push_back(sync_grant_duration.get_name_leafdata());
    if (general_cos.is_set || is_set(general_cos.yfilter)) leaf_name_data.push_back(general_cos.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (sync_timeout.is_set || is_set(sync_timeout.yfilter)) leaf_name_data.push_back(sync_timeout.get_name_leafdata());
    if (transport.is_set || is_set(transport.yfilter)) leaf_name_data.push_back(transport.get_name_leafdata());
    if (profile.is_set || is_set(profile.yfilter)) leaf_name_data.push_back(profile.get_name_leafdata());
    if (announce_timeout.is_set || is_set(announce_timeout.yfilter)) leaf_name_data.push_back(announce_timeout.get_name_leafdata());
    if (cos.is_set || is_set(cos.yfilter)) leaf_name_data.push_back(cos.get_name_leafdata());
    if (ipv4ttl.is_set || is_set(ipv4ttl.yfilter)) leaf_name_data.push_back(ipv4ttl.get_name_leafdata());
    if (port_state.is_set || is_set(port_state.yfilter)) leaf_name_data.push_back(port_state.get_name_leafdata());
    if (delay_response_timeout.is_set || is_set(delay_response_timeout.yfilter)) leaf_name_data.push_back(delay_response_timeout.get_name_leafdata());
    if (local_priority.is_set || is_set(local_priority.yfilter)) leaf_name_data.push_back(local_priority.get_name_leafdata());
    if (delay_response_grant_duration.is_set || is_set(delay_response_grant_duration.yfilter)) leaf_name_data.push_back(delay_response_grant_duration.get_name_leafdata());
    if (event_cos.is_set || is_set(event_cos.yfilter)) leaf_name_data.push_back(event_cos.get_name_leafdata());
    if (dscp.is_set || is_set(dscp.yfilter)) leaf_name_data.push_back(dscp.get_name_leafdata());
    if (ipv6_hop_limit.is_set || is_set(ipv6_hop_limit.yfilter)) leaf_name_data.push_back(ipv6_hop_limit.get_name_leafdata());
    if (general_dscp.is_set || is_set(general_dscp.yfilter)) leaf_name_data.push_back(general_dscp.get_name_leafdata());
    if (clock_operation.is_set || is_set(clock_operation.yfilter)) leaf_name_data.push_back(clock_operation.get_name_leafdata());
    if (announce_grant_duration.is_set || is_set(announce_grant_duration.yfilter)) leaf_name_data.push_back(announce_grant_duration.get_name_leafdata());
    if (unicast_grant_invalid_request.is_set || is_set(unicast_grant_invalid_request.yfilter)) leaf_name_data.push_back(unicast_grant_invalid_request.get_name_leafdata());
    if (event_dscp.is_set || is_set(event_dscp.yfilter)) leaf_name_data.push_back(event_dscp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Ptp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source-ipv6-address")
    {
        if(source_ipv6_address == nullptr)
        {
            source_ipv6_address = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ptp::SourceIpv6Address>();
        }
        return source_ipv6_address;
    }

    if(child_yang_name == "announce-interval")
    {
        if(announce_interval == nullptr)
        {
            announce_interval = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ptp::AnnounceInterval>();
        }
        return announce_interval;
    }

    if(child_yang_name == "interop")
    {
        if(interop == nullptr)
        {
            interop = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop>();
        }
        return interop;
    }

    if(child_yang_name == "source-ipv4-address")
    {
        if(source_ipv4_address == nullptr)
        {
            source_ipv4_address = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ptp::SourceIpv4Address>();
        }
        return source_ipv4_address;
    }

    if(child_yang_name == "slaves")
    {
        if(slaves == nullptr)
        {
            slaves = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ptp::Slaves>();
        }
        return slaves;
    }

    if(child_yang_name == "sync-interval")
    {
        if(sync_interval == nullptr)
        {
            sync_interval = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ptp::SyncInterval>();
        }
        return sync_interval;
    }

    if(child_yang_name == "masters")
    {
        if(masters == nullptr)
        {
            masters = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters>();
        }
        return masters;
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

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Ptp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(source_ipv6_address != nullptr)
    {
        _children["source-ipv6-address"] = source_ipv6_address;
    }

    if(announce_interval != nullptr)
    {
        _children["announce-interval"] = announce_interval;
    }

    if(interop != nullptr)
    {
        _children["interop"] = interop;
    }

    if(source_ipv4_address != nullptr)
    {
        _children["source-ipv4-address"] = source_ipv4_address;
    }

    if(slaves != nullptr)
    {
        _children["slaves"] = slaves;
    }

    if(sync_interval != nullptr)
    {
        _children["sync-interval"] = sync_interval;
    }

    if(masters != nullptr)
    {
        _children["masters"] = masters;
    }

    if(communication != nullptr)
    {
        _children["communication"] = communication;
    }

    if(delay_request_minimum_interval != nullptr)
    {
        _children["delay-request-minimum-interval"] = delay_request_minimum_interval;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ptp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sync-grant-duration")
    {
        sync_grant_duration = value;
        sync_grant_duration.value_namespace = name_space;
        sync_grant_duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "general-cos")
    {
        general_cos = value;
        general_cos.value_namespace = name_space;
        general_cos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "profile")
    {
        profile = value;
        profile.value_namespace = name_space;
        profile.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "announce-timeout")
    {
        announce_timeout = value;
        announce_timeout.value_namespace = name_space;
        announce_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cos")
    {
        cos = value;
        cos.value_namespace = name_space;
        cos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4ttl")
    {
        ipv4ttl = value;
        ipv4ttl.value_namespace = name_space;
        ipv4ttl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-state")
    {
        port_state = value;
        port_state.value_namespace = name_space;
        port_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delay-response-timeout")
    {
        delay_response_timeout = value;
        delay_response_timeout.value_namespace = name_space;
        delay_response_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-priority")
    {
        local_priority = value;
        local_priority.value_namespace = name_space;
        local_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delay-response-grant-duration")
    {
        delay_response_grant_duration = value;
        delay_response_grant_duration.value_namespace = name_space;
        delay_response_grant_duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "event-cos")
    {
        event_cos = value;
        event_cos.value_namespace = name_space;
        event_cos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dscp")
    {
        dscp = value;
        dscp.value_namespace = name_space;
        dscp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-hop-limit")
    {
        ipv6_hop_limit = value;
        ipv6_hop_limit.value_namespace = name_space;
        ipv6_hop_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "general-dscp")
    {
        general_dscp = value;
        general_dscp.value_namespace = name_space;
        general_dscp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clock-operation")
    {
        clock_operation = value;
        clock_operation.value_namespace = name_space;
        clock_operation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "announce-grant-duration")
    {
        announce_grant_duration = value;
        announce_grant_duration.value_namespace = name_space;
        announce_grant_duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unicast-grant-invalid-request")
    {
        unicast_grant_invalid_request = value;
        unicast_grant_invalid_request.value_namespace = name_space;
        unicast_grant_invalid_request.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "event-dscp")
    {
        event_dscp = value;
        event_dscp.value_namespace = name_space;
        event_dscp.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Ptp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sync-grant-duration")
    {
        sync_grant_duration.yfilter = yfilter;
    }
    if(value_path == "general-cos")
    {
        general_cos.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "sync-timeout")
    {
        sync_timeout.yfilter = yfilter;
    }
    if(value_path == "transport")
    {
        transport.yfilter = yfilter;
    }
    if(value_path == "profile")
    {
        profile.yfilter = yfilter;
    }
    if(value_path == "announce-timeout")
    {
        announce_timeout.yfilter = yfilter;
    }
    if(value_path == "cos")
    {
        cos.yfilter = yfilter;
    }
    if(value_path == "ipv4ttl")
    {
        ipv4ttl.yfilter = yfilter;
    }
    if(value_path == "port-state")
    {
        port_state.yfilter = yfilter;
    }
    if(value_path == "delay-response-timeout")
    {
        delay_response_timeout.yfilter = yfilter;
    }
    if(value_path == "local-priority")
    {
        local_priority.yfilter = yfilter;
    }
    if(value_path == "delay-response-grant-duration")
    {
        delay_response_grant_duration.yfilter = yfilter;
    }
    if(value_path == "event-cos")
    {
        event_cos.yfilter = yfilter;
    }
    if(value_path == "dscp")
    {
        dscp.yfilter = yfilter;
    }
    if(value_path == "ipv6-hop-limit")
    {
        ipv6_hop_limit.yfilter = yfilter;
    }
    if(value_path == "general-dscp")
    {
        general_dscp.yfilter = yfilter;
    }
    if(value_path == "clock-operation")
    {
        clock_operation.yfilter = yfilter;
    }
    if(value_path == "announce-grant-duration")
    {
        announce_grant_duration.yfilter = yfilter;
    }
    if(value_path == "unicast-grant-invalid-request")
    {
        unicast_grant_invalid_request.yfilter = yfilter;
    }
    if(value_path == "event-dscp")
    {
        event_dscp.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Ptp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-ipv6-address" || name == "announce-interval" || name == "interop" || name == "source-ipv4-address" || name == "slaves" || name == "sync-interval" || name == "masters" || name == "communication" || name == "delay-request-minimum-interval" || name == "sync-grant-duration" || name == "general-cos" || name == "enable" || name == "sync-timeout" || name == "transport" || name == "profile" || name == "announce-timeout" || name == "cos" || name == "ipv4ttl" || name == "port-state" || name == "delay-response-timeout" || name == "local-priority" || name == "delay-response-grant-duration" || name == "event-cos" || name == "dscp" || name == "ipv6-hop-limit" || name == "general-dscp" || name == "clock-operation" || name == "announce-grant-duration" || name == "unicast-grant-invalid-request" || name == "event-dscp")
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Ptp::SourceIpv6Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Ptp::SourceIpv6Address::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

InterfaceConfigurations::InterfaceConfiguration::Ptp::AnnounceInterval::AnnounceInterval()
    :
    time_type{YType::enumeration, "time-type"},
    time_period{YType::enumeration, "time-period"}
{

    yang_name = "announce-interval"; yang_parent_name = "ptp"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Ptp::AnnounceInterval::~AnnounceInterval()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ptp::AnnounceInterval::has_data() const
{
    if (is_presence_container) return true;
    return time_type.is_set
	|| time_period.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ptp::AnnounceInterval::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(time_type.yfilter)
	|| ydk::is_set(time_period.yfilter);
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

    if (time_type.is_set || is_set(time_type.yfilter)) leaf_name_data.push_back(time_type.get_name_leafdata());
    if (time_period.is_set || is_set(time_period.yfilter)) leaf_name_data.push_back(time_period.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Ptp::AnnounceInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Ptp::AnnounceInterval::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ptp::AnnounceInterval::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time-type")
    {
        time_type = value;
        time_type.value_namespace = name_space;
        time_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-period")
    {
        time_period = value;
        time_period.value_namespace = name_space;
        time_period.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Ptp::AnnounceInterval::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time-type")
    {
        time_type.yfilter = yfilter;
    }
    if(value_path == "time-period")
    {
        time_period.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Ptp::AnnounceInterval::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time-type" || name == "time-period")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::Interop()
    :
    profile{YType::enumeration, "profile"},
    domain{YType::uint32, "domain"}
        ,
    egress_conversion(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::EgressConversion>())
    , ingress_conversion(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::IngressConversion>())
{
    egress_conversion->parent = this;
    ingress_conversion->parent = this;

    yang_name = "interop"; yang_parent_name = "ptp"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::~Interop()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::has_data() const
{
    if (is_presence_container) return true;
    return profile.is_set
	|| domain.is_set
	|| (egress_conversion !=  nullptr && egress_conversion->has_data())
	|| (ingress_conversion !=  nullptr && ingress_conversion->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(profile.yfilter)
	|| ydk::is_set(domain.yfilter)
	|| (egress_conversion !=  nullptr && egress_conversion->has_operation())
	|| (ingress_conversion !=  nullptr && ingress_conversion->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (profile.is_set || is_set(profile.yfilter)) leaf_name_data.push_back(profile.get_name_leafdata());
    if (domain.is_set || is_set(domain.yfilter)) leaf_name_data.push_back(domain.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "egress-conversion")
    {
        if(egress_conversion == nullptr)
        {
            egress_conversion = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::EgressConversion>();
        }
        return egress_conversion;
    }

    if(child_yang_name == "ingress-conversion")
    {
        if(ingress_conversion == nullptr)
        {
            ingress_conversion = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::IngressConversion>();
        }
        return ingress_conversion;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(egress_conversion != nullptr)
    {
        _children["egress-conversion"] = egress_conversion;
    }

    if(ingress_conversion != nullptr)
    {
        _children["ingress-conversion"] = ingress_conversion;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "profile")
    {
        profile = value;
        profile.value_namespace = name_space;
        profile.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "domain")
    {
        domain = value;
        domain.value_namespace = name_space;
        domain.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "profile")
    {
        profile.yfilter = yfilter;
    }
    if(value_path == "domain")
    {
        domain.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "egress-conversion" || name == "ingress-conversion" || name == "profile" || name == "domain")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::EgressConversion::EgressConversion()
    :
    clock_accuracy{YType::uint32, "clock-accuracy"},
    priority2{YType::uint32, "priority2"},
    clock_class_default{YType::uint32, "clock-class-default"},
    offset_scaled_log_variance{YType::uint32, "offset-scaled-log-variance"},
    priority1{YType::uint32, "priority1"}
        ,
    clock_class_mappings(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::EgressConversion::ClockClassMappings>())
{
    clock_class_mappings->parent = this;

    yang_name = "egress-conversion"; yang_parent_name = "interop"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::EgressConversion::~EgressConversion()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::EgressConversion::has_data() const
{
    if (is_presence_container) return true;
    return clock_accuracy.is_set
	|| priority2.is_set
	|| clock_class_default.is_set
	|| offset_scaled_log_variance.is_set
	|| priority1.is_set
	|| (clock_class_mappings !=  nullptr && clock_class_mappings->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::EgressConversion::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(clock_accuracy.yfilter)
	|| ydk::is_set(priority2.yfilter)
	|| ydk::is_set(clock_class_default.yfilter)
	|| ydk::is_set(offset_scaled_log_variance.yfilter)
	|| ydk::is_set(priority1.yfilter)
	|| (clock_class_mappings !=  nullptr && clock_class_mappings->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::EgressConversion::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "egress-conversion";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::EgressConversion::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (clock_accuracy.is_set || is_set(clock_accuracy.yfilter)) leaf_name_data.push_back(clock_accuracy.get_name_leafdata());
    if (priority2.is_set || is_set(priority2.yfilter)) leaf_name_data.push_back(priority2.get_name_leafdata());
    if (clock_class_default.is_set || is_set(clock_class_default.yfilter)) leaf_name_data.push_back(clock_class_default.get_name_leafdata());
    if (offset_scaled_log_variance.is_set || is_set(offset_scaled_log_variance.yfilter)) leaf_name_data.push_back(offset_scaled_log_variance.get_name_leafdata());
    if (priority1.is_set || is_set(priority1.yfilter)) leaf_name_data.push_back(priority1.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::EgressConversion::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "clock-class-mappings")
    {
        if(clock_class_mappings == nullptr)
        {
            clock_class_mappings = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::EgressConversion::ClockClassMappings>();
        }
        return clock_class_mappings;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::EgressConversion::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(clock_class_mappings != nullptr)
    {
        _children["clock-class-mappings"] = clock_class_mappings;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::EgressConversion::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "clock-accuracy")
    {
        clock_accuracy = value;
        clock_accuracy.value_namespace = name_space;
        clock_accuracy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority2")
    {
        priority2 = value;
        priority2.value_namespace = name_space;
        priority2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clock-class-default")
    {
        clock_class_default = value;
        clock_class_default.value_namespace = name_space;
        clock_class_default.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "offset-scaled-log-variance")
    {
        offset_scaled_log_variance = value;
        offset_scaled_log_variance.value_namespace = name_space;
        offset_scaled_log_variance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority1")
    {
        priority1 = value;
        priority1.value_namespace = name_space;
        priority1.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::EgressConversion::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "clock-accuracy")
    {
        clock_accuracy.yfilter = yfilter;
    }
    if(value_path == "priority2")
    {
        priority2.yfilter = yfilter;
    }
    if(value_path == "clock-class-default")
    {
        clock_class_default.yfilter = yfilter;
    }
    if(value_path == "offset-scaled-log-variance")
    {
        offset_scaled_log_variance.yfilter = yfilter;
    }
    if(value_path == "priority1")
    {
        priority1.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::EgressConversion::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clock-class-mappings" || name == "clock-accuracy" || name == "priority2" || name == "clock-class-default" || name == "offset-scaled-log-variance" || name == "priority1")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::EgressConversion::ClockClassMappings::ClockClassMappings()
    :
    clock_class_mapping(this, {"clock_class_from"})
{

    yang_name = "clock-class-mappings"; yang_parent_name = "egress-conversion"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::EgressConversion::ClockClassMappings::~ClockClassMappings()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::EgressConversion::ClockClassMappings::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<clock_class_mapping.len(); index++)
    {
        if(clock_class_mapping[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::EgressConversion::ClockClassMappings::has_operation() const
{
    for (std::size_t index=0; index<clock_class_mapping.len(); index++)
    {
        if(clock_class_mapping[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::EgressConversion::ClockClassMappings::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clock-class-mappings";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::EgressConversion::ClockClassMappings::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::EgressConversion::ClockClassMappings::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "clock-class-mapping")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::EgressConversion::ClockClassMappings::ClockClassMapping>();
        ent_->parent = this;
        clock_class_mapping.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::EgressConversion::ClockClassMappings::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : clock_class_mapping.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::EgressConversion::ClockClassMappings::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::EgressConversion::ClockClassMappings::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::EgressConversion::ClockClassMappings::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clock-class-mapping")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::EgressConversion::ClockClassMappings::ClockClassMapping::ClockClassMapping()
    :
    clock_class_from{YType::uint32, "clock-class-from"},
    clock_class_to{YType::uint32, "clock-class-to"}
{

    yang_name = "clock-class-mapping"; yang_parent_name = "clock-class-mappings"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::EgressConversion::ClockClassMappings::ClockClassMapping::~ClockClassMapping()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::EgressConversion::ClockClassMappings::ClockClassMapping::has_data() const
{
    if (is_presence_container) return true;
    return clock_class_from.is_set
	|| clock_class_to.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::EgressConversion::ClockClassMappings::ClockClassMapping::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(clock_class_from.yfilter)
	|| ydk::is_set(clock_class_to.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::EgressConversion::ClockClassMappings::ClockClassMapping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clock-class-mapping";
    ADD_KEY_TOKEN(clock_class_from, "clock-class-from");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::EgressConversion::ClockClassMappings::ClockClassMapping::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (clock_class_from.is_set || is_set(clock_class_from.yfilter)) leaf_name_data.push_back(clock_class_from.get_name_leafdata());
    if (clock_class_to.is_set || is_set(clock_class_to.yfilter)) leaf_name_data.push_back(clock_class_to.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::EgressConversion::ClockClassMappings::ClockClassMapping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::EgressConversion::ClockClassMappings::ClockClassMapping::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::EgressConversion::ClockClassMappings::ClockClassMapping::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "clock-class-from")
    {
        clock_class_from = value;
        clock_class_from.value_namespace = name_space;
        clock_class_from.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clock-class-to")
    {
        clock_class_to = value;
        clock_class_to.value_namespace = name_space;
        clock_class_to.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::EgressConversion::ClockClassMappings::ClockClassMapping::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "clock-class-from")
    {
        clock_class_from.yfilter = yfilter;
    }
    if(value_path == "clock-class-to")
    {
        clock_class_to.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::EgressConversion::ClockClassMappings::ClockClassMapping::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clock-class-from" || name == "clock-class-to")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::IngressConversion::IngressConversion()
    :
    clock_accuracy{YType::uint32, "clock-accuracy"},
    priority2{YType::uint32, "priority2"},
    clock_class_default{YType::uint32, "clock-class-default"},
    offset_scaled_log_variance{YType::uint32, "offset-scaled-log-variance"},
    priority1{YType::uint32, "priority1"}
        ,
    clock_class_mappings(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::IngressConversion::ClockClassMappings>())
{
    clock_class_mappings->parent = this;

    yang_name = "ingress-conversion"; yang_parent_name = "interop"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::IngressConversion::~IngressConversion()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::IngressConversion::has_data() const
{
    if (is_presence_container) return true;
    return clock_accuracy.is_set
	|| priority2.is_set
	|| clock_class_default.is_set
	|| offset_scaled_log_variance.is_set
	|| priority1.is_set
	|| (clock_class_mappings !=  nullptr && clock_class_mappings->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::IngressConversion::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(clock_accuracy.yfilter)
	|| ydk::is_set(priority2.yfilter)
	|| ydk::is_set(clock_class_default.yfilter)
	|| ydk::is_set(offset_scaled_log_variance.yfilter)
	|| ydk::is_set(priority1.yfilter)
	|| (clock_class_mappings !=  nullptr && clock_class_mappings->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::IngressConversion::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ingress-conversion";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::IngressConversion::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (clock_accuracy.is_set || is_set(clock_accuracy.yfilter)) leaf_name_data.push_back(clock_accuracy.get_name_leafdata());
    if (priority2.is_set || is_set(priority2.yfilter)) leaf_name_data.push_back(priority2.get_name_leafdata());
    if (clock_class_default.is_set || is_set(clock_class_default.yfilter)) leaf_name_data.push_back(clock_class_default.get_name_leafdata());
    if (offset_scaled_log_variance.is_set || is_set(offset_scaled_log_variance.yfilter)) leaf_name_data.push_back(offset_scaled_log_variance.get_name_leafdata());
    if (priority1.is_set || is_set(priority1.yfilter)) leaf_name_data.push_back(priority1.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::IngressConversion::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "clock-class-mappings")
    {
        if(clock_class_mappings == nullptr)
        {
            clock_class_mappings = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::IngressConversion::ClockClassMappings>();
        }
        return clock_class_mappings;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::IngressConversion::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(clock_class_mappings != nullptr)
    {
        _children["clock-class-mappings"] = clock_class_mappings;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::IngressConversion::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "clock-accuracy")
    {
        clock_accuracy = value;
        clock_accuracy.value_namespace = name_space;
        clock_accuracy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority2")
    {
        priority2 = value;
        priority2.value_namespace = name_space;
        priority2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clock-class-default")
    {
        clock_class_default = value;
        clock_class_default.value_namespace = name_space;
        clock_class_default.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "offset-scaled-log-variance")
    {
        offset_scaled_log_variance = value;
        offset_scaled_log_variance.value_namespace = name_space;
        offset_scaled_log_variance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority1")
    {
        priority1 = value;
        priority1.value_namespace = name_space;
        priority1.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::IngressConversion::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "clock-accuracy")
    {
        clock_accuracy.yfilter = yfilter;
    }
    if(value_path == "priority2")
    {
        priority2.yfilter = yfilter;
    }
    if(value_path == "clock-class-default")
    {
        clock_class_default.yfilter = yfilter;
    }
    if(value_path == "offset-scaled-log-variance")
    {
        offset_scaled_log_variance.yfilter = yfilter;
    }
    if(value_path == "priority1")
    {
        priority1.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::IngressConversion::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clock-class-mappings" || name == "clock-accuracy" || name == "priority2" || name == "clock-class-default" || name == "offset-scaled-log-variance" || name == "priority1")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::IngressConversion::ClockClassMappings::ClockClassMappings()
    :
    clock_class_mapping(this, {"clock_class_from"})
{

    yang_name = "clock-class-mappings"; yang_parent_name = "ingress-conversion"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::IngressConversion::ClockClassMappings::~ClockClassMappings()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::IngressConversion::ClockClassMappings::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<clock_class_mapping.len(); index++)
    {
        if(clock_class_mapping[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::IngressConversion::ClockClassMappings::has_operation() const
{
    for (std::size_t index=0; index<clock_class_mapping.len(); index++)
    {
        if(clock_class_mapping[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::IngressConversion::ClockClassMappings::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clock-class-mappings";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::IngressConversion::ClockClassMappings::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::IngressConversion::ClockClassMappings::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "clock-class-mapping")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::IngressConversion::ClockClassMappings::ClockClassMapping>();
        ent_->parent = this;
        clock_class_mapping.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::IngressConversion::ClockClassMappings::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : clock_class_mapping.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::IngressConversion::ClockClassMappings::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::IngressConversion::ClockClassMappings::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::IngressConversion::ClockClassMappings::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clock-class-mapping")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::IngressConversion::ClockClassMappings::ClockClassMapping::ClockClassMapping()
    :
    clock_class_from{YType::uint32, "clock-class-from"},
    clock_class_to{YType::uint32, "clock-class-to"}
{

    yang_name = "clock-class-mapping"; yang_parent_name = "clock-class-mappings"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::IngressConversion::ClockClassMappings::ClockClassMapping::~ClockClassMapping()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::IngressConversion::ClockClassMappings::ClockClassMapping::has_data() const
{
    if (is_presence_container) return true;
    return clock_class_from.is_set
	|| clock_class_to.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::IngressConversion::ClockClassMappings::ClockClassMapping::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(clock_class_from.yfilter)
	|| ydk::is_set(clock_class_to.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::IngressConversion::ClockClassMappings::ClockClassMapping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clock-class-mapping";
    ADD_KEY_TOKEN(clock_class_from, "clock-class-from");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::IngressConversion::ClockClassMappings::ClockClassMapping::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (clock_class_from.is_set || is_set(clock_class_from.yfilter)) leaf_name_data.push_back(clock_class_from.get_name_leafdata());
    if (clock_class_to.is_set || is_set(clock_class_to.yfilter)) leaf_name_data.push_back(clock_class_to.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::IngressConversion::ClockClassMappings::ClockClassMapping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::IngressConversion::ClockClassMappings::ClockClassMapping::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::IngressConversion::ClockClassMappings::ClockClassMapping::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "clock-class-from")
    {
        clock_class_from = value;
        clock_class_from.value_namespace = name_space;
        clock_class_from.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clock-class-to")
    {
        clock_class_to = value;
        clock_class_to.value_namespace = name_space;
        clock_class_to.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::IngressConversion::ClockClassMappings::ClockClassMapping::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "clock-class-from")
    {
        clock_class_from.yfilter = yfilter;
    }
    if(value_path == "clock-class-to")
    {
        clock_class_to.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::IngressConversion::ClockClassMappings::ClockClassMapping::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clock-class-from" || name == "clock-class-to")
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Ptp::SourceIpv4Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Ptp::SourceIpv4Address::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

InterfaceConfigurations::InterfaceConfiguration::Ptp::Slaves::Slaves()
    :
    slave(this, {"transport"})
{

    yang_name = "slaves"; yang_parent_name = "ptp"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Ptp::Slaves::~Slaves()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ptp::Slaves::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<slave.len(); index++)
    {
        if(slave[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ptp::Slaves::has_operation() const
{
    for (std::size_t index=0; index<slave.len(); index++)
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Ptp::Slaves::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "slave")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ptp::Slaves::Slave>();
        ent_->parent = this;
        slave.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Ptp::Slaves::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : slave.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
        ,
    ethernet(this, {"slave_mac_address"})
    , ipv4_or_ipv6(this, {"slave_ip_address"})
{

    yang_name = "slave"; yang_parent_name = "slaves"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Ptp::Slaves::Slave::~Slave()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ptp::Slaves::Slave::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ethernet.len(); index++)
    {
        if(ethernet[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ipv4_or_ipv6.len(); index++)
    {
        if(ipv4_or_ipv6[index]->has_data())
            return true;
    }
    return transport.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ptp::Slaves::Slave::has_operation() const
{
    for (std::size_t index=0; index<ethernet.len(); index++)
    {
        if(ethernet[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ipv4_or_ipv6.len(); index++)
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
    path_buffer << "slave";
    ADD_KEY_TOKEN(transport, "transport");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ptp::Slaves::Slave::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (transport.is_set || is_set(transport.yfilter)) leaf_name_data.push_back(transport.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Ptp::Slaves::Slave::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ethernet")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ptp::Slaves::Slave::Ethernet>();
        ent_->parent = this;
        ethernet.append(ent_);
        return ent_;
    }

    if(child_yang_name == "ipv4-or-ipv6")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ptp::Slaves::Slave::Ipv4OrIpv6>();
        ent_->parent = this;
        ipv4_or_ipv6.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Ptp::Slaves::Slave::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ethernet.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : ipv4_or_ipv6.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    if (is_presence_container) return true;
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
    path_buffer << "ethernet";
    ADD_KEY_TOKEN(slave_mac_address, "slave-mac-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ptp::Slaves::Slave::Ethernet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (slave_mac_address.is_set || is_set(slave_mac_address.yfilter)) leaf_name_data.push_back(slave_mac_address.get_name_leafdata());
    if (non_negotiated.is_set || is_set(non_negotiated.yfilter)) leaf_name_data.push_back(non_negotiated.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Ptp::Slaves::Slave::Ethernet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Ptp::Slaves::Slave::Ethernet::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    if (is_presence_container) return true;
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
    path_buffer << "ipv4-or-ipv6";
    ADD_KEY_TOKEN(slave_ip_address, "slave-ip-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ptp::Slaves::Slave::Ipv4OrIpv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (slave_ip_address.is_set || is_set(slave_ip_address.yfilter)) leaf_name_data.push_back(slave_ip_address.get_name_leafdata());
    if (non_negotiated.is_set || is_set(non_negotiated.yfilter)) leaf_name_data.push_back(non_negotiated.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Ptp::Slaves::Slave::Ipv4OrIpv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Ptp::Slaves::Slave::Ipv4OrIpv6::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

InterfaceConfigurations::InterfaceConfiguration::Ptp::SyncInterval::SyncInterval()
    :
    time_type{YType::enumeration, "time-type"},
    time_period{YType::enumeration, "time-period"}
{

    yang_name = "sync-interval"; yang_parent_name = "ptp"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Ptp::SyncInterval::~SyncInterval()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ptp::SyncInterval::has_data() const
{
    if (is_presence_container) return true;
    return time_type.is_set
	|| time_period.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ptp::SyncInterval::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(time_type.yfilter)
	|| ydk::is_set(time_period.yfilter);
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

    if (time_type.is_set || is_set(time_type.yfilter)) leaf_name_data.push_back(time_type.get_name_leafdata());
    if (time_period.is_set || is_set(time_period.yfilter)) leaf_name_data.push_back(time_period.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Ptp::SyncInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Ptp::SyncInterval::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ptp::SyncInterval::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time-type")
    {
        time_type = value;
        time_type.value_namespace = name_space;
        time_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-period")
    {
        time_period = value;
        time_period.value_namespace = name_space;
        time_period.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Ptp::SyncInterval::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time-type")
    {
        time_type.yfilter = yfilter;
    }
    if(value_path == "time-period")
    {
        time_period.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Ptp::SyncInterval::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time-type" || name == "time-period")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Masters()
    :
    master(this, {"transport"})
{

    yang_name = "masters"; yang_parent_name = "ptp"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::~Masters()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<master.len(); index++)
    {
        if(master[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::has_operation() const
{
    for (std::size_t index=0; index<master.len(); index++)
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "master")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master>();
        ent_->parent = this;
        master.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : master.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
        ,
    ethernet(this, {"master_mac_address"})
    , ipv4_or_ipv6(this, {"master_ip_address"})
{

    yang_name = "master"; yang_parent_name = "masters"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master::~Master()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ethernet.len(); index++)
    {
        if(ethernet[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ipv4_or_ipv6.len(); index++)
    {
        if(ipv4_or_ipv6[index]->has_data())
            return true;
    }
    return transport.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master::has_operation() const
{
    for (std::size_t index=0; index<ethernet.len(); index++)
    {
        if(ethernet[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ipv4_or_ipv6.len(); index++)
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
    path_buffer << "master";
    ADD_KEY_TOKEN(transport, "transport");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (transport.is_set || is_set(transport.yfilter)) leaf_name_data.push_back(transport.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ethernet")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master::Ethernet>();
        ent_->parent = this;
        ethernet.append(ent_);
        return ent_;
    }

    if(child_yang_name == "ipv4-or-ipv6")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master::Ipv4OrIpv6>();
        ent_->parent = this;
        ipv4_or_ipv6.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ethernet.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : ipv4_or_ipv6.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    master_clock_class{YType::uint32, "master-clock-class"},
    non_negotiated{YType::boolean, "non-negotiated"},
    priority{YType::uint32, "priority"},
    communication{YType::enumeration, "communication"}
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
    if (is_presence_container) return true;
    return master_mac_address.is_set
	|| master_clock_class.is_set
	|| non_negotiated.is_set
	|| priority.is_set
	|| communication.is_set
	|| (delay_asymmetry !=  nullptr && delay_asymmetry->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master::Ethernet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(master_mac_address.yfilter)
	|| ydk::is_set(master_clock_class.yfilter)
	|| ydk::is_set(non_negotiated.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(communication.yfilter)
	|| (delay_asymmetry !=  nullptr && delay_asymmetry->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master::Ethernet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ethernet";
    ADD_KEY_TOKEN(master_mac_address, "master-mac-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master::Ethernet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (master_mac_address.is_set || is_set(master_mac_address.yfilter)) leaf_name_data.push_back(master_mac_address.get_name_leafdata());
    if (master_clock_class.is_set || is_set(master_clock_class.yfilter)) leaf_name_data.push_back(master_clock_class.get_name_leafdata());
    if (non_negotiated.is_set || is_set(non_negotiated.yfilter)) leaf_name_data.push_back(non_negotiated.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (communication.is_set || is_set(communication.yfilter)) leaf_name_data.push_back(communication.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master::Ethernet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master::Ethernet::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(delay_asymmetry != nullptr)
    {
        _children["delay-asymmetry"] = delay_asymmetry;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master::Ethernet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "master-mac-address")
    {
        master_mac_address = value;
        master_mac_address.value_namespace = name_space;
        master_mac_address.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "communication")
    {
        communication = value;
        communication.value_namespace = name_space;
        communication.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master::Ethernet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "master-mac-address")
    {
        master_mac_address.yfilter = yfilter;
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
    if(value_path == "communication")
    {
        communication.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master::Ethernet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "delay-asymmetry" || name == "master-mac-address" || name == "master-clock-class" || name == "non-negotiated" || name == "priority" || name == "communication")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master::Ethernet::DelayAsymmetry::DelayAsymmetry()
    :
    magnitude{YType::int32, "magnitude"},
    units{YType::enumeration, "units"}
{

    yang_name = "delay-asymmetry"; yang_parent_name = "ethernet"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master::Ethernet::DelayAsymmetry::~DelayAsymmetry()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master::Ethernet::DelayAsymmetry::has_data() const
{
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master::Ethernet::DelayAsymmetry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master::Ethernet::DelayAsymmetry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    master_clock_class{YType::uint32, "master-clock-class"},
    non_negotiated{YType::boolean, "non-negotiated"},
    priority{YType::uint32, "priority"},
    communication{YType::enumeration, "communication"}
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
    if (is_presence_container) return true;
    return master_ip_address.is_set
	|| master_clock_class.is_set
	|| non_negotiated.is_set
	|| priority.is_set
	|| communication.is_set
	|| (delay_asymmetry !=  nullptr && delay_asymmetry->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master::Ipv4OrIpv6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(master_ip_address.yfilter)
	|| ydk::is_set(master_clock_class.yfilter)
	|| ydk::is_set(non_negotiated.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(communication.yfilter)
	|| (delay_asymmetry !=  nullptr && delay_asymmetry->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master::Ipv4OrIpv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-or-ipv6";
    ADD_KEY_TOKEN(master_ip_address, "master-ip-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master::Ipv4OrIpv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (master_ip_address.is_set || is_set(master_ip_address.yfilter)) leaf_name_data.push_back(master_ip_address.get_name_leafdata());
    if (master_clock_class.is_set || is_set(master_clock_class.yfilter)) leaf_name_data.push_back(master_clock_class.get_name_leafdata());
    if (non_negotiated.is_set || is_set(non_negotiated.yfilter)) leaf_name_data.push_back(non_negotiated.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (communication.is_set || is_set(communication.yfilter)) leaf_name_data.push_back(communication.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master::Ipv4OrIpv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master::Ipv4OrIpv6::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(delay_asymmetry != nullptr)
    {
        _children["delay-asymmetry"] = delay_asymmetry;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master::Ipv4OrIpv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "master-ip-address")
    {
        master_ip_address = value;
        master_ip_address.value_namespace = name_space;
        master_ip_address.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "communication")
    {
        communication = value;
        communication.value_namespace = name_space;
        communication.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master::Ipv4OrIpv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "master-ip-address")
    {
        master_ip_address.yfilter = yfilter;
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
    if(value_path == "communication")
    {
        communication.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master::Ipv4OrIpv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "delay-asymmetry" || name == "master-ip-address" || name == "master-clock-class" || name == "non-negotiated" || name == "priority" || name == "communication")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master::Ipv4OrIpv6::DelayAsymmetry::DelayAsymmetry()
    :
    magnitude{YType::int32, "magnitude"},
    units{YType::enumeration, "units"}
{

    yang_name = "delay-asymmetry"; yang_parent_name = "ipv4-or-ipv6"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master::Ipv4OrIpv6::DelayAsymmetry::~DelayAsymmetry()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master::Ipv4OrIpv6::DelayAsymmetry::has_data() const
{
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master::Ipv4OrIpv6::DelayAsymmetry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master::Ipv4OrIpv6::DelayAsymmetry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

InterfaceConfigurations::InterfaceConfiguration::Ptp::Communication::Communication()
    :
    model{YType::enumeration, "model"},
    target_address_set{YType::boolean, "target-address-set"},
    target_address{YType::str, "target-address"}
{

    yang_name = "communication"; yang_parent_name = "ptp"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Ptp::Communication::~Communication()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ptp::Communication::has_data() const
{
    if (is_presence_container) return true;
    return model.is_set
	|| target_address_set.is_set
	|| target_address.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ptp::Communication::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(model.yfilter)
	|| ydk::is_set(target_address_set.yfilter)
	|| ydk::is_set(target_address.yfilter);
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
    if (target_address_set.is_set || is_set(target_address_set.yfilter)) leaf_name_data.push_back(target_address_set.get_name_leafdata());
    if (target_address.is_set || is_set(target_address.yfilter)) leaf_name_data.push_back(target_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Ptp::Communication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Ptp::Communication::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ptp::Communication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "model")
    {
        model = value;
        model.value_namespace = name_space;
        model.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "target-address-set")
    {
        target_address_set = value;
        target_address_set.value_namespace = name_space;
        target_address_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "target-address")
    {
        target_address = value;
        target_address.value_namespace = name_space;
        target_address.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Ptp::Communication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "model")
    {
        model.yfilter = yfilter;
    }
    if(value_path == "target-address-set")
    {
        target_address_set.yfilter = yfilter;
    }
    if(value_path == "target-address")
    {
        target_address.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Ptp::Communication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "model" || name == "target-address-set" || name == "target-address")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ptp::DelayRequestMinimumInterval::DelayRequestMinimumInterval()
    :
    time_type{YType::enumeration, "time-type"},
    time_period{YType::enumeration, "time-period"}
{

    yang_name = "delay-request-minimum-interval"; yang_parent_name = "ptp"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Ptp::DelayRequestMinimumInterval::~DelayRequestMinimumInterval()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ptp::DelayRequestMinimumInterval::has_data() const
{
    if (is_presence_container) return true;
    return time_type.is_set
	|| time_period.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ptp::DelayRequestMinimumInterval::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(time_type.yfilter)
	|| ydk::is_set(time_period.yfilter);
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

    if (time_type.is_set || is_set(time_type.yfilter)) leaf_name_data.push_back(time_type.get_name_leafdata());
    if (time_period.is_set || is_set(time_period.yfilter)) leaf_name_data.push_back(time_period.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Ptp::DelayRequestMinimumInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Ptp::DelayRequestMinimumInterval::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ptp::DelayRequestMinimumInterval::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time-type")
    {
        time_type = value;
        time_type.value_namespace = name_space;
        time_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-period")
    {
        time_period = value;
        time_period.value_namespace = name_space;
        time_period.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Ptp::DelayRequestMinimumInterval::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time-type")
    {
        time_type.yfilter = yfilter;
    }
    if(value_path == "time-period")
    {
        time_period.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Ptp::DelayRequestMinimumInterval::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time-type" || name == "time-period")
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Subscriber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Subscriber::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ip_subscriber != nullptr)
    {
        _children["ip-subscriber"] = ip_subscriber;
    }

    return _children;
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
    , session_limit(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::SessionLimit>())
    , ipv6(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6>())
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ipv4 != nullptr)
    {
        _children["ipv4"] = ipv4;
    }

    if(session_limit != nullptr)
    {
        _children["session-limit"] = session_limit;
    }

    if(ipv6 != nullptr)
    {
        _children["ipv6"] = ipv6;
    }

    return _children;
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
    , routed(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::Routed>())
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(l2_connected != nullptr)
    {
        _children["l2-connected"] = l2_connected;
    }

    if(routed != nullptr)
    {
        _children["routed"] = routed;
    }

    return _children;
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::L2Connected::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::L2Connected::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(initiator != nullptr)
    {
        _children["initiator"] = initiator;
    }

    return _children;
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::L2Connected::Initiator::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::L2Connected::Initiator::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(unclassified_source_fsol != nullptr)
    {
        _children["unclassified-source-fsol"] = unclassified_source_fsol;
    }

    return _children;
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

    yang_name = "unclassified-source-fsol"; yang_parent_name = "initiator"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::L2Connected::Initiator::UnclassifiedSourceFsol::~UnclassifiedSourceFsol()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::L2Connected::Initiator::UnclassifiedSourceFsol::has_data() const
{
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::L2Connected::Initiator::UnclassifiedSourceFsol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::L2Connected::Initiator::UnclassifiedSourceFsol::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::Routed::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::Routed::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(initiator != nullptr)
    {
        _children["initiator"] = initiator;
    }

    return _children;
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::Routed::Initiator::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::Routed::Initiator::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    , unclassified_source(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::SessionLimit::UnclassifiedSource>())
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::SessionLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::SessionLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(total != nullptr)
    {
        _children["total"] = total;
    }

    if(unclassified_source != nullptr)
    {
        _children["unclassified-source"] = unclassified_source;
    }

    return _children;
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
    per_vlan{YType::uint32, "per-vlan"}
{

    yang_name = "total"; yang_parent_name = "session-limit"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::SessionLimit::Total::~Total()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::SessionLimit::Total::has_data() const
{
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::SessionLimit::Total::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::SessionLimit::Total::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    per_vlan{YType::uint32, "per-vlan"}
{

    yang_name = "unclassified-source"; yang_parent_name = "session-limit"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::SessionLimit::UnclassifiedSource::~UnclassifiedSource()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::SessionLimit::UnclassifiedSource::has_data() const
{
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::SessionLimit::UnclassifiedSource::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::SessionLimit::UnclassifiedSource::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    , routed(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::Routed>())
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(l2_connected != nullptr)
    {
        _children["l2-connected"] = l2_connected;
    }

    if(routed != nullptr)
    {
        _children["routed"] = routed;
    }

    return _children;
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::L2Connected::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::L2Connected::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(initiator != nullptr)
    {
        _children["initiator"] = initiator;
    }

    return _children;
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::L2Connected::Initiator::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::L2Connected::Initiator::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(unclassified_source_fsol != nullptr)
    {
        _children["unclassified-source-fsol"] = unclassified_source_fsol;
    }

    return _children;
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

    yang_name = "unclassified-source-fsol"; yang_parent_name = "initiator"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::L2Connected::Initiator::UnclassifiedSourceFsol::~UnclassifiedSourceFsol()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::L2Connected::Initiator::UnclassifiedSourceFsol::has_data() const
{
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::L2Connected::Initiator::UnclassifiedSourceFsol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::L2Connected::Initiator::UnclassifiedSourceFsol::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::Routed::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::Routed::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(initiator != nullptr)
    {
        _children["initiator"] = initiator;
    }

    return _children;
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::Routed::Initiator::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::Routed::Initiator::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

InterfaceConfigurations::InterfaceConfiguration::VlanSubConfiguration::VlanSubConfiguration()
    :
    vlan_identifier(nullptr) // presence node
{

    yang_name = "vlan-sub-configuration"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::VlanSubConfiguration::~VlanSubConfiguration()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::VlanSubConfiguration::has_data() const
{
    if (is_presence_container) return true;
    return (vlan_identifier !=  nullptr && vlan_identifier->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::VlanSubConfiguration::has_operation() const
{
    return is_set(yfilter)
	|| (vlan_identifier !=  nullptr && vlan_identifier->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::VlanSubConfiguration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2-eth-infra-cfg:vlan-sub-configuration";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::VlanSubConfiguration::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::VlanSubConfiguration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vlan-identifier")
    {
        if(vlan_identifier == nullptr)
        {
            vlan_identifier = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::VlanSubConfiguration::VlanIdentifier>();
        }
        return vlan_identifier;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::VlanSubConfiguration::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(vlan_identifier != nullptr)
    {
        _children["vlan-identifier"] = vlan_identifier;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::VlanSubConfiguration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::VlanSubConfiguration::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::VlanSubConfiguration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan-identifier")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::VlanSubConfiguration::VlanIdentifier::VlanIdentifier()
    :
    vlan_type{YType::enumeration, "vlan-type"},
    first_tag{YType::uint32, "first-tag"},
    second_tag{YType::str, "second-tag"}
{

    yang_name = "vlan-identifier"; yang_parent_name = "vlan-sub-configuration"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

InterfaceConfigurations::InterfaceConfiguration::VlanSubConfiguration::VlanIdentifier::~VlanIdentifier()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::VlanSubConfiguration::VlanIdentifier::has_data() const
{
    if (is_presence_container) return true;
    return vlan_type.is_set
	|| first_tag.is_set
	|| second_tag.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::VlanSubConfiguration::VlanIdentifier::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan_type.yfilter)
	|| ydk::is_set(first_tag.yfilter)
	|| ydk::is_set(second_tag.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::VlanSubConfiguration::VlanIdentifier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan-identifier";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::VlanSubConfiguration::VlanIdentifier::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan_type.is_set || is_set(vlan_type.yfilter)) leaf_name_data.push_back(vlan_type.get_name_leafdata());
    if (first_tag.is_set || is_set(first_tag.yfilter)) leaf_name_data.push_back(first_tag.get_name_leafdata());
    if (second_tag.is_set || is_set(second_tag.yfilter)) leaf_name_data.push_back(second_tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::VlanSubConfiguration::VlanIdentifier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::VlanSubConfiguration::VlanIdentifier::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::VlanSubConfiguration::VlanIdentifier::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan-type")
    {
        vlan_type = value;
        vlan_type.value_namespace = name_space;
        vlan_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "first-tag")
    {
        first_tag = value;
        first_tag.value_namespace = name_space;
        first_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "second-tag")
    {
        second_tag = value;
        second_tag.value_namespace = name_space;
        second_tag.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::VlanSubConfiguration::VlanIdentifier::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan-type")
    {
        vlan_type.yfilter = yfilter;
    }
    if(value_path == "first-tag")
    {
        first_tag.yfilter = yfilter;
    }
    if(value_path == "second-tag")
    {
        second_tag.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::VlanSubConfiguration::VlanIdentifier::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan-type" || name == "first-tag" || name == "second-tag")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::EthernetService::EthernetService()
    :
    local_traffic_default_encapsulation(nullptr) // presence node
    , encapsulation(nullptr) // presence node
    , rewrite(nullptr) // presence node
{

    yang_name = "ethernet-service"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::EthernetService::~EthernetService()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetService::has_data() const
{
    if (is_presence_container) return true;
    return (local_traffic_default_encapsulation !=  nullptr && local_traffic_default_encapsulation->has_data())
	|| (encapsulation !=  nullptr && encapsulation->has_data())
	|| (rewrite !=  nullptr && rewrite->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetService::has_operation() const
{
    return is_set(yfilter)
	|| (local_traffic_default_encapsulation !=  nullptr && local_traffic_default_encapsulation->has_operation())
	|| (encapsulation !=  nullptr && encapsulation->has_operation())
	|| (rewrite !=  nullptr && rewrite->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::EthernetService::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2-eth-infra-cfg:ethernet-service";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::EthernetService::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::EthernetService::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "local-traffic-default-encapsulation")
    {
        if(local_traffic_default_encapsulation == nullptr)
        {
            local_traffic_default_encapsulation = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetService::LocalTrafficDefaultEncapsulation>();
        }
        return local_traffic_default_encapsulation;
    }

    if(child_yang_name == "encapsulation")
    {
        if(encapsulation == nullptr)
        {
            encapsulation = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetService::Encapsulation>();
        }
        return encapsulation;
    }

    if(child_yang_name == "rewrite")
    {
        if(rewrite == nullptr)
        {
            rewrite = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetService::Rewrite>();
        }
        return rewrite;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::EthernetService::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(local_traffic_default_encapsulation != nullptr)
    {
        _children["local-traffic-default-encapsulation"] = local_traffic_default_encapsulation;
    }

    if(encapsulation != nullptr)
    {
        _children["encapsulation"] = encapsulation;
    }

    if(rewrite != nullptr)
    {
        _children["rewrite"] = rewrite;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetService::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetService::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetService::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-traffic-default-encapsulation" || name == "encapsulation" || name == "rewrite")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::EthernetService::LocalTrafficDefaultEncapsulation::LocalTrafficDefaultEncapsulation()
    :
    outer_tag_type{YType::enumeration, "outer-tag-type"},
    outer_vlan_id{YType::uint32, "outer-vlan-id"},
    inner_vlan_id{YType::uint32, "inner-vlan-id"}
{

    yang_name = "local-traffic-default-encapsulation"; yang_parent_name = "ethernet-service"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

InterfaceConfigurations::InterfaceConfiguration::EthernetService::LocalTrafficDefaultEncapsulation::~LocalTrafficDefaultEncapsulation()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetService::LocalTrafficDefaultEncapsulation::has_data() const
{
    if (is_presence_container) return true;
    return outer_tag_type.is_set
	|| outer_vlan_id.is_set
	|| inner_vlan_id.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetService::LocalTrafficDefaultEncapsulation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(outer_tag_type.yfilter)
	|| ydk::is_set(outer_vlan_id.yfilter)
	|| ydk::is_set(inner_vlan_id.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::EthernetService::LocalTrafficDefaultEncapsulation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-traffic-default-encapsulation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::EthernetService::LocalTrafficDefaultEncapsulation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (outer_tag_type.is_set || is_set(outer_tag_type.yfilter)) leaf_name_data.push_back(outer_tag_type.get_name_leafdata());
    if (outer_vlan_id.is_set || is_set(outer_vlan_id.yfilter)) leaf_name_data.push_back(outer_vlan_id.get_name_leafdata());
    if (inner_vlan_id.is_set || is_set(inner_vlan_id.yfilter)) leaf_name_data.push_back(inner_vlan_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::EthernetService::LocalTrafficDefaultEncapsulation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::EthernetService::LocalTrafficDefaultEncapsulation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetService::LocalTrafficDefaultEncapsulation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "outer-tag-type")
    {
        outer_tag_type = value;
        outer_tag_type.value_namespace = name_space;
        outer_tag_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outer-vlan-id")
    {
        outer_vlan_id = value;
        outer_vlan_id.value_namespace = name_space;
        outer_vlan_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inner-vlan-id")
    {
        inner_vlan_id = value;
        inner_vlan_id.value_namespace = name_space;
        inner_vlan_id.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetService::LocalTrafficDefaultEncapsulation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "outer-tag-type")
    {
        outer_tag_type.yfilter = yfilter;
    }
    if(value_path == "outer-vlan-id")
    {
        outer_vlan_id.yfilter = yfilter;
    }
    if(value_path == "inner-vlan-id")
    {
        inner_vlan_id.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetService::LocalTrafficDefaultEncapsulation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "outer-tag-type" || name == "outer-vlan-id" || name == "inner-vlan-id")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::EthernetService::Encapsulation::Encapsulation()
    :
    outer_tag_type{YType::enumeration, "outer-tag-type"},
    outer_range1_low{YType::str, "outer-range1-low"},
    outer_range1_high{YType::str, "outer-range1-high"},
    inner_tag_type{YType::enumeration, "inner-tag-type"},
    inner_range1_low{YType::str, "inner-range1-low"},
    inner_range1_high{YType::uint32, "inner-range1-high"},
    additional_range1_low{YType::str, "additional-range1-low"},
    additional_range1_high{YType::uint32, "additional-range1-high"},
    additional_range2_low{YType::str, "additional-range2-low"},
    additional_range2_high{YType::uint32, "additional-range2-high"},
    additional_range3_low{YType::str, "additional-range3-low"},
    additional_range3_high{YType::uint32, "additional-range3-high"},
    additional_range4_low{YType::str, "additional-range4-low"},
    additional_range4_high{YType::uint32, "additional-range4-high"},
    additional_range5_low{YType::str, "additional-range5-low"},
    additional_range5_high{YType::uint32, "additional-range5-high"},
    additional_range6_low{YType::str, "additional-range6-low"},
    additional_range6_high{YType::uint32, "additional-range6-high"},
    additional_range7_low{YType::str, "additional-range7-low"},
    additional_range7_high{YType::uint32, "additional-range7-high"},
    additional_range8_low{YType::str, "additional-range8-low"},
    additional_range8_high{YType::uint32, "additional-range8-high"},
    outer_class_of_service{YType::uint32, "outer-class-of-service"},
    inner_class_of_service{YType::uint32, "inner-class-of-service"},
    payload_ethertype_match{YType::enumeration, "payload-ethertype-match"},
    ingress_source_mac{YType::str, "ingress-source-mac"},
    ingress_destination_mac{YType::str, "ingress-destination-mac"},
    exact{YType::empty, "exact"}
{

    yang_name = "encapsulation"; yang_parent_name = "ethernet-service"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

InterfaceConfigurations::InterfaceConfiguration::EthernetService::Encapsulation::~Encapsulation()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetService::Encapsulation::has_data() const
{
    if (is_presence_container) return true;
    return outer_tag_type.is_set
	|| outer_range1_low.is_set
	|| outer_range1_high.is_set
	|| inner_tag_type.is_set
	|| inner_range1_low.is_set
	|| inner_range1_high.is_set
	|| additional_range1_low.is_set
	|| additional_range1_high.is_set
	|| additional_range2_low.is_set
	|| additional_range2_high.is_set
	|| additional_range3_low.is_set
	|| additional_range3_high.is_set
	|| additional_range4_low.is_set
	|| additional_range4_high.is_set
	|| additional_range5_low.is_set
	|| additional_range5_high.is_set
	|| additional_range6_low.is_set
	|| additional_range6_high.is_set
	|| additional_range7_low.is_set
	|| additional_range7_high.is_set
	|| additional_range8_low.is_set
	|| additional_range8_high.is_set
	|| outer_class_of_service.is_set
	|| inner_class_of_service.is_set
	|| payload_ethertype_match.is_set
	|| ingress_source_mac.is_set
	|| ingress_destination_mac.is_set
	|| exact.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetService::Encapsulation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(outer_tag_type.yfilter)
	|| ydk::is_set(outer_range1_low.yfilter)
	|| ydk::is_set(outer_range1_high.yfilter)
	|| ydk::is_set(inner_tag_type.yfilter)
	|| ydk::is_set(inner_range1_low.yfilter)
	|| ydk::is_set(inner_range1_high.yfilter)
	|| ydk::is_set(additional_range1_low.yfilter)
	|| ydk::is_set(additional_range1_high.yfilter)
	|| ydk::is_set(additional_range2_low.yfilter)
	|| ydk::is_set(additional_range2_high.yfilter)
	|| ydk::is_set(additional_range3_low.yfilter)
	|| ydk::is_set(additional_range3_high.yfilter)
	|| ydk::is_set(additional_range4_low.yfilter)
	|| ydk::is_set(additional_range4_high.yfilter)
	|| ydk::is_set(additional_range5_low.yfilter)
	|| ydk::is_set(additional_range5_high.yfilter)
	|| ydk::is_set(additional_range6_low.yfilter)
	|| ydk::is_set(additional_range6_high.yfilter)
	|| ydk::is_set(additional_range7_low.yfilter)
	|| ydk::is_set(additional_range7_high.yfilter)
	|| ydk::is_set(additional_range8_low.yfilter)
	|| ydk::is_set(additional_range8_high.yfilter)
	|| ydk::is_set(outer_class_of_service.yfilter)
	|| ydk::is_set(inner_class_of_service.yfilter)
	|| ydk::is_set(payload_ethertype_match.yfilter)
	|| ydk::is_set(ingress_source_mac.yfilter)
	|| ydk::is_set(ingress_destination_mac.yfilter)
	|| ydk::is_set(exact.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::EthernetService::Encapsulation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encapsulation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::EthernetService::Encapsulation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (outer_tag_type.is_set || is_set(outer_tag_type.yfilter)) leaf_name_data.push_back(outer_tag_type.get_name_leafdata());
    if (outer_range1_low.is_set || is_set(outer_range1_low.yfilter)) leaf_name_data.push_back(outer_range1_low.get_name_leafdata());
    if (outer_range1_high.is_set || is_set(outer_range1_high.yfilter)) leaf_name_data.push_back(outer_range1_high.get_name_leafdata());
    if (inner_tag_type.is_set || is_set(inner_tag_type.yfilter)) leaf_name_data.push_back(inner_tag_type.get_name_leafdata());
    if (inner_range1_low.is_set || is_set(inner_range1_low.yfilter)) leaf_name_data.push_back(inner_range1_low.get_name_leafdata());
    if (inner_range1_high.is_set || is_set(inner_range1_high.yfilter)) leaf_name_data.push_back(inner_range1_high.get_name_leafdata());
    if (additional_range1_low.is_set || is_set(additional_range1_low.yfilter)) leaf_name_data.push_back(additional_range1_low.get_name_leafdata());
    if (additional_range1_high.is_set || is_set(additional_range1_high.yfilter)) leaf_name_data.push_back(additional_range1_high.get_name_leafdata());
    if (additional_range2_low.is_set || is_set(additional_range2_low.yfilter)) leaf_name_data.push_back(additional_range2_low.get_name_leafdata());
    if (additional_range2_high.is_set || is_set(additional_range2_high.yfilter)) leaf_name_data.push_back(additional_range2_high.get_name_leafdata());
    if (additional_range3_low.is_set || is_set(additional_range3_low.yfilter)) leaf_name_data.push_back(additional_range3_low.get_name_leafdata());
    if (additional_range3_high.is_set || is_set(additional_range3_high.yfilter)) leaf_name_data.push_back(additional_range3_high.get_name_leafdata());
    if (additional_range4_low.is_set || is_set(additional_range4_low.yfilter)) leaf_name_data.push_back(additional_range4_low.get_name_leafdata());
    if (additional_range4_high.is_set || is_set(additional_range4_high.yfilter)) leaf_name_data.push_back(additional_range4_high.get_name_leafdata());
    if (additional_range5_low.is_set || is_set(additional_range5_low.yfilter)) leaf_name_data.push_back(additional_range5_low.get_name_leafdata());
    if (additional_range5_high.is_set || is_set(additional_range5_high.yfilter)) leaf_name_data.push_back(additional_range5_high.get_name_leafdata());
    if (additional_range6_low.is_set || is_set(additional_range6_low.yfilter)) leaf_name_data.push_back(additional_range6_low.get_name_leafdata());
    if (additional_range6_high.is_set || is_set(additional_range6_high.yfilter)) leaf_name_data.push_back(additional_range6_high.get_name_leafdata());
    if (additional_range7_low.is_set || is_set(additional_range7_low.yfilter)) leaf_name_data.push_back(additional_range7_low.get_name_leafdata());
    if (additional_range7_high.is_set || is_set(additional_range7_high.yfilter)) leaf_name_data.push_back(additional_range7_high.get_name_leafdata());
    if (additional_range8_low.is_set || is_set(additional_range8_low.yfilter)) leaf_name_data.push_back(additional_range8_low.get_name_leafdata());
    if (additional_range8_high.is_set || is_set(additional_range8_high.yfilter)) leaf_name_data.push_back(additional_range8_high.get_name_leafdata());
    if (outer_class_of_service.is_set || is_set(outer_class_of_service.yfilter)) leaf_name_data.push_back(outer_class_of_service.get_name_leafdata());
    if (inner_class_of_service.is_set || is_set(inner_class_of_service.yfilter)) leaf_name_data.push_back(inner_class_of_service.get_name_leafdata());
    if (payload_ethertype_match.is_set || is_set(payload_ethertype_match.yfilter)) leaf_name_data.push_back(payload_ethertype_match.get_name_leafdata());
    if (ingress_source_mac.is_set || is_set(ingress_source_mac.yfilter)) leaf_name_data.push_back(ingress_source_mac.get_name_leafdata());
    if (ingress_destination_mac.is_set || is_set(ingress_destination_mac.yfilter)) leaf_name_data.push_back(ingress_destination_mac.get_name_leafdata());
    if (exact.is_set || is_set(exact.yfilter)) leaf_name_data.push_back(exact.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::EthernetService::Encapsulation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::EthernetService::Encapsulation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetService::Encapsulation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "outer-tag-type")
    {
        outer_tag_type = value;
        outer_tag_type.value_namespace = name_space;
        outer_tag_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outer-range1-low")
    {
        outer_range1_low = value;
        outer_range1_low.value_namespace = name_space;
        outer_range1_low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outer-range1-high")
    {
        outer_range1_high = value;
        outer_range1_high.value_namespace = name_space;
        outer_range1_high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inner-tag-type")
    {
        inner_tag_type = value;
        inner_tag_type.value_namespace = name_space;
        inner_tag_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inner-range1-low")
    {
        inner_range1_low = value;
        inner_range1_low.value_namespace = name_space;
        inner_range1_low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inner-range1-high")
    {
        inner_range1_high = value;
        inner_range1_high.value_namespace = name_space;
        inner_range1_high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "additional-range1-low")
    {
        additional_range1_low = value;
        additional_range1_low.value_namespace = name_space;
        additional_range1_low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "additional-range1-high")
    {
        additional_range1_high = value;
        additional_range1_high.value_namespace = name_space;
        additional_range1_high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "additional-range2-low")
    {
        additional_range2_low = value;
        additional_range2_low.value_namespace = name_space;
        additional_range2_low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "additional-range2-high")
    {
        additional_range2_high = value;
        additional_range2_high.value_namespace = name_space;
        additional_range2_high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "additional-range3-low")
    {
        additional_range3_low = value;
        additional_range3_low.value_namespace = name_space;
        additional_range3_low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "additional-range3-high")
    {
        additional_range3_high = value;
        additional_range3_high.value_namespace = name_space;
        additional_range3_high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "additional-range4-low")
    {
        additional_range4_low = value;
        additional_range4_low.value_namespace = name_space;
        additional_range4_low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "additional-range4-high")
    {
        additional_range4_high = value;
        additional_range4_high.value_namespace = name_space;
        additional_range4_high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "additional-range5-low")
    {
        additional_range5_low = value;
        additional_range5_low.value_namespace = name_space;
        additional_range5_low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "additional-range5-high")
    {
        additional_range5_high = value;
        additional_range5_high.value_namespace = name_space;
        additional_range5_high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "additional-range6-low")
    {
        additional_range6_low = value;
        additional_range6_low.value_namespace = name_space;
        additional_range6_low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "additional-range6-high")
    {
        additional_range6_high = value;
        additional_range6_high.value_namespace = name_space;
        additional_range6_high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "additional-range7-low")
    {
        additional_range7_low = value;
        additional_range7_low.value_namespace = name_space;
        additional_range7_low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "additional-range7-high")
    {
        additional_range7_high = value;
        additional_range7_high.value_namespace = name_space;
        additional_range7_high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "additional-range8-low")
    {
        additional_range8_low = value;
        additional_range8_low.value_namespace = name_space;
        additional_range8_low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "additional-range8-high")
    {
        additional_range8_high = value;
        additional_range8_high.value_namespace = name_space;
        additional_range8_high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outer-class-of-service")
    {
        outer_class_of_service = value;
        outer_class_of_service.value_namespace = name_space;
        outer_class_of_service.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inner-class-of-service")
    {
        inner_class_of_service = value;
        inner_class_of_service.value_namespace = name_space;
        inner_class_of_service.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "payload-ethertype-match")
    {
        payload_ethertype_match = value;
        payload_ethertype_match.value_namespace = name_space;
        payload_ethertype_match.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ingress-source-mac")
    {
        ingress_source_mac = value;
        ingress_source_mac.value_namespace = name_space;
        ingress_source_mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ingress-destination-mac")
    {
        ingress_destination_mac = value;
        ingress_destination_mac.value_namespace = name_space;
        ingress_destination_mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exact")
    {
        exact = value;
        exact.value_namespace = name_space;
        exact.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetService::Encapsulation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "outer-tag-type")
    {
        outer_tag_type.yfilter = yfilter;
    }
    if(value_path == "outer-range1-low")
    {
        outer_range1_low.yfilter = yfilter;
    }
    if(value_path == "outer-range1-high")
    {
        outer_range1_high.yfilter = yfilter;
    }
    if(value_path == "inner-tag-type")
    {
        inner_tag_type.yfilter = yfilter;
    }
    if(value_path == "inner-range1-low")
    {
        inner_range1_low.yfilter = yfilter;
    }
    if(value_path == "inner-range1-high")
    {
        inner_range1_high.yfilter = yfilter;
    }
    if(value_path == "additional-range1-low")
    {
        additional_range1_low.yfilter = yfilter;
    }
    if(value_path == "additional-range1-high")
    {
        additional_range1_high.yfilter = yfilter;
    }
    if(value_path == "additional-range2-low")
    {
        additional_range2_low.yfilter = yfilter;
    }
    if(value_path == "additional-range2-high")
    {
        additional_range2_high.yfilter = yfilter;
    }
    if(value_path == "additional-range3-low")
    {
        additional_range3_low.yfilter = yfilter;
    }
    if(value_path == "additional-range3-high")
    {
        additional_range3_high.yfilter = yfilter;
    }
    if(value_path == "additional-range4-low")
    {
        additional_range4_low.yfilter = yfilter;
    }
    if(value_path == "additional-range4-high")
    {
        additional_range4_high.yfilter = yfilter;
    }
    if(value_path == "additional-range5-low")
    {
        additional_range5_low.yfilter = yfilter;
    }
    if(value_path == "additional-range5-high")
    {
        additional_range5_high.yfilter = yfilter;
    }
    if(value_path == "additional-range6-low")
    {
        additional_range6_low.yfilter = yfilter;
    }
    if(value_path == "additional-range6-high")
    {
        additional_range6_high.yfilter = yfilter;
    }
    if(value_path == "additional-range7-low")
    {
        additional_range7_low.yfilter = yfilter;
    }
    if(value_path == "additional-range7-high")
    {
        additional_range7_high.yfilter = yfilter;
    }
    if(value_path == "additional-range8-low")
    {
        additional_range8_low.yfilter = yfilter;
    }
    if(value_path == "additional-range8-high")
    {
        additional_range8_high.yfilter = yfilter;
    }
    if(value_path == "outer-class-of-service")
    {
        outer_class_of_service.yfilter = yfilter;
    }
    if(value_path == "inner-class-of-service")
    {
        inner_class_of_service.yfilter = yfilter;
    }
    if(value_path == "payload-ethertype-match")
    {
        payload_ethertype_match.yfilter = yfilter;
    }
    if(value_path == "ingress-source-mac")
    {
        ingress_source_mac.yfilter = yfilter;
    }
    if(value_path == "ingress-destination-mac")
    {
        ingress_destination_mac.yfilter = yfilter;
    }
    if(value_path == "exact")
    {
        exact.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetService::Encapsulation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "outer-tag-type" || name == "outer-range1-low" || name == "outer-range1-high" || name == "inner-tag-type" || name == "inner-range1-low" || name == "inner-range1-high" || name == "additional-range1-low" || name == "additional-range1-high" || name == "additional-range2-low" || name == "additional-range2-high" || name == "additional-range3-low" || name == "additional-range3-high" || name == "additional-range4-low" || name == "additional-range4-high" || name == "additional-range5-low" || name == "additional-range5-high" || name == "additional-range6-low" || name == "additional-range6-high" || name == "additional-range7-low" || name == "additional-range7-high" || name == "additional-range8-low" || name == "additional-range8-high" || name == "outer-class-of-service" || name == "inner-class-of-service" || name == "payload-ethertype-match" || name == "ingress-source-mac" || name == "ingress-destination-mac" || name == "exact")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::EthernetService::Rewrite::Rewrite()
    :
    rewrite_type{YType::enumeration, "rewrite-type"},
    outer_tag_type{YType::enumeration, "outer-tag-type"},
    outer_tag_value{YType::uint32, "outer-tag-value"},
    inner_tag_type{YType::enumeration, "inner-tag-type"},
    inner_tag_value{YType::uint32, "inner-tag-value"}
{

    yang_name = "rewrite"; yang_parent_name = "ethernet-service"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

InterfaceConfigurations::InterfaceConfiguration::EthernetService::Rewrite::~Rewrite()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetService::Rewrite::has_data() const
{
    if (is_presence_container) return true;
    return rewrite_type.is_set
	|| outer_tag_type.is_set
	|| outer_tag_value.is_set
	|| inner_tag_type.is_set
	|| inner_tag_value.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetService::Rewrite::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rewrite_type.yfilter)
	|| ydk::is_set(outer_tag_type.yfilter)
	|| ydk::is_set(outer_tag_value.yfilter)
	|| ydk::is_set(inner_tag_type.yfilter)
	|| ydk::is_set(inner_tag_value.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::EthernetService::Rewrite::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rewrite";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::EthernetService::Rewrite::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rewrite_type.is_set || is_set(rewrite_type.yfilter)) leaf_name_data.push_back(rewrite_type.get_name_leafdata());
    if (outer_tag_type.is_set || is_set(outer_tag_type.yfilter)) leaf_name_data.push_back(outer_tag_type.get_name_leafdata());
    if (outer_tag_value.is_set || is_set(outer_tag_value.yfilter)) leaf_name_data.push_back(outer_tag_value.get_name_leafdata());
    if (inner_tag_type.is_set || is_set(inner_tag_type.yfilter)) leaf_name_data.push_back(inner_tag_type.get_name_leafdata());
    if (inner_tag_value.is_set || is_set(inner_tag_value.yfilter)) leaf_name_data.push_back(inner_tag_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::EthernetService::Rewrite::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::EthernetService::Rewrite::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetService::Rewrite::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rewrite-type")
    {
        rewrite_type = value;
        rewrite_type.value_namespace = name_space;
        rewrite_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outer-tag-type")
    {
        outer_tag_type = value;
        outer_tag_type.value_namespace = name_space;
        outer_tag_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outer-tag-value")
    {
        outer_tag_value = value;
        outer_tag_value.value_namespace = name_space;
        outer_tag_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inner-tag-type")
    {
        inner_tag_type = value;
        inner_tag_type.value_namespace = name_space;
        inner_tag_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inner-tag-value")
    {
        inner_tag_value = value;
        inner_tag_value.value_namespace = name_space;
        inner_tag_value.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetService::Rewrite::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rewrite-type")
    {
        rewrite_type.yfilter = yfilter;
    }
    if(value_path == "outer-tag-type")
    {
        outer_tag_type.yfilter = yfilter;
    }
    if(value_path == "outer-tag-value")
    {
        outer_tag_value.yfilter = yfilter;
    }
    if(value_path == "inner-tag-type")
    {
        inner_tag_type.yfilter = yfilter;
    }
    if(value_path == "inner-tag-value")
    {
        inner_tag_value.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetService::Rewrite::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rewrite-type" || name == "outer-tag-type" || name == "outer-tag-value" || name == "inner-tag-type" || name == "inner-tag-value")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::EthernetBng::EthernetBng()
    :
    ambiguous_encapsulation(nullptr) // presence node
{

    yang_name = "ethernet-bng"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::EthernetBng::~EthernetBng()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetBng::has_data() const
{
    if (is_presence_container) return true;
    return (ambiguous_encapsulation !=  nullptr && ambiguous_encapsulation->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetBng::has_operation() const
{
    return is_set(yfilter)
	|| (ambiguous_encapsulation !=  nullptr && ambiguous_encapsulation->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::EthernetBng::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2-eth-infra-cfg:ethernet-bng";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::EthernetBng::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::EthernetBng::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ambiguous-encapsulation")
    {
        if(ambiguous_encapsulation == nullptr)
        {
            ambiguous_encapsulation = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetBng::AmbiguousEncapsulation>();
        }
        return ambiguous_encapsulation;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::EthernetBng::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ambiguous_encapsulation != nullptr)
    {
        _children["ambiguous-encapsulation"] = ambiguous_encapsulation;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetBng::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetBng::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetBng::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ambiguous-encapsulation")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::EthernetBng::AmbiguousEncapsulation::AmbiguousEncapsulation()
    :
    outer_tag_type{YType::enumeration, "outer-tag-type"},
    outer_range1_low{YType::str, "outer-range1-low"},
    outer_range1_high{YType::str, "outer-range1-high"},
    inner_tag_type{YType::enumeration, "inner-tag-type"},
    inner_range1_low{YType::str, "inner-range1-low"},
    inner_range1_high{YType::uint32, "inner-range1-high"},
    additional_range1_low{YType::str, "additional-range1-low"},
    additional_range1_high{YType::uint32, "additional-range1-high"},
    additional_range2_low{YType::str, "additional-range2-low"},
    additional_range2_high{YType::uint32, "additional-range2-high"},
    additional_range3_low{YType::str, "additional-range3-low"},
    additional_range3_high{YType::uint32, "additional-range3-high"},
    additional_range4_low{YType::str, "additional-range4-low"},
    additional_range4_high{YType::uint32, "additional-range4-high"},
    additional_range5_low{YType::str, "additional-range5-low"},
    additional_range5_high{YType::uint32, "additional-range5-high"},
    additional_range6_low{YType::str, "additional-range6-low"},
    additional_range6_high{YType::uint32, "additional-range6-high"},
    additional_range7_low{YType::str, "additional-range7-low"},
    additional_range7_high{YType::uint32, "additional-range7-high"},
    additional_range8_low{YType::str, "additional-range8-low"},
    additional_range8_high{YType::uint32, "additional-range8-high"},
    outer_class_of_service{YType::uint32, "outer-class-of-service"},
    inner_class_of_service{YType::uint32, "inner-class-of-service"},
    payload_ethertype_match{YType::enumeration, "payload-ethertype-match"},
    ingress_source_mac{YType::str, "ingress-source-mac"},
    ingress_destination_mac{YType::str, "ingress-destination-mac"},
    exact{YType::empty, "exact"}
{

    yang_name = "ambiguous-encapsulation"; yang_parent_name = "ethernet-bng"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

InterfaceConfigurations::InterfaceConfiguration::EthernetBng::AmbiguousEncapsulation::~AmbiguousEncapsulation()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetBng::AmbiguousEncapsulation::has_data() const
{
    if (is_presence_container) return true;
    return outer_tag_type.is_set
	|| outer_range1_low.is_set
	|| outer_range1_high.is_set
	|| inner_tag_type.is_set
	|| inner_range1_low.is_set
	|| inner_range1_high.is_set
	|| additional_range1_low.is_set
	|| additional_range1_high.is_set
	|| additional_range2_low.is_set
	|| additional_range2_high.is_set
	|| additional_range3_low.is_set
	|| additional_range3_high.is_set
	|| additional_range4_low.is_set
	|| additional_range4_high.is_set
	|| additional_range5_low.is_set
	|| additional_range5_high.is_set
	|| additional_range6_low.is_set
	|| additional_range6_high.is_set
	|| additional_range7_low.is_set
	|| additional_range7_high.is_set
	|| additional_range8_low.is_set
	|| additional_range8_high.is_set
	|| outer_class_of_service.is_set
	|| inner_class_of_service.is_set
	|| payload_ethertype_match.is_set
	|| ingress_source_mac.is_set
	|| ingress_destination_mac.is_set
	|| exact.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetBng::AmbiguousEncapsulation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(outer_tag_type.yfilter)
	|| ydk::is_set(outer_range1_low.yfilter)
	|| ydk::is_set(outer_range1_high.yfilter)
	|| ydk::is_set(inner_tag_type.yfilter)
	|| ydk::is_set(inner_range1_low.yfilter)
	|| ydk::is_set(inner_range1_high.yfilter)
	|| ydk::is_set(additional_range1_low.yfilter)
	|| ydk::is_set(additional_range1_high.yfilter)
	|| ydk::is_set(additional_range2_low.yfilter)
	|| ydk::is_set(additional_range2_high.yfilter)
	|| ydk::is_set(additional_range3_low.yfilter)
	|| ydk::is_set(additional_range3_high.yfilter)
	|| ydk::is_set(additional_range4_low.yfilter)
	|| ydk::is_set(additional_range4_high.yfilter)
	|| ydk::is_set(additional_range5_low.yfilter)
	|| ydk::is_set(additional_range5_high.yfilter)
	|| ydk::is_set(additional_range6_low.yfilter)
	|| ydk::is_set(additional_range6_high.yfilter)
	|| ydk::is_set(additional_range7_low.yfilter)
	|| ydk::is_set(additional_range7_high.yfilter)
	|| ydk::is_set(additional_range8_low.yfilter)
	|| ydk::is_set(additional_range8_high.yfilter)
	|| ydk::is_set(outer_class_of_service.yfilter)
	|| ydk::is_set(inner_class_of_service.yfilter)
	|| ydk::is_set(payload_ethertype_match.yfilter)
	|| ydk::is_set(ingress_source_mac.yfilter)
	|| ydk::is_set(ingress_destination_mac.yfilter)
	|| ydk::is_set(exact.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::EthernetBng::AmbiguousEncapsulation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ambiguous-encapsulation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::EthernetBng::AmbiguousEncapsulation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (outer_tag_type.is_set || is_set(outer_tag_type.yfilter)) leaf_name_data.push_back(outer_tag_type.get_name_leafdata());
    if (outer_range1_low.is_set || is_set(outer_range1_low.yfilter)) leaf_name_data.push_back(outer_range1_low.get_name_leafdata());
    if (outer_range1_high.is_set || is_set(outer_range1_high.yfilter)) leaf_name_data.push_back(outer_range1_high.get_name_leafdata());
    if (inner_tag_type.is_set || is_set(inner_tag_type.yfilter)) leaf_name_data.push_back(inner_tag_type.get_name_leafdata());
    if (inner_range1_low.is_set || is_set(inner_range1_low.yfilter)) leaf_name_data.push_back(inner_range1_low.get_name_leafdata());
    if (inner_range1_high.is_set || is_set(inner_range1_high.yfilter)) leaf_name_data.push_back(inner_range1_high.get_name_leafdata());
    if (additional_range1_low.is_set || is_set(additional_range1_low.yfilter)) leaf_name_data.push_back(additional_range1_low.get_name_leafdata());
    if (additional_range1_high.is_set || is_set(additional_range1_high.yfilter)) leaf_name_data.push_back(additional_range1_high.get_name_leafdata());
    if (additional_range2_low.is_set || is_set(additional_range2_low.yfilter)) leaf_name_data.push_back(additional_range2_low.get_name_leafdata());
    if (additional_range2_high.is_set || is_set(additional_range2_high.yfilter)) leaf_name_data.push_back(additional_range2_high.get_name_leafdata());
    if (additional_range3_low.is_set || is_set(additional_range3_low.yfilter)) leaf_name_data.push_back(additional_range3_low.get_name_leafdata());
    if (additional_range3_high.is_set || is_set(additional_range3_high.yfilter)) leaf_name_data.push_back(additional_range3_high.get_name_leafdata());
    if (additional_range4_low.is_set || is_set(additional_range4_low.yfilter)) leaf_name_data.push_back(additional_range4_low.get_name_leafdata());
    if (additional_range4_high.is_set || is_set(additional_range4_high.yfilter)) leaf_name_data.push_back(additional_range4_high.get_name_leafdata());
    if (additional_range5_low.is_set || is_set(additional_range5_low.yfilter)) leaf_name_data.push_back(additional_range5_low.get_name_leafdata());
    if (additional_range5_high.is_set || is_set(additional_range5_high.yfilter)) leaf_name_data.push_back(additional_range5_high.get_name_leafdata());
    if (additional_range6_low.is_set || is_set(additional_range6_low.yfilter)) leaf_name_data.push_back(additional_range6_low.get_name_leafdata());
    if (additional_range6_high.is_set || is_set(additional_range6_high.yfilter)) leaf_name_data.push_back(additional_range6_high.get_name_leafdata());
    if (additional_range7_low.is_set || is_set(additional_range7_low.yfilter)) leaf_name_data.push_back(additional_range7_low.get_name_leafdata());
    if (additional_range7_high.is_set || is_set(additional_range7_high.yfilter)) leaf_name_data.push_back(additional_range7_high.get_name_leafdata());
    if (additional_range8_low.is_set || is_set(additional_range8_low.yfilter)) leaf_name_data.push_back(additional_range8_low.get_name_leafdata());
    if (additional_range8_high.is_set || is_set(additional_range8_high.yfilter)) leaf_name_data.push_back(additional_range8_high.get_name_leafdata());
    if (outer_class_of_service.is_set || is_set(outer_class_of_service.yfilter)) leaf_name_data.push_back(outer_class_of_service.get_name_leafdata());
    if (inner_class_of_service.is_set || is_set(inner_class_of_service.yfilter)) leaf_name_data.push_back(inner_class_of_service.get_name_leafdata());
    if (payload_ethertype_match.is_set || is_set(payload_ethertype_match.yfilter)) leaf_name_data.push_back(payload_ethertype_match.get_name_leafdata());
    if (ingress_source_mac.is_set || is_set(ingress_source_mac.yfilter)) leaf_name_data.push_back(ingress_source_mac.get_name_leafdata());
    if (ingress_destination_mac.is_set || is_set(ingress_destination_mac.yfilter)) leaf_name_data.push_back(ingress_destination_mac.get_name_leafdata());
    if (exact.is_set || is_set(exact.yfilter)) leaf_name_data.push_back(exact.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::EthernetBng::AmbiguousEncapsulation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::EthernetBng::AmbiguousEncapsulation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetBng::AmbiguousEncapsulation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "outer-tag-type")
    {
        outer_tag_type = value;
        outer_tag_type.value_namespace = name_space;
        outer_tag_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outer-range1-low")
    {
        outer_range1_low = value;
        outer_range1_low.value_namespace = name_space;
        outer_range1_low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outer-range1-high")
    {
        outer_range1_high = value;
        outer_range1_high.value_namespace = name_space;
        outer_range1_high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inner-tag-type")
    {
        inner_tag_type = value;
        inner_tag_type.value_namespace = name_space;
        inner_tag_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inner-range1-low")
    {
        inner_range1_low = value;
        inner_range1_low.value_namespace = name_space;
        inner_range1_low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inner-range1-high")
    {
        inner_range1_high = value;
        inner_range1_high.value_namespace = name_space;
        inner_range1_high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "additional-range1-low")
    {
        additional_range1_low = value;
        additional_range1_low.value_namespace = name_space;
        additional_range1_low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "additional-range1-high")
    {
        additional_range1_high = value;
        additional_range1_high.value_namespace = name_space;
        additional_range1_high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "additional-range2-low")
    {
        additional_range2_low = value;
        additional_range2_low.value_namespace = name_space;
        additional_range2_low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "additional-range2-high")
    {
        additional_range2_high = value;
        additional_range2_high.value_namespace = name_space;
        additional_range2_high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "additional-range3-low")
    {
        additional_range3_low = value;
        additional_range3_low.value_namespace = name_space;
        additional_range3_low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "additional-range3-high")
    {
        additional_range3_high = value;
        additional_range3_high.value_namespace = name_space;
        additional_range3_high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "additional-range4-low")
    {
        additional_range4_low = value;
        additional_range4_low.value_namespace = name_space;
        additional_range4_low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "additional-range4-high")
    {
        additional_range4_high = value;
        additional_range4_high.value_namespace = name_space;
        additional_range4_high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "additional-range5-low")
    {
        additional_range5_low = value;
        additional_range5_low.value_namespace = name_space;
        additional_range5_low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "additional-range5-high")
    {
        additional_range5_high = value;
        additional_range5_high.value_namespace = name_space;
        additional_range5_high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "additional-range6-low")
    {
        additional_range6_low = value;
        additional_range6_low.value_namespace = name_space;
        additional_range6_low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "additional-range6-high")
    {
        additional_range6_high = value;
        additional_range6_high.value_namespace = name_space;
        additional_range6_high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "additional-range7-low")
    {
        additional_range7_low = value;
        additional_range7_low.value_namespace = name_space;
        additional_range7_low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "additional-range7-high")
    {
        additional_range7_high = value;
        additional_range7_high.value_namespace = name_space;
        additional_range7_high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "additional-range8-low")
    {
        additional_range8_low = value;
        additional_range8_low.value_namespace = name_space;
        additional_range8_low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "additional-range8-high")
    {
        additional_range8_high = value;
        additional_range8_high.value_namespace = name_space;
        additional_range8_high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outer-class-of-service")
    {
        outer_class_of_service = value;
        outer_class_of_service.value_namespace = name_space;
        outer_class_of_service.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inner-class-of-service")
    {
        inner_class_of_service = value;
        inner_class_of_service.value_namespace = name_space;
        inner_class_of_service.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "payload-ethertype-match")
    {
        payload_ethertype_match = value;
        payload_ethertype_match.value_namespace = name_space;
        payload_ethertype_match.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ingress-source-mac")
    {
        ingress_source_mac = value;
        ingress_source_mac.value_namespace = name_space;
        ingress_source_mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ingress-destination-mac")
    {
        ingress_destination_mac = value;
        ingress_destination_mac.value_namespace = name_space;
        ingress_destination_mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exact")
    {
        exact = value;
        exact.value_namespace = name_space;
        exact.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetBng::AmbiguousEncapsulation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "outer-tag-type")
    {
        outer_tag_type.yfilter = yfilter;
    }
    if(value_path == "outer-range1-low")
    {
        outer_range1_low.yfilter = yfilter;
    }
    if(value_path == "outer-range1-high")
    {
        outer_range1_high.yfilter = yfilter;
    }
    if(value_path == "inner-tag-type")
    {
        inner_tag_type.yfilter = yfilter;
    }
    if(value_path == "inner-range1-low")
    {
        inner_range1_low.yfilter = yfilter;
    }
    if(value_path == "inner-range1-high")
    {
        inner_range1_high.yfilter = yfilter;
    }
    if(value_path == "additional-range1-low")
    {
        additional_range1_low.yfilter = yfilter;
    }
    if(value_path == "additional-range1-high")
    {
        additional_range1_high.yfilter = yfilter;
    }
    if(value_path == "additional-range2-low")
    {
        additional_range2_low.yfilter = yfilter;
    }
    if(value_path == "additional-range2-high")
    {
        additional_range2_high.yfilter = yfilter;
    }
    if(value_path == "additional-range3-low")
    {
        additional_range3_low.yfilter = yfilter;
    }
    if(value_path == "additional-range3-high")
    {
        additional_range3_high.yfilter = yfilter;
    }
    if(value_path == "additional-range4-low")
    {
        additional_range4_low.yfilter = yfilter;
    }
    if(value_path == "additional-range4-high")
    {
        additional_range4_high.yfilter = yfilter;
    }
    if(value_path == "additional-range5-low")
    {
        additional_range5_low.yfilter = yfilter;
    }
    if(value_path == "additional-range5-high")
    {
        additional_range5_high.yfilter = yfilter;
    }
    if(value_path == "additional-range6-low")
    {
        additional_range6_low.yfilter = yfilter;
    }
    if(value_path == "additional-range6-high")
    {
        additional_range6_high.yfilter = yfilter;
    }
    if(value_path == "additional-range7-low")
    {
        additional_range7_low.yfilter = yfilter;
    }
    if(value_path == "additional-range7-high")
    {
        additional_range7_high.yfilter = yfilter;
    }
    if(value_path == "additional-range8-low")
    {
        additional_range8_low.yfilter = yfilter;
    }
    if(value_path == "additional-range8-high")
    {
        additional_range8_high.yfilter = yfilter;
    }
    if(value_path == "outer-class-of-service")
    {
        outer_class_of_service.yfilter = yfilter;
    }
    if(value_path == "inner-class-of-service")
    {
        inner_class_of_service.yfilter = yfilter;
    }
    if(value_path == "payload-ethertype-match")
    {
        payload_ethertype_match.yfilter = yfilter;
    }
    if(value_path == "ingress-source-mac")
    {
        ingress_source_mac.yfilter = yfilter;
    }
    if(value_path == "ingress-destination-mac")
    {
        ingress_destination_mac.yfilter = yfilter;
    }
    if(value_path == "exact")
    {
        exact.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetBng::AmbiguousEncapsulation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "outer-tag-type" || name == "outer-range1-low" || name == "outer-range1-high" || name == "inner-tag-type" || name == "inner-range1-low" || name == "inner-range1-high" || name == "additional-range1-low" || name == "additional-range1-high" || name == "additional-range2-low" || name == "additional-range2-high" || name == "additional-range3-low" || name == "additional-range3-high" || name == "additional-range4-low" || name == "additional-range4-high" || name == "additional-range5-low" || name == "additional-range5-high" || name == "additional-range6-low" || name == "additional-range6-high" || name == "additional-range7-low" || name == "additional-range7-high" || name == "additional-range8-low" || name == "additional-range8-high" || name == "outer-class-of-service" || name == "inner-class-of-service" || name == "payload-ethertype-match" || name == "ingress-source-mac" || name == "ingress-destination-mac" || name == "exact")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::MacAccounting::MacAccounting()
    :
    ingress{YType::empty, "ingress"},
    egress{YType::empty, "egress"}
{

    yang_name = "mac-accounting"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::MacAccounting::~MacAccounting()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::MacAccounting::has_data() const
{
    if (is_presence_container) return true;
    return ingress.is_set
	|| egress.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::MacAccounting::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ingress.yfilter)
	|| ydk::is_set(egress.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::MacAccounting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2-eth-infra-cfg:mac-accounting";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::MacAccounting::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ingress.is_set || is_set(ingress.yfilter)) leaf_name_data.push_back(ingress.get_name_leafdata());
    if (egress.is_set || is_set(egress.yfilter)) leaf_name_data.push_back(egress.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::MacAccounting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::MacAccounting::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::MacAccounting::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ingress")
    {
        ingress = value;
        ingress.value_namespace = name_space;
        ingress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "egress")
    {
        egress = value;
        egress.value_namespace = name_space;
        egress.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::MacAccounting::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ingress")
    {
        ingress.yfilter = yfilter;
    }
    if(value_path == "egress")
    {
        egress.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::MacAccounting::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ingress" || name == "egress")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EthernetFeatures()
    :
    filtering{YType::enumeration, "filtering"},
    ether_link_oam_enable{YType::empty, "Cisco-IOS-XR-ethernet-link-oam-cfg:ether-link-oam-enable"}
        ,
    cfm(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm>())
    , ether_link_oam(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam>())
{
    cfm->parent = this;
    ether_link_oam->parent = this;

    yang_name = "ethernet-features"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::~EthernetFeatures()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::has_data() const
{
    if (is_presence_container) return true;
    return filtering.is_set
	|| ether_link_oam_enable.is_set
	|| (cfm !=  nullptr && cfm->has_data())
	|| (ether_link_oam !=  nullptr && ether_link_oam->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(filtering.yfilter)
	|| ydk::is_set(ether_link_oam_enable.yfilter)
	|| (cfm !=  nullptr && cfm->has_operation())
	|| (ether_link_oam !=  nullptr && ether_link_oam->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2-eth-infra-cfg:ethernet-features";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (filtering.is_set || is_set(filtering.yfilter)) leaf_name_data.push_back(filtering.get_name_leafdata());
    if (ether_link_oam_enable.is_set || is_set(ether_link_oam_enable.yfilter)) leaf_name_data.push_back(ether_link_oam_enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Cisco-IOS-XR-ethernet-cfm-cfg:cfm")
    {
        if(cfm == nullptr)
        {
            cfm = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm>();
        }
        return cfm;
    }

    if(child_yang_name == "Cisco-IOS-XR-ethernet-link-oam-cfg:ether-link-oam")
    {
        if(ether_link_oam == nullptr)
        {
            ether_link_oam = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam>();
        }
        return ether_link_oam;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(cfm != nullptr)
    {
        _children["Cisco-IOS-XR-ethernet-cfm-cfg:cfm"] = cfm;
    }

    if(ether_link_oam != nullptr)
    {
        _children["Cisco-IOS-XR-ethernet-link-oam-cfg:ether-link-oam"] = ether_link_oam;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "filtering")
    {
        filtering = value;
        filtering.value_namespace = name_space;
        filtering.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cisco-IOS-XR-ethernet-link-oam-cfg:ether-link-oam-enable")
    {
        ether_link_oam_enable = value;
        ether_link_oam_enable.value_namespace = name_space;
        ether_link_oam_enable.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "filtering")
    {
        filtering.yfilter = yfilter;
    }
    if(value_path == "ether-link-oam-enable")
    {
        ether_link_oam_enable.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cfm" || name == "ether-link-oam" || name == "filtering" || name == "ether-link-oam-enable")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Cfm()
    :
    domains(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains>())
    , ais_up(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::AisUp>())
{
    domains->parent = this;
    ais_up->parent = this;

    yang_name = "cfm"; yang_parent_name = "ethernet-features"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::~Cfm()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::has_data() const
{
    if (is_presence_container) return true;
    return (domains !=  nullptr && domains->has_data())
	|| (ais_up !=  nullptr && ais_up->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::has_operation() const
{
    return is_set(yfilter)
	|| (domains !=  nullptr && domains->has_operation())
	|| (ais_up !=  nullptr && ais_up->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ethernet-cfm-cfg:cfm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "domains")
    {
        if(domains == nullptr)
        {
            domains = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains>();
        }
        return domains;
    }

    if(child_yang_name == "ais-up")
    {
        if(ais_up == nullptr)
        {
            ais_up = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::AisUp>();
        }
        return ais_up;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(domains != nullptr)
    {
        _children["domains"] = domains;
    }

    if(ais_up != nullptr)
    {
        _children["ais-up"] = ais_up;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "domains" || name == "ais-up")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domains()
    :
    domain(this, {"domain"})
{

    yang_name = "domains"; yang_parent_name = "cfm"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::~Domains()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<domain.len(); index++)
    {
        if(domain[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::has_operation() const
{
    for (std::size_t index=0; index<domain.len(); index++)
    {
        if(domain[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "domains";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "domain")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain>();
        ent_->parent = this;
        domain.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : domain.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "domain")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Domain()
    :
    domain{YType::str, "domain"}
        ,
    mep(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep>())
{
    mep->parent = this;

    yang_name = "domain"; yang_parent_name = "domains"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::~Domain()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::has_data() const
{
    if (is_presence_container) return true;
    return domain.is_set
	|| (mep !=  nullptr && mep->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(domain.yfilter)
	|| (mep !=  nullptr && mep->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "domain";
    ADD_KEY_TOKEN(domain, "domain");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (domain.is_set || is_set(domain.yfilter)) leaf_name_data.push_back(domain.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mep")
    {
        if(mep == nullptr)
        {
            mep = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep>();
        }
        return mep;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mep != nullptr)
    {
        _children["mep"] = mep;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "domain")
    {
        domain = value;
        domain.value_namespace = name_space;
        domain.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "domain")
    {
        domain.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mep" || name == "domain")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::Mep()
    :
    cos{YType::uint32, "cos"}
        ,
    sla_profile_target_mep_ids(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::SlaProfileTargetMepIds>())
    , mep_properties(nullptr) // presence node
    , loss_measurement_counters(nullptr) // presence node
{
    sla_profile_target_mep_ids->parent = this;

    yang_name = "mep"; yang_parent_name = "domain"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::~Mep()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::has_data() const
{
    if (is_presence_container) return true;
    return cos.is_set
	|| (sla_profile_target_mep_ids !=  nullptr && sla_profile_target_mep_ids->has_data())
	|| (mep_properties !=  nullptr && mep_properties->has_data())
	|| (loss_measurement_counters !=  nullptr && loss_measurement_counters->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cos.yfilter)
	|| (sla_profile_target_mep_ids !=  nullptr && sla_profile_target_mep_ids->has_operation())
	|| (mep_properties !=  nullptr && mep_properties->has_operation())
	|| (loss_measurement_counters !=  nullptr && loss_measurement_counters->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mep";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cos.is_set || is_set(cos.yfilter)) leaf_name_data.push_back(cos.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sla-profile-target-mep-ids")
    {
        if(sla_profile_target_mep_ids == nullptr)
        {
            sla_profile_target_mep_ids = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::SlaProfileTargetMepIds>();
        }
        return sla_profile_target_mep_ids;
    }

    if(child_yang_name == "mep-properties")
    {
        if(mep_properties == nullptr)
        {
            mep_properties = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::MepProperties>();
        }
        return mep_properties;
    }

    if(child_yang_name == "loss-measurement-counters")
    {
        if(loss_measurement_counters == nullptr)
        {
            loss_measurement_counters = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::LossMeasurementCounters>();
        }
        return loss_measurement_counters;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(sla_profile_target_mep_ids != nullptr)
    {
        _children["sla-profile-target-mep-ids"] = sla_profile_target_mep_ids;
    }

    if(mep_properties != nullptr)
    {
        _children["mep-properties"] = mep_properties;
    }

    if(loss_measurement_counters != nullptr)
    {
        _children["loss-measurement-counters"] = loss_measurement_counters;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cos")
    {
        cos = value;
        cos.value_namespace = name_space;
        cos.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cos")
    {
        cos.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sla-profile-target-mep-ids" || name == "mep-properties" || name == "loss-measurement-counters" || name == "cos")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::SlaProfileTargetMepIds::SlaProfileTargetMepIds()
    :
    sla_profile_target_mep_id(this, {"profile", "target_mep_id"})
    , sla_profile_target_mac_address(this, {"profile", "target_mac_address"})
{

    yang_name = "sla-profile-target-mep-ids"; yang_parent_name = "mep"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::SlaProfileTargetMepIds::~SlaProfileTargetMepIds()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::SlaProfileTargetMepIds::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sla_profile_target_mep_id.len(); index++)
    {
        if(sla_profile_target_mep_id[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<sla_profile_target_mac_address.len(); index++)
    {
        if(sla_profile_target_mac_address[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::SlaProfileTargetMepIds::has_operation() const
{
    for (std::size_t index=0; index<sla_profile_target_mep_id.len(); index++)
    {
        if(sla_profile_target_mep_id[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<sla_profile_target_mac_address.len(); index++)
    {
        if(sla_profile_target_mac_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::SlaProfileTargetMepIds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sla-profile-target-mep-ids";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::SlaProfileTargetMepIds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::SlaProfileTargetMepIds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sla-profile-target-mep-id")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::SlaProfileTargetMepIds::SlaProfileTargetMepId>();
        ent_->parent = this;
        sla_profile_target_mep_id.append(ent_);
        return ent_;
    }

    if(child_yang_name == "sla-profile-target-mac-address")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::SlaProfileTargetMepIds::SlaProfileTargetMacAddress>();
        ent_->parent = this;
        sla_profile_target_mac_address.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::SlaProfileTargetMepIds::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : sla_profile_target_mep_id.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : sla_profile_target_mac_address.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::SlaProfileTargetMepIds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::SlaProfileTargetMepIds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::SlaProfileTargetMepIds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sla-profile-target-mep-id" || name == "sla-profile-target-mac-address")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::SlaProfileTargetMepIds::SlaProfileTargetMepId::SlaProfileTargetMepId()
    :
    profile{YType::str, "profile"},
    target_mep_id{YType::uint32, "target-mep-id"}
{

    yang_name = "sla-profile-target-mep-id"; yang_parent_name = "sla-profile-target-mep-ids"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::SlaProfileTargetMepIds::SlaProfileTargetMepId::~SlaProfileTargetMepId()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::SlaProfileTargetMepIds::SlaProfileTargetMepId::has_data() const
{
    if (is_presence_container) return true;
    return profile.is_set
	|| target_mep_id.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::SlaProfileTargetMepIds::SlaProfileTargetMepId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(profile.yfilter)
	|| ydk::is_set(target_mep_id.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::SlaProfileTargetMepIds::SlaProfileTargetMepId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sla-profile-target-mep-id";
    ADD_KEY_TOKEN(profile, "profile");
    ADD_KEY_TOKEN(target_mep_id, "target-mep-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::SlaProfileTargetMepIds::SlaProfileTargetMepId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (profile.is_set || is_set(profile.yfilter)) leaf_name_data.push_back(profile.get_name_leafdata());
    if (target_mep_id.is_set || is_set(target_mep_id.yfilter)) leaf_name_data.push_back(target_mep_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::SlaProfileTargetMepIds::SlaProfileTargetMepId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::SlaProfileTargetMepIds::SlaProfileTargetMepId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::SlaProfileTargetMepIds::SlaProfileTargetMepId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "profile")
    {
        profile = value;
        profile.value_namespace = name_space;
        profile.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "target-mep-id")
    {
        target_mep_id = value;
        target_mep_id.value_namespace = name_space;
        target_mep_id.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::SlaProfileTargetMepIds::SlaProfileTargetMepId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "profile")
    {
        profile.yfilter = yfilter;
    }
    if(value_path == "target-mep-id")
    {
        target_mep_id.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::SlaProfileTargetMepIds::SlaProfileTargetMepId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "profile" || name == "target-mep-id")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::SlaProfileTargetMepIds::SlaProfileTargetMacAddress::SlaProfileTargetMacAddress()
    :
    profile{YType::str, "profile"},
    target_mac_address{YType::str, "target-mac-address"}
{

    yang_name = "sla-profile-target-mac-address"; yang_parent_name = "sla-profile-target-mep-ids"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::SlaProfileTargetMepIds::SlaProfileTargetMacAddress::~SlaProfileTargetMacAddress()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::SlaProfileTargetMepIds::SlaProfileTargetMacAddress::has_data() const
{
    if (is_presence_container) return true;
    return profile.is_set
	|| target_mac_address.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::SlaProfileTargetMepIds::SlaProfileTargetMacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(profile.yfilter)
	|| ydk::is_set(target_mac_address.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::SlaProfileTargetMepIds::SlaProfileTargetMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sla-profile-target-mac-address";
    ADD_KEY_TOKEN(profile, "profile");
    ADD_KEY_TOKEN(target_mac_address, "target-mac-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::SlaProfileTargetMepIds::SlaProfileTargetMacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (profile.is_set || is_set(profile.yfilter)) leaf_name_data.push_back(profile.get_name_leafdata());
    if (target_mac_address.is_set || is_set(target_mac_address.yfilter)) leaf_name_data.push_back(target_mac_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::SlaProfileTargetMepIds::SlaProfileTargetMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::SlaProfileTargetMepIds::SlaProfileTargetMacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::SlaProfileTargetMepIds::SlaProfileTargetMacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "profile")
    {
        profile = value;
        profile.value_namespace = name_space;
        profile.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "target-mac-address")
    {
        target_mac_address = value;
        target_mac_address.value_namespace = name_space;
        target_mac_address.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::SlaProfileTargetMepIds::SlaProfileTargetMacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "profile")
    {
        profile.yfilter = yfilter;
    }
    if(value_path == "target-mac-address")
    {
        target_mac_address.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::SlaProfileTargetMepIds::SlaProfileTargetMacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "profile" || name == "target-mac-address")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::MepProperties::MepProperties()
    :
    service{YType::str, "service"},
    mep_id{YType::uint32, "mep-id"}
{

    yang_name = "mep-properties"; yang_parent_name = "mep"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::MepProperties::~MepProperties()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::MepProperties::has_data() const
{
    if (is_presence_container) return true;
    return service.is_set
	|| mep_id.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::MepProperties::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(service.yfilter)
	|| ydk::is_set(mep_id.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::MepProperties::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mep-properties";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::MepProperties::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service.is_set || is_set(service.yfilter)) leaf_name_data.push_back(service.get_name_leafdata());
    if (mep_id.is_set || is_set(mep_id.yfilter)) leaf_name_data.push_back(mep_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::MepProperties::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::MepProperties::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::MepProperties::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "service")
    {
        service = value;
        service.value_namespace = name_space;
        service.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mep-id")
    {
        mep_id = value;
        mep_id.value_namespace = name_space;
        mep_id.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::MepProperties::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "service")
    {
        service.yfilter = yfilter;
    }
    if(value_path == "mep-id")
    {
        mep_id.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::MepProperties::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service" || name == "mep-id")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::LossMeasurementCounters::LossMeasurementCounters()
    :
    cfg_type{YType::enumeration, "cfg-type"},
    cos0{YType::uint32, "cos0"},
    cos1{YType::uint32, "cos1"},
    cos2{YType::uint32, "cos2"},
    cos3{YType::uint32, "cos3"},
    cos4{YType::uint32, "cos4"},
    cos5{YType::uint32, "cos5"},
    cos6{YType::uint32, "cos6"},
    cos7{YType::uint32, "cos7"}
{

    yang_name = "loss-measurement-counters"; yang_parent_name = "mep"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::LossMeasurementCounters::~LossMeasurementCounters()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::LossMeasurementCounters::has_data() const
{
    if (is_presence_container) return true;
    return cfg_type.is_set
	|| cos0.is_set
	|| cos1.is_set
	|| cos2.is_set
	|| cos3.is_set
	|| cos4.is_set
	|| cos5.is_set
	|| cos6.is_set
	|| cos7.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::LossMeasurementCounters::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cfg_type.yfilter)
	|| ydk::is_set(cos0.yfilter)
	|| ydk::is_set(cos1.yfilter)
	|| ydk::is_set(cos2.yfilter)
	|| ydk::is_set(cos3.yfilter)
	|| ydk::is_set(cos4.yfilter)
	|| ydk::is_set(cos5.yfilter)
	|| ydk::is_set(cos6.yfilter)
	|| ydk::is_set(cos7.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::LossMeasurementCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "loss-measurement-counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::LossMeasurementCounters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cfg_type.is_set || is_set(cfg_type.yfilter)) leaf_name_data.push_back(cfg_type.get_name_leafdata());
    if (cos0.is_set || is_set(cos0.yfilter)) leaf_name_data.push_back(cos0.get_name_leafdata());
    if (cos1.is_set || is_set(cos1.yfilter)) leaf_name_data.push_back(cos1.get_name_leafdata());
    if (cos2.is_set || is_set(cos2.yfilter)) leaf_name_data.push_back(cos2.get_name_leafdata());
    if (cos3.is_set || is_set(cos3.yfilter)) leaf_name_data.push_back(cos3.get_name_leafdata());
    if (cos4.is_set || is_set(cos4.yfilter)) leaf_name_data.push_back(cos4.get_name_leafdata());
    if (cos5.is_set || is_set(cos5.yfilter)) leaf_name_data.push_back(cos5.get_name_leafdata());
    if (cos6.is_set || is_set(cos6.yfilter)) leaf_name_data.push_back(cos6.get_name_leafdata());
    if (cos7.is_set || is_set(cos7.yfilter)) leaf_name_data.push_back(cos7.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::LossMeasurementCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::LossMeasurementCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::LossMeasurementCounters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cfg-type")
    {
        cfg_type = value;
        cfg_type.value_namespace = name_space;
        cfg_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cos0")
    {
        cos0 = value;
        cos0.value_namespace = name_space;
        cos0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cos1")
    {
        cos1 = value;
        cos1.value_namespace = name_space;
        cos1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cos2")
    {
        cos2 = value;
        cos2.value_namespace = name_space;
        cos2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cos3")
    {
        cos3 = value;
        cos3.value_namespace = name_space;
        cos3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cos4")
    {
        cos4 = value;
        cos4.value_namespace = name_space;
        cos4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cos5")
    {
        cos5 = value;
        cos5.value_namespace = name_space;
        cos5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cos6")
    {
        cos6 = value;
        cos6.value_namespace = name_space;
        cos6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cos7")
    {
        cos7 = value;
        cos7.value_namespace = name_space;
        cos7.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::LossMeasurementCounters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cfg-type")
    {
        cfg_type.yfilter = yfilter;
    }
    if(value_path == "cos0")
    {
        cos0.yfilter = yfilter;
    }
    if(value_path == "cos1")
    {
        cos1.yfilter = yfilter;
    }
    if(value_path == "cos2")
    {
        cos2.yfilter = yfilter;
    }
    if(value_path == "cos3")
    {
        cos3.yfilter = yfilter;
    }
    if(value_path == "cos4")
    {
        cos4.yfilter = yfilter;
    }
    if(value_path == "cos5")
    {
        cos5.yfilter = yfilter;
    }
    if(value_path == "cos6")
    {
        cos6.yfilter = yfilter;
    }
    if(value_path == "cos7")
    {
        cos7.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::LossMeasurementCounters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cfg-type" || name == "cos0" || name == "cos1" || name == "cos2" || name == "cos3" || name == "cos4" || name == "cos5" || name == "cos6" || name == "cos7")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::AisUp::AisUp()
    :
    transmission(nullptr) // presence node
{

    yang_name = "ais-up"; yang_parent_name = "cfm"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::AisUp::~AisUp()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::AisUp::has_data() const
{
    if (is_presence_container) return true;
    return (transmission !=  nullptr && transmission->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::AisUp::has_operation() const
{
    return is_set(yfilter)
	|| (transmission !=  nullptr && transmission->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::AisUp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ais-up";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::AisUp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::AisUp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "transmission")
    {
        if(transmission == nullptr)
        {
            transmission = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::AisUp::Transmission>();
        }
        return transmission;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::AisUp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(transmission != nullptr)
    {
        _children["transmission"] = transmission;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::AisUp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::AisUp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::AisUp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "transmission")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::AisUp::Transmission::Transmission()
    :
    ais_interval{YType::enumeration, "ais-interval"},
    cos{YType::uint32, "cos"}
{

    yang_name = "transmission"; yang_parent_name = "ais-up"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::AisUp::Transmission::~Transmission()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::AisUp::Transmission::has_data() const
{
    if (is_presence_container) return true;
    return ais_interval.is_set
	|| cos.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::AisUp::Transmission::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ais_interval.yfilter)
	|| ydk::is_set(cos.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::AisUp::Transmission::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transmission";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::AisUp::Transmission::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ais_interval.is_set || is_set(ais_interval.yfilter)) leaf_name_data.push_back(ais_interval.get_name_leafdata());
    if (cos.is_set || is_set(cos.yfilter)) leaf_name_data.push_back(cos.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::AisUp::Transmission::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::AisUp::Transmission::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::AisUp::Transmission::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ais-interval")
    {
        ais_interval = value;
        ais_interval.value_namespace = name_space;
        ais_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cos")
    {
        cos = value;
        cos.value_namespace = name_space;
        cos.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::AisUp::Transmission::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ais-interval")
    {
        ais_interval.yfilter = yfilter;
    }
    if(value_path == "cos")
    {
        cos.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::AisUp::Transmission::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ais-interval" || name == "cos")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::EtherLinkOam()
    :
    timeout{YType::uint32, "timeout"},
    mode{YType::enumeration, "mode"},
    mib_retrieval{YType::boolean, "mib-retrieval"},
    profile_name{YType::str, "profile-name"},
    remote_loopback{YType::boolean, "remote-loopback"},
    hello_interval{YType::enumeration, "hello-interval"},
    udlf{YType::boolean, "udlf"}
        ,
    action(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::Action>())
    , require_remote(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::RequireRemote>())
    , link_monitoring(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring>())
{
    action->parent = this;
    require_remote->parent = this;
    link_monitoring->parent = this;

    yang_name = "ether-link-oam"; yang_parent_name = "ethernet-features"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::~EtherLinkOam()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::has_data() const
{
    if (is_presence_container) return true;
    return timeout.is_set
	|| mode.is_set
	|| mib_retrieval.is_set
	|| profile_name.is_set
	|| remote_loopback.is_set
	|| hello_interval.is_set
	|| udlf.is_set
	|| (action !=  nullptr && action->has_data())
	|| (require_remote !=  nullptr && require_remote->has_data())
	|| (link_monitoring !=  nullptr && link_monitoring->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(timeout.yfilter)
	|| ydk::is_set(mode.yfilter)
	|| ydk::is_set(mib_retrieval.yfilter)
	|| ydk::is_set(profile_name.yfilter)
	|| ydk::is_set(remote_loopback.yfilter)
	|| ydk::is_set(hello_interval.yfilter)
	|| ydk::is_set(udlf.yfilter)
	|| (action !=  nullptr && action->has_operation())
	|| (require_remote !=  nullptr && require_remote->has_operation())
	|| (link_monitoring !=  nullptr && link_monitoring->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ethernet-link-oam-cfg:ether-link-oam";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (mib_retrieval.is_set || is_set(mib_retrieval.yfilter)) leaf_name_data.push_back(mib_retrieval.get_name_leafdata());
    if (profile_name.is_set || is_set(profile_name.yfilter)) leaf_name_data.push_back(profile_name.get_name_leafdata());
    if (remote_loopback.is_set || is_set(remote_loopback.yfilter)) leaf_name_data.push_back(remote_loopback.get_name_leafdata());
    if (hello_interval.is_set || is_set(hello_interval.yfilter)) leaf_name_data.push_back(hello_interval.get_name_leafdata());
    if (udlf.is_set || is_set(udlf.yfilter)) leaf_name_data.push_back(udlf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "action")
    {
        if(action == nullptr)
        {
            action = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::Action>();
        }
        return action;
    }

    if(child_yang_name == "require-remote")
    {
        if(require_remote == nullptr)
        {
            require_remote = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::RequireRemote>();
        }
        return require_remote;
    }

    if(child_yang_name == "link-monitoring")
    {
        if(link_monitoring == nullptr)
        {
            link_monitoring = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring>();
        }
        return link_monitoring;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(action != nullptr)
    {
        _children["action"] = action;
    }

    if(require_remote != nullptr)
    {
        _children["require-remote"] = require_remote;
    }

    if(link_monitoring != nullptr)
    {
        _children["link-monitoring"] = link_monitoring;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mib-retrieval")
    {
        mib_retrieval = value;
        mib_retrieval.value_namespace = name_space;
        mib_retrieval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "profile-name")
    {
        profile_name = value;
        profile_name.value_namespace = name_space;
        profile_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-loopback")
    {
        remote_loopback = value;
        remote_loopback.value_namespace = name_space;
        remote_loopback.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-interval")
    {
        hello_interval = value;
        hello_interval.value_namespace = name_space;
        hello_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "udlf")
    {
        udlf = value;
        udlf.value_namespace = name_space;
        udlf.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
    if(value_path == "mib-retrieval")
    {
        mib_retrieval.yfilter = yfilter;
    }
    if(value_path == "profile-name")
    {
        profile_name.yfilter = yfilter;
    }
    if(value_path == "remote-loopback")
    {
        remote_loopback.yfilter = yfilter;
    }
    if(value_path == "hello-interval")
    {
        hello_interval.yfilter = yfilter;
    }
    if(value_path == "udlf")
    {
        udlf.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "action" || name == "require-remote" || name == "link-monitoring" || name == "timeout" || name == "mode" || name == "mib-retrieval" || name == "profile-name" || name == "remote-loopback" || name == "hello-interval" || name == "udlf")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::Action::Action()
    :
    dying_gasp{YType::enumeration, "dying-gasp"},
    link_fault{YType::enumeration, "link-fault"},
    capabilities_conflict{YType::enumeration, "capabilities-conflict"},
    session_up{YType::enumeration, "session-up"},
    critical_event{YType::enumeration, "critical-event"},
    remote_loopback{YType::enumeration, "remote-loopback"},
    wiring_conflict{YType::enumeration, "wiring-conflict"},
    high_threshold{YType::enumeration, "high-threshold"},
    discovery_timeout{YType::enumeration, "discovery-timeout"},
    session_down{YType::enumeration, "session-down"}
{

    yang_name = "action"; yang_parent_name = "ether-link-oam"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::Action::~Action()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::Action::has_data() const
{
    if (is_presence_container) return true;
    return dying_gasp.is_set
	|| link_fault.is_set
	|| capabilities_conflict.is_set
	|| session_up.is_set
	|| critical_event.is_set
	|| remote_loopback.is_set
	|| wiring_conflict.is_set
	|| high_threshold.is_set
	|| discovery_timeout.is_set
	|| session_down.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::Action::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dying_gasp.yfilter)
	|| ydk::is_set(link_fault.yfilter)
	|| ydk::is_set(capabilities_conflict.yfilter)
	|| ydk::is_set(session_up.yfilter)
	|| ydk::is_set(critical_event.yfilter)
	|| ydk::is_set(remote_loopback.yfilter)
	|| ydk::is_set(wiring_conflict.yfilter)
	|| ydk::is_set(high_threshold.yfilter)
	|| ydk::is_set(discovery_timeout.yfilter)
	|| ydk::is_set(session_down.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::Action::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::Action::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dying_gasp.is_set || is_set(dying_gasp.yfilter)) leaf_name_data.push_back(dying_gasp.get_name_leafdata());
    if (link_fault.is_set || is_set(link_fault.yfilter)) leaf_name_data.push_back(link_fault.get_name_leafdata());
    if (capabilities_conflict.is_set || is_set(capabilities_conflict.yfilter)) leaf_name_data.push_back(capabilities_conflict.get_name_leafdata());
    if (session_up.is_set || is_set(session_up.yfilter)) leaf_name_data.push_back(session_up.get_name_leafdata());
    if (critical_event.is_set || is_set(critical_event.yfilter)) leaf_name_data.push_back(critical_event.get_name_leafdata());
    if (remote_loopback.is_set || is_set(remote_loopback.yfilter)) leaf_name_data.push_back(remote_loopback.get_name_leafdata());
    if (wiring_conflict.is_set || is_set(wiring_conflict.yfilter)) leaf_name_data.push_back(wiring_conflict.get_name_leafdata());
    if (high_threshold.is_set || is_set(high_threshold.yfilter)) leaf_name_data.push_back(high_threshold.get_name_leafdata());
    if (discovery_timeout.is_set || is_set(discovery_timeout.yfilter)) leaf_name_data.push_back(discovery_timeout.get_name_leafdata());
    if (session_down.is_set || is_set(session_down.yfilter)) leaf_name_data.push_back(session_down.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::Action::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::Action::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::Action::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dying-gasp")
    {
        dying_gasp = value;
        dying_gasp.value_namespace = name_space;
        dying_gasp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-fault")
    {
        link_fault = value;
        link_fault.value_namespace = name_space;
        link_fault.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "capabilities-conflict")
    {
        capabilities_conflict = value;
        capabilities_conflict.value_namespace = name_space;
        capabilities_conflict.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-up")
    {
        session_up = value;
        session_up.value_namespace = name_space;
        session_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "critical-event")
    {
        critical_event = value;
        critical_event.value_namespace = name_space;
        critical_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-loopback")
    {
        remote_loopback = value;
        remote_loopback.value_namespace = name_space;
        remote_loopback.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wiring-conflict")
    {
        wiring_conflict = value;
        wiring_conflict.value_namespace = name_space;
        wiring_conflict.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "high-threshold")
    {
        high_threshold = value;
        high_threshold.value_namespace = name_space;
        high_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "discovery-timeout")
    {
        discovery_timeout = value;
        discovery_timeout.value_namespace = name_space;
        discovery_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-down")
    {
        session_down = value;
        session_down.value_namespace = name_space;
        session_down.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::Action::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dying-gasp")
    {
        dying_gasp.yfilter = yfilter;
    }
    if(value_path == "link-fault")
    {
        link_fault.yfilter = yfilter;
    }
    if(value_path == "capabilities-conflict")
    {
        capabilities_conflict.yfilter = yfilter;
    }
    if(value_path == "session-up")
    {
        session_up.yfilter = yfilter;
    }
    if(value_path == "critical-event")
    {
        critical_event.yfilter = yfilter;
    }
    if(value_path == "remote-loopback")
    {
        remote_loopback.yfilter = yfilter;
    }
    if(value_path == "wiring-conflict")
    {
        wiring_conflict.yfilter = yfilter;
    }
    if(value_path == "high-threshold")
    {
        high_threshold.yfilter = yfilter;
    }
    if(value_path == "discovery-timeout")
    {
        discovery_timeout.yfilter = yfilter;
    }
    if(value_path == "session-down")
    {
        session_down.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::Action::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dying-gasp" || name == "link-fault" || name == "capabilities-conflict" || name == "session-up" || name == "critical-event" || name == "remote-loopback" || name == "wiring-conflict" || name == "high-threshold" || name == "discovery-timeout" || name == "session-down")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::RequireRemote::RequireRemote()
    :
    mode{YType::enumeration, "mode"},
    mib_retrieval{YType::boolean, "mib-retrieval"},
    remote_loopback{YType::boolean, "remote-loopback"},
    link_monitoring{YType::boolean, "link-monitoring"}
{

    yang_name = "require-remote"; yang_parent_name = "ether-link-oam"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::RequireRemote::~RequireRemote()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::RequireRemote::has_data() const
{
    if (is_presence_container) return true;
    return mode.is_set
	|| mib_retrieval.is_set
	|| remote_loopback.is_set
	|| link_monitoring.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::RequireRemote::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mode.yfilter)
	|| ydk::is_set(mib_retrieval.yfilter)
	|| ydk::is_set(remote_loopback.yfilter)
	|| ydk::is_set(link_monitoring.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::RequireRemote::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "require-remote";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::RequireRemote::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (mib_retrieval.is_set || is_set(mib_retrieval.yfilter)) leaf_name_data.push_back(mib_retrieval.get_name_leafdata());
    if (remote_loopback.is_set || is_set(remote_loopback.yfilter)) leaf_name_data.push_back(remote_loopback.get_name_leafdata());
    if (link_monitoring.is_set || is_set(link_monitoring.yfilter)) leaf_name_data.push_back(link_monitoring.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::RequireRemote::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::RequireRemote::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::RequireRemote::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mib-retrieval")
    {
        mib_retrieval = value;
        mib_retrieval.value_namespace = name_space;
        mib_retrieval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-loopback")
    {
        remote_loopback = value;
        remote_loopback.value_namespace = name_space;
        remote_loopback.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-monitoring")
    {
        link_monitoring = value;
        link_monitoring.value_namespace = name_space;
        link_monitoring.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::RequireRemote::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
    if(value_path == "mib-retrieval")
    {
        mib_retrieval.yfilter = yfilter;
    }
    if(value_path == "remote-loopback")
    {
        remote_loopback.yfilter = yfilter;
    }
    if(value_path == "link-monitoring")
    {
        link_monitoring.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::RequireRemote::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mode" || name == "mib-retrieval" || name == "remote-loopback" || name == "link-monitoring")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::LinkMonitoring()
    :
    monitoring{YType::boolean, "monitoring"}
        ,
    symbol_period(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::SymbolPeriod>())
    , frame_period(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FramePeriod>())
    , frame_seconds(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FrameSeconds>())
    , frame(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::Frame>())
{
    symbol_period->parent = this;
    frame_period->parent = this;
    frame_seconds->parent = this;
    frame->parent = this;

    yang_name = "link-monitoring"; yang_parent_name = "ether-link-oam"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::~LinkMonitoring()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::has_data() const
{
    if (is_presence_container) return true;
    return monitoring.is_set
	|| (symbol_period !=  nullptr && symbol_period->has_data())
	|| (frame_period !=  nullptr && frame_period->has_data())
	|| (frame_seconds !=  nullptr && frame_seconds->has_data())
	|| (frame !=  nullptr && frame->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(monitoring.yfilter)
	|| (symbol_period !=  nullptr && symbol_period->has_operation())
	|| (frame_period !=  nullptr && frame_period->has_operation())
	|| (frame_seconds !=  nullptr && frame_seconds->has_operation())
	|| (frame !=  nullptr && frame->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-monitoring";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (monitoring.is_set || is_set(monitoring.yfilter)) leaf_name_data.push_back(monitoring.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "symbol-period")
    {
        if(symbol_period == nullptr)
        {
            symbol_period = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::SymbolPeriod>();
        }
        return symbol_period;
    }

    if(child_yang_name == "frame-period")
    {
        if(frame_period == nullptr)
        {
            frame_period = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FramePeriod>();
        }
        return frame_period;
    }

    if(child_yang_name == "frame-seconds")
    {
        if(frame_seconds == nullptr)
        {
            frame_seconds = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FrameSeconds>();
        }
        return frame_seconds;
    }

    if(child_yang_name == "frame")
    {
        if(frame == nullptr)
        {
            frame = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::Frame>();
        }
        return frame;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(symbol_period != nullptr)
    {
        _children["symbol-period"] = symbol_period;
    }

    if(frame_period != nullptr)
    {
        _children["frame-period"] = frame_period;
    }

    if(frame_seconds != nullptr)
    {
        _children["frame-seconds"] = frame_seconds;
    }

    if(frame != nullptr)
    {
        _children["frame"] = frame;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "monitoring")
    {
        monitoring = value;
        monitoring.value_namespace = name_space;
        monitoring.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "monitoring")
    {
        monitoring.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "symbol-period" || name == "frame-period" || name == "frame-seconds" || name == "frame" || name == "monitoring")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::SymbolPeriod::SymbolPeriod()
    :
    window(nullptr) // presence node
    , threshold(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::SymbolPeriod::Threshold>())
{
    threshold->parent = this;

    yang_name = "symbol-period"; yang_parent_name = "link-monitoring"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::SymbolPeriod::~SymbolPeriod()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::SymbolPeriod::has_data() const
{
    if (is_presence_container) return true;
    return (window !=  nullptr && window->has_data())
	|| (threshold !=  nullptr && threshold->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::SymbolPeriod::has_operation() const
{
    return is_set(yfilter)
	|| (window !=  nullptr && window->has_operation())
	|| (threshold !=  nullptr && threshold->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::SymbolPeriod::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "symbol-period";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::SymbolPeriod::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::SymbolPeriod::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "window")
    {
        if(window == nullptr)
        {
            window = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::SymbolPeriod::Window>();
        }
        return window;
    }

    if(child_yang_name == "threshold")
    {
        if(threshold == nullptr)
        {
            threshold = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::SymbolPeriod::Threshold>();
        }
        return threshold;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::SymbolPeriod::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(window != nullptr)
    {
        _children["window"] = window;
    }

    if(threshold != nullptr)
    {
        _children["threshold"] = threshold;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::SymbolPeriod::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::SymbolPeriod::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::SymbolPeriod::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "window" || name == "threshold")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::SymbolPeriod::Window::Window()
    :
    window{YType::uint32, "window"},
    units{YType::enumeration, "units"},
    multiplier{YType::enumeration, "multiplier"}
{

    yang_name = "window"; yang_parent_name = "symbol-period"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::SymbolPeriod::Window::~Window()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::SymbolPeriod::Window::has_data() const
{
    if (is_presence_container) return true;
    return window.is_set
	|| units.is_set
	|| multiplier.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::SymbolPeriod::Window::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(window.yfilter)
	|| ydk::is_set(units.yfilter)
	|| ydk::is_set(multiplier.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::SymbolPeriod::Window::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "window";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::SymbolPeriod::Window::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (window.is_set || is_set(window.yfilter)) leaf_name_data.push_back(window.get_name_leafdata());
    if (units.is_set || is_set(units.yfilter)) leaf_name_data.push_back(units.get_name_leafdata());
    if (multiplier.is_set || is_set(multiplier.yfilter)) leaf_name_data.push_back(multiplier.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::SymbolPeriod::Window::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::SymbolPeriod::Window::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::SymbolPeriod::Window::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "window")
    {
        window = value;
        window.value_namespace = name_space;
        window.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "units")
    {
        units = value;
        units.value_namespace = name_space;
        units.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multiplier")
    {
        multiplier = value;
        multiplier.value_namespace = name_space;
        multiplier.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::SymbolPeriod::Window::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "window")
    {
        window.yfilter = yfilter;
    }
    if(value_path == "units")
    {
        units.yfilter = yfilter;
    }
    if(value_path == "multiplier")
    {
        multiplier.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::SymbolPeriod::Window::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "window" || name == "units" || name == "multiplier")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::SymbolPeriod::Threshold::Threshold()
    :
    threshold_low{YType::uint32, "threshold-low"},
    threshold_high{YType::uint32, "threshold-high"},
    units{YType::enumeration, "units"},
    multiplier_low{YType::enumeration, "multiplier-low"},
    multiplier_high{YType::enumeration, "multiplier-high"}
{

    yang_name = "threshold"; yang_parent_name = "symbol-period"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::SymbolPeriod::Threshold::~Threshold()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::SymbolPeriod::Threshold::has_data() const
{
    if (is_presence_container) return true;
    return threshold_low.is_set
	|| threshold_high.is_set
	|| units.is_set
	|| multiplier_low.is_set
	|| multiplier_high.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::SymbolPeriod::Threshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threshold_low.yfilter)
	|| ydk::is_set(threshold_high.yfilter)
	|| ydk::is_set(units.yfilter)
	|| ydk::is_set(multiplier_low.yfilter)
	|| ydk::is_set(multiplier_high.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::SymbolPeriod::Threshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::SymbolPeriod::Threshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold_low.is_set || is_set(threshold_low.yfilter)) leaf_name_data.push_back(threshold_low.get_name_leafdata());
    if (threshold_high.is_set || is_set(threshold_high.yfilter)) leaf_name_data.push_back(threshold_high.get_name_leafdata());
    if (units.is_set || is_set(units.yfilter)) leaf_name_data.push_back(units.get_name_leafdata());
    if (multiplier_low.is_set || is_set(multiplier_low.yfilter)) leaf_name_data.push_back(multiplier_low.get_name_leafdata());
    if (multiplier_high.is_set || is_set(multiplier_high.yfilter)) leaf_name_data.push_back(multiplier_high.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::SymbolPeriod::Threshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::SymbolPeriod::Threshold::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::SymbolPeriod::Threshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threshold-low")
    {
        threshold_low = value;
        threshold_low.value_namespace = name_space;
        threshold_low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-high")
    {
        threshold_high = value;
        threshold_high.value_namespace = name_space;
        threshold_high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "units")
    {
        units = value;
        units.value_namespace = name_space;
        units.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multiplier-low")
    {
        multiplier_low = value;
        multiplier_low.value_namespace = name_space;
        multiplier_low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multiplier-high")
    {
        multiplier_high = value;
        multiplier_high.value_namespace = name_space;
        multiplier_high.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::SymbolPeriod::Threshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threshold-low")
    {
        threshold_low.yfilter = yfilter;
    }
    if(value_path == "threshold-high")
    {
        threshold_high.yfilter = yfilter;
    }
    if(value_path == "units")
    {
        units.yfilter = yfilter;
    }
    if(value_path == "multiplier-low")
    {
        multiplier_low.yfilter = yfilter;
    }
    if(value_path == "multiplier-high")
    {
        multiplier_high.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::SymbolPeriod::Threshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold-low" || name == "threshold-high" || name == "units" || name == "multiplier-low" || name == "multiplier-high")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FramePeriod::FramePeriod()
    :
    window(nullptr) // presence node
    , threshold(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FramePeriod::Threshold>())
{
    threshold->parent = this;

    yang_name = "frame-period"; yang_parent_name = "link-monitoring"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FramePeriod::~FramePeriod()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FramePeriod::has_data() const
{
    if (is_presence_container) return true;
    return (window !=  nullptr && window->has_data())
	|| (threshold !=  nullptr && threshold->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FramePeriod::has_operation() const
{
    return is_set(yfilter)
	|| (window !=  nullptr && window->has_operation())
	|| (threshold !=  nullptr && threshold->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FramePeriod::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frame-period";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FramePeriod::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FramePeriod::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "window")
    {
        if(window == nullptr)
        {
            window = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FramePeriod::Window>();
        }
        return window;
    }

    if(child_yang_name == "threshold")
    {
        if(threshold == nullptr)
        {
            threshold = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FramePeriod::Threshold>();
        }
        return threshold;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FramePeriod::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(window != nullptr)
    {
        _children["window"] = window;
    }

    if(threshold != nullptr)
    {
        _children["threshold"] = threshold;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FramePeriod::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FramePeriod::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FramePeriod::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "window" || name == "threshold")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FramePeriod::Window::Window()
    :
    window{YType::uint32, "window"},
    units{YType::enumeration, "units"},
    multiplier{YType::enumeration, "multiplier"}
{

    yang_name = "window"; yang_parent_name = "frame-period"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FramePeriod::Window::~Window()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FramePeriod::Window::has_data() const
{
    if (is_presence_container) return true;
    return window.is_set
	|| units.is_set
	|| multiplier.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FramePeriod::Window::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(window.yfilter)
	|| ydk::is_set(units.yfilter)
	|| ydk::is_set(multiplier.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FramePeriod::Window::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "window";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FramePeriod::Window::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (window.is_set || is_set(window.yfilter)) leaf_name_data.push_back(window.get_name_leafdata());
    if (units.is_set || is_set(units.yfilter)) leaf_name_data.push_back(units.get_name_leafdata());
    if (multiplier.is_set || is_set(multiplier.yfilter)) leaf_name_data.push_back(multiplier.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FramePeriod::Window::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FramePeriod::Window::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FramePeriod::Window::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "window")
    {
        window = value;
        window.value_namespace = name_space;
        window.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "units")
    {
        units = value;
        units.value_namespace = name_space;
        units.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multiplier")
    {
        multiplier = value;
        multiplier.value_namespace = name_space;
        multiplier.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FramePeriod::Window::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "window")
    {
        window.yfilter = yfilter;
    }
    if(value_path == "units")
    {
        units.yfilter = yfilter;
    }
    if(value_path == "multiplier")
    {
        multiplier.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FramePeriod::Window::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "window" || name == "units" || name == "multiplier")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FramePeriod::Threshold::Threshold()
    :
    threshold_low{YType::uint32, "threshold-low"},
    threshold_high{YType::uint32, "threshold-high"},
    units{YType::enumeration, "units"},
    multiplier_low{YType::enumeration, "multiplier-low"},
    multiplier_high{YType::enumeration, "multiplier-high"}
{

    yang_name = "threshold"; yang_parent_name = "frame-period"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FramePeriod::Threshold::~Threshold()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FramePeriod::Threshold::has_data() const
{
    if (is_presence_container) return true;
    return threshold_low.is_set
	|| threshold_high.is_set
	|| units.is_set
	|| multiplier_low.is_set
	|| multiplier_high.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FramePeriod::Threshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threshold_low.yfilter)
	|| ydk::is_set(threshold_high.yfilter)
	|| ydk::is_set(units.yfilter)
	|| ydk::is_set(multiplier_low.yfilter)
	|| ydk::is_set(multiplier_high.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FramePeriod::Threshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FramePeriod::Threshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold_low.is_set || is_set(threshold_low.yfilter)) leaf_name_data.push_back(threshold_low.get_name_leafdata());
    if (threshold_high.is_set || is_set(threshold_high.yfilter)) leaf_name_data.push_back(threshold_high.get_name_leafdata());
    if (units.is_set || is_set(units.yfilter)) leaf_name_data.push_back(units.get_name_leafdata());
    if (multiplier_low.is_set || is_set(multiplier_low.yfilter)) leaf_name_data.push_back(multiplier_low.get_name_leafdata());
    if (multiplier_high.is_set || is_set(multiplier_high.yfilter)) leaf_name_data.push_back(multiplier_high.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FramePeriod::Threshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FramePeriod::Threshold::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FramePeriod::Threshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threshold-low")
    {
        threshold_low = value;
        threshold_low.value_namespace = name_space;
        threshold_low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-high")
    {
        threshold_high = value;
        threshold_high.value_namespace = name_space;
        threshold_high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "units")
    {
        units = value;
        units.value_namespace = name_space;
        units.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multiplier-low")
    {
        multiplier_low = value;
        multiplier_low.value_namespace = name_space;
        multiplier_low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multiplier-high")
    {
        multiplier_high = value;
        multiplier_high.value_namespace = name_space;
        multiplier_high.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FramePeriod::Threshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threshold-low")
    {
        threshold_low.yfilter = yfilter;
    }
    if(value_path == "threshold-high")
    {
        threshold_high.yfilter = yfilter;
    }
    if(value_path == "units")
    {
        units.yfilter = yfilter;
    }
    if(value_path == "multiplier-low")
    {
        multiplier_low.yfilter = yfilter;
    }
    if(value_path == "multiplier-high")
    {
        multiplier_high.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FramePeriod::Threshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold-low" || name == "threshold-high" || name == "units" || name == "multiplier-low" || name == "multiplier-high")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FrameSeconds::FrameSeconds()
    :
    window{YType::uint32, "window"}
        ,
    threshold(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FrameSeconds::Threshold>())
{
    threshold->parent = this;

    yang_name = "frame-seconds"; yang_parent_name = "link-monitoring"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FrameSeconds::~FrameSeconds()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FrameSeconds::has_data() const
{
    if (is_presence_container) return true;
    return window.is_set
	|| (threshold !=  nullptr && threshold->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FrameSeconds::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(window.yfilter)
	|| (threshold !=  nullptr && threshold->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FrameSeconds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frame-seconds";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FrameSeconds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (window.is_set || is_set(window.yfilter)) leaf_name_data.push_back(window.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FrameSeconds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "threshold")
    {
        if(threshold == nullptr)
        {
            threshold = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FrameSeconds::Threshold>();
        }
        return threshold;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FrameSeconds::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(threshold != nullptr)
    {
        _children["threshold"] = threshold;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FrameSeconds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "window")
    {
        window = value;
        window.value_namespace = name_space;
        window.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FrameSeconds::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "window")
    {
        window.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FrameSeconds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold" || name == "window")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FrameSeconds::Threshold::Threshold()
    :
    threshold_low{YType::uint32, "threshold-low"},
    threshold_high{YType::uint32, "threshold-high"}
{

    yang_name = "threshold"; yang_parent_name = "frame-seconds"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FrameSeconds::Threshold::~Threshold()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FrameSeconds::Threshold::has_data() const
{
    if (is_presence_container) return true;
    return threshold_low.is_set
	|| threshold_high.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FrameSeconds::Threshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threshold_low.yfilter)
	|| ydk::is_set(threshold_high.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FrameSeconds::Threshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FrameSeconds::Threshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold_low.is_set || is_set(threshold_low.yfilter)) leaf_name_data.push_back(threshold_low.get_name_leafdata());
    if (threshold_high.is_set || is_set(threshold_high.yfilter)) leaf_name_data.push_back(threshold_high.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FrameSeconds::Threshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FrameSeconds::Threshold::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FrameSeconds::Threshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threshold-low")
    {
        threshold_low = value;
        threshold_low.value_namespace = name_space;
        threshold_low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-high")
    {
        threshold_high = value;
        threshold_high.value_namespace = name_space;
        threshold_high.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FrameSeconds::Threshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threshold-low")
    {
        threshold_low.yfilter = yfilter;
    }
    if(value_path == "threshold-high")
    {
        threshold_high.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FrameSeconds::Threshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold-low" || name == "threshold-high")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::Frame::Frame()
    :
    window{YType::uint32, "window"}
        ,
    threshold(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::Frame::Threshold>())
{
    threshold->parent = this;

    yang_name = "frame"; yang_parent_name = "link-monitoring"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::Frame::~Frame()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::Frame::has_data() const
{
    if (is_presence_container) return true;
    return window.is_set
	|| (threshold !=  nullptr && threshold->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::Frame::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(window.yfilter)
	|| (threshold !=  nullptr && threshold->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::Frame::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frame";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::Frame::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (window.is_set || is_set(window.yfilter)) leaf_name_data.push_back(window.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::Frame::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "threshold")
    {
        if(threshold == nullptr)
        {
            threshold = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::Frame::Threshold>();
        }
        return threshold;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::Frame::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(threshold != nullptr)
    {
        _children["threshold"] = threshold;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::Frame::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "window")
    {
        window = value;
        window.value_namespace = name_space;
        window.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::Frame::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "window")
    {
        window.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::Frame::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold" || name == "window")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::Frame::Threshold::Threshold()
    :
    threshold_low{YType::uint32, "threshold-low"},
    threshold_high{YType::uint32, "threshold-high"},
    multiplier_low{YType::enumeration, "multiplier-low"},
    multiplier_high{YType::enumeration, "multiplier-high"}
{

    yang_name = "threshold"; yang_parent_name = "frame"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::Frame::Threshold::~Threshold()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::Frame::Threshold::has_data() const
{
    if (is_presence_container) return true;
    return threshold_low.is_set
	|| threshold_high.is_set
	|| multiplier_low.is_set
	|| multiplier_high.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::Frame::Threshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threshold_low.yfilter)
	|| ydk::is_set(threshold_high.yfilter)
	|| ydk::is_set(multiplier_low.yfilter)
	|| ydk::is_set(multiplier_high.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::Frame::Threshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::Frame::Threshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold_low.is_set || is_set(threshold_low.yfilter)) leaf_name_data.push_back(threshold_low.get_name_leafdata());
    if (threshold_high.is_set || is_set(threshold_high.yfilter)) leaf_name_data.push_back(threshold_high.get_name_leafdata());
    if (multiplier_low.is_set || is_set(multiplier_low.yfilter)) leaf_name_data.push_back(multiplier_low.get_name_leafdata());
    if (multiplier_high.is_set || is_set(multiplier_high.yfilter)) leaf_name_data.push_back(multiplier_high.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::Frame::Threshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::Frame::Threshold::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::Frame::Threshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threshold-low")
    {
        threshold_low = value;
        threshold_low.value_namespace = name_space;
        threshold_low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-high")
    {
        threshold_high = value;
        threshold_high.value_namespace = name_space;
        threshold_high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multiplier-low")
    {
        multiplier_low = value;
        multiplier_low.value_namespace = name_space;
        multiplier_low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multiplier-high")
    {
        multiplier_high = value;
        multiplier_high.value_namespace = name_space;
        multiplier_high.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::Frame::Threshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threshold-low")
    {
        threshold_low.yfilter = yfilter;
    }
    if(value_path == "threshold-high")
    {
        threshold_high.yfilter = yfilter;
    }
    if(value_path == "multiplier-low")
    {
        multiplier_low.yfilter = yfilter;
    }
    if(value_path == "multiplier-high")
    {
        multiplier_high.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::Frame::Threshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold-low" || name == "threshold-high" || name == "multiplier-low" || name == "multiplier-high")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::CarrierDelay::CarrierDelay()
    :
    carrier_delay_up{YType::uint32, "carrier-delay-up"},
    carrier_delay_down{YType::uint32, "carrier-delay-down"}
{

    yang_name = "carrier-delay"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::CarrierDelay::~CarrierDelay()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::CarrierDelay::has_data() const
{
    if (is_presence_container) return true;
    return carrier_delay_up.is_set
	|| carrier_delay_down.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::CarrierDelay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(carrier_delay_up.yfilter)
	|| ydk::is_set(carrier_delay_down.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::CarrierDelay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2-eth-infra-cfg:carrier-delay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::CarrierDelay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (carrier_delay_up.is_set || is_set(carrier_delay_up.yfilter)) leaf_name_data.push_back(carrier_delay_up.get_name_leafdata());
    if (carrier_delay_down.is_set || is_set(carrier_delay_down.yfilter)) leaf_name_data.push_back(carrier_delay_down.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::CarrierDelay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::CarrierDelay::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::CarrierDelay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "carrier-delay-up")
    {
        carrier_delay_up = value;
        carrier_delay_up.value_namespace = name_space;
        carrier_delay_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "carrier-delay-down")
    {
        carrier_delay_down = value;
        carrier_delay_down.value_namespace = name_space;
        carrier_delay_down.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::CarrierDelay::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "carrier-delay-up")
    {
        carrier_delay_up.yfilter = yfilter;
    }
    if(value_path == "carrier-delay-down")
    {
        carrier_delay_down.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::CarrierDelay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "carrier-delay-up" || name == "carrier-delay-down")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration::VlanTrunkConfiguration()
    :
    tunneling_ethertype{YType::enumeration, "tunneling-ethertype"}
        ,
    native_vlan_identifier(nullptr) // presence node
    , vlan_switched(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration::VlanSwitched>())
{
    vlan_switched->parent = this;

    yang_name = "vlan-trunk-configuration"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration::~VlanTrunkConfiguration()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration::has_data() const
{
    if (is_presence_container) return true;
    return tunneling_ethertype.is_set
	|| (native_vlan_identifier !=  nullptr && native_vlan_identifier->has_data())
	|| (vlan_switched !=  nullptr && vlan_switched->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tunneling_ethertype.yfilter)
	|| (native_vlan_identifier !=  nullptr && native_vlan_identifier->has_operation())
	|| (vlan_switched !=  nullptr && vlan_switched->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2-eth-infra-cfg:vlan-trunk-configuration";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunneling_ethertype.is_set || is_set(tunneling_ethertype.yfilter)) leaf_name_data.push_back(tunneling_ethertype.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "native-vlan-identifier")
    {
        if(native_vlan_identifier == nullptr)
        {
            native_vlan_identifier = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration::NativeVlanIdentifier>();
        }
        return native_vlan_identifier;
    }

    if(child_yang_name == "vlan-switched")
    {
        if(vlan_switched == nullptr)
        {
            vlan_switched = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration::VlanSwitched>();
        }
        return vlan_switched;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(native_vlan_identifier != nullptr)
    {
        _children["native-vlan-identifier"] = native_vlan_identifier;
    }

    if(vlan_switched != nullptr)
    {
        _children["vlan-switched"] = vlan_switched;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunneling-ethertype")
    {
        tunneling_ethertype = value;
        tunneling_ethertype.value_namespace = name_space;
        tunneling_ethertype.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunneling-ethertype")
    {
        tunneling_ethertype.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "native-vlan-identifier" || name == "vlan-switched" || name == "tunneling-ethertype")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration::NativeVlanIdentifier::NativeVlanIdentifier()
    :
    vlan_type{YType::enumeration, "vlan-type"},
    vlan_identifier{YType::uint32, "vlan-identifier"}
{

    yang_name = "native-vlan-identifier"; yang_parent_name = "vlan-trunk-configuration"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration::NativeVlanIdentifier::~NativeVlanIdentifier()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration::NativeVlanIdentifier::has_data() const
{
    if (is_presence_container) return true;
    return vlan_type.is_set
	|| vlan_identifier.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration::NativeVlanIdentifier::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan_type.yfilter)
	|| ydk::is_set(vlan_identifier.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration::NativeVlanIdentifier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "native-vlan-identifier";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration::NativeVlanIdentifier::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan_type.is_set || is_set(vlan_type.yfilter)) leaf_name_data.push_back(vlan_type.get_name_leafdata());
    if (vlan_identifier.is_set || is_set(vlan_identifier.yfilter)) leaf_name_data.push_back(vlan_identifier.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration::NativeVlanIdentifier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration::NativeVlanIdentifier::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration::NativeVlanIdentifier::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan-type")
    {
        vlan_type = value;
        vlan_type.value_namespace = name_space;
        vlan_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan-identifier")
    {
        vlan_identifier = value;
        vlan_identifier.value_namespace = name_space;
        vlan_identifier.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration::NativeVlanIdentifier::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan-type")
    {
        vlan_type.yfilter = yfilter;
    }
    if(value_path == "vlan-identifier")
    {
        vlan_identifier.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration::NativeVlanIdentifier::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan-type" || name == "vlan-identifier")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration::VlanSwitched::VlanSwitched()
    :
    mode{YType::enumeration, "mode"},
    access_vlan{YType::uint32, "access-vlan"},
    trunk_tag_type{YType::enumeration, "trunk-tag-type"},
    trunk_vla_ns{YType::str, "trunk-vla-ns"}
{

    yang_name = "vlan-switched"; yang_parent_name = "vlan-trunk-configuration"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration::VlanSwitched::~VlanSwitched()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration::VlanSwitched::has_data() const
{
    if (is_presence_container) return true;
    return mode.is_set
	|| access_vlan.is_set
	|| trunk_tag_type.is_set
	|| trunk_vla_ns.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration::VlanSwitched::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mode.yfilter)
	|| ydk::is_set(access_vlan.yfilter)
	|| ydk::is_set(trunk_tag_type.yfilter)
	|| ydk::is_set(trunk_vla_ns.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration::VlanSwitched::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan-switched";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration::VlanSwitched::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (access_vlan.is_set || is_set(access_vlan.yfilter)) leaf_name_data.push_back(access_vlan.get_name_leafdata());
    if (trunk_tag_type.is_set || is_set(trunk_tag_type.yfilter)) leaf_name_data.push_back(trunk_tag_type.get_name_leafdata());
    if (trunk_vla_ns.is_set || is_set(trunk_vla_ns.yfilter)) leaf_name_data.push_back(trunk_vla_ns.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration::VlanSwitched::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration::VlanSwitched::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration::VlanSwitched::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "access-vlan")
    {
        access_vlan = value;
        access_vlan.value_namespace = name_space;
        access_vlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trunk-tag-type")
    {
        trunk_tag_type = value;
        trunk_tag_type.value_namespace = name_space;
        trunk_tag_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trunk-vla-ns")
    {
        trunk_vla_ns = value;
        trunk_vla_ns.value_namespace = name_space;
        trunk_vla_ns.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration::VlanSwitched::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
    if(value_path == "access-vlan")
    {
        access_vlan.yfilter = yfilter;
    }
    if(value_path == "trunk-tag-type")
    {
        trunk_tag_type.yfilter = yfilter;
    }
    if(value_path == "trunk-vla-ns")
    {
        trunk_vla_ns.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration::VlanSwitched::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mode" || name == "access-vlan" || name == "trunk-tag-type" || name == "trunk-vla-ns")
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::SsrpSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::SsrpSession::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(group_id != nullptr)
    {
        _children["group-id"] = group_id;
    }

    return _children;
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::SsrpSession::GroupId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::SsrpSession::GroupId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

InterfaceConfigurations::InterfaceConfiguration::Cdp::Cdp()
    :
    enable{YType::empty, "enable"}
{

    yang_name = "cdp"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Cdp::~Cdp()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Cdp::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Cdp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Cdp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-cdp-cfg:cdp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Cdp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Cdp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Cdp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Cdp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Cdp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Cdp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::NvSatelliteAccess()
{

    yang_name = "nv-satellite-access"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::~NvSatelliteAccess()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::has_operation() const
{
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-icpe-infra-cfg:nv-satellite-access";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::NvSatelliteFabricLink()
    :
    satellite{YType::uint32, "satellite"},
    minimum_required_links{YType::uint32, "minimum-required-links"}
        ,
    redundancy(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Redundancy>())
    , remote_ports(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::RemotePorts>())
    , ethernet_features(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::EthernetFeatures>())
{
    redundancy->parent = this;
    remote_ports->parent = this;
    ethernet_features->parent = this;

    yang_name = "nv-satellite-fabric-link"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::~NvSatelliteFabricLink()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::has_data() const
{
    if (is_presence_container) return true;
    return satellite.is_set
	|| minimum_required_links.is_set
	|| (redundancy !=  nullptr && redundancy->has_data())
	|| (remote_ports !=  nullptr && remote_ports->has_data())
	|| (ethernet_features !=  nullptr && ethernet_features->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(satellite.yfilter)
	|| ydk::is_set(minimum_required_links.yfilter)
	|| (redundancy !=  nullptr && redundancy->has_operation())
	|| (remote_ports !=  nullptr && remote_ports->has_operation())
	|| (ethernet_features !=  nullptr && ethernet_features->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-icpe-infra-cfg:nv-satellite-fabric-link";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (satellite.is_set || is_set(satellite.yfilter)) leaf_name_data.push_back(satellite.get_name_leafdata());
    if (minimum_required_links.is_set || is_set(minimum_required_links.yfilter)) leaf_name_data.push_back(minimum_required_links.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redundancy")
    {
        if(redundancy == nullptr)
        {
            redundancy = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Redundancy>();
        }
        return redundancy;
    }

    if(child_yang_name == "remote-ports")
    {
        if(remote_ports == nullptr)
        {
            remote_ports = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::RemotePorts>();
        }
        return remote_ports;
    }

    if(child_yang_name == "Cisco-IOS-XR-ethernet-cfm-sat-cfg:ethernet-features")
    {
        if(ethernet_features == nullptr)
        {
            ethernet_features = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::EthernetFeatures>();
        }
        return ethernet_features;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(redundancy != nullptr)
    {
        _children["redundancy"] = redundancy;
    }

    if(remote_ports != nullptr)
    {
        _children["remote-ports"] = remote_ports;
    }

    if(ethernet_features != nullptr)
    {
        _children["Cisco-IOS-XR-ethernet-cfm-sat-cfg:ethernet-features"] = ethernet_features;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "satellite")
    {
        satellite = value;
        satellite.value_namespace = name_space;
        satellite.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-required-links")
    {
        minimum_required_links = value;
        minimum_required_links.value_namespace = name_space;
        minimum_required_links.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "satellite")
    {
        satellite.yfilter = yfilter;
    }
    if(value_path == "minimum-required-links")
    {
        minimum_required_links.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redundancy" || name == "remote-ports" || name == "ethernet-features" || name == "satellite" || name == "minimum-required-links")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Redundancy::Redundancy()
    :
    iccp_group{YType::uint32, "iccp-group"},
    minimum_preferred_links{YType::uint32, "minimum-preferred-links"}
{

    yang_name = "redundancy"; yang_parent_name = "nv-satellite-fabric-link"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Redundancy::~Redundancy()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Redundancy::has_data() const
{
    if (is_presence_container) return true;
    return iccp_group.is_set
	|| minimum_preferred_links.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Redundancy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(iccp_group.yfilter)
	|| ydk::is_set(minimum_preferred_links.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Redundancy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redundancy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Redundancy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (iccp_group.is_set || is_set(iccp_group.yfilter)) leaf_name_data.push_back(iccp_group.get_name_leafdata());
    if (minimum_preferred_links.is_set || is_set(minimum_preferred_links.yfilter)) leaf_name_data.push_back(minimum_preferred_links.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Redundancy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Redundancy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Redundancy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "iccp-group")
    {
        iccp_group = value;
        iccp_group.value_namespace = name_space;
        iccp_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-preferred-links")
    {
        minimum_preferred_links = value;
        minimum_preferred_links.value_namespace = name_space;
        minimum_preferred_links.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Redundancy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "iccp-group")
    {
        iccp_group.yfilter = yfilter;
    }
    if(value_path == "minimum-preferred-links")
    {
        minimum_preferred_links.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Redundancy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iccp-group" || name == "minimum-preferred-links")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::RemotePorts::RemotePorts()
    :
    remote_port(this, {"port_type", "slot", "sub_slot"})
{

    yang_name = "remote-ports"; yang_parent_name = "nv-satellite-fabric-link"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::RemotePorts::~RemotePorts()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::RemotePorts::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<remote_port.len(); index++)
    {
        if(remote_port[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::RemotePorts::has_operation() const
{
    for (std::size_t index=0; index<remote_port.len(); index++)
    {
        if(remote_port[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::RemotePorts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-ports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::RemotePorts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::RemotePorts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "remote-port")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::RemotePorts::RemotePort>();
        ent_->parent = this;
        remote_port.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::RemotePorts::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : remote_port.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::RemotePorts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::RemotePorts::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::RemotePorts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "remote-port")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::RemotePorts::RemotePort::RemotePort()
    :
    port_type{YType::str, "port-type"},
    slot{YType::uint32, "slot"},
    sub_slot{YType::uint32, "sub-slot"},
    port_range{YType::str, "port-range"}
{

    yang_name = "remote-port"; yang_parent_name = "remote-ports"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::RemotePorts::RemotePort::~RemotePort()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::RemotePorts::RemotePort::has_data() const
{
    if (is_presence_container) return true;
    return port_type.is_set
	|| slot.is_set
	|| sub_slot.is_set
	|| port_range.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::RemotePorts::RemotePort::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_type.yfilter)
	|| ydk::is_set(slot.yfilter)
	|| ydk::is_set(sub_slot.yfilter)
	|| ydk::is_set(port_range.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::RemotePorts::RemotePort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-port";
    ADD_KEY_TOKEN(port_type, "port-type");
    ADD_KEY_TOKEN(slot, "slot");
    ADD_KEY_TOKEN(sub_slot, "sub-slot");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::RemotePorts::RemotePort::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_type.is_set || is_set(port_type.yfilter)) leaf_name_data.push_back(port_type.get_name_leafdata());
    if (slot.is_set || is_set(slot.yfilter)) leaf_name_data.push_back(slot.get_name_leafdata());
    if (sub_slot.is_set || is_set(sub_slot.yfilter)) leaf_name_data.push_back(sub_slot.get_name_leafdata());
    if (port_range.is_set || is_set(port_range.yfilter)) leaf_name_data.push_back(port_range.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::RemotePorts::RemotePort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::RemotePorts::RemotePort::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::RemotePorts::RemotePort::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port-type")
    {
        port_type = value;
        port_type.value_namespace = name_space;
        port_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "slot")
    {
        slot = value;
        slot.value_namespace = name_space;
        slot.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-slot")
    {
        sub_slot = value;
        sub_slot.value_namespace = name_space;
        sub_slot.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-range")
    {
        port_range = value;
        port_range.value_namespace = name_space;
        port_range.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::RemotePorts::RemotePort::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port-type")
    {
        port_type.yfilter = yfilter;
    }
    if(value_path == "slot")
    {
        slot.yfilter = yfilter;
    }
    if(value_path == "sub-slot")
    {
        sub_slot.yfilter = yfilter;
    }
    if(value_path == "port-range")
    {
        port_range.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::RemotePorts::RemotePort::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port-type" || name == "slot" || name == "sub-slot" || name == "port-range")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::EthernetFeatures::EthernetFeatures()
    :
    cfm(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::EthernetFeatures::Cfm>())
{
    cfm->parent = this;

    yang_name = "ethernet-features"; yang_parent_name = "nv-satellite-fabric-link"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::EthernetFeatures::~EthernetFeatures()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::EthernetFeatures::has_data() const
{
    if (is_presence_container) return true;
    return (cfm !=  nullptr && cfm->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::EthernetFeatures::has_operation() const
{
    return is_set(yfilter)
	|| (cfm !=  nullptr && cfm->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::EthernetFeatures::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ethernet-cfm-sat-cfg:ethernet-features";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::EthernetFeatures::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::EthernetFeatures::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cfm")
    {
        if(cfm == nullptr)
        {
            cfm = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::EthernetFeatures::Cfm>();
        }
        return cfm;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::EthernetFeatures::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(cfm != nullptr)
    {
        _children["cfm"] = cfm;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::EthernetFeatures::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::EthernetFeatures::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::EthernetFeatures::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cfm")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::EthernetFeatures::Cfm::Cfm()
    :
    continuity_check_interval{YType::enumeration, "continuity-check-interval"},
    level{YType::uint32, "level"},
    enable{YType::empty, "enable"}
{

    yang_name = "cfm"; yang_parent_name = "ethernet-features"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::EthernetFeatures::Cfm::~Cfm()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::EthernetFeatures::Cfm::has_data() const
{
    if (is_presence_container) return true;
    return continuity_check_interval.is_set
	|| level.is_set
	|| enable.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::EthernetFeatures::Cfm::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(continuity_check_interval.yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::EthernetFeatures::Cfm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cfm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::EthernetFeatures::Cfm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (continuity_check_interval.is_set || is_set(continuity_check_interval.yfilter)) leaf_name_data.push_back(continuity_check_interval.get_name_leafdata());
    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::EthernetFeatures::Cfm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::EthernetFeatures::Cfm::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::EthernetFeatures::Cfm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "continuity-check-interval")
    {
        continuity_check_interval = value;
        continuity_check_interval.value_namespace = name_space;
        continuity_check_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::EthernetFeatures::Cfm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "continuity-check-interval")
    {
        continuity_check_interval.yfilter = yfilter;
    }
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::EthernetFeatures::Cfm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "continuity-check-interval" || name == "level" || name == "enable")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::NvSatelliteFabricNetwork()
    :
    enable{YType::empty, "enable"}
        ,
    satellites(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites>())
    , redundancy(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Redundancy>())
{
    satellites->parent = this;
    redundancy->parent = this;

    yang_name = "nv-satellite-fabric-network"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::~NvSatelliteFabricNetwork()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set
	|| (satellites !=  nullptr && satellites->has_data())
	|| (redundancy !=  nullptr && redundancy->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (satellites !=  nullptr && satellites->has_operation())
	|| (redundancy !=  nullptr && redundancy->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-icpe-infra-cfg:nv-satellite-fabric-network";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "satellites")
    {
        if(satellites == nullptr)
        {
            satellites = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites>();
        }
        return satellites;
    }

    if(child_yang_name == "redundancy")
    {
        if(redundancy == nullptr)
        {
            redundancy = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Redundancy>();
        }
        return redundancy;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(satellites != nullptr)
    {
        _children["satellites"] = satellites;
    }

    if(redundancy != nullptr)
    {
        _children["redundancy"] = redundancy;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "satellites" || name == "redundancy" || name == "enable")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellites()
    :
    satellite(this, {"satellite_id"})
{

    yang_name = "satellites"; yang_parent_name = "nv-satellite-fabric-network"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::~Satellites()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<satellite.len(); index++)
    {
        if(satellite[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::has_operation() const
{
    for (std::size_t index=0; index<satellite.len(); index++)
    {
        if(satellite[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "satellites";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "satellite")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite>();
        ent_->parent = this;
        satellite.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : satellite.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "satellite")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::Satellite()
    :
    satellite_id{YType::uint32, "satellite-id"},
    enable{YType::empty, "enable"}
        ,
    remote_ports(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::RemotePorts>())
{
    remote_ports->parent = this;

    yang_name = "satellite"; yang_parent_name = "satellites"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::~Satellite()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::has_data() const
{
    if (is_presence_container) return true;
    return satellite_id.is_set
	|| enable.is_set
	|| (remote_ports !=  nullptr && remote_ports->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(satellite_id.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (remote_ports !=  nullptr && remote_ports->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "satellite";
    ADD_KEY_TOKEN(satellite_id, "satellite-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (satellite_id.is_set || is_set(satellite_id.yfilter)) leaf_name_data.push_back(satellite_id.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "remote-ports")
    {
        if(remote_ports == nullptr)
        {
            remote_ports = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::RemotePorts>();
        }
        return remote_ports;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(remote_ports != nullptr)
    {
        _children["remote-ports"] = remote_ports;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "satellite-id")
    {
        satellite_id = value;
        satellite_id.value_namespace = name_space;
        satellite_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "satellite-id")
    {
        satellite_id.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "remote-ports" || name == "satellite-id" || name == "enable")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::RemotePorts::RemotePorts()
    :
    remote_port(this, {"port_type", "slot", "sub_slot"})
{

    yang_name = "remote-ports"; yang_parent_name = "satellite"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::RemotePorts::~RemotePorts()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::RemotePorts::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<remote_port.len(); index++)
    {
        if(remote_port[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::RemotePorts::has_operation() const
{
    for (std::size_t index=0; index<remote_port.len(); index++)
    {
        if(remote_port[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::RemotePorts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-ports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::RemotePorts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::RemotePorts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "remote-port")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::RemotePorts::RemotePort>();
        ent_->parent = this;
        remote_port.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::RemotePorts::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : remote_port.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::RemotePorts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::RemotePorts::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::RemotePorts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "remote-port")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::RemotePorts::RemotePort::RemotePort()
    :
    port_type{YType::str, "port-type"},
    slot{YType::uint32, "slot"},
    sub_slot{YType::uint32, "sub-slot"},
    port_range{YType::str, "port-range"}
{

    yang_name = "remote-port"; yang_parent_name = "remote-ports"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::RemotePorts::RemotePort::~RemotePort()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::RemotePorts::RemotePort::has_data() const
{
    if (is_presence_container) return true;
    return port_type.is_set
	|| slot.is_set
	|| sub_slot.is_set
	|| port_range.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::RemotePorts::RemotePort::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_type.yfilter)
	|| ydk::is_set(slot.yfilter)
	|| ydk::is_set(sub_slot.yfilter)
	|| ydk::is_set(port_range.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::RemotePorts::RemotePort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-port";
    ADD_KEY_TOKEN(port_type, "port-type");
    ADD_KEY_TOKEN(slot, "slot");
    ADD_KEY_TOKEN(sub_slot, "sub-slot");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::RemotePorts::RemotePort::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_type.is_set || is_set(port_type.yfilter)) leaf_name_data.push_back(port_type.get_name_leafdata());
    if (slot.is_set || is_set(slot.yfilter)) leaf_name_data.push_back(slot.get_name_leafdata());
    if (sub_slot.is_set || is_set(sub_slot.yfilter)) leaf_name_data.push_back(sub_slot.get_name_leafdata());
    if (port_range.is_set || is_set(port_range.yfilter)) leaf_name_data.push_back(port_range.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::RemotePorts::RemotePort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::RemotePorts::RemotePort::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::RemotePorts::RemotePort::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port-type")
    {
        port_type = value;
        port_type.value_namespace = name_space;
        port_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "slot")
    {
        slot = value;
        slot.value_namespace = name_space;
        slot.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-slot")
    {
        sub_slot = value;
        sub_slot.value_namespace = name_space;
        sub_slot.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-range")
    {
        port_range = value;
        port_range.value_namespace = name_space;
        port_range.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::RemotePorts::RemotePort::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port-type")
    {
        port_type.yfilter = yfilter;
    }
    if(value_path == "slot")
    {
        slot.yfilter = yfilter;
    }
    if(value_path == "sub-slot")
    {
        sub_slot.yfilter = yfilter;
    }
    if(value_path == "port-range")
    {
        port_range.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::RemotePorts::RemotePort::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port-type" || name == "slot" || name == "sub-slot" || name == "port-range")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Redundancy::Redundancy()
    :
    iccp_group{YType::uint32, "iccp-group"},
    minimum_preferred_links{YType::uint32, "minimum-preferred-links"}
{

    yang_name = "redundancy"; yang_parent_name = "nv-satellite-fabric-network"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Redundancy::~Redundancy()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Redundancy::has_data() const
{
    if (is_presence_container) return true;
    return iccp_group.is_set
	|| minimum_preferred_links.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Redundancy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(iccp_group.yfilter)
	|| ydk::is_set(minimum_preferred_links.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Redundancy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redundancy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Redundancy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (iccp_group.is_set || is_set(iccp_group.yfilter)) leaf_name_data.push_back(iccp_group.get_name_leafdata());
    if (minimum_preferred_links.is_set || is_set(minimum_preferred_links.yfilter)) leaf_name_data.push_back(minimum_preferred_links.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Redundancy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Redundancy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Redundancy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "iccp-group")
    {
        iccp_group = value;
        iccp_group.value_namespace = name_space;
        iccp_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-preferred-links")
    {
        minimum_preferred_links = value;
        minimum_preferred_links.value_namespace = name_space;
        minimum_preferred_links.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Redundancy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "iccp-group")
    {
        iccp_group.yfilter = yfilter;
    }
    if(value_path == "minimum-preferred-links")
    {
        minimum_preferred_links.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Redundancy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iccp-group" || name == "minimum-preferred-links")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::Dwdm()
    :
    enable_vtxp{YType::boolean, "enable-vtxp"},
    network_port_id{YType::str, "network-port-id"},
    transport_admin_state{YType::enumeration, "transport-admin-state"},
    laser{YType::empty, "laser"},
    transmit_power{YType::int32, "transmit-power"},
    rx_threshold{YType::int32, "rx-threshold"},
    network_connection_id{YType::str, "network-connection-id"},
    loopback{YType::enumeration, "loopback"}
        ,
    network_srlgs(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::NetworkSrlgs>())
    , g709(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709>())
    , wavelength(nullptr) // presence node
{
    network_srlgs->parent = this;
    g709->parent = this;

    yang_name = "dwdm"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::~Dwdm()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::has_data() const
{
    if (is_presence_container) return true;
    return enable_vtxp.is_set
	|| network_port_id.is_set
	|| transport_admin_state.is_set
	|| laser.is_set
	|| transmit_power.is_set
	|| rx_threshold.is_set
	|| network_connection_id.is_set
	|| loopback.is_set
	|| (network_srlgs !=  nullptr && network_srlgs->has_data())
	|| (g709 !=  nullptr && g709->has_data())
	|| (wavelength !=  nullptr && wavelength->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable_vtxp.yfilter)
	|| ydk::is_set(network_port_id.yfilter)
	|| ydk::is_set(transport_admin_state.yfilter)
	|| ydk::is_set(laser.yfilter)
	|| ydk::is_set(transmit_power.yfilter)
	|| ydk::is_set(rx_threshold.yfilter)
	|| ydk::is_set(network_connection_id.yfilter)
	|| ydk::is_set(loopback.yfilter)
	|| (network_srlgs !=  nullptr && network_srlgs->has_operation())
	|| (g709 !=  nullptr && g709->has_operation())
	|| (wavelength !=  nullptr && wavelength->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Dwdm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-dwdm-ui-cfg:dwdm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Dwdm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable_vtxp.is_set || is_set(enable_vtxp.yfilter)) leaf_name_data.push_back(enable_vtxp.get_name_leafdata());
    if (network_port_id.is_set || is_set(network_port_id.yfilter)) leaf_name_data.push_back(network_port_id.get_name_leafdata());
    if (transport_admin_state.is_set || is_set(transport_admin_state.yfilter)) leaf_name_data.push_back(transport_admin_state.get_name_leafdata());
    if (laser.is_set || is_set(laser.yfilter)) leaf_name_data.push_back(laser.get_name_leafdata());
    if (transmit_power.is_set || is_set(transmit_power.yfilter)) leaf_name_data.push_back(transmit_power.get_name_leafdata());
    if (rx_threshold.is_set || is_set(rx_threshold.yfilter)) leaf_name_data.push_back(rx_threshold.get_name_leafdata());
    if (network_connection_id.is_set || is_set(network_connection_id.yfilter)) leaf_name_data.push_back(network_connection_id.get_name_leafdata());
    if (loopback.is_set || is_set(loopback.yfilter)) leaf_name_data.push_back(loopback.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Dwdm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "network-srlgs")
    {
        if(network_srlgs == nullptr)
        {
            network_srlgs = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::NetworkSrlgs>();
        }
        return network_srlgs;
    }

    if(child_yang_name == "g709")
    {
        if(g709 == nullptr)
        {
            g709 = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709>();
        }
        return g709;
    }

    if(child_yang_name == "wavelength")
    {
        if(wavelength == nullptr)
        {
            wavelength = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::Wavelength>();
        }
        return wavelength;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Dwdm::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(network_srlgs != nullptr)
    {
        _children["network-srlgs"] = network_srlgs;
    }

    if(g709 != nullptr)
    {
        _children["g709"] = g709;
    }

    if(wavelength != nullptr)
    {
        _children["wavelength"] = wavelength;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable-vtxp")
    {
        enable_vtxp = value;
        enable_vtxp.value_namespace = name_space;
        enable_vtxp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "network-port-id")
    {
        network_port_id = value;
        network_port_id.value_namespace = name_space;
        network_port_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transport-admin-state")
    {
        transport_admin_state = value;
        transport_admin_state.value_namespace = name_space;
        transport_admin_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "laser")
    {
        laser = value;
        laser.value_namespace = name_space;
        laser.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmit-power")
    {
        transmit_power = value;
        transmit_power.value_namespace = name_space;
        transmit_power.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-threshold")
    {
        rx_threshold = value;
        rx_threshold.value_namespace = name_space;
        rx_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "network-connection-id")
    {
        network_connection_id = value;
        network_connection_id.value_namespace = name_space;
        network_connection_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "loopback")
    {
        loopback = value;
        loopback.value_namespace = name_space;
        loopback.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable-vtxp")
    {
        enable_vtxp.yfilter = yfilter;
    }
    if(value_path == "network-port-id")
    {
        network_port_id.yfilter = yfilter;
    }
    if(value_path == "transport-admin-state")
    {
        transport_admin_state.yfilter = yfilter;
    }
    if(value_path == "laser")
    {
        laser.yfilter = yfilter;
    }
    if(value_path == "transmit-power")
    {
        transmit_power.yfilter = yfilter;
    }
    if(value_path == "rx-threshold")
    {
        rx_threshold.yfilter = yfilter;
    }
    if(value_path == "network-connection-id")
    {
        network_connection_id.yfilter = yfilter;
    }
    if(value_path == "loopback")
    {
        loopback.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "network-srlgs" || name == "g709" || name == "wavelength" || name == "enable-vtxp" || name == "network-port-id" || name == "transport-admin-state" || name == "laser" || name == "transmit-power" || name == "rx-threshold" || name == "network-connection-id" || name == "loopback")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::NetworkSrlgs::NetworkSrlgs()
    :
    network_srlg(this, {"set_id"})
{

    yang_name = "network-srlgs"; yang_parent_name = "dwdm"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::NetworkSrlgs::~NetworkSrlgs()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::NetworkSrlgs::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<network_srlg.len(); index++)
    {
        if(network_srlg[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::NetworkSrlgs::has_operation() const
{
    for (std::size_t index=0; index<network_srlg.len(); index++)
    {
        if(network_srlg[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Dwdm::NetworkSrlgs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network-srlgs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Dwdm::NetworkSrlgs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Dwdm::NetworkSrlgs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "network-srlg")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::NetworkSrlgs::NetworkSrlg>();
        ent_->parent = this;
        network_srlg.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Dwdm::NetworkSrlgs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : network_srlg.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::NetworkSrlgs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::NetworkSrlgs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::NetworkSrlgs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "network-srlg")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::NetworkSrlgs::NetworkSrlg::NetworkSrlg()
    :
    set_id{YType::uint32, "set-id"},
    srlg1{YType::uint32, "srlg1"},
    srlg2{YType::uint32, "srlg2"},
    srlg3{YType::uint32, "srlg3"},
    srlg4{YType::uint32, "srlg4"},
    srlg5{YType::uint32, "srlg5"},
    srlg6{YType::uint32, "srlg6"}
{

    yang_name = "network-srlg"; yang_parent_name = "network-srlgs"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::NetworkSrlgs::NetworkSrlg::~NetworkSrlg()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::NetworkSrlgs::NetworkSrlg::has_data() const
{
    if (is_presence_container) return true;
    return set_id.is_set
	|| srlg1.is_set
	|| srlg2.is_set
	|| srlg3.is_set
	|| srlg4.is_set
	|| srlg5.is_set
	|| srlg6.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::NetworkSrlgs::NetworkSrlg::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_id.yfilter)
	|| ydk::is_set(srlg1.yfilter)
	|| ydk::is_set(srlg2.yfilter)
	|| ydk::is_set(srlg3.yfilter)
	|| ydk::is_set(srlg4.yfilter)
	|| ydk::is_set(srlg5.yfilter)
	|| ydk::is_set(srlg6.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Dwdm::NetworkSrlgs::NetworkSrlg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network-srlg";
    ADD_KEY_TOKEN(set_id, "set-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Dwdm::NetworkSrlgs::NetworkSrlg::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_id.is_set || is_set(set_id.yfilter)) leaf_name_data.push_back(set_id.get_name_leafdata());
    if (srlg1.is_set || is_set(srlg1.yfilter)) leaf_name_data.push_back(srlg1.get_name_leafdata());
    if (srlg2.is_set || is_set(srlg2.yfilter)) leaf_name_data.push_back(srlg2.get_name_leafdata());
    if (srlg3.is_set || is_set(srlg3.yfilter)) leaf_name_data.push_back(srlg3.get_name_leafdata());
    if (srlg4.is_set || is_set(srlg4.yfilter)) leaf_name_data.push_back(srlg4.get_name_leafdata());
    if (srlg5.is_set || is_set(srlg5.yfilter)) leaf_name_data.push_back(srlg5.get_name_leafdata());
    if (srlg6.is_set || is_set(srlg6.yfilter)) leaf_name_data.push_back(srlg6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Dwdm::NetworkSrlgs::NetworkSrlg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Dwdm::NetworkSrlgs::NetworkSrlg::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::NetworkSrlgs::NetworkSrlg::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-id")
    {
        set_id = value;
        set_id.value_namespace = name_space;
        set_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlg1")
    {
        srlg1 = value;
        srlg1.value_namespace = name_space;
        srlg1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlg2")
    {
        srlg2 = value;
        srlg2.value_namespace = name_space;
        srlg2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlg3")
    {
        srlg3 = value;
        srlg3.value_namespace = name_space;
        srlg3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlg4")
    {
        srlg4 = value;
        srlg4.value_namespace = name_space;
        srlg4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlg5")
    {
        srlg5 = value;
        srlg5.value_namespace = name_space;
        srlg5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlg6")
    {
        srlg6 = value;
        srlg6.value_namespace = name_space;
        srlg6.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::NetworkSrlgs::NetworkSrlg::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-id")
    {
        set_id.yfilter = yfilter;
    }
    if(value_path == "srlg1")
    {
        srlg1.yfilter = yfilter;
    }
    if(value_path == "srlg2")
    {
        srlg2.yfilter = yfilter;
    }
    if(value_path == "srlg3")
    {
        srlg3.yfilter = yfilter;
    }
    if(value_path == "srlg4")
    {
        srlg4.yfilter = yfilter;
    }
    if(value_path == "srlg5")
    {
        srlg5.yfilter = yfilter;
    }
    if(value_path == "srlg6")
    {
        srlg6.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::NetworkSrlgs::NetworkSrlg::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-id" || name == "srlg1" || name == "srlg2" || name == "srlg3" || name == "srlg4" || name == "srlg5" || name == "srlg6")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::G709()
    :
    proactive{YType::enumeration, "proactive"},
    bdi_to_gais{YType::empty, "bdi-to-gais"},
    tim_to_gais{YType::empty, "tim-to-gais"},
    proactive_logging_file{YType::str, "proactive-logging-file"},
    tti_processing{YType::empty, "tti-processing"},
    enable{YType::boolean, "enable"},
    framing{YType::enumeration, "framing"}
        ,
    odu(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu>())
    , otu(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu>())
    , prbs(nullptr) // presence node
    , fec(nullptr) // presence node
{
    odu->parent = this;
    otu->parent = this;

    yang_name = "g709"; yang_parent_name = "dwdm"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::~G709()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::has_data() const
{
    if (is_presence_container) return true;
    return proactive.is_set
	|| bdi_to_gais.is_set
	|| tim_to_gais.is_set
	|| proactive_logging_file.is_set
	|| tti_processing.is_set
	|| enable.is_set
	|| framing.is_set
	|| (odu !=  nullptr && odu->has_data())
	|| (otu !=  nullptr && otu->has_data())
	|| (prbs !=  nullptr && prbs->has_data())
	|| (fec !=  nullptr && fec->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(proactive.yfilter)
	|| ydk::is_set(bdi_to_gais.yfilter)
	|| ydk::is_set(tim_to_gais.yfilter)
	|| ydk::is_set(proactive_logging_file.yfilter)
	|| ydk::is_set(tti_processing.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(framing.yfilter)
	|| (odu !=  nullptr && odu->has_operation())
	|| (otu !=  nullptr && otu->has_operation())
	|| (prbs !=  nullptr && prbs->has_operation())
	|| (fec !=  nullptr && fec->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "g709";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (proactive.is_set || is_set(proactive.yfilter)) leaf_name_data.push_back(proactive.get_name_leafdata());
    if (bdi_to_gais.is_set || is_set(bdi_to_gais.yfilter)) leaf_name_data.push_back(bdi_to_gais.get_name_leafdata());
    if (tim_to_gais.is_set || is_set(tim_to_gais.yfilter)) leaf_name_data.push_back(tim_to_gais.get_name_leafdata());
    if (proactive_logging_file.is_set || is_set(proactive_logging_file.yfilter)) leaf_name_data.push_back(proactive_logging_file.get_name_leafdata());
    if (tti_processing.is_set || is_set(tti_processing.yfilter)) leaf_name_data.push_back(tti_processing.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (framing.is_set || is_set(framing.yfilter)) leaf_name_data.push_back(framing.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "odu")
    {
        if(odu == nullptr)
        {
            odu = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu>();
        }
        return odu;
    }

    if(child_yang_name == "otu")
    {
        if(otu == nullptr)
        {
            otu = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu>();
        }
        return otu;
    }

    if(child_yang_name == "prbs")
    {
        if(prbs == nullptr)
        {
            prbs = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Prbs>();
        }
        return prbs;
    }

    if(child_yang_name == "fec")
    {
        if(fec == nullptr)
        {
            fec = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Fec>();
        }
        return fec;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(odu != nullptr)
    {
        _children["odu"] = odu;
    }

    if(otu != nullptr)
    {
        _children["otu"] = otu;
    }

    if(prbs != nullptr)
    {
        _children["prbs"] = prbs;
    }

    if(fec != nullptr)
    {
        _children["fec"] = fec;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "proactive")
    {
        proactive = value;
        proactive.value_namespace = name_space;
        proactive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bdi-to-gais")
    {
        bdi_to_gais = value;
        bdi_to_gais.value_namespace = name_space;
        bdi_to_gais.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tim-to-gais")
    {
        tim_to_gais = value;
        tim_to_gais.value_namespace = name_space;
        tim_to_gais.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "proactive-logging-file")
    {
        proactive_logging_file = value;
        proactive_logging_file.value_namespace = name_space;
        proactive_logging_file.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tti-processing")
    {
        tti_processing = value;
        tti_processing.value_namespace = name_space;
        tti_processing.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "framing")
    {
        framing = value;
        framing.value_namespace = name_space;
        framing.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "proactive")
    {
        proactive.yfilter = yfilter;
    }
    if(value_path == "bdi-to-gais")
    {
        bdi_to_gais.yfilter = yfilter;
    }
    if(value_path == "tim-to-gais")
    {
        tim_to_gais.yfilter = yfilter;
    }
    if(value_path == "proactive-logging-file")
    {
        proactive_logging_file.yfilter = yfilter;
    }
    if(value_path == "tti-processing")
    {
        tti_processing.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "framing")
    {
        framing.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "odu" || name == "otu" || name == "prbs" || name == "fec" || name == "proactive" || name == "bdi-to-gais" || name == "tim-to-gais" || name == "proactive-logging-file" || name == "tti-processing" || name == "enable" || name == "framing")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::Odu()
    :
    odu_reports(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduReports>())
    , odu_thresholds(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduThresholds>())
    , odu_expected_tti(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduExpectedTti>())
    , odu_tx_tti(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduTxTti>())
{
    odu_reports->parent = this;
    odu_thresholds->parent = this;
    odu_expected_tti->parent = this;
    odu_tx_tti->parent = this;

    yang_name = "odu"; yang_parent_name = "g709"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::~Odu()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::has_data() const
{
    if (is_presence_container) return true;
    return (odu_reports !=  nullptr && odu_reports->has_data())
	|| (odu_thresholds !=  nullptr && odu_thresholds->has_data())
	|| (odu_expected_tti !=  nullptr && odu_expected_tti->has_data())
	|| (odu_tx_tti !=  nullptr && odu_tx_tti->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::has_operation() const
{
    return is_set(yfilter)
	|| (odu_reports !=  nullptr && odu_reports->has_operation())
	|| (odu_thresholds !=  nullptr && odu_thresholds->has_operation())
	|| (odu_expected_tti !=  nullptr && odu_expected_tti->has_operation())
	|| (odu_tx_tti !=  nullptr && odu_tx_tti->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odu";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "odu-reports")
    {
        if(odu_reports == nullptr)
        {
            odu_reports = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduReports>();
        }
        return odu_reports;
    }

    if(child_yang_name == "odu-thresholds")
    {
        if(odu_thresholds == nullptr)
        {
            odu_thresholds = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduThresholds>();
        }
        return odu_thresholds;
    }

    if(child_yang_name == "odu-expected-tti")
    {
        if(odu_expected_tti == nullptr)
        {
            odu_expected_tti = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduExpectedTti>();
        }
        return odu_expected_tti;
    }

    if(child_yang_name == "odu-tx-tti")
    {
        if(odu_tx_tti == nullptr)
        {
            odu_tx_tti = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduTxTti>();
        }
        return odu_tx_tti;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(odu_reports != nullptr)
    {
        _children["odu-reports"] = odu_reports;
    }

    if(odu_thresholds != nullptr)
    {
        _children["odu-thresholds"] = odu_thresholds;
    }

    if(odu_expected_tti != nullptr)
    {
        _children["odu-expected-tti"] = odu_expected_tti;
    }

    if(odu_tx_tti != nullptr)
    {
        _children["odu-tx-tti"] = odu_tx_tti;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "odu-reports" || name == "odu-thresholds" || name == "odu-expected-tti" || name == "odu-tx-tti")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduReports::OduReports()
    :
    odu_report(this, {"alarm"})
{

    yang_name = "odu-reports"; yang_parent_name = "odu"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduReports::~OduReports()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduReports::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<odu_report.len(); index++)
    {
        if(odu_report[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduReports::has_operation() const
{
    for (std::size_t index=0; index<odu_report.len(); index++)
    {
        if(odu_report[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduReports::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odu-reports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduReports::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduReports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "odu-report")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduReports::OduReport>();
        ent_->parent = this;
        odu_report.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduReports::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : odu_report.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduReports::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduReports::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduReports::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "odu-report")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduReports::OduReport::OduReport()
    :
    alarm{YType::enumeration, "alarm"}
{

    yang_name = "odu-report"; yang_parent_name = "odu-reports"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduReports::OduReport::~OduReport()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduReports::OduReport::has_data() const
{
    if (is_presence_container) return true;
    return alarm.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduReports::OduReport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(alarm.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduReports::OduReport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odu-report";
    ADD_KEY_TOKEN(alarm, "alarm");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduReports::OduReport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (alarm.is_set || is_set(alarm.yfilter)) leaf_name_data.push_back(alarm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduReports::OduReport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduReports::OduReport::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduReports::OduReport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "alarm")
    {
        alarm = value;
        alarm.value_namespace = name_space;
        alarm.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduReports::OduReport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "alarm")
    {
        alarm.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduReports::OduReport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "alarm")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduThresholds::OduThresholds()
    :
    odu_threshold(this, {"threshold"})
{

    yang_name = "odu-thresholds"; yang_parent_name = "odu"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduThresholds::~OduThresholds()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduThresholds::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<odu_threshold.len(); index++)
    {
        if(odu_threshold[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduThresholds::has_operation() const
{
    for (std::size_t index=0; index<odu_threshold.len(); index++)
    {
        if(odu_threshold[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduThresholds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odu-thresholds";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduThresholds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduThresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "odu-threshold")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduThresholds::OduThreshold>();
        ent_->parent = this;
        odu_threshold.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduThresholds::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : odu_threshold.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduThresholds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduThresholds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduThresholds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "odu-threshold")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduThresholds::OduThreshold::OduThreshold()
    :
    threshold{YType::enumeration, "threshold"},
    threshold_value{YType::uint32, "threshold-value"}
{

    yang_name = "odu-threshold"; yang_parent_name = "odu-thresholds"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduThresholds::OduThreshold::~OduThreshold()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduThresholds::OduThreshold::has_data() const
{
    if (is_presence_container) return true;
    return threshold.is_set
	|| threshold_value.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduThresholds::OduThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(threshold_value.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduThresholds::OduThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odu-threshold";
    ADD_KEY_TOKEN(threshold, "threshold");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduThresholds::OduThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (threshold_value.is_set || is_set(threshold_value.yfilter)) leaf_name_data.push_back(threshold_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduThresholds::OduThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduThresholds::OduThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduThresholds::OduThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-value")
    {
        threshold_value = value;
        threshold_value.value_namespace = name_space;
        threshold_value.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduThresholds::OduThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "threshold-value")
    {
        threshold_value.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduThresholds::OduThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold" || name == "threshold-value")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduExpectedTti::OduExpectedTti()
    :
    string_type{YType::enumeration, "string-type"},
    ascii_string{YType::str, "ascii-string"},
    hex_string{YType::str, "hex-string"}
{

    yang_name = "odu-expected-tti"; yang_parent_name = "odu"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduExpectedTti::~OduExpectedTti()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduExpectedTti::has_data() const
{
    if (is_presence_container) return true;
    return string_type.is_set
	|| ascii_string.is_set
	|| hex_string.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduExpectedTti::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(string_type.yfilter)
	|| ydk::is_set(ascii_string.yfilter)
	|| ydk::is_set(hex_string.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduExpectedTti::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odu-expected-tti";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduExpectedTti::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (string_type.is_set || is_set(string_type.yfilter)) leaf_name_data.push_back(string_type.get_name_leafdata());
    if (ascii_string.is_set || is_set(ascii_string.yfilter)) leaf_name_data.push_back(ascii_string.get_name_leafdata());
    if (hex_string.is_set || is_set(hex_string.yfilter)) leaf_name_data.push_back(hex_string.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduExpectedTti::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduExpectedTti::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduExpectedTti::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "string-type")
    {
        string_type = value;
        string_type.value_namespace = name_space;
        string_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ascii-string")
    {
        ascii_string = value;
        ascii_string.value_namespace = name_space;
        ascii_string.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hex-string")
    {
        hex_string = value;
        hex_string.value_namespace = name_space;
        hex_string.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduExpectedTti::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "string-type")
    {
        string_type.yfilter = yfilter;
    }
    if(value_path == "ascii-string")
    {
        ascii_string.yfilter = yfilter;
    }
    if(value_path == "hex-string")
    {
        hex_string.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduExpectedTti::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "string-type" || name == "ascii-string" || name == "hex-string")
        return true;
    return false;
}

const Enum::YLeaf InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration::TunnelingEthertype::Y_0x9100 {37120, "0x9100"};
const Enum::YLeaf InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration::TunnelingEthertype::Y_0x9200 {37376, "0x9200"};


}
}

